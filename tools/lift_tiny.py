"""Lift tiny leaf functions (setters/getters) from retail code.bin into guarded C++."""
import re,sys,subprocess,csv
ROOT=sys.argv[1]; addrs=open(sys.argv[2]).read().split()
rows={r['address']:r for r in csv.DictReader(open(f'{ROOT}/config/reconstructed_functions.csv'))}
T={'ldr':'uint32_t','ldrb':'uint8_t','ldrh':'uint16_t','ldrsb':'int8_t','ldrsh':'int16_t'}
S={'str':'uint32_t','strb':'uint8_t','strh':'uint16_t'}
def lift(a):
    r=rows[a]; n=int(r['retail_size'],16); ad=int(a,16)
    out=subprocess.run(['arm-none-eabi-objdump','-D','-b','binary','-marm','--adjust-vma','0x100000','--start-address',hex(ad),'--stop-address',hex(ad+n),f'{ROOT}/extracted/exefs/code.bin'],capture_output=True,text=True).stdout
    ins=[' '.join(l.split('\t')[2:]).split('@')[0].strip() for l in out.splitlines() if re.match(r'\s*[0-9a-f]+:\t',l)]
    reg={'r0':'(uint32_t)arg0','r1':'arg1','r2':'arg2','r3':'arg3'}
    stmts=[]; ret=None; flt=False; cond=None
    for i in ins:
        m=i.split(None,1); op=m[0]; ar=[x.strip() for x in re.split(r',(?![^\[]*\])',m[1])] if len(m)>1 else []
        num=lambda s:int(s.lstrip('#'),0)
        if op=='bx': continue
        if op in T and op!='ldr' or op=='ldr':
            mm=re.match(r'\[(r\d+)(?:, #(-?\w+))?\]',ar[1]); off=num(mm.group(2)) if mm.group(2) else 0
            reg[ar[0]]=f'(uint32_t)*({T[op]}*)({reg[mm.group(1)]} + {off:#x})' if op!='ldrsb' else f'(int32_t)*(int8_t*)({reg[mm.group(1)]} + {off:#x})'; ret=ar[0]
        elif op in S:
            mm=re.match(r'\[(r\d+)(?:, #(-?\w+))?\]',ar[1]); off=num(mm.group(2)) if mm.group(2) else 0
            stmts.append(f'*({S[op]}*)({reg[mm.group(1)]} + {off:#x}) = {reg[ar[0]]};')
        elif op=='vldr':
            mm=re.match(r'\[(r\d+)(?:, #(-?\w+))?\]',ar[1]); off=num(mm.group(2)) if mm.group(2) else 0
            reg['s0']=f'*(float*)({reg[mm.group(1)]} + {off:#x})'; ret='s0'; flt=True
        elif op=='vstr':
            mm=re.match(r'\[(r\d+)(?:, #(-?\w+))?\]',ar[1]); off=num(mm.group(2)) if mm.group(2) else 0
            stmts.append(f'*(float*)({reg[mm.group(1)]} + {off:#x}) = arg_f;'); 
        elif op=='add':
            if ar[2].startswith('#'): reg[ar[0]]=f'({reg[ar[1]]} + {num(ar[2]):#x})'
            else:
                sh=re.match(r'lsl #(\d+)',ar[3]) if len(ar)>3 else None
                reg[ar[0]]=f'({reg[ar[1]]} + ({reg[ar[2]]} << {sh.group(1)}))' if sh else f'({reg[ar[1]]} + {reg[ar[2]]})'
            ret=ar[0]
        elif op=='and': reg[ar[0]]=f'({reg[ar[1]]} & {num(ar[2]):#x})'; ret=ar[0]
        elif op=='bic': reg[ar[0]]=f'({reg[ar[1]]} & {~num(ar[2])&0xffffffff:#x})'; ret=ar[0]
        elif op=='lsr': reg[ar[0]]=f'({reg[ar[1]]} >> {num(ar[2])})'; ret=ar[0]
        elif op=='cmp': cond=reg[ar[0]]
        elif op=='movne': reg[ar[0]]=f'({cond} != 0)'; ret=ar[0]
        elif op=='mov': reg[ar[0]]=f'{num(ar[1])}'; ret=ar[0]
        else: raise SystemExit(f'{a}: unhandled {i}')
    rt='float' if flt else ('uint32_t' if ret else 'void')
    params='uint8_t* arg0'+(', float arg_f' if any('arg_f' in s for s in stmts) else '')
    for k in (1,2,3):
        if any(f'arg{k}' in s for s in stmts+[reg[ret] if ret else '']): params+=f', uint32_t arg{k}'
    if any('arg_f' in s for s in stmts): params='uint8_t* arg0, float arg_f'
    body=' '.join(stmts)+(f' return {reg[ret]};' if ret else '')
    name=f'Speculative_{ad:08x}'; sym=r['symbol']
    return f'''#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x{ad:08X}
extern "C" {rt} {name}({params}) __asm__("{sym}");
extern "C" {rt} {name}({params}) {{ {body.strip()} }}
#endif
'''
print('\n'.join(lift(a) for a in addrs))
