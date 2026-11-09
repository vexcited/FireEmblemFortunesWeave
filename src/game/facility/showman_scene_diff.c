#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_util_Format(const char*, ...);
extern __int64 GameData_21f3ff8;
extern const char GameData_1ad066d[];
__int64 ShowmanSceneDiff_Unknown4();

__int64 ShowmanSceneDiff_Unknown4()
{
  int v0;
  __int64 v1;

  if (GameData_21f3ff8 == 0) {
    return game_util_Format(GameData_1ad066d, 1);
  }
  v0 = *(_DWORD*)(GameData_21f3ff8 + 12);
  if (v0 <= 1) {
    v0 = 1;
  }
  if (v0 >= 5) {
    v1 = 5;
  }
  else {
    v1 = (unsigned int)v0;
  }
  return game_util_Format(GameData_1ad066d, v1);
}

#pragma GCC visibility pop
