// Hand-written reconstructions checked against retail with tools/equiv_check.py.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

typedef uint8_t Obj;

extern "C" {
void PokeModel_ChangeAnimationDirect(Obj*, int32_t, bool) __asm__("_ZN8PokeTool9PokeModel21ChangeAnimationDirectEib");
Obj* PlayerListSelectLowerViewBase_getJoinFestaPlayerData(Obj*, uint32_t) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase22getJoinFestaPlayerDataEj");
}

#define R32(p, off) (*reinterpret_cast<uint32_t*>((p) + (off)))
#define RPTR(p, off) (*reinterpret_cast<Obj**>((p) + (off)))

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004347D0
extern "C" void PokeModel_ChangeAnimation_Finder(Obj* self, int32_t anime, bool loop) __asm__("_ZN8PokeTool9PokeModel15ChangeAnimationENS_23MODEL_ANIME_POKE_FINDEREb");
extern "C" void PokeModel_ChangeAnimation_Finder(Obj* self, int32_t anime, bool loop) { PokeModel_ChangeAnimationDirect(self, anime, loop); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A40E0
extern "C" bool BaseCamera_IsAnimationLastFrame(Obj* self) __asm__("_ZNK7poke_3d5model10BaseCamera20IsAnimationLastFrameEv");
extern "C" bool BaseCamera_IsAnimationLastFrame(Obj* self) {
    if (R32(self, 76) == 0) return true;
    return self[54] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x005205CC
extern "C" uint32_t mwmofastaudioDecoderGetFrame(Obj* decoder, uint32_t* first, uint32_t* second) __asm__("mwmofastaudioDecoderGetFrame");
extern "C" uint32_t mwmofastaudioDecoderGetFrame(Obj* decoder, uint32_t* first, uint32_t* second) {
    if (!decoder) return 0;
    *first = R32(decoder, 4);
    *second = R32(decoder, 12);
    return 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00520AB4
extern "C" uint32_t mwmoimaadpcmDecoderGetFrame(Obj* decoder, uint32_t* first, uint32_t* second) __asm__("mwmoimaadpcmDecoderGetFrame");
extern "C" uint32_t mwmoimaadpcmDecoderGetFrame(Obj* decoder, uint32_t* first, uint32_t* second) {
    if (!decoder) return 0;
    *first = R32(decoder, 16);
    *second = R32(decoder, 24);
    return 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CA620
extern "C" void TalkWindow_CallMsgWin(Obj* self) __asm__("_ZN3App4Tool10TalkWindow10CallMsgWinEv");
extern "C" void TalkWindow_CallMsgWin(Obj* self) {
    (void)*reinterpret_cast<volatile uint32_t*>(RPTR(self, 96) + 52);  // retail still performs this load
    self[185] = 1;
    self[148] = 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA018
extern "C" bool MenuWindow_IsModuleFree(Obj* self) __asm__("_ZN3app4tool10MenuWindow12IsModuleFreeEv");
extern "C" bool MenuWindow_IsModuleFree(Obj* self) {
    if (self[346] == 1 && self[192] == 0) return false;
    return reinterpret_cast<int8_t*>(RPTR(self, 204))[33] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AF4F8
extern "C" void PlayerListSelectLowerViewBase_CallBack_CursorMove_Thunk(Obj* subobject, const void* paneData, uint32_t a, uint32_t b, uint32_t index) __asm__("_ZThn200_N9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase19CallBack_CursorMoveEPvPKN3app4tool8PaneList9PANE_DATAEjj");
extern "C" void PlayerListSelectLowerViewBase_CallBack_CursorMove_Thunk(Obj* subobject, const void* paneData, uint32_t a, uint32_t b, uint32_t index) {
    Obj* self = subobject - 200;
    Obj* player = PlayerListSelectLowerViewBase_getJoinFestaPlayerData(self, index);
    if (player && RPTR(self, 248)) {
        Obj* target = RPTR(self, 248);
        R32(target, 12) = reinterpret_cast<uint32_t>(player);
        target[16] = 1;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CC544
extern "C" void NewPaneList_SetupScrollParam(Obj* self, const uint32_t* param) __asm__("_ZN3App4Tool11NewPaneList16SetupScrollParamEPKNS1_11ScrollParamE");
extern "C" void NewPaneList_SetupScrollParam(Obj* self, const uint32_t* param) {
    uint32_t* dst = reinterpret_cast<uint32_t*>(self + 240);
    for (int i = 0; i < 8; i++) dst[i] = param[i];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438878
extern "C" void ResortSave_AddAdventureItem(Obj* self, uint16_t item, int32_t count) __asm__("_ZN8Savedata10ResortSave16AddAdventureItemEti");
extern "C" void ResortSave_AddAdventureItem(Obj* self, uint16_t item, int32_t count) {
    uint16_t* slots = reinterpret_cast<uint16_t*>(self + 22016);
    for (int32_t i = 0; i < count && i < 20; i++) {
        if (slots[i] == 0) { slots[i] = item; return; }
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015345C
extern "C" void DEFAULT_POWERUP_DESC_Copy(Obj* dst, const Obj* src) __asm__("_Z25DEFAULT_POWERUP_DESC_CopyP18DefaultPowerUpDescRKS_");
extern "C" void DEFAULT_POWERUP_DESC_Copy(Obj* dst, const Obj* src) {
    for (int i = 0; i < 6; i++) dst[i] = src[i];
    R32(dst, 8) = *reinterpret_cast<const uint32_t*>(src + 8);
    R32(dst, 12) = *reinterpret_cast<const uint32_t*>(src + 12);
    R32(dst, 16) = *reinterpret_cast<const uint32_t*>(src + 16);
    R32(dst, 20) = *reinterpret_cast<const uint32_t*>(src + 20);
}
#endif
