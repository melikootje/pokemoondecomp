// Hand-written leaf reconstructions checked against retail with tools/equiv_check.py.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;
typedef unsigned long long uint64_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438020
extern "C" void ResortSave_SetUpdateFlg(uint8_t* self) __asm__("_ZN8Savedata10ResortSave12SetUpdateFlgEv");
extern "C" void ResortSave_SetUpdateFlg(uint8_t* self) { *reinterpret_cast<uint16_t*>(self + 0x55D6) = 1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004380C0
extern "C" void ResortSave_SetBonusLevel(uint8_t* self, uint8_t level) __asm__("_ZN8Savedata10ResortSave13SetBonusLevelEh");
extern "C" void ResortSave_SetBonusLevel(uint8_t* self, uint8_t level) { self[0x5674] = level; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438B4C
extern "C" void ResortSave_SetUseBeansBottle(uint8_t* self, bool use) __asm__("_ZN8Savedata10ResortSave17SetUseBeansBottleEb");
extern "C" void ResortSave_SetUseBeansBottle(uint8_t* self, bool use) { self[0x5673] = use; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A81A0
extern "C" uint64_t GameTime_GetStartSec(uint8_t* self) __asm__("_ZNK8Savedata8GameTime11GetStartSecEv");
extern "C" uint64_t GameTime_GetStartSec(uint8_t* self) { return *reinterpret_cast<uint64_t*>(self + 0x30); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8530
extern "C" uint64_t MyStatus_GetTransferdID(uint8_t* self) __asm__("_ZNK8Savedata8MyStatus14GetTransferdIDEv");
extern "C" uint64_t MyStatus_GetTransferdID(uint8_t* self) { return *reinterpret_cast<uint64_t*>(self + 0x20); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8664
extern "C" uint64_t MyStatus_GetPssPersonalDataStoreId(uint8_t* self) __asm__("_ZNK8Savedata8MyStatus25GetPssPersonalDataStoreIdEv");
extern "C" uint64_t MyStatus_GetPssPersonalDataStoreId(uint8_t* self) { return *reinterpret_cast<uint64_t*>(self + 0x10); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048DFC8
extern "C" uint32_t CursorManager_GetID(uint8_t* self) __asm__("_ZNK3app4tool13CursorManager5GetIDEv");
extern "C" uint32_t CursorManager_GetID(uint8_t* self) {
    uint8_t* entries = *reinterpret_cast<uint8_t**>(self + 8);
    return *reinterpret_cast<uint32_t*>(entries + self[20] * 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2CB8
extern "C" uint64_t WifiConnectRunner_GetNexUniqueId(uint8_t* self) __asm__("_ZNK6NetLib4Wifi17WifiConnectRunner14GetNexUniqueIdEv");
extern "C" uint64_t WifiConnectRunner_GetNexUniqueId(uint8_t* self) { return *reinterpret_cast<uint64_t*>(self + 0x20); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AAA40
extern "C" uint64_t JoinFestaPersonalData_GetTransferedID(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData15GetTransferedIDEv");
extern "C" uint64_t JoinFestaPersonalData_GetTransferedID(uint8_t* self) { return *reinterpret_cast<uint64_t*>(self + 0x30); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AAF18
extern "C" bool JoinFestaPersonalData_IsPersonalEventEnable(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData21IsPersonalEventEnableEv");
extern "C" bool JoinFestaPersonalData_IsPersonalEventEnable(uint8_t* self) { return self[512] != 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB3DC
extern "C" bool JoinFestaPersonalData_IsAttractionPersonalEventEnable(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData31IsAttractionPersonalEventEnableEv");
extern "C" bool JoinFestaPersonalData_IsAttractionPersonalEventEnable(uint8_t* self) { return self[575] != 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7F5C
extern "C" bool BoxAppSetup_IsResourceLoaded(uint8_t* self, int32_t index) __asm__("_ZN3App3Box11BoxAppSetup16IsResourceLoadedEi");
extern "C" bool BoxAppSetup_IsResourceLoaded(uint8_t* self, int32_t index) { return self[index + 52] != 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB288
extern "C" uint32_t JoinFestaPersonalData_GetPersonalEventRecordID1(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData25GetPersonalEventRecordID1Ev");
extern "C" uint32_t JoinFestaPersonalData_GetPersonalEventRecordID1(uint8_t* self) { return self[512] ? self[516] : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB29C
extern "C" uint32_t JoinFestaPersonalData_GetPersonalEventRecordID2(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData25GetPersonalEventRecordID2Ev");
extern "C" uint32_t JoinFestaPersonalData_GetPersonalEventRecordID2(uint8_t* self) { return self[512] ? self[517] : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB2B0
extern "C" uint32_t JoinFestaPersonalData_GetPersonalEventRecordID3(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData25GetPersonalEventRecordID3Ev");
extern "C" uint32_t JoinFestaPersonalData_GetPersonalEventRecordID3(uint8_t* self) { return self[512] ? self[518] : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB2E8
extern "C" uint32_t JoinFestaPersonalData_GetPersonalEventQuestionId(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData26GetPersonalEventQuestionIdEv");
extern "C" uint32_t JoinFestaPersonalData_GetPersonalEventQuestionId(uint8_t* self) { return self[512] ? self[511] : 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB320
extern "C" bool JoinFestaPersonalData_IsEnablePacketTradeRecieve(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData26IsEnablePacketTradeRecieveEv");
extern "C" bool JoinFestaPersonalData_IsEnablePacketTradeRecieve(uint8_t* self) { return self[9] == 26 || self[9] == 27; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5654
extern "C" uint32_t BaseModel_GetInterestType(uint8_t* self, uint32_t index) __asm__("_ZNK7poke_3d5model9BaseModel15GetInterestTypeEj");
extern "C" uint32_t BaseModel_GetInterestType(uint8_t* self, uint32_t index) {
    uint8_t* table = *reinterpret_cast<uint8_t**>(*reinterpret_cast<uint8_t**>(self + 204) + 8);
    uint8_t* entry = *reinterpret_cast<uint8_t**>(table + index * 144 + 16);
    return *reinterpret_cast<uint32_t*>(entry + 64) & 0xFF;
}
#endif
