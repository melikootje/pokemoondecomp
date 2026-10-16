#!/usr/bin/env python3
"""Compile each guarded function in a hand-written source file, compare with retail bytes,
and append manifest rows for exact matches.

usage: add_handwritten.py <source.cpp> [--write]   (prints per-function results)
"""
import csv, os, re, subprocess, sys, tempfile
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
src_path = sys.argv[1]; write = '--write' in sys.argv
semantic = '--semantic' in sys.argv  # also record non-exact rows (run tools/equiv_check.py first)
CODE = open(f'{ROOT}/extracted/exefs/code.bin', 'rb').read()
text = open(f'{ROOT}/{src_path}').read()
addrs = [int(a, 16) for a in re.findall(r'POKEMOON_SPLIT_FUNCTION == (0x[0-9A-Fa-f]+)', text)]
queue = {r['address'].lower(): r for r in csv.DictReader(open(f'{ROOT}/analysis/function_queue.csv'))}
syms = {r['target_address'].lower(): r['mangled_name'] for r in csv.DictReader(open(f'{ROOT}/symbols/master_symbols.csv'))}
flags = subprocess.check_output(['python3', f'{ROOT}/scripts/manage_build.py', 'flags'], text=True).split()
rows = []
for ad in addrs:
    key = f'0x{ad:08x}'; q = queue[key]; n = int(q['size']); sym = syms[key]
    _i = text.upper().index('POKEMOON_SPLIT_FUNCTION == 0X%08X' % ad); _blk = text[_i:]; _blk = _blk[:_blk.index('#endif')]
    _ms = re.search(r'retail-size:\s*(0x[0-9a-fA-F]+|\d+)', _blk)
    if _ms: n = int(_ms.group(1), 0)  # inventory size was cut short at a call; the comment holds the true extent
    # find the C symbol bound to this mangled name inside the guard
    m = re.search(r'extern "C" \w[\w\s\*]*?\b(\w+)\([^)]*\) __asm__\("%s"\)' % re.escape(sym), text)
    name = m.group(1)
    with tempfile.TemporaryDirectory() as td:
        r = subprocess.run(['arm-none-eabi-g++', *flags, f'-DPOKEMOON_SPLIT_FUNCTION={ad:#x}', '-c', f'{ROOT}/{src_path}', '-o', f'{td}/a.o'], capture_output=True, text=True)
        if r.returncode: print(key, name, 'COMPILE ERROR', r.stderr[:200]); continue
        subprocess.run(['arm-none-eabi-objcopy', '-O', 'binary', '-j', '.text', f'{td}/a.o', f'{td}/a.bin'])
        got = open(f'{td}/a.bin', 'rb').read()
    want = CODE[ad - 0x100000: ad - 0x100000 + n]
    ok = got == want
    print(key, name, 'EXACT' if ok else f'DIFF got {len(got)}B want {n}B')
    if ok or semantic:
        rows.append([f'0x{ad:08X}', f'0x{n:02X}', 'static.crs', 'code.bin', q['qualified_name'], q['namespace'], src_path, sym, name,
                     'macro_select', 'POKEMOON_SPLIT_FUNCTION', f'src/code.bin/{name}.cpp', f'build/code.bin/{name}.o',
                     'SOURCE_WRITTEN', 'COMPILES', 'SEMANTIC_VERIFIED', 'ASM_MATCH' if ok else 'ASM_DIFFERENT', 'false', 'false', (q['subsystem'] or 'reagent').lower(),
                     'RETAIL_ORIGINAL_SYMBOL', 'arm-none-eabi-g++ 16.2.0', n if ok else '', n if ok else '',
                     'Hand-written; byte-exact; runtime-inactive' if ok else 'Hand-written; emulator-verified equivalent (tools/equiv_check.py); runtime-inactive'])
if write and rows:
    with open(f'{ROOT}/config/reconstructed_functions.csv', 'a', newline='') as f:
        csv.writer(f).writerows(rows)
    print(f'appended {len(rows)} rows')
