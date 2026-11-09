#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_2002620[])();
extern __int64 GameData_221fdd0;
extern int GameData_22230f4;
_QWORD* MapDrawDebug_Destructor(_QWORD* result);

_QWORD* MapDrawDebug_Destructor(_QWORD* result)
{
  *result = GameData_2002620;
  if ((_QWORD*)GameData_221fdd0 == result) {
    GameData_221fdd0 = 0;
    GameData_22230f4 = 0;
  }
  return result;
}

#pragma GCC visibility pop
