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
extern Obj DAT_00673668[] __asm__("DAT_00673668");
extern Obj DAT_0067204c[] __asm__("DAT_0067204c");
void HeapFree(void*) __asm__("_ZN4gfl24heap22GflHeapFreeMemoryBlockEPv");
void CoreParam_Clear(Obj*) __asm__("_ZN3pml8pokepara9CoreParam5ClearEv");
void StrWin_Clear(Obj*) __asm__("_ZN4gfl23str6StrWin5ClearEv");
uint32_t UIView_IsExistSubView(Obj*, Obj*) __asm__("_ZN3app2ui6UIView14IsExistSubViewEPS1_");
void FUN_00287f60(Obj*, Obj*) __asm__("FUN_00287f60");
void FUN_00443d6c(Obj*) __asm__("FUN_00443d6c");
void FUN_003f4290(Obj*) __asm__("FUN_003f4290");
void FUN_004415e8(Obj*) __asm__("FUN_004415e8");
void FUN_00444194(Obj*) __asm__("FUN_00444194");
void FUN_002d3e04(Obj*, uint32_t) __asm__("FUN_002d3e04");
}

// Virtual call through slot `offset` of the object's vtable.
#define VCALL(RET, obj, offset, ...) ((RET (*)(Obj*, ##__VA_ARGS__))(*reinterpret_cast<uint32_t*>(*reinterpret_cast<Obj**>(obj) + (offset))))

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E7394
extern "C" void UIView_UpdateTree(Obj* self) __asm__("_ZN3app2ui6UIView10UpdateTreeEv");
extern "C" void UIView_UpdateTree(Obj* self) {
    self[110] = 1;
    VCALL(void, self, 52)(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310E2C
extern "C" void G2DUtil_DeleteAppLytAccessor(Obj* self) __asm__("_ZN3app4util7G2DUtil20DeleteAppLytAccessorEv");
extern "C" void G2DUtil_DeleteAppLytAccessor(Obj* self) {
    Obj* accessor = RPTR(self, 60);
    if (accessor) {
        VCALL(void, accessor, 4)(accessor);
        RPTR(self, 60) = 0;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003100C0
extern "C" uint32_t G2DUtil_DeleteMsgCursor(Obj* self) __asm__("_ZN3app4util7G2DUtil15DeleteMsgCursorEv");
extern "C" uint32_t G2DUtil_DeleteMsgCursor(Obj* self) {
    Obj* cursor = RPTR(self, 56);
    if (cursor) {
        VCALL(void, cursor, 4)(cursor);
        RPTR(self, 56) = 0;
    }
    return 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F2874
extern "C" void GameData_FormatStart(Obj* self, Obj* heap) __asm__("_ZN7GameSys8GameData11FormatStartEPN4gfl24heap11CtrHeapBaseE");
extern "C" void GameData_FormatStart(Obj* self, Obj* heap) {
    // indirect-args: 2
    Obj* backup = RPTR(self, 8);
    if (backup) VCALL(void, backup, 12, Obj*)(backup, heap);
    self[5276] = 5;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F2A50
extern "C" void GameData_ClearSaveData(Obj* self, Obj* heap) __asm__("_ZN7GameSys8GameData13ClearSaveDataEPN4gfl24heap11CtrHeapBaseE");
extern "C" void GameData_ClearSaveData(Obj* self, Obj* heap) {
    // indirect-args: 2
    Obj* save = RPTR(self, 4);
    VCALL(void, save, 20, Obj*)(save, heap);
    FUN_00443d6c(RPTR(self, 48));
    FUN_003f4290(self);
    self[65] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438EC4
extern "C" void ResortSave_GetFriendShipPokemon(Obj* self, int32_t index, Obj* pokemon) __asm__("_ZN8Savedata10ResortSave20GetFriendShipPokemonEiPN3pml8pokepara9CoreParamE");
extern "C" void ResortSave_GetFriendShipPokemon(Obj* self, int32_t index, Obj* pokemon) {
    // indirect-args: 2
    if (index >= 18) { CoreParam_Clear(pokemon); return; }
    VCALL(void, pokemon, 0, Obj*)(pokemon, self + index * 236 + 26);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438088
extern "C" void ResortSave_GetGimPokemon(Obj* self, int32_t index, Obj* pokemon) __asm__("_ZN8Savedata10ResortSave13GetGimPokemonEiPN3pml8pokepara9CoreParamE");
extern "C" void ResortSave_GetGimPokemon(Obj* self, int32_t index, Obj* pokemon) {
    // indirect-args: 2
    if (index >= 18) { CoreParam_Clear(pokemon); return; }
    VCALL(void, pokemon, 0, Obj*)(pokemon, self + index * 236 + 13478);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004381F0
extern "C" void ResortSave_GetFarmPokemon(Obj* self, int32_t index, Obj* pokemon) __asm__("_ZN8Savedata10ResortSave14GetFarmPokemonEiPN3pml8pokepara9CoreParamE");
extern "C" void ResortSave_GetFarmPokemon(Obj* self, int32_t index, Obj* pokemon) {
    // indirect-args: 2
    if (index >= 18) { CoreParam_Clear(pokemon); return; }
    VCALL(void, pokemon, 0, Obj*)(pokemon, self + index * 236 + 4982);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438940
extern "C" void ResortSave_GetHotSpaPokemon(Obj* self, int32_t index, Obj* pokemon) __asm__("_ZN8Savedata10ResortSave16GetHotSpaPokemonEiPN3pml8pokepara9CoreParamE");
extern "C" void ResortSave_GetHotSpaPokemon(Obj* self, int32_t index, Obj* pokemon) {
    // indirect-args: 2
    if (index >= 18) { CoreParam_Clear(pokemon); return; }
    VCALL(void, pokemon, 0, Obj*)(pokemon, self + index * 236 + 17726);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438D08
extern "C" void ResortSave_GetAdventurePokemon(Obj* self, int32_t index, Obj* pokemon) __asm__("_ZN8Savedata10ResortSave19GetAdventurePokemonEiPN3pml8pokepara9CoreParamE");
extern "C" void ResortSave_GetAdventurePokemon(Obj* self, int32_t index, Obj* pokemon) {
    // indirect-args: 2
    if (index >= 18) { CoreParam_Clear(pokemon); return; }
    VCALL(void, pokemon, 0, Obj*)(pokemon, self + index * 236 + 9230);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438228
extern "C" void ResortSave_GetWildPokemon(Obj* self, int32_t index, Obj* pokemon) __asm__("_ZN8Savedata10ResortSave14GetWildPokemonEiPN3pml8pokepara9CoreParamE");
extern "C" void ResortSave_GetWildPokemon(Obj* self, int32_t index, Obj* pokemon) {
    // indirect-args: 2
    VCALL(void, pokemon, 0, Obj*)(pokemon, self + index * 236 + 4274);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310CB0
extern "C" void G2DUtil_DeleteMessageWindow(Obj* self) __asm__("_ZN3app4util7G2DUtil19DeleteMessageWindowEv");
extern "C" void G2DUtil_DeleteMessageWindow(Obj* self) {
    if (RPTR(self, 52)) {
        StrWin_Clear(RPTR(self, 52));
        Obj* window = RPTR(self, 52);
        if (window) {
            VCALL(void, window, 4)(window);
            RPTR(self, 52) = 0;
        }
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C02B4
extern "C" void SystemFont_DeleteNumFont() __asm__("_ZN5print24SystemFont_DeleteNumFontEv");
extern "C" void SystemFont_DeleteNumFont() {
    Obj* font = *reinterpret_cast<Obj**>(DAT_0067204c);
    Obj* numFont = RPTR(font, 32);
    if (numFont) {
        VCALL(void, numFont, 8)(numFont);
        HeapFree(RPTR(font, 36));
        RPTR(font, 32) = 0;
        RPTR(font, 36) = 0;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F27D0
extern "C" uint32_t GameData_FormatMain(Obj* self, Obj* result) __asm__("_ZN7GameSys8GameData10FormatMainEPN4gfl22fs17FsCtrBackupSystem6ResultE");
extern "C" uint32_t GameData_FormatMain(Obj* self, Obj* result) {
    // indirect-args: 2
    Obj* backup = RPTR(self, 8);
    if (!backup) return 1;
    uint32_t done = VCALL(uint32_t, backup, 16, Obj*)(backup, result);
    if (!done) return done;
    self[5276] = 0;
    return 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F2B54
extern "C" void GameData_FirstSaveStart(Obj* self, Obj* heap) __asm__("_ZN7GameSys8GameData14FirstSaveStartEPN4gfl24heap11CtrHeapBaseE");
extern "C" void GameData_FirstSaveStart(Obj* self, Obj* heap) {
    // indirect-args: 3
    RPTR(self, 72) = heap;
    FUN_004415e8(self);
    FUN_00444194(RPTR(self, 4));
    Obj* backup = RPTR(self, 8);
    VCALL(void, backup, 40, Obj*, Obj*)(backup, RPTR(self, 72), RPTR(self, 4));
    self[5276] = 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F31CC
extern "C" void GameData_SaveStart(Obj* self, Obj* heap) __asm__("_ZN7GameSys8GameData9SaveStartEPN4gfl24heap11CtrHeapBaseE");
extern "C" void GameData_SaveStart(Obj* self, Obj* heap) {
    // indirect-args: 3
    Obj* backup = RPTR(self, 8);
    if (!backup) return;
    RPTR(self, 72) = heap;
    FUN_004415e8(self);
    FUN_00444194(RPTR(self, 4));
    VCALL(void, backup, 32, Obj*, Obj*)(backup, RPTR(self, 72), RPTR(self, 4));
    self[5276] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F7F4
extern "C" uint32_t G2DUtil_PrintMessage(Obj* self) __asm__("_ZN3app4util7G2DUtil12PrintMessageEv");
extern "C" uint32_t G2DUtil_PrintMessage(Obj* self) {
    uint32_t state = 4;
    Obj* window = RPTR(self, 52);
    if (window) {
        state = VCALL(uint32_t, window, 28)(window);
        Obj* cursor = RPTR(self, 56);
        if (cursor && (int8_t)cursor[8] == 0) FUN_002d3e04(RPTR(self, 56), state == 2 ? 1 : 0);
    }
    return state;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E76C0
extern "C" void UIView_RemoveFromSuperView(Obj* self) __asm__("_ZN3app2ui6UIView19RemoveFromSuperViewEv");
extern "C" void UIView_RemoveFromSuperView(Obj* self) {
    Obj* parent = RPTR(self, 64);
    if (parent) {
        if (UIView_IsExistSubView(parent, self)) {
            FUN_00287f60(parent + 68, self + 56);
            VCALL(void, parent, 44)(parent);
            VCALL(void, self, 48)(self);
        }
        RPTR(self, 64) = 0;
    }
}
#endif

