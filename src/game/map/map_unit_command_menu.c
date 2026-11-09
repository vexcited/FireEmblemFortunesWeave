#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_16ef9a0(void);
__int64 GameRoutine_777be0(_QWORD);
extern __int64 GameData_21cd0e8;
extern char GameData_22736e0;
extern int game_map_g_unit_menu_index;
__int64 MapUnitCommandMenu_Unknown85(__int64 a1);
void MapUnitCommandMenu_19f6660();

__int64 MapUnitCommandMenu_Unknown85(__int64 a1)
{
  __int64 result;

  GameRoutine_16ef9a0();
  GameRoutine_1562cf0(a1 + 848, "Bmap");
  result = GameRoutine_777be0(GameData_21cd0e8 + 8);
  if ((GameData_22736e0 & 1) == 0) {
    GameData_22736e0 = 1;
  }
  return result;
}

void MapUnitCommandMenu_19f6660()
{
  game_map_g_unit_menu_index = -1;
  GameData_22736e0 = 0;
}

#pragma GCC visibility pop
