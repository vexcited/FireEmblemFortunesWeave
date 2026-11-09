#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f93690[])();
extern __int64 GameData_21cd0e0;
_QWORD* Route_Destructor(_QWORD* result);

_QWORD* Route_Destructor(_QWORD* result)
{
  *result = GameData_1f93690;
  if ((_QWORD*)GameData_21cd0e0 == result) {
    GameData_21cd0e0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
