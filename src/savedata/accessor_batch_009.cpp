// Hand-written reconstructions checked against retail with tools/equiv_check.py.
// Many functions below contain a retail assert whose call was compiled out to a nop; the
// reconstruction keeps only the observable behaviour (the assert has no effect).
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D5BC
extern "C" uint16_t ZoneDataAccessor_GetGimmickID(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor12GetGimmickIDEv");
extern "C" uint16_t ZoneDataAccessor_GetGimmickID(Obj* self) { return *reinterpret_cast<uint16_t*>(RPTR(self, 4) + 14); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D660
extern "C" uint8_t ZoneDataAccessor_GetIslandIndex(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor14GetIslandIndexEv");
extern "C" uint8_t ZoneDataAccessor_GetIslandIndex(Obj* self) { return *reinterpret_cast<uint8_t*>(RPTR(self, 4) + 63); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D77C
extern "C" uint16_t ZoneDataAccessor_GetPlaceLabelID(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor15GetPlaceLabelIDEv");
extern "C" uint16_t ZoneDataAccessor_GetPlaceLabelID(Obj* self) { return *reinterpret_cast<uint16_t*>(RPTR(self, 4) + 28); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D858
extern "C" uint8_t ZoneDataAccessor_GetMapChangeType(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor16GetMapChangeTypeEv");
extern "C" uint8_t ZoneDataAccessor_GetMapChangeType(Obj* self) { return *reinterpret_cast<uint8_t*>(RPTR(self, 4) + 35); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D9A4
extern "C" uint8_t ZoneDataAccessor_GetWeatherEnvIndex(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor18GetWeatherEnvIndexEv");
extern "C" uint8_t ZoneDataAccessor_GetWeatherEnvIndex(Obj* self) { return *reinterpret_cast<uint8_t*>(RPTR(self, 4) + 34); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DA14
extern "C" uint8_t ZoneDataAccessor_GetEnvironmentIndex(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor19GetEnvironmentIndexEv");
extern "C" uint8_t ZoneDataAccessor_GetEnvironmentIndex(Obj* self) { return *reinterpret_cast<uint8_t*>(RPTR(self, 4) + 60); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DA48
extern "C" uint8_t ZoneDataAccessor_GetSubscreenMapType(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor19GetSubscreenMapTypeEv");
extern "C" uint8_t ZoneDataAccessor_GetSubscreenMapType(Obj* self) { return *reinterpret_cast<uint8_t*>(RPTR(self, 4) + 78); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DAF0
extern "C" uint8_t ZoneDataAccessor_GetCameraDefaultIndex(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor21GetCameraDefaultIndexEv");
extern "C" uint8_t ZoneDataAccessor_GetCameraDefaultIndex(Obj* self) { return *reinterpret_cast<uint8_t*>(RPTR(self, 4) + 61); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DB24
extern "C" uint16_t ZoneDataAccessor_GetTownmapBasisPosZone(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor22GetTownmapBasisPosZoneEv");
extern "C" uint16_t ZoneDataAccessor_GetTownmapBasisPosZone(Obj* self) { return *reinterpret_cast<uint16_t*>(RPTR(self, 4) + 76); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DB58
extern "C" uint16_t ZoneDataAccessor_GetAttributeBgNearPattern(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor25GetAttributeBgNearPatternEv");
extern "C" uint16_t ZoneDataAccessor_GetAttributeBgNearPattern(Obj* self) { return *reinterpret_cast<uint16_t*>(RPTR(self, 4) + 64); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DC38
extern "C" uint32_t ZoneDataAccessor_GetSubscreenBasisPositionZ(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor26GetSubscreenBasisPositionZEv");
extern "C" uint32_t ZoneDataAccessor_GetSubscreenBasisPositionZ(Obj* self) { return *reinterpret_cast<uint32_t*>(RPTR(self, 4) + 72); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049DCA8
extern "C" uint8_t ZoneDataAccessor_GetCameraSupportDefaultIndex(Obj* self) __asm__("_ZNK5Field16ZoneDataAccessor28GetCameraSupportDefaultIndexEv");
extern "C" uint8_t ZoneDataAccessor_GetCameraSupportDefaultIndex(Obj* self) { return *reinterpret_cast<uint8_t*>(RPTR(self, 4) + 62); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474534
extern "C" uint32_t Regulation_GetVersion(Obj* self) __asm__("_ZNK10Regulation10GetVersionEv");
extern "C" uint32_t Regulation_GetVersion(Obj* self) { Obj* data = RPTR(self, 16); return data ? *data : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474CBC
extern "C" uint32_t Regulation_GetSerializeDataSize(Obj* self) __asm__("_ZNK10Regulation20GetSerializeDataSizeEv");
extern "C" uint32_t Regulation_GetSerializeDataSize(Obj* self) { return R32(self, 12); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EE48
extern "C" bool G2DUtil_GetPaneVisible(Obj* self, Obj* pane) __asm__("_ZNK3app4util7G2DUtil14GetPaneVisibleEPN2nw3lyt4PaneE");
extern "C" bool G2DUtil_GetPaneVisible(Obj* self, Obj* pane) { return (pane[68] & 1) != 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049A8B8
extern "C" uint32_t StrBuf_GetSize(Obj* self) __asm__("_ZNK4gfl23str6StrBuf7GetSizeEv");
extern "C" uint32_t StrBuf_GetSize(Obj* self) { return R16(self, 8); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049D300
extern "C" uint32_t PokemonSearch_DataAccessor_GetSymbolEncountDataID(Obj* self) __asm__("_ZNK5Field13PokemonSearch12DataAccessor22GetSymbolEncountDataIDEv");
extern "C" uint32_t PokemonSearch_DataAccessor_GetSymbolEncountDataID(Obj* self) { Obj* data = RPTR(self, 8); return data ? R32(data, 12) : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6E9C
extern "C" uint32_t BattleSpotData_GetEntryCommunityId(Obj* self, uint32_t type) __asm__("_ZNK8Savedata14BattleSpotData19GetEntryCommunityIdENS0_20ENTRY_COMMUNITY_TYPEE");
extern "C" uint32_t BattleSpotData_GetEntryCommunityId(Obj* self, uint32_t type) { return type < 5 ? R32(self + type * 8, 8) : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6ED4
extern "C" uint32_t BattleSpotData_GetEntryCommunityPid(Obj* self, uint32_t type) __asm__("_ZNK8Savedata14BattleSpotData20GetEntryCommunityPidENS0_20ENTRY_COMMUNITY_TYPEE");
extern "C" uint32_t BattleSpotData_GetEntryCommunityPid(Obj* self, uint32_t type) { return type < 5 ? R32(self + type * 8, 4) : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A772C
extern "C" uint32_t JoinFestaDataSave_GetQuestionnaireAnswer(Obj* self, uint32_t index) __asm__("_ZNK8Savedata17JoinFestaDataSave22GetQuestionnaireAnswerEj");
extern "C" uint32_t JoinFestaDataSave_GetQuestionnaireAnswer(Obj* self, uint32_t index) { return index < 16 ? self[index + 36] : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00383560
extern "C" uint32_t FieldScriptWork_GetChildGlobalParam(Obj* self, uint32_t index) __asm__("_ZN5Field11FieldScript4Work19GetChildGlobalParamEj");
extern "C" uint32_t FieldScriptWork_GetChildGlobalParam(Obj* self, uint32_t index) { return R32(self + index * 4, 84); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003835CC
extern "C" uint32_t FieldScriptWork_GetParentGlobalParam(Obj* self, uint32_t index) __asm__("_ZN5Field11FieldScript4Work20GetParentGlobalParamEj");
extern "C" uint32_t FieldScriptWork_GetParentGlobalParam(Obj* self, uint32_t index) { return R32(self + index * 4, 60); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004744D4
extern "C" uint32_t BattleInst_ConvertEntryPartyIndexToSelectPartyIndex(Obj* self, uint32_t index) __asm__("_ZNK10BattleInst10BattleInst40ConvertEntryPartyIndexToSelectPartyIndexEj");
extern "C" uint32_t BattleInst_ConvertEntryPartyIndexToSelectPartyIndex(Obj* self, uint32_t index) { return index < 6 ? R32(self + index * 4, 56) : R32(self, 56); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6AC4
extern "C" uint32_t PokemonSort_GetSortedDataMax(Obj* self) __asm__("_ZNK8PokeTool11PokemonSort16GetSortedDataMaxEv");
extern "C" uint32_t PokemonSort_GetSortedDataMax(Obj* self) { return R32(self, 20) ? R32(self + 4096, 24) : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030FD40
extern "C" void G2DUtil_SetPaneVisible(Obj* self, Obj* pane, bool visible) __asm__("_ZN3app4util7G2DUtil14SetPaneVisibleEPN2nw3lyt4PaneEb");
extern "C" void G2DUtil_SetPaneVisible(Obj* self, Obj* pane, bool visible) { pane[68] = (pane[68] & 0xFE) | visible; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A3D8
extern "C" Obj* EventWork_GetEventWorkAdrs_A(Obj* self, uint16_t id) __asm__("_ZN5Field9EventWork16GetEventWorkAdrsEt");
extern "C" Obj* EventWork_GetEventWorkAdrs_A(Obj* self, uint16_t id) { return ((int32_t)id - 16384 < 1000) ? self + id * 2 - 32764 : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049F0F4
extern "C" Obj* EventWork_GetEventWorkAdrs_B(Obj* self, uint16_t id) __asm__("_ZNK5Field9EventWork16GetEventWorkAdrsEt");
extern "C" Obj* EventWork_GetEventWorkAdrs_B(Obj* self, uint16_t id) { return ((int32_t)id - 16384 < 1000) ? self + id * 2 - 32764 : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049E198
extern "C" Obj* World_GetZoneInfo(Obj* self, uint32_t index) __asm__("_ZNK5Field5World11GetZoneInfoEj");
extern "C" Obj* World_GetZoneInfo(Obj* self, uint32_t index) { return R32(self, 28) > index ? RPTR(self, 32) + index * 4 : RPTR(self, 32); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6B00
extern "C" uint32_t RemaindSkill_GetWazaNo(Obj* self, uint32_t index) __asm__("_ZNK8PokeTool12RemaindSkill9GetWazaNoEj");
extern "C" uint32_t RemaindSkill_GetWazaNo(Obj* self, uint32_t index) { return R16(self + index * 2, 8); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CA994
extern "C" void TalkWindow_InitMsgData(Obj* self, uint32_t msgData) __asm__("_ZN3App4Tool10TalkWindow11InitMsgDataEPN4gfl23str7MsgDataE");
extern "C" void TalkWindow_InitMsgData(Obj* self, uint32_t msgData) { R32(self, 152) = msgData; self[186] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CB23C
extern "C" void TalkWindow_InitTrainerMsgData(Obj* self, uint32_t msgData) __asm__("_ZN3App4Tool10TalkWindow18InitTrainerMsgDataEPN4gfl23str7MsgDataE");
extern "C" void TalkWindow_InitTrainerMsgData(Obj* self, uint32_t msgData) { R32(self, 156) = msgData; self[187] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004388B8
extern "C" uint32_t ResortSave_GetAdventureItem(Obj* self, int32_t index) __asm__("_ZN8Savedata10ResortSave16GetAdventureItemEi");
extern "C" uint32_t ResortSave_GetAdventureItem(Obj* self, int32_t index) { return R16(self + index * 2, 22016); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D4E4
extern "C" uint32_t StringBinary_GetSortOrder(Obj* self, uint32_t index) __asm__("_ZNK3app4sort12StringBinary12GetSortOrderEj");
extern "C" uint32_t StringBinary_GetSortOrder(Obj* self, uint32_t index) { return index < (R32(self, 8) >> 1) ? R16(RPTR(self, 4) + index * 2, 0) : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00442B54
extern "C" uint32_t Record_Get(Obj* self, uint32_t id) __asm__("_ZN8Savedata6Record3GetENS0_9RECORD_IDE");
extern "C" uint32_t Record_Get(Obj* self, uint32_t id) { if (id < 100) return R32(self + id * 4, 4); if (id < 200) return R16(self + id * 2, 204); return 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B0D8
extern "C" void BattleInstSave_SetPrizeWinCount(Obj* self, uint16_t count) __asm__("_ZN8Savedata14BattleInstSave16SetPrizeWinCountEt");
extern "C" void BattleInstSave_SetPrizeWinCount(Obj* self, uint16_t count) { Obj* base = self + 256; if (R16(base, 86) < count) { R16(base, 86) = count; if (9999 < count) R16(base, 86) = 9999; } }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EE458
extern "C" bool hangul_IsHangul(uint16_t c) __asm__("_ZN6hangul8IsHangulEw");
extern "C" bool hangul_IsHangul(uint16_t c) { return (uint32_t)(c - 12593) < 51 || (uint32_t)(c - 44032) < 0x2BA4; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6628
extern "C" uint32_t TrainerTypeData_GetEyeBGM(Obj* self) __asm__("_ZNK7trainer15TrainerTypeData9GetEyeBGMEv");
extern "C" uint32_t TrainerTypeData_GetEyeBGM(Obj* self) { uint32_t t = R32(self, 0); if (t == 28 || t == 29) return 0x10048; if (t == 95 || t == 96) return 0x10049; return 0x10047; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041E75C
extern "C" uint32_t TrainerTypeData_GetMegaItemId(uint32_t trType) __asm__("_ZN7trainer15TrainerTypeData13GetMegaItemIdENS_6TrTypeE");
extern "C" uint32_t TrainerTypeData_GetMegaItemId(uint32_t trType) { if (trType == 89) return 0x2E9; if (trType == 85 || trType == 86 || trType == 97 || trType == 98) return 696; return 0x305; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040B2D8
extern "C" uint32_t Base64Utility_GetNeedEncodeBufferSize(uint32_t size) __asm__("_ZN7gflnet24util13Base64Utility23GetNeedEncodeBufferSizeEj");
extern "C" uint32_t Base64Utility_GetNeedEncodeBufferSize(uint32_t size) { uint32_t rem = size % 3; if (rem != 0) size += 3 - rem; return (size * 4) / 3 + 1; }
#endif

