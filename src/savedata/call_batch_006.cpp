// Hand-written reconstructions with direct calls, checked against retail with tools/equiv_check.py.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;
typedef unsigned long long uint64_t;

typedef uint8_t Obj;

extern "C" {
void Assert(const char*, uint32_t, int32_t, const char*) __asm__("_ZN4gfl25debug9GFLassertEPKcjiS2_");
void* aeabi_memcpy4(void*, const void*, uint32_t) __asm__("__aeabi_memcpy4");
void PersonalData_Copy(Obj*, const Obj*) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData4CopyERKS1_");
void G2DUtil_SetPanePos(Obj*, uint32_t, uint32_t, const float*) __asm__("_ZN3app4util7G2DUtil10SetPanePosEjjPKN4gfl24math22ExtendedVectorTemplateINS3_33SpecializedExtendedVectorTemplateIN2nn4math4VEC3EEEEE");
Obj* LytWk_GetPane(const Obj*, uint32_t) __asm__("_ZNK4gfl23lyt5LytWk7GetPaneEj");
Obj* LytWk_GetTextBoxPane(const Obj*, uint32_t) __asm__("_ZNK4gfl23lyt5LytWk14GetTextBoxPaneEj");
void MsgData_GetString(Obj*, uint32_t, Obj*) __asm__("_ZN4gfl23str7MsgData9GetStringEjRNS0_6StrBufE");
void WordSet_Expand(Obj*, Obj*, const Obj*) __asm__("_ZN5print7WordSet6ExpandEPN4gfl23str6StrBufEPKS3_");
void SetStringForLytTextBox(Obj*, const Obj*, uint32_t) __asm__("_ZN5print22SetStringForLytTextBoxEPN2nw3lyt7TextBoxEPKN4gfl23str6StrBufEN6System9MSGLANGIDE");
uint16_t* EventWork_GetEventWorkAdrs(Obj*, uint16_t) __asm__("_ZN5Field9EventWork16GetEventWorkAdrsEt");
Obj* PlayerListSelectLowerViewBase_getJoinFestaPlayerData(Obj*, uint32_t) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase22getJoinFestaPlayerDataEj");
void G2DUtil_AddDrawableLytWkForOneFrame(Obj*, Obj*, uint32_t, uint32_t, uint8_t, uint32_t) __asm__("_ZN3app4util7G2DUtil27AddDrawableLytWkForOneFrameEPNS0_19AppRenderingManagerEN4gfl23gfx12CtrDisplayNoEjhj");
void MenuCursor_Draw(Obj*, Obj*, uint32_t, uint32_t, uint8_t, uint32_t) __asm__("_ZN3app4tool10MenuCursor4DrawEPNS_4util19AppRenderingManagerEN4gfl23gfx12CtrDisplayNoENS5_3lyt11DisplayTypeEhj");
}

#define R32(p, off) (*reinterpret_cast<uint32_t*>((p) + (off)))
#define RPTR(p, off) (*reinterpret_cast<Obj**>((p) + (off)))

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00468F0C
extern "C" void JoinFestaPersonalData_Copy(Obj* self, const Obj* other) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData4CopyERKS1_");
extern "C" void JoinFestaPersonalData_Copy(Obj* self, const Obj* other) {
    const uint32_t* a = reinterpret_cast<const uint32_t*>(other + 520);
    uint32_t* b = reinterpret_cast<uint32_t*>(self + 520);
    for (int i = 0; i < 8; i++) b[i] = a[i];
    a = reinterpret_cast<const uint32_t*>(other + 552);
    b = reinterpret_cast<uint32_t*>(self + 552);
    for (int i = 0; i < 8; i++) b[i] = a[i];
    aeabi_memcpy4(self + 8, other + 8, 512);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00448A0C
extern "C" Obj* JoinFestaPlayerData_Assign(Obj* self, const Obj* other) __asm__("_ZN9NetAppLib11JoinFestaUI19JoinFestaPlayerDataaSERKS1_");
extern "C" Obj* JoinFestaPlayerData_Assign(Obj* self, const Obj* other) {
    PersonalData_Copy(self, other);
    aeabi_memcpy4(self + 584, other + 584, 88);
    const uint32_t* a = reinterpret_cast<const uint32_t*>(other + 672);
    uint32_t* b = reinterpret_cast<uint32_t*>(self + 672);
    for (int i = 0; i < 8; i++) b[i] = a[i];
    self[704] = other[704];
    self[705] = other[705];
    self[706] = other[706];
    return self;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CAEEC
extern "C" void TalkWindow_SetWindowPos(Obj* self, const float* pos) __asm__("_ZN3App4Tool10TalkWindow12SetWindowPosEPKN4gfl24math7Vector3E");
extern "C" void TalkWindow_SetWindowPos(Obj* self, const float* pos) {
    float v[3] = {pos[0], pos[1], pos[2]};
    G2DUtil_SetPanePos(RPTR(self, 96), 0, 68, v);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EED8
extern "C" void G2DUtil_GetPaneLocalPos(uint32_t* out, Obj* self, uint32_t lytIndex, uint32_t paneId) __asm__("_ZNK3app4util7G2DUtil15GetPaneLocalPosEjj");
extern "C" void G2DUtil_GetPaneLocalPos(uint32_t* out, Obj* self, uint32_t lytIndex, uint32_t paneId) {
    Obj* pane = LytWk_GetPane(RPTR(RPTR(self, 20), lytIndex * 8), paneId);
    if (!pane) { Assert(0, 0, 0, 0); return; }
    uint32_t x = R32(pane, 28);
    uint32_t y = R32(pane, 32);
    uint32_t z = R32(pane, 36);
    out[2] = z;
    out[0] = x;
    out[1] = y;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F5D4
extern "C" void G2DUtil_SetPanePos_Impl(Obj* self, uint32_t lytIndex, uint32_t paneId, const uint32_t* pos) __asm__("_ZN3app4util7G2DUtil10SetPanePosEjjPKN4gfl24math22ExtendedVectorTemplateINS3_33SpecializedExtendedVectorTemplateIN2nn4math4VEC3EEEEE");
extern "C" void G2DUtil_SetPanePos_Impl(Obj* self, uint32_t lytIndex, uint32_t paneId, const uint32_t* pos) {
    Obj* pane = LytWk_GetPane(RPTR(RPTR(self, 20), lytIndex * 8), paneId);
    if (!pane) { Assert(0, 0, 0, 0); return; }
    R32(pane, 28) = pos[0];
    R32(pane, 32) = pos[1];
    R32(pane, 36) = pos[2];
    pane[68] = (pane[68] & 0xEF) | 0x10;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311148
extern "C" void G2DUtil_SetTextBoxPaneString_Msg(Obj* self, uint32_t lytIndex, uint32_t paneId, uint32_t msgId) __asm__("_ZN3app4util7G2DUtil20SetTextBoxPaneStringEjjj");
extern "C" void G2DUtil_SetTextBoxPaneString_Msg(Obj* self, uint32_t lytIndex, uint32_t paneId, uint32_t msgId) {
    MsgData_GetString(RPTR(self, 32), msgId, RPTR(self, 44));
    Obj* pane = LytWk_GetTextBoxPane(RPTR(RPTR(self, 20), lytIndex * 8), paneId);
    if (pane) SetStringForLytTextBox(pane, RPTR(self, 44), 10);
    else Assert(0, 0, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311380
extern "C" void G2DUtil_SetTextBoxPaneStringExpand_Msg(Obj* self, uint32_t lytIndex, uint32_t paneId, uint32_t msgId) __asm__("_ZN3app4util7G2DUtil26SetTextBoxPaneStringExpandEjjj");
extern "C" void G2DUtil_SetTextBoxPaneStringExpand_Msg(Obj* self, uint32_t lytIndex, uint32_t paneId, uint32_t msgId) {
    MsgData_GetString(RPTR(self, 32), msgId, RPTR(self, 44));
    WordSet_Expand(RPTR(self, 40), RPTR(self, 48), RPTR(self, 44));
    Obj* pane = LytWk_GetTextBoxPane(RPTR(RPTR(self, 20), lytIndex * 8), paneId);
    if (pane) SetStringForLytTextBox(pane, RPTR(self, 48), 10);
    else Assert(0, 0, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003807DC
extern "C" bool FieldScriptSystem_IsEnableSceneScript(Obj* self) __asm__("_ZN5Field11FieldScript17FieldScriptSystem19IsEnableSceneScriptEv");
extern "C" bool FieldScriptSystem_IsEnableSceneScript(Obj* self) {
    Obj* entries = RPTR(self, 36);
    Obj* work = RPTR(RPTR(RPTR(self, 28), 36), 4) + 4096 + 1424;
    for (uint32_t i = 0; i < 8; i++) {
        Obj* entry = entries + i * 12;
        uint32_t type = R32(entry, 0);
        uint16_t id = *reinterpret_cast<uint16_t*>(entry + 4);
        uint16_t value = *reinterpret_cast<uint16_t*>(entry + 6);
        if (type == 2000) continue;
        if (*EventWork_GetEventWorkAdrs(work, id) == value) return true;
    }
    return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045506C
extern "C" void PlayerListSelectLowerViewBase_CallBack_CursorMove(Obj* self, const void* paneData, uint32_t a, uint32_t b, uint32_t index) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase19CallBack_CursorMoveEPvPKN3app4tool8PaneList9PANE_DATAEjj");
extern "C" void PlayerListSelectLowerViewBase_CallBack_CursorMove(Obj* self, const void* paneData, uint32_t a, uint32_t b, uint32_t index) {
    Obj* player = PlayerListSelectLowerViewBase_getJoinFestaPlayerData(self, index);
    if (player && RPTR(self, 248)) {
        Obj* target = RPTR(self, 248);
        R32(target, 12) = reinterpret_cast<uint32_t>(player);
        target[16] = 1;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CB46C
extern "C" void TalkWindow_Draw(Obj* self, uint32_t display, uint8_t a, uint32_t b) __asm__("_ZN3App4Tool10TalkWindow4DrawEN4gfl23gfx12CtrDisplayNoEhj");
extern "C" void TalkWindow_Draw(Obj* self, uint32_t display, uint8_t a, uint32_t b) {
    if (self[185]) G2DUtil_AddDrawableLytWkForOneFrame(RPTR(self, 96), RPTR(self, 136), display, 0, a, b);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F3370
extern "C" void CursorController_OnDraw(Obj* self, uint32_t display) __asm__("_ZN3app4tool16CursorController6OnDrawEN4gfl23gfx12CtrDisplayNoE");
extern "C" void CursorController_OnDraw(Obj* self, uint32_t display) {
    if (self[92] && RPTR(self, 84))
        MenuCursor_Draw(RPTR(self, 84), RPTR(self, 8), display, self[93] == 0, 128, 0);
}
#endif
