#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_828800(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 ui_LayoutAccessor_empty_;
extern char game_menu_TutorialMenu_unknown_225d650_;
__int64 TutorialMenuItem_Unknown3(__int64 a1);
__int64 TutorialMenuItem_OnDeselect(__int64 a1);
__int64 TutorialMenuItem_Unknown23(__int64 result);
__int64 TutorialMenuItem_DrawText(_QWORD* a1);

__int64 TutorialMenuItem_Unknown3(__int64 a1)
{
  __int64* v1;
  __int64 v2;

  v1 = **(__int64***)(*(_QWORD*)(a1 + 88) + 40LL);
  if ((int)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 88) + 40LL) + 8LL) -
             (_QWORD)v1) >>
            3) >= 1 &&
      (v2 = *v1) != 0) {
    return *(_QWORD*)(v2 + 40);
  }
  else {
    return 0;
  }
}

__int64 TutorialMenuItem_OnDeselect(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  result = (*(__int64 (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  if ((game_menu_TutorialMenu_unknown_225d650_ & 1) == 0) {
    GameRoutine_887920(&v7, *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8LL));
    v4 = v7;
    if (v7 == 0 || game_GameModeData_instance_ == 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
    }
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v7);
    if (v5 != 0) {
      v6 = game_GameModeData_instance_;
      if ((*(_BYTE*)(v5 + 32) & 0xFE) != 0) {
        if (game_GameModeData_instance_ == 0) {
          return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
        }
        goto LABEL_13;
      }
    }
    else {
      v6 = game_GameModeData_instance_;
    }
    if (v6 == 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
    }
    GameRoutine_828800(v6 + 40, v4, 2);
    v6 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
    }
  LABEL_13:
    game_GameVariableTable_Find(*(_QWORD*)(v6 + 48), v4);
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
  }
  return result;
}

__int64 TutorialMenuItem_Unknown23(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (*(_QWORD*)(*(_QWORD*)(result + 8) + 336LL) == result &&
      (game_menu_TutorialMenu_unknown_225d650_ & 1) == 0) {
    v1 = result;
    GameRoutine_887920(&v5, *(_QWORD*)(*(_QWORD*)(result + 88) + 8LL));
    v2 = v5;
    if (v5 == 0 || game_GameModeData_instance_ == 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 440LL))(v1);
    }
    v3 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v5);
    if (v3 != 0) {
      v4 = game_GameModeData_instance_;
      if ((*(_BYTE*)(v3 + 32) & 0xFE) != 0) {
        goto LABEL_12;
      }
    }
    else {
      v4 = game_GameModeData_instance_;
    }
    if (v4 == 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 440LL))(v1);
    }
    GameRoutine_828800(v4 + 40, v2, 2);
    v4 = game_GameModeData_instance_;
  LABEL_12:
    if (v4 != 0) {
      game_GameVariableTable_Find(*(_QWORD*)(v4 + 48), v2);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 440LL))(v1);
  }
  return result;
}

__int64 TutorialMenuItem_DrawText(_QWORD* a1)
{
  bool v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64* v9;
  __int64* v11;
  __int64 v12;

  game_menu_GameMenuItem_DrawText();
  GameRoutine_887920(&v12, *(_QWORD*)(a1[11] + 8LL));
  v3 = v12;
  if (v12 != 0) {
    if (game_GameModeData_instance_ != 0 &&
        (v4 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v12)) != 0) {
      v1 = (*(_BYTE*)(v4 + 32) & 0xFE) != 0;
      v5 = a1[7];
      if (v5 == 0) {
        goto LABEL_12;
      }
    }
    else {
      v1 = false;
      v5 = a1[7];
      if (v5 == 0) {
        goto LABEL_12;
      }
    }
  }
  else {
    v5 = a1[7];
    if (v5 == 0) {
      goto LABEL_12;
    }
  }
  v6 = std___1___shared_weak_count_lock(v5);
  if (v6 == 0) {
    goto LABEL_12;
  }
  v7 = v6;
  v8 = (atomic_ullong*)(v6 + 8);
  v9 = (__int64*)a1[6];
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v11 = v9;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    v9 = v11;
    if (v11 != nullptr) {
      return ui_LayoutAccessor_SetPaneVisible(v9, "IconNew",
                                              (v3 == 0) | (unsigned __int8)!v1);
    }
    goto LABEL_12;
  }
  if (v9 == nullptr) {
  LABEL_12:
    v9 = &ui_LayoutAccessor_empty_;
  }
  return ui_LayoutAccessor_SetPaneVisible(v9, "IconNew",
                                          (v3 == 0) | (unsigned __int8)!v1);
}

#pragma GCC visibility pop
