// Reconstructions that touch unnamed globals and callees. Unnamed targets use Ghidra-style labels
// (DAT_xxxxxxxx / FUN_xxxxxxxx) bound with __asm__, so they can be renamed once recovered.
// Checked against retail with tools/equiv_check.py, which maps the real .rodata/.data at retail addresses.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

typedef uint8_t Obj;
#define VFP __attribute__((pcs("aapcs-vfp")))

#define R32(p, off) (*reinterpret_cast<uint32_t*>((p) + (off)))
#define RPTR(p, off) (*reinterpret_cast<Obj**>((p) + (off)))

extern "C" {
extern Obj DAT_0063e864[] __asm__("DAT_0063e864");
void Assert(const char*, uint32_t, int32_t, const char*) __asm__("_ZN4gfl25debug9GFLassertEPKcjiS2_");
uint32_t FUN_00491f88(Obj*) __asm__("FUN_00491f88");
uint32_t FUN_00492010(Obj*, uint32_t) __asm__("FUN_00492010");
uint32_t FUN_00490c40(Obj*) __asm__("FUN_00490c40");
uint32_t FUN_004908e0(Obj*) __asm__("FUN_004908e0");
uint32_t FUN_004913d8(Obj*) __asm__("FUN_004913d8");
uint32_t CoreParam_GetNativeTalent(Obj*, uint32_t) __asm__("_ZNK3pml8pokepara9CoreParam20GetNativeTalentPowerENS0_7PowerIDE");
void FUN_0031a3b0(Obj*) __asm__("FUN_0031a3b0");
void FUN_0031a338(Obj*) __asm__("FUN_0031a338");
Obj* FUN_00491584(Obj*, uint32_t) __asm__("FUN_00491584");
uint32_t FUN_00491c44(Obj*) __asm__("FUN_00491c44");
uint32_t FUN_00491ef8(Obj*) __asm__("FUN_00491ef8");
void personal_LoadPersonalData(uint32_t, uint32_t) __asm__("_ZN3pml8personal16LoadPersonalDataE6MonsNoh");
uint32_t personal_GetPersonalParam(uint32_t) __asm__("_ZN3pml8personal16GetPersonalParamENS0_7ParamIDE");
void FUN_0031a94c(Obj*, uint32_t) __asm__("FUN_0031a94c");
Obj* FUN_003ad9d8() __asm__("FUN_003ad9d8");
void CriticalSection_Enter(Obj*) __asm__("_ZN2nn2os15CriticalSection5EnterEv");
void CriticalSection_Leave(Obj*) __asm__("_ZN2nn2os15CriticalSection5LeaveEv");
void FUN_003a8f4c(Obj*, uint32_t, uint32_t, uint32_t) __asm__("FUN_003a8f4c");
void FUN_003a90f4(Obj*, uint32_t) __asm__("FUN_003a90f4");
void FUN_003a90b0(Obj*) __asm__("FUN_003a90b0");
void FUN_003a9050(Obj*) __asm__("FUN_003a9050");
void FUN_003a8a14(Obj*) __asm__("FUN_003a8a14");
void FUN_003a8b6c(Obj*, uint32_t) __asm__("FUN_003a8b6c");
void FUN_003a8e38(Obj*) __asm__("FUN_003a8e38");
void FUN_003a8df4(Obj*) __asm__("FUN_003a8df4");
}

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004935AC
extern "C" uint32_t CoreParam_GetMonsNo(Obj* self) __asm__("_ZNK3pml8pokepara9CoreParam9GetMonsNoEv");
extern "C" uint32_t CoreParam_GetMonsNo(Obj* self) {
    return FUN_00491f88(RPTR(self, 12));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493638
extern "C" uint32_t CoreParam_GetWazaNo(Obj* self, uint8_t slot) __asm__("_ZNK3pml8pokepara9CoreParam9GetWazaNoEh");
extern "C" uint32_t CoreParam_GetWazaNo(Obj* self, uint8_t slot) {
    return FUN_00492010(RPTR(self, 12), slot);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004920F0
extern "C" uint32_t CoreParam_GetDirtType(Obj* self) __asm__("_ZNK3pml8pokepara9CoreParam11GetDirtTypeEv");
extern "C" uint32_t CoreParam_GetDirtType(Obj* self) {
    for (uint32_t i = 0; i < 5; i++) {
        if (!FUN_00490c40(RPTR(self, 12))) continue;
        if (!(FUN_004908e0(RPTR(self, 12)) & ((1u << i) & 0xFF))) continue;
        return FUN_00490c40(RPTR(self, 12));
    }
    return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493508
extern "C" bool CoreParam_CheckDirt(Obj* self) __asm__("_ZNK3pml8pokepara9CoreParam9CheckDirtEv");
extern "C" bool CoreParam_CheckDirt(Obj* self) {
    for (uint32_t i = 0; i < 5; i++) {
        if (!FUN_00490c40(RPTR(self, 12))) continue;
        if (FUN_004908e0(RPTR(self, 12)) & ((1u << i) & 0xFF)) return true;
    }
    return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492A1C
extern "C" uint32_t CoreParam_GetTalentPowerMaxNum(Obj* self) __asm__("_ZNK3pml8pokepara9CoreParam20GetTalentPowerMaxNumEv");
extern "C" uint32_t CoreParam_GetTalentPowerMaxNum(Obj* self) {
    uint32_t count = 0;
    for (uint32_t i = 0; i < 6; i++) {
        if (FUN_004913d8(RPTR(self, 12)) & ((1u << i) & 0xFF)) { count++; continue; }
        if (CoreParam_GetNativeTalent(self, i) >= 31) count++;
    }
    return count;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00491404
extern "C" uint32_t CoreParam_GetLumpingRibbon(Obj* self, uint32_t type) __asm__("_ZNK3pml8pokepara9CoreParam16GetLumpingRibbonENS0_13LumpingRibbonE");
extern "C" uint32_t CoreParam_GetLumpingRibbon(Obj* self, uint32_t type) {
    Obj* core = RPTR(self, 12);
    FUN_0031a3b0(core);
    uint32_t value = 0;
    if (type == 0) value = FUN_00491584(core, 0)[48];
    else if (type == 1) value = FUN_00491584(core, 0)[49];
    FUN_0031a338(core);  // other types hit an assert that is compiled out in retail
    return value;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031DCD4
extern "C" void CoreParam_ChangeSex(Obj* self, uint32_t sex) __asm__("_ZN3pml8pokepara9CoreParam9ChangeSexENS_3SexE");
extern "C" void CoreParam_ChangeSex(Obj* self, uint32_t sex) {
    if (FUN_00491c44(RPTR(self, 12)) == sex) return;
    uint32_t monsNo = FUN_00491f88(RPTR(self, 12));
    uint32_t form = FUN_00491ef8(RPTR(self, 12));
    personal_LoadPersonalData(monsNo, form);
    uint32_t ratio = personal_GetPersonalParam(20) & 0xFF;
    uint32_t low, high;
    if (sex == 0) { low = 0; high = 253; }
    else if (sex == 1) { low = 1; high = 254; }
    else { low = 255; high = 255; }
    if (low <= ratio && ratio <= high) FUN_0031a94c(RPTR(self, 12), sex);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A9924
extern "C" void Sound_StartBGMReq(uint32_t id, uint32_t fade) __asm__("_ZN5Sound11StartBGMReqEjNS_9FadeFrameE");
extern "C" void Sound_StartBGMReq(uint32_t id, uint32_t fade) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a90f4(*reinterpret_cast<Obj**>(DAT_0063e864), id);
    FUN_003a90b0(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a9050(*reinterpret_cast<Obj**>(DAT_0063e864));
    if (fade != 0) {
        FUN_003a8a14(*reinterpret_cast<Obj**>(DAT_0063e864));
        FUN_003a8b6c(*reinterpret_cast<Obj**>(DAT_0063e864), fade);
        FUN_003a8e38(*reinterpret_cast<Obj**>(DAT_0063e864));
    }
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

