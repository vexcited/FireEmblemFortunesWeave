#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__n128 SceneCharacter_1401550(__int64, __int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern _UNKNOWN* GameData_2131330;
extern __int64* GameData_2131328;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter;
float Cursor_734120(int, int, float, float, float, float);
void SceneCharacter_1401180(__int64, float);
void SceneCharacterBehaviorTurn_Unknown3_alt1(__int64 a1) __asm__(
    "SceneCharacterBehaviorTurn_Unknown3");
void SceneCharacterBehaviorTurn_14055a0(__int64 a1);
__int64 SceneCharacter_1401180_alt1(__int64,
                                    float) __asm__("SceneCharacter_1401180");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void SceneCharacter_1401550_alt1(__int64,
                                 __int64) __asm__("SceneCharacter_1401550");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 SceneCharacterBehaviorTurn_Unknown3(__int64 result);

__int64 SceneCharacterBehaviorTurn_Unknown3(__int64 result)
{

#pragma clang fp contract(off)
  float v1;
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  int v6;
  unsigned __int8 explicit;
  __int64* v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float i;
  __int64 v17;
  int v18;
  __int64 v19;
  struct {
    __int64 v20;
    char gap24_[8];
    __int64 v21;
    int v22;
    char v23;
    char gap45_[3];
    int v24;
    int v25;
    int v26;
    __int16 v27;
  } v20_;

  v1 = *(float*)(result + 28);
  v2 = result;
  if (v1 == 0x0.0p+0f) {
    *(_BYTE*)(result + 24) = 0;
  }
  else {
    for (; v1 < -0x1.6800000000000p+7f; v1 = v1 + 0x1.6800000000000p+8f)
      ;
    for (; v1 >= 0x1.6800000000000p+7f; v1 = v1 + -0x1.6800000000000p+8f)
      ;
    v3 = *(_QWORD*)(result + 16);
    if (v1 <= -0x1.2c00000000000p+7f) {
      v4 = 1804569207;
    }
    else {
      v4 = 1804569206;
    }
    if (v1 <= 0x0.0p+0f) {
      v5 = v4;
    }
    else {
      v5 = 1804569020;
    }
    if (v1 < 0x1.2c00000000000p+7f) {
      v6 = v5;
    }
    else {
      v6 = 1804569021;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2131330,
                                    memory_order_acquire);
    v8 = GameData_2131328;
    if ((explicit & 1) == 0) {
      v19 = v3;
      v18 = __cxa_guard_acquire_alt1((__int64)GameData_2131330);
      v8 = GameData_2131328;
      v3 = v19;
      if (v18 != 0) {
        *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_2131328 + 4) =
            0;
        *v8 = 0xBF800000BF800000LL;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = -1082130432;
        __cxa_guard_release_alt1((__int64)GameData_2131330);
        v8 = GameData_2131328;
        v3 = v19;
      }
    }
    v9 = *(_DWORD*)v8;
    v10 = *((_DWORD*)v8 + 1);
    v11 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
    v20_.v20 = 0;
    v20_.v22 = v6;
    v20_.v23 = 0;
    v20_.v26 = v11;
    v20_.v24 = v9;
    v20_.v25 = v10;
    v20_.v27 = WORD2(v11);
    SceneCharacter_1401550_alt1(v3, (__int64)&v20_.v20);
    if ((v20_.v20 & 1) != 0 && v20_.v21 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v20_.v21);
    }
    v13 = *(_QWORD*)(v2 + 16);
    v14 = *(_QWORD*)(v13 + 192);
    v15 = *(_QWORD*)(v13 + 200);
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
      for (i = *(float*)(v14 + 32); i < -0x1.6800000000000p+7f;
           i = i + 0x1.6800000000000p+8f)
        ;
      for (; i >= 0x1.6800000000000p+7f; i = i + -0x1.6800000000000p+8f)
        ;
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak_alt1(v15);
      }
    }
    else {
      for (i = *(float*)(v14 + 32); i < -0x1.6800000000000p+7f;
           i = i + 0x1.6800000000000p+8f)
        ;
      for (; i >= 0x1.6800000000000p+7f; i = i + -0x1.6800000000000p+8f)
        ;
    }
    v17 = *(_QWORD*)(v2 + 16);
    *(float*)(v2 + 48) = i;
    *(_QWORD*)(v2 + 40) = 1056964608;
    *(float*)(v2 + 52) = v1 + i;
    *(float*)(v2 + 56) = i;
    return SceneCharacter_1401180_alt1(v17, 0x1.0000000000000p-1f);
  }
  return result;
}

void SceneCharacterBehaviorTurn_14055a0(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  int v4;
  int v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  char v16;
  char v18;

  v2 = *(float*)(a1 + 40);
  v1 = *(float*)(a1 + 44);
  if (v1 >= v2) {
    v10 = *(float*)(a1 + 52);
  }
  else {
    v4 = *(_DWORD*)(a1 + 60);
    v5 = *(_DWORD*)(a1 + 64);
    v6 = v1 + (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
    if (v2 >= v6) {
      v7 = v6;
    }
    else {
      v7 = v2;
    }
    v8 = *(float*)(a1 + 48);
    v9 = *(float*)(a1 + 52);
    *(float*)(a1 + 44) = v7;
    v10 = Cursor_734120(v4, v5, v8, v9, v7, v2);
  }
  v11 = *(_QWORD*)(a1 + 16);
  *(float*)(a1 + 56) = v10;
  v12 = *(_QWORD*)(v11 + 192);
  v13 = *(_QWORD*)(v11 + 200);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    v14 = *(float*)(a1 + 56);
    if (v14 >= 0x0.0p+0f) {
      if (v14 != 0x0.0p+0f && v14 >= 0x1.6800000000000p+8f) {
        do {
          v14 = v14 + -0x1.6800000000000p+8f;
        } while (v14 >= 0x1.6800000000000p+8f);
      }
    }
    else {
      do {
        v14 = v14 + 0x1.6800000000000p+8f;
      } while (v14 < 0x0.0p+0f);
    }
    for (; v14 < -0x1.6800000000000p+7f; v14 = v14 + 0x1.6800000000000p+8f)
      ;
    for (; v14 >= 0x1.6800000000000p+7f; v14 = v14 + -0x1.6800000000000p+8f)
      ;
    v16 = *(_BYTE*)(v12 + 40);
    *(float*)(v12 + 32) = v14;
    *(_BYTE*)(v12 + 40) = v16 | 2;
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt1(v13);
    }
  }
  else {
    if (v10 >= 0x0.0p+0f) {
      if (v10 != 0x0.0p+0f && v10 >= 0x1.6800000000000p+8f) {
        do {
          v10 = v10 + -0x1.6800000000000p+8f;
        } while (v10 >= 0x1.6800000000000p+8f);
      }
    }
    else {
      do {
        v10 = v10 + 0x1.6800000000000p+8f;
      } while (v10 < 0x0.0p+0f);
    }
    for (; v10 < -0x1.6800000000000p+7f; v10 = v10 + 0x1.6800000000000p+8f)
      ;
    for (; v10 >= 0x1.6800000000000p+7f; v10 = v10 + -0x1.6800000000000p+8f)
      ;
    v18 = *(_BYTE*)(v12 + 40);
    *(float*)(v12 + 32) = v10;
    *(_BYTE*)(v12 + 40) = v18 | 2;
  }
}

#pragma GCC visibility pop
