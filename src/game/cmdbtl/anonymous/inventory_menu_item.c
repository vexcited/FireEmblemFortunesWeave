#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17ab020(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_210ba90;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e030[4];
__int64 InventoryMenuItem_Unknown25(__int64 a1);

__int64 InventoryMenuItem_Unknown25(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 1;
  }
  v3 = __dynamic_cast(v2, GameData_212e030[0], &GameData_210ba90, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  v5 = GameRoutine_820d50(8);
  if (game_GameModeData_instance_ != 0 &&
      (v6 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v5)) != 0) {
    v7 = *(_DWORD*)(v6 + 32) == 0;
    result = 1;
    if (!v7) {
      return result;
    }
  }
  else {
    result = 1;
  }
  if ((*(_BYTE*)(a1 + 82) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(v9 + 152) != 0) {
      v10 = *(_QWORD*)(v9 + 152);
    }
    else {
      v10 = *(_QWORD*)(a1 + 8);
    }
    GameRoutine_17ab020(v10, v4 + 1080, 0);
    return 9;
  }
  return result;
}

#pragma GCC visibility pop
