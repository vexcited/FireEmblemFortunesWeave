#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_zv_CoveredManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CoveredManager_Destructor_alt1(_QWORD* result) __asm__(
    "CoveredManager_Destructor");
__int64 CoveredManager_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CoveredManager_DeletingDestructor");
__int64 GameRoutine_ced9f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cf1500(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_map_Trick_Impl_EachCoveredCharacter(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2002e80[])();
extern __int64 (*GameData_2002f00[])();
extern __int64 (*game_map_zv_CoveredCharacter_vtable[])();
extern __int64 GameData_220b6f0;
extern __int64* GameData_212cfb8[11];
void __attribute__((noreturn)) GameRoutine_1031560(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 game_map_zv_CoveredManager_TryBuild(__int64 a1);
__int64 game_map_zv_CoveredManager_TryBuild_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CoveredManager_Destructor(_QWORD* a1);
void CoveredManager_DeletingDestructor(_QWORD* a1);

__int64 game_map_zv_CoveredManager_TryBuild(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 72LL);
  v6 = v5;
  v2 = *GameData_212cfb8[0];
  v5[0] = GameData_2002e80;
  v5[1] = v1;
  game_map_Trick_Impl_EachCoveredCharacter(*(_QWORD*)(v2 + 16), v5);
  result = (__int64)v6;
  if (v6 == v5) {
    v4 = 32;
  }
  else {
    if (v6 == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6 + v4))((__int64)v6);
}

void CoveredManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[1];
  *a1 = game_map_zv_CoveredManager_vtable;
  if (v1 != 0) {
    v2 = a1[2];
    if (v1 == v2) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v2 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
      v2 -= 16;
    } while (v2 != v1);
    v5 = a1[1];
    a1[2] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
}

void CoveredManager_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[1];
  *a1 = game_map_zv_CoveredManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[2];
    if (v1 == v4) {
      goto LABEL_9;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = a1[1];
    a1[2] = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v1);
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, (__int64)a1);
}

__int64 game_map_zv_CoveredManager_TryBuild_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  atomic_ullong* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = *(_QWORD**)(a1 + 8);
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v5[1] = 0;
  v6 = (atomic_ullong*)(v5 + 1);
  v5[2] = 0;
  v7 = v5;
  *v5 = GameData_2002f00;
  v5[3] = game_map_zv_CoveredCharacter_vtable;
  v8 = v5 + 3;
  v9 = GameData_220b6f0;
  v10 = GameRoutine_cf1500(GameData_220b6f0, 0x1000010000LL);
  result = GameRoutine_ced9f0(v10, a2, *(unsigned int*)(v9 + 80));
  ++*(_DWORD*)(v9 + 80);
  v7[4] = v10;
  v12 = (_QWORD*)v2[2];
  v13 = v2[3];
  if ((unsigned __int64)v12 >= v13) {
    v15 = v2[1];
    v16 = (char*)v12 - v15;
    v17 = ((__int64)v12 - v15) >> 4;
    v18 = v17 + 1;
    if ((unsigned __int64)(v17 + 1) >> 60 != 0) {
      GameRoutine_1031560(result);
    }
    v19 = v13 - v15;
    if (v19 >> 3 > v18) {
      v18 = v19 >> 3;
    }
    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF0LL) {
      v20 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v20 = v18;
    }
    if (v20 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v21 = fw_memory_HeapManager_Allocate(*v4, 16 * v20, 16, 0);
    v22 = &v16[v21];
    v23 = v21 + 16 * v20;
    *(_QWORD*)v22 = v8;
    *((_QWORD*)v22 + 1) = v7;
    v24 = (__int64)&v16[v21 + -16 * v17];
    v14 = (__int64)&v16[v21 + 16];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 1), 1u,
                              memory_order_relaxed);
    result = memcpy(v24, v15, v16);
    v2[1] = v24;
    v2[2] = v14;
    v2[3] = v23;
    if (v15 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v25 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*v4 + v25, (_QWORD)(v15));
    }
  }
  else {
    *v12 = v8;
    v12[1] = v7;
    v14 = (__int64)(v12 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 1), 1u,
                              memory_order_relaxed);
  }
  v2[2] = v14;
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

#pragma GCC visibility pop
