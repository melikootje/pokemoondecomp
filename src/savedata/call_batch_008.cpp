// Hand-written reconstructions checked against retail with tools/equiv_check.py.
// Started from Ghidra pseudocode (via REA) and re-expressed as readable C++.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

typedef uint8_t Obj;

#define R32(p, off) (*reinterpret_cast<uint32_t*>((p) + (off)))
#define RPTR(p, off) (*reinterpret_cast<Obj**>((p) + (off)))

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E392C
extern "C" void MotionBlur_SetColorFilter(Obj* self, const Obj* param) __asm__("_ZN6System10MotionBlur14SetColorFilterERKNS0_10ColorParamE");
extern "C" void MotionBlur_SetColorFilter(Obj* self, const Obj* param) {
    if (!self[193]) return;
    self[312] = param[0];
    R32(self, 316) = *reinterpret_cast<const uint32_t*>(param + 4);
    R32(self, 320) = *reinterpret_cast<const uint32_t*>(param + 8);
    R32(self, 324) = *reinterpret_cast<const uint32_t*>(param + 12);
    R32(self, 328) = *reinterpret_cast<const uint32_t*>(param + 16);
    R32(self, 344) = R32(self, 332);
    R32(self, 348) = R32(self, 336);
    R32(self, 356) = 0;
    R32(self, 352) = R32(self, 340);
    if (self[312] == 0) {
        R32(self, 332) = R32(self, 316);
        R32(self, 336) = R32(self, 320);
        R32(self, 340) = R32(self, 324);
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2EFC
extern "C" Obj* RegionNameCache_GetRegionName(Obj* self, const uint32_t* addressId) __asm__("_ZNK6System3CTR15RegionNameCache13GetRegionNameERN2nn3cfg3CTR15SimpleAddressIdE");
extern "C" Obj* RegionNameCache_GetRegionName(Obj* self, const uint32_t* addressId) {
    uint32_t count = R32(self, 144);
    if (count != 0) {
        uint32_t i = count & 1;
        for (uint32_t j = 0; j < i; j++) {
            if (reinterpret_cast<uint32_t*>(RPTR(self, 140))[j] == *addressId) return RPTR(self, 136) + j * 128;
        }
        for (; i < count; i += 2) {
            const uint32_t* ids = reinterpret_cast<uint32_t*>(RPTR(self, 140));
            if (ids[i] == *addressId) return RPTR(self, 136) + i * 128;
            if (ids[i + 1] == *addressId) return RPTR(self, 136) + (i + 1) * 128;
        }
    }
    return self + 8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438734
extern "C" void ResortSave_SubPokeBeansNum(Obj* self, int32_t a, int32_t b, int32_t c) __asm__("_ZN8Savedata10ResortSave15SubPokeBeansNumEiii");
extern "C" void ResortSave_SubPokeBeansNum(Obj* self, int32_t a, int32_t b, int32_t c) {
    uint8_t* beans = self + 0x5650;
    self[0x565E] = self[0x565E] - c;
    for (; a > 0; a--) {  // spend from the most plentiful of the first group
        int32_t best = 0;
        uint8_t most = beans[0];
        for (int32_t k = 1; k < 7; k++) if (most < beans[k]) { most = beans[k]; best = k; }
        beans[best]--;
    }
    for (; b > 0; b--) {  // and of the second group
        int32_t best = 0;
        uint8_t most = 0;
        if (beans[7] != 0) { best = 7; most = beans[7]; }
        for (int32_t k = 8; k < 14; k++) if (most < beans[k]) { most = beans[k]; best = k; }
        beans[best]--;
    }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041EA00
extern "C" int32_t TrainerTypeData_GetTagTrainerType(uint16_t a, uint16_t b) __asm__("_ZN7trainer17GetTagTrainerTypeEtt");
extern "C" int32_t TrainerTypeData_GetTagTrainerType(uint16_t a, uint16_t b) {
    if (a == 62) return b == 62 ? 172 : -1;
    if ((a == 63 || a == 112) && (b == 63 || b == 112)) return 173;
    if ((a == 68 || a == 144) && (b == 68 || b == 144)) return 174;
    if ((a == 118 || a == 117) && (b == 118 || b == 117)) return 175;
    if ((a == 67 || a == 116) && (b == 67 || b == 116)) return 176;
    if ((a == 64 || a == 113) && (b == 64 || b == 113)) return 177;
    if ((a == 66 || a == 115) && (b == 66 || b == 115)) return 178;
    if ((a == 65 || a == 114) && (b == 65 || b == 114)) return 179;
    if ((a == 145 || a == 146) && (b == 145 || b == 146)) return 180;
    if ((a == 147 || a == 148) && (b == 147 || b == 148)) return 181;
    if (a == 149 && b == 149) return 182;
    return -1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004687F0
extern "C" bool JoinFestaPersonalData_SetBattleRequestTargetUser(Obj* self, bool useHighWord, const uint32_t* friendKeys, const uint8_t* relations, uint32_t count, bool markEntries) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData26SetBattleRequestTargetUserEbPK18nnfriendsFriendKeyPNS0_15JoinFestaDefine21E_JOIN_FESTA_RELATIONEjb");
extern "C" bool JoinFestaPersonalData_SetBattleRequestTargetUser(Obj* self, bool useHighWord, const uint32_t* friendKeys, const uint8_t* relations, uint32_t count, bool markEntries) {
    if (count >= 4) return false;
    Obj* slots = self + 0x208;
    for (uint32_t i = 0; i < count; i++) {
        uint32_t* slot = reinterpret_cast<uint32_t*>(slots + i * 8);
        if (!useHighWord) {
            slot[0] = friendKeys[i * 4 + 2];
            slot[1] = friendKeys[i * 4 + 3];
        } else {
            slot[0] = friendKeys[i * 4];
            slot[1] = 0;
        }
        slots[i + 0x20] = relations[i];
    }
    uint32_t flags = R32(self, 0x224);
    R32(self, 0x224) = (flags & ~3u) | (count & 3);
    if (markEntries) {
        flags = (flags & 0xFFFFFFC4u) | (count & 3);
        R32(self, 0x224) = flags;
        if (count != 0) {
            uint32_t i = count & 1;
            if (i == 1) R32(self, 0x224) = flags | 8;
            if (i < count) {
                flags = R32(self, 0x224);
                do {
                    flags |= ((1u << (i & 0xFF)) & 7) << 3 | ((1u << ((i + 1) & 0xFF)) & 7) << 3;
                    R32(self, 0x224) = flags;
                    i += 2;
                } while (i < count);
            }
        }
    }
    R32(self, 0x224) = (R32(self, 0x224) & ~4u) | ((uint32_t)useHighWord << 2);
    return true;
}
#endif
