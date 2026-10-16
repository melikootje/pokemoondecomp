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

#define R16(p, off) (*reinterpret_cast<uint16_t*>((p) + (off)))
#define R32(p, off) (*reinterpret_cast<uint32_t*>((p) + (off)))
#define RPTR(p, off) (*reinterpret_cast<Obj**>((p) + (off)))

extern "C" {
void Assert(const char*, uint32_t, int32_t, const char*) __asm__("_ZN4gfl25debug9GFLassertEPKcjiS2_");
extern Obj DAT_0063e864[] __asm__("DAT_0063e864");
Obj* FUN_003ad9d8() __asm__("FUN_003ad9d8");
void CriticalSection_Enter(Obj*) __asm__("_ZN2nn2os15CriticalSection5EnterEv");
void CriticalSection_Leave(Obj*) __asm__("_ZN2nn2os15CriticalSection5LeaveEv");
void FUN_003a8f4c(Obj*, uint32_t, uint32_t, uint32_t) __asm__("FUN_003a8f4c");
void FUN_003a8844(Obj*, uint32_t) __asm__("FUN_003a8844");
void FUN_003a90f4(Obj*, uint32_t) __asm__("FUN_003a90f4");
void FUN_003a90b0(Obj*) __asm__("FUN_003a90b0");
void FUN_003a9050(Obj*) __asm__("FUN_003a9050");
void FUN_003a8df4(Obj*) __asm__("FUN_003a8df4");
void FUN_003a8c58(Obj*, uint32_t) __asm__("FUN_003a8c58");
void FUN_003a8e38(Obj*) __asm__("FUN_003a8e38");
void FUN_003a88f0(Obj*) __asm__("FUN_003a88f0");
void FUN_003a8a14(Obj*) __asm__("FUN_003a8a14");
void FUN_003a8b6c(Obj*, uint32_t) __asm__("FUN_003a8b6c");
uint32_t FUN_00490c40(Obj*) __asm__("FUN_00490c40");
uint32_t FUN_004908e0(Obj*) __asm__("FUN_004908e0");
uint32_t FUN_00491be4(Obj*) __asm__("FUN_00491be4");
uint32_t FUN_00491f88(Obj*) __asm__("FUN_00491f88");
uint32_t FUN_00491ef8(Obj*) __asm__("FUN_00491ef8");
void personal_LoadGrowTable(uint32_t, uint32_t) __asm__("_ZN3pml8personal13LoadGrowTableE6MonsNoh");
uint32_t personal_GetMinExp(uint32_t) __asm__("_ZN3pml8personal9GetMinExpEh");
void FUN_0031a828(Obj*, uint32_t) __asm__("FUN_0031a828");
void FUN_0031c764(Obj*, uint32_t) __asm__("FUN_0031c764");
uint32_t LytWk_IsDrawing(const Obj*) __asm__("_ZNK4gfl23lyt5LytWk9IsDrawingEv");
uint32_t Waza_GetParam(uint32_t, uint32_t) __asm__("_ZN3pml8wazadata8GetParamE6WazaNoNS0_7ParamIDE");
void FUN_0031b034(Obj*, uint32_t, uint32_t) __asm__("FUN_0031b034");
void FUN_00319d18(Obj*, uint32_t, uint32_t) __asm__("FUN_00319d18");
void FUN_0031a53c(Obj*, uint32_t, uint32_t) __asm__("FUN_0031a53c");
void CoreParam_Serialize_Core(const Obj*, Obj*) __asm__("_ZNK3pml8pokepara9CoreParam14Serialize_CoreEPv");
}

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AD7FC
extern "C" void Sound_StartNewBGMFromME(uint32_t id) __asm__("_ZN5Sound17StartNewBGMFromMEEj");
extern "C" void Sound_StartNewBGMFromME(uint32_t id) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a8844(*reinterpret_cast<Obj**>(DAT_0063e864), 0);
    FUN_003a90f4(*reinterpret_cast<Obj**>(DAT_0063e864), id);
    FUN_003a90b0(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a9050(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AC524
extern "C" void Sound_StartAppBGMReq(uint32_t id) __asm__("_ZN5Sound14StartAppBGMReqEj");
extern "C" void Sound_StartAppBGMReq(uint32_t id) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a8c58(*reinterpret_cast<Obj**>(DAT_0063e864), 10);
    FUN_003a8e38(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a88f0(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a90f4(*reinterpret_cast<Obj**>(DAT_0063e864), id);
    FUN_003a90b0(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a9050(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AE990
extern "C" void Sound_StartME(uint32_t id) __asm__("_ZN5Sound7StartMEEj");
extern "C" void Sound_StartME(uint32_t id) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a8c58(*reinterpret_cast<Obj**>(DAT_0063e864), 10);
    FUN_003a8e38(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a88f0(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a90f4(*reinterpret_cast<Obj**>(DAT_0063e864), id);
    FUN_003a90b0(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a9050(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AD51C
extern "C" void Sound_PreparePlayBGMReq(uint32_t fade) __asm__("_ZN5Sound17PreparePlayBGMReqENS_9FadeFrameE");
extern "C" void Sound_PreparePlayBGMReq(uint32_t fade) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a9050(*reinterpret_cast<Obj**>(DAT_0063e864));
    if (fade != 0) {
        FUN_003a8a14(*reinterpret_cast<Obj**>(DAT_0063e864));
        FUN_003a8b6c(*reinterpret_cast<Obj**>(DAT_0063e864), fade);
        FUN_003a8e38(*reinterpret_cast<Obj**>(DAT_0063e864));
    };
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004922C4
extern "C" bool CoreParam_CheckDirtPos(Obj* self, uint8_t pos) __asm__("_ZNK3pml8pokepara9CoreParam12CheckDirtPosEh");
extern "C" bool CoreParam_CheckDirtPos(Obj* self, uint8_t pos) {
    if (pos >= 5) return false;
    if (!FUN_00490c40(RPTR(self, 12))) return false;
    return (FUN_004908e0(RPTR(self, 12)) & ((1u << pos) & 0xFF)) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031D6C4
extern "C" void CoreParam_AddExp(Obj* self, uint32_t exp) __asm__("_ZN3pml8pokepara9CoreParam6AddExpEj");
extern "C" void CoreParam_AddExp(Obj* self, uint32_t exp) {
    uint32_t total = exp + FUN_00491be4(RPTR(self, 12));
    uint32_t monsNo = FUN_00491f88(RPTR(self, 12));
    uint32_t form = FUN_00491ef8(RPTR(self, 12));
    personal_LoadGrowTable(monsNo, form);
    uint32_t maxExp = personal_GetMinExp(100);
    FUN_0031a828(RPTR(self, 12), maxExp >= total ? total : maxExp);
    FUN_0031c764(self, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EFE4
extern "C" bool G2DUtil_IsDrawing(Obj* self) __asm__("_ZNK3app4util7G2DUtil9IsDrawingEv");
extern "C" bool G2DUtil_IsDrawing(Obj* self) {
    bool drawing = false;
    if (RPTR(self, 20)) {
        for (uint32_t i = 0; R32(self, 24) > i; i++) {
            Obj* lytWk = RPTR(RPTR(self, 20), i * 8);
            if (lytWk && LytWk_IsDrawing(lytWk)) { drawing = true; break; }
        }
    }
    return drawing;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031D9C4
extern "C" void CoreParam_SetWaza(Obj* self, uint8_t slot, uint32_t waza) __asm__("_ZN3pml8pokepara9CoreParam7SetWazaEh6WazaNo");
extern "C" void CoreParam_SetWaza(Obj* self, uint8_t slot, uint32_t waza) {
    if (slot >= 4) { Assert(0, 0, 0, 0); return; }
    uint32_t pp = Waza_GetParam(waza, 5);
    FUN_0031b034(RPTR(self, 12), slot, waza);
    FUN_00319d18(RPTR(self, 12), slot, 0);
    FUN_0031a53c(RPTR(self, 12), slot, pp & 0xFF);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E214
extern "C" uint32_t wazadata_GetRankEffect(uint32_t waza, uint32_t index, int32_t* effect) __asm__("_ZN3pml8wazadata13GetRankEffectE6WazaNojPi");
extern "C" uint32_t wazadata_GetRankEffect(uint32_t waza, uint32_t index, int32_t* effect) {
    if (index >= 3) { *effect = 0; return 0; }
    uint32_t stat = Waza_GetParam(waza, (index + 16) & 0xFF);
    if (stat == 0) *effect = 0;
    else *effect = Waza_GetParam(waza, (index + 19) & 0xFF);
    return stat & 0xFF;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438F6C
extern "C" void ResortSave_SetFriendShipPokemon(Obj* self, int32_t index, const Obj* pokemon, int32_t a, int32_t b) __asm__("_ZN8Savedata10ResortSave20SetFriendShipPokemonEiPKN3pml8pokepara9CoreParamEii");
extern "C" void ResortSave_SetFriendShipPokemon(Obj* self, int32_t index, const Obj* pokemon, int32_t a, int32_t b) {
    Obj* slot = self + index * 236;
    CoreParam_Serialize_Core(pokemon, slot + 26);
    if (a != -1) { slot[258] = a; slot[259] = b; }
    R16(self, 0x55D6) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004389FC
extern "C" void ResortSave_SetHotSpaPokemon(Obj* self, int32_t index, const Obj* pokemon, bool isNew) __asm__("_ZN8Savedata10ResortSave16SetHotSpaPokemonEiPKN3pml8pokepara9CoreParamEb");
extern "C" void ResortSave_SetHotSpaPokemon(Obj* self, int32_t index, const Obj* pokemon, bool isNew) {
    Obj* slot = self + index * 236;
    CoreParam_Serialize_Core(pokemon, slot + 17726);
    if (isNew) slot[17960] = 1;
    R16(self, 0x55D6) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004383C8
extern "C" void ResortSave_SetWildPokemon(Obj* self, int32_t index, const Obj* pokemon) __asm__("_ZN8Savedata10ResortSave14SetWildPokemonEiPKN3pml8pokepara9CoreParamE");
extern "C" void ResortSave_SetWildPokemon(Obj* self, int32_t index, const Obj* pokemon) {
    Obj* slot = self + index * 236;
    CoreParam_Serialize_Core(pokemon, slot + 4274);
    R16(self, 0x55D6) = 1;
}
#endif

