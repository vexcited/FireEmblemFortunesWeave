#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21cf830;
extern __int64 game_script_map_effect_g_sequence;
void SystemMenuItem_Retired_Map_Unknown71();

void SystemMenuItem_Retired_Map_Unknown71()
{
  if (GameData_21cf830 != 0) {
    *(_DWORD*)(GameData_21cf830 + 152) = 28;
  }
  if (game_script_map_effect_g_sequence != 0) {
    *(_DWORD*)(game_script_map_effect_g_sequence + 152) = 16;
  }
}

#pragma GCC visibility pop
