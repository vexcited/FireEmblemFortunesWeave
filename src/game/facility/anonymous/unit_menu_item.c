#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 game_GameModeData_instance_;
__int64 UnitMenuItem_PlayCursorAnimation(__int64 a1);
__int64 GameRoutine_158a7c0(_QWORD);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameVariable_82e7c0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_136afb0(_QWORD, _QWORD);
__int64 UnitUtil_15e0120(_QWORD);
__int64 UnitUtil_15e0200(_QWORD);
__int64 UnitUtil_15e04f0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* game_g_hero_ids;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 ui_Manager_instance_;
__n128 UnitMenuItem_DrawText(__int64 a1);

__n128 UnitMenuItem_DrawText(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  __int64* v23;
  unsigned __int8 v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  _BYTE v28[20];

  game_menu_GameMenuItem_DrawText();
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    return result;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    return result;
  }
  v5 = *(_QWORD*)(a1 + 48);
  v6 = v4;
  if (v5 == 0) {
    goto LABEL_51;
  }
  UnitUtil_15e0120(v28);
  UnitUtil_15e0200(v28);
  v7 = ui_LayoutAccessor_FindPane(v5, "Face");
  if (v7 != 0) {
    v8 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v8 = 0;
  }
  v9 = game_HashString(*(&game_g_hero_ids + *(unsigned __int8*)(a1 + 83)));
  if (v9 == 0) {
    goto LABEL_31;
  }
  v10 = *(_QWORD*)(*GameData_212c890[0] + 96);
  if (v10 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
    goto LABEL_31;
  }
  v12 = v10 - 1;
  if ((v10 & (v10 - 1)) != 0) {
    v13 = v9;
    if (v9 >= v10) {
      v13 = v9 % v10;
    }
  }
  else {
    v13 = v12 & v9;
  }
  v14 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v13);
  if (v14 == nullptr || (v15 = (_QWORD*)*v14) == nullptr) {
  LABEL_31:
    v17 = 0;
    goto LABEL_32;
  }
  if ((v10 & v12) == 0) {
    while (1) {
      v18 = v15[1];
      if (v18 == v9) {
        if (v15[2] == v9) {
          goto LABEL_54;
        }
      }
      else if ((v18 & v12) != v13) {
        goto LABEL_31;
      }
      v15 = (_QWORD*)*v15;
      v17 = 0;
      if (v15 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v16 = v15[1];
    if (v16 == v9) {
      break;
    }
    if (v16 >= v10) {
      v16 %= v10;
    }
    if (v16 != v13) {
      goto LABEL_31;
    }
  LABEL_21:
    v15 = (_QWORD*)*v15;
    if (v15 == nullptr) {
      goto LABEL_31;
    }
  }
  if (v15[2] != v9) {
    goto LABEL_21;
  }
LABEL_54:
  v17 = v15[3];
LABEL_32:
  GameRoutine_1840a20(v8, 0, v17, 6, 1);
  v19 = ui_LayoutAccessor_FindPane(v5, "Clan");
  if (v19 != 0) {
    v20 = __dynamic_cast(v19, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v20 = 0;
  }
  v21 = GameRoutine_158a7c0(*(unsigned __int8*)(a1 + 83));
  if (v20 != 0 && v21 != 0) {
    v22 = *(_BYTE**)(v21 + 48);
    if (v22 != nullptr && *v22 != 0 &&
        (Manager_136afb0(ui_Manager_instance_ + 1264, 5) & 1) != 0) {
      Manager_136a920(ui_Manager_instance_ + 1264, v20, 0, 5);
    }
  }
  v23 = (__int64*)GameVariable_82e7c0(*(unsigned __int8*)(a1 + 83), 2);
  v25 = *v23;
  if (*v23 != 0) {
    v24 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v26 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v23);
      v24 = v26 != 0 && *(_DWORD*)(v26 + 32) != 0;
    }
  }
  if (((v25 != 0) & v24) != 0) {
    v27 = "Clear_On";
  }
  else {
    v27 = "Clear_Off";
  }
  LayoutAccessor_1562cf0(v5, v27);
  UnitUtil_15e04f0(v28);
LABEL_51:
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak_alt1(v6);
  }
  return result;
}

__int64 UnitMenuItem_PlayCursorAnimation(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned __int8 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  const char* v10;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        v5 = (__int64*)GameRoutine_82e7c0(*(unsigned __int8*)(a1 + 83), 2);
        v8 = *v5;
        if (*v5 != 0) {
          v6 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v9 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v5);
            v6 = v9 != 0 && *(_DWORD*)(v9 + 32) != 0;
          }
        }
        LODWORD(v7) = 1.0;
        if (((v8 != 0) & v6) != 0) {
          v10 = "Select_Clear_On";
        }
        else {
          v10 = "Select_Clear_Off";
        }
        result = GameRoutine_1562680(v3, v10, v7);
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

#pragma GCC visibility pop
