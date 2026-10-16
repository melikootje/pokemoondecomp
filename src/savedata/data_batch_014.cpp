// Reconstructions that touch unnamed globals and callees. Unnamed targets use Ghidra-style labels
// (DAT_xxxxxxxx / FUN_xxxxxxxx) bound with __asm__, so they can be renamed once recovered.
// Checked against retail with tools/equiv_check.py, which maps the real .rodata/.data at retail addresses.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;
typedef unsigned long long uint64_t;

typedef uint8_t Obj;
#define VFP __attribute__((pcs("aapcs-vfp")))

#define R32(p, off) (*reinterpret_cast<uint32_t*>((p) + (off)))
#define RPTR(p, off) (*reinterpret_cast<Obj**>((p) + (off)))

extern "C" {
void Assert(const char*, uint32_t, int32_t, const char*) __asm__("_ZN4gfl25debug9GFLassertEPKcjiS2_");
void AssertStop(const char*, uint32_t, const char*) __asm__("_ZN4gfl25debug13GFLassertStopEPKcjS2_");
void FUN_0031a3b0(Obj*) __asm__("FUN_0031a3b0");
Obj* FUN_0049170c(Obj*, uint32_t) __asm__("FUN_0049170c");
void FUN_0031a338(Obj*) __asm__("FUN_0031a338");
void StrBuf_SetStr(Obj*, const Obj*) __asm__("_ZN4gfl23str6StrBuf6SetStrEPKw");
Obj* FUN_004908b4(Obj*) __asm__("FUN_004908b4");
uint32_t FUN_0031806c(Obj*, uint32_t) __asm__("FUN_0031806c");
uint32_t FUN_00490afc(Obj*) __asm__("FUN_00490afc");
uint32_t FUN_00491824(Obj*) __asm__("FUN_00491824");
void CoreParam_ChangeFormNo(Obj*, uint32_t) __asm__("_ZN3pml8pokepara9CoreParam12ChangeFormNoEh");
void FUN_00490e40(Obj*, uint32_t) __asm__("FUN_00490e40");
void FUN_00411168(Obj**, int32_t) __asm__("FUN_00411168");
uint32_t FUN_004a4510(Obj**) __asm__("FUN_004a4510");
void FUN_00411228(Obj**, int32_t, const Obj*) __asm__("FUN_00411228");
uint32_t FUN_00491f88(Obj*) __asm__("FUN_00491f88");
uint32_t FUN_00491ef8(Obj*) __asm__("FUN_00491ef8");
uint32_t CoreParam_GetLevel(Obj*) __asm__("_ZNK3pml8pokepara9CoreParam8GetLevelEv");
void personal_LoadGrowTable(uint32_t, uint32_t) __asm__("_ZN3pml8personal13LoadGrowTableE6MonsNoh");
uint32_t personal_GetMinExp(uint32_t) __asm__("_ZN3pml8personal9GetMinExpEh");
uint32_t FUN_00492010(Obj*, uint32_t) __asm__("FUN_00492010");
Obj* FUN_00350be4(Obj*) __asm__("FUN_00350be4");
void OperatorDelete(void*) __asm__("_ZdlPv");
Obj* LytWk_GetTextBoxPane(const Obj*, uint32_t) __asm__("_ZNK4gfl23lyt5LytWk14GetTextBoxPaneEj");
void FUN_003bff88(Obj*, const Obj*, uint32_t) __asm__("FUN_003bff88");
uint32_t FUN_004908e0(Obj*) __asm__("FUN_004908e0");
void FUN_00318f6c(Obj*, uint32_t) __asm__("FUN_00318f6c");
void FUN_0053b02c(Obj*) __asm__("FUN_0053b02c");
uint64_t aeabi_uidivmod(uint32_t, uint32_t) __asm__("__aeabi_uidivmod");
uint32_t FUN_004913d8(Obj*) __asm__("FUN_004913d8");
void FUN_003c0098(Obj*, const Obj*, uint32_t, uint32_t) __asm__("FUN_003c0098");
}

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00490960
extern "C" void CoreParam_GetParentName(Obj* self, Obj* out) __asm__("_ZNK3pml8pokepara9CoreParam13GetParentNameEPN4gfl23str6StrBufE");
extern "C" void CoreParam_GetParentName(Obj* self, Obj* out) {
    Obj* core = RPTR(self, 12);
    FUN_0031a3b0(core);
    StrBuf_SetStr(out, FUN_0049170c(core, 0));
    FUN_0031a338(core);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049249C
extern "C" void CoreParam_GetAllBoxMark(Obj* self, uint8_t* out) __asm__("_ZNK3pml8pokepara9CoreParam13GetAllBoxMarkEPNS0_16BoxMarkContainerE");
extern "C" void CoreParam_GetAllBoxMark(Obj* self, uint8_t* out) {
    for (uint32_t i = 0; i < 6; i++) {
        out[i] = FUN_0031806c(FUN_004908b4(RPTR(self, 12)), i);
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031C664
extern "C" void CoreParam_ResetMegaEvolve(Obj* self) __asm__("_ZN3pml8pokepara9CoreParam15ResetMegaEvolveEv");
extern "C" void CoreParam_ResetMegaEvolve(Obj* self) {
    if (FUN_00490afc(RPTR(self, 12))) {
        CoreParam_ChangeFormNo(self, FUN_00491824(RPTR(self, 12)));
        FUN_00490e40(RPTR(self, 12), 0);
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417DC4
extern "C" void BaseModel_SetMaterialLightSetIndex(Obj* self, int32_t material, int16_t lightSet) __asm__("_ZN7poke_3d5model9BaseModel24SetMaterialLightSetIndexEis");
extern "C" void BaseModel_SetMaterialLightSetIndex(Obj* self, int32_t material, int16_t lightSet) {
    Obj* local = RPTR(RPTR(self, 4), 232) + material * 688;
    FUN_00411168(&local, lightSet);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5AEC
extern "C" uint32_t BaseModel_GetMaterialDepthTestFunction(Obj* self, int32_t material) __asm__("_ZNK7poke_3d5model9BaseModel28GetMaterialDepthTestFunctionEi");
extern "C" uint32_t BaseModel_GetMaterialDepthTestFunction(Obj* self, int32_t material) {
    Obj* local = RPTR(RPTR(self, 4), 232) + material * 688;
    return FUN_004a4510(&local) & 0xFF;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00418308
extern "C" void BaseModel_SetMaterialTextureCoordinatorTranslateUV(Obj* self, int32_t material, int32_t coordinator, const Obj* uv) __asm__("_ZN7poke_3d5model9BaseModel40SetMaterialTextureCoordinatorTranslateUVEiiRKN4gfl24math7Vector2E");
extern "C" void BaseModel_SetMaterialTextureCoordinatorTranslateUV(Obj* self, int32_t material, int32_t coordinator, const Obj* uv) {
    Obj* local = RPTR(RPTR(self, 4), 232) + material * 688;
    FUN_00411228(&local, coordinator, uv);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492AA4
extern "C" uint32_t CoreParam_GetExpForCurrentLevel(Obj* self) __asm__("_ZNK3pml8pokepara9CoreParam21GetExpForCurrentLevelEv");
extern "C" uint32_t CoreParam_GetExpForCurrentLevel(Obj* self) {
    uint32_t monsNo = FUN_00491f88(RPTR(self, 12));
    uint32_t form = FUN_00491ef8(RPTR(self, 12));
    uint32_t level = CoreParam_GetLevel(self);
    personal_LoadGrowTable(monsNo, form);
    return personal_GetMinExp(level & 0xFF);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049342C
extern "C" bool CoreParam_HaveWaza(Obj* self, uint32_t waza) __asm__("_ZNK3pml8pokepara9CoreParam8HaveWazaE6WazaNo");
extern "C" bool CoreParam_HaveWaza(Obj* self, uint32_t waza) {
    for (uint32_t i = 0; i < 4; i++) {
        if (FUN_00492010(RPTR(self, 12), i) == waza) return true;
    }
    return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310078
extern "C" void G2DUtil_DeleteLayoutEnv(Obj* self) __asm__("_ZN3app4util7G2DUtil15DeleteLayoutEnvEv");
extern "C" void G2DUtil_DeleteLayoutEnv(Obj* self) {
    if (RPTR(self, 12)) { OperatorDelete(FUN_00350be4(RPTR(self, 12))); RPTR(self, 12) = 0; }
    if (RPTR(self, 16)) { OperatorDelete(FUN_00350be4(RPTR(self, 16))); RPTR(self, 16) = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003110B8
extern "C" void G2DUtil_SetTextBoxPaneString_Wide(Obj* self, uint32_t lytIndex, uint32_t paneId, const Obj* text) __asm__("_ZN3app4util7G2DUtil20SetTextBoxPaneStringEjjPKw");
extern "C" void G2DUtil_SetTextBoxPaneString_Wide(Obj* self, uint32_t lytIndex, uint32_t paneId, const Obj* text) {
    Obj* pane = LytWk_GetTextBoxPane(RPTR(RPTR(self, 20), lytIndex * 8), paneId);
    if (pane) FUN_003bff88(pane, text, 10);
    else Assert(0, 0, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004466D8
extern "C" void ZukanData_SetZukanMode(Obj* self, uint32_t mode) __asm__("_ZN8Savedata9ZukanData12SetZukanModeENS0_4ModeE");
extern "C" void ZukanData_SetZukanMode(Obj* self, uint32_t mode) {
    if (R32(self, 4) != 0x2F120F17) AssertStop(0, 0, 0);
    R32(self, 8) = (R32(self, 8) & ~448u) | ((mode << 6) & 448u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00446814
extern "C" void ZukanData_SetZukanOSVersion(Obj* self, uint32_t version) __asm__("_ZN8Savedata9ZukanData17SetZukanOSVersionEj");
extern "C" void ZukanData_SetZukanOSVersion(Obj* self, uint32_t version) {
    if (R32(self, 4) != 0x2F120F17) AssertStop(0, 0, 0);
    R32(self, 8) = (R32(self, 8) & ~1572864u) | ((version << 19) & 1572864u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031C094
extern "C" void CoreParam_RemoveDirtPos(Obj* self, uint8_t pos) __asm__("_ZN3pml8pokepara9CoreParam13RemoveDirtPosEh");
extern "C" void CoreParam_RemoveDirtPos(Obj* self, uint8_t pos) {
    if (pos >= 5) { Assert(0, 0, 0, 0); return; }
    uint32_t mask = (1u << pos) & 0xFF;
    uint32_t dirt = FUN_004908e0(RPTR(self, 12));
    FUN_00318f6c(RPTR(self, 12), dirt & ~mask);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003588BC
extern "C" uint32_t SFMTRandom_Next(Obj* self, uint32_t limit) __asm__("_ZN4gfl24math10SFMTRandom4NextEj");
extern "C" uint32_t SFMTRandom_Next(Obj* self, uint32_t limit) {
    if ((int32_t)R32(self, 2496) >= 624) {
        FUN_0053b02c(self);
        R32(self, 2496) = 0;
    }
    uint32_t index = R32(self, 2496);
    R32(self, 2496) = index + 1;
    return (uint32_t)(aeabi_uidivmod(R32(self + index * 4, 0), limit) >> 32);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004926D8
extern "C" bool CoreParam_IsTrainingDone(Obj* self, uint32_t powerId) __asm__("_ZNK3pml8pokepara9CoreParam14IsTrainingDoneENS0_7PowerIDE");
extern "C" bool CoreParam_IsTrainingDone(Obj* self, uint32_t powerId) {
    if (powerId >= 6) return false;
    return (FUN_004913d8(RPTR(self, 12)) & ((1u << powerId) & 0xFF)) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFF34
extern "C" void G2DUtil_SetTextBoxPaneString_Direct(Obj* self, Obj* textBox, const Obj* text) __asm__("_ZN3app4util7G2DUtil20SetTextBoxPaneStringEPN2nw3lyt7TextBoxEPKw");
extern "C" void G2DUtil_SetTextBoxPaneString_Direct(Obj* self, Obj* textBox, const Obj* text) {
    FUN_003c0098(textBox, text, 0, 10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00361660
extern "C" Obj* AnimationPackList_GetResourceNode(Obj* self, uint32_t packIndex, uint32_t nodeIndex) __asm__("_ZN4gfl29animation17AnimationPackList15GetResourceNodeEjj");
extern "C" Obj* AnimationPackList_GetResourceNode(Obj* self, uint32_t packIndex, uint32_t nodeIndex) {
    Obj* pack = RPTR(self, 0) + packIndex * 8;
    return RPTR(RPTR(pack, 0) + nodeIndex * 4, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438B5C
extern "C" uint32_t ResortSave_GetGroundBeansRank(Obj* self, int32_t index) __asm__("_ZN8Savedata10ResortSave18GetGroundBeansRankEi");
extern "C" uint32_t ResortSave_GetGroundBeansRank(Obj* self, int32_t index) {
    uint32_t value = self[index + 22153];
    if (value == 15) return 0;
    if (value == 14) return 3;
    return (value - 7 <= 6) ? 2 : 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E6BC
extern "C" void JoinFestaDataSave_SetFacilitiesBuy(Obj* self, uint32_t bit) __asm__("_ZN8Savedata17JoinFestaDataSave16SetFacilitiesBuyEj");
extern "C" void JoinFestaDataSave_SetFacilitiesBuy(Obj* self, uint32_t bit) {
    uint8_t slot = self[14752];
    if (slot < 7) R32(self + slot * 72, 832) |= 1u << bit;
}
#endif

