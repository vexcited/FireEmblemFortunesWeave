#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_108e100(_QWORD, _QWORD, _QWORD, long double);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_combat_GambitEffectMainChara_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GambitEffectMainChara_Dispatch(__int64 a1);
__int64 GambitEffectMainChara_Destructor_alt1(__int64 result) __asm__(
    "GambitEffectMainChara_Destructor");
__int64 GambitEffectMainChara_DeletingDestructor_alt1(__int64 a1) __asm__(
    "GambitEffectMainChara_DeletingDestructor");
__attribute__((swiftcall)) void GambitEffectMainChara_Unknown3(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_108e100(PSEUDO_X8, __int64, __int64,
                                             const char*, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GambitEffectMainChara_Destructor(__int64 a1);
void GambitEffectMainChara_DeletingDestructor(__int64 a1);

__int64 GambitEffectMainChara_Dispatch(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  __int64 result;
  __int64 v12;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  v2 = GameData_21ec7b0 +
       24LL * (*(_DWORD*)(*(_QWORD*)(**(_QWORD**)(a1 + 48) +
                                     8LL * (((*(_DWORD*)(*(_QWORD*)(a1 + 48) +
                                                         88LL) -
                                              1) &
                                             0xFFFFFFFD) == 0) +
                                     16) +
                          112LL) != 0);
  v3 = *(_QWORD*)(v2 + 32);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v4 = *(_QWORD*)(v2 + 40);
  v5 = *(_QWORD*)(v3 + 8) == -1 || v4 == 0;
  if (v5 || (v6 = *(_QWORD*)(v4 + 80)) == 0 ||
      (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v4 + 88) == 0) : (v7 = true),
       v7)) {
    v8 = 0;
  }
  else if (*(_QWORD*)(v3 + 8) == -1) {
    v8 = 0;
  }
  else {
    v8 = v4;
  }
  std___1___shared_weak_count___release_weak_alt1(v3);
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 72);
  }
  else {
    v9 = a1 + 57;
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v10 = *(const char**)(a1 + 96);
  }
  else {
    v10 = (const char*)(a1 + 81);
  }
  result =
      X8CALL_X0(__int64, game_108e100((void*)(&v13_.v13),
                                      *(_QWORD*)(*(_QWORD*)(v8 + 88) + 80LL),
                                      v9, v10, 0x1.0000000000000p+0f));
  v12 = v13_.v14;
  if (v13_.v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

void GambitEffectMainChara_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_combat_GambitEffectMainChara_vtable;
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 96);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 72);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
}

void GambitEffectMainChara_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_combat_GambitEffectMainChara_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 96);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 72);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v6, v5);
    }
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 40);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v8, v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v9, a1);
}

__attribute__((swiftcall)) void GambitEffectMainChara_Unknown3(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 30;
  strcpy(a1 + 1, "EffectMainChara");
}

#pragma GCC visibility pop
