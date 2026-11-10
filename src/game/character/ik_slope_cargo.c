#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109d5e0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_IKSlopeCargo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 IKSlopeCargo_Destructor(_QWORD* a1);
__int64 IKSlopeCargo_DeletingDestructor(_QWORD* a1);
extern __int128 GameData_1a83610;
extern __int64 (*GameData_200f3e8[])();
void GameRoutine_109d2e0(__int64, __int64, __int64, __int64, unsigned int);
void game_character_IKSlopeCargo_IKSlopeCargo(__int64 a1, _QWORD* a2,
                                              __int64 a3);

void game_character_IKSlopeCargo_IKSlopeCargo(__int64 a1, _QWORD* a2,
                                              __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;

  *(_QWORD*)(a1 + 24) = a2;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_WORD*)(a1 + 16) = 256;
  v9 = v8;
  *(_QWORD*)a1 = game_character_IKSlopeCargo_vtable;
  *(_QWORD*)(a1 + 8) = a3;
  *(_DWORD*)(a1 + 40) = -1;
  *(_DWORD*)(a1 + 112) = 1065353216;
  v8[0] = GameData_200f3e8;
  v8[1] = a1;
  *(_OWORD*)(a1 + 96) = GameData_1a83610;
  GameRoutine_109d2e0(a1 + 40, a2[51], (__int64)"Loc_C_Trans", (__int64)v8, 1u);
  if (v9 == v8) {
    v5 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v9 + v5))((__int64)v9);
LABEL_6:
  v6 = a2[49];
  v7 = a2[50];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    *(_DWORD*)(a1 + 112) = *(_DWORD*)(v6 + 32);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  else {
    *(_DWORD*)(a1 + 112) = *(_DWORD*)(v6 + 32);
  }
  *(_BYTE*)(a1 + 16) = 1;
}

__int64 IKSlopeCargo_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_character_IKSlopeCargo_vtable;
  GameRoutine_109d5e0(a1 + 5);
  result = a1[8];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 IKSlopeCargo_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_character_IKSlopeCargo_vtable;
  GameRoutine_109d5e0(a1 + 5);
  v2 = a1[8];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
