// Hand-written reconstructions checked against retail with tools/equiv_check.py.
// Retail asserts whose call was compiled out to a nop are omitted (they have no effect).
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

typedef uint8_t Obj;

#define R32(p, off) (*reinterpret_cast<uint32_t*>((p) + (off)))
#define R16(p, off) (*reinterpret_cast<uint16_t*>((p) + (off)))
#define RPTR(p, off) (*reinterpret_cast<Obj**>((p) + (off)))

static inline uint16_t SwapBytes16(uint16_t v) { return (uint16_t)((v << 8) | (v >> 8)); }

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438E80
extern "C" uint32_t ResortSave_GetFarmPokemonBoxPos(Obj* self, int32_t index) __asm__("_ZN8Savedata10ResortSave20GetFarmPokemonBoxPosEi");
extern "C" uint32_t ResortSave_GetFarmPokemonBoxPos(Obj* self, int32_t index) { return SwapBytes16(R16(self + index * 236, 5214)); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004394E0
extern "C" uint32_t ResortSave_GetAdventurePokemonBoxPos(Obj* self, int32_t index) __asm__("_ZN8Savedata10ResortSave25GetAdventurePokemonBoxPosEi");
extern "C" uint32_t ResortSave_GetAdventurePokemonBoxPos(Obj* self, int32_t index) { return SwapBytes16(R16(self + index * 236, 9462)); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439650
extern "C" uint32_t ResortSave_GetFriendShipPokemonBoxPos(Obj* self, int32_t index) __asm__("_ZN8Savedata10ResortSave26GetFriendShipPokemonBoxPosEi");
extern "C" uint32_t ResortSave_GetFriendShipPokemonBoxPos(Obj* self, int32_t index) { return SwapBytes16(R16(self + index * 236, 258)); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EB04
extern "C" Obj* JoinFestaDataSave_GetGlobalAttractionData(Obj* self, uint8_t index) __asm__("_ZN8Savedata17JoinFestaDataSave23GetGlobalAttractionDataEh");
extern "C" Obj* JoinFestaDataSave_GetGlobalAttractionData(Obj* self, uint8_t index) { return self + 10948 + (index < 12 ? index * 80 : 0); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001551DC
extern "C" uint32_t GetCornerColorFromBtlClientId(uint32_t clientId) __asm__("_Z29GetCornerColorFromBtlClientId13BTL_CLIENT_ID");
extern "C" uint32_t GetCornerColorFromBtlClientId(uint32_t clientId) {
    uint32_t color = 2;
    if (clientId == 1) color = 1;
    else if (clientId == 2) color = 3;
    else if (clientId == 3) color = 0;
    return color;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003833E0
extern "C" bool FieldScriptWork_SetTempWorkValue(Obj* self, uint16_t id, uint32_t value) __asm__("_ZN5Field11FieldScript4Work16SetTempWorkValueEtj");
extern "C" bool FieldScriptWork_SetTempWorkValue(Obj* self, uint16_t id, uint32_t value) {
    if ((uint32_t)id - 32768 >= 95) return false;
    uint32_t* slot = reinterpret_cast<uint32_t*>(self + id * 4 - 130964);
    if (!slot) return false;
    *slot = value;
    return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7D04
extern "C" uint32_t BoxAppSetup_GetMoveMode(Obj* self) __asm__("_ZN3App3Box11BoxAppSetup11GetMoveModeEv");
extern "C" uint32_t BoxAppSetup_GetMoveMode(Obj* self) {
    if (self[102] == 1) return 0;
    if (self[103] == 1) return 1;
    if (self[104] == 1) return 2;
    return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7D80
extern "C" uint32_t BoxAppSetup_GetSelectMode(Obj* self) __asm__("_ZN3App3Box11BoxAppSetup13GetSelectModeEv");
extern "C" uint32_t BoxAppSetup_GetSelectMode(Obj* self) {
    if (self[99] == 1) return 0;
    if (self[100] == 1) return 1;
    if (self[101] == 1) return 2;
    return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048CB28
extern "C" int32_t ListMenu_GetSelectId(Obj* self) __asm__("_ZNK3App4Tool8ListMenu11GetSelectIdEv");
extern "C" int32_t ListMenu_GetSelectId(Obj* self) {
    int32_t index = (int32_t)(R32(self, 848) + R32(self, 844));
    if (!(index < (int32_t)R32(self, 852))) return 0;
    if (R32(self, 864) == (uint32_t)-2) return -2;
    return *reinterpret_cast<int32_t*>(RPTR(self + index * 4, 332));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F0A54
extern "C" void GameEventManager_ChangeEvent(Obj* self, Obj* event) __asm__("_ZN7GameSys16GameEventManager11ChangeEventEPNS_9GameEventE");
extern "C" void GameEventManager_ChangeEvent(Obj* self, Obj* event) {
    Obj* current = RPTR(self, 0);
    if (current) R32(event, 4) = R32(current, 4);
    RPTR(self, 8) = event;
}
#endif
