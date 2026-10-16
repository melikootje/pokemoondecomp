// Byte-exact leaf reconstructions lifted from retail code.bin by tools/lift_batch.py.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EBAC
extern "C" uint32_t Lifted_0043ebac(uint8_t* arg0) __asm__("_ZN8Savedata17JoinFestaDataSave24GetFacilitiesLotterySeedEv");
extern "C" uint32_t Lifted_0043ebac(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x20); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7CD8
extern "C" uint32_t Lifted_004a7cd8(uint8_t* arg0) __asm__("_ZNK8Savedata4Misc5GetBPEv");
extern "C" uint32_t Lifted_004a7cd8(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x120); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7D14
extern "C" uint32_t Lifted_004a7d14(uint8_t* arg0) __asm__("_ZNK8Savedata4Misc7GetGoldEv");
extern "C" uint32_t Lifted_004a7d14(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x8); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049CF88
extern "C" uint32_t Lifted_0049cf88(uint8_t* arg0) __asm__("_ZNK5Field11FieldScript17FieldScriptSystem24IsTerrainBlockControlSetEv");
extern "C" uint32_t Lifted_0049cf88(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0xa0); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C0380
extern "C" uint32_t Lifted_003c0380(uint8_t* arg0) __asm__("_ZN5print27SystemFont_IsLoadBattleFontEv");
extern "C" uint32_t Lifted_003c0380(uint8_t* arg0) { return 1u; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030299C
extern "C" void Lifted_0030299c(uint8_t* arg0) __asm__("__aeabi_atexit");
extern "C" void Lifted_0030299c(uint8_t* arg0) {  }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CAF1C
extern "C" void Lifted_002caf1c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool10TalkWindow13SetWindowTypeENS0_14TalkWindowTypeE");
extern "C" void Lifted_002caf1c(uint8_t* arg0, uint32_t arg1) { *(uint8_t*)((uint32_t)arg0 + 0xb0) = arg1; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F4D0
extern "C" uint32_t Lifted_0030f4d0(uint8_t* arg0) __asm__("_ZN3app4util7G2DUtil10GetWordSetEv");
extern "C" uint32_t Lifted_0030f4d0(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x28); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311820
extern "C" uint32_t Lifted_00311820(uint8_t* arg0) __asm__("_ZN3app4util7G2DUtil9GetMsgWinEv");
extern "C" uint32_t Lifted_00311820(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x34); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E354
extern "C" uint32_t Lifted_0048e354(uint8_t* arg0) __asm__("_ZNK3app4tool17ScrollPaneManager14GetScrollValueEv");
extern "C" uint32_t Lifted_0048e354(uint8_t* arg0) { return (int32_t)*(int16_t*)((uint32_t)arg0 + 0xe0); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004967C4
extern "C" uint32_t Lifted_004967c4(uint8_t* arg0) __asm__("_ZNK4gfl215renderingengine8renderer4util17MakeBlurImagePath22GetDepthWrittenTextureEv");
extern "C" uint32_t Lifted_004967c4(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x160); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6620
extern "C" uint32_t Lifted_004a6620(uint8_t* arg0) __asm__("_ZNK7trainer15TrainerTypeData8GetEyeSEEv");
extern "C" uint32_t Lifted_004a6620(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x14); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6AF8
extern "C" uint32_t Lifted_004a6af8(uint8_t* arg0) __asm__("_ZNK8PokeTool12RemaindSkill10GetListMaxEv");
extern "C" uint32_t Lifted_004a6af8(uint8_t* arg0) { return (uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7E04
extern "C" uint32_t Lifted_002c7e04(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App3Box11BoxAppSetup14GetArcReadBuffEi");
extern "C" uint32_t Lifted_002c7e04(uint8_t* arg0, uint32_t arg1) { return (uint32_t)*(uint32_t*)(((uint32_t)arg0 + (arg1 << 2)) + 0x8); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00475248
extern "C" uint32_t Lifted_00475248(uint8_t* arg0) __asm__("_ZNK16BSP_TRAINER_DATA15GetTrTypePluralEv");
extern "C" uint32_t Lifted_00475248(uint8_t* arg0) { return ((uint32_t)*(uint8_t*)((uint32_t)arg0 + 0xd) >> 4); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5674
extern "C" uint32_t Lifted_004a5674(uint8_t* arg0) __asm__("_ZNK7poke_3d5model9BaseModel15GetRotationQuatEv");
extern "C" uint32_t Lifted_004a5674(uint8_t* arg0) { return ((uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x4) + 0x38); }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5CF4
extern "C" uint32_t Lifted_004a5cf4(uint8_t* arg0) __asm__("_ZNK7poke_3d5model9BaseModel8GetScaleEv");
extern "C" uint32_t Lifted_004a5cf4(uint8_t* arg0) { return ((uint32_t)*(uint32_t*)((uint32_t)arg0 + 0x4) + 0x2c); }
#endif
