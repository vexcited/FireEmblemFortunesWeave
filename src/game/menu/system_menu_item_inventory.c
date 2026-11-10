#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17aad00(__int64, __int64);
__int64 GameRoutine_820d50(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 SystemMenuItem_Inventory_Unknown25(__int64 a1);
__int64 SystemMenuItem_Inventory_1854f30(__int64 a1);
__int64 SystemMenuItem_Inventory_1854f80(__int64 a1);

__int64 SystemMenuItem_Inventory_1854f30(__int64 a1)
{
  char v1;
  int v2;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v2 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    if (v2 == 0 ||
        (v2 == 3 || v2 == 1) && *(int*)(game_GameModeData_instance_ + 64) < 2) {
      return 0;
    }
    v1 = *(_BYTE*)(a1 + 81);
  }
  return v1 & 1;
}

__int64 SystemMenuItem_Inventory_1854f80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  bool v4;

  v2 = GameRoutine_820d50(8);
  v4 = game_GameModeData_instance_ == 0 ||
       (v3 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v2)) == 0 ||
       *(_DWORD*)(v3 + 32) == 0;
  return v4 & *(_BYTE*)(a1 + 82);
}

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
