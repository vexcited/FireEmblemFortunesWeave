#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21316c8;
extern __int64 game_GameModeData_instance_;
bool TurnEndMenuItem_Unknown6();
__int64 TurnEndMenuItem_Unknown25();

bool TurnEndMenuItem_Unknown6()
{
  return game_GameModeData_instance_ != 0 &&
         *(_DWORD*)(game_GameModeData_instance_ + 60) == 3;
}

__int64 TurnEndMenuItem_Unknown25()
{
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 8;
  return 2;
}

#pragma GCC visibility pop
