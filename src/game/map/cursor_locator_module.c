#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a7ad80(void);
__int64 CursorLocatorModule_Unknown6(_QWORD* a1);

__int64 CursorLocatorModule_Unknown6(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;

  v1 = a1[5];
  v2 = a1[6];
  while (v1 != v2) {
    v1 += 8;
    GameRoutine_a7ad80();
  }
  result = a1[12];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
