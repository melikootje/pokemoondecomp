# Behavioural verification of nonmatching reconstructions

The retail game was not built with GCC, so most reconstructions cannot be
byte-identical. `tools/equiv_check.py` gives them a concrete semantic check
instead of relying on review alone.

For each guarded function in a source file it:

1. compiles the function with the project flags and extracts `.text`;
2. runs the retail bytes and the compiled bytes in Unicorn (ARM, VFP enabled)
   on the same random inputs, register arguments, stack arguments and a shared
   random memory image in which half the words are in-range pointers;
3. replaces every direct `bl`/`b` that leaves the function with a stub on both
   sides, recording callee name, the registers the callee actually takes (from
   its declaration), outgoing stack arguments and the contents of stack
   temporaries passed by pointer;
4. compares the return value (core or `s0`), all memory, and the call sequence.

A function passes only if every trial matches and at least 10 trials ran to a
return (runs where both sides fault prove nothing and are not counted). Data
relocations, indirect calls (`blx rN`) and literal-pool globals are not
supported, and such functions are reported as unverifiable rather than passed.

```sh
tools/equiv_check.py src/savedata/call_batch_005.cpp 300
tools/add_handwritten.py src/savedata/call_batch_005.cpp --semantic --write
```

`add_handwritten.py` records `ASM_MATCH` when the bytes are identical and
`SEMANTIC_VERIFIED`/`ASM_DIFFERENT` otherwise; neither is marked
runtime-ready. Float arguments use `__attribute__((pcs("aapcs-vfp")))` so the
retail calling convention is kept under the project's softfp build.

Other helpers: `tools/lift_batch.py` (byte-exact leaf lifting),
`tools/make_ghidra_elf.py` (ELF wrapper with the full function inventory so
Ghidra/REA can decompile any function).

Unicorn is the only extra dependency; install it into the build venv.
