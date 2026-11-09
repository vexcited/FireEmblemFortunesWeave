#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
bool SystemMenuItem_Restart_Unknown58(__int64 a1);

bool SystemMenuItem_Restart_Unknown58(__int64 a1)
{
  __int64 v1;

  v1 = 368;
  if (*(_BYTE*)(a1 + 144) != 0) {
    v1 = 2208;
  }
  return *(_DWORD*)(game_GameRestartData_unknown_ + v1 + 284) != 0 &&
         (*(_BYTE*)(a1 + 144) == 0 || game_GameModeData_instance_ == 0 ||
          (*(_BYTE*)(game_GameModeData_instance_ + 93) & 1) == 0);
}

#pragma GCC visibility pop
