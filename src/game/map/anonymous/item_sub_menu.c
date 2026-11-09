#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_script_map_effect_g_sequence;
__int64 ItemSubMenu_Unknown24();

__int64 ItemSubMenu_Unknown24()
{
  if (game_script_map_effect_g_sequence != 0) {
    return 24;
  }
  else {
    return 23;
  }
}

#pragma GCC visibility pop
