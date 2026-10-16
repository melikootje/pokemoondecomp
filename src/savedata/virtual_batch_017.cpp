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
void CriticalSection_Enter(Obj*) __asm__("_ZN2nn2os15CriticalSection5EnterEv");
void CriticalSection_Leave(Obj*) __asm__("_ZN2nn2os15CriticalSection5LeaveEv");
}

// Virtual call through slot `offset` of the object's vtable.
#define VCALL(RET, obj, offset, ...) ((RET (*)(Obj*, ##__VA_ARGS__))(*reinterpret_cast<uint32_t*>(*reinterpret_cast<Obj**>(obj) + (offset))))

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00496D88
extern "C" Obj* AsyncFileManager_GetArcFile(Obj* self, uint32_t id) __asm__("_ZNK4gfl22fs16AsyncFileManager10GetArcFileEj");
extern "C" Obj* AsyncFileManager_GetArcFile(Obj* self, uint32_t id) {
    Obj* lock = RPTR(self, 60);
    CriticalSection_Enter(lock);
    Obj* found = 0;
    for (Obj* node = RPTR(RPTR(self, 36), 4); node; node = RPTR(node, 8)) {
        if (VCALL(uint32_t, node, 8)(node) == 2 && R32(RPTR(node, 16), 8) == id) { found = RPTR(node, 16); break; }
    }
    CriticalSection_Leave(lock);
    return found;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049721C
extern "C" bool AsyncFileManager_IsArcFileOpenFinished(Obj* self, uint32_t id) __asm__("_ZNK4gfl22fs16AsyncFileManager21IsArcFileOpenFinishedEj");
extern "C" bool AsyncFileManager_IsArcFileOpenFinished(Obj* self, uint32_t id) {
    Obj* lock = RPTR(self, 52);
    CriticalSection_Enter(lock);
    bool finished = true;
    for (Obj* node = RPTR(RPTR(self, 28), 4); node; node = RPTR(node, 8)) {
        if (VCALL(uint32_t, node, 8)(node) == 3 && R32(node, 20) == id) { finished = false; break; }
    }
    CriticalSection_Leave(lock);
    return finished;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004976EC
extern "C" bool AsyncFileManager_IsArcFileLoadDataPieceBufFinished(Obj* self, const void* buffer) __asm__("_ZNK4gfl22fs16AsyncFileManager33IsArcFileLoadDataPieceBufFinishedEPKv");
extern "C" bool AsyncFileManager_IsArcFileLoadDataPieceBufFinished(Obj* self, const void* buffer) {
    Obj* lock = RPTR(self, 52);
    CriticalSection_Enter(lock);
    bool finished = true;
    for (Obj* node = RPTR(RPTR(self, 28), 4); node; node = RPTR(node, 8)) {
        if (VCALL(uint32_t, node, 8)(node) == 7 && R32(node, 44) == (uint32_t)buffer) { finished = false; break; }
    }
    CriticalSection_Leave(lock);
    return finished;
}
#endif

