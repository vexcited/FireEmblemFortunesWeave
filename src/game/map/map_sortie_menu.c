#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_19fc5c0(_QWORD, _QWORD, float);
__int64 GameRoutine_763df0(_QWORD);
__int64 GameRoutine_871660(__int64, __int64);
__int64 Situation_763f30(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212ce90[3];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 MapSortieMenu_872680(_BYTE* a1);
__int64 MapSortieMenu_8728a0(__int64 a1);
__int64 MapSortieMenu_872a70(_QWORD* a1);
__int64 MapSortieMenu_Unknown143(__int64 a1, __int64* a2);
__int64 MapSortieMenu_Unknown112(__int64 a1);

__int64 MapSortieMenu_872680(_BYTE* a1)
{
  __int64 v2;
  int v3;
  const char* v4;
  _QWORD v6[2];
  char v7;
  int v8;
  int v9;
  char v10;
  __int64 v11;

  if ((a1[1296] & 1) != 0) {
    GameRoutine_1562680(a1 + 848, "Sortie_HintOn", 1.0);
    v2 = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp");
    v3 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
    v4 = "MID_KeyHelp_BattleRule";
  }
  else {
    GameRoutine_1562680(a1 + 848, "Sortie_RuleOn", 1.0);
    v2 = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp");
    v3 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
    v4 = "MID_KeyHelp_BattleHint";
  }
  v6[0] = &GameData_1a9f09e;
  v6[1] = v4;
  v10 = 0;
  v11 = 0;
  v7 = 1;
  v8 = 6;
  v9 = v3;
  return GameRoutine_1593d90(v2, v6);
}

__int64 MapSortieMenu_8728a0(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;

  v2 = (__int64*)(a1 + 848);
  v3 = GameData_212ce90[0];
  v4 = GameRoutine_763df0(*GameData_212ce90[0]);
  if (v4 != 0) {
    v5 = v4;
    v6 = ui_LayoutAccessor_FindTextBox(v2, "T_Win");
    if (v6 != 0) {
      GameRoutine_156c5d0(v6, v5, 0);
    }
  }
  if (ui_LayoutAccessor_FindAlignment(v2, "A_Win") != 0) {
    Alignment_56b600();
    v7 = *(_QWORD*)(a1 + 856);
    if (v7 != 0) {
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 != 0) {
        v9 = v8;
        if (*v2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
    }
  }
  v10 = Situation_763f30(*v3);
  if (v10 != 0) {
    v11 = v10;
    v12 = ui_LayoutAccessor_FindTextBox(v2, "T_Lose");
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, v11, 0);
    }
  }
  if (ui_LayoutAccessor_FindAlignment(v2, "A_Lose") != 0) {
    Alignment_56b600();
    v13 = *(_QWORD*)(a1 + 856);
    if (v13 != 0) {
      v14 = std___1___shared_weak_count_lock(v13);
      if (v14 != 0) {
        v15 = v14;
        if (*v2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
      }
    }
  }
  result = ui_LayoutAccessor_FindAlignment(v2, "A_Rule");
  if (result != 0) {
    Alignment_56b600();
    result = *(_QWORD*)(a1 + 856);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v17 = result;
        result = *v2;
        if (*v2 != 0) {
          result = ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          return std___1___shared_weak_count___release_weak(v17);
        }
      }
    }
  }
  return result;
}

__int64 MapSortieMenu_872a70(_QWORD* a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;

  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  v2 = a1 + 106;
  v3 = GameData_212ce90[0];
  v4 = GameRoutine_763df0(*GameData_212ce90[0]);
  if (v4 != 0) {
    v5 = v4;
    v6 = ui_LayoutAccessor_FindTextBox(a1 + 106, "T_Win");
    if (v6 != 0) {
      GameRoutine_156c5d0(v6, v5, 0);
    }
  }
  if (ui_LayoutAccessor_FindAlignment(a1 + 106, "A_Win") != 0) {
    Alignment_56b600();
    v7 = a1[107];
    if (v7 != 0) {
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 != 0) {
        v9 = v8;
        if (*v2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
    }
  }
  v10 = Situation_763f30(*v3);
  if (v10 != 0) {
    v11 = v10;
    v12 = ui_LayoutAccessor_FindTextBox(a1 + 106, "T_Lose");
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, v11, 0);
    }
  }
  if (ui_LayoutAccessor_FindAlignment(a1 + 106, "A_Lose") != 0) {
    Alignment_56b600();
    v13 = a1[107];
    if (v13 != 0) {
      v14 = std___1___shared_weak_count_lock(v13);
      if (v14 != 0) {
        v15 = v14;
        if (*v2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
      }
    }
  }
  if (ui_LayoutAccessor_FindAlignment(a1 + 106, "A_Rule") != 0) {
    Alignment_56b600();
    v16 = a1[107];
    if (v16 != 0) {
      v17 = std___1___shared_weak_count_lock(v16);
      if (v17 != 0) {
        v18 = v17;
        if (*v2 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          std___1___shared_weak_count___release_weak(v18);
        }
      }
    }
  }
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  result = (*(__int64 (**)(_QWORD*))(*a1 + 168LL))(a1);
  if ((unsigned int)result > 0xC || ((1 << result) & 0x1D00) == 0) {
    *((_DWORD*)a1 + 325) = 0;
    if (game_GameModeData_instance_ != 0) {
      v20 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      if (v20 != 0) {
        GameRoutine_1560070(&v22, a1 + 106, "L_Minimap");
        LOWORD(v21) = *(_WORD*)(v20 + 134);
        GameRoutine_19fc5c0(a1 + 134, &v22, (float)v21);
        result = v23;
        if (v23 != 0) {
          return std___1___shared_weak_count___release_weak(v23);
        }
      }
    }
  }
  return result;
}

__int64 MapSortieMenu_Unknown143(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = &GameData_1a9f09e;
    *(_QWORD*)(v15 + 8) = "MID_SysMenu_StartBattle";
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    v6 = v14 + v8 + 40;
    *(_DWORD*)(v15 + 20) = 11;
    *(_DWORD*)(v15 + 24) = result;
    *(_BYTE*)(v15 + 28) = 3;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = &GameData_1a9f09e;
    *(_QWORD*)(v4 + 8) = "MID_SysMenu_StartBattle";
    v6 = v4 + 40;
    *(_BYTE*)(v4 + 16) = 1;
    *(_DWORD*)(v4 + 20) = 11;
    *(_DWORD*)(v4 + 24) = result;
    *(_BYTE*)(v4 + 28) = 3;
  }
  a2[1] = v6;
  return result;
}

__int64 MapSortieMenu_Unknown112(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _BYTE v4[32];
  _BYTE* v5;

  v5 = nullptr;
  v1 = GameRoutine_871660(a1, (__int64)v4);
  if (v5 == v4) {
    v2 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(void))(*(_QWORD*)v5 + v2))();

LABEL_6:
  if (v1 != 0) {
    return 12;
  }
  else {
    return 1;
  }
}

#pragma GCC visibility pop
