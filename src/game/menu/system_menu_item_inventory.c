#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17aad00(__int64, __int64);
__int64 GameRoutine_820d50(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 SystemMenuItem_Inventory_Unknown25(__int64 a1);

__int64 SystemMenuItem_Inventory_Unknown25(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _BOOL4 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;

  v2 = GameRoutine_820d50(8);
  if (game_GameModeData_instance_ != 0 &&
      (v3 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v2)) != 0) {
    v4 = *(_DWORD*)(v3 + 32) == 0;
    result = 1;
    if (!v4) {
      return result;
    }
  }
  else {
    result = 1;
  }
  if ((*(_BYTE*)(a1 + 82) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(v6 + 152) != 0) {
      v7 = *(_QWORD*)(v6 + 152);
    }
    else {
      v7 = *(_QWORD*)(a1 + 8);
    }
    GameRoutine_17aad00(v7, 0);
    return 9;
  }
  return result;
}

#pragma GCC visibility pop
