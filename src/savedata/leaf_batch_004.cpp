// Hand-written leaf reconstructions checked against retail with tools/equiv_check.py.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;
typedef unsigned long long uint64_t;

// The game passes floats in VFP registers; keep that convention under the project's softfp build.
#define VFP __attribute__((pcs("aapcs-vfp")))

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049A978
extern "C" uint32_t MsgData_GetStrCount(uint8_t* self) __asm__("_ZNK4gfl23str7MsgData11GetStrCountEv");
extern "C" uint32_t MsgData_GetStrCount(uint8_t* self) {
    return *reinterpret_cast<uint16_t*>(*reinterpret_cast<uint8_t**>(self + 20) + 2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048DFBC
extern "C" uint32_t CursorManager_GetID_Index(uint8_t* self, uint32_t index) __asm__("_ZNK3app4tool13CursorManager5GetIDEj");
extern "C" uint32_t CursorManager_GetID_Index(uint8_t* self, uint32_t index) {
    return *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(self + 8) + index * 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A54D0
extern "C" uint32_t BaseModel_GetMeshCount(uint8_t* self) __asm__("_ZNK7poke_3d5model9BaseModel12GetMeshCountEv");
extern "C" uint32_t BaseModel_GetMeshCount(uint8_t* self) {
    return *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(self + 4) + 204);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A56C0
extern "C" uint32_t BaseModel_GetMaterialCount(uint8_t* self) __asm__("_ZNK7poke_3d5model9BaseModel16GetMaterialCountEv");
extern "C" uint32_t BaseModel_GetMaterialCount(uint8_t* self) {
    return *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(self + 4) + 192);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A593C
extern "C" uint32_t BaseModel_GetInterestJointCount(uint8_t* self) __asm__("_ZNK7poke_3d5model9BaseModel21GetInterestJointCountEv");
extern "C" uint32_t BaseModel_GetInterestJointCount(uint8_t* self) {
    return *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(self + 204) + 12);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00520ECC
extern "C" uint32_t mwmomobiclipDecoderGetQueueCapacity(uint8_t* decoder) __asm__("mwmomobiclipDecoderGetQueueCapacity");
extern "C" uint32_t mwmomobiclipDecoderGetQueueCapacity(uint8_t* decoder) {
    return decoder ? *reinterpret_cast<uint32_t*>(decoder + 8) : 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417FFC
extern "C" void BaseModel_SetInterestAdjustAngleEnable(uint8_t* self, bool enable) __asm__("_ZN7poke_3d5model9BaseModel28SetInterestAdjustAngleEnableEb");
extern "C" void BaseModel_SetInterestAdjustAngleEnable(uint8_t* self, bool enable) {
    (*reinterpret_cast<uint8_t**>(self + 204))[21] = enable;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB434
extern "C" bool JoinFestaPersonalData_IsEnable(uint8_t* self) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData8IsEnableEv");
extern "C" bool JoinFestaPersonalData_IsEnable(uint8_t* self) {
    if (*reinterpret_cast<uint32_t*>(self + 44) != 0) return true;
    return (*reinterpret_cast<uint32_t*>(self + 48) | *reinterpret_cast<uint32_t*>(self + 52)) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D5BC
extern "C" VFP void BaseCamera_SetFar(uint8_t* self, float value) __asm__("_ZN7poke_3d5model10BaseCamera6SetFarEf");
extern "C" VFP void BaseCamera_SetFar(uint8_t* self, float value) { *reinterpret_cast<float*>(self + 168) = value; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D5C4
extern "C" VFP void BaseCamera_SetFovy(uint8_t* self, float value) __asm__("_ZN7poke_3d5model10BaseCamera7SetFovyEf");
extern "C" VFP void BaseCamera_SetFovy(uint8_t* self, float value) { *reinterpret_cast<float*>(self + 172) = value; }
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417EFC
extern "C" VFP void BaseModel_SetInterestTagAdjustAngle(uint8_t* self, float angle) __asm__("_ZN7poke_3d5model9BaseModel25SetInterestTagAdjustAngleEf");
extern "C" VFP void BaseModel_SetInterestTagAdjustAngle(uint8_t* self, float angle) {
    *reinterpret_cast<float*>(*reinterpret_cast<uint8_t**>(self + 204) + 24) = angle;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A59F0
extern "C" VFP float BaseModel_GetInterestLimitAngleLow(uint8_t* self, uint32_t index) __asm__("_ZNK7poke_3d5model9BaseModel24GetInterestLimitAngleLowEj");
extern "C" VFP float BaseModel_GetInterestLimitAngleLow(uint8_t* self, uint32_t index) {
    uint8_t* table = *reinterpret_cast<uint8_t**>(*reinterpret_cast<uint8_t**>(self + 204) + 8);
    return *reinterpret_cast<float*>(*reinterpret_cast<uint8_t**>(table + index * 144 + 16) + 72);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5A50
extern "C" VFP float BaseModel_GetInterestLimitAngleHigh(uint8_t* self, uint32_t index) __asm__("_ZNK7poke_3d5model9BaseModel25GetInterestLimitAngleHighEj");
extern "C" VFP float BaseModel_GetInterestLimitAngleHigh(uint8_t* self, uint32_t index) {
    uint8_t* table = *reinterpret_cast<uint8_t**>(*reinterpret_cast<uint8_t**>(self + 204) + 8);
    return *reinterpret_cast<float*>(*reinterpret_cast<uint8_t**>(table + index * 144 + 16) + 76);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417110
extern "C" VFP void BaseModel_SetPosition(uint8_t* self, float x, float y, float z) __asm__("_ZN7poke_3d5model9BaseModel11SetPositionEfff");
extern "C" VFP void BaseModel_SetPosition(uint8_t* self, float x, float y, float z) {
    uint8_t* transform = *reinterpret_cast<uint8_t**>(self + 4);
    *reinterpret_cast<uint32_t*>(transform + 120) |= 1;
    float* position = reinterpret_cast<float*>(transform + 32);
    position[0] = x;
    position[1] = y;
    position[2] = z;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00418600
extern "C" VFP void BaseModel_SetScale_XYZ(uint8_t* self, float x, float y, float z) __asm__("_ZN7poke_3d5model9BaseModel8SetScaleEfff");
extern "C" VFP void BaseModel_SetScale_XYZ(uint8_t* self, float x, float y, float z) {
    uint8_t* transform = *reinterpret_cast<uint8_t**>(self + 4);
    *reinterpret_cast<uint32_t*>(transform + 120) |= 1;
    float* scale = reinterpret_cast<float*>(transform + 44);
    scale[0] = x;
    scale[1] = y;
    scale[2] = z;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035E0D8
extern "C" VFP void EffectSystem_Calc(uint8_t* self, uint32_t index, float value, bool, bool) __asm__("_ZN4gfl26Effect6System4CalcEhfbb");
extern "C" VFP void EffectSystem_Calc(uint8_t* self, uint32_t index, float value, bool, bool) {
    if (index < 64) reinterpret_cast<float*>(self)[index + 4] = value;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F2BA8
extern "C" void GameData_SetFieldCameraData(uint8_t* self, const uint32_t* data) __asm__("_ZN7GameSys8GameData18SetFieldCameraDataERKN5Field6Camera8SaveDataE");
extern "C" void GameData_SetFieldCameraData(uint8_t* self, const uint32_t* data) {
    uint32_t* dst = *reinterpret_cast<uint32_t**>(self + 260);
    dst[0] = data[0];
    dst[1] = data[1];
    dst[2] = data[2];
    dst[3] = data[3];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AACC8
extern "C" bool JoinFestaPersonalData_GetPacketGameStatus1(uint8_t* self, uint32_t* out) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData20GetPacketGameStatus1EPNS0_17PacketGameStatus1E");
extern "C" bool JoinFestaPersonalData_GetPacketGameStatus1(uint8_t* self, uint32_t* out) {
    if (self[167] != 77) return false;
    const uint32_t* a = reinterpret_cast<const uint32_t*>(self + 120);
    const uint32_t* b = reinterpret_cast<const uint32_t*>(self + 152);
    for (int i = 0; i < 8; i++) out[i] = a[i];
    for (int i = 0; i < 4; i++) out[8 + i] = b[i];
    return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AAD94
extern "C" bool JoinFestaPersonalData_GetPacketGameStatus5(uint8_t* self, uint32_t* out) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData20GetPacketGameStatus5EPNS0_17PacketGameStatus5E");
extern "C" bool JoinFestaPersonalData_GetPacketGameStatus5(uint8_t* self, uint32_t* out) {
    if (self[348] != 77) return false;
    const uint32_t* a = reinterpret_cast<const uint32_t*>(self + 312);
    const uint32_t* b = reinterpret_cast<const uint32_t*>(self + 344);
    for (int i = 0; i < 8; i++) out[i] = a[i];
    for (int i = 0; i < 4; i++) out[8 + i] = b[i];
    return true;
}
#endif
