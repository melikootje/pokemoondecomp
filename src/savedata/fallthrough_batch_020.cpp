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

#define VFP __attribute__((pcs("aapcs-vfp")))

extern "C" {
int32_t Next_001173e0(const char*, const char*, uint32_t) __asm__("strncmp");
void Next_0017422c(uint32_t, uint32_t) __asm__("_ZN2nn3dsp3CTR14FlushDataCacheEjj");
uint32_t Next_001d1e5c(const Obj*) __asm__("FUN_001d1e5c");
bool Next_0027b178() __asm__("FUN_0027b178");
Obj* Next_0031e058(Obj*) __asm__("_ZN3pml8pokepara9CoreParamD1Ev");
uint32_t Next_00354134(const uint16_t*, uint32_t) __asm__("FUN_00354134");
void Next_00357cdc(void*) __asm__("FUN_00357cdc");
void Next_003ada60() __asm__("_ZN5Sound18StartBaseBGMFromMEEv");
bool Next_00407ab0() __asm__("_ZN7gflnet23p2p7NetGame8IsMasterEv");
void Next_00434f28(Obj*, int32_t, bool) __asm__("_ZN8PokeTool9PokeModel21ChangeAnimationDirectEib");
uint32_t Next_00478978(const Obj*) __asm__("FUN_00478978");
uint32_t Next_00478a7c(const Obj*) __asm__("FUN_00478a7c");
uint32_t Next_00478ad8(const Obj*) __asm__("FUN_00478ad8");
uint32_t Next_00478bd8(const Obj*) __asm__("FUN_00478bd8");
uint32_t Next_00478c34(const Obj*) __asm__("FUN_00478c34");
uint32_t Next_00478c90(const Obj*) __asm__("FUN_00478c90");
uint32_t Next_00478d00(const Obj*) __asm__("FUN_00478d00");
void Next_00492728(const Obj*, void*) __asm__("_ZNK3pml8pokepara9CoreParam14Serialize_CoreEPv");
VFP float Next_004a54e0(Obj*, float) __asm__("_ZNK7poke_3d5model9BaseModel12GetWalkSpeedEf");
}

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001173DC
extern "C" int32_t Utility_Strncmp(const char* a, const char* b, uint32_t n) __asm__("_ZN4gfl24core7Utility7StrncmpEPKcS3_j");
extern "C" int32_t Utility_Strncmp(const char* a, const char* b, uint32_t n) {
    // retail-size: 4 (falls through into the next function)
    return Next_001173e0(a, b, n);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00174228
extern "C" void snd_CTR_FlushDataCache(uint32_t address, uint32_t size) __asm__("_ZN2nn3snd3CTR14FlushDataCacheEjj");
extern "C" void snd_CTR_FlushDataCache(uint32_t address, uint32_t size) {
    // retail-size: 4 (falls through into the next function)
    return Next_0017422c(address, size);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001D1E58
extern "C" uint32_t NexError_GetNetworkErrorCode(const Obj* result) __asm__("_ZN7gflnet23nex8NexError19GetNetworkErrorCodeERKN2nn3nex7qResultE");
extern "C" uint32_t NexError_GetNetworkErrorCode(const Obj* result) {
    // retail-size: 4 (falls through into the next function)
    return Next_001d1e5c(result);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0027B174
extern "C" bool GflUse_IsEshopAvailable() __asm__("_ZN6System6GflUse16IsEshopAvailableEv");
extern "C" bool GflUse_IsEshopAvailable() {
    // retail-size: 4 (falls through into the next function)
    return Next_0027b178();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031E054
extern "C" Obj* PokemonParam_Dtor(Obj* self) __asm__("_ZN3pml8pokepara12PokemonParamD1Ev");
extern "C" Obj* PokemonParam_Dtor(Obj* self) {
    // retail-size: 4 (falls through into the next function)
    return Next_0031e058(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354130
extern "C" uint32_t print_GetTagParam(const uint16_t* tag, uint32_t index) __asm__("_ZN5print11GetTagParamEPKwj");
extern "C" uint32_t print_GetTagParam(const uint16_t* tag, uint32_t index) {
    // retail-size: 4 (falls through into the next function)
    return Next_00354134(tag, index);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00357CD8
extern "C" void operator_delete_array(void* p) __asm__("_ZdaPv");
extern "C" void operator_delete_array(void* p) {
    // retail-size: 4 (falls through into the next function)
    return Next_00357cdc(p);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ADA5C
extern "C" void FieldSound_RecoverBGMFromME() __asm__("_ZN5Field10FieldSound16RecoverBGMFromMEEv");
extern "C" void FieldSound_RecoverBGMFromME() {
    // retail-size: 4 (falls through into the next function)
    return Next_003ada60();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407AAC
extern "C" bool NBRNet_IsMaster() __asm__("_ZN6NetApp3NBR6NBRNet8IsMasterEv");
extern "C" bool NBRNet_IsMaster() {
    // retail-size: 4 (falls through into the next function)
    return Next_00407ab0();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00434F24
extern "C" void PokeModel_ChangeAnimation_Anime(Obj* self, int32_t anime, bool loop) __asm__("_ZN8PokeTool9PokeModel15ChangeAnimationENS_11MODEL_ANIMEEb");
extern "C" void PokeModel_ChangeAnimation_Anime(Obj* self, int32_t anime, bool loop) {
    // retail-size: 4 (falls through into the next function)
    return Next_00434f28(self, anime, loop);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00478974
extern "C" uint32_t Date_GetMilliSecond(const Obj* self) __asm__("_ZNK4gfl26system4Date14GetMilliSecondEv");
extern "C" uint32_t Date_GetMilliSecond(const Obj* self) {
    // retail-size: 4 (falls through into the next function)
    return Next_00478978(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00478A78
extern "C" uint32_t Date_GetDay(const Obj* self) __asm__("_ZNK4gfl26system4Date6GetDayEv");
extern "C" uint32_t Date_GetDay(const Obj* self) {
    // retail-size: 4 (falls through into the next function)
    return Next_00478a7c(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00478AD4
extern "C" uint32_t Date_GetHour(const Obj* self) __asm__("_ZNK4gfl26system4Date7GetHourEv");
extern "C" uint32_t Date_GetHour(const Obj* self) {
    // retail-size: 4 (falls through into the next function)
    return Next_00478ad8(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00478BD4
extern "C" uint32_t Date_GetYear(const Obj* self) __asm__("_ZNK4gfl26system4Date7GetYearEv");
extern "C" uint32_t Date_GetYear(const Obj* self) {
    // retail-size: 4 (falls through into the next function)
    return Next_00478bd8(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00478C30
extern "C" uint32_t Date_GetMonth(const Obj* self) __asm__("_ZNK4gfl26system4Date8GetMonthEv");
extern "C" uint32_t Date_GetMonth(const Obj* self) {
    // retail-size: 4 (falls through into the next function)
    return Next_00478c34(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00478C8C
extern "C" uint32_t Date_GetMinute(const Obj* self) __asm__("_ZNK4gfl26system4Date9GetMinuteEv");
extern "C" uint32_t Date_GetMinute(const Obj* self) {
    // retail-size: 4 (falls through into the next function)
    return Next_00478c90(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00478CFC
extern "C" uint32_t Date_GetSecond(const Obj* self) __asm__("_ZNK4gfl26system4Date9GetSecondEv");
extern "C" uint32_t Date_GetSecond(const Obj* self) {
    // retail-size: 4 (falls through into the next function)
    return Next_00478d00(self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492724
extern "C" void PokemonParam_Serialize_Core(const Obj* self, void* out) __asm__("_ZNK3pml8pokepara12PokemonParam14Serialize_CoreEPv");
extern "C" void PokemonParam_Serialize_Core(const Obj* self, void* out) {
    // retail-size: 4 (falls through into the next function)
    return Next_00492728(self, out);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A54DC
extern "C" VFP float PokemonModel_GetWalkSpeed(Obj* self, float speed) __asm__("_ZN7poke_3d5model12PokemonModel12GetWalkSpeedEf");
extern "C" VFP float PokemonModel_GetWalkSpeed(Obj* self, float speed) {
    // retail-size: 4 (falls through into the next function)
    return Next_004a54e0(self, speed);
}
#endif

