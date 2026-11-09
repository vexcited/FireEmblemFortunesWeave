#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64* GameRoutine_820d50(int);
extern __int64 game_GameModeData_instance_;
__int64 MiracleMenuItem_Unknown6();

__int64 MiracleMenuItem_Unknown6()
{
  unsigned int v0;
  __int64* v1;
  __int64 v2;

  v0 = 1;
  v1 = GameRoutine_820d50(1);
  if (game_GameModeData_instance_ != 0) {
    v2 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v1);
    if (v2 != 0) {
      return *(_DWORD*)(v2 + 32) == 0;
    }
  }
  return v0;
}

#pragma GCC visibility pop
