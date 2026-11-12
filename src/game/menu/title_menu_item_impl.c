#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 GameManager_a2af90(void);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_877a30(void);
__int64 GameRoutine_8786f0(_QWORD);
__int64 GameRoutine_91b950(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_GameMenuItem_PlayIdleAnimation(void);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 game_GameGlobalData_unknown_;
extern __int64 game_GameModeData_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_21f3fe4;
extern int GameData_226b690;
__int64 TitleMenuItem_169ebd0(_QWORD* a1);
__int64 TitleMenuItem_169ed70(__int64 a1);
__int64 TitleMenuItem_16a1360();
__int64 TitleMenuItem_16a1f80(__int64 a1, __int64* a2);
__int64 TitleMenuItem_16a2560();
__int64 TitleMenuItem_16a2700();
__int64 TitleMenuItem_16a2c90();
__int64 TitleMenuItem_16a2df0();
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void LayoutAccessor_1562060_alt1(__int64*, __int64,
                                 _BYTE*) __asm__("LayoutAccessor_1562060");

__int64 TitleMenuItem_169ebd0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  char v4;
  _BYTE* v5;
  __int64 v6;
  _BYTE* v7;
  char* v8;
  __int64 v9;
  __int64 v10;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 576LL))(a1);
  if ((result & 1) == 0) {
    v3 = a1[1];
    v4 = (*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) != 0;
    ui_LayoutAccessor_SetPaneVisible_alt1(v3 + 848, (__int64)"L_KeyHelp", v4);
    v5 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    LayoutAccessor_1562060_alt1((__int64*)(v3 + 848), (__int64)"T_Message", v5);
    v6 = (*(__int64 (**)(_QWORD*))(*a1 + 568LL))(a1);
    if (v6 != 0) {
      v7 = (_BYTE*)v6;
      ui_LayoutAccessor_SetPaneVisible_alt1(v3 + 848, (__int64)"T_Annotation",
                                            1);
      v8 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v7, 0);
      if (v8 != nullptr) {
        v9 = (__int64)v8;
        v10 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(v3 + 848),
                                                 (__int64)"T_Annotation");
        if (v10 != 0) {
          GameRoutine_156c5d0_alt1(v10, v9, 0);
        }
      }
      result = ui_LayoutAccessor_FindAlignment_alt1((__int64*)(v3 + 848),
                                                    (__int64)"A_Message");
      if (result != 0) {
        return Alignment_56b600_alt1(result);
      }
    }
    else {
      return ui_LayoutAccessor_SetPaneVisible_alt1(v3 + 848,
                                                   (__int64)"T_Annotation", 0);
    }
  }
  return result;
}

__int64 TitleMenuItem_169ed70(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  game_menu_GameMenuItem_PlayIdleAnimation();
  v2 = *(_QWORD*)(a1 + 88);
  v3 = *(_QWORD*)(a1 + 96);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v7 = v3;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v7 = 0;
  }
  v6 = v2;
  result = GameRoutine_14a1520(&v6, 1);
  v5 = v7;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
    if (v3 == 0) {
      return result;
    }
  }
  else if (v3 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 TitleMenuItem_16a1360()
{
  GameRoutine_877a30();
  return 4;
}

__int64 TitleMenuItem_16a1f80(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *a2;
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  ui_LayoutAccessor_SetPaneVisible(v3 + 848, "L_KeyHelp", 0);
  ui_LayoutAccessor_SetPaneVisible(v3 + 848, "T_Annotation", 0);
  return LayoutAccessor_1562060(v3 + 848, "T_Message", v2);
}

__int64 TitleMenuItem_16a2560()
{
  __int64 v0;
  __int64 v1;
  _QWORD v3[2];

  GameData_21f3fe4 = 0;
  GameRoutine_91b950(0);
  if (GameData_226b690 != (GameData_21f3fe4 != 0)) {
    GameData_226b690 = GameData_21f3fe4 != 0;
    if (game_sound_g_game_sound != 0) {
      GameManager_a2af90();
    }
  }
  v0 = GameRoutine_820d50(21);
  if (game_GameModeData_instance_ == 0 ||
      (v1 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) == 0 ||
      *(_DWORD*)(v1 + 32) == 0) {
    v3[0] = game_util_Format("%s/%s", "000", "Global");
    v3[1] = strlen(v3[0]);
    GameRoutine_8786f0(v3);
  }
  return 2;
}

__int64 TitleMenuItem_16a2700()
{
  __int64 v0;
  __int64 v1;
  _QWORD v3[2];

  GameData_21f3fe4 = 1;
  GameRoutine_91b950(0);
  if (GameData_226b690 != (GameData_21f3fe4 != 0)) {
    GameData_226b690 = GameData_21f3fe4 != 0;
    if (game_sound_g_game_sound != 0) {
      GameManager_a2af90();
    }
  }
  v0 = GameRoutine_820d50(21);
  if (game_GameModeData_instance_ == 0 ||
      (v1 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) == 0 ||
      *(_DWORD*)(v1 + 32) == 0) {
    v3[0] = game_util_Format("%s/%s", "000", "Global");
    v3[1] = strlen(v3[0]);
    GameRoutine_8786f0(v3);
  }
  return 2;
}

__int64 TitleMenuItem_16a2c90()
{
  __int64 v0;
  __int64 v1;
  _QWORD v3[2];

  if (game_GameGlobalData_unknown_ != 0) {
    *(_BYTE*)game_GameGlobalData_unknown_ = 1;
  }
  v0 = GameRoutine_820d50(21);
  if (game_GameModeData_instance_ == 0 ||
      (v1 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) == 0 ||
      *(_DWORD*)(v1 + 32) == 0) {
    v3[0] = game_util_Format("%s/%s", "000", "Global");
    v3[1] = strlen(v3[0]);
    GameRoutine_8786f0(v3);
  }
  return 2;
}

__int64 TitleMenuItem_16a2df0()
{
  __int64 v0;
  __int64 v1;
  _QWORD v3[2];

  if (game_GameGlobalData_unknown_ != 0) {
    *(_BYTE*)game_GameGlobalData_unknown_ = 0;
  }
  v0 = GameRoutine_820d50(21);
  if (game_GameModeData_instance_ == 0 ||
      (v1 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) == 0 ||
      *(_DWORD*)(v1 + 32) == 0) {
    v3[0] = game_util_Format("%s/%s", "000", "Global");
    v3[1] = strlen(v3[0]);
    GameRoutine_8786f0(v3);
  }
  return 2;
}

#pragma GCC visibility pop
