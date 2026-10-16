// Hand-written leaf reconstructions checked against retail with tools/equiv_check.py.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;
typedef unsigned long long uint64_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004386D0
extern "C" void ResortSave_SetGimBonusTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave15SetGimBonusTimeEhhh");
extern "C" void ResortSave_SetGimBonusTime(uint8_t* self, uint8_t a, uint8_t b) { self[22257] = a; self[22256] = b; self[22255] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004389B4
extern "C" void ResortSave_SetAdventureTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave16SetAdventureTimeEhhh");
extern "C" void ResortSave_SetAdventureTime(uint8_t* self, uint8_t a, uint8_t b) { self[22250] = a; self[22249] = b; self[22248] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438B00
extern "C" void ResortSave_SetFriendShipTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave17SetFriendShipTimeEhhh");
extern "C" void ResortSave_SetFriendShipTime(uint8_t* self, uint8_t a, uint8_t b) { self[22152] = a; self[22151] = b; self[22150] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438CA0
extern "C" void ResortSave_SetHotSpaBonusTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave18SetHotSpaBonusTimeEhhh");
extern "C" void ResortSave_SetHotSpaBonusTime(uint8_t* self, uint8_t a, uint8_t b) { self[22275] = a; self[22274] = b; self[22273] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438CD4
extern "C" void ResortSave_SetWildPokemonTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave18SetWildPokemonTimeEhhh");
extern "C" void ResortSave_SetWildPokemonTime(uint8_t* self, uint8_t a, uint8_t b) { self[22143] = a; self[22142] = b; self[22141] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438E4C
extern "C" void ResortSave_SetPokemonEventTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave19SetPokemonEventTimeEhhh");
extern "C" void ResortSave_SetPokemonEventTime(uint8_t* self, uint8_t a, uint8_t b) { self[22135] = a; self[22134] = b; self[22133] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004390F4
extern "C" void ResortSave_SetAdventureBonusTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave21SetAdventureBonusTimeEhhh");
extern "C" void ResortSave_SetAdventureBonusTime(uint8_t* self, uint8_t a, uint8_t b) { self[22254] = a; self[22253] = b; self[22252] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439128
extern "C" void ResortSave_SetBeansIvyHiddenTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave21SetBeansIvyHiddenTimeEhhh");
extern "C" void ResortSave_SetBeansIvyHiddenTime(uint8_t* self, uint8_t a, uint8_t b) { self[22315] = a; self[22314] = b; self[22313] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043915C
extern "C" void ResortSave_SetFarmFertilizerTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave21SetFarmFertilizerTimeEhhh");
extern "C" void ResortSave_SetFarmFertilizerTime(uint8_t* self, uint8_t a, uint8_t b) { self[22247] = a; self[22246] = b; self[22245] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004395E8
extern "C" void ResortSave_SetBeansBottleServiceTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave25SetBeansBottleServiceTimeEhhh");
extern "C" void ResortSave_SetBeansBottleServiceTime(uint8_t* self, uint8_t a, uint8_t b) { self[22138] = a; self[22137] = b; self[22136] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043961C
extern "C" void ResortSave_SetWildPokemonServiceTime(uint8_t* self, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave25SetWildPokemonServiceTimeEhhh");
extern "C" void ResortSave_SetWildPokemonServiceTime(uint8_t* self, uint8_t a, uint8_t b) { self[22146] = a; self[22145] = b; self[22144] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437DC4
extern "C" void ResortSave_SetFarmTime(uint8_t* self, int32_t index, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave11SetFarmTimeEihhh");
extern "C" void ResortSave_SetFarmTime(uint8_t* self, int32_t index, uint8_t a, uint8_t b) { self[22193 + index * 3] = a; self[22192 + index * 3] = b; self[22191 + index * 3] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004380D0
extern "C" void ResortSave_SetGimEndTime(uint8_t* self, int32_t index, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave13SetGimEndTimeEihhh");
extern "C" void ResortSave_SetGimEndTime(uint8_t* self, int32_t index, uint8_t a, uint8_t b) { self[22266 + index * 3] = a; self[22265 + index * 3] = b; self[22264 + index * 3] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438FD8
extern "C" void ResortSave_SetHotSpaPokemonTime(uint8_t* self, int32_t index, uint8_t a, uint8_t b) __asm__("_ZN8Savedata10ResortSave20SetHotSpaPokemonTimeEihhh");
extern "C" void ResortSave_SetHotSpaPokemonTime(uint8_t* self, int32_t index, uint8_t a, uint8_t b) { self[22278 + index * 3] = a; self[22277 + index * 3] = b; self[22276 + index * 3] = 0; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AAEC8
extern "C" void JoinFestaPersonalData_GetAttractionPokeType(uint8_t* self, uint8_t* first, uint8_t* second) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData21GetAttractionPokeTypeERhS2_");
extern "C" void JoinFestaPersonalData_GetAttractionPokeType(uint8_t* self, uint8_t* first, uint8_t* second) {
    *first = self[576];
    *second = self[577];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004687C8
extern "C" bool JoinFestaPersonalData_SetTradeRequestTargetUser(uint8_t* self, const uint32_t* friendKey, uint32_t relation, uint32_t flag) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData25SetTradeRequestTargetUserERK18nnfriendsFriendKeyNS0_15JoinFestaDefine21E_JOIN_FESTA_RELATIONEj");
extern "C" bool JoinFestaPersonalData_SetTradeRequestTargetUser(uint8_t* self, const uint32_t* friendKey, uint32_t relation, uint32_t flag) {
    *reinterpret_cast<uint32_t*>(self + 524) = friendKey[0];
    *reinterpret_cast<uint32_t*>(self + 528) = friendKey[2];
    *reinterpret_cast<uint32_t*>(self + 532) = friendKey[3];
    self[536] = flag;
    self[537] = relation;
    return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004185D4
extern "C" void BaseModel_SetScale(uint8_t* self, const uint32_t* scale) __asm__("_ZN7poke_3d5model9BaseModel8SetScaleERKN4gfl24math7Vector3E");
extern "C" void BaseModel_SetScale(uint8_t* self, const uint32_t* scale) {
    uint8_t* transform = *reinterpret_cast<uint8_t**>(self + 4);
    *reinterpret_cast<uint32_t*>(transform + 120) |= 1;
    *reinterpret_cast<uint32_t*>(transform + 44) = scale[0];
    *reinterpret_cast<uint32_t*>(transform + 48) = scale[1];
    *reinterpret_cast<uint32_t*>(transform + 52) = scale[2];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00434E90
extern "C" bool PokeModel_IsAvailableAnimation_Anime(uint8_t* self, int32_t anime) __asm__("_ZN8PokeTool9PokeModel20IsAvailableAnimationENS_11MODEL_ANIMEE");
extern "C" bool PokeModel_IsAvailableAnimation_Anime(uint8_t* self, int32_t anime) {
    uint8_t* base = self + 4096;
    if (*reinterpret_cast<int32_t*>(base + 684) <= anime) return false;
    return reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(base + 688))[anime] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00434EB8
extern "C" bool PokeModel_IsAvailableAnimation_Finder(uint8_t* self, int32_t anime) __asm__("_ZN8PokeTool9PokeModel20IsAvailableAnimationENS_23MODEL_ANIME_POKE_FINDERE");
extern "C" bool PokeModel_IsAvailableAnimation_Finder(uint8_t* self, int32_t anime) {
    uint8_t* base = self + 4096;
    if (*reinterpret_cast<int32_t*>(base + 684) <= anime) return false;
    return reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(base + 688))[anime] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030FD1C
extern "C" void G2DUtil_SetMessageData(uint8_t* self, uint32_t msgData, uint32_t wordSet) __asm__("_ZN3app4util7G2DUtil14SetMessageDataEPN4gfl23str7MsgDataEPN5print7WordSetE");
extern "C" void G2DUtil_SetMessageData(uint8_t* self, uint32_t msgData, uint32_t wordSet) {
    *reinterpret_cast<uint32_t*>(self + 32) = msgData;
    self[64] = 0;
    *reinterpret_cast<uint32_t*>(self + 40) = wordSet;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0052136C
extern "C" int32_t mwmomoflexDemuxerGetStreamCount(uint8_t* demuxer, uint32_t* count) __asm__("mwmomoflexDemuxerGetStreamCount");
extern "C" int32_t mwmomoflexDemuxerGetStreamCount(uint8_t* demuxer, uint32_t* count) {
    if (!demuxer) return 1;
    *count = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(demuxer + 4) + 5172);
    return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6F2C
extern "C" uint32_t MysteryGiftSave_GetGiftDataNum(uint8_t* self) __asm__("_ZNK8Savedata15MysteryGiftSave14GetGiftDataNumEv");
extern "C" uint32_t MysteryGiftSave_GetGiftDataNum(uint8_t* self) {
    uint32_t count = 0;
    for (uint32_t i = 0; i < 48; i++) {
        if (*reinterpret_cast<uint16_t*>(self + 260 + i * 264 + 2) != 0) count++;
    }
    return count;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049E594
extern "C" uint16_t EncountWork_GetNowEncountProb(uint8_t* self, const uint8_t* pattern) __asm__("_ZNK5Field7Encount11EncountWork17GetNowEncountProbEPKNS0_15ENCPROB_PATTERNE");
extern "C" uint16_t EncountWork_GetNowEncountProb(uint8_t* self, const uint8_t* pattern) {
    if ((self[5] & 2) && *reinterpret_cast<uint32_t*>(self) <= pattern[3]) return 0;
    return *reinterpret_cast<uint16_t*>(self + 6);
}
#endif
