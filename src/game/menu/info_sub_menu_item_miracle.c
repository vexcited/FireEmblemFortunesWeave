#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1462780(_QWORD, _QWORD);
__int64 GameRoutine_1462ac0(_QWORD, _QWORD);
__int64 InfoSubMenuItem_Miracle_ACall(__int64 a1, __int64 a2);
__int64 GameRoutine_82e5c0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64
game_menu_InfoSubMenuItem_Miracle_InfoSubMenuItem_Miracle_lambda0_Invoke(
    __int64 a1, unsigned __int8* a2);
__int64* game_820d50(int);
__int64 GameConst_7f97f0(__int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
extern __int64 (*GameData_20ebb48[])();
extern __int64 (*game_menu_InfoSubMenuItem_Miracle_vtable[])();
__int64 game_menu_InfoSubMenuItem_Miracle_InfoSubMenuItem_Miracle(__int64 a1);

__int64 game_menu_InfoSubMenuItem_Miracle_InfoSubMenuItem_Miracle(__int64 a1)
{
  __int64 result;
  char v3;
  int v4;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  char v8;

  *(_WORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  v8 = 0;
  *(_WORD*)(a1 + 80) = 257;
  *(_BYTE*)(a1 + 82) = 1;
  *(_QWORD*)a1 = game_menu_InfoSubMenuItem_Miracle_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  result = (__int64)game_820d50(1);
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)result);
    if (result != 0 && *(_DWORD*)(result + 32) != 0 ||
        game_GameModeData_instance_ == 0) {
      v3 = 0;
    }
    else {
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      if (v4 == 3 && *(_DWORD*)(game_GameModeData_instance_ + 64) == 1) {
        v6_.v6[0] = GameData_20ebb48;
        v6_.v6[1] = &v8;
        v6_.v7 = v6_.v6;
        GameConst_7f97f0((__int64)v6_.v6);
        result = (__int64)v6_.v7;
        if (v6_.v7 == v6_.v6) {
          v5 = 32;
        }
        else {
          if (v6_.v7 == nullptr) {
          LABEL_14:
            v3 = v8;
            goto LABEL_15;
          }
          v5 = 40;
        }
        result = (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
        goto LABEL_14;
      }
      v3 = v4 != 0;
    }
  }
LABEL_15:
  *(_BYTE*)(a1 + 81) = v3;
  return result;
}

__int64 InfoSubMenuItem_Miracle_ACall(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  char v4;

  if (*(_BYTE*)(a1 + 82) != 1) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  v4 = GameRoutine_1462ac0(a1, a2);
  GameRoutine_1462780(v3, v4 & 1);
  return 9;
}

__int64

game_menu_InfoSubMenuItem_Miracle_InfoSubMenuItem_Miracle_lambda0_Invoke(
    __int64 a1, unsigned __int8* a2)
{
  __int64 result;

  result = GameRoutine_82e5c0(*a2);
  if (*(_QWORD*)result != 0 && game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), result);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      **(_BYTE**)(a1 + 8) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
