#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_a2af20(__int64, __int64, const char*, ...);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 snd_Voice_getBufferLabel(_QWORD);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
bool snd_hasSound(__int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void snd_a2fe30(PSEUDO_X8 x8_, __int64 a1,
                                           __int64* a2, const char* a3, char a4,
                                           char a5, char a6, __int64 a7,
                                           __int64 a8);

__attribute__((swiftcall)) void snd_a2fe30(PSEUDO_X8 x8_, __int64 a1,
                                           __int64* a2, const char* a3, char a4,
                                           char a5, char a6, __int64 a7,
                                           __int64 a8)
{

#pragma clang fp contract(off)
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v15;
  const char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  char v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v32[16];
  char v33[256];
  struct {
    __int64 v34;
    unsigned __int64 v35;
    __int64* v36;
  } v34_;

  if (a3 == nullptr || *a3 == 0) {
    *(_QWORD*)a9 = 0;
    *(_DWORD*)(a9 + 8) = 0x2000;
    GameRoutine_112180(a9, (__int64)a2);
    return;
  }
  GameRoutine_60a020(a1 + 3048, a3);
  if ((snd_fnd_WeakHandle_isValid(a2) & 1) != 0) {
    v15 = snd_fnd_WeakHandle_get((__int64)a2);
    v16 = (const char*)snd_Voice_getBufferLabel(v15 - 5592);
  }
  else {
    v16 = &GameData_1a9f09e;
  }
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20,
                                                16, 0);
    v34_.v35 = v18;
    v34_.v36 = (__int64*)v19;
    v34_.v34 = v20 | 1;
  }
  else {
    LOBYTE(v34_.v34) = 2 * v17;
    v19 = (char*)&v34_.v34 + 1;
    if (v17 == 0) {
      goto LABEL_16;
    }
  }
  memmove((__int64)v19, (__int64)v16, v18);
LABEL_16:
  v21 = false;
  v19[v18] = 0;
  if ((a6 & 1) != 0) {
    GameRoutine_a2af20((__int64)v33, 256, "%s_Hds", a3);
    v21 = snd_hasSound((__int64)v33);
  }
  if ((a4 & 1) != 0 && (a5 & 1) != 0) {
    GameRoutine_a2af20((__int64)v33, 256, "%s_Rain_Night", a3);
    v21 = snd_hasSound((__int64)v33);
  }
  if ((a4 & 1) != 0 && !v21) {
    GameRoutine_a2af20((__int64)v33, 256, "%s_Rain", a3);
    v21 = snd_hasSound((__int64)v33);
  }
  if ((a5 & 1) != 0 && !v21) {
    GameRoutine_a2af20((__int64)v33, 256, "%s_Night", a3);
    v21 = snd_hasSound((__int64)v33);
  }
  if (!v21) {
    GameRoutine_a2af20((__int64)v33, 256, "%s", a3);
  }
  v22 = strlen(v33);
  v23 = v34_.v34;
  v24 = (unsigned __int8)v34_.v34 >> 1;
  if ((v34_.v34 & 1) != 0) {
    v24 = v34_.v35;
  }
  if (v22 != v24) {
    goto LABEL_37;
  }
  v25 = v22;
  if (v22 == -1) {
    fs_60a230();
  }
  v26 = (v34_.v34 & 1) != 0 ? v34_.v36 : (__int64*)((char*)&v34_.v34 + 1);
  if (memcmp((__int64)v26, (__int64)v33, v25) != 0) {
  LABEL_37:
    if ((snd_fnd_WeakHandle_isValid(a2) & 1) != 0) {
      v27 = snd_fnd_WeakHandle_get((__int64)a2);
      (*(void (**)(__int64, __int64, _QWORD, double))(
          *(_QWORD*)(v27 - 5592) + 248LL))(v27 - 5592, a8, 0, 0x0.0p+0);
    }
    snd_play_ff2d0((__int64)"overall_ambient", (__int64)v33, a7, 0, 0x10001u, 0,
                   0x0.0p+0f, 0x1.0000000000000p+0f);
    GameRoutine_112180((__int64)a2, (__int64)v32);
    if ((snd_fnd_WeakHandle_isValid(a2) & 1) != 0) {
      v28 = snd_fnd_WeakHandle_get((__int64)a2);
      (*(void (**)(__int64, __int64))(*(_QWORD*)(v28 - 5592) + 632LL))(
          v28 - 5592, 8);
    }
  }
  *(_QWORD*)a9 = 0;
  *(_DWORD*)(a9 + 8) = 0x2000;
  GameRoutine_112180(a9, (__int64)a2);
  if ((v23 & 1) != 0 && v34_.v36 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  (__int64)v34_.v36);
  }
}

#pragma GCC visibility pop
