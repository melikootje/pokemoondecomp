#!/usr/bin/env python3
"""Wrap extracted/exefs/code.bin in a minimal ARM ELF (text/rodata/data/bss at retail addresses)
so Ghidra/REA can load it. usage: make_ghidra_elf.py <out.elf>"""
import os, struct, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
code = open(f'{ROOT}/extracted/exefs/code.bin', 'rb').read()
segs = [(0x100000, 0, 0x4957A0, 0x496000, 5), (0x596000, 0x496000, 0x9FE88, 0xA0000, 4),
        (0x636000, 0x536000, len(code) - 0x536000, 0x3D000, 6)]
bss = (0x673000, 0x300F4)
import csv
syms = {r['target_address'].lower(): r['mangled_name'] for r in csv.DictReader(open(f'{ROOT}/symbols/master_symbols.csv')) if r['target_address']}
funcs = [(int(r['address'], 16), int(r['size']), syms.get(r['address'].lower()) or 'FUN_%08x' % int(r['address'], 16))
         for r in csv.DictReader(open(f'{ROOT}/analysis/function_queue.csv'))]
ph_n = len(segs) + 1
ph_end = 52 + 32 * ph_n
off = (ph_end + 0xFFF) & ~0xFFF
body = b''; phs = b''; sec_off = []
for va, fo, fsz, msz, fl in segs:
    phs += struct.pack('<8I', 1, off, va, va, fsz, msz, fl, 0x1000)
    body += b'\0' * (off - ph_end - len(body)); sec_off.append(off); body += code[fo:fo + fsz]
    off = (ph_end + len(body) + 0xFFF) & ~0xFFF
phs += struct.pack('<8I', 1, 0, bss[0], bss[0], 0, bss[1], 6, 0x1000)
strtab = b'\0'; symtab = b'\0' * 16
for a, sz, name in funcs:
    symtab += struct.pack('<IIIBBH', len(strtab), a, sz, 0x12, 0, 1); strtab += name.encode() + b'\0'
shstr = b'\0.text\0.rodata\0.data\0.bss\0.symtab\0.strtab\0.shstrtab\0'
nm = lambda n: shstr.index(b'\0' + n.encode() + b'\0') + 1
tail_off = ph_end + len(body)
tail = symtab + strtab + shstr
sym_o, str_o, shs_o = tail_off, tail_off + len(symtab), tail_off + len(symtab) + len(strtab)
sh = struct.pack('<10I', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
for n, o, (va, fo, fsz, msz, fl), flags in zip(('.text', '.rodata', '.data'), sec_off, segs, (6, 2, 3)):
    sh += struct.pack('<10I', nm(n), 1, flags, va, o, fsz, 0, 0, 4, 0)
sh += struct.pack('<10I', nm('.bss'), 8, 3, bss[0], 0, bss[1], 0, 0, 4, 0)
sh += struct.pack('<10I', nm('.symtab'), 2, 0, 0, sym_o, len(symtab), 6, 1, 4, 16)
sh += struct.pack('<10I', nm('.strtab'), 3, 0, 0, str_o, len(strtab), 0, 0, 1, 0)
sh += struct.pack('<10I', nm('.shstrtab'), 3, 0, 0, shs_o, len(shstr), 0, 0, 1, 0)
shoff = tail_off + len(tail)
eh = b'\x7fELF\x01\x01\x01\0' + b'\0' * 8 + struct.pack('<HHIIIIIHHHHHH', 2, 40, 1, 0x100000, 52, shoff, 0x5000400, 52, 32, ph_n, 40, 8, 7)
open(sys.argv[1], 'wb').write(eh + phs + body + tail + sh)
