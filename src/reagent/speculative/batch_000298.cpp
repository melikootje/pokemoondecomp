// Compile-first semantic reconstructions; runtime-inactive.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00394C44
extern "C" bool Speculative_00394c44(uint32_t arg0) __asm__("_ZN5Field4Area20GetTerrainMemoryModeEt");
extern "C" bool Speculative_00394c44(uint32_t arg0) {
return arg0 == 0xed;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A364
extern "C" uint16_t Speculative_0039a364(uint8_t* arg0) __asm__("_ZN5Field9EventWork15GetZigarudeCellEv");
extern "C" uint16_t Speculative_0039a364(uint8_t* arg0) {
return *(uint8_t*)((uint8_t*)arg0 + 0x146);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A3C8
extern "C" bool Speculative_0039a3c8(uint32_t arg0) __asm__("_ZN5Field9EventWork16CheckIDFlagRengeEt");
extern "C" bool Speculative_0039a3c8(uint32_t arg0) {
return arg0 < 0x4000;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F0C08
extern "C" void Speculative_003f0c08(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7GameSys16GameEventManager9CallEventEPNS_9GameEventE");
extern "C" void Speculative_003f0c08(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg1 + 4) = *(uint8_t*)arg0;
    *(uint8_t*)arg0 = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004149A4
extern "C" int32_t Speculative_004149a4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool16CharaSimpleModel34GetDressUpModelResourceManagerCoreEN7poke_3d5model12DressUpParam3SexE");
extern "C" int32_t Speculative_004149a4(uint8_t* arg0, uint32_t arg1) {
return *(uint8_t*)(arg0 + 0xda8) + arg1 * 0x40;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041BD70
extern "C" void Speculative_0041bd70(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN7poke_3d8renderer21OutLinePostRenderPath9SetEnableEji");
extern "C" void Speculative_0041bd70(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
if (arg1 < 2) {
        *(uint8_t*)(arg0 + arg1 * 4 + 0x1c) = arg2;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041CC5C
extern "C" void Speculative_0041cc5c(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN7poke_3d8renderer22EdgeMapSceneRenderPath9SetEnableEji");
extern "C" void Speculative_0041cc5c(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
if (arg1 < 2) {
        *(uint8_t*)(arg0 + arg1 * 4 + 0x9c) = arg2;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438030
extern "C" uint32_t Speculative_00438030(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave13GetBonusLevelEv");
extern "C" uint32_t Speculative_00438030(uint8_t* arg0) {
return arg0[0x5674];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004391B8
extern "C" uint32_t Speculative_004391b8(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave22GetBeansIvyHiddenCountEv");
extern "C" uint32_t Speculative_004391b8(uint8_t* arg0) {
return arg0[0x572c];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043A90C
extern "C" void* Speculative_0043a90c(uint8_t* arg0) __asm__("_ZN8Savedata13LiveMatchData17GetLastLiveRecordEv");
extern "C" void* Speculative_0043a90c(uint8_t* arg0) {
return arg0 + (uint32_t)(uint8_t)arg0[0xac] * 0x10 + 0xc;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B61C
extern "C" bool Speculative_0043b61c(uint8_t* arg0) __asm__("_ZN8Savedata14PokeFinderSave11GetGyroFlagEv");
extern "C" bool Speculative_0043b61c(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 6) == 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B62C
extern "C" void Speculative_0043b62c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata14PokeFinderSave11SetGyroFlagEb");
extern "C" void Speculative_0043b62c(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 6) = (uint16_t)(arg1 != 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B63C
extern "C" void Speculative_0043b63c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata14PokeFinderSave12AddSnapCountEj");
extern "C" void Speculative_0043b63c(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 8) = arg1 + *(uint8_t*)(arg0 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EAA8
extern "C" void Speculative_0043eaa8(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN8Savedata17JoinFestaDataSave22SetQuestionnaireAnswerEjj");
extern "C" void Speculative_0043eaa8(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
if (arg1 < 0x10) {
        arg0[arg1 + 0x24] = arg2;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004417B8
extern "C" void Speculative_004417b8(uint8_t* arg0) __asm__("_ZN8Savedata4Misc20SetKawaigariTutorialEv");
extern "C" void Speculative_004417b8(uint8_t* arg0) {
*(uint8_t*)(arg0 + 0xc) = *(uint8_t*)(arg0 + 0xc) | 0x80000;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00441800
extern "C" void Speculative_00441800(uint8_t* arg0) __asm__("_ZN8Savedata4Misc28SetBattleVideoPlayerTutorialEv");
extern "C" void Speculative_00441800(uint8_t* arg0) {
*(uint8_t*)(arg0 + 0xc) = *(uint8_t*)(arg0 + 0xc) | 8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443458
extern "C" bool Speculative_00443458(uint8_t* arg0) __asm__("_ZN8Savedata7GtsData14GetDepositFlagEv");
extern "C" bool Speculative_00443458(uint8_t* arg0) {
return arg0[300] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443D5C
extern "C" uint32_t Speculative_00443d5c(uint8_t* arg0) __asm__("_ZN8Savedata8PlayTime10GetSaveDayEv");
extern "C" uint32_t Speculative_00443d5c(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 8) & 0x1fffff) >> 0x10;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443D84
extern "C" uint32_t Speculative_00443d84(uint8_t* arg0) __asm__("_ZN8Savedata8PlayTime11GetSaveHourEv");
extern "C" uint32_t Speculative_00443d84(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 8) & 0x3ffffff) >> 0x15;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443D94
extern "C" uint32_t Speculative_00443d94(uint8_t* arg0) __asm__("_ZN8Savedata8PlayTime11GetSaveYearEv");
extern "C" uint32_t Speculative_00443d94(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 8) & 0xfff;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443E80
extern "C" uint32_t Speculative_00443e80(uint8_t* arg0) __asm__("_ZN8Savedata8PlayTime12GetSaveMonthEv");
extern "C" uint32_t Speculative_00443e80(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 8) & 0xffff) >> 0xc;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00467DEC
extern "C" void Speculative_00467dec(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData18ResetPersonalEventEv");
extern "C" void Speculative_00467dec(uint8_t* arg0) {
arg0[0x200] = 0;
    arg0[0x201] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00470900
extern "C" uint32_t Speculative_00470900(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager12GetMemberNumEv");
extern "C" uint32_t Speculative_00470900(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x28) + 1U & 0xff;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A1B4C
extern "C" bool Speculative_004a1b4c(uint8_t* arg0) __asm__("_ZNK5print14HangulComposer18HasCompositionCharEv");
extern "C" bool Speculative_004a1b4c(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x1c) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A30F0
extern "C" bool Speculative_004a30f0(uint8_t* arg0) __asm__("_ZNK6System6Skybox6Skybox16IsCreateResourceEv");
extern "C" bool Speculative_004a30f0(uint8_t* arg0) {
return arg0[0x20] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3108
extern "C" int32_t Speculative_004a3108(uint8_t* arg0) __asm__("_ZNK6System6Skybox6Skybox14GetSunPositionEv");
extern "C" int32_t Speculative_004a3108(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x14) + 0x30;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3800
extern "C" bool Speculative_004a3800(uint8_t* arg0) __asm__("_ZNK7poke_3d5model10BaseCamera11IsAnimationEv");
extern "C" bool Speculative_004a3800(uint8_t* arg0) {
return arg0[0x68] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A59A0
extern "C" bool Speculative_004a59a0(uint8_t* arg0) __asm__("_ZNK7poke_3d5model9BaseModel22HasAnimationControllerEv");
extern "C" bool Speculative_004a59a0(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x20) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5D00
extern "C" bool Speculative_004a5d00(uint8_t* arg0) __asm__("_ZNK7poke_3d5model9BaseModel9IsCreatedEv");
extern "C" bool Speculative_004a5d00(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 4) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6BEC
extern "C" uint32_t Speculative_004a6bec(uint8_t* arg0) __asm__("_ZNK8Savedata10ConfigSave12GetBoxStatusEv");
extern "C" uint32_t Speculative_004a6bec(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 4) & 0xffff) >> 0xf;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6BFC
extern "C" uint32_t Speculative_004a6bfc(uint8_t* arg0) __asm__("_ZNK8Savedata10ConfigSave13GetBattleRuleEv");
extern "C" uint32_t Speculative_004a6bfc(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 4) & 0xf) >> 3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6C0C
extern "C" uint32_t Speculative_004a6c0c(uint8_t* arg0) __asm__("_ZNK8Savedata10ConfigSave13GetButtonModeEv");
extern "C" uint32_t Speculative_004a6c0c(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 4) & 0x7fff) >> 0xd;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6C28
extern "C" uint32_t Speculative_004a6c28(uint8_t* arg0) __asm__("_ZNK8Savedata10ConfigSave18GetBattleAnimationEv");
extern "C" uint32_t Speculative_004a6c28(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 4) & 7) >> 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7C84
extern "C" uint32_t Speculative_004a7c84(uint8_t* arg0) __asm__("_ZNK8Savedata4Misc20GetKawaigariTutorialEv");
extern "C" uint32_t Speculative_004a7c84(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 0xc) & 0x80000) >> 0x13;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7C94
extern "C" uint32_t Speculative_004a7c94(uint8_t* arg0) __asm__("_ZNK8Savedata4Misc28GetBattleVideoPlayerTutorialEv");
extern "C" uint32_t Speculative_004a7c94(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 0xc) & 8) >> 3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A81D0
extern "C" bool Speculative_004a81d0(uint8_t* arg0) __asm__("_ZNK8Savedata8GameTime13IsPenaltyModeEv");
extern "C" bool Speculative_004a81d0(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x40) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8518
extern "C" uint32_t Speculative_004a8518(uint8_t* arg0) __asm__("_ZNK8Savedata8MyStatus14GetNexUniqueIDEv");
extern "C" uint32_t Speculative_004a8518(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x18);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8584
extern "C" uint32_t Speculative_004a8584(uint8_t* arg0) __asm__("_ZNK8Savedata8MyStatus15HasZenryokuRingEv");
extern "C" uint32_t Speculative_004a8584(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 0x80) & 2) >> 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A86DC
extern "C" uint32_t Speculative_004a86dc(uint8_t* arg0) __asm__("_ZNK8Savedata8MyStatus7GetAreaEv");
extern "C" uint32_t Speculative_004a86dc(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 0x34) & 0xff0000) >> 0x10;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8A80
extern "C" uint32_t Speculative_004a8a80(uint8_t* arg0) __asm__("_ZNK8Savedata9FieldMenu11GetMenuPageEv");
extern "C" uint32_t Speculative_004a8a80(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 4) & 3) >> 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8AD0
extern "C" bool Speculative_004a8ad0(uint8_t* arg0) __asm__("_ZNK8Savedata9FieldMenu14IsVisibleRotomEv");
extern "C" bool Speculative_004a8ad0(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 4) & 0x20000000) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB338
extern "C" uint32_t Speculative_004ab338(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData27GetRecommendFacilitiesColorEv");
extern "C" uint32_t Speculative_004ab338(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 0x76) & 0x7ff) >> 8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB3EC
extern "C" uint32_t Speculative_004ab3ec(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData33GetRecommendFacilitiesCharacterIdEv");
extern "C" uint32_t Speculative_004ab3ec(uint8_t* arg0) {
return (*(uint8_t*)(arg0 + 0x76) & 0x7fff) >> 0xb;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB468
extern "C" bool Speculative_004ab468(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta27JoinFestaInformationMessage14IsMessageExistEv");
extern "C" bool Speculative_004ab468(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x14) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CC1A8
extern "C" bool Speculative_002cc1a8(uint8_t* arg0) __asm__("_ZN3App4Tool11NewPaneList14IsModuleActionEv");
extern "C" bool Speculative_002cc1a8(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x138) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E66B0
extern "C" bool Speculative_002e66b0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App9FieldMenu8PlayData23GetRotomMessageIsUpdateEj");
extern "C" bool Speculative_002e66b0(uint8_t* arg0, uint32_t arg1) {
return (*(uint8_t*)(arg0 + arg1 * 8 + 8) & 0x80000000) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E66CC
extern "C" void Speculative_002e66cc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App9FieldMenu8PlayData25ResetRotomMessageIsUpdateEj");
extern "C" void Speculative_002e66cc(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + arg1 * 8 + 8) = *(uint8_t*)(arg0 + arg1 * 8 + 8) & 0x7fffffff;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF738
extern "C" void* Speculative_002ef738(uint8_t* arg0) __asm__("_ZN3app4tool14ItemIconToolExD1Ev");
extern "C" void* Speculative_002ef738(uint8_t* arg0) {
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F024C
extern "C" void* Speculative_002f024c(uint8_t* arg0) __asm__("_ZN3app4tool14PokeIconToolExD1Ev");
extern "C" void* Speculative_002f024c(uint8_t* arg0) {
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030DA90
extern "C" void* Speculative_0030da90(uint8_t* arg0) __asm__("_ZN3app4util25AppQRTextureCreateUtility20GetLytResTextureInfoEv");
extern "C" void* Speculative_0030da90(uint8_t* arg0) {
if (arg0[0x39] == 0) {
        return nullptr;
    } else {
        return arg0 + 0x24;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310DB4
extern "C" void Speculative_00310db4(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4util7G2DUtil19SetLayoutDrawEnableEjb");
extern "C" void Speculative_00310db4(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint8_t*)(*(uint8_t*)(arg0 + 0x14) + arg1 * 8 + 5) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00393220
extern "C" bool Speculative_00393220(uint32_t arg0) __asm__("_ZN5Field20EventPokemonRideTool10IsNaminoriENS_15RIDE_POKEMON_IDE");
extern "C" bool Speculative_00393220(uint32_t arg0) {
return arg0 == 1 || arg0 == 3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF6FC
extern "C" bool Speculative_003cf6fc(uint8_t* arg0) __asm__("_ZN6NetApp4Live7LiveNet11IsConnectedEv");
extern "C" bool Speculative_003cf6fc(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x18) == 3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF710
extern "C" bool Speculative_003cf710(uint8_t* arg0) __asm__("_ZN6NetApp4Live7LiveNet14IsDisconnectedEv");
extern "C" bool Speculative_003cf710(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x18) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041AEB0
extern "C" void Speculative_0041aeb0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d8renderer15BloomRenderPath19SetAlphaMaskTextureEPKN4gfl23gfx7TextureE");
extern "C" void Speculative_0041aeb0(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 8) = arg1;
    if (*(uint8_t*)(arg0 + 0xc) != 0) {
        *(uint8_t*)(*(uint8_t*)(arg0 + 0xc) + 0x38) = arg1;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439EEC
extern "C" void Speculative_00439eec(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata11FishingSpot10EscapeRareEj");
extern "C" void Speculative_00439eec(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 4) = *(uint8_t*)(arg0 + 4) & ~(1 << (arg1 & 0xff));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004417A4
extern "C" void Speculative_004417a4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata4Misc20SetGakusyuusoutiFlagEb");
extern "C" void Speculative_004417a4(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 0xc) = arg1 | (*(uint8_t*)(arg0 + 0xc) & 0xfffffffe);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00444FB4
extern "C" bool Speculative_00444fb4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata9FieldMenu13IsRideNewFlagENS0_6RideIDE");
extern "C" bool Speculative_00444fb4(uint8_t* arg0, uint32_t arg1) {
uint32_t uVar2 = (uint32_t)(uint8_t)arg0[0x1a] & 1 << (arg1 & 0xff);
    if (uVar2 != 0) {
        return true;
    }
    return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045DDF0
extern "C" bool Speculative_0045ddf0(uint32_t arg0) __asm__("_ZN9NetAppLib4Util24NetAppTrainerIconUtility8IsDeleteEv");
extern "C" bool Speculative_0045ddf0(uint32_t arg0) {
return *(uint8_t*)(arg0 + 8) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00471B00
extern "C" bool Speculative_00471b00(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager9IsPlayingEv");
extern "C" bool Speculative_00471b00(uint8_t* arg0) {
return arg0[10] != 0x54;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00486074
extern "C" uint16_t Speculative_00486074(uint8_t* arg0) __asm__("_ZNK2nw3lyt7TextBox21GetStringBufferLengthEv");
extern "C" uint16_t Speculative_00486074(uint8_t* arg0) {
short sVar1;

    sVar1 = *(uint8_t*)(arg0 + 0xcc);
    if (sVar1 != 0) {
        sVar1 = sVar1 - 1;
    }
    return sVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E188
extern "C" bool Speculative_0048e188(uint8_t* arg0) __asm__("_ZNK3app4tool14ResourceLoader14IsLoadCompleteEv");
extern "C" bool Speculative_0048e188(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x14) == 5;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E648
extern "C" bool Speculative_0048e648(uint8_t* arg0) __asm__("_ZNK3app4tool25AppToolHPGaugePartsLayout7IsAnimeEv");
extern "C" bool Speculative_0048e648(uint8_t* arg0) {
return *(uint8_t*)(*(uint8_t*)(arg0 + 0x34) + 0xd) == '\x01';
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049CEDC
extern "C" bool Speculative_0049cedc(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK5Field11FieldScript10SystemWork8CheckBitENS0_17SCR_END_CHECK_BITE");
extern "C" bool Speculative_0049cedc(uint8_t* arg0, uint32_t arg1) {
return (arg1 & ~*(uint8_t*)(arg0 + 4)) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049CF20
extern "C" bool Speculative_0049cf20(uint8_t* arg0) __asm__("_ZNK5Field11FieldScript17FieldScriptSystem18IsMsgUpdateFuncEndEv");
extern "C" bool Speculative_0049cf20(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0xcc) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049CF74
extern "C" bool Speculative_0049cf74(uint8_t* arg0) __asm__("_ZNK5Field11FieldScript17FieldScriptSystem22IsReserveScriptSettingEv");
extern "C" bool Speculative_0049cf74(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x68) != 2000;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049F17C
extern "C" bool Speculative_0049f17c(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK5Field9MoveModel14FieldMoveModel13CheckStateBitENS0_22FieldMoveModelStateBitE");
extern "C" bool Speculative_0049f17c(uint8_t* arg0, uint32_t arg1) {
return (arg1 & ~*(uint8_t*)(arg0 + 200)) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049F980
extern "C" uint32_t Speculative_0049f980(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK5Field9MoveModel27FieldMoveModelShadowManager15GetEffectShadowEj");
extern "C" uint32_t Speculative_0049f980(uint8_t* arg0, uint32_t arg1) {
if (arg1 < 3) {
        return *(uint8_t*)((uint8_t*)arg0 + arg1 * 4 + 0xc);
    } else {
        return 0;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A32AC
extern "C" int32_t Speculative_004a32ac(uint8_t* arg0) __asm__("_ZNK7GameSys16GameEventManager8IsExistsEv");
extern "C" int32_t Speculative_004a32ac(uint8_t* arg0) {
if (*(uint8_t*)arg0 == 0) {
        return (int32_t)(int8_t)arg0[0xc];
    } else {
        return 1;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6BBC
extern "C" uint32_t Speculative_004a6bbc(uint8_t* arg0) __asm__("_ZNK8PokeTool9PokeModel11GetPokeSizeEv");
extern "C" uint32_t Speculative_004a6bbc(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x1598) & 0xff;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6C38
extern "C" bool Speculative_004a6c38(uint8_t* arg0) __asm__("_ZNK8Savedata11FishingSpot11NeedLotteryEv");
extern "C" bool Speculative_004a6c38(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 8) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AA728
extern "C" bool Speculative_004aa728(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData11IsRelatonMeEv");
extern "C" bool Speculative_004aa728(uint8_t* arg0) {
return arg0[0x239] == 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AA744
extern "C" bool Speculative_004aa744(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData12IsRelatonVipEv");
extern "C" bool Speculative_004aa744(uint8_t* arg0) {
return arg0[0x239] == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D30BC
extern "C" bool Speculative_002d30bc(uint8_t* arg0) __asm__("_ZN3App4Tool8ListMenu16IsInstanceDeleteEv");
extern "C" bool Speculative_002d30bc(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x35c) == 6;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E89E4
extern "C" bool Speculative_002e89e4(uint8_t* arg0) __asm__("_ZN3app4tool10IconObject12IsReplaceTexEv");
extern "C" bool Speculative_002e89e4(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x28) == 3 || *(uint8_t*)(arg0 + 0x28) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC000
extern "C" void Speculative_002ec000(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool10MenuWindow12SetInputModeENS0_13ButtonManager9InputModeE");
extern "C" void Speculative_002ec000(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(*(uint8_t*)(arg0 + 0x10) + 0x2c) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F399C
extern "C" void Speculative_002f399c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool16GeneralLowerView15SetBGVisibilityEb");
extern "C" void Speculative_002f399c(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(*(uint8_t*)(arg0 + 0x11c) + 0x44) = arg1 | (*(uint8_t*)(*(uint8_t*)(arg0 + 0x11c) + 0x44) & 0xfe);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305680
extern "C" void Speculative_00305680(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool9ScrollBar10SetVisibleEb");
extern "C" void Speculative_00305680(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(*(uint8_t*)(arg0 + 4) + 0x44) = arg1 | *(uint8_t*)(*(uint8_t*)(arg0 + 4) + 0x44) & 0xfe;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00333E10
extern "C" void Speculative_00333e10(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine8renderer11DrawManager21ViewSpaceRenderEnableEi");
extern "C" void Speculative_00333e10(uint8_t* arg0, uint32_t arg1) {
uint32_t uVar1 = *(uint8_t*)(arg0 + 0x134);
    if (arg1 == 0) {
        uVar1 |= 0x40;
    } else {
        uVar1 &= 0xffffffbf;
    }
    *(uint8_t*)(arg0 + 0x134) = uVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00346A70
extern "C" void Speculative_00346a70(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN4gfl22ui6Button19AddButtonAssignmentENS0_8ButtonIDES2_");
extern "C" void Speculative_00346a70(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint8_t*)(arg0 + arg1 * 4 + 0x48) =
        *(uint8_t*)(arg0 + arg1 * 4 + 0x48) | (1 << (arg2 & 0xff));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00346C08
extern "C" void Speculative_00346c08(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN4gfl22ui6Button22RemoveButtonAssignmentENS0_8ButtonIDES2_");
extern "C" void Speculative_00346c08(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint8_t*)(arg0 + arg1 * 4 + 0x48) =
        *(uint8_t*)(arg0 + arg1 * 4 + 0x48) & ~(1 << (arg2 & 0xff));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D118
extern "C" bool Speculative_0036d118(uint32_t arg0) __asm__("_ZN4item17ITEM_CheckPokeAddEt");
extern "C" bool Speculative_0036d118(uint32_t arg0) {
return arg0 != 499 && arg0 != 500;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A1A0
extern "C" bool Speculative_0039a1a0(uint8_t* arg0) __asm__("_ZN5Field9EventWork15CanUseMushiyokeEv");
extern "C" bool Speculative_0039a1a0(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x9e0) == 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EE4A0
extern "C" bool Speculative_003ee4a0(uint32_t arg0) __asm__("_ZN6hangul8IsKSJamoEw");
extern "C" bool Speculative_003ee4a0(uint32_t arg0) {
return arg0 - 0x3131U < 0x33;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417F08
extern "C" void Speculative_00417f08(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN7poke_3d5model9BaseModel26SetInterestResetFrameCountEji");
extern "C" void Speculative_00417f08(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint8_t*)((*(uint8_t*)(*(uint8_t*)(arg0 + 0xcc) + 8) + arg1 * 0x90 + 0x84)) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437AE8
extern "C" void Speculative_00437ae8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata10ConfigSave15SetTalkingSpeedENS0_9MSG_SPEEDE");
extern "C" void Speculative_00437ae8(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 4) = arg1 & 3 | *(uint8_t*)(arg0 + 4) & 0xfffffffc;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043A2E8
extern "C" void Speculative_0043a2e8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata12GameSyncSave23SetDispedFirstGuideFlagEb");
extern "C" void Speculative_0043a2e8(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 0x1a8) = *(uint8_t*)(arg0 + 0x1a8) & 0xff7f | (arg1 << 7);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044548C
extern "C" void Speculative_0044548c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata9FieldMenu15SetVisibleRotomEb");
extern "C" void Speculative_0044548c(uint8_t* arg0, uint32_t arg1) {
uint32_t uVar1;

    if (arg1 == 0) {
        uVar1 = *(uint8_t*)(arg0 + 4) & 0xdfffffff;
    } else {
        uVar1 = *(uint8_t*)(arg0 + 4) | 0x20000000;
    }
    *(uint8_t*)(arg0 + 4) = uVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E168
extern "C" bool Speculative_0048e168(uint8_t* arg0) __asm__("_ZNK3app4tool18InfoWindowBookType9IsCreatedEv");
extern "C" bool Speculative_0048e168(uint8_t* arg0) {
return arg0[0x8d] == 3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E904
extern "C" bool Speculative_0048e904(uint8_t* arg0) __asm__("_ZNK3app4util19AppRenderingManager10CanDestroyEv");
extern "C" bool Speculative_0048e904(uint8_t* arg0) {
return arg0[4] == 0x0 || arg0[4] == 0x2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049A794
extern "C" bool Speculative_0049a794(uint8_t* arg0) __asm__("_ZNK4gfl23lyt5LytWk9IsDrawingEv");
extern "C" bool Speculative_0049a794(uint8_t* arg0) {
return *(uint8_t*)(*(uint8_t*)(arg0 + 4) + 0x110) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049BED4
extern "C" bool Speculative_0049bed4(uint8_t* arg0) __asm__("_ZNK7poke_3d5model9BaseModel16IsFinishInterestEv");
extern "C" bool Speculative_0049bed4(uint8_t* arg0) {
return *(uint8_t*)(*(uint8_t*)(arg0 + 0xcc) + 0x14) != '\0';
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A43B0
extern "C" bool Speculative_004a43b0(uint8_t* arg0) __asm__("_ZNK7poke_3d5model10CharaModel12IsFinishNeckEv");
extern "C" bool Speculative_004a43b0(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x108) <= *(uint8_t*)(arg0 + 0x10c);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6F14
extern "C" void* Speculative_004a6f14(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata15MysteryGiftSave11GetGiftDataEj");
extern "C" void* Speculative_004a6f14(uint8_t* arg0, uint32_t arg1) {
if (arg1 < 0x30) {
        return arg0 + arg1 * 0x108 + 0x104;
    } else {
        return nullptr;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A861C
extern "C" bool Speculative_004a861c(uint8_t* arg0) __asm__("_ZNK8Savedata8MyStatus18IsValidNexUniqueIDEv");
extern "C" bool Speculative_004a861c(uint8_t* arg0) {
return *(uint8_t*)(arg0 + 0x1c) != 0 || *(uint8_t*)(arg0 + 0x18) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A84A8
extern "C" void Speculative_003a84a8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field9SubScreen14FieldSubScreen16SetFieldMenuProcEPN3App9FieldMenu22FieldMenuSubWindowProcE");
extern "C" void Speculative_003a84a8(uint8_t* arg0, uint32_t arg1) {
if (*(uint8_t*)arg0 != 0) {
        *(uint8_t*)(*(uint8_t*)arg0 + 0x34) = arg1;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041780C
extern "C" void Speculative_0041780c(uint32_t arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN7poke_3d5model9BaseModel16SetInterestSpeedEjf");
extern "C" void Speculative_0041780c(uint32_t arg0, uint32_t arg1, uint32_t arg2) {
*(uint8_t*)(*(uint8_t*)(*(uint8_t*)(*(uint8_t*)(arg1 + 0xcc) + 8) + arg2 * 0x90 + 0x10) + 0x44) = arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437A70
extern "C" void Speculative_00437a70(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata10ConfigSave12SetBoxStatusENS0_10BOX_STATUSE");
extern "C" void Speculative_00437a70(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 4) = (arg1 & 1) << 0xf | *(uint8_t*)(arg0 + 4) & 0xffff7fff;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437ACC
extern "C" void Speculative_00437acc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata10ConfigSave13SetBattleRuleENS0_11BATTLE_RULEE");
extern "C" void Speculative_00437acc(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 4) = (arg1 & 1) << 3 | *(uint8_t*)(arg0 + 4) & 0xfffffff7;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437B00
extern "C" void Speculative_00437b00(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata10ConfigSave18SetBattleAnimationENS0_16BATTLE_ANIMATIONE");
extern "C" void Speculative_00437b00(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 4) = (arg1 & 1) << 2 | *(uint8_t*)(arg0 + 4) & 0xfffffffb;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E71C
extern "C" void Speculative_0043e71c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN8Savedata17JoinFestaDataSave16SetFortuneResultEN15JoinFestaScript15FacilitiesIndexENS1_16FortuneResultHitENS1_19FortuneResultActionE");
extern "C" void Speculative_0043e71c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
if (arg1 < 7) {
        arg0[arg1 * 0x48 + 0x33e] = arg2;
        arg0[arg1 * 0x48 + 0x33f] = arg3;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004415BC
extern "C" void Speculative_004415bc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata4Misc16SetStrInputParamEj");
extern "C" void Speculative_004415bc(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 0xc) = (arg1 & 1) << 1 | *(uint8_t*)(arg0 + 0xc) & 0xfffffffd;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004419A4
extern "C" int32_t Speculative_004419a4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata4Misc7SubGoldEj");
extern "C" int32_t Speculative_004419a4(uint8_t* arg0, uint32_t arg1) {
if (*(uint8_t*)(arg0 + 8) < arg1) {
        *(uint8_t*)(arg0 + 8) = 0;
    } else {
        *(uint8_t*)(arg0 + 8) -= arg1;
    }
    return *(uint8_t*)(arg0 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2B04
extern "C" int32_t Speculative_004a2b04(uint8_t* arg0) __asm__("_ZNK6NetLib10Validation17PokemonValidation12IsConnectingEv");
extern "C" int32_t Speculative_004a2b04(uint8_t* arg0) {
if (*(uint8_t*)(arg0 + 0x15fc) != 0) {
    return (int32_t)*(uint8_t*)(*(uint8_t*)(arg0 + 0x15fc) + 5);
  }
  return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2C9C
extern "C" int32_t Speculative_004a2c9c(uint8_t* arg0) __asm__("_ZNK6NetLib3Pgl12PGLConnector12IsConnectingEv");
extern "C" int32_t Speculative_004a2c9c(uint8_t* arg0) {
if (*(uint8_t*)(arg0 + 0xb5c) != 0) {
    return (int32_t)*(uint8_t*)(*(uint8_t*)(arg0 + 0xb5c) + 5);
  }
  return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6BD0
extern "C" uint32_t Speculative_004a6bd0(uint8_t* arg0) __asm__("_ZNK8Savedata10ConfigSave11IsKanjiModeEv");
extern "C" uint32_t Speculative_004a6bd0(uint8_t* arg0) {
uint32_t uVar1;

    uVar1 = (*(uint8_t*)(arg0 + 4) & 0xff) >> 4;
    if (1 < uVar1) {
        uVar1 = 0;
    }
    return uVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB49C
extern "C" bool Speculative_004ab49c(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK9NetAppLib9JoinFesta28JoinFestaPersonalDataManager6IsFullENS0_15JoinFestaDefine21E_JOIN_FESTA_RELATIONE");
extern "C" bool Speculative_004ab49c(uint8_t* arg0, uint32_t arg1) {
return *(uint8_t*)(arg0 + arg1 * 0x14 + 0x260) == 0x32;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6624
extern "C" void Speculative_002e6624(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App9FieldMenu8PlayData16InitRotomMessageEj");
extern "C" void Speculative_002e6624(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + arg1 * 8 + 8) = 0x7fffffff;
    *(uint8_t*)(arg0 + arg1 * 8 + 0xc) = 0xffffffff;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034C2E0
extern "C" bool Speculative_0034c2e0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl23gfx8CommonGL17SetActiveDisplay_EPv");
extern "C" bool Speculative_0034c2e0(uint8_t* arg0, uint32_t arg1) {
int32_t iVar1;
    bool bVar2;

    iVar1 = *(uint8_t*)(arg0 + 8);
    bVar2 = iVar1 != arg1;
    if (bVar2) {
        iVar1 = *(uint8_t*)(arg0 + 0xc);
    }
    bVar2 = !bVar2 || iVar1 == 0;
    if (bVar2) {
        *(uint8_t*)(arg0 + 8) = arg1;
    }
    return bVar2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042FE78
extern "C" int32_t Speculative_0042fe78(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN8PokeTool15PokeModelSystem21CalcPokeModelHeapSizeEPKNS0_10HeapOptionE");
extern "C" int32_t Speculative_0042fe78(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
int32_t iVar1;

    iVar1 = *(uint8_t*)(arg2 + 4);
    if ((iVar1 == 0) && (iVar1 = 0x340000, *(uint8_t*)(arg2 + 1) != '\0')) {
        iVar1 = 0x800000;
    }
    return iVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2CEC
extern "C" uint8_t Speculative_004a2cec(uint8_t* arg0) __asm__("_ZNK6NetLib4Wifi19SubscriptionManager17CanOpenAttractionEv");
extern "C" uint8_t Speculative_004a2cec(uint8_t* arg0) {
uint8_t bVar1;
    uint8_t bVar2;

    if ((*(uint8_t*)(arg0 + 0x44) == 0) ||
       (bVar1 = *(uint8_t*)(*(uint8_t*)(arg0 + 0x44) + 8), bVar2 = bVar1 & 1, (bVar1 & 1) != 0)) {
        bVar2 = 1;
    }
    return bVar2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443A88
extern "C" void Speculative_00443a88(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN8Savedata8MyStatus17SetQuickMatchInfoEbbb");
extern "C" void Speculative_00443a88(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
*(uint8_t*)(arg0 + 0x80) =
        ((*(uint8_t*)(arg0 + 0x80) & 0xfffb | arg1 << 2) & 0xfff7 | arg2 << 3) & 0xffef |
        arg3 << 4;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035DE7C
extern "C" int32_t Speculative_0035de7c(uint8_t* arg0) __asm__("_ZN4gfl26Effect6Handle13GetEmitterSetEv");
extern "C" int32_t Speculative_0035de7c(uint8_t* arg0) {
int32_t iVar1;

    iVar1 = *(uint8_t*)arg0;
    if ((iVar1 == 0) || (*(uint8_t*)(arg0 + 4) != *(uint8_t*)(iVar1 + 0xc))) {
        iVar1 = 0;
    }
    return iVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438BFC
extern "C" int32_t Speculative_00438bfc(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave18GetTreasureItemNumEv");
extern "C" int32_t Speculative_00438bfc(uint8_t* arg0) {
int32_t count = 0;
    int32_t index = 0x14;
    short* p = reinterpret_cast<short*>(arg0 + 0x5600);
    while (index != 0) {
        if (*p != 0) {
            count++;
        }
        index--;
        p++;
    }
    return count;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CB3BC
extern "C" void Speculative_002cb3bc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool10TalkWindow21SetEnableMessageBoostEb");
extern "C" void Speculative_002cb3bc(uint8_t* arg0, uint32_t arg1) {
if (*(uint8_t*)(*(uint8_t*)(arg0 + 0x60) + 0x34) != 0) {
    *(uint8_t*)(*(uint8_t*)(*(uint8_t*)(arg0 + 0x60) + 0x34) + 0xdd) = arg1;
  }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00444F88
extern "C" void Speculative_00444f88(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata9FieldMenu12ResetIconNewENS0_6IconIDE");
extern "C" void Speculative_00444f88(uint8_t* arg0, uint32_t arg1) {
uint32_t uVar1;

    uVar1 = 1 << (arg1 & 0xff);
    if ((uVar1 & (*(uint8_t*)(arg0 + 4) & 0xffff) >> 4) != 0) {
        *(uint8_t*)(arg0 + 4) = *(uint8_t*)(arg0 + 4) ^ (uVar1 & 0xfff) << 4;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC31C
extern "C" void Speculative_002ec31c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool13ButtonManager16SetNotifyTimmingENS1_13NotifyTimmingE");
extern "C" void Speculative_002ec31c(uint8_t* arg0, uint32_t arg1) {
uint32_t count = *(uint8_t*)(arg0 + 0x18);
    if (count != 0) {
        for (uint32_t i = 0; i < count; ++i) {
            int32_t index = i * 4;
            *(uint8_t*)(*(uint8_t*)(*(uint8_t*)(arg0 + 0x10) + index) + 0x4a) = arg1;
        }
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A5318
extern "C" uint32_t Speculative_003a5318(uint8_t* arg0) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager35GetFieldSubobjectIndexFromFreeSpaceEv");
extern "C" uint32_t Speculative_003a5318(uint8_t* arg0) {
uint32_t uVar1 = 1;
    do {
        if (*(uint8_t*)(*(uint8_t*)(arg0 + uVar1 * 4 + 0x8c) + 0x88) == 0) {
            return uVar1;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 10);
    return 10;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B97C
extern "C" uint32_t Speculative_0043b97c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata15MysteryGiftSave11GetRecvFlagEj");
extern "C" uint32_t Speculative_0043b97c(uint8_t* arg0, uint32_t arg1) {
uint32_t uVar1;

    uVar1 = 1;
    if ((arg1 < 0x30) && (arg0 + arg1 * 0x108 != (uint8_t*)0xfffffefc)) {
        uVar1 = ((uint8_t)(arg0 + arg1 * 0x108)[0x156] & 2) >> 1;
    }
    return uVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E81AC
extern "C" void* Speculative_002e81ac(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app3bag8PlayData13GetPocketDataEj");
extern "C" void* Speculative_002e81ac(uint8_t* arg0, uint32_t arg1) {
if (arg1 > 5) {
        arg1 = 0;
    }
    return arg0 + arg1 * 4 + 4;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037FFB8
extern "C" uint32_t Speculative_0037ffb8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field11FieldScript17FieldScriptSystem14EntryNextEventEPN7GameSys9GameEventE");
extern "C" uint32_t Speculative_0037ffb8(uint8_t* arg0, uint32_t arg1) {
uint32_t uVar1;

    uVar1 = arg1;
    if (*(uint8_t*)(arg0 + 100) != 0) {
        uVar1 = 0;
    }
    *(uint8_t*)(arg0 + 100) = arg1;
    return (long long)uVar1 << 32;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0047016C
extern "C" int32_t Speculative_0047016c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib9JoinFesta24JoinFestaSelectWordTable19GetMessageTableSizeENS1_8CategoryE");
extern "C" int32_t Speculative_0047016c(uint8_t* arg0, uint32_t arg1) {
int32_t iVar1;
    uint32_t uVar2;

    iVar1 = 0;
    uVar2 = 0;
    do {
        if (*(uint8_t*)(*(uint8_t*)(arg0 + arg1 * 4 + 0x58) + uVar2 * 4) == -1) {
            return iVar1;
        }
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 1;
    } while (uVar2 < 0x20d);
    return iVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00383594
extern "C" void Speculative_00383594(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN5Field11FieldScript4Work19SetChildGlobalParamEji");
extern "C" void Speculative_00383594(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint8_t*)((uint8_t*)arg0 + arg1 * 4 + 0x54) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00383600
extern "C" void Speculative_00383600(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN5Field11FieldScript4Work20SetParentGlobalParamEji");
extern "C" void Speculative_00383600(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint8_t*)((uint8_t*)arg0 + arg1 * 4 + 0x3c) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8AE0
extern "C" uint32_t Speculative_004a8ae0(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata9FieldMenu15GetMoveMenuPageEi");
extern "C" uint32_t Speculative_004a8ae0(uint8_t* arg0, uint32_t arg1) {
uint32_t uVar1;
    uint32_t uVar2;

    uVar1 = -((int32_t)(*(uint8_t*)(arg0 + 4) << 0x1e) >> 0x1f);
    uVar2 = uVar1 + arg1;
    if ((((int32_t)uVar2 < 0) || (1 < uVar2)) ||
       ((1 << (uVar2 & 0xff) & (*(uint8_t*)(arg0 + 4) & 0xf) >> 2) == 0)) {
        uVar2 = uVar1;
    }
    return uVar2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A704
extern "C" void* Speculative_0039a704(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field9EventWork25GetDendouiriPartyArrayPtrENS_18DendouiriPartyTypeE");
extern "C" void* Speculative_0039a704(uint8_t* arg0, uint32_t arg1) {
if (arg1 > 1) {
        arg1 = 1;
    }
    return arg0 + arg1 * 0xc + 0x9c8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438978
extern "C" void Speculative_00438978(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN8Savedata10ResortSave16SetAdventureItemEit");
extern "C" void Speculative_00438978(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint8_t*)((uint8_t*)arg0 + arg1 * 2 + 0x5600) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6A0C
extern "C" uint32_t Speculative_004a6a0c(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8PokeTool10ExtendData19GetLocalAreaMonsMaxENS0_9LocalAreaE");
extern "C" uint32_t Speculative_004a6a0c(uint8_t* arg0, uint32_t arg1) {
if ((arg1 == 0) || (5 < arg1)) {
        arg1 = 1;
    }
    return *(uint8_t*)(arg0 + arg1 * 4 + 0x38);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EE554
extern "C" void Speculative_002ee554(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4tool13CursorManager13SetMoveEnableEhb");
extern "C" void Speculative_002ee554(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t uVar1;

    uVar1 = 1 << (arg1 & 0x1f);
    if (arg2 == 0) {
        uVar1 = *(uint8_t*)(arg0 + (arg1 >> 5) * 4 + 0x18) & ~uVar1;
    } else {
        uVar1 = *(uint8_t*)(arg0 + (arg1 >> 5) * 4 + 0x18) | uVar1;
    }
    *(uint8_t*)(arg0 + (arg1 >> 5) * 4 + 0x18) = uVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00380104
extern "C" uint8_t Speculative_00380104(uint8_t* arg0) __asm__("_ZN5Field11FieldScript17FieldScriptSystem15GetBgPartsCountEv");
extern "C" uint8_t Speculative_00380104(uint8_t* arg0) {
int8_t count = ((uint8_t)arg0[0xb0] & 1) != 0;
    if (((uint8_t)arg0[0xb4] & 1) != 0) {
        count += '\x01';
    }
    if (((uint8_t)arg0[0xb8] & 1) != 0) {
        count += '\x01';
    }
    if (((uint8_t)arg0[0xbc] & 1) != 0) {
        count += '\x01';
    }
    if (((uint8_t)arg0[0xc0] & 1) != 0) {
        count += '\x01';
    }
    return count;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00329448
extern "C" int32_t Speculative_00329448(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance17ModelInstanceNode10GetDrawTagEj");
extern "C" int32_t Speculative_00329448(uint8_t* arg0, uint32_t arg1) {
int32_t iVar1;

    if (*(uint8_t*)(arg0 + 0x10c) + arg1 * 0xa0 == 0) {
        iVar1 = 0;
    } else {
        iVar1 = *(uint8_t*)(arg0 + 0x10c) + arg1 * 0xa0 + 8;
    }
    return iVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E6A1C
extern "C" void Speculative_003e6a1c(uint8_t* arg0) __asm__("_ZN6System20DressUpParamSaveDataC1Ev");
extern "C" void Speculative_003e6a1c(uint8_t* arg0) {
uint32_t* this_ptr = reinterpret_cast<uint32_t*>(arg0);
    *reinterpret_cast<uint32_t*>(this_ptr + 1) &= 0xf0000000;
    *this_ptr &= 0xe0000000;
    *reinterpret_cast<uint32_t*>(this_ptr + 2) &= 0xc0000000;
    *reinterpret_cast<uint32_t*>(this_ptr + 3) &= 0xcff00000;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7A7C
extern "C" void Speculative_002c7a7c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App11TrainerPass8PlayData12SetStampPageEi");
extern "C" void Speculative_002c7a7c(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x4) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7E18
extern "C" void Speculative_002c7e18(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App3Box11BoxAppSetup15SetOtherMessageEi");
extern "C" void Speculative_002c7e18(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x94) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C9B40
extern "C" void Speculative_002c9b40(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool10MapManager14SetupPlayerSexEj");
extern "C" void Speculative_002c9b40(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x1ac) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CB73C
extern "C" void Speculative_002cb73c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool10TalkWindow8SetTimerEi");
extern "C" void Speculative_002cb73c(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0xb4) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CC53C
extern "C" void Speculative_002cc53c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool11NewPaneList15SetupInsertPaneEPN2nw3lyt4PaneE");
extern "C" void Speculative_002cc53c(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0xbc) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D4AE8
extern "C" void Speculative_002d4ae8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App5Event12ShopBuyEvent9SetupHeapEPN4gfl24heap11CtrHeapBaseE");
extern "C" void Speculative_002d4ae8(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x48) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E0F40
extern "C" void Speculative_002e0f40(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App8PokeList16IntermediateData12SetParameterEPN3pml9PokePartyE");
extern "C" void Speculative_002e0f40(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x0) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E71F4
extern "C" void Speculative_002e71f4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app2ui13UIViewManager20SetTopPriorityUIViewEPNS0_6UIViewE");
extern "C" void Speculative_002e71f4(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x80) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E78EC
extern "C" void Speculative_002e78ec(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app2ui6UIView21SetLayoutTransferAreaEN4gfl23lyt10MemoryAreaE");
extern "C" void Speculative_002e78ec(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x74) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E81A4
extern "C" void Speculative_002e81a4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app3bag8PlayData12SetPocketPosEj");
extern "C" void Speculative_002e81a4(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x20) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA004
extern "C" void Speculative_002ea004(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool10MenuWindow11SetListenerEPNS0_18MenuWindowListenerE");
extern "C" void Speculative_002ea004(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x154) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EBBDC
extern "C" void Speculative_002ebbdc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool12PaneListView11SetListenerEPNS1_8ListenerE");
extern "C" void Speculative_002ebbdc(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x90) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00340F08
extern "C" void Speculative_00340f08(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl22fs17BinLinkerAccessor10InitializeEPv");
extern "C" void Speculative_00340f08(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x0) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00340F10
extern "C" void Speculative_00340f10(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl22fs17BinLinkerAccessorC1EPv");
extern "C" void Speculative_00340f10(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x0) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00358BEC
extern "C" float Speculative_00358bec(uint8_t* arg0) __asm__("_ZN4gfl24math16SpringSimulation10GetPostionEv");
extern "C" float Speculative_00358bec(uint8_t* arg0) { return *(float*)((uint32_t)arg0 + 0x18); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C15D4
extern "C" void Speculative_003c15d4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5print7WordSet16SetWordSetLoaderEP13WordSetLoader");
extern "C" void Speculative_003c15d4(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x14) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF198
extern "C" void Speculative_003cf198(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetApp3NBR6NBRNet18RegistRecvListenerEPNS0_18NBRNetRecvListenerE");
extern "C" void Speculative_003cf198(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0xc) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6E6C
extern "C" void Speculative_003d6e6c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib3P2P20P2pConnectionManager23RegistMigrationListenerEPNS0_30P2pConnectionMigrationListenerE");
extern "C" void Speculative_003d6e6c(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x88) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D8C7C
extern "C" void Speculative_003d8c7c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib3Pgl12PGLConnector23SetPGLConnectorListenerEPNS0_20PGLConnectorListenerE");
extern "C" void Speculative_003d8c7c(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0xb54) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E058C
extern "C" void Speculative_003e058c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib8Delivery15DeliveryManager13SetSerialCodeEj");
extern "C" void Speculative_003e058c(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x88) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E0660
extern "C" void Speculative_003e0660(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib8Delivery15DeliveryManager15SetRecvListenerEPNS0_20DeliveryRecvListenerE");
extern "C" void Speculative_003e0660(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x1c) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E0668
extern "C" void Speculative_003e0668(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib8Delivery15DeliveryManager15SetSendListenerEPNS0_20DeliverySendListenerE");
extern "C" void Speculative_003e0668(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x18) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FD8BC
extern "C" void Speculative_003fd8bc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7gflnet23nex20NexMatchMakingClient20SetCommunityListenerEPNS0_20NexCommunityListenerE");
extern "C" void Speculative_003fd8bc(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x1c) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D498
extern "C" void Speculative_0040d498(uint8_t* arg0, float arg_f) __asm__("_ZN7poke_3d5model10BaseCamera22SetLocalAnimationScaleEf");
extern "C" void Speculative_0040d498(uint8_t* arg0, float arg_f) { *(float*)((uint32_t)arg0 + 0x6c) = arg_f; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040DD54
extern "C" void Speculative_0040dd54(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model10CharaModel14SetupRandomFucEPFjjE");
extern "C" void Speculative_0040dd54(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x110) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004100F4
extern "C" void Speculative_004100f4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model12PokemonModel22SetEnabledAmbientColorEi");
extern "C" void Speculative_004100f4(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x2cc) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041178C
extern "C" void Speculative_0041178c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model17CharaModelFactory15SetupRandomFuncEPFjjE");
extern "C" void Speculative_0041178c(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x18) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417920
extern "C" void Speculative_00417920(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model9BaseModel20SetAnimationPackListEPN4gfl29animation17AnimationPackListE");
extern "C" void Speculative_00417920(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x24) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464D8C
extern "C" void Speculative_00464d8c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient27SetP2PTradeResponseListenerEPNS0_24P2PTradeResponseListenerE");
extern "C" void Speculative_00464d8c(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x8) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048DFD8
extern "C" uint32_t Speculative_0048dfd8(uint8_t* arg0) __asm__("_ZNK3app4tool13CursorManager6GetPosEv");
extern "C" uint32_t Speculative_0048dfd8(uint8_t* arg0) { return (uint32_t)*(uint8_t*)((uint32_t)arg0 + 0x14); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E180
extern "C" uint32_t Speculative_0048e180(uint8_t* arg0) __asm__("_ZNK3app4tool14PokeIconToolEx14GetPicturePaneEv");
extern "C" uint32_t Speculative_0048e180(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x34); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E718
extern "C" uint32_t Speculative_0048e718(uint8_t* arg0) __asm__("_ZNK3app4tool8PaneList15GetUpdateResultEv");
extern "C" uint32_t Speculative_0048e718(uint8_t* arg0) { return (uint32_t)*(uint8_t*)((uint32_t)arg0 + 0xc4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493B2C
extern "C" uint32_t Speculative_00493b2c(uint8_t* arg0) __asm__("_ZNK3pml9PokeParty14GetMemberCountEv");
extern "C" uint32_t Speculative_00493b2c(uint8_t* arg0) { return (uint32_t)*(uint8_t*)((uint32_t)arg0 + 0x18); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493B9C
extern "C" uint32_t Speculative_00493b9c(uint8_t* arg0) __asm__("_ZNK3pml9PokeParty15GetMarkingIndexEv");
extern "C" uint32_t Speculative_00493b9c(uint8_t* arg0) { return (uint32_t)*(uint8_t*)((uint32_t)arg0 + 0x19); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493FB8
extern "C" uint32_t Speculative_00493fb8(uint8_t* arg0) __asm__("_ZNK4gfl215renderingengine10scenegraph8NodeName11GetNodeNameEv");
extern "C" uint32_t Speculative_00493fb8(uint8_t* arg0) { return ((uint32_t)arg0 + 0x4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004967CC
extern "C" uint32_t Speculative_004967cc(uint8_t* arg0) __asm__("_ZNK4gfl215renderingengine8renderer4util22MakeReductionImagePath21GetDestinationTextureEv");
extern "C" uint32_t Speculative_004967cc(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x138); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00499384
extern "C" uint32_t Speculative_00499384(uint8_t* arg0) __asm__("_ZNK4gfl23lyt13LytMultiResID10GetMultiIDEv");
extern "C" uint32_t Speculative_00499384(uint8_t* arg0) { return (uint32_t)*(uint16_t*)((uint32_t)arg0 + 0x2); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2CC8
extern "C" uint32_t Speculative_004a2cc8(uint8_t* arg0) __asm__("_ZNK6NetLib4Wifi17WifiConnectRunner23IsNeedDisconnectProcessEv");
extern "C" uint32_t Speculative_004a2cc8(uint8_t* arg0) { return (int32_t)*(int8_t*)((uint32_t)arg0 + 0x13); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2DA0
extern "C" uint32_t Speculative_004a2da0(uint8_t* arg0) __asm__("_ZNK6NetLib8Delivery15DeliveryManager13IsInitializedEv");
extern "C" uint32_t Speculative_004a2da0(uint8_t* arg0) { return (int32_t)*(int8_t*)((uint32_t)arg0 + 0x4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3100
extern "C" uint32_t Speculative_004a3100(uint8_t* arg0) __asm__("_ZNK6System6Skybox6Skybox8IsEnableEv");
extern "C" uint32_t Speculative_004a3100(uint8_t* arg0) { return (int32_t)*(int8_t*)((uint32_t)arg0 + 0x28); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A32D0
extern "C" uint32_t Speculative_004a32d0(uint8_t* arg0) __asm__("_ZNK7GameSys8GameData12GetNowZoneIDEv");
extern "C" uint32_t Speculative_004a32d0(uint8_t* arg0) { return (uint32_t)*(uint16_t*)((uint32_t)arg0 + 0x62); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A34B0
extern "C" uint32_t Speculative_004a34b0(uint8_t* arg0) __asm__("_ZNK7gflnet23nex10NexManager22GetAuthenticationTokenEv");
extern "C" uint32_t Speculative_004a34b0(uint8_t* arg0) { return ((uint32_t)arg0 + 0x28); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3810
extern "C" uint32_t Speculative_004a3810(uint8_t* arg0) __asm__("_ZNK7poke_3d5model10BaseCamera13GetFrameCountEv");
extern "C" uint32_t Speculative_004a3810(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x30); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3F14
extern "C" float Speculative_004a3f14(uint8_t* arg0) __asm__("_ZNK7poke_3d5model10BaseCamera17GetAnimationFrameEv");
extern "C" float Speculative_004a3f14(uint8_t* arg0) { return *(float*)((uint32_t)arg0 + 0x28); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A43C8
extern "C" uint32_t Speculative_004a43c8(uint8_t* arg0) __asm__("_ZNK7poke_3d5model10CharaModel13GetMouthIndexEv");
extern "C" uint32_t Speculative_004a43c8(uint8_t* arg0) { return (uint32_t)*(uint8_t*)((uint32_t)arg0 + 0xec); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AAA20
extern "C" uint32_t Speculative_004aaa20(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData13GetUpdateDateEv");
extern "C" uint32_t Speculative_004aaa20(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x1f8); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AAA28
extern "C" uint32_t Speculative_004aaa28(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData14GetDressUpIconEv");
extern "C" uint32_t Speculative_004aaa28(uint8_t* arg0) { return ((uint32_t)arg0 + 0x4c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AAA38
extern "C" uint32_t Speculative_004aaa38(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData15GetDressUpParamEv");
extern "C" uint32_t Speculative_004aaa38(uint8_t* arg0) { return ((uint32_t)arg0 + 0x4c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AACC0
extern "C" uint32_t Speculative_004aacc0(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData19GetPacketAttractionEv");
extern "C" uint32_t Speculative_004aacc0(uint8_t* arg0) { return ((uint32_t)arg0 + 0x208); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AADC8
extern "C" uint32_t Speculative_004aadc8(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData20GetPacketTradeInviteEv");
extern "C" uint32_t Speculative_004aadc8(uint8_t* arg0) { return ((uint32_t)arg0 + 0x208); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AAF00
extern "C" uint32_t Speculative_004aaf00(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData21GetPacketTradeRecieveEv");
extern "C" uint32_t Speculative_004aaf00(uint8_t* arg0) { return ((uint32_t)arg0 + 0x208); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB42C
extern "C" uint32_t Speculative_004ab42c(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData7GetNameEv");
extern "C" uint32_t Speculative_004ab42c(uint8_t* arg0) { return ((uint32_t)arg0 + 0x10); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB478
extern "C" uint32_t Speculative_004ab478(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta28JoinFestaPersonalDataManager17GetInviteTicketIdEv");
extern "C" uint32_t Speculative_004ab478(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x290); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C9E48
extern "C" uint32_t Speculative_002c9e48(uint8_t* arg0) __asm__("_ZN3App4Tool10MapManager19IsMapTextureReplaceEv");
extern "C" uint32_t Speculative_002c9e48(uint8_t* arg0) { return (int32_t)*(int8_t*)(((uint32_t)arg0 + 0x100) + 0x30); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F216C
extern "C" uint32_t Speculative_002f216c(uint8_t* arg0) __asm__("_ZN3app4tool16CharaSimpleModel21GetCharaBattleCharaIdEj");
extern "C" uint32_t Speculative_002f216c(uint8_t* arg0) { return ((uint32_t)arg0 != 0); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FCDE8
extern "C" uint32_t Speculative_002fcde8(uint8_t* arg0) __asm__("_ZN3app4tool27AppToolTrainerIconRendering16GetHeroTrainerIdEj");
extern "C" uint32_t Speculative_002fcde8(uint8_t* arg0) { return ((uint32_t)arg0 != 0); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310A58
extern "C" uint32_t Speculative_00310a58(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4util7G2DUtil18SetMessageCallbackEPN5print11MsgCallbackE");
extern "C" uint32_t Speculative_00310a58(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x34) + 0xe8) = arg1; return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x34); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00396EC0
extern "C" uint32_t Speculative_00396ec0(uint8_t* arg0) __asm__("_ZN5Field7Encount11EncountWork16GetEncountEffectEv");
extern "C" uint32_t Speculative_00396ec0(uint8_t* arg0) { return (((uint32_t)arg0 + 0x400) + 0x108); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A520
extern "C" uint32_t Speculative_0039a520(uint8_t* arg0) __asm__("_ZN5Field9EventWork18GetMushiyokeItemNoEv");
extern "C" uint32_t Speculative_0039a520(uint8_t* arg0) { return (uint32_t)*(uint16_t*)(((uint32_t)arg0 + 0x900) + 0xc6); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6ED8
extern "C" uint32_t Speculative_003d6ed8(uint8_t* arg0) __asm__("_ZN6NetLib3P2P20P2pConnectionManager26IsMatchmakingCreateSuccessEv");
extern "C" uint32_t Speculative_003d6ed8(uint8_t* arg0) { return (int32_t)*(int8_t*)(((uint32_t)arg0 + 0x100) + 0x8c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417504
extern "C" uint32_t Speculative_00417504(uint8_t* arg0) __asm__("_ZN7poke_3d5model9BaseModel14GetWorldMatrixEv");
extern "C" uint32_t Speculative_00417504(uint8_t* arg0) { return ((uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x4) + 0x48); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004178CC
extern "C" uint32_t Speculative_004178cc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model9BaseModel19SetInterestPositionEPKN4gfl24math7Vector3E");
extern "C" uint32_t Speculative_004178cc(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)*(uint32_t*)((uint32_t)arg0 + 0xcc) + 0x10) = arg1; return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0xcc); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041B744
extern "C" uint32_t Speculative_0041b744(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN7poke_3d8renderer21OutLinePostRenderPath17SetEdgeMapTextureEjPKN4gfl23gfx7TextureE");
extern "C" uint32_t Speculative_0041b744(uint8_t* arg0, uint32_t arg1, uint32_t arg2) { *(uint32_t*)(((uint32_t)arg0 + (arg1 << 2)) + 0x4) = arg2; return ((uint32_t)arg0 + (arg1 << 2)); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00434D78
extern "C" uint32_t Speculative_00434d78(uint8_t* arg0) __asm__("_ZN8PokeTool9PokeModel18GetAnimationIsLoopEv");
extern "C" uint32_t Speculative_00434d78(uint8_t* arg0) { return (int32_t)*(int8_t*)(((uint32_t)arg0 + 0x1200) + 0xb5); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E8B8
extern "C" uint32_t Speculative_0043e8b8(uint8_t* arg0) __asm__("_ZN8Savedata17JoinFestaDataSave18GetLastP2pPersonalEv");
extern "C" uint32_t Speculative_0043e8b8(uint8_t* arg0) { return (((uint32_t)arg0 + 0x2c00) + 0x288); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443E90
extern "C" uint32_t Speculative_00443e90(uint8_t* arg0) __asm__("_ZN8Savedata8PlayTime12PushSaveTimeEv");
extern "C" uint32_t Speculative_00443e90(uint8_t* arg0) { *(uint32_t*)((uint32_t)arg0 + 0xc) = (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x8); return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x8); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443E9C
extern "C" uint32_t Speculative_00443e9c(uint8_t* arg0) __asm__("_ZN8Savedata8PlayTime13GetSaveMinuteEv");
extern "C" uint32_t Speculative_00443e9c(uint8_t* arg0) { return ((uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x8) >> 26); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00445474
extern "C" uint32_t Speculative_00445474(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata9FieldMenu15GetRideShortcutENS0_9RideKeyIDE");
extern "C" uint32_t Speculative_00445474(uint8_t* arg0, uint32_t arg1) { return (uint32_t)*(uint8_t*)(((uint32_t)arg0 + arg1) + 0x16); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00445480
extern "C" uint32_t Speculative_00445480(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN8Savedata9FieldMenu15SetRideShortcutENS0_9RideKeyIDENS0_6RideIDE");
extern "C" uint32_t Speculative_00445480(uint8_t* arg0, uint32_t arg1, uint32_t arg2) { *(uint8_t*)(((uint32_t)arg0 + arg1) + 0x16) = arg2; return ((uint32_t)arg0 + arg1); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464D94
extern "C" uint32_t Speculative_00464d94(uint8_t* arg0) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient29GetLastRecvPokemonParamBufferEv");
extern "C" uint32_t Speculative_00464d94(uint8_t* arg0) { return (((uint32_t)arg0 + 0x2000) + 0x7c); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00473120
extern "C" uint32_t Speculative_00473120(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager20GetRecruiterPersonalEv");
extern "C" uint32_t Speculative_00473120(uint8_t* arg0) { return (((uint32_t)arg0 + 0x400) + 0xf8); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A54B4
extern "C" uint32_t Speculative_004a54b4(uint8_t* arg0) __asm__("_ZNK7poke_3d5model9BaseModel11GetPositionEv");
extern "C" uint32_t Speculative_004a54b4(uint8_t* arg0) { return ((uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x4) + 0x20); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6614
extern "C" uint32_t Speculative_004a6614(uint8_t* arg0) __asm__("_ZNK7trainer15TrainerTypeData6GetSexEv");
extern "C" uint32_t Speculative_004a6614(uint8_t* arg0) { return ((uint32_t)*(uint8_t*)((uint32_t)arg0 + 0x4) & 0x3); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6B50
extern "C" uint32_t Speculative_004a6b50(uint8_t* arg0) __asm__("_ZNK8PokeTool15PokeModelSystem20GetPokeShaderPathNumEv");
extern "C" uint32_t Speculative_004a6b50(uint8_t* arg0) { return ((uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x3c) + 0x1); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8350
extern "C" uint32_t Speculative_004a8350(uint8_t* arg0) __asm__("_ZNK8Savedata8MyStatus10GetCountryEv");
extern "C" uint32_t Speculative_004a8350(uint8_t* arg0) { return ((uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x34) >> 24); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AA5A8
extern "C" uint32_t Speculative_004aa5a8(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK9NetAppLib4Util30NetAppPokemonValidationUtility15GetVerifyResultEj");
extern "C" uint32_t Speculative_004aa5a8(uint8_t* arg0, uint32_t arg1) { return (uint32_t)*(uint8_t*)(((uint32_t)arg0 + arg1) + 0xc); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AACB4
extern "C" uint32_t Speculative_004aacb4(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData19GetAttractionMonsNoEv");
extern "C" uint32_t Speculative_004aacb4(uint8_t* arg0) { return (uint32_t)*(uint16_t*)(((uint32_t)arg0 + 0x200) + 0x42); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB1D8
extern "C" uint32_t Speculative_004ab1d8(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData24GetRecommendFacilitiesIdEv");
extern "C" uint32_t Speculative_004ab1d8(uint8_t* arg0) { return ((uint32_t)*(uint16_t*)((uint32_t)arg0 + 0x76) & 0xff); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB3FC
extern "C" uint32_t Speculative_004ab3fc(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData6GetSexEv");
extern "C" uint32_t Speculative_004ab3fc(uint8_t* arg0) { return ((uint32_t)*(uint16_t*)((uint32_t)arg0 + 0x2a) & 0x7); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB490
extern "C" uint32_t Speculative_004ab490(uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta28JoinFestaPersonalDataManager18IsRecruiterVisibleEv");
extern "C" uint32_t Speculative_004ab490(uint8_t* arg0) { return (int32_t)*(int8_t*)(((uint32_t)arg0 + 0x900) + 0x88); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CC1BC
extern "C" void Speculative_002cc1bc(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3App4Tool11NewPaneList14SetupInputModeEbbb");
extern "C" void Speculative_002cc1bc(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) { *(uint8_t*)((uint32_t)arg0 + 0xd9) = arg1; *(uint8_t*)((uint32_t)arg0 + 0xda) = arg2; *(uint8_t*)((uint32_t)arg0 + 0xdb) = arg3; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E664C
extern "C" uint32_t Speculative_002e664c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App9FieldMenu8PlayData19GetRotomMessageTextEj");
extern "C" uint32_t Speculative_002e664c(uint8_t* arg0, uint32_t arg1) { return ((uint32_t)*(uint32_t*)(((uint32_t)arg0 + (arg1 << 3)) + 0x8) & 0x7fffffff); }
#endif


#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFB94
extern "C" void Speculative_003bfb94(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5print14HangulComposerC1EPKN2nw4font4FontE");
extern "C" void Speculative_003bfb94(uint8_t* arg0, uint32_t arg1) { *(uint32_t*)((uint32_t)arg0 + 0x0) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3520
extern "C" uint32_t Speculative_004a3520(uint8_t* arg0) __asm__("_ZNK7gflnet23nex16NexRankingClient12IsConnectingEv");
extern "C" uint32_t Speculative_004a3520(uint8_t* arg0) { return (int32_t)*(int8_t*)((uint32_t)arg0 + 0x5); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3528
extern "C" uint32_t Speculative_004a3528(uint8_t* arg0) __asm__("_ZNK7gflnet23nex18NexDataStoreClient12IsConnectingEv");
extern "C" uint32_t Speculative_004a3528(uint8_t* arg0) { return (int32_t)*(int8_t*)((uint32_t)arg0 + 0x5); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3550
extern "C" uint32_t Speculative_004a3550(uint8_t* arg0) __asm__("_ZNK7gflnet23nex20NexMatchMakingClient12IsConnectingEv");
extern "C" uint32_t Speculative_004a3550(uint8_t* arg0) { return (int32_t)*(int8_t*)((uint32_t)arg0 + 0x5); }
#endif

