#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_GameModeData_instance_;
__int64 InfoSubMenuItem_Roster_1855580(__int64 a1);

__int64 InfoSubMenuItem_Roster_1855580(__int64 a1)
{
  char v1;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 0 &&
        *(int*)(game_GameModeData_instance_ + 64) < 2) {
      return 0;
    }
    v1 = *(_BYTE*)(a1 + 81);
  }
  return v1 & 1;
}

#pragma GCC visibility pop
