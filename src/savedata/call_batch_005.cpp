// Hand-written reconstructions with direct calls, checked against retail with tools/equiv_check.py
// (callee sequence and arguments are compared with the callees stubbed).
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;
typedef unsigned long long uint64_t;

#define VFP __attribute__((pcs("aapcs-vfp")))
typedef uint8_t Obj;

extern "C" {
uint32_t Waza_GetParam(uint32_t waza, uint32_t id) __asm__("_ZN3pml8wazadata8GetParamE6WazaNoNS0_7ParamIDE");
void Assert(const char*, uint32_t, int32_t, const char*) __asm__("_ZN4gfl25debug9GFLassertEPKcjiS2_");
void AssertStop(const char*, uint32_t, const char*) __asm__("_ZN4gfl25debug13GFLassertStopEPKcjS2_");
void StrBuf_PutStr(const Obj*, uint32_t*, uint32_t) __asm__("_ZNK4gfl23str6StrBuf6PutStrEPwj");
void PokemonParam_DeserializeFull(Obj*, const void*) __asm__("_ZN3pml8pokepara12PokemonParam16Deserialize_FullEPKv");
void* aeabi_memcpy(void*, const void*, uint32_t) __asm__("__aeabi_memcpy");
void* aeabi_memcpy4(void*, const void*, uint32_t) __asm__("__aeabi_memcpy4");
void HeapFree(void*) __asm__("_ZN4gfl24heap22GflHeapFreeMemoryBlockEPv");
uint32_t Regulation_GetLevelRangeType(const Obj*) __asm__("_ZNK10Regulation17GetLevelRangeTypeEv");
uint32_t ItemData_GetParam(const Obj*, uint32_t) __asm__("_ZNK4item9ITEM_DATA8GetParamENS0_11ITEM_PRM_IDE");
uint32_t BinLinker_GetDataMax(const Obj*) __asm__("_ZNK4gfl22fs17BinLinkerAccessor10GetDataMaxEv");
Obj* PersonalDataManager_GetInstance() __asm__("_ZN4gfl24base17SingletonAccessorIN9NetAppLib9JoinFesta28JoinFestaPersonalDataManagerEE11GetInstanceEv");
uint32_t PersonalData_IsOpenAttraction(const Obj*) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData16IsOpenAttractionEv");
void MsgData_GetString(Obj*, uint32_t, Obj*) __asm__("_ZN4gfl23str7MsgData9GetStringEjRNS0_6StrBufE");
void SetStringForLytTextBox(Obj*, const Obj*, uint32_t) __asm__("_ZN5print22SetStringForLytTextBoxEPN2nw3lyt7TextBoxEPKN4gfl23str6StrBufEN6System9MSGLANGIDE");
void WordSet_Expand(Obj*, Obj*, const Obj*) __asm__("_ZN5print7WordSet6ExpandEPN4gfl23str6StrBufEPKS3_");
Obj* LytWk_GetTextBoxPane(const Obj*, uint32_t) __asm__("_ZNK4gfl23lyt5LytWk14GetTextBoxPaneEj");
Obj* LytWk_GetPane(const Obj*, uint32_t) __asm__("_ZNK4gfl23lyt5LytWk7GetPaneEj");
uint32_t LytWk_IsBindAnime(const Obj*, uint32_t) __asm__("_ZNK4gfl23lyt5LytWk11IsBindAnimeEj");
void LytWk_SetAutoAnime(Obj*, uint32_t, bool) __asm__("_ZN4gfl23lyt5LytWk12SetAutoAnimeEjb");
uint32_t CursorLayoutWork_Delete(Obj*) __asm__("_ZN3app4tool10MenuCursor16DeleteLayoutWorkEv");
uint32_t G2DUtil_IsDrawing(const Obj*) __asm__("_ZNK3app4util7G2DUtil9IsDrawingEv");
void FileCloseSync(uint32_t) __asm__("_ZN3app4util12FileAccessor13FileCloseSyncEj");
void* LytSys_Destroy(Obj*) __asm__("_ZN4gfl23lyt6LytSysD1Ev");
void OperatorDelete(void*) __asm__("_ZdlPv");
void MessageWindow_SetMessageSpeed(Obj*, uint32_t, bool) __asm__("_ZN5print13MessageWindow15SetMessageSpeedEN8Savedata10ConfigSave9MSG_SPEEDEb");
void G2DUtil_SetMessageFinishMode(Obj*, uint32_t, uint8_t) __asm__("_ZN3app4util7G2DUtil20SetMessageFinishModeEN4gfl23str6StrWin10FinishTypeEh");
void BaseModel_SetRotationVec(Obj*, const float*, uint32_t) __asm__("_ZN7poke_3d5model9BaseModel11SetRotationERKN4gfl24math7Vector3ENS3_13EulerRotation13RotationOrderE");
void G2DUtil_SetPanePos(Obj*, uint32_t, uint32_t, const float*) __asm__("_ZN3app4util7G2DUtil10SetPanePosEjjPKN4gfl24math22ExtendedVectorTemplateINS3_33SpecializedExtendedVectorTemplateIN2nn4math4VEC3EEEEE");
VFP void PokeModel_SetMegaGangarEffectState(Obj*, float) __asm__("_ZN8PokeTool9PokeModel24SetMegaGangarEffectStateEf");
}

#define R32(p, off) (*reinterpret_cast<uint32_t*>((p) + (off)))
#define RPTR(p, off) (*reinterpret_cast<Obj**>((p) + (off)))

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043A77C
extern "C" void UnionPokemon_GetPokemon(Obj* self, Obj* param) __asm__("_ZN8Savedata12UnionPokemon10GetPokemonEPN3pml8pokepara12PokemonParamE");
extern "C" void UnionPokemon_GetPokemon(Obj* self, Obj* param) { PokemonParam_DeserializeFull(param, self + 4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443958
extern "C" void MyStatus_SetNameString(Obj* self, const Obj* name) __asm__("_ZN8Savedata8MyStatus13SetNameStringEPN4gfl23str6StrBufE");
extern "C" void MyStatus_SetNameString(Obj* self, const Obj* name) { StrBuf_PutStr(name, reinterpret_cast<uint32_t*>(self + 64), 13); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443480
extern "C" void GtsData_SetWantPokeName(Obj* self, const Obj* name) __asm__("_ZN8Savedata7GtsData15SetWantPokeNameEPKN4gfl23str6StrBufE");
extern "C" void GtsData_SetWantPokeName(Obj* self, const Obj* name) { StrBuf_PutStr(name, reinterpret_cast<uint32_t*>(self + 274), 13); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8728
extern "C" uint32_t MyStatus_Serialize(Obj* self, void* dst) __asm__("_ZNK8Savedata8MyStatus9SerializeEPv");
extern "C" uint32_t MyStatus_Serialize(Obj* self, void* dst) { aeabi_memcpy(dst, self + 8, 192); return 192; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043F3EC
extern "C" void JoinFestaDataSave_SetTheme(Obj* self, uint8_t theme) __asm__("_ZN8Savedata17JoinFestaDataSave8SetThemeEh");
extern "C" void JoinFestaDataSave_SetTheme(Obj* self, uint8_t theme) {
    if (theme < 4) self[31] = theme;
    else Assert(0, 0, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00444F50
extern "C" void FieldMenu_SetMenuPage(Obj* self, uint32_t page) __asm__("_ZN8Savedata9FieldMenu11SetMenuPageEj");
extern "C" void FieldMenu_SetMenuPage(Obj* self, uint32_t page) {
    if (page >= 2) { Assert(0, 0, 0, 0); return; }
    R32(self, 4) = (R32(self, 4) & ~2u) | ((page << 1) & 2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EB48
extern "C" void JoinFestaDataSave_SetGlobalAttractionData(Obj* self, uint8_t index, const void* data) __asm__("_ZN8Savedata17JoinFestaDataSave23SetGlobalAttractionDataEhPN9NetAppLib9JoinFesta31JoinFestaGlobalAttractionDefine8SaveDataE");
extern "C" void JoinFestaDataSave_SetGlobalAttractionData(Obj* self, uint8_t index, const void* data) {
    if (index >= 12) { Assert(0, 0, 0, 0); return; }
    aeabi_memcpy4(self + 10948 + index * 80, data, 80);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E168
extern "C" uint8_t wazadata_GetCategory(uint32_t waza) __asm__("_ZN3pml8wazadata11GetCategoryE6WazaNo");
extern "C" uint8_t wazadata_GetCategory(uint32_t waza) { return Waza_GetParam(waza, 1); }
#endif
#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E200
extern "C" uint8_t wazadata_GetDamageType(uint32_t waza) __asm__("_ZN3pml8wazadata13GetDamageTypeE6WazaNo");
extern "C" uint8_t wazadata_GetDamageType(uint32_t waza) { return Waza_GetParam(waza, 2); }
#endif
#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E444
extern "C" uint16_t wazadata_GetZenryokuWazaNo(uint32_t waza) __asm__("_ZN3pml8wazadata17GetZenryokuWazaNoE6WazaNo");
extern "C" uint16_t wazadata_GetZenryokuWazaNo(uint32_t waza) { return Waza_GetParam(waza, 32); }
#endif
#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E494
extern "C" uint8_t wazadata_GetZenryokuWazaEffect(uint32_t waza) __asm__("_ZN3pml8wazadata21GetZenryokuWazaEffectE6WazaNo");
extern "C" uint8_t wazadata_GetZenryokuWazaEffect(uint32_t waza) { return Waza_GetParam(waza, 34); }
#endif
#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E524
extern "C" uint8_t wazadata_GetType(uint32_t waza) __asm__("_ZN3pml8wazadata7GetTypeE6WazaNo");
extern "C" uint8_t wazadata_GetType(uint32_t waza) { return Waza_GetParam(waza, 0); }
#endif
#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E694
extern "C" uint16_t wazadata_GetPower(uint32_t waza) __asm__("_ZN3pml8wazadata8GetPowerE6WazaNo");
extern "C" uint16_t wazadata_GetPower(uint32_t waza) { return Waza_GetParam(waza, 3); }
#endif
#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E1E8
extern "C" bool wazadata_IsAlwaysHit(uint32_t waza) __asm__("_ZN3pml8wazadata11IsAlwaysHitE6WazaNo");
extern "C" bool wazadata_IsAlwaysHit(uint32_t waza) { return Waza_GetParam(waza, 31) != 0; }
#endif
#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E6A8
extern "C" bool wazadata_IsDamage(uint32_t waza) __asm__("_ZN3pml8wazadata8IsDamageE6WazaNo");
extern "C" bool wazadata_IsDamage(uint32_t waza) { return Waza_GetParam(waza, 3) != 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049F9F4
extern "C" uint32_t AreaCharaAccessor_GetDataNum(Obj* self) __asm__("_ZNK5Field9MoveModel31FieldMoveModelAreaCharaAccessor10GetDataNumEv");
extern "C" uint32_t AreaCharaAccessor_GetDataNum(Obj* self) {
    Obj* linker = RPTR(self, 4);
    if (!linker) return 0;
    return BinLinker_GetDataMax(linker);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003803D0
extern "C" void FieldScriptSystem_SetMsgUpdateFunc(Obj* self, uint32_t func, uint32_t arg, uint32_t extra) __asm__("_ZN5Field11FieldScript17FieldScriptSystem16SetMsgUpdateFuncEPFbjPvEjS2_");
extern "C" void FieldScriptSystem_SetMsgUpdateFunc(Obj* self, uint32_t func, uint32_t arg, uint32_t extra) {
    if (R32(self, 204) == 0) { R32(self, 204) = func; R32(self, 208) = arg; R32(self, 212) = extra; }
    else AssertStop(0, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459D78
extern "C" uint32_t RegulationDrawInfo_GetBattleRuleMessageID(Obj* self) __asm__("_ZN9NetAppLib2UI18RegulationDrawInfo22GetBattleRuleMessageIDEv");
extern "C" uint32_t RegulationDrawInfo_GetBattleRuleMessageID(Obj* self) {
    uint32_t id = 49;
    uint32_t type = Regulation_GetLevelRangeType(self + 8);
    if (type == 0) id = 51;
    else if (type == 3) id = 50;
    return id;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00430B5C
extern "C" bool KawaigariParamOptionCoreManager_Finalize(Obj* self) __asm__("_ZN8PokeTool31KawaigariParamOptionCoreManager8FinalizeEv");
extern "C" bool KawaigariParamOptionCoreManager_Finalize(Obj* self) {
    HeapFree(RPTR(self, 4));
    self[12] = 0;
    R32(self, 8) = 0;
    return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00471660
extern "C" uint32_t JoinFestaAttractionManager_GetTimeLimitFrame(Obj* self) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager17GetTimeLimitFrameEv");
extern "C" uint32_t JoinFestaAttractionManager_GetTimeLimitFrame(Obj* self) {
    uint32_t open = PersonalData_IsOpenAttraction(PersonalDataManager_GetInstance() + 8);
    return open ? R32(self, 44) : 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311080
extern "C" void G2DUtil_SetTextBoxPaneString_Id(Obj* self, Obj* textBox, uint32_t id) __asm__("_ZN3app4util7G2DUtil20SetTextBoxPaneStringEPN2nw3lyt7TextBoxEj");
extern "C" void G2DUtil_SetTextBoxPaneString_Id(Obj* self, Obj* textBox, uint32_t id) {
    MsgData_GetString(RPTR(self, 32), id, RPTR(self, 44));
    SetStringForLytTextBox(textBox, RPTR(self, 44), 10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311314
extern "C" void G2DUtil_SetTextBoxPaneStringExpand_Buf(Obj* self, Obj* textBox, Obj* buf) __asm__("_ZN3app4util7G2DUtil26SetTextBoxPaneStringExpandEPN2nw3lyt7TextBoxERN4gfl23str6StrBufE");
extern "C" void G2DUtil_SetTextBoxPaneStringExpand_Buf(Obj* self, Obj* textBox, Obj* buf) {
    WordSet_Expand(RPTR(self, 40), RPTR(self, 48), buf);
    SetStringForLytTextBox(textBox, RPTR(self, 48), 10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311340
extern "C" void G2DUtil_SetTextBoxPaneStringExpand_Id(Obj* self, Obj* textBox, uint32_t id) __asm__("_ZN3app4util7G2DUtil26SetTextBoxPaneStringExpandEPN2nw3lyt7TextBoxEj");
extern "C" void G2DUtil_SetTextBoxPaneStringExpand_Id(Obj* self, Obj* textBox, uint32_t id) {
    MsgData_GetString(RPTR(self, 32), id, RPTR(self, 44));
    WordSet_Expand(RPTR(self, 40), RPTR(self, 48), RPTR(self, 44));
    SetStringForLytTextBox(textBox, RPTR(self, 48), 10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311100
extern "C" void G2DUtil_SetTextBoxPaneString_Pane(Obj* self, uint32_t lytIndex, uint32_t paneId, Obj* str) __asm__("_ZN3app4util7G2DUtil20SetTextBoxPaneStringEjjPN4gfl23str6StrBufE");
extern "C" void G2DUtil_SetTextBoxPaneString_Pane(Obj* self, uint32_t lytIndex, uint32_t paneId, Obj* str) {
    Obj* pane = LytWk_GetTextBoxPane(RPTR(RPTR(self, 20), lytIndex * 8), paneId);
    if (pane) SetStringForLytTextBox(pane, str, 10);
    else Assert(0, 0, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EFC0
extern "C" void G2DUtil_GetScale(Obj* self, uint32_t lytIndex, uint32_t paneId, uint32_t* out) __asm__("_ZNK3app4util7G2DUtil8GetScaleEjjPN4gfl24math22ExtendedVectorTemplateINS3_33SpecializedExtendedVectorTemplateIN2nn4math4VEC2EEEEE");
extern "C" void G2DUtil_GetScale(Obj* self, uint32_t lytIndex, uint32_t paneId, uint32_t* out) {
    Obj* pane = LytWk_GetPane(RPTR(RPTR(self, 20), lytIndex * 8), paneId);
    out[0] = R32(pane, 52);
    out[1] = R32(pane, 56);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003116D0
extern "C" void G2DUtil_SetScale(Obj* self, uint32_t lytIndex, uint32_t paneId, const uint32_t* scale) __asm__("_ZN3app4util7G2DUtil8SetScaleEjjRN4gfl24math22ExtendedVectorTemplateINS3_33SpecializedExtendedVectorTemplateIN2nn4math4VEC2EEEEE");
extern "C" void G2DUtil_SetScale(Obj* self, uint32_t lytIndex, uint32_t paneId, const uint32_t* scale) {
    Obj* pane = LytWk_GetPane(RPTR(RPTR(self, 20), lytIndex * 8), paneId);
    R32(pane, 52) = scale[0];
    R32(pane, 56) = scale[1];
    pane[68] = (pane[68] & 0xEF) | 0x10;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F850
extern "C" void G2DUtil_SetPaneAlpha(Obj* self, Obj* pane, uint8_t alpha) __asm__("_ZN3app4util7G2DUtil12SetPaneAlphaEPN2nw3lyt4PaneEh");
extern "C" void G2DUtil_SetPaneAlpha(Obj* self, Obj* pane, uint8_t alpha) {
    if (pane) pane[69] = alpha;
    else Assert(0, 0, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310DD8
extern "C" void G2DUtil_SetTextBoxPaneColor(Obj* self, Obj* textBox, const uint32_t* top, const uint32_t* bottom) __asm__("_ZN3app4util7G2DUtil19SetTextBoxPaneColorEPN2nw3lyt7TextBoxERKNS2_2ut6Color8ES9_");
extern "C" void G2DUtil_SetTextBoxPaneColor(Obj* self, Obj* textBox, const uint32_t* top, const uint32_t* bottom) {
    if (!textBox) { Assert(0, 0, 0, 0); return; }
    uint32_t t = *top;
    uint32_t b = *bottom;
    R32(textBox, 172) = t;
    R32(textBox, 176) = b;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D930
extern "C" bool ITEM_UTIL_IsDeathRecoverAllItem(const Obj* data) __asm__("_ZN4item31ITEM_UTIL_IsDeathRecoverAllItemEPKNS_9ITEM_DATAE");
extern "C" bool ITEM_UTIL_IsDeathRecoverAllItem(const Obj* data) {
    if (ItemData_GetParam(data, 15) != 1) return false;
    return ItemData_GetParam(data, 29) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E19C
extern "C" uint32_t CursorController_Cleanup(Obj* self) __asm__("_ZNK3app4tool16CursorController7CleanupEv");
extern "C" uint32_t CursorController_Cleanup(Obj* self) {
    Obj* layout = RPTR(self, 84);
    if (!layout) return 1;
    return CursorLayoutWork_Delete(layout);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D444
extern "C" uint32_t UIView_IsDrawing(Obj* self) __asm__("_ZNK3app2ui6UIView9IsDrawingEv");
extern "C" uint32_t UIView_IsDrawing(Obj* self) {
    Obj* g2d = RPTR(self, 96);
    if (!g2d) return 0;
    return G2DUtil_IsDrawing(g2d);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F55C
extern "C" void G2DUtil_PauseAnime(Obj* self, uint32_t lytIndex, uint32_t animeId, bool pause) __asm__("_ZN3app4util7G2DUtil10PauseAnimeEjjb");
extern "C" void G2DUtil_PauseAnime(Obj* self, uint32_t lytIndex, uint32_t animeId, bool pause) {
    if (LytWk_IsBindAnime(RPTR(RPTR(self, 20), lytIndex * 8), animeId))
        LytWk_SetAutoAnime(RPTR(RPTR(self, 20), lytIndex * 8), animeId, pause);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7D54
extern "C" void BoxAppSetup_BinLinkClose(Obj* self, Obj* heap) __asm__("_ZN3App3Box11BoxAppSetup12BinLinkCloseEPN3app4util4HeapE");
extern "C" void BoxAppSetup_BinLinkClose(Obj* self, Obj* heap) {
    FileCloseSync(135);
    if (RPTR(self, 136)) { HeapFree(RPTR(self, 136)); RPTR(self, 136) = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7F70
extern "C" void BoxAppSetup_ProcResourceFree(Obj* self) __asm__("_ZN3App3Box11BoxAppSetup16ProcResourceFreeEv");
extern "C" void BoxAppSetup_ProcResourceFree(Obj* self) {
    for (int32_t i = 0; i < 11; i++) {
        if (RPTR(self, 8 + i * 4)) { HeapFree(RPTR(self, 8 + i * 4)); RPTR(self, 8 + i * 4) = 0; self[52 + i] = 0; }
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310A14
extern "C" void G2DUtil_DeleteLayoutSystem(Obj* self) __asm__("_ZN3app4util7G2DUtil18DeleteLayoutSystemEv");
extern "C" void G2DUtil_DeleteLayoutSystem(Obj* self) {
    if (RPTR(self, 4)) { OperatorDelete(LytSys_Destroy(RPTR(self, 4))); RPTR(self, 4) = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CB150
extern "C" void TalkWindow_SetMessageSpeed(Obj* self, uint32_t speed) __asm__("_ZN3App4Tool10TalkWindow15SetMessageSpeedEN8Savedata10ConfigSave9MSG_SPEEDE");
extern "C" void TalkWindow_SetMessageSpeed(Obj* self, uint32_t speed) {
    Obj* g2d = RPTR(self, 96);
    if (RPTR(g2d, 52)) MessageWindow_SetMessageSpeed(RPTR(g2d, 52), speed, false);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CB374
extern "C" void TalkWindow_SetMessageFinishMode(Obj* self, uint32_t type, uint8_t flag) __asm__("_ZN3App4Tool10TalkWindow20SetMessageFinishModeEN4gfl23str6StrWin10FinishTypeEh");
extern "C" void TalkWindow_SetMessageFinishMode(Obj* self, uint32_t type, uint8_t flag) {
    Obj* g2d = RPTR(self, 96);
    if (RPTR(g2d, 52)) {
        G2DUtil_SetMessageFinishMode(g2d, type, flag);
        self[188] = (type == 1) ? 4 : 0;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417340
extern "C" VFP void BaseModel_SetRotation_XYZ(Obj* self, float x, float y, float z, uint32_t order) __asm__("_ZN7poke_3d5model9BaseModel11SetRotationEfffN4gfl24math13EulerRotation13RotationOrderE");
extern "C" VFP void BaseModel_SetRotation_XYZ(Obj* self, float x, float y, float z, uint32_t order) {
    float v[3] = {x, y, z};
    BaseModel_SetRotationVec(self, v, order);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F1184
extern "C" void PokeSimpleModel_UpdateMegaGangarEffectState(Obj* self) __asm__("_ZN3app4tool15PokeSimpleModel27UpdateMegaGangarEffectStateEv");
extern "C" void PokeSimpleModel_UpdateMegaGangarEffectState(Obj* self) {
    if (self[48] == 2) {
        Obj* model = RPTR(self, 72);
        PokeModel_SetMegaGangarEffectState(model, *reinterpret_cast<float*>(model + 6936));
    }
}
#endif
