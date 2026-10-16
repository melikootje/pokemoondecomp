#!/usr/bin/env python3
"""Lift single-block leaf functions from retail code.bin, keep only byte-exact compiles.

usage: lift_batch.py <out.cpp> <max> [flags...]; writes guarded C++ and manifest rows to stdout CSV file.
"""
import csv, os, re, subprocess, sys, tempfile
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CODE = open(f'{ROOT}/extracted/exefs/code.bin', 'rb').read()
LD = {'ldr': 'uint32_t', 'ldrb': 'uint8_t', 'ldrh': 'uint16_t', 'ldrsb': 'int8_t', 'ldrsh': 'int16_t'}
ST = {'str': 'uint32_t', 'strb': 'uint8_t', 'strh': 'uint16_t'}
MEM = re.compile(r'\[(r\d+)(?:, #(-?\w+))?\]')

def disasm(ad, n):
    out = subprocess.run(['arm-none-eabi-objdump', '-D', '-b', 'binary', '-marm', '--adjust-vma', '0x100000',
                          '--start-address', hex(ad), '--stop-address', hex(ad + n), f'{ROOT}/extracted/exefs/code.bin'],
                         capture_output=True, text=True).stdout
    return [' '.join(l.split('\t')[2:]).split('@')[0].strip() for l in out.splitlines() if re.match(r'\s*[0-9a-f]+:\t', l)]

def lift(ad, n, sym):
    ins = disasm(ad, n)
    reg = {'r0': '(uint32_t)arg0', 'r1': 'arg1', 'r2': 'arg2', 'r3': 'arg3'}
    stmts, ret, cond, flt = [], None, None, False
    num = lambda s: int(s.lstrip('#'), 0)
    for i in ins:
        m = i.split(None, 1); op = m[0]
        ar = [x.strip() for x in re.split(r',(?![^\[]*\])', m[1])] if len(m) > 1 else []
        if op == 'bx':
            if ar != ['lr']: return None
            continue
        if op in LD:
            mm = MEM.match(ar[1]); 
            if not mm or mm.group(1) not in reg: return None
            off = num(mm.group(2)) if mm.group(2) else 0
            t = LD[op]; reg[ar[0]] = f'(uint32_t)*({t}*)({reg[mm.group(1)]} + {off:#x})' if t[0] == 'u' else f'(int32_t)*({t}*)({reg[mm.group(1)]} + {off:#x})'; ret = ar[0]
        elif op in ST:
            mm = MEM.match(ar[1])
            if not mm or mm.group(1) not in reg or ar[0] not in reg: return None
            off = num(mm.group(2)) if mm.group(2) else 0
            stmts.append(f'*({ST[op]}*)({reg[mm.group(1)]} + {off:#x}) = {reg[ar[0]]};')
        elif op == 'add' and len(ar) >= 3 and ar[1] in reg:
            if ar[2].startswith('#'): reg[ar[0]] = f'({reg[ar[1]]} + {num(ar[2]):#x})'
            elif ar[2] in reg:
                sh = re.match(r'lsl #(\d+)', ar[3]) if len(ar) > 3 else None
                reg[ar[0]] = f'({reg[ar[1]]} + ({reg[ar[2]]} << {sh.group(1)}))' if sh else f'({reg[ar[1]]} + {reg[ar[2]]})'
            else: return None
            ret = ar[0]
        elif op == 'sub' and ar[2].startswith('#') and ar[1] in reg: reg[ar[0]] = f'({reg[ar[1]]} - {num(ar[2]):#x})'; ret = ar[0]
        elif op == 'and' and ar[2].startswith('#') and ar[1] in reg: reg[ar[0]] = f'({reg[ar[1]]} & {num(ar[2]):#x})'; ret = ar[0]
        elif op == 'orr' and ar[2].startswith('#') and ar[1] in reg: reg[ar[0]] = f'({reg[ar[1]]} | {num(ar[2]):#x})'; ret = ar[0]
        elif op == 'bic' and ar[2].startswith('#') and ar[1] in reg: reg[ar[0]] = f'({reg[ar[1]]} & {~num(ar[2]) & 0xffffffff:#x})'; ret = ar[0]
        elif op == 'lsr' and ar[1] in reg: reg[ar[0]] = f'({reg[ar[1]]} >> {num(ar[2])})'; ret = ar[0]
        elif op == 'mov' and ar[1].startswith('#'): reg[ar[0]] = f'{num(ar[1])}u'; ret = ar[0]
        elif op == 'mov' and ar[1] in reg: reg[ar[0]] = reg[ar[1]]; ret = ar[0]
        else: return None
    if flt: return None
    if ret and ret != 'r0': return None
    rt = 'uint32_t' if ret else 'void'
    body = ' '.join(stmts) + (f' return {reg[ret]};' if ret else '')
    params = 'uint8_t* arg0'
    for k in (1, 2, 3):
        if f'arg{k}' in body: params += f', uint32_t arg{k}'
    if 'arg0' not in body and not params.endswith('arg0'): pass
    name = f'Lifted_{ad:08x}'
    return rt, params, body.strip(), name

def main():
    out, limit = sys.argv[1], int(sys.argv[2])
    done = {r['address'].lower() for r in csv.DictReader(open(f'{ROOT}/config/reconstructed_functions.csv'))}
    syms = {r['target_address'].lower(): r['mangled_name'] for r in csv.DictReader(open(f'{ROOT}/symbols/master_symbols.csv'))}
    cands = [r for r in csv.DictReader(open(f'{ROOT}/analysis/function_queue.csv'))
             if r['address'].lower() not in done and int(r['size']) <= 16 and r['basic_block_count'] == '1'
             and r['callee_count'] == '0' and r['address'].lower() in syms and r['module'] == 'static.crs']
    flags = subprocess.check_output(['python3', f'{ROOT}/scripts/manage_build.py', 'flags'], text=True).split()
    good, rows = [], []
    for r in cands:
        if len(good) >= limit: break
        ad = int(r['address'], 16); n = int(r['size']); sym = syms[r['address'].lower()]
        res = lift(ad, n, sym)
        if not res: continue
        rt, params, body, name = res
        src = (f'extern "C" {rt} {name}({params}) __asm__("{sym}");\nextern "C" {rt} {name}({params}) {{ {body} }}\n')
        with tempfile.TemporaryDirectory() as td:
            open(f'{td}/a.cpp', 'w').write('typedef unsigned char uint8_t;typedef signed char int8_t;typedef unsigned short uint16_t;typedef short int16_t;typedef unsigned int uint32_t;typedef int int32_t;\n' + src)
            if subprocess.run(['arm-none-eabi-g++', *flags, '-c', f'{td}/a.cpp', '-o', f'{td}/a.o'], capture_output=True).returncode: continue
            subprocess.run(['arm-none-eabi-objcopy', '-O', 'binary', '-j', '.text', f'{td}/a.o', f'{td}/a.bin'])
            got = open(f'{td}/a.bin', 'rb').read()
        if got != CODE[ad - 0x100000: ad - 0x100000 + n]: continue
        good.append(f'#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x{ad:08X}\n{src}#endif\n')
        rows.append((r, name, sym))
    hdr = ('// Byte-exact leaf reconstructions lifted from retail code.bin by tools/lift_batch.py.\n'
           'typedef unsigned char uint8_t;\ntypedef signed char int8_t;\ntypedef unsigned short uint16_t;\ntypedef short int16_t;\n'
           'typedef unsigned int uint32_t;\ntypedef int int32_t;\n\n')
    open(out, 'w').write(hdr + '\n'.join(good))
    rel = os.path.relpath(out, ROOT)
    with open(out + '.rows.csv', 'w', newline='') as f:
        w = csv.writer(f)
        for r, name, sym in rows:
            ad = int(r['address'], 16); n = int(r['size'])
            w.writerow([f'0x{ad:08X}', f'0x{n:02X}', 'static.crs', 'code.bin', r['qualified_name'], r['namespace'], rel, sym, name,
                        'macro_select', 'POKEMOON_SPLIT_FUNCTION', f'src/code.bin/{name}.cpp', f'build/code.bin/{name}.o',
                        'SOURCE_WRITTEN', 'COMPILES', 'SEMANTIC_VERIFIED', 'ASM_MATCH', 'false', 'false', r['subsystem'].lower() or 'reagent',
                        'RETAIL_ORIGINAL_SYMBOL', 'arm-none-eabi-g++ 16.2.0', n, n, 'Leaf lifted from retail bytes; byte-exact; runtime-inactive'])
    print(f'{len(good)} exact of {len(cands)} candidates')
main()
