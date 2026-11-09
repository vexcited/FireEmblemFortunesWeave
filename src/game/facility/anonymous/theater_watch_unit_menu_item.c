#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_975940(_QWORD);
__int64 TheaterWatchUnitMenuItem_Unknown80(__int64 a1);

__int64 TheaterWatchUnitMenuItem_Unknown80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 88);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 392);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(v2 + 288);
  if (v3 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 104);
  result = GameRoutine_975940(v3);
  if (result != 0) {
    if (*(unsigned __int16*)(v4 + 16) >=
        (unsigned int)*(unsigned __int16*)(result + 192)) {
      return 0;
    }
    result = *(unsigned __int8*)(*(_QWORD*)(result + 200) +
                                 *(unsigned __int16*)(v4 + 16));
    if ((_DWORD)result == 5) {
      return 2;
    }
    if ((_DWORD)result == 4) {
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
