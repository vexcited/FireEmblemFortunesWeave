#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d477c0(_QWORD, _QWORD);
__int64 StateActionBase_Unknown5(void);
__int64 StateActionBase_d48970(_QWORD, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 StateRepelled_Unknown5_f50a60(_QWORD* a1);
__int64 StateRepelled_Unknown2(__int64 result);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_zview_CharacterController_StateActionBase_vtable[])();
extern __int64 (*game_zview_CharacterController_StateRepelled_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ed48[5];
void StateRepelled_f50ce0(_QWORD* a1);
__n128 StateRepelled_f50df0_alt1(_QWORD* a1) __asm__("StateRepelled_f50df0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void StateRepelled_f50df0(_QWORD* a1);

__int64 StateRepelled_Unknown5_f50a60(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  StateActionBase_Unknown5();
  if (a1[13] != 0) {
    v2 = a1[14];
    v3 = *(_QWORD*)(a1[1] + 456LL);
    v17 = a1[13];
    v18 = v2;
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_d477c0(v3 + 8, &v17);
    v4 = v18;
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v5 = a1[14];
    a1[13] = 0;
    a1[14] = 0;
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  if (a1[15] != 0) {
    v6 = a1[16];
    v7 = *(_QWORD*)(a1[1] + 456LL);
    v15 = a1[15];
    v16 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_d477c0(v7 + 8, &v15);
    v8 = v16;
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    v9 = a1[16];
    a1[15] = 0;
    a1[16] = 0;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
  v10 = *(_QWORD*)(a1[1] + 488LL);
  v11 = *(_QWORD*)(v10 + 192);
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  result = StateActionBase_d48970(a1, 0.6f);
  v13 = *(_QWORD*)(*(_QWORD*)(a1[1] + 8LL) + 32LL);
  if (v13 != 0) {
    v14 = *(float*)(v13 + 384);
    if (v14 < 0.2f) {
      v14 = 0.2f;
    }
    *(float*)(v13 + 384) = v14;
  }
  return result;
}

void StateRepelled_f50ce0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[16];
  *a1 = game_zview_CharacterController_StateRepelled_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v3 = a1[14];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = a1[7];
  *a1 = game_zview_CharacterController_StateActionBase_vtable;
  if (v4 != 0) {
    a1[8] = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  v6 = a1[6];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
}

void StateRepelled_f50df0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[16];
  *a1 = game_zview_CharacterController_StateRepelled_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v3 = a1[14];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = a1[7];
  *a1 = GameData_212ed48[0] + 2;
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[8] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v4);
  }
  v8 = a1[6];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v9, (__int64)a1);
}

__int64 StateRepelled_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(result + 48);
  v2 = result;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
  }
  v3 = *(_QWORD*)(v2 + 56);
  v4 = *(_QWORD*)(v2 + 112);
  *(_QWORD*)(v2 + 80) = 0;
  *(_DWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 64) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(v2 + 128);
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

#pragma GCC visibility pop
