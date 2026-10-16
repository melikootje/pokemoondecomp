// Hand-written Savedata leaf reconstructions checked byte-for-byte against retail.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043933C
extern "C" void ResortSave_ResetBeansIvyHiddenCount(uint8_t* self) __asm__("_ZN8Savedata10ResortSave24ResetBeansIvyHiddenCountEv");
extern "C" void ResortSave_ResetBeansIvyHiddenCount(uint8_t* self) { self[0x572C] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439190
extern "C" void ResortSave_AddBeansIvyHiddenCount(uint8_t* self, uint8_t limit) __asm__("_ZN8Savedata10ResortSave22AddBeansIvyHiddenCountEh");
extern "C" void ResortSave_AddBeansIvyHiddenCount(uint8_t* self, uint8_t limit) {
    uint8_t count = self[0x572C];
    if (count < limit) self[0x572C] = count + 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004390D4
extern "C" void ResortSave_ResetNewHotSpaPokemon(uint8_t* self, int32_t index) __asm__("_ZN8Savedata10ResortSave21ResetNewHotSpaPokemonEi");
extern "C" void ResortSave_ResetNewHotSpaPokemon(uint8_t* self, int32_t index) { self[0x4628 + index * 236] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438704
extern "C" void ResortSave_SetPokeBeansNum(uint8_t* self, uint32_t kind, int32_t delta) __asm__("_ZN8Savedata10ResortSave15SetPokeBeansNumENS0_13PokeBeansEnumEi");
extern "C" void ResortSave_SetPokeBeansNum(uint8_t* self, uint32_t kind, int32_t delta) {
    uint8_t* slot = self + kind + 0x5650;
    int32_t value = *slot + delta;
    if (value < 0) value = 0;
    else if (value > 255) value = 255;
    *slot = value;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B654
extern "C" uint32_t PokeFinderSave_GetSpotFlags(uint8_t* self, uint32_t index) __asm__("_ZN8Savedata14PokeFinderSave12GetSpotFlagsEj");
extern "C" uint32_t PokeFinderSave_GetSpotFlags(uint8_t* self, uint32_t index) {
    if (index >= 60) return 0;
    return *reinterpret_cast<uint32_t*>(self + index * 48 + 0x24);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043DC4C
extern "C" uint32_t QRReaderSaveData_ChargeScanPower(uint8_t* self, uint32_t amount, uint32_t* added) __asm__("_ZN8Savedata16QRReaderSaveData15ChargeScanPowerEjPj");
extern "C" uint32_t QRReaderSaveData_ChargeScanPower(uint8_t* self, uint32_t amount, uint32_t* added) {
    uint32_t before = self[11];
    uint32_t after = before + amount;
    if (after > 100) after = 100;
    self[11] = after;
    if (added) *added = (after & 0xFF) - before;
    return self[11];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B254
extern "C" void BattleInstSave_ClearScoutTrainerIndex(uint8_t* self, int32_t index) __asm__("_ZN8Savedata14BattleInstSave22ClearScoutTrainerIndexEi");
extern "C" void BattleInstSave_ClearScoutTrainerIndex(uint8_t* self, int32_t index) {
    uint16_t* ids = reinterpret_cast<uint16_t*>(self) + index;
    ids[0x28 / 2] = 0xFFFF;
    ids[0x8C / 2] = 0xFFFF;
    ids[0xF0 / 2] = 0xFFFF;
    self[index + 344] = 0;
    self[index + 394] = 0;
}
#endif
