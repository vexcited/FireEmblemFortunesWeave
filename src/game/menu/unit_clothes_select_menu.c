#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_179ba60(__int64 result, long double);
__int64 GameRoutine_179bb70(__int64 result, long double);
extern __int64 GameData_225d4f0;
extern __int64 GameData_2264528;
__int64 UnitClothesSelectMenu_Unknown102(long double a1);

__int64 UnitClothesSelectMenu_Unknown102(long double a1)
{
  if (GameData_2264528 != 0) {
    return 0;
  }
  if (*(_BYTE*)(GameData_225d4f0 + 208) == 1) {
    GameRoutine_179ba60(GameData_225d4f0, a1);
  }
  else {
    GameRoutine_179bb70(GameData_225d4f0, a1);
  }
  return 0;
}

#pragma GCC visibility pop
