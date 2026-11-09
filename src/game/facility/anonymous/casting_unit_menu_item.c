#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13e4ce0(_QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e030[4];
extern __int64* GameData_21312d8[11];
__int64 CastingUnitMenuItem_Unknown80(_QWORD* a1);

__int64 CastingUnitMenuItem_Unknown80(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;

  v2 = __dynamic_cast(a1[1], GameData_212e030[0], GameData_21312d8[0], 0);
  v3 = *(_QWORD*)(v2 + 1184);
  v4 = *(_QWORD*)(v2 + 1192) - v3;
  if (v4 == 0) {
    return 6;
  }
  v5 = v4 >> 3;
  v6 = 0;
  while (*(_QWORD*)(v3 + 8 * v6) != 0) {
    if (v5 == ++v6) {
      return 6;
    }
  }
  if (v6 < 0) {
    return 6;
  }
  v7 = a1[13];
  v8 = a1[11];
  if (v8 != 0) {
    v8 = *(_QWORD*)(v8 + 392);
  }
  v10 = v8;
  return GameRoutine_13e4ce0(v7, &v10, v6);
}

#pragma GCC visibility pop
