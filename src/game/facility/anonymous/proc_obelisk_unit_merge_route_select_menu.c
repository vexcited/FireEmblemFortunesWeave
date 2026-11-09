#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_158ac40(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_158aec0(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_158b280(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_158b3c0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_158ca00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_158cac0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e6880(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a06060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_9d1500(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d3d10(_QWORD, _QWORD);
__int64 GameRoutine_9d3e90(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fb8dc8[])();
extern __int64 (*GameData_1fb8ed8[])();
extern __int64 GameData_1fb8da0;
extern __int64 GameData_21f81b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e008[9];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown88(__int64 a1);
__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown100(__int64 a1);
__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown104(__int64 a1, char a2);
__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown106(__int64 a1, char a2);

__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned int v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  char* v38;
  int* v39;
  _QWORD v40[2];
  int v41;
  int v42;

  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_1fb8da0, 0);
  if (result == 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 88);
  v4 = *(unsigned __int8*)(result + 2328);
  v5 = *(_QWORD**)(a1 + 1184);
  v6 = result;
  v7 = *(_QWORD*)(a1 + 1200);
  v41 = 0;
  v40[0] = 0;
  v40[1] = 0;
  *(_QWORD*)(a1 + 1192) = v5;
  if ((unsigned __int64)v5 >= v7) {
    v9 = v7 - (_QWORD)v5;
    v10 = v9 >> 2;
    if ((unsigned __int64)(v9 >> 2) <= 1) {
      v10 = 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    if (v11 >> 61 != 0) {
      GameRoutine_60a210(result);
    }
    v12 = fw_memory_g_heap_manager_ptr;
    v13 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
    v14 = &v13[v11];
    *v13 = 0;
    v8 = v13 + 1;
    *(_QWORD*)(a1 + 1184) = v13;
    *(_QWORD*)(a1 + 1192) = v13 + 1;
    *(_QWORD*)(a1 + 1200) = v14;
    if (v5 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v15, v5);
    }
  }
  else {
    *v5 = 0;
    v8 = v5 + 1;
  }
  *(_QWORD*)(a1 + 1192) = v8;
  v42 = 0;
  if (v4 != 0) {
    GameRoutine_158ac40(&v37, 2, v3, v6 + 96);
    HIDWORD(v40[0]) = (unsigned __int64)(v38 - v37) >> 3;
    if (v37 != nullptr) {
      v38 = v37;
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v37);
    }
    GameRoutine_158ac40(&v37, 1, v3, v6 + 96);
    LODWORD(v40[1]) = (unsigned __int64)(v38 - v37) >> 3;
    if (v37 != nullptr) {
      v38 = v37;
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v37);
    }
    GameRoutine_158aec0(&v37, v3, v6 + 96);
    v41 = (unsigned __int64)(v38 - v37) >> 3;
    if (v37 != nullptr) {
      v38 = v37;
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v37);
    }
    GameRoutine_158b3c0(&v37, v3, v6 + 96);
    HIDWORD(v40[1]) = (unsigned __int64)(v38 - v37) >> 3;
    if (v37 != nullptr) {
      v38 = v37;
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v37);
    }
    GameRoutine_1560070(&v35, a1 + 848, "L_CompareInfo");
    GameRoutine_158cac0(&v35, v3, v6 + 96);
    if (v36 != 0) {
      std___1___shared_weak_count___release_weak(v36);
    }
    v37 = (char*)v40;
    v38 = (char*)a1;
    v39 = &v42;
    GameRoutine_9d3d10(&v37, 1);
    GameRoutine_9d3d10(&v37, 2);
    GameRoutine_9d3d10(&v37, 3);
    GameRoutine_9d3d10(&v37, 4);
  }
  else {
    GameRoutine_1560070(&v33, a1 + 848, "L_CompareInfo");
    GameRoutine_158ca00(&v33, v3, 0);
    if (v34 != 0) {
      std___1___shared_weak_count___release_weak(v34);
    }
  }
  GameRoutine_1560070(&v37, a1 + 848, "L_CompareInfo");
  if (v38 != nullptr) {
    v20 = std___1___shared_weak_count_lock(v38);
    v21 = v37;
    if (v38 != nullptr) {
      std___1___shared_weak_count___release_weak(v38);
    }
    if (v20 != 0 && v21 != nullptr) {
      GameRoutine_158b280(&v37, v3, v6 + 96);
      if (v38 == v37) {
        v22 = 0;
      }
      else {
        v22 = v4;
      }
      ui_LayoutAccessor_SetPaneVisible(v21, "A_ClassExp", v22);
      if (v37 != nullptr) {
        v38 = v37;
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v37);
      }
      goto LABEL_50;
    }
    if (v20 != 0) {
    LABEL_50:
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v20);
      }
    }
  }
  *(_DWORD*)(a1 + 1216) =
      ((*(_QWORD*)(a1 + 1192) - *(_QWORD*)(a1 + 1184)) >> 3) - 1;
  v24 = v42;
  *(_DWORD*)(a1 + 1220) = v42;
  *(_DWORD*)(a1 + 1224) = v24;
  GameRoutine_1560070(&v31, a1 + 848, "L_CompareInfo/L_PageTab");
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  if (v32 != 0) {
    v26 = std___1___shared_weak_count_lock(v32);
    if (v26 != 0) {
      v27 = v31;
      v28 = v26;
      if (v31 != 0) {
        *(_DWORD*)(a1 + 1256) = 1;
        v29 = v32;
        if (v32 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                    memory_order_relaxed);
        }
        v30 = *(_QWORD*)(a1 + 1320);
        *(_QWORD*)(a1 + 1312) = v27;
        *(_QWORD*)(a1 + 1320) = v29;
        if (v30 != 0) {
          std___1___shared_weak_count___release_weak(v30);
        }
        GameRoutine_16e6880(a1 + 1216, v25, 4, 5);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        std___1___shared_weak_count___release_weak(v28);
      }
    }
    if (v32 != 0) {
      std___1___shared_weak_count___release_weak(v32);
    }
  }
  return GameRoutine_9d3e90(a1);
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown100(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  _BYTE v15[20];
  __int64 v16;
  _BYTE* v17;
  _QWORD* v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  int v24;
  int v25;
  int v26;
  _QWORD v27[4];
  _QWORD* v28;
  _QWORD v29[4];
  _QWORD* v30;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = a1;
  v4 = __dynamic_cast(v2, GameData_212e008[0], &GameData_1fb8da0, 0);
  if (v4 == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4) & 1) == 0) {
    return 1;
  }
  *(_QWORD*)v15 = GameData_1fb8dc8;
  *(_QWORD*)&v15[8] = v3;
  v30 = v29;
  v28 = v27;
  v17 = v15;
  v29[0] = GameData_1fb8ed8;
  v27[0] = GameData_1fb8ed8;
  v5 = GameRoutine_9d1500(v3, "MID_UnitMergeMenu_Confirm",
                          "MID_Shop_Consumption", v15, v29, v27);
  if (v28 == v27) {
    v6 = 32;
  }
  else {
    if (v28 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v28 + v6))((__int64)v28);

LABEL_11:
  if (v30 == v29) {
    v8 = 32;
  }
  else {
    if (v30 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v30 + v8))((__int64)v30);

LABEL_16:
  if (v17 == v15) {
    v9 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_21;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v17 + v9))((__int64)v17);

LABEL_21:
  if (game_GameModeData_instance_ != 0 &&
      (v10 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f81b0)) !=
          0) {
    v11 = *(_DWORD*)(v10 + 32);
  }
  else {
    v11 = 0;
  }
  *(_DWORD*)v15 = 3;
  *(_QWORD*)&v15[4] = *game_g_empty_item_ptr;
  if (*(_BYTE*)GameData_212ceb0 != 0) {
    v12 = *GameData_212ceb0;
  }
  else {
    v12 = 0;
  }
  *(_QWORD*)&v15[12] = v12;
  WORD1(v16) = 0;
  HIDWORD(v16) = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = nullptr;
  v18 = &v19;
  v19 = nullptr;
  GameRoutine_930b90(&v16, GameData_212c8b0[0]);
  v24 = 0;
  v25 = v11;
  v26 = 0;
  GameRoutine_1a06060(v5 + 1544, v15, 0);
  LODWORD(v17) = 0;
  v16 = 0;
  if ((v21 & 1) != 0) {
    *v23 = 0;
    v22 = 0;
  }
  else {
    LOWORD(v21) = 0;
  }
  GameRoutine_6e3b50(&v18, v19);
  v19 = nullptr;
  v20 = 0;
  v18 = &v19;
  if ((v21 & 1) != 0) {
    v13 = v23;
    if (v23 != nullptr) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v23);
      v13 = v19;
    }
  }
  else {
    v13 = nullptr;
  }
  GameRoutine_6e3b50(&v18, v13);
  return 12;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown104(__int64 a1, char a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_1fb8da0, 0);
    if (result != 0) {
      if (*(_BYTE*)(result + 2328) == 1 &&
          (game_menu_PageTab_Move(a1 + 1216, 0xFFFFFFFFLL, a2 & 1) & 1) != 0) {
        v5 = *(_QWORD*)(a1 + 1232);
        v6 = *(int*)(a1 + 1220);
        if (v6 < (*(_QWORD*)(a1 + 1240) - v5) >> 2) {
          v6 = *(int*)(v5 + 4 * v6);
        }
        *(_DWORD*)(a1 + 1344) = *(_DWORD*)(*(_QWORD*)(a1 + 1184) + 8 * v6);
        GameRoutine_9d3e90(a1);
        return 13;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown106(__int64 a1, char a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_1fb8da0, 0);
    if (result != 0) {
      if (*(_BYTE*)(result + 2328) == 1 &&
          (game_menu_PageTab_Move(a1 + 1216, 1, a2 & 1) & 1) != 0) {
        v5 = *(_QWORD*)(a1 + 1232);
        v6 = *(int*)(a1 + 1220);
        if (v6 < (*(_QWORD*)(a1 + 1240) - v5) >> 2) {
          v6 = *(int*)(v5 + 4 * v6);
        }
        *(_DWORD*)(a1 + 1344) = *(_DWORD*)(*(_QWORD*)(a1 + 1184) + 8 * v6);
        GameRoutine_9d3e90(a1);
        return 13;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
