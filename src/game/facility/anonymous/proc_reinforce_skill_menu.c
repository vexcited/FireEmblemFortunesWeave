#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_15740c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2f60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d3110(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_209a318;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_kVariableHubFacilityForced;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ProcReinforceSkillMenu_16d7120(_QWORD* a1, char a2);
__int64 ProcReinforceSkillMenu_16d73d0(__int64 a1, __int64 a2);
__int64 ProcReinforceSkillMenu_Unknown88(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_94cd60(_QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_ReinforceSkillMenuItem_vtable[])();
__int64
game_facility_anonymous_ProcReinforceSkillMenu_AddItemList_closure_Invoke(
    __int64 a1, unsigned int* a2);
__int64 Unit_6d09e0(__int64, __int64, __int64);
extern __int64 (*GameData_209a358[])();
__int64 game_facility_anonymous_ProcReinforceSkillMenu_AddItemList(__int64 a1,
                                                                   __int64 a2,
                                                                   __int64 a3);

__int64 ProcReinforceSkillMenu_16d7120(_QWORD* a1, char a2)
{
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(__int64 (**)(_QWORD*))(*a1 + 1112LL))(a1) != a1[133]) {
    if ((a2 & 1) == 0) {
    LABEL_9:
      v6 = true;
      goto LABEL_10;
    }
  LABEL_6:
    if (game_GameModeData_instance_ != 0) {
      v7 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48),
          &game_kVariableHubFacilityForced);
      if (v7 != 0) {
        v6 = *(_DWORD*)(v7 + 32) == 0;
        goto LABEL_10;
      }
    }
    goto LABEL_9;
  }
  v4 = (*(__int64 (**)(_QWORD*))(*a1 + 1120LL))(a1);
  v5 = a1[133];
  v6 = v4 != v5;
  if ((a2 & 1) != 0 && v4 != v5) {
    goto LABEL_6;
  }

LABEL_10:
  GameRoutine_1560070((void*)&v11, a1 + 106, "L_UnitInfo");
  result = v12;
  if (v12 != 0) {
    v9 = std___1___shared_weak_count_lock(v12);
    if (v9 != 0) {
      v10 = v9;
      if (v11 != 0) {
        GameRoutine_1572370(v11, v6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    result = v12;
    if (v12 != 0) {
      return std___1___shared_weak_count___release_weak(v12);
    }
  }
  return result;
}

__int64 ProcReinforceSkillMenu_16d73d0(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;

  *(_QWORD*)(a1 + 1064) = a2;
  v4 = (_QWORD*)*GameData_212dcd0;
  v5 = *(_QWORD**)(*GameData_212dcd0 + 48);
  v6 = *(_QWORD*)(*GameData_212dcd0 + 64);
  *(_QWORD*)(*GameData_212dcd0 + 56) = v5;
  if ((unsigned __int64)v5 >= v6) {
    v8 = v6 - (_QWORD)v5;
    v9 = v8 >> 2;
    if ((unsigned __int64)(v8 >> 2) <= 1) {
      v9 = 1;
    }
    if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF8LL) {
      v10 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v10 = v9;
    }
    if (v10 >> 61 != 0) {
      GameRoutine_60a210(a1);
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    *v12 = a2;
    v7 = v12 + 1;
    v4[6] = v12;
    v4[7] = v12 + 1;
    v4[8] = &v12[v10];
    if (v5 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v13, v5);
    }
  }
  else {
    *v5 = a2;
    v7 = v5 + 1;
  }
  v4[7] = v7;
  _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(a1, *(_QWORD*)(a1 + 1064));
  GameRoutine_1560070((void*)&v18, a1 + 848, "L_UnitInfo");
  if (v19 != 0) {
    v14 = *(_QWORD*)(a1 + 1064);
    v15 = std___1___shared_weak_count_lock(v19);
    if (v15 != 0) {
      v16 = v15;
      if (v18 != 0) {
        GameRoutine_15740c0(v18, v14, 0, 0, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak(v16);
      }
    }
    if (v19 != 0) {
      std___1___shared_weak_count___release_weak(v19);
    }
  }
  return game_menu_BasicMenu_Unknown16defa0(a1);
}

__int64 ProcReinforceSkillMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_209a318, 0);
    if (result != 0) {
      v3 = result;
      if ((*(_BYTE*)(result + 102) & 0x10) != 0) {
        ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_After", 0);
        GameRoutine_1560070((void*)&v15, a1 + 848, "L_InfoDetail_Before");
        GameRoutine_15d2f60(&v15, v3 + 96, *(_QWORD*)(v3 + 88), 0);
        result = v16;
        if (v16 != 0) {
          return std___1___shared_weak_count___release_weak(result);
        }
      }
      else {
        ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_After", 1);
        GameRoutine_1560070((void*)&v13, a1 + 848, "L_InfoDetail_Before");
        v4 = GameData_212c880[0];
        GameRoutine_15d2f60(
            &v13,
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*(_DWORD*)(v3 + 96) & 0xFFF)) +
                       24LL) +
                8LL,
            *(_QWORD*)(v3 + 88), 0);
        if (v14 != 0) {
          std___1___shared_weak_count___release_weak(v14);
        }
        GameRoutine_1560070((void*)&v9, a1 + 848, "L_InfoDetail_After");
        if (v10 != 0 && (v5 = std___1___shared_weak_count_lock(v10)) != 0) {
          v6 = v5;
          v7 = 0;
          v11 = v9;
          v12 = v5;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                    memory_order_relaxed);
        }
        else {
          v6 = 0;
          v11 = 0;
          v12 = 0;
          v7 = 1;
        }
        v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                                   8LL * (*(_DWORD*)(v3 + 96) & 0xFFF)) +
                        24LL);
        GameRoutine_15d3110(&v11, v8 + 12, v8 + 8, *(_QWORD*)(v3 + 88), 0);
        if (v12 != 0) {
          std___1___shared_weak_count___release_weak(v12);
        }
        if ((v7 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                              0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
        result = v10;
        if (v10 != 0) {
          return std___1___shared_weak_count___release_weak(result);
        }
      }
    }
  }
  return result;
}

__int64 game_facility_anonymous_ProcReinforceSkillMenu_AddItemList(__int64 a1,
                                                                   __int64 a2,
                                                                   __int64 a3)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v3 = *(_QWORD*)(a1 + 1064);
  v6_.v6[0] = GameData_209a358;
  v6_.v6[1] = a1;
  v6_.v7 = v6_.v6;
  Unit_6d09e0(v3, (__int64)v6_.v6, a3);
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

__int64

game_facility_anonymous_ProcReinforceSkillMenu_AddItemList_closure_Invoke(
    __int64 a1, unsigned int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112, 16, 0);
  v5 = *(_QWORD*)(v2 + 1064);
  v6 = v4;
  v7 = GameRoutine_94cd60(v5, a2);
  *(_WORD*)(v6 + 16) = 0;
  *(_DWORD*)(v6 + 40) = 0;
  LOBYTE(v8) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 88) = v5;
  *(_WORD*)(v6 + 80) = 257;
  *(_QWORD*)v6 = game_facility_anonymous_ReinforceSkillMenuItem_vtable;
  *(_QWORD*)(v6 + 8) = 0;
  *(_BYTE*)(v6 + 82) = 1;
  v9 = *a2;
  *(_DWORD*)(v6 + 96) = v9;
  *(_DWORD*)(v6 + 100) = v7;
  v10 = *(_QWORD*)(v5 + 1168);
  if (((v9 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v5 + 1176) - v10) >> 2) {
    v8 = (*(_DWORD*)(v10 + 4 * ((v9 >> 5) & 0x7F)) >> v9) & 1;
  }
  *(_BYTE*)(v6 + 104) = v8;
  return BasicMenuCursor_16e0c00(v2, v6);
}

#pragma GCC visibility pop
