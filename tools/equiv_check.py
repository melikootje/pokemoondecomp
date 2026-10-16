#!/venv-python
"""Behavioural equivalence check: run retail bytes and the compiled reconstruction in Unicorn
on random inputs and compare return value (non-void only) and the memory they touch.

usage: equiv_check.py <source.cpp> [trials]
"""
import os, random, re, subprocess, sys, tempfile
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UcError
from unicorn.arm_const import *
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
src_path = sys.argv[1]; trials = int(sys.argv[2]) if len(sys.argv) > 2 else 400
CODE = open(f'{ROOT}/extracted/exefs/code.bin', 'rb').read()
import csv
queue = {r['address'].lower(): r for r in csv.DictReader(open(f'{ROOT}/analysis/function_queue.csv'))}
flags = subprocess.check_output(['python3', f'{ROOT}/scripts/manage_build.py', 'flags'], text=True).split()
text = open(f'{ROOT}/{src_path}').read()
BUF, BUFSZ, STACK, CODEBASE, RET = 0x10000000, 0x40000, 0x20000000, 0x30000000, 0x50000000

_BUFS = {}
def make_buf(seed):
    if seed not in _BUFS:
        rng = random.Random(seed); raw = bytearray(rng.randbytes(BUFSZ))
        for i in range(0, BUFSZ, 4):  # half the words become in-range pointers so pointer chains stay live
            if raw[i + 3] & 1: raw[i:i + 4] = (BUF + (int.from_bytes(raw[i:i + 3], 'little') & 0x3FFFC)).to_bytes(4, 'little')
        _BUFS[seed] = bytes(raw)
    return _BUFS[seed]

def run(code, entry_off, args, seed, wide=False, fret=False):
    mu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
    mu.mem_map(BUF, BUFSZ); mu.mem_map(STACK, 0x10000); mu.mem_map(CODEBASE, 0x10000); mu.mem_map(RET, 0x1000)
    mu.mem_write(BUF, make_buf(seed % 16))
    mu.mem_write(CODEBASE, code); mu.mem_write(RET, b'\x1e\xff\x2f\xe1')
    mu.reg_write(UC_ARM_REG_C1_C0_2, mu.reg_read(UC_ARM_REG_C1_C0_2) | (0xF << 20))  # enable VFP
    mu.reg_write(UC_ARM_REG_FPEXC, 0x40000000)
    frng = random.Random(seed * 7 + len(args))
    for sreg in (UC_ARM_REG_S0, UC_ARM_REG_S1, UC_ARM_REG_S2): mu.reg_write(sreg, frng.getrandbits(32))
    mu.reg_write(UC_ARM_REG_R0, BUF + 0x1000)
    for r, v in zip((UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3), args): mu.reg_write(r, v)
    mu.reg_write(UC_ARM_REG_SP, STACK + 0x8000); mu.reg_write(UC_ARM_REG_LR, RET)
    try:
        mu.emu_start(CODEBASE + entry_off, RET, count=20000)
        if mu.reg_read(UC_ARM_REG_PC) != RET: return 'fault'  # did not return: treat as fault, never as a pass
    except UcError:
        return 'fault'
    ret = mu.reg_read(UC_ARM_REG_S0) if fret else mu.reg_read(UC_ARM_REG_R0) | (mu.reg_read(UC_ARM_REG_R1) << 32 if wide else 0)
    return ret, bytes(mu.mem_read(BUF, BUFSZ))

def argset(rng):
    pick = lambda: rng.choice([0, 1, 2, 3, 4, 5, 59, 60, 61, 99, 100, 101, 254, 255, 256, 0x7fffffff, 0x80000000, 0xffffffff,
                               rng.randrange(0, 64), rng.randrange(0, 1 << 32), rng.randrange(0, 300)])
    ptr = lambda: BUF + 0x2000 + 4 * rng.randrange(64)
    return [rng.choice([pick(), pick(), ptr()]), rng.choice([pick(), ptr(), 0]), rng.choice([pick(), ptr()])]

fails = 0
for ad_s in re.findall(r'POKEMOON_SPLIT_FUNCTION == (0x[0-9A-Fa-f]+)', text):
    ad = int(ad_s, 16); q = queue[ad_s.lower()]; n = int(q['size'])
    m = re.search(r'extern "C" ([\w\*\s]+?)\s\w+\([^)]*\) \{', text[text.index(ad_s):])
    rtype = m.group(1).replace('VFP', '').strip()
    void = rtype == 'void'
    wide = rtype == 'uint64_t'
    fret = rtype == 'float'
    with tempfile.TemporaryDirectory() as td:
        subprocess.run(['arm-none-eabi-g++', *flags, f'-DPOKEMOON_SPLIT_FUNCTION={ad:#x}', '-c', f'{ROOT}/{src_path}', '-o', f'{td}/a.o'], check=True)
        subprocess.run(['arm-none-eabi-objcopy', '-O', 'binary', '-j', '.text', f'{td}/a.o', f'{td}/a.bin'])
        mine = open(f'{td}/a.bin', 'rb').read()
    retail = CODE[ad - 0x100000: ad - 0x100000 + n + 64]  # includes the trailing literal pool
    rng = random.Random(ad); bad = None; both_fault = 0
    for t in range(trials):
        args = argset(rng)
        a = run(retail, 0, args, t, wide, fret); b = run(mine + b'\0' * 64, 0, args, t, wide, fret)
        if a == 'fault' or b == 'fault':
            if a != b: bad = (args, 'fault mismatch'); break
            both_fault += 1; continue
        if (not void and a[0] != b[0]) or a[1] != b[1]: bad = (args, 'ret %s/%s mem %s' % (hex(a[0]), hex(b[0]), a[1] == b[1])); break
    print(ad_s, 'EQUIVALENT' if not bad else f'MISMATCH {bad}', f'({trials - both_fault} live trials)')
    fails += bool(bad)
sys.exit(1 if fails else 0)
