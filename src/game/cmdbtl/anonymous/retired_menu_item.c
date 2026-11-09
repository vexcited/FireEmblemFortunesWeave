#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_GameModeData_instance_;
void RetiredMenuItem_Unknown71();

void RetiredMenuItem_Unknown71()
{
  if (game_GameModeData_instance_ != 0) {
    *(_DWORD*)(game_GameModeData_instance_ + 92) |= 0x10u;
  }
}

#pragma GCC visibility pop
