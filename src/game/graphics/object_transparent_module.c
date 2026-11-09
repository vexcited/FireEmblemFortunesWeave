#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f392c0(__int64 result, __int64);
__int64 GameRoutine_f3ca00(_QWORD, _QWORD);
extern __int64 GameData_212c7d8[6];
__int64 ObjectTransparentModule_Unknown8(__int64 a1);

__int64 ObjectTransparentModule_Unknown8(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  int v5;
  int v6;
  char v7;
  __int64 v8;
  __int64 v9;

  v2 = (__int64*)GameData_212c7d8[0];
  result = *(_QWORD*)GameData_212c7d8[0];
  if (*(_QWORD*)GameData_212c7d8[0] != 0) {
    GameRoutine_f392c0(result, a1);
    if (*(_BYTE*)(a1 + 100) == 1) {
      *(_BYTE*)(a1 + 100) = 0;
    }
    v4 = *v2;
    v8 = 0;
    v9 = 0;
    v5 = *(_DWORD*)(v4 + 304);
    v7 = 1;
    v6 = v5;
    return GameRoutine_f3ca00(a1, &v6);
  }
  return result;
}

#pragma GCC visibility pop
