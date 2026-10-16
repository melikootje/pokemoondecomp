#!/venv-python
"""Behavioural equivalence check: run retail bytes and the compiled reconstruction in Unicorn
on random inputs and compare return value (non-void only) and the memory they touch.

usage: equiv_check.py <source.cpp> [trials]
"""
import os, random, re, subprocess, sys, tempfile
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UcError
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
import zlib
hash_name = lambda n: zlib.crc32(n.encode())
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
src_path = sys.argv[1]; trials = int(sys.argv[2]) if len(sys.argv) > 2 else 400
CODE = open(f'{ROOT}/extracted/exefs/code.bin', 'rb').read()
import csv
queue = {r['address'].lower(): r for r in csv.DictReader(open(f'{ROOT}/analysis/function_queue.csv'))}
flags = subprocess.check_output(['python3', f'{ROOT}/scripts/manage_build.py', 'flags'], text=True).split()
text = open(f'{ROOT}/{src_path}').read()
BUF, BUFSZ, STACK, CODEBASE, RET = 0x10000000, 0x40000, 0x20000000, 0x30000000, 0x50000000
GLOB, GLOBEND = 0x596000, 0x704000  # retail .rodata/.data/.bss are mapped at their real addresses
STUBBASE = 0x30010000  # within +-32MB of CODEBASE so patched B/BL can reach it

def ptype(decl):  # 'bool useHighWord' -> 'bool'; unnamed 'bool' -> 'bool'
    toks = decl.replace('const', ' ').split()
    return toks[-2] if len(toks) >= 2 else (toks[0] if toks else '')
GLOB_INIT = None
STACK_MASKS = []  # per outgoing-from-caller stack slot: masks derived from the function's declared parameter types
_GLOBS = {}
def _glob_init(variant=0):
    if variant in _GLOBS: return _GLOBS[variant]
    rng = random.Random(1234 + variant)
    img = bytearray(CODE[GLOB - 0x100000:0x636000 - 0x100000])  # real .rodata contents (constant tables)
    bss = bytearray(rng.randbytes(GLOBEND - 0x636000))  # .data/.bss are runtime state: pointer-rich random
    for i in range(0, len(bss), 4):  # singleton/instance pointers: make many words valid in-range pointers
        if bss[i + 3] & 1: bss[i:i + 4] = (BUF + (int.from_bytes(bss[i:i + 3], 'little') & 0x3FFFC)).to_bytes(4, 'little')
    _GLOBS[variant] = bytes(img + bss)
    return _GLOBS[variant]
_BUFS = {}
def make_buf(seed):
    if seed not in _BUFS:
        rng = random.Random(seed); raw = bytearray(rng.randbytes(BUFSZ))
        for i in range(0, BUFSZ, 4):  # half the words become in-range pointers so pointer chains stay live
            if raw[i + 3] & 1: raw[i:i + 4] = (BUF + (int.from_bytes(raw[i:i + 3], 'little') & 0x3FFFC)).to_bytes(4, 'little')
        _BUFS[seed] = bytes(raw)
    return _BUFS[seed]

def run(code, entry_off, args, seed, wide=False, fret=False, stubs=(), r0=None):
    mu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
    mu.mem_map(BUF, BUFSZ); mu.mem_map(STACK, 0x10000); mu.mem_map(CODEBASE, 0x10000); mu.mem_map(RET, 0x1000)
    mu.mem_write(BUF, make_buf(seed % 16))
    mu.mem_write(CODEBASE, code); mu.mem_write(RET, b'\x1e\xff\x2f\xe1')
    mu.mem_map(GLOB, GLOBEND - GLOB)
    mu.mem_write(GLOB, _glob_init(seed % 16))
    events = []
    if stubs:
        mu.mem_map(STUBBASE, 0x1000); mu.mem_write(STUBBASE, b'\x1e\xff\x2f\xe1' * (len(stubs) * 2))
        def on_stub(uc, addr, size, ud):
            name = stubs[(addr - STUBBASE) // 8]
            norm = lambda v: 'SP' if STACK <= v < STACK + 0x10000 else v  # stack addresses differ between builds
            k, isfloat, widths = ARITY.get(name, (4, True, [4] * 8))  # compare only the registers the callee actually takes
            a = tuple(norm(uc.reg_read(r)) for r in (UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3)[:min(k, 4)]) + ((uc.reg_read(UC_ARM_REG_S0),) if isfloat else ())
            if k > 4:  # outgoing stack arguments live at [sp] at the call
                sp = uc.reg_read(UC_ARM_REG_SP)
                a += tuple(int.from_bytes(uc.mem_read(sp + 4 * i, 4), 'little') for i in range(k - 4))
            a += tuple(bytes(uc.mem_read(uc.reg_read(r), widths[j])) for j, r in enumerate((UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3)[:min(k, 4)])
                       if STACK <= uc.reg_read(r) < STACK + 0x10000 - 16)  # contents of by-pointer stack temporaries
            events.append((name, a))
            h = (hash_name(name) + len(events) * 0x9E3779B1) & 0xFFFFFFFF
            if seed % 2: h = BUF + (h & 0x3FFFC)  # odd trials: callees return valid pointers so deref chains stay live
            else: h = h % 6                       # even trials: small values so enum/flag branches get exercised
            uc.reg_write(UC_ARM_REG_R0, h); uc.reg_write(UC_ARM_REG_R1, (h * 31) & 0xFFFFFFFF)
        mu.hook_add(UC_HOOK_CODE, on_stub, begin=STUBBASE, end=STUBBASE + 0x1000)
    mu.reg_write(UC_ARM_REG_C1_C0_2, mu.reg_read(UC_ARM_REG_C1_C0_2) | (0xF << 20))  # enable VFP
    mu.reg_write(UC_ARM_REG_FPEXC, 0x40000000)
    frng = random.Random(seed * 7 + len(args))
    for sreg in (UC_ARM_REG_S0, UC_ARM_REG_S1, UC_ARM_REG_S2): mu.reg_write(sreg, frng.getrandbits(32))
    mu.reg_write(UC_ARM_REG_R0, BUF + 0x1000 if r0 is None else r0)
    for r, v in zip((UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3), args): mu.reg_write(r, v)
    mu.reg_write(UC_ARM_REG_SP, STACK + 0x8000); mu.reg_write(UC_ARM_REG_LR, RET)
    srng = random.Random(seed * 13 + 5)
    words = [(srng.choice([0, 1, 2, 3, 7, 60, 255]) if srng.random() < .6 else BUF + 4 * srng.randrange(1000)) for _ in range(8)]
    for j, mask in enumerate(STACK_MASKS[:8]): words[j] = mask(words[j])
    mu.mem_write(STACK + 0x8000, b''.join(w.to_bytes(4, 'little') for w in words))
    try:
        mu.emu_start(CODEBASE + entry_off, RET, count=20000)
        if mu.reg_read(UC_ARM_REG_PC) != RET: return 'fault'  # did not return: treat as fault, never as a pass
    except UcError:
        return 'fault'
    ret = mu.reg_read(UC_ARM_REG_S0) if fret else mu.reg_read(UC_ARM_REG_R0) | (mu.reg_read(UC_ARM_REG_R1) << 32 if wide else 0)
    return ret, bytes(mu.mem_read(BUF, BUFSZ)) + bytes(mu.mem_read(GLOB, GLOBEND - GLOB)), tuple(events)

def argset(rng):
    pick = lambda: rng.choice([0, 1, 2, 3, 4, 5, 59, 60, 61, 99, 100, 101, 254, 255, 256, 0x7fffffff, 0x80000000, 0xffffffff,
                               rng.randrange(0, 64), rng.randrange(0, 1 << 32), rng.randrange(0, 300)])
    ptr = lambda: BUF + 0x2000 + 4 * rng.randrange(64)
    return [rng.choice([pick(), pick(), ptr()]), rng.choice([pick(), ptr(), 0]), rng.choice([pick(), ptr()])]

fails = 0
ARITY = {}
for decl in re.finditer(r'^\s*[\w\*\s]+?\s\**\w+\(([^)]*)\)\s*__asm__\("([^"]+)"\);', text, re.M):
    params = [x.strip() for x in decl.group(1).split(',') if x.strip() and x.strip() != 'void']
    ARITY[decl.group(2)] = (min(8, len(params)), any(x.split()[-1] == 'float' or x == 'float' for x in params if '*' not in x),
                            [12 if ('float' in x and '*' in x) else 4 for x in params])  # bytes to compare behind stack pointers
syms = {r['target_address'].lower(): r['mangled_name'] for r in csv.DictReader(open(f'{ROOT}/symbols/master_symbols.csv')) if r['target_address']}
REV = {v: int(k, 16) for k, v in syms.items()}
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
        td_obj = f'{td}/a.o'
        rel_txt = subprocess.run(['arm-none-eabi-objdump', '-r', td_obj], capture_output=True, text=True).stdout
    retail = bytearray(CODE[ad - 0x100000: ad - 0x100000 + n + 64])  # includes the trailing literal pool
    names = []  # stub table shared by both sides, keyed by callee symbol
    def stub_for(name):
        if name not in names: names.append(name)
        return STUBBASE + 8 * names.index(name)
    def patch(buf, off, target):
        w = int.from_bytes(buf[off:off + 4], 'little')
        imm = ((target - (CODEBASE + off + 8)) >> 2) & 0xFFFFFF
        buf[off:off + 4] = ((w & 0xFF000000) | imm).to_bytes(4, 'little')
    for off in range(0, n, 4):  # retail: redirect direct branches that leave the function
        w = int.from_bytes(retail[off:off + 4], 'little')
        if (w & 0x0E000000) == 0x0A000000 and (w >> 28) != 0xF:
            imm = w & 0xFFFFFF; imm = imm - (1 << 24) if imm & 0x800000 else imm
            tgt = ad + off + 8 + imm * 4
            if not (ad <= tgt < ad + n):
                patch(retail, off, stub_for(syms.get('0x%08x' % tgt) or 'FUN_%08x' % tgt))
    mine = bytearray(mine)
    rel = rel_txt; skip_data = False
    for line in rel.splitlines():
        mm = re.match(r'([0-9a-f]+) (R_ARM_\w+)\s+(\S+)', line)
        if not mm: continue
        if mm.group(2) in ('R_ARM_CALL', 'R_ARM_JUMP24', 'R_ARM_PLT32'): patch(mine, int(mm.group(1), 16), stub_for(mm.group(3)))
        elif mm.group(2) == 'R_ARM_ABS32':  # literal-pool address of a global: place it at the retail address
            sym = mm.group(3); off = int(mm.group(1), 16)
            m2 = re.fullmatch(r'(?:DAT|FUN|PTR|LAB)_([0-9a-fA-F]{8})', sym)
            tgt = int(m2.group(1), 16) if m2 else REV.get(sym)
            if tgt is None or not (0x100000 <= tgt < GLOBEND): print('   (unverifiable: unresolved symbol %s)' % sym); skip_data = True
            else: mine[off:off + 4] = ((tgt + int.from_bytes(mine[off:off + 4], 'little')) & 0xFFFFFFFF).to_bytes(4, 'little')
        else: print('   (unverifiable: data relocation %s)' % mm.group(2)); skip_data = True
    stubs = tuple(names)
    if skip_data:
        print(ad_s, 'UNVERIFIABLE (data relocation)'); fails += 1; continue
    sig = re.search(r'extern "C" [\w\*\s]+?\s\**\w+\(([^)]*)\)\s*(?:__attribute__\(\([^)]*\)\)\s*)?\{', text[text.index(ad_s):])
    ptypes = [x.strip() for x in sig.group(1).split(',') if x.strip()] if sig else []
    core = [t for t in ptypes if t != 'float' and t != 'double']  # floats travel in VFP registers under aapcs-vfp
    r0_scalar = bool(core) and '*' not in core[0] and core[0] not in ('Obj', 'Obj*')
    INTERESTING = [0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 34, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 85, 86, 89, 95, 96, 97, 98, 99, 100, 106, 107, 108, 112, 113, 114, 115, 116, 117, 118, 144, 145, 146, 147, 148, 149, 199, 200, 255, 256, 0x7FFFFFFF, 0xFFFFFFFF]
    def conform(args):  # callers extend narrow arguments per the AAPCS; honour the declared parameter types
        out = list(args)
        for k in (1, 2, 3):
            if k < len(core) and '*' not in core[k]:
                t = ptype(core[k])
                v = out[k - 1]
                if t == 'bool': v &= 1
                elif t == 'uint8_t': v &= 0xFF
                elif t == 'uint16_t': v &= 0xFFFF
                elif t == 'int8_t': v = (v & 0xFF) - 256 & 0xFFFFFFFF if v & 0x80 else v & 0xFF
                elif t == 'int16_t': v = (v & 0xFFFF) - 65536 & 0xFFFFFFFF if v & 0x8000 else v & 0xFFFF
                out[k - 1] = v
        return out
    def first_arg(rng):
        if not r0_scalar: return None
        v = rng.choice(INTERESTING + [rng.randrange(0, 300), rng.randrange(0, 1 << 32)])
        t = ptype(core[0])
        return {'bool': v & 1, 'uint8_t': v & 0xFF, 'uint16_t': v & 0xFFFF}.get(t, v)
    def mask_for(t):
        t = ptype(t)
        return {'bool': lambda v: v & 1, 'uint8_t': lambda v: v & 0xFF, 'uint16_t': lambda v: v & 0xFFFF}.get(t, lambda v: v)
    STACK_MASKS[:] = [mask_for(t) if '*' not in t else (lambda v: v) for t in core[4:]]
    rng = random.Random(ad); bad = None; both_fault = 0
    for t in range(trials):
        args = conform(argset(rng)); first = first_arg(rng)
        a = run(bytes(retail), 0, args, t, wide, fret, stubs, first); b = run(bytes(mine) + b'\0' * 64, 0, args, t, wide, fret, stubs, first)
        if a == 'fault' or b == 'fault':
            if a != b: bad = (args, 'fault mismatch'); break
            both_fault += 1; continue
        if (not void and a[0] != b[0]) or a[1] != b[1] or a[2] != b[2]: bad = (args, 'ret %s/%s mem %s calls %s | %s' % (hex(a[0]), hex(b[0]), a[1] == b[1], a[2][:3], b[2][:3])); break
    live = trials - both_fault
    if not bad and live < min(10, trials // 4): bad = ('too few live trials', live)  # both sides faulting proves nothing
    print(ad_s, 'EQUIVALENT' if not bad else f'MISMATCH {bad}', f'({live} live trials)')
    fails += bool(bad)
sys.exit(1 if fails else 0)
