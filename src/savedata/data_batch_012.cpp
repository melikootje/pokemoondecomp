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
extern Obj DAT_0059795a[] __asm__("DAT_0059795a");
extern Obj DAT_0059778e[] __asm__("DAT_0059778e");
extern Obj DAT_005a15cc[] __asm__("DAT_005a15cc");
extern Obj DAT_0059e398[] __asm__("DAT_0059e398");
extern Obj DAT_005a0c78[] __asm__("DAT_005a0c78");
extern Obj DAT_00597a30[] __asm__("DAT_00597a30");
extern Obj DAT_00672040[] __asm__("DAT_00672040");
extern Obj DAT_0063e0c0[] __asm__("DAT_0063e0c0");
extern Obj DAT_0063ef48[] __asm__("DAT_0063ef48");
extern Obj DAT_006748e4[] __asm__("DAT_006748e4");
extern Obj DAT_005a7110[] __asm__("DAT_005a7110");
extern Obj DAT_0063e07c[] __asm__("DAT_0063e07c");
uint32_t FUN_0048fc98(Obj*, uint32_t, Obj*) __asm__("FUN_0048fc98");
void FUN_00315728(Obj*, uint32_t) __asm__("FUN_00315728");
void FUN_003160e0(Obj*, Obj*) __asm__("FUN_003160e0");
uint32_t FUN_00491ef8(Obj*) __asm__("FUN_00491ef8");
uint32_t FUN_0048fe70(Obj*, Obj*) __asm__("FUN_0048fe70");
void FUN_0034a584(Obj*, Obj*) __asm__("FUN_0034a584");
void FUN_0034a194(Obj*, Obj*) __asm__("FUN_0034a194");
void DrawManager_Draw(Obj*, int32_t) __asm__("_ZN4gfl215renderingengine8renderer11DrawManager4DrawEi");
uint32_t Date_GetHour(const Obj*) __asm__("_ZNK4gfl26system4Date7GetHourEv");
void* aeabi_memclr4(void*, uint32_t) __asm__("__aeabi_memclr4");
}

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D560
extern "C" uint32_t item_ITEM_GetWazaMashineWaza(uint32_t index) __asm__("_ZN4item23ITEM_GetWazaMashineWazaEj");
extern "C" uint32_t item_ITEM_GetWazaMashineWaza(uint32_t index) {
    return reinterpret_cast<uint16_t*>(DAT_0059795a)[index];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D5A8
extern "C" uint32_t item_ITEM_GetWazaMashineItemNo(uint32_t index) __asm__("_ZN4item25ITEM_GetWazaMashineItemNoEj");
extern "C" uint32_t item_ITEM_GetWazaMashineItemNo(uint32_t index) {
    return reinterpret_cast<uint16_t*>(DAT_0059778e)[index];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046C2E8
extern "C" uint32_t JoinFestaPersonalEvent_GetWordWindowMessageIdFromPersonalEvent(uint32_t event, uint32_t variant) __asm__("_ZN9NetAppLib9JoinFesta22JoinFestaPersonalEvent39GetWordWindowMessageIdFromPersonalEventEjj");
extern "C" uint32_t JoinFestaPersonalEvent_GetWordWindowMessageIdFromPersonalEvent(uint32_t event, uint32_t variant) {
    if (event >= 24) return 0;
    uint32_t id = reinterpret_cast<uint32_t*>(DAT_005a15cc)[event];
    return variant ? id + 0x20D : id;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00154EE8
extern "C" void BATTLE_PARAM_SetBattleEffect(Obj* param, uint32_t effect) __asm__("_Z28BATTLE_PARAM_SetBattleEffectP18BATTLE_SETUP_PARAM14BattleEffectId");
extern "C" void BATTLE_PARAM_SetBattleEffect(Obj* param, uint32_t effect) {
    if (effect >= 62) effect = 0;
    const uint32_t* src = reinterpret_cast<uint32_t*>(DAT_0059e398) + effect * 5;
    uint32_t* dst = reinterpret_cast<uint32_t*>(param + 40);
    for (int i = 0; i < 5; i++) dst[i] = src[i];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00471774
extern "C" bool JoinFestaAttractionManager_IsQuestionAnswerScoreUp(Obj* self, uint32_t questionId, uint32_t answer) __asm__("_ZN9NetAppLib9JoinFesta26JoinFestaAttractionManager23IsQuestionAnswerScoreUpEN15JoinFestaScript12AttractionIdEj");
extern "C" bool JoinFestaAttractionManager_IsQuestionAnswerScoreUp(Obj* self, uint32_t questionId, uint32_t answer) {
    uint32_t row = (questionId - 58) & 0xFF;
    if (row >= 16 || answer >= 13) return false;
    return DAT_005a0c78[row * 13 + answer] == 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00315D74
extern "C" bool personal_METENO_IsShellForm(uint8_t form) __asm__("_ZN3pml8personal18METENO_IsShellFormEh");
extern "C" bool personal_METENO_IsShellForm(uint8_t form) {
    for (uint32_t i = 0; i < 7; i++) {
        if (DAT_00597a30[i * 2] == form) return true;
    }
    return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3334
extern "C" uint32_t AlolaTime_GetHour(Obj* self) __asm__("_ZNK7GameSys9AlolaTime7GetHourEv");
extern "C" uint32_t AlolaTime_GetHour(Obj* self) {
    return Date_GetHour(self + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00163A68
extern "C" bool QREncoder_InitMemory(Obj* self, void* memory, uint32_t size) __asm__("_ZN2mw3qre9QREncoder10InitMemoryEPvj");
extern "C" bool QREncoder_InitMemory(Obj* self, void* memory, uint32_t size) {
    if (!memory || !size) return false;
    uint32_t* work = reinterpret_cast<uint32_t*>(DAT_0063ef48);
    work[0] = (uint32_t)memory;
    work[1] = size;
    work[2] = 0;
    work[3] = 0;
    aeabi_memclr4(DAT_006748e4, 12288);
    return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00315FA0
extern "C" void personal_LoadMegaEvolveTable(uint32_t monsNo) __asm__("_ZN3pml8personal19LoadMegaEvolveTableE6MonsNo");
extern "C" void personal_LoadMegaEvolveTable(uint32_t monsNo) {
    Obj* g = DAT_0063e07c;
    if (FUN_0048fc98(RPTR(g, 60), monsNo, RPTR(g, 56))) return;
    FUN_00315728(RPTR(g, 56), monsNo);
    FUN_003160e0(RPTR(g, 60), RPTR(g, 56));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492464
extern "C" bool CoreParam_CanMegaEvolve(Obj* self) __asm__("_ZNK3pml8pokepara9CoreParam13CanMegaEvolveEv");
extern "C" bool CoreParam_CanMegaEvolve(Obj* self) {
    uint32_t form = FUN_00491ef8(RPTR(self, 12));
    return form != FUN_0048fe70(*reinterpret_cast<Obj**>(DAT_0063e0c0), self);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00336394
extern "C" void SceneRenderPath_DrawManagerDraw(Obj* self, int32_t arg) __asm__("_ZN4gfl215renderingengine8renderer17RenderingPipeLine15SceneRenderPath15DrawManagerDrawEb");
extern "C" void SceneRenderPath_DrawManagerDraw(Obj* self, int32_t arg) {
    Obj** manager = reinterpret_cast<Obj**>(DAT_00672040);
    R32(*manager, 12) = 1;
    FUN_0034a584(*manager, RPTR(self, 52));
    DrawManager_Draw(RPTR(self, 4), arg);
    FUN_0034a194(*manager, RPTR(self, 52));
    R32(*manager, 12) = 0;
}
#endif

