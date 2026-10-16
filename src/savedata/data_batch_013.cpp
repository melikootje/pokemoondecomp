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
extern Obj DAT_0067204c[] __asm__("DAT_0067204c");
void FUN_0043817c(Obj*, Obj*) __asm__("FUN_0043817c");
uint32_t FUN_00341ebc() __asm__("FUN_00341ebc");
uint32_t FUN_00497608(uint32_t, uint32_t) __asm__("FUN_00497608");
uint32_t FUN_00305094(uint32_t, uint32_t, uint32_t, int32_t, uint32_t) __asm__("FUN_00305094");
void FUN_00352810(uint32_t) __asm__("FUN_00352810");
void FUN_003191a4(Obj*, uint32_t) __asm__("FUN_003191a4");
void FUN_00318f6c(Obj*, uint32_t) __asm__("FUN_00318f6c");
void* aeabi_memcpy4(void*, const void*, uint32_t) __asm__("__aeabi_memcpy4");
void Assert(const char*, uint32_t, int32_t, const char*) __asm__("_ZN4gfl25debug9GFLassertEPKcjiS2_");
Obj* FUN_0038014c(Obj*, uint32_t) __asm__("FUN_0038014c");
Obj* StrBuf_GetPtr(const Obj*) __asm__("_ZNK4gfl23str6StrBuf6GetPtrEv");
void FUN_003c0098(Obj*, Obj*, uint32_t, uint32_t) __asm__("FUN_003c0098");
void FUN_00311020(Obj*, uint32_t) __asm__("FUN_00311020");
void FUN_0045268c(Obj*) __asm__("FUN_0045268c");
void FUN_0031a3b0(Obj*) __asm__("FUN_0031a3b0");
Obj* FUN_0049170c(Obj*, uint32_t) __asm__("FUN_0049170c");
void FUN_0031a338(Obj*) __asm__("FUN_0031a338");
uint32_t FUN_0049ea40(Obj*) __asm__("FUN_0049ea40");
Obj* FUN_00442e80(Obj*, uint32_t) __asm__("FUN_00442e80");
void FUN_004681ac(Obj*) __asm__("FUN_004681ac");
void FUN_0010f3cc(Obj*, uint32_t) __asm__("FUN_0010f3cc");
void HeapFree(void*) __asm__("_ZN4gfl24heap22GflHeapFreeMemoryBlockEPv");
}

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439904
extern "C" void ResortSave_SetBeansIvyHiddenTimeDownCount(Obj* self) __asm__("_ZN8Savedata10ResortSave30SetBeansIvyHiddenTimeDownCountEv");
extern "C" void ResortSave_SetBeansIvyHiddenTimeDownCount(Obj* self) {
    FUN_0043817c(self, self + 22313);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C0308
extern "C" uint32_t SystemFont_IsLoadNumFont() __asm__("_ZN5print24SystemFont_IsLoadNumFontEv");
extern "C" uint32_t SystemFont_IsLoadNumFont() {
    Obj* font = *reinterpret_cast<Obj**>(DAT_0067204c);
    uint32_t loaded = FUN_00341ebc();
    return FUN_00497608(loaded, R32(font, 36));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003051C0
extern "C" uint32_t PokeIcon_GetResourceIndex(const Obj* param, bool flag) __asm__("_ZN3app4tool8PokeIcon16GetResourceIndexEPKN8PokeTool11SimpleParamEb");
extern "C" uint32_t PokeIcon_GetResourceIndex(const Obj* param, bool flag) {
    return FUN_00305094(*reinterpret_cast<const uint16_t*>(param), param[2], param[3], (int8_t)param[5], flag);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C08E8
extern "C" void SystemFont_ResetDefaultFontInfo() __asm__("_ZN5print31SystemFont_ResetDefaultFontInfoEv");
extern "C" void SystemFont_ResetDefaultFontInfo() {
    for (uint32_t i = 1; i < 4; i++) FUN_00352810(i);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031DD60
extern "C" void CoreParam_ClearDirt(Obj* self) __asm__("_ZN3pml8pokepara9CoreParam9ClearDirtEv");
extern "C" void CoreParam_ClearDirt(Obj* self) {
    FUN_003191a4(RPTR(self, 12), 0);
    FUN_00318f6c(RPTR(self, 12), 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043C2E4
extern "C" void MysteryGiftSave_WriteBackClone(Obj* self, const Obj* data) __asm__("_ZN8Savedata15MysteryGiftSave14WriteBackCloneEPKNS0_9CORE_DATAE");
extern "C" void MysteryGiftSave_WriteBackClone(Obj* self, const Obj* data) {
    if (!data) { Assert(0, 0, 0, 0); return; }
    aeabi_memcpy4(self + 4, data, 0x3F50);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038063C
extern "C" void FieldScriptSystem_SetBgPartsVisible(Obj* self, uint32_t id, int32_t visible) __asm__("_ZN5Field11FieldScript17FieldScriptSystem17SetBgPartsVisibleEji");
extern "C" void FieldScriptSystem_SetBgPartsVisible(Obj* self, uint32_t id, int32_t visible) {
    Obj* parts = FUN_0038014c(self, id);
    if (!parts) return;
    if (visible) parts[0] |= 2;
    else parts[0] &= ~2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFF08
extern "C" void print_SetStringForLytTextBox(Obj* textBox, const Obj* str, uint32_t lang) __asm__("_ZN5print22SetStringForLytTextBoxEPN2nw3lyt7TextBoxEPKN4gfl23str6StrBufEN6System9MSGLANGIDE");
extern "C" void print_SetStringForLytTextBox(Obj* textBox, const Obj* str, uint32_t lang) {
    FUN_003c0098(textBox, StrBuf_GetPtr(str), 0, lang);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00452AA8
extern "C" void JoinFestaAttractionSelectLowerView_SetEntryList(Obj* self, Obj* list) __asm__("_ZN9NetAppLib11JoinFestaUI34JoinFestaAttractionSelectLowerView12SetEntryListEPN4gfl24util4ListINS0_23JoinFestaAttractionDataEEE");
extern "C" void JoinFestaAttractionSelectLowerView_SetEntryList(Obj* self, Obj* list) {
    FUN_00311020(self, 18);
    RPTR(self, 248) = list;
    self[232] = 1;
    FUN_0045268c(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049092C
extern "C" uint32_t CoreParam_GetGetBall(const Obj* self) __asm__("_ZNK3pml8pokepara9CoreParam10GetGetBallEv");
extern "C" uint32_t CoreParam_GetGetBall(const Obj* self) {
    Obj* core = RPTR(const_cast<Obj*>(self), 12);
    FUN_0031a3b0(core);
    uint32_t value = FUN_0049170c(core, 0)[44];
    FUN_0031a338(core);
    return value;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004917BC
extern "C" uint32_t CoreParam_GetCassetteVersion(const Obj* self) __asm__("_ZNK3pml8pokepara9CoreParam18GetCassetteVersionEv");
extern "C" uint32_t CoreParam_GetCassetteVersion(const Obj* self) {
    Obj* core = RPTR(const_cast<Obj*>(self), 12);
    FUN_0031a3b0(core);
    uint32_t value = FUN_0049170c(core, 0)[47];
    FUN_0031a338(core);
    return value;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00491F54
extern "C" uint32_t CoreParam_GetLangId(const Obj* self) __asm__("_ZNK3pml8pokepara9CoreParam9GetLangIdEv");
extern "C" uint32_t CoreParam_GetLangId(const Obj* self) {
    Obj* core = RPTR(const_cast<Obj*>(self), 12);
    FUN_0031a3b0(core);
    uint32_t value = FUN_0049170c(core, 0)[51];
    FUN_0031a338(core);
    return value;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00155224
extern "C" bool INTRUDE_BATTLE_PARAM_IsEnable(const Obj* param) __asm__("_Z29INTRUDE_BATTLE_PARAM_IsEnableRK18IntrudeBattleParam");
extern "C" bool INTRUDE_BATTLE_PARAM_IsEnable(const Obj* param) {
    if (!param[0]) return false;
    Obj* target = RPTR(const_cast<Obj*>(param), 4);
    if (!target) return false;
    return FUN_0049ea40(target) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00442DAC
extern "C" uint32_t Fashion_GetCagoryItmeDataNum(Obj* self, uint32_t category) __asm__("_ZN8Savedata7Fashion20GetCagoryItmeDataNumENS0_8CategoryE");
extern "C" uint32_t Fashion_GetCagoryItmeDataNum(Obj* self, uint32_t category) {
    Obj* entry = FUN_00442e80(self, category);
    return entry ? R32(entry, 8) : 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00468348
extern "C" void JoinFestaPersonalData_SetRequestRecieveTrade(Obj* self, const uint32_t* friendKey, uint32_t value, bool flag) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData22SetRequestRecieveTradeERK18nnfriendsFriendKeyjb");
extern "C" void JoinFestaPersonalData_SetRequestRecieveTrade(Obj* self, const uint32_t* friendKey, uint32_t value, bool flag) {
    self[9] = flag ? 26 : 27;
    self[10] = 4;
    R32(self, 520) = value;
    R32(self, 524) = friendKey[0];
    R32(self, 528) = friendKey[2];
    R32(self, 532) = friendKey[3];
    FUN_004681ac(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037EC8C
extern "C" uint32_t ScriptTrialModel_Del(Obj* self, int32_t index) __asm__("_ZN5Field11FieldScript16ScriptTrialModel3DelEi");
extern "C" uint32_t ScriptTrialModel_Del(Obj* self, int32_t index) {
    Obj* entry = self + index * 24;
    FUN_0010f3cc(RPTR(self, 16), R32(entry, 40));
    R32(entry, 40) = 0;
    if (RPTR(entry, 36)) { HeapFree(RPTR(entry, 36)); RPTR(entry, 36) = 0; }
    return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004384FC
extern "C" void ResortSave_GetGimBonusTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) __asm__("_ZN8Savedata10ResortSave15GetGimBonusTimeEPhS1_S1_");
extern "C" void ResortSave_GetGimBonusTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) {
    *a = self[22257];
    *b = self[22256];
    *c = self[22255];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004388F0
extern "C" void ResortSave_GetAdventureTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) __asm__("_ZN8Savedata10ResortSave16GetAdventureTimeEPhS1_S1_");
extern "C" void ResortSave_GetAdventureTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) {
    *a = self[22250];
    *b = self[22249];
    *c = self[22248];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438BC0
extern "C" void ResortSave_GetHotSpaBonusTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) __asm__("_ZN8Savedata10ResortSave18GetHotSpaBonusTimeEPhS1_S1_");
extern "C" void ResortSave_GetHotSpaBonusTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) {
    *a = self[22275];
    *b = self[22274];
    *c = self[22273];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438D40
extern "C" void ResortSave_GetPokemonEventTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) __asm__("_ZN8Savedata10ResortSave19GetPokemonEventTimeEPhS1_S1_");
extern "C" void ResortSave_GetPokemonEventTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) {
    *a = self[22135];
    *b = self[22134];
    *c = self[22133];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439014
extern "C" void ResortSave_GetAdventureBonusTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) __asm__("_ZN8Savedata10ResortSave21GetAdventureBonusTimeEPhS1_S1_");
extern "C" void ResortSave_GetAdventureBonusTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) {
    *a = self[22254];
    *b = self[22253];
    *c = self[22252];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439050
extern "C" void ResortSave_GetFarmFertilizerTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) __asm__("_ZN8Savedata10ResortSave21GetFarmFertilizerTimeEPhS1_S1_");
extern "C" void ResortSave_GetFarmFertilizerTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) {
    *a = self[22247];
    *b = self[22246];
    *c = self[22245];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439524
extern "C" void ResortSave_GetWildPokemonServiceTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) __asm__("_ZN8Savedata10ResortSave25GetWildPokemonServiceTimeEPhS1_S1_");
extern "C" void ResortSave_GetWildPokemonServiceTime(Obj* self, uint8_t* a, uint8_t* b, uint8_t* c) {
    *a = self[22146];
    *b = self[22145];
    *c = self[22144];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437D7C
extern "C" void ResortSave_GetFarmTime(Obj* self, int32_t index, uint8_t* a, uint8_t* b, uint8_t* c) __asm__("_ZN8Savedata10ResortSave11GetFarmTimeEiPhS1_S1_");
extern "C" void ResortSave_GetFarmTime(Obj* self, int32_t index, uint8_t* a, uint8_t* b, uint8_t* c) {
    Obj* slot = self + index * 3;
    *a = slot[22193];
    *b = slot[22192];
    *c = slot[22191];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438040
extern "C" void ResortSave_GetGimEndTime(Obj* self, int32_t index, uint8_t* a, uint8_t* b, uint8_t* c) __asm__("_ZN8Savedata10ResortSave13GetGimEndTimeEiPhS1_S1_");
extern "C" void ResortSave_GetGimEndTime(Obj* self, int32_t index, uint8_t* a, uint8_t* b, uint8_t* c) {
    Obj* slot = self + index * 3;
    *a = slot[22266];
    *b = slot[22265];
    *c = slot[22264];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438F48
extern "C" void ResortSave_SetBeansBottleGround(Obj* self, uint32_t kind, bool value) __asm__("_ZN8Savedata10ResortSave20SetBeansBottleGroundENS0_14PokeResortKindEb");
extern "C" void ResortSave_SetBeansBottleGround(Obj* self, uint32_t kind, bool value) {
    if (self[kind + 0x565F]) self[kind + 0x5669] = value;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438D90
extern "C" bool ResortSave_IsBeansBottleGround(Obj* self, uint32_t kind) __asm__("_ZN8Savedata10ResortSave19IsBeansBottleGroundENS0_14PokeResortKindE");
extern "C" bool ResortSave_IsBeansBottleGround(Obj* self, uint32_t kind) {
    if (!self[kind + 0x565F]) return false;
    return self[kind + 0x5669] != 0;
}
#endif

