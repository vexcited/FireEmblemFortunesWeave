#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109b560(_QWORD);
extern __int64 (*GameData_2008090[])();
extern __int64 (*game_character_CharacterAssetCache_vtable[])();
extern __int64 GameData_2235618;
extern int GameData_2235734;
__int64 CharacterAssetCache_Destructor(_QWORD* a1);

__int64 CharacterAssetCache_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_character_CharacterAssetCache_vtable;
  result = GameRoutine_109b560(a1 + 1);
  *a1 = GameData_2008090;
  if ((_QWORD*)GameData_2235618 == a1) {
    GameData_2235618 = 0;
    GameData_2235734 = 0;
  }
  return result;
}

#pragma GCC visibility pop
