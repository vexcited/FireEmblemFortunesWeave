#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 WarpArrow_Setup(__int64, __int64*, int);
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
__int64 GameRoutine_1126110(__int64, __int64*);
__int64 GameRoutine_1126210(__int64, __int64*);
__int64 WarpChip_1126c40_alt1(_QWORD, _QWORD,
                              _QWORD) __asm__("WarpChip_1126c40");
__int64 WarpChip_1126960(__int64 result, __int64* a2, int a3, int a4);

__int64 WarpChip_1126960(__int64 result, __int64* a2, int a3, int a4)
{
  __int64 v5;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  int v20;
  int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31[2];
  _QWORD v32[2];
  __int64 v33[2];
  _QWORD v34[2];
  _QWORD v35[2];
  _QWORD v36[2];
  _QWORD v37[2];
  _QWORD v38[2];

  if (*(_BYTE*)(result + 153) != 1) {
    return result;
  }
  v5 = result;
  if (*(_DWORD*)(result + 144) == a3 && *(_DWORD*)(result + 148) == a4) {
    v7 = *(_QWORD*)(result + 112);
    if (v7 != 0 && (*(unsigned __int8*)(result + 92) |
                    *(unsigned __int8*)(v7 + 92)) == 0) {
      v8 = a2[1];
      v9 = a3;
      v10 = a4;
      v38[0] = *a2;
      v38[1] = v8;
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        WarpChip_1126c40_alt1(result, v38, 1);
        std___1___shared_weak_count___release_weak(v8);
      }
      else {
        WarpChip_1126c40_alt1(result, v38, 1);
      }
      result = *(_QWORD*)(v5 + 112);
      a4 = v10;
      a3 = v9;
      if (result != 0) {
        v11 = a2[1];
        v37[0] = *a2;
        v37[1] = v11;
        if (v11 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                    memory_order_relaxed);
          WarpChip_1126c40_alt1(result, v37, 1);
          result = std___1___shared_weak_count___release_weak(v11);
        }
        else {
          result = WarpChip_1126c40_alt1(result, v37, 1);
        }
        a4 = v10;
        a3 = v9;
      }
      v12 = *(_QWORD*)(v5 + 120);
      if (v12 != 0 && *(_QWORD*)(v12 + 128) == 0) {
        v30 = *(_QWORD*)(v5 + 112);
        if (v30 == 0) {
          goto LABEL_25;
        }
        v13 = a2[1];
        v36[0] = *a2;
        v36[1] = v13;
        if (v13 != 0) {
          v14 = v30 + 40;
          v15 = v36;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
          goto LABEL_21;
        }
        v16 = v30 + 40;
        v17 = v36;
      }
      else {
        v13 = a2[1];
        v35[0] = *a2;
        v35[1] = v13;
        if (v13 != 0) {
          v14 = v5 + 40;
          v15 = v35;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
        LABEL_21:
          GameRoutine_1126110(v14, v15);
          result = std___1___shared_weak_count___release_weak(v13);
        LABEL_24:
          a4 = v10;
          a3 = v9;
          goto LABEL_25;
        }
        v16 = v5 + 40;
        v17 = v35;
      }
      result = GameRoutine_1126110(v16, v17);
      goto LABEL_24;
    }
  }
LABEL_25:
  v18 = *(_QWORD*)(v5 + 112);
  if (v18 != 0 && (*(_DWORD*)(v5 + 144) != a3 || *(_DWORD*)(v5 + 148) != a4)) {
    v21 = *(_DWORD*)(v18 + 144);
    v20 = *(_DWORD*)(v18 + 148);
    if (v21 != a3 || v20 != a4) {
      v23 = a2[1];
      v34[0] = *a2;
      v34[1] = v23;
      if (v23 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                                  memory_order_relaxed);
        WarpChip_1126c40_alt1(v5, v34, 0);
        std___1___shared_weak_count___release_weak(v23);
      }
      else {
        WarpChip_1126c40_alt1(v5, v34, 0);
      }
      v24 = a2[1];
      v33[0] = *a2;
      v33[1] = v24;
      if (v24 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_1126210(v5 + 40, v33);
        std___1___shared_weak_count___release_weak(v24);
      }
      else {
        GameRoutine_1126210(v5 + 40, v33);
      }
      v25 = *(_QWORD*)(v5 + 112);
      v26 = a2[1];
      v32[0] = *a2;
      v32[1] = v26;
      if (v26 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 16), 1u,
                                  memory_order_relaxed);
        WarpChip_1126c40_alt1(v25, v32, 0);
        std___1___shared_weak_count___release_weak(v26);
      }
      else {
        WarpChip_1126c40_alt1(v25, v32, 0);
      }
      v27 = *(_QWORD*)(v5 + 112);
      v28 = *a2;
      v29 = a2[1];
      v31[0] = v28;
      v31[1] = v29;
      if (v29 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_1126210(v27 + 40, v31);
        return std___1___shared_weak_count___release_weak(v29);
      }
      else {
        return GameRoutine_1126210(v27 + 40, v31);
      }
    }
  }
  return result;
}

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
    return WarpArrow_Setup(a1 + 40, v10, a3);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  WarpArrow_Setup(a1 + 40, v10, a3);
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
