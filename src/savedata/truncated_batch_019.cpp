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
uint32_t GtsData_GetDepositFlag(Obj*) __asm__("_ZN8Savedata7GtsData14GetDepositFlagEv");
uint32_t PokeParty_GetMemberCountEx(Obj*, uint32_t) __asm__("_ZNK3pml9PokeParty16GetMemberCountExENS0_9CountTypeE");
uint32_t BoxPokemon_GetPokemonCountAll(Obj*, Obj*, bool) __asm__("_ZN8Savedata10BoxPokemon18GetPokemonCountAllEPN4gfl24heap11CtrHeapBaseEb");
uint32_t BoxPokemon_GetSpaceCountAll(Obj*, Obj*) __asm__("_ZN8Savedata10BoxPokemon16GetSpaceCountAllEPN4gfl24heap11CtrHeapBaseE");
Obj* JoinFestaPersonalDataManager_GetInstance() __asm__("_ZN4gfl24base17SingletonAccessorIN9NetAppLib9JoinFesta28JoinFestaPersonalDataManagerEE11GetInstanceEv");
void FUN_0043edd8(Obj*) __asm__("FUN_0043edd8");
void FUN_0043e930(Obj*, uint32_t) __asm__("FUN_0043e930");
void FUN_0043ea78(Obj*, uint32_t) __asm__("FUN_0043ea78");
Obj* FUN_004a8a4c(Obj*, uint32_t) __asm__("FUN_004a8a4c");
}

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C160
extern "C" bool NetAppEntryChecker_CheckFreeSpaceForGtsPlay(Obj* heap) __asm__("_ZN9NetAppLib4Util18NetAppEntryChecker24CheckFreeSpaceForGtsPlayEPN4gfl24heap11CtrHeapBaseE");
extern "C" bool NetAppEntryChecker_CheckFreeSpaceForGtsPlay(Obj* heap) {
    // retail-size: 124
    if (!GtsData_GetDepositFlag(RPTR(RPTR(GameManager_GetInstance(), 36), 4) + 13144)) return true;
    Obj* party = RPTR(RPTR(GameManager_GetInstance(), 36), 12);
    Obj* box = RPTR(RPTR(GameManager_GetInstance(), 36), 4) + 16140;
    uint32_t partyCount = PokeParty_GetMemberCountEx(party, 0);
    uint32_t space = BoxPokemon_GetSpaceCountAll(box, heap);
    if (partyCount != 6) return true;
    return space != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C23C
extern "C" bool NetAppEntryChecker_CheckPokemonCountForGtsPlay(Obj* heap) __asm__("_ZN9NetAppLib4Util18NetAppEntryChecker27CheckPokemonCountForGtsPlayEPN4gfl24heap11CtrHeapBaseE");
extern "C" bool NetAppEntryChecker_CheckPokemonCountForGtsPlay(Obj* heap) {
    // retail-size: 124
    bool result = false;
    if (GtsData_GetDepositFlag(RPTR(RPTR(GameManager_GetInstance(), 36), 4) + 13144)) {
        Obj* party = RPTR(RPTR(GameManager_GetInstance(), 36), 12);
        Obj* box = RPTR(RPTR(GameManager_GetInstance(), 36), 4) + 16140;
        uint32_t partyCount = PokeParty_GetMemberCountEx(party, 2);
        uint32_t boxCount = BoxPokemon_GetPokemonCountAll(box, heap, false);
        if (boxCount + partyCount != 0) result = true;
    }
    return result;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00467F58
extern "C" void JoinFestaPersonalData_FinishPersonalEvent(Obj* self) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData19FinishPersonalEventEv");
extern "C" void JoinFestaPersonalData_FinishPersonalEvent(Obj* self) {
    // retail-size: 120
    Obj* save = RPTR(RPTR(GameManager_GetInstance(), 36), 4) + 323360;
    __asm__ volatile("" : : "r"(save));  // keep the loads above the early return, as retail does
    uint32_t event = self[512];
    if (event == 0) return;
    if (event == 18) FUN_0043edd8(JoinFestaPersonalDataManager_GetInstance());
    if (self[580] != 0) FUN_0043e930(save, self[581]);
    else FUN_0043ea78(save, self[513]);
    self[512] = 0;
    self[513] = 0;
}
#endif

