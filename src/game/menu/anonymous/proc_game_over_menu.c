#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_15636c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 game_g_game_setting_ptr;
__int64 ProcGameOverMenu_Unknown2(__int64 a1, long double a2);
__int64 ProcGameOverMenu_Unknown57(__int64 result, long double a2);
__int64 ProcGameOverMenu_Unknown84(__int64 a1, long double a2);
bool ProcGameOverMenu_Unknown124(__int64 a1, long double a2);
__int64 ProcGameOverMenu_Unknown132(__int64 result);
__int64 GameRoutine_173afe0(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
extern __int64 (*game_menu_anonymous_GameOverMenuItem_vtable)();
extern __int64 (*game_menu_anonymous_RestartCheckpointMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_RestartMenuItem_vtable[])();
extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
__int64 ProcGameOverMenu_173a540(__int64 a1, __int64 a2, unsigned int a3,
                                 unsigned int a4);
__int64 ProcGameOverMenu_173a670(__int64 a1, __int64 a2, unsigned int a3,
                                 unsigned int a4);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20b6bd0;
extern __int64* GameData_212e008[9];
__int64
game_menu_anonymous_ProcGameOverMenu_AddItemList_closure_Invoke(__int64 result);
__int64
game_menu_anonymous_ProcGameOverMenu_SortAndFilter_closure_Invoke_173dce0(
    __int64 a1, __int64* a2);
__int64
game_menu_anonymous_ProcGameOverMenu_SortAndFilter_closure_Invoke_173de20(
    __int64 a1, _QWORD* a2, __int64* a3);

__int64 ProcGameOverMenu_Unknown2(__int64 a1, long double a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;

  if (*(_BYTE*)(a1 + 1128) == 1) {
    v3 = (_QWORD*)(a1 + 952);
    if ((GameRoutine_1563280(a1 + 952, "In", 0, a2) & 1) == 0) {
      v4 = *(_QWORD*)(a1 + 960);
      if (v4 != 0) {
        v5 = std___1___shared_weak_count_lock(v4);
        if (v5 != 0) {
          v6 = v5;
          if (*v3 != 0) {
            ControlCreator_13633c0();
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            std___1___shared_weak_count___release_weak();
          }
        }
      }
      *(_BYTE*)(a1 + 1128) = 0;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 1, 0, 0);
      ui_LayoutAccessor_SetPaneVisible(a1 + 848, "A_Help", 1);
      v7 = *(_DWORD*)(a1 + 356);
      *(_BYTE*)(a1 + 648) = 1;
      *(_DWORD*)(a1 + 356) = v7 & 0xFFFFFFF9;
    }
  }
  return GameRoutine_16df7a0(a1);
}

__int64 ProcGameOverMenu_Unknown57(__int64 result, long double a2)
{
  if ((*(_BYTE*)(result + 1116) & 1) == 0) {
    LODWORD(a2) = 1.0;
    return GameRoutine_1562680(result + 848, "In", a2);
  }
  return result;
}

__int64 ProcGameOverMenu_Unknown84(__int64 a1, long double a2)
{
  LODWORD(a2) = 1.0;
  GameRoutine_1562680(a1 + 952, "In", a2);
  GameRoutine_15638b0(a1 + 952, "In", 0);
  return GameRoutine_15636c0(a1 + 952, "In", 0);
}

bool ProcGameOverMenu_Unknown124(__int64 a1, long double a2)
{
  return (GameRoutine_1563280(a1 + 848, "In", 0, a2) & 1) == 0;
}

__int64 ProcGameOverMenu_Unknown132(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;
  __int16 v7;
  unsigned __int8* v8;
  unsigned int v9;
  int v10;
  _BYTE v12[200];

  v1 = result;
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 1) != 0) {
    GameRoutine_15638b0(result + 848, "In", 0);
    GameRoutine_15636c0(v1 + 848, "In", 0);
    result = snd_fnd_WeakHandle_isValid(v1 + 1096);
    if ((result & 1) != 0) {
      snd_Fade_Fade_10c910(v12, 0);
      snd_stop_ffc40(v1 + 1096, v12);
      snd_Fade_Destroy_Fade(v12);
      result = snd_fnd_WeakHandle_reset(v1 + 1096);
    }
    v8 = *(unsigned __int8**)(v1 + 16);
    if (v8 != nullptr) {
      v9 = *v8;
      v4 = v9 > 0x10;
      v10 = (1 << v9) & 0x1CE00;
      if (!v4 && v10 != 0) {
        v7 = *(_WORD*)(v1 + 136) | 0x80;
      LABEL_19:
        *(_WORD*)(v1 + 136) = v7;
      }
    }
  }
  else {
    if (*(_DWORD*)(result + 616) != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 992LL))(result);
      if ((result & 1) == 0) {
        return result;
      }
      v2 = *(unsigned __int8**)(v1 + 16);
      if (v2 != nullptr) {
        v3 = *v2;
        v4 = v3 > 0x10;
        v5 = (1 << v3) & 0x1CE00;
        if (!v4 && v5 != 0) {
          *(_WORD*)(v1 + 136) |= 0x80u;
        }
      }
      v7 = *(_WORD*)(v1 + 136) | 8;
      goto LABEL_19;
    }
    *(_DWORD*)(result + 616) = 1;
  }
  return result;
}

__int64 ProcGameOverMenu_173a540(__int64 a1, __int64 a2, unsigned int a3,
                                 unsigned int a4)
{
  __int64 v7;
  __int64 v8;
  __int64 result;

  *(_WORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_WORD*)(a1 + 80) = 257;
  *(_BYTE*)(a1 + 82) = 1;
  *(_QWORD*)a1 = &game_menu_anonymous_GameOverMenuItem_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  v7 = *(_QWORD*)(a2 + 32);
  if (v7 != 0) {
    if (v7 == a2) {
      *(_QWORD*)(a1 + 128) = a1 + 96;
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a2 + 32) + 24LL))(
          *(_QWORD*)(a2 + 32), a1 + 96);
    }
    else {
      *(_QWORD*)(a1 + 128) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    *(_QWORD*)(a1 + 128) = 0;
  }
  *(_DWORD*)(a1 + 144) = a3;
  *(_BYTE*)(a1 + 148) = 0;
  *(_DWORD*)(a1 + 152) = a4;
  *(_QWORD*)a1 = game_menu_anonymous_RestartMenuItem_vtable;
  LOBYTE(v8) = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    if (*(_BYTE*)(game_GameModeData_instance_ + 13) != 0) {
      LOBYTE(v8) = 0;
    }
    else {
      v8 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      if (v8 != 0) {
        LOBYTE(v8) = (*(_BYTE*)(v8 + 185) & 0x10) == 0;
      }
    }
  }
  if (a3 != 6) {
    LOBYTE(v8) = 0;
  }
  *(_BYTE*)(a1 + 148) = v8;
  result = GameRoutine_173afe0(a3, a4);
  *(_BYTE*)(a1 + 81) = result & 1;
  *(_BYTE*)(a1 + 82) =
      *(_DWORD*)(game_GameRestartData_unknown_ + 368LL * a3 + 284) != 0;
  return result;
}

__int64 ProcGameOverMenu_173a670(__int64 a1, __int64 a2, unsigned int a3,
                                 unsigned int a4)
{
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned int v13;
  bool v14;
  int v15;
  const char* v17;

  *(_WORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_WORD*)(a1 + 80) = 257;
  *(_BYTE*)(a1 + 82) = 1;
  *(_QWORD*)a1 = &game_menu_anonymous_GameOverMenuItem_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  v7 = *(_QWORD*)(a2 + 32);
  if (v7 != 0) {
    if (v7 == a2) {
      *(_QWORD*)(a1 + 128) = a1 + 96;
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a2 + 32) + 24LL))(
          *(_QWORD*)(a2 + 32), a1 + 96);
    }
    else {
      *(_QWORD*)(a1 + 128) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    *(_QWORD*)(a1 + 128) = 0;
  }
  *(_WORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 172) = a4;
  *(_QWORD*)a1 = game_menu_anonymous_RestartCheckpointMenuItem_vtable;
  result = GameRoutine_173afe0(a3, a4);
  *(_BYTE*)(a1 + 81) = result & 1;
  if (a3 > 5 || ((1 << a3) & 0x2C) == 0) {
    *(_DWORD*)(a1 + 168) = 4;
    *(_BYTE*)(a1 + 82) = *(_DWORD*)(game_GameRestartData_unknown_ + 1756) != 0;
    if ((result & 1) == 0) {
      return result;
    }
    v17 = "MID_Restart_BeforeBattle";
    return GameRoutine_60a020(a1 + 144, v17);
  }
  *(_DWORD*)(a1 + 168) = a3;
  if ((result & 1) != 0) {
    v9 = game_GameRestartData_unknown_ + 368LL * a3;
    v11 = *(unsigned __int8*)(v9 + 24);
    v10 = v9 + 24;
    if (v11 != 0) {
      v12 = *(_QWORD*)(v10 + 16);
      if (v12 != 0) {
        v13 = *(unsigned __int8*)(v12 + 33) - 76;
        v14 = v13 > 0xA;
        v15 = (1 << v13) & 0x403;
        if (!v14 && v15 != 0 && *(_WORD*)(v12 + 40) != 0) {
          v17 = **(const char***)(v12 + 48);
          if (v17 != nullptr) {
            return GameRoutine_60a020(a1 + 144, v17);
          }
        }
      }
    }
  }
  return result;
}

__int64

game_menu_anonymous_ProcGameOverMenu_AddItemList_closure_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == 5) {
          *(_QWORD*)(v1 + 16) = v2;
          *(_WORD*)(v1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

__int64

game_menu_anonymous_ProcGameOverMenu_SortAndFilter_closure_Invoke_173dce0(
    __int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v4;
  int v5;

  result = *a2;
  if (*a2 != 0) {
    v4 = *(_QWORD*)(a1 + 8);
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20b6bd0, 0);
    if (result != 0) {
      v5 = *(_DWORD*)(v4 + 1120);
      return v5 ==
             (*(unsigned int (**)(__int64))(*(_QWORD*)result + 592LL))(result);
    }
  }
  return result;
}

__int64

game_menu_anonymous_ProcGameOverMenu_SortAndFilter_closure_Invoke_173de20(
    __int64 a1, _QWORD* a2, __int64* a3)
{
  _BOOL4 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned __int8 v11;
  int v12;

  if (*a2 != 0) {
    v4 = *a3;
    v5 = __dynamic_cast(*a2, GameData_212e008[0], &GameData_20b6bd0, 0);
    v6 = v4 == 0 || v5 == 0;
    if (v6 || (v7 = v5, (v8 = __dynamic_cast(v4, GameData_212e008[0],
                                             &GameData_20b6bd0, 0)) == 0)) {
      v12 = 1;
    }
    else {
      v9 = v8;
      v10 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v7 + 584LL))(v7);
      v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 584LL))(v9);
      v12 = 0;
      v3 = v10 < v11;
    }
  }
  else {
    v12 = 1;
  }
  return (v3 | v12) & 1;
}

#pragma GCC visibility pop
