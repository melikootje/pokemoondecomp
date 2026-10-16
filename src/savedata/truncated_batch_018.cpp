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
Obj* GameManager_GetInstance() __asm__("_ZN4gfl24base17SingletonAccessorIN7GameSys11GameManagerEE11GetInstanceEv");
Obj* GameManager_GetNijiExtSaveSystem(Obj*) __asm__("_ZNK7GameSys11GameManager20GetNijiExtSaveSystemEv");
Obj* JoinFestaPacketManager_GetInstance() __asm__("_ZN4gfl24base17SingletonAccessorIN9NetAppLib9JoinFesta22JoinFestaPacketManagerEE11GetInstanceEv");
uint32_t EvTime_GetAlolaTimeZone(Obj*) __asm__("_ZN5Field6EvTime16GetAlolaTimeZoneEPKN7GameSys8GameDataE");
uint32_t PokeParty_GetMemberCountEx(Obj*, uint32_t) __asm__("_ZNK3pml9PokeParty16GetMemberCountExENS0_9CountTypeE");
uint32_t BoxPokemon_GetPokemonCountAll(Obj*, Obj*, bool) __asm__("_ZN8Savedata10BoxPokemon18GetPokemonCountAllEPN4gfl24heap11CtrHeapBaseEb");
uint32_t FUN_0015b250(Obj*, uint32_t, uint32_t) __asm__("FUN_0015b250");
void FUN_00445dcc(Obj*, Obj*) __asm__("FUN_00445dcc");
uint32_t FUN_004a7608(Obj*) __asm__("FUN_004a7608");
void FUN_0046a5b4(Obj*, Obj*) __asm__("FUN_0046a5b4");
uint32_t FUN_0015b5dc(Obj*, Obj*, uint32_t, uint32_t) __asm__("FUN_0015b5dc");
uint32_t FUN_0015b9cc(Obj*, Obj*, uint32_t, uint32_t) __asm__("FUN_0015b9cc");
uint32_t FUN_0015b570(Obj*, Obj*, uint32_t, uint32_t, uint32_t) __asm__("FUN_0015b570");
Obj* FUN_004a8a4c(Obj*, uint32_t) __asm__("FUN_004a8a4c");
void FUN_00444e8c(Obj*, uint32_t, uint32_t) __asm__("FUN_00444e8c");
}

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015B230
extern "C" uint32_t RegulationExtSaveData_IsExistsRegulationData(Obj* self, uint32_t type) __asm__("_ZN11ExtSavedata21RegulationExtSaveData22IsExistsRegulationDataENS0_15REGULATION_TYPEE");
extern "C" uint32_t RegulationExtSaveData_IsExistsRegulationData(Obj* self, uint32_t type) {
    // retail-size: 32
    Obj* extSave = GameManager_GetNijiExtSaveSystem(GameManager_GetInstance());
    return FUN_0015b250(extSave, 2, type);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042BB20
extern "C" void PokeGetUtil_SetFlag(Obj* pokemon) __asm__("_ZN8PokeTool11PokeGetUtil7SetFlagEPKN3pml8pokepara12PokemonParamE");
extern "C" void PokeGetUtil_SetFlag(Obj* pokemon) {
    // retail-size: 40
    Obj* gameData = RPTR(GameManager_GetInstance(), 36);
    FUN_00445dcc(RPTR(gameData, 4) + 9108, pokemon);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C130
extern "C" bool NetAppEntryChecker_CheckTradePenalty() __asm__("_ZN9NetAppLib4Util18NetAppEntryChecker17CheckTradePenaltyEv");
extern "C" bool NetAppEntryChecker_CheckTradePenalty() {
    // retail-size: 48
    Obj* gameData = RPTR(GameManager_GetInstance(), 36);
    return FUN_004a7608(RPTR(gameData, 4) + 323360) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015C2B8
extern "C" bool RegulationExtSaveData_StartDeleteRegulationData(Obj* self, uint32_t type) __asm__("_ZN11ExtSavedata21RegulationExtSaveData25StartDeleteRegulationDataENS0_15REGULATION_TYPEE");
extern "C" bool RegulationExtSaveData_StartDeleteRegulationData(Obj* self, uint32_t type) {
    // retail-size: 64
    Obj* extSave = GameManager_GetNijiExtSaveSystem(GameManager_GetInstance());
    R32(self, 24) = type;
    uint32_t started = FUN_0015b5dc(extSave, RPTR(self, 16), 2, type);
    if (!started) return started;
    self[20] = 6;
    return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015C220
extern "C" bool RegulationExtSaveData_StartLoadRegulationData(Obj* self, uint32_t type, Obj* regulation) __asm__("_ZN11ExtSavedata21RegulationExtSaveData23StartLoadRegulationDataENS0_15REGULATION_TYPEER10Regulation");
extern "C" bool RegulationExtSaveData_StartLoadRegulationData(Obj* self, uint32_t type, Obj* regulation) {
    // retail-size: 72
    Obj* extSave = GameManager_GetNijiExtSaveSystem(GameManager_GetInstance());
    R32(self, 24) = type;
    RPTR(self, 8) = regulation;
    uint32_t started = FUN_0015b9cc(extSave, RPTR(self, 16), 2, type);
    if (!started) return started;
    self[20] = 2;
    return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015C268
extern "C" bool RegulationExtSaveData_StartCreateRegulationData(Obj* self, uint32_t type, Obj* regulation) __asm__("_ZN11ExtSavedata21RegulationExtSaveData25StartCreateRegulationDataENS0_15REGULATION_TYPEERK10Regulation");
extern "C" bool RegulationExtSaveData_StartCreateRegulationData(Obj* self, uint32_t type, Obj* regulation) {
    // retail-size: 80
    Obj* extSave = GameManager_GetNijiExtSaveSystem(GameManager_GetInstance());
    R32(self, 24) = type;
    RPTR(self, 4) = regulation;
    uint32_t started = FUN_0015b570(extSave, RPTR(self, 16), 2, type, 65536);
    if (!started) return started;
    self[20] = 3;
    return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049E864
extern "C" void PokeSet_GetFirstMonsInfo(Obj* self, const Obj* encountData, uint16_t* monsNo, uint8_t* form) __asm__("_ZNK5Field7Encount7PokeSet16GetFirstMonsInfoERKNS0_12ENCOUNT_DATAEP6MonsNoPh");
extern "C" void PokeSet_GetFirstMonsInfo(Obj* self, const Obj* encountData, uint16_t* monsNo, uint8_t* form) {
    // retail-size: 88
    uint32_t zone = EvTime_GetAlolaTimeZone(RPTR(GameManager_GetInstance(), 36));
    const Obj* entry = (zone <= 2) ? encountData + 4 : encountData + 360;
    uint16_t packed = *reinterpret_cast<const uint16_t*>(entry + 12);
    *monsNo = packed & ~63488;
    *form = *reinterpret_cast<const uint16_t*>(entry + 12) >> 11;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C1DC
extern "C" bool NetAppEntryChecker_CheckPokemonCountForTrade(Obj* heap) __asm__("_ZN9NetAppLib4Util18NetAppEntryChecker25CheckPokemonCountForTradeEPN4gfl24heap11CtrHeapBaseE");
extern "C" bool NetAppEntryChecker_CheckPokemonCountForTrade(Obj* heap) {
    // retail-size: 96
    Obj* party = RPTR(RPTR(GameManager_GetInstance(), 36), 12);
    Obj* box = RPTR(RPTR(GameManager_GetInstance(), 36), 4) + 16140;
    uint32_t partyCount = PokeParty_GetMemberCountEx(party, 2);
    uint32_t boxCount = BoxPokemon_GetPokemonCountAll(box, heap, false);
    return boxCount + partyCount >= 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C2B8
extern "C" bool NetAppEntryChecker_CheckPokemonCountForDoubleBattle(Obj* heap) __asm__("_ZN9NetAppLib4Util18NetAppEntryChecker32CheckPokemonCountForDoubleBattleEPN4gfl24heap11CtrHeapBaseE");
extern "C" bool NetAppEntryChecker_CheckPokemonCountForDoubleBattle(Obj* heap) {
    // retail-size: 96
    Obj* party = RPTR(RPTR(GameManager_GetInstance(), 36), 12);
    Obj* box = RPTR(RPTR(GameManager_GetInstance(), 36), 4) + 16140;
    uint32_t partyCount = PokeParty_GetMemberCountEx(party, 2);
    uint32_t boxCount = BoxPokemon_GetPokemonCountAll(box, heap, false);
    return partyCount >= 2 || boxCount >= 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038E9E8
extern "C" void FieldBerryManager_UpdateBerrysStatusToExist() __asm__("_ZN5Field17FieldBerryManager25UpdateBerrysStatusToExistEv");
extern "C" void FieldBerryManager_UpdateBerrysStatusToExist() {
    // retail-size: 104
    Obj* gameData = RPTR(GameManager_GetInstance(), 36);
    Obj* berryData = (R32(gameData, 264) == 0) ? RPTR(gameData, 4) + 0x52918 : RPTR(gameData + 5264, 0);
    for (uint32_t i = 0; i < 64; i++) {
        if (*FUN_004a8a4c(berryData, i) == 1) FUN_00444e8c(berryData, i, 2);
    }
}
#endif

