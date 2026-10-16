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
extern Obj DAT_0063e07c[] __asm__("DAT_0063e07c");
extern Obj DAT_00672098[] __asm__("DAT_00672098");
extern Obj DAT_0063e798[] __asm__("DAT_0063e798");
extern Obj DAT_0067204c[] __asm__("DAT_0067204c");
extern Obj DAT_00673be0[] __asm__("DAT_00673be0");
extern Obj DAT_005a7040[] __asm__("DAT_005a7040");
extern Obj DAT_005976d0[] __asm__("DAT_005976d0");
extern Obj DAT_0063e074[] __asm__("DAT_0063e074");
extern Obj DAT_005976d4[] __asm__("DAT_005976d4");
extern Obj DAT_005a14d8[] __asm__("DAT_005a14d8");
extern Obj DAT_005a10cc[] __asm__("DAT_005a10cc");
extern Obj DAT_005a1260[] __asm__("DAT_005a1260");
extern Obj DAT_005a1290[] __asm__("DAT_005a1290");
extern Obj DAT_005a1230[] __asm__("DAT_005a1230");
extern Obj DAT_005a14e0[] __asm__("DAT_005a14e0");
extern Obj DAT_005a729c[] __asm__("DAT_005a729c");
extern Obj DAT_0065fcb0[] __asm__("DAT_0065fcb0");
extern Obj DAT_0063e864[] __asm__("DAT_0063e864");
extern Obj DAT_00674654[] __asm__("DAT_00674654");
extern Obj DAT_00597920[] __asm__("DAT_00597920");
extern Obj DAT_005978e6[] __asm__("DAT_005978e6");
extern Obj mpNetGameBase[] __asm__("_ZN7gflnet23p2p7NetGame13mpNetGameBaseE");
uint32_t FUN_00447d10(Obj*) __asm__("FUN_00447d10");
uint32_t FUN_0048fa9c(Obj*) __asm__("FUN_0048fa9c");
uint32_t FUN_00401990(Obj*) __asm__("FUN_00401990");
uint32_t FUN_00402744(Obj*) __asm__("FUN_00402744");
uint32_t FUN_0048f0b4(Obj*, uint32_t) __asm__("FUN_0048f0b4");
uint32_t FUN_00314a84(Obj*, uint32_t, uint32_t) __asm__("FUN_00314a84");
Obj* FUN_003ad9d8() __asm__("FUN_003ad9d8");
void FUN_0035bff0(Obj*, const Obj*) __asm__("FUN_0035bff0");
void FUN_003aae0c(Obj*, const Obj*) __asm__("FUN_003aae0c");
void FUN_003aae2c(Obj*, const Obj*) __asm__("FUN_003aae2c");
void FUN_003aaff8(Obj*, const Obj*) __asm__("FUN_003aaff8");
uint32_t FUN_0049fe80(Obj*) __asm__("FUN_0049fe80");
uint32_t FUN_003ab190(Obj*) __asm__("FUN_003ab190");
uint32_t FUN_003ab2dc(Obj*) __asm__("FUN_003ab2dc");
uint32_t FUN_003ab2b0(Obj*) __asm__("FUN_003ab2b0");
uint32_t FUN_0049fe34(Obj*) __asm__("FUN_0049fe34");
void FUN_003aabfc(Obj*, uint32_t, uint32_t) __asm__("FUN_003aabfc");
void FUN_003aac4c(Obj*, uint32_t, const Obj*) __asm__("FUN_003aac4c");
uint32_t FUN_0049ba60(Obj*, uint32_t) __asm__("FUN_0049ba60");
VFP void FUN_0035c3b8(Obj*, uint32_t, float) __asm__("FUN_0035c3b8");
VFP void FUN_0035c644(Obj*, uint32_t, float) __asm__("FUN_0035c644");
VFP void FUN_0035c68c(Obj*, uint32_t, float) __asm__("FUN_0035c68c");
VFP void FUN_003aac84(Obj*, uint32_t, float) __asm__("FUN_003aac84");
void FUN_003a8f4c(Obj*, uint32_t, uint32_t, uint32_t) __asm__("FUN_003a8f4c");
void FUN_003a8844(Obj*, uint32_t) __asm__("FUN_003a8844");
void FUN_003a8df4(Obj*) __asm__("FUN_003a8df4");
void FUN_003a8b6c(Obj*, uint32_t) __asm__("FUN_003a8b6c");
void FUN_003a8e38(Obj*) __asm__("FUN_003a8e38");
void FUN_003a8c58(Obj*, uint32_t) __asm__("FUN_003a8c58");
void FUN_003a90f4(Obj*, uint32_t) __asm__("FUN_003a90f4");
void FUN_003a90b0(Obj*) __asm__("FUN_003a90b0");
void FUN_003a88f0(Obj*) __asm__("FUN_003a88f0");
uint32_t FUN_00358908(uint32_t) __asm__("FUN_00358908");
void CriticalSection_Enter(Obj*) __asm__("_ZN2nn2os15CriticalSection5EnterEv");
void CriticalSection_Leave(Obj*) __asm__("_ZN2nn2os15CriticalSection5LeaveEv");
void HeapFree(void*) __asm__("_ZN4gfl24heap22GflHeapFreeMemoryBlockEPv");
void AssertStop(const char*, uint32_t, const char*) __asm__("_ZN4gfl25debug13GFLassertStopEPKcjS2_");
}

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A9630
extern "C" void Sound_Set3DParam(const Obj* param) __asm__("_ZN5Sound10Set3DParamERKN4gfl25sound11SoundSystem12Sound3DParamE");
extern "C" void Sound_Set3DParam(const Obj* param) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_0035bff0(*reinterpret_cast<Obj**>(DAT_0065fcb0), param);
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AD210
extern "C" void Sound_SetListenerParam(const Obj* param) __asm__("_ZN5Sound16SetListenerParamERKN4gfl25sound11SoundSystem13ListenerParamE");
extern "C" void Sound_SetListenerParam(const Obj* param) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003aae0c(*reinterpret_cast<Obj**>(DAT_0065fcb0), param);
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AD58C
extern "C" void Sound_SetListenerMatrix(const Obj* mtx) __asm__("_ZN5Sound17SetListenerMatrixERKN2nn4math5MTX34E");
extern "C" void Sound_SetListenerMatrix(const Obj* mtx) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003aae2c(*reinterpret_cast<Obj**>(DAT_0065fcb0), mtx);
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ADAAC
extern "C" void Sound_SetListenerVelocity(const Obj* velocity) __asm__("_ZN5Sound19SetListenerVelocityERKN4gfl24math22ExtendedVectorTemplateINS1_33SpecializedExtendedVectorTemplateIN2nn4math4VEC3EEEEE");
extern "C" void Sound_SetListenerVelocity(const Obj* velocity) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003aaff8(*reinterpret_cast<Obj**>(DAT_0065fcb0), velocity);
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AD370
extern "C" uint32_t Sound_GetPushedBGMCount() __asm__("_ZN5Sound17GetPushedBGMCountEv");
extern "C" uint32_t Sound_GetPushedBGMCount() {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    uint32_t result = FUN_0049fe80(*reinterpret_cast<Obj**>(DAT_0065fcb0));
    CriticalSection_Leave(cs);
    return result;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ADE7C
extern "C" uint32_t Sound_GetStreamSoundSampleRate() __asm__("_ZN5Sound24GetStreamSoundSampleRateEv");
extern "C" uint32_t Sound_GetStreamSoundSampleRate() {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    uint32_t result = FUN_003ab190(*reinterpret_cast<Obj**>(DAT_0065fcb0));
    CriticalSection_Leave(cs);
    return result;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AE174
extern "C" uint32_t Sound_GetStreamSoundPlaySamplePosition() __asm__("_ZN5Sound32GetStreamSoundPlaySamplePositionEv");
extern "C" uint32_t Sound_GetStreamSoundPlaySamplePosition() {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    uint32_t result = FUN_003ab2dc(*reinterpret_cast<Obj**>(DAT_0065fcb0));
    CriticalSection_Leave(cs);
    return result;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AE1A8
extern "C" uint32_t Sound_WaitLoadAndPushBattleGlobalSEAsync() __asm__("_ZN5Sound34WaitLoadAndPushBattleGlobalSEAsyncEv");
extern "C" uint32_t Sound_WaitLoadAndPushBattleGlobalSEAsync() {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    uint32_t result = FUN_003ab2b0(*reinterpret_cast<Obj**>(DAT_0065fcb0));
    CriticalSection_Leave(cs);
    return result;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AEAF4
extern "C" uint32_t Sound_IsBGMFade() __asm__("_ZN5Sound9IsBGMFadeEv");
extern "C" uint32_t Sound_IsBGMFade() {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    uint32_t result = FUN_0049fe34(*reinterpret_cast<Obj**>(DAT_0065fcb0));
    CriticalSection_Leave(cs);
    return result;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A99AC
extern "C" void Sound_Stop3DActor(uint8_t actor, int32_t frames) __asm__("_ZN5Sound11Stop3DActorEhi");
extern "C" void Sound_Stop3DActor(uint8_t actor, int32_t frames) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003aabfc(*reinterpret_cast<Obj**>(DAT_0065fcb0), actor, frames);
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ABC6C
extern "C" void Sound_Set3DActorPos(uint8_t actor, const Obj* pos) __asm__("_ZN5Sound13Set3DActorPosEhRKN4gfl24math22ExtendedVectorTemplateINS1_33SpecializedExtendedVectorTemplateIN2nn4math4VEC3EEEEE");
extern "C" void Sound_Set3DActorPos(uint8_t actor, const Obj* pos) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003aac4c(*reinterpret_cast<Obj**>(DAT_0065fcb0), actor, pos);
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ACCAC
extern "C" uint32_t Sound_GetPlayingCount(uint32_t id) __asm__("_ZN5Sound15GetPlayingCountEj");
extern "C" uint32_t Sound_GetPlayingCount(uint32_t id) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    uint32_t result = FUN_0049ba60(*reinterpret_cast<Obj**>(DAT_0065fcb0), id);
    CriticalSection_Leave(cs);
    return result;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ABC28
extern "C" VFP void Sound_Set3DActorPan(uint8_t actor, float pan) __asm__("_ZN5Sound13Set3DActorPanEhf");
extern "C" VFP void Sound_Set3DActorPan(uint8_t actor, float pan) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_0035c3b8(*reinterpret_cast<Obj**>(DAT_0065fcb0), actor, pan);
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ACDEC
extern "C" VFP void Sound_Set3DActorPitch(uint8_t actor, float pitch) __asm__("_ZN5Sound15Set3DActorPitchEhf");
extern "C" VFP void Sound_Set3DActorPitch(uint8_t actor, float pitch) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_0035c644(*reinterpret_cast<Obj**>(DAT_0065fcb0), actor, pitch);
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AD1CC
extern "C" VFP void Sound_Set3DActorVolume(uint8_t actor, float volume) __asm__("_ZN5Sound16Set3DActorVolumeEhf");
extern "C" VFP void Sound_Set3DActorVolume(uint8_t actor, float volume) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_0035c68c(*reinterpret_cast<Obj**>(DAT_0065fcb0), actor, volume);
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ACAD8
extern "C" VFP void Sound_ChangeBGMVolume(float volume, uint32_t frames) __asm__("_ZN5Sound15ChangeBGMVolumeEfj");
extern "C" VFP void Sound_ChangeBGMVolume(float volume, uint32_t frames) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003aac84(*reinterpret_cast<Obj**>(DAT_0065fcb0), frames, volume);
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AEDDC
extern "C" void Sound_PopBGMReq(uint32_t fade) __asm__("_ZN5Sound9PopBGMReqENS_9FadeFrameE");
extern "C" void Sound_PopBGMReq(uint32_t fade) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a8844(*reinterpret_cast<Obj**>(DAT_0063e864), fade);
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AA698
extern "C" void Sound_FadeInBGMReq(uint32_t fade) __asm__("_ZN5Sound12FadeInBGMReqENS_9FadeFrameE");
extern "C" void Sound_FadeInBGMReq(uint32_t fade) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a8b6c(*reinterpret_cast<Obj**>(DAT_0063e864), fade);
    FUN_003a8e38(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AAA10
extern "C" void Sound_FadeOutBGMReq(uint32_t fade) __asm__("_ZN5Sound13FadeOutBGMReqENS_9FadeFrameE");
extern "C" void Sound_FadeOutBGMReq(uint32_t fade) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a8c58(*reinterpret_cast<Obj**>(DAT_0063e864), fade);
    FUN_003a8e38(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AD010
extern "C" void Sound_FadeOutAppBGMReq(uint32_t fade) __asm__("_ZN5Sound16FadeOutAppBGMReqENS_9FadeFrameE");
extern "C" void Sound_FadeOutAppBGMReq(uint32_t fade) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a8c58(*reinterpret_cast<Obj**>(DAT_0063e864), fade);
    FUN_003a8e38(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AEA9C
extern "C" void Sound_EndBGMReq(uint32_t fade) __asm__("_ZN5Sound9EndBGMReqENS_9FadeFrameE");
extern "C" void Sound_EndBGMReq(uint32_t fade) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a8c58(*reinterpret_cast<Obj**>(DAT_0063e864), fade);
    FUN_003a8e38(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ABB34
extern "C" void Sound_PrepareBGMReq(uint32_t id) __asm__("_ZN5Sound13PrepareBGMReqEj");
extern "C" void Sound_PrepareBGMReq(uint32_t id) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a90f4(*reinterpret_cast<Obj**>(DAT_0063e864), id);
    FUN_003a90b0(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A95D0
extern "C" void Sound_PushBGMReq(uint32_t fade) __asm__("_ZN5Sound10PushBGMReqENS_9FadeFrameE");
extern "C" void Sound_PushBGMReq(uint32_t fade) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a8c58(*reinterpret_cast<Obj**>(DAT_0063e864), fade);
    FUN_003a8e38(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a88f0(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AA52C
extern "C" void Sound_EndAppBGMReq(uint32_t fade, uint32_t appFade) __asm__("_ZN5Sound12EndAppBGMReqENS_9FadeFrameES0_");
extern "C" void Sound_EndAppBGMReq(uint32_t fade, uint32_t appFade) {
    Obj* cs = FUN_003ad9d8();
    CriticalSection_Enter(cs);
    FUN_003a8f4c(*reinterpret_cast<Obj**>(DAT_0063e864), 0, 0, 1);
    FUN_003a8c58(*reinterpret_cast<Obj**>(DAT_0063e864), fade);
    FUN_003a8e38(*reinterpret_cast<Obj**>(DAT_0063e864));
    FUN_003a8844(*reinterpret_cast<Obj**>(DAT_0063e864), appFade);
    FUN_003a8df4(*reinterpret_cast<Obj**>(DAT_0063e864));
    CriticalSection_Leave(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00163B24
extern "C" void QREncoder_Encode(Obj* data) __asm__("_ZN2mw3qre9QREncoder6EncodeEPNS0_10EncodeDataE");
extern "C" void QREncoder_Encode(Obj* data) {
    FUN_00447d10(DAT_00674654);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003162C8
extern "C" uint32_t personal_GetMegaEvolveRouteNum() __asm__("_ZN3pml8personal21GetMegaEvolveRouteNumEv");
extern "C" uint32_t personal_GetMegaEvolveRouteNum() {
    return FUN_0048fa9c(RPTR(DAT_0063e07c, 56));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00357768
extern "C" Obj* JoinFestaPacketEventList_GetInstance() __asm__("_ZN4gfl24base17SingletonAccessorIN9NetAppLib9JoinFesta24JoinFestaPacketEventListEE11GetInstanceEv");
extern "C" Obj* JoinFestaPacketEventList_GetInstance() {
    return *reinterpret_cast<Obj**>(DAT_00672098);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFBDC
extern "C" uint32_t print_GetMessageLangId() __asm__("_ZN5print16GetMessageLangIdEv");
extern "C" uint32_t print_GetMessageLangId() {
    return DAT_0063e798[0];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407430
extern "C" uint32_t NetGame_GetConnectionCount() __asm__("_ZN7gflnet23p2p7NetGame18GetConnectionCountEv");
extern "C" uint32_t NetGame_GetConnectionCount() {
    return FUN_00401990(*reinterpret_cast<Obj**>(&mpNetGameBase));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407A9C
extern "C" uint32_t NetGame_GetNetID() __asm__("_ZN7gflnet23p2p7NetGame8GetNetIDEv");
extern "C" uint32_t NetGame_GetNetID() {
    return FUN_00402744(*reinterpret_cast<Obj**>(&mpNetGameBase));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031587C
extern "C" uint32_t personal_GetPersonalParam(uint32_t id) __asm__("_ZN3pml8personal16GetPersonalParamENS0_7ParamIDE");
extern "C" uint32_t personal_GetPersonalParam(uint32_t id) {
    return FUN_0048f0b4(RPTR(DAT_0063e07c, 12), id);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003158A4
extern "C" uint32_t personal_LoadPersonalData(uint32_t monsNo, uint8_t form) __asm__("_ZN3pml8personal16LoadPersonalDataE6MonsNoh");
extern "C" uint32_t personal_LoadPersonalData(uint32_t monsNo, uint8_t form) {
    return FUN_00314a84(RPTR(DAT_0063e07c, 12), monsNo, form);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D15C
extern "C" Obj* item_ITEM_GetBeadsTable(uint32_t* count) __asm__("_ZN4item18ITEM_GetBeadsTableEPj");
extern "C" Obj* item_ITEM_GetBeadsTable(uint32_t* count) {
    *count = 29;
    return DAT_00597920;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D170
extern "C" Obj* item_ITEM_GetPieceTable(uint32_t* count) __asm__("_ZN4item18ITEM_GetPieceTableEPj");
extern "C" Obj* item_ITEM_GetPieceTable(uint32_t* count) {
    *count = 29;
    return DAT_005978e6;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFD58
extern "C" Obj* SystemFont_GetFont() __asm__("_ZN5print18SystemFont_GetFontEv");
extern "C" Obj* SystemFont_GetFont() {
    return RPTR(*reinterpret_cast<Obj**>(DAT_0067204c), 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFEC4
extern "C" Obj* SystemFont_GetNumFont() __asm__("_ZN5print21SystemFont_GetNumFontEv");
extern "C" Obj* SystemFont_GetNumFont() {
    return RPTR(*reinterpret_cast<Obj**>(DAT_0067204c), 32);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C02F4
extern "C" Obj* SystemFont_GetBattleFont() __asm__("_ZN5print24SystemFont_GetBattleFontEv");
extern "C" Obj* SystemFont_GetBattleFont() {
    return RPTR(*reinterpret_cast<Obj**>(DAT_0067204c), 40);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EA2C4
extern "C" void GflUse_SetSoftResetRequest() __asm__("_ZN6System6GflUse19SetSoftResetRequestEv");
extern "C" void GflUse_SetSoftResetRequest() {
    DAT_00673be0[65] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BFED8
extern "C" uint32_t print_GetMessageArcId_Script(uint32_t lang) __asm__("_ZN5print22GetMessageArcId_ScriptEN6System9MSGLANGIDE");
extern "C" uint32_t print_GetMessageArcId_Script(uint32_t lang) {
    if (lang == 10) lang = DAT_0063e798[0];
    return reinterpret_cast<uint32_t*>(DAT_005a7040)[lang];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D0F8
extern "C" uint32_t item_GetBattlePocketID(uint32_t pocket) __asm__("_ZN4item17GetBattlePocketIDENS_9BtlPocketE");
extern "C" uint32_t item_GetBattlePocketID(uint32_t pocket) {
    uint32_t ids = *reinterpret_cast<uint32_t*>(DAT_005976d0);
    return reinterpret_cast<uint8_t*>(&ids)[pocket];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D1DC
extern "C" void item_UnloadBtlPocketData() __asm__("_ZN4item19UnloadBtlPocketDataEv");
extern "C" void item_UnloadBtlPocketData() {
    Obj** slot = reinterpret_cast<Obj**>(DAT_0063e074);
    if (*slot) { HeapFree(*slot); *slot = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D130
extern "C" uint32_t item_ITEM_BallID2ItemID(uint32_t ballId) __asm__("_ZN4item18ITEM_BallID2ItemIDENS_7BALL_IDE");
extern "C" uint32_t item_ITEM_BallID2ItemID(uint32_t ballId) {
    if (ballId == 0 || ballId > 26) return 0;
    return reinterpret_cast<uint16_t*>(DAT_005976d4)[ballId - 1];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046B804
extern "C" uint32_t JoinFestaPersonalEvent_GetRecordCategoryNum(uint8_t index) __asm__("_ZN9NetAppLib9JoinFesta22JoinFestaPersonalEvent20GetRecordCategoryNumEh");
extern "C" uint32_t JoinFestaPersonalEvent_GetRecordCategoryNum(uint8_t index) {
    return index < 7 ? DAT_005a14d8[index] : 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046D73C
extern "C" uint32_t JoinFestaAttractionUtil_GetAnswerMaxFromQuestionnaireId(uint8_t id) __asm__("_ZN9NetAppLib9JoinFesta23JoinFestaAttractionUtil31GetAnswerMaxFromQuestionnaireIdEh");
extern "C" uint32_t JoinFestaAttractionUtil_GetAnswerMaxFromQuestionnaireId(uint8_t id) {
    return id < 16 ? DAT_005a10cc[id] : 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046FA64
extern "C" uint32_t JoinFestaFacilitiesUtil_GetTrTypeFromCharacterId(uint32_t id) __asm__("_ZN9NetAppLib9JoinFesta23JoinFestaFacilitiesUtil24GetTrTypeFromCharacterIdEj");
extern "C" uint32_t JoinFestaFacilitiesUtil_GetTrTypeFromCharacterId(uint32_t id) {
    return id < 12 ? reinterpret_cast<uint32_t*>(DAT_005a1260)[id] : 4;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046FA98
extern "C" uint32_t JoinFestaFacilitiesUtil_GetCharaSexFromCharacterId(uint32_t id) __asm__("_ZN9NetAppLib9JoinFesta23JoinFestaFacilitiesUtil26GetCharaSexFromCharacterIdEj");
extern "C" uint32_t JoinFestaFacilitiesUtil_GetCharaSexFromCharacterId(uint32_t id) {
    return id < 12 ? DAT_005a1290[id] : 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046FACC
extern "C" uint32_t JoinFestaFacilitiesUtil_GetCharaModelIdFromCharacterId(uint32_t id) __asm__("_ZN9NetAppLib9JoinFesta23JoinFestaFacilitiesUtil30GetCharaModelIdFromCharacterIdEj");
extern "C" uint32_t JoinFestaFacilitiesUtil_GetCharaModelIdFromCharacterId(uint32_t id) {
    return id < 12 ? reinterpret_cast<uint32_t*>(DAT_005a1230)[id] : 83;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046B788
extern "C" uint32_t JoinFestaPersonalEvent_GetBaseFesCoin(uint32_t index) __asm__("_ZN9NetAppLib9JoinFesta22JoinFestaPersonalEvent14GetBaseFesCoinEj");
extern "C" uint32_t JoinFestaPersonalEvent_GetBaseFesCoin(uint32_t index) {
    return index < 24 ? R32(DAT_005a14e0 + index * 8, 4) : 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438A6C
extern "C" uint32_t ResortSave_GetGimKindPowerID(uint32_t kind) __asm__("_ZN8Savedata10ResortSave17GetGimKindPowerIDENS0_17PokeResortGimKindE");
extern "C" uint32_t ResortSave_GetGimKindPowerID(uint32_t kind) {
    return kind != 0 ? DAT_005a729c[kind - 1] : 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EA468
extern "C" uint32_t GflUse_GetPokemonCreateRand() __asm__("_ZN6System6GflUse20GetPokemonCreateRandEv");
extern "C" uint32_t GflUse_GetPokemonCreateRand() {
    Obj* g = DAT_00673be0;
    if (R32(g, 4) == 0) AssertStop(0, 0, 0);
    return FUN_00358908(R32(g, 4));
}
#endif

