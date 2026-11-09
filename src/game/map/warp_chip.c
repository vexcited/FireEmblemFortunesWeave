#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 WarpArrow_Unknown2(__int64, __int64*, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_map_ObjectMapChip_Setup(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*game_map_WarpChip_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_2130190[17];
__int64 WarpChip_1126c40(__int64 a1, __int64* a2, char a3);
__int64 WarpChip_Unknown2(__int64 a1, __int64* a2, unsigned int a3);
__int64 WarpChip_DeletingDestructor(__int64 a1);

__int64 WarpChip_1126c40(__int64 a1, __int64* a2, char a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  *(_BYTE*)(a1 + 152) = a3;
  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result, a2);
    if (result != 0) {
      v6 = result;
      result = *a2;
      if (*a2 == 0) {
        goto LABEL_18;
      }
      v7 = (*(_BYTE*)(a1 + 8) & 1) != 0 ? *(_QWORD*)(a1 + 24) : a1 + 9;
      GameRoutine_1560070(&v11, result, v7);
      result = v12;
      if (v12 == 0) {
        goto LABEL_18;
      }
      v9 = std___1___shared_weak_count_lock(v12, v8);
      v10 = v11;
      result = v12;
      if (v12 != 0) {
        result = std___1___shared_weak_count___release_weak(v12);
      }
      if (v9 != 0 && v10 != 0) {
        result = ui_LayoutAccessor_FindPane(v10, "MapChip_Object");
        if (result != 0) {
          result = __dynamic_cast(result, GameData_212d670[0],
                                  GameData_212d678[0], 0);
          if (result != 0) {
            result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 32LL))(
                a1, result);
          }
        }
      }
      else if (v9 == 0) {
      LABEL_18:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          return std___1___shared_weak_count___release_weak(v6);
        }
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = std___1___shared_weak_count___release_weak(v9);
      }
      goto LABEL_18;
    }
  }
  return result;
}

__int64 WarpChip_Unknown2(__int64 a1, __int64* a2, unsigned int a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v10[2];
  _QWORD v11[2];

  v3 = a2[1];
  v11[0] = *a2;
  v11[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    game_map_ObjectMapChip_Setup(a1, v11, a3);
    std___1___shared_weak_count___release_weak(v3);
  }
  else {
    game_map_ObjectMapChip_Setup(a1, v11, a3);
  }
  v7 = *a2;
  v8 = a2[1];
  v10[0] = v7;
  v10[1] = v8;
  if (v8 == 0) {
    return WarpArrow_Unknown2(a1 + 40, v10, a3);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  WarpArrow_Unknown2(a1 + 40, v10, a3);
  return std___1___shared_weak_count___release_weak(v8);
}

__int64 WarpChip_DeletingDestructor(__int64 a1)
{
  __int64* v2;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = game_map_WarpChip_vtable;
  v2 = GameData_2130190[0] + 2;
  v3 = *(_BYTE*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = GameData_2130190[0] + 2;
  v4 = fw_memory_g_heap_manager_ptr;
  if ((v3 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 64);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  v7 = *(_BYTE*)(a1 + 8);
  *(_QWORD*)a1 = v2;
  if ((v7 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 24);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
    }
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v10 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, a1);
}

#pragma GCC visibility pop
