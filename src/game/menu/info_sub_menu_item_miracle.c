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
