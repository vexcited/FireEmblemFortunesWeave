#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_158ac40(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD);
__attribute__((swiftcall)) void GameRoutine_158aec0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_158b280(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_158b3c0(PSEUDO_X8, _QWORD, _QWORD);
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
__int64 Alignment_56b600(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 GameRoutine_156c5d0(__int64, __int64, char);
__int64 GameRoutine_1589ce0(__int64 result, __int64, __int64, char, char,
                            unsigned int);
__int64 GameRoutine_158b720(__int64, _QWORD*, _QWORD*);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_6c3980(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ab40(__int64*, __int64, __int64,
                                                    unsigned int);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158c0d0(__int64*);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_Unknown6c8630(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*GameData_204e418[])();
extern __int64 (*GameData_204e498[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ab40(__int64* a1, __int64 a2,
                                                    __int64 a3,
                                                    unsigned int a4);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158c0d0(__int64* a1);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158c260(__int64* a1, __int64 a2,
                                                    __int64 a3, unsigned int a4,
                                                    char a5);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ca00(__int64* a1, __int64 a2,
                                                    unsigned int a3);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158cac0(_QWORD* a1, _QWORD* a2,
                                                    _QWORD* a3);
__int64 GameRoutine_1384630(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d3c00(_QWORD);
__int64 UnitVariables_6e2ce0(_QWORD, _QWORD, _QWORD);
__int64 UnitVariables_6e31a0(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fb8e38[])();
__int64
game_facility_anonymous_ProcObeliskUnitMergeRouteSelectMenu_confirm_dialog(
    __int64 a1);
__int64
game_facility_anonymous_ProcObeliskUnitMergeRouteSelectMenu_confirm_dialog_closure_Invoke(
    __int64 a1, __int64* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_157a1e0(__int64*, unsigned int*, __int64, __int64, __int64,
                            __int64, __int64);
__int64 GameRoutine_6e3b50_alt1(__int64 result,
                                _QWORD*) __asm__("GameRoutine_6e3b50");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 Pane_58f8a0(__int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
extern _UNKNOWN* GameData_212da30;
extern __int64 GameData_21caa2c;
extern __int64 game_g_empty_item;
__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown84(__int64 a1);
__int64 ProcObeliskUnitMergeRouteSelectMenu_9d3c00(__int64 a1);

__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown84(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _BYTE v13[20];
  _QWORD v14[2];
  _QWORD** v15;
  struct {
    _QWORD* v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    _BYTE* v20;
    int v21;
    int v22;
    int v23;
  } v16_;

  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Stock", 1);
  LayoutAccessor_1560070((void*)(v13), (__int64*)(a1 + 848),
                         (__int64)"L_StockItem");
  result = *(_QWORD*)&v13[8];
  if (*(_QWORD*)&v13[8] != 0) {
    v3 = std___1___shared_weak_count_lock(*(_QWORD*)&v13[8]);
    v4 = *(__int64**)v13;
    result = *(_QWORD*)&v13[8];
    if (*(_QWORD*)&v13[8] != 0) {
      result = std___1___shared_weak_count___release_weak(*(_QWORD*)&v13[8]);
    }
    if (v3 != 0 && v4 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      if (game_GameModeData_instance_ != 0 &&
          (v5 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&GameData_21f81b0)) != 0) {
        v6 = *(_DWORD*)(v5 + 32);
      }
      else {
        v6 = 0;
      }
      *(_DWORD*)v13 = 3;
      *(_QWORD*)&v13[4] = game_g_empty_item;
      if ((_BYTE)GameData_21caa2c != 0) {
        v7 = GameData_21caa2c;
      }
      else {
        v7 = 0;
      }
      *(_QWORD*)&v13[12] = v7;
      WORD1(v14[0]) = 0;
      HIDWORD(v14[0]) = 0;
      v16_.v17 = 0;
      v16_.v18 = 0;
      v16_.v19 = 0;
      v16_.v20 = nullptr;
      v15 = &v16_.v16;
      v16_.v16 = nullptr;
      GameRoutine_930b90_alt1((__int64)v14, (__int64)GameData_212c8b0[0]);
      v16_.v21 = 0;
      v16_.v22 = v6;
      v16_.v23 = 0;
      v8 = std___1___shared_weak_count_lock(v3);
      if (v8 != 0) {
        v10 = v8;
        GameRoutine_157a1e0(v4, (unsigned int*)v13, 1, 0, 1, 0, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
      }
      LODWORD(v14[1]) = 0;
      v14[0] = 0;
      if ((v16_.v18 & 1) != 0) {
        *v16_.v20 = 0;
        v16_.v19 = 0;
      }
      else {
        LOWORD(v16_.v18) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v15, v16_.v16);
      v16_.v16 = nullptr;
      v16_.v17 = 0;
      v15 = &v16_.v16;
      if ((v16_.v18 & 1) != 0) {
        v11 = v16_.v20;
        if (v16_.v20 != nullptr) {
          v12 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
          v11 = v16_.v16;
        }
      }
      else {
        v11 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v15, v11);
      std___1___shared_weak_count___release_weak(v3);
      result = ProcObeliskUnitMergeRouteSelectMenu_9d3c00(a1);
    }
    else if (v3 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  return result;
}

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
    GameRoutine_158ac40((void*)&v37, 2, v3, v6 + 96);
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
    GameRoutine_158ac40((void*)&v37, 1, v3, v6 + 96);
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
    GameRoutine_158aec0((void*)&v37, v3, v6 + 96);
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
    GameRoutine_158b3c0((void*)&v37, v3, v6 + 96);
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
    GameRoutine_1560070((void*)&v35, a1 + 848, "L_CompareInfo");
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
    GameRoutine_1560070((void*)&v33, a1 + 848, "L_CompareInfo");
    GameRoutine_158ca00(&v33, v3, 0);
    if (v34 != 0) {
      std___1___shared_weak_count___release_weak(v34);
    }
  }
  GameRoutine_1560070((void*)&v37, a1 + 848, "L_CompareInfo");
  if (v38 != nullptr) {
    v20 = std___1___shared_weak_count_lock(v38);
    v21 = v37;
    if (v38 != nullptr) {
      std___1___shared_weak_count___release_weak(v38);
    }
    if (v20 != 0 && v21 != nullptr) {
      GameRoutine_158b280((void*)&v37, v3, v6 + 96);
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
  GameRoutine_1560070((void*)&v31, a1 + 848, "L_CompareInfo/L_PageTab");
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

__int64 ProcObeliskUnitMergeRouteSelectMenu_9d3c00(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64* v3;
  char* v5;
  int v6;
  __int64 v7;
  int* v8;
  int v9;
  struct {
    __int64* v10;
    __int64 v11;
  } v10_;

  LayoutAccessor_1560070((void*)(&v10_.v10), (__int64*)(a1 + 848),
                         (__int64)"L_StockItem");
  result = v10_.v11;
  if (v10_.v11 != 0) {
    v2 = std___1___shared_weak_count_lock(v10_.v11);
    v3 = v10_.v10;
    result = v10_.v11;
    if (v10_.v11 != 0) {
      result = std___1___shared_weak_count___release_weak(v10_.v11);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        return result;
      }
      goto LABEL_20;
    }
    v5 = (char*)GameData_212da30;
    if (game_GameModeData_instance_ != 0) {
      v6 = *(_DWORD*)(game_GameModeData_instance_ + 80);
      v7 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_21f81b0);
      if (v7 != 0) {
        if (v6 < *(_DWORD*)(v7 + 32)) {
        LABEL_14:
          v8 = (int*)(v5 + 60);
        LABEL_17:
          v9 = *v8;
          result = ui_LayoutAccessor_FindTextBox_alt1(v3, (__int64)"T_Num");
          if (result != 0) {
            result = Pane_58f8a0(result);
            if (result != 0) {
              *(_DWORD*)(result + 12) = v9;
            }
          }
        LABEL_20:
          if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
            return std___1___shared_weak_count___release_weak(v2);
          }
          return result;
        }
      }
      else if (v6 < 0) {
        goto LABEL_14;
      }
    }
    v8 = (int*)(v5 + 36);
    goto LABEL_17;
  }
  return result;
}

__int64

game_facility_anonymous_ProcObeliskUnitMergeRouteSelectMenu_confirm_dialog(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[4];
  _QWORD* v21;
  __int64 v22;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 336);
  if (v2 == 0) {
    return 2;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_1fb8da0, 0);
  if (v3 == 0) {
    return 2;
  }
  v4 = v3;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_9;
  }
  v5 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  v6 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   &GameData_21f81b0);
  if (v6 != 0) {
    v7 = *(_DWORD*)(v6 + 32);
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
    LABEL_6:
      v9 = (v5 - v7) & ~((v5 - v7) >> 31);
      if (v9 >= 99999) {
        v9 = 99999;
      }
      *(_DWORD*)(v8 + 80) = v9;
    }
  }
  else {
    v7 = 0;
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      goto LABEL_6;
    }
  }
LABEL_9:
  UnitVariables_6e2ce0(*(_QWORD*)(v4 + 88), *(_QWORD*)(v4 + 2320), 0);
  *(_BYTE*)(v4 + 82) = 0;
  v10 = v20;
  *(_DWORD*)(v1 + 1344) = 0;
  v12 = *(_QWORD*)(v1 + 232);
  v11 = *(_QWORD*)(v1 + 240);
  v20[0] = GameData_1fb8e38;
  v21 = v20;
  if (v11 == v12) {
    goto LABEL_20;
  }
  v13 = 0;
  v14 = GameData_212e008[0];
  do {
    v15 = *(_QWORD*)(v12 + 8 * v13);
    if (v15 != 0) {
      v16 = __dynamic_cast(v15, v14, &GameData_1fb8da0, 0);
      if (v16 == 0) {
        goto LABEL_11;
      }
      v22 = v16;
      if (v21 == nullptr) {
        GameRoutine_60a310(0, v17);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v21 + 48LL))(v21, &v22) & 1) !=
          0) {
        break;
      }
      v12 = *(_QWORD*)(v1 + 232);
      v11 = *(_QWORD*)(v1 + 240);
    }
  LABEL_11:
    ++v13;
  } while (v13 < (v11 - v12) >> 3);
  v10 = v21;
  if (v21 != v20) {
    if (v21 != nullptr) {
      v18 = 40;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
LABEL_20:
  v18 = 32;
LABEL_21:
  (*(void (**)(_QWORD*))(*v10 + v18))(v10);
LABEL_22:
  GameRoutine_9d3c00(v1);
  (*(void (**)(__int64))(*(_QWORD*)v1 + 704LL))(v1);
  GameRoutine_1384630(v1, v4 + 96, *(_QWORD*)(v4 + 88));
  return 2;
}

__int64

game_facility_anonymous_ProcObeliskUnitMergeRouteSelectMenu_confirm_dialog_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 88);
  if (v3 != 0) {
    LOBYTE(v3) = UnitVariables_6e31a0(v3, *(_QWORD*)(v2 + 2320), 0);
  }
  *(_BYTE*)(v2 + 2328) = v3 & 1;
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(_DWORD*)(game_GameModeData_instance_ + 80);
    v6 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f81b0);
    if (v6 != 0) {
      v4 = *(_DWORD*)(v6 + 32);
    }
    else {
      v4 = 0;
    }
  }
  else {
    v5 = 0;
  }
  *(_BYTE*)(v2 + 82) = (v5 >= v4) & *(_BYTE*)(v2 + 2328);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 96LL))(v2);
  return 0;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_158ab40(__int64* a1, __int64 a2,
                                                    __int64 a3, unsigned int a4)
{
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[2];
  _BYTE v14[400];
  __int64 v15;

  GameRoutine_6c2b50(v14);
  GameRoutine_6c3980(v14, a2);
  v8 = (_QWORD*)game_Unit_GetJob(v14);
  if (*v8 != *(_QWORD*)game_Unit_GetJob(a3)) {
    v9 = game_Unit_GetJob(a3);
    if (v15 != v9) {
      v15 = v9;
      game_Unit_Unknown6c8630(v14);
    }
  }
  v10 = *a1;
  v11 = a1[1];
  v13[0] = v10;
  v13[1] = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1589ce0((__int64)v13, (__int64)v14, a3, 0, 0, a4);
    std___1___shared_weak_count___release_weak(v11);
  }
  else {
    GameRoutine_1589ce0((__int64)v13, (__int64)v14, a3, 0, 0, a4);
  }
  return game_Unit_Destroy_Unit(v14);
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_158c0d0(__int64* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  result = a1[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *a1;
      v4 = result;
      if (v3 != 0) {
        LayoutAccessor_1562cf0(v3, (__int64)"Page_Mastery");
        v12 = -1;
        v13 = -1;
        v14 = -1;
        v15 = -1;
        v5 = *msg_MessageManager_instance__ptr[0];
        v16 = -1;
        v17 = -1;
        v18 = -1;
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v22 = -1;
        v23 = -1;
        v9[0] = GameData_212e348 + 2;
        v9[1] = 0xFFFF0001FFFF0000LL;
        v9[2] = 0xFFFF0004FFFF0002LL;
        v9[3] = 0xFFFF0006FFFF0005LL;
        v24 = 8;
        v10 = -65529;
        v11 = -65528;
        v6 = GameRoutine_a4dbe0(v5, "MID_Sys_SkillLv", 0, v9);
        if (v6 != 0) {
          v7 = v6;
          v8 = ui_LayoutAccessor_FindTextBox(v3, "T_Title");
          if (v8 != 0) {
            GameRoutine_156c5d0(v8, v7, 0);
          }
        }
        ui_LayoutAccessor_SetPaneVisible(v3, "L_PageTab", 0);
        ui_LayoutAccessor_SetPaneVisible(v3, "N_PageHelp", 0);
        result = ui_LayoutAccessor_SetPaneVisible(v3, "A_Get_Txt", 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_158c260(__int64* a1, __int64 a2,
                                                    __int64 a3, unsigned int a4,
                                                    char a5)
{
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  _QWORD* v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  _BOOL8 v59;
  _BOOL4 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68[2];
  __int64 v69[2];
  _QWORD v70[2];
  _QWORD v71[4];
  _QWORD* v72;
  __int64 v73;

  if ((a5 & 1) != 0) {
    v8 = a1[1];
    v69[0] = *a1;
    v69[1] = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      ProcObeliskUnitMergeRouteSelectMenu_158ab40(v69, a2, a3, a4);
    LABEL_6:
      std___1___shared_weak_count___release_weak(v8);
      goto LABEL_9;
    }
    ProcObeliskUnitMergeRouteSelectMenu_158ab40(v69, a2, a3, a4);
  }
  else {
    v8 = a1[1];
    v70[0] = *a1;
    v70[1] = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1589ce0((__int64)v70, a2, a3, 0, 0, a4);
      goto LABEL_6;
    }
    GameRoutine_1589ce0((__int64)v70, a2, a3, 0, 0, a4);
  }

LABEL_9:
  v9 = a1[1];
  v68[0] = *a1;
  v68[1] = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    ProcObeliskUnitMergeRouteSelectMenu_158c0d0(v68);
    std___1___shared_weak_count___release_weak(v9);
    result = a1[1];
    if (result == 0) {
      return result;
    }
  }
  else {
    ProcObeliskUnitMergeRouteSelectMenu_158c0d0(v68);
    result = a1[1];
    if (result == 0) {
      return result;
    }
  }
  result = std___1___shared_weak_count_lock(result);
  if (result != 0) {
    v18 = *a1;
    v19 = result;
    if (v18 == 0) {
    LABEL_72:
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        return std___1___shared_weak_count___release_weak(v19);
      }
      return result;
    }
    v20 = v71;
    v73 = 0;
    v71[0] = GameData_204e418;
    v71[1] = (char*)&v73 + 4;
    v21 = *(_BYTE*)(a3 + 1152);
    v72 = v71;
    if ((v21 & 2) != 0) {
      v22 = *(_QWORD*)(a3 + 1112);
      v23 = *(_QWORD*)(a3 + 1104);
      if ((int)((unsigned __int64)(v22 - v23) >> 2) < 1) {
        v20 = v71;
      }
      else {
        v24 = 0;
        v25 = 0;
        v26 = GameData_212c880[0];
        v27 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v27 + 64) +
                                   8LL * (*(_DWORD*)(v23 + v24) & 0xFFF)) +
                        104LL) == 1) {
            v28 = v72;
            if (v72 == nullptr) {
            LABEL_75:
              GameRoutine_60a310(v28, v11);
            }
            (*(void (**)(_QWORD*, __int64))(*v72 + 48LL))(v72, v23 + v24);
            v27 = *v26;
            v22 = *(_QWORD*)(a3 + 1112);
            v23 = *(_QWORD*)(a3 + 1104);
          }
          ++v25;
          v24 += 4;
        } while (v25 < (int)((unsigned __int64)(v22 - v23) >> 2));
        v20 = v72;
        if (v72 != v71) {
          if (v72 != nullptr) {
            v29 = 40;
          LABEL_27:
            (*(void (**)(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64))(*v20 + v29))(v20, v11, v12, v13,
                                                         v14, v15, v16, v17);
          }
          v30 = v71;
          v71[0] = GameData_204e498;
          v71[1] = &v73;
          v31 = *(_BYTE*)(a2 + 1152);
          v72 = v71;
          if ((v31 & 2) != 0) {
            v32 = *(_QWORD*)(a2 + 1112);
            v33 = *(_QWORD*)(a2 + 1104);
            if ((int)((unsigned __int64)(v32 - v33) >> 2) < 1) {
              v30 = v71;
            }
            else {
              v34 = 0;
              v35 = 0;
              v36 = GameData_212c880[0];
              v37 = *GameData_212c880[0];
              do {
                if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v37 + 64) +
                                         8LL *
                                             (*(_DWORD*)(v33 + v34) & 0xFFF)) +
                              104LL) == 1) {
                  v28 = v72;
                  if (v72 == nullptr) {
                    goto LABEL_75;
                  }
                  (*(void (**)(_QWORD*, __int64))(*v72 + 48LL))(v72, v33 + v34);
                  v37 = *v36;
                  v32 = *(_QWORD*)(a2 + 1112);
                  v33 = *(_QWORD*)(a2 + 1104);
                }
                ++v35;
                v34 += 4;
              } while (v35 < (int)((unsigned __int64)(v32 - v33) >> 2));
              v30 = v72;
              if (v72 != v71) {
                if (v72 != nullptr) {
                  v38 = 40;
                LABEL_40:
                  (*(void (**)(_QWORD*, __int64, __int64, __int64, __int64,
                               __int64, __int64, __int64))(*v30 + v38))(
                      v30, v11, v12, v13, v14, v15, v16, v17);
                }
                v40 = v73;
                v39 = HIDWORD(v73);
                v41 = v71;
                v73 = 0;
                v71[0] = GameData_204e418;
                v71[1] = (char*)&v73 + 4;
                v42 = *(_BYTE*)(a3 + 1152);
                v72 = v71;
                if ((v42 & 4) != 0) {
                  v43 = *(_QWORD*)(a3 + 1112);
                  v44 = *(_QWORD*)(a3 + 1104);
                  if ((int)((unsigned __int64)(v43 - v44) >> 2) < 1) {
                    v41 = v71;
                  }
                  else {
                    v45 = 0;
                    v46 = 0;
                    v47 = GameData_212c880[0];
                    v48 = *GameData_212c880[0];
                    do {
                      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v48 + 64) +
                                               8LL * (*(_DWORD*)(v44 + v45) &
                                                      0xFFF)) +
                                    104LL) == 2) {
                        v28 = v72;
                        if (v72 == nullptr) {
                          goto LABEL_75;
                        }
                        (*(void (**)(_QWORD*, __int64))(*v72 + 48LL))(
                            v72, v44 + v45);
                        v48 = *v47;
                        v43 = *(_QWORD*)(a3 + 1112);
                        v44 = *(_QWORD*)(a3 + 1104);
                      }
                      ++v46;
                      v45 += 4;
                    } while (v46 < (int)((unsigned __int64)(v43 - v44) >> 2));
                    v41 = v72;
                    if (v72 != v71) {
                      if (v72 != nullptr) {
                        v49 = 40;
                      LABEL_53:
                        (*(void (**)(_QWORD*, __int64, __int64, __int64,
                                     __int64, __int64, __int64,
                                     __int64))(*v41 + v49))(v41, v11, v12, v13,
                                                            v14, v15, v16, v17);
                      }
                      v50 = v71;
                      v71[0] = GameData_204e498;
                      v71[1] = &v73;
                      v51 = *(_BYTE*)(a2 + 1152);
                      v72 = v71;
                      if ((v51 & 4) != 0) {
                        v52 = *(_QWORD*)(a2 + 1112);
                        v53 = *(_QWORD*)(a2 + 1104);
                        if ((int)((unsigned __int64)(v52 - v53) >> 2) < 1) {
                          v50 = v71;
                        }
                        else {
                          v54 = 0;
                          v55 = 0;
                          v56 = GameData_212c880[0];
                          v57 = *GameData_212c880[0];
                          do {
                            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v57 + 64) +
                                                     8LL * (*(_DWORD*)(v53 +
                                                                       v54) &
                                                            0xFFF)) +
                                          104LL) == 2) {
                              v28 = v72;
                              if (v72 == nullptr) {
                                goto LABEL_75;
                              }
                              (*(void (**)(_QWORD*, __int64))(*v72 + 48LL))(
                                  v72, v53 + v54);
                              v57 = *v56;
                              v52 = *(_QWORD*)(a2 + 1112);
                              v53 = *(_QWORD*)(a2 + 1104);
                            }
                            ++v55;
                            v54 += 4;
                          } while (v55 <
                                   (int)((unsigned __int64)(v52 - v53) >> 2));
                          v50 = v72;
                          if (v72 != v71) {
                            if (v72 == nullptr) {
                            LABEL_67:
                              v59 = SHIDWORD(v73) > (int)v73 || v39 > v40;
                              v60 = SHIDWORD(v73) > (int)v73;
                              ui_LayoutAccessor_SetPaneVisible(v18, "A_Get_Txt",
                                                               v59);
                              ui_LayoutAccessor_SetPaneVisible(
                                  v18, "T_Get_Skill", v39 > v40);
                              ui_LayoutAccessor_SetPaneVisible(
                                  v18, "T_Get_CombatArts", v60);
                              result = ui_LayoutAccessor_FindAlignment(
                                  v18, "A_Get_Txt");
                              if (result != 0) {
                                result = Alignment_56b600(result, v61, v62, v63,
                                                          v64, v65, v66, v67);
                              }
                              goto LABEL_72;
                            }
                            v58 = 40;
                          LABEL_66:
                            (*(void (**)(_QWORD*, __int64, __int64, __int64,
                                         __int64, __int64, __int64, __int64))(
                                *v50 + v58))(v50, v11, v12, v13, v14, v15, v16,
                                             v17);
                            goto LABEL_67;
                          }
                        }
                      }
                      v58 = 32;
                      goto LABEL_66;
                    }
                  }
                }
                v49 = 32;
                goto LABEL_53;
              }
            }
          }
          v38 = 32;
          goto LABEL_40;
        }
      }
    }
    v29 = 32;
    goto LABEL_27;
  }
  return result;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_158ca00(__int64* a1, __int64 a2,
                                                    unsigned int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v8[2];
  _QWORD v9[2];

  v3 = a1[1];
  v9[0] = *a1;
  v9[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1589ce0((__int64)v9, a2, a2, 1, 0, a3);
    std___1___shared_weak_count___release_weak(v3);
  }
  else {
    GameRoutine_1589ce0((__int64)v9, a2, a2, 1, 0, a3);
  }
  v5 = *a1;
  v6 = a1[1];
  v8[0] = v5;
  v8[1] = v6;
  if (v6 == 0) {
    return ProcObeliskUnitMergeRouteSelectMenu_158c0d0(v8);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  ProcObeliskUnitMergeRouteSelectMenu_158c0d0(v8);
  return std___1___shared_weak_count___release_weak(v6);
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_158cac0(_QWORD* a1, _QWORD* a2,
                                                    _QWORD* a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  _QWORD v10[2];
  _QWORD v11[2];

  v3 = a1[1];
  v11[0] = *a1;
  v11[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1589ce0((__int64)v11, (__int64)a2, (__int64)a3, 0, 1, 0);
    std___1___shared_weak_count___release_weak(v3);
  }
  else {
    GameRoutine_1589ce0((__int64)v11, (__int64)a2, (__int64)a3, 0, 1, 0);
  }
  v7 = *a1;
  v8 = a1[1];
  v10[0] = v7;
  v10[1] = v8;
  if (v8 == 0) {
    return GameRoutine_158b720((__int64)v10, a2, a3);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  GameRoutine_158b720((__int64)v10, a2, a3);
  return std___1___shared_weak_count___release_weak(v8);
}

#pragma GCC visibility pop
