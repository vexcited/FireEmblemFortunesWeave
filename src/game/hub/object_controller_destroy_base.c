#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void Object_dfd7e0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_hub_e1c160(PSEUDO_X8, __int64, char*,
                                                __int64*);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe2730[])();
extern __int64 GameData_212dc48[5];
extern __int64 fw_memory_g_heap_manager_ptr;
void game_hub_Object_EnableHitAttack(__int64, __int64);
__int64 game_hub_ObjectControllerDestroyBase_InitializeImpl(__int64 a1);

__int64 game_hub_ObjectControllerDestroyBase_InitializeImpl(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __n128 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  __int64 v18[9];
  _QWORD v19[3];

  v1 = *(unsigned __int8*)(a1 + 24);
  if ((v1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 32);
  }
  else {
    v3 = v1 >> 1;
  }
  if (v3 != 0) {
    Object_dfd7e0((void*)(v18), *(_QWORD*)(a1 + 8), (__int64)"Loc_Eff_Gmc");
    v4 = *(_QWORD*)GameData_212dc48[0];
    GameRoutine_e1b4d0((void*)(v19));
    game_hub_e1c160((void*)(&v16_.v16), v4, (char*)v19, v18);
    if ((v19[0] & 1) != 0 && v19[2] != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v6);
    }
    v7 = v16_.v16;
    v8 = v16_.v17;
    if (v16_.v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16_.v17 + 8), 1u,
                                memory_order_relaxed);
    }
    v9 = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 56) = v7;
    *(_QWORD*)(a1 + 64) = v8;
    if (v9 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        v5 = std___1___shared_weak_count___release_weak(v9);
      }
      v8 = *(_QWORD*)(a1 + 64);
    }
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        v5 = std___1___shared_weak_count___release_weak(v8);
      }
    }
    v10 = v16_.v17;
    if (v16_.v17 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v16_.v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(
          v10, *(long double*)&v5);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  v11 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v11 + 848) & 1) == 0) {
    *(_BYTE*)(v11 + 848) = 1;
    v11 = *(_QWORD*)(a1 + 8);
  }
  v14_.v14[0] = GameData_1fe2730;
  v14_.v14[1] = a1;
  v14_.v15 = v14_.v14;
  game_hub_Object_EnableHitAttack(v11, (__int64)v14_.v14);
  result = (__int64)v14_.v15;
  if (v14_.v15 == v14_.v14) {
    v13 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (*(__int64 (**)(__int64))(*v14_.v15 + v13))((__int64)v14_.v15);
}

#pragma GCC visibility pop
