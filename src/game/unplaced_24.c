#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0();
__int64 nn_os_InitializeMutex(__int64, bool, int);
extern _WORD* GameData_2134cb8;
__int64 game_190c10();

__int64 game_190c10()
{
  __int64 v0;

  v0 = GameData_2134cb8;
  *GameData_2134cb8 = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + v0) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + v0 + 8) = 0;
  nn_os_InitializeMutex(v0, true, 0);
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
