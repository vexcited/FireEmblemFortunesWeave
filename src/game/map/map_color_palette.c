#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19931a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
extern __int64 (*GameData_1ff1db8[])();
extern __int64 (*game_map_MapColorPalette_vtable[])();
extern __int64 GameData_221fdd8;
extern __int64 game_map_MapColorPalette_g_texture_archives;
extern int GameData_221fde0;
__int64 MapColorPalette_Destructor(_QWORD* a1);

__int64 MapColorPalette_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 result;

  v1 = a1[1];
  *a1 = game_map_MapColorPalette_vtable;
  if (v1 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v1 + 8));
    a1[1] = 0;
  }
  GameRoutine_19931a0(game_map_MapColorPalette_g_texture_archives,
                      "UI/Bmap/bmap_textures.bntx", 26);
  result = GameRoutine_19931a0(game_map_MapColorPalette_g_texture_archives,
                               "UI/Common/common_textures.bntx", 30);
  *a1 = GameData_1ff1db8;
  if ((_QWORD*)GameData_221fdd8 == a1) {
    GameData_221fdd8 = 0;
    GameData_221fde0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
