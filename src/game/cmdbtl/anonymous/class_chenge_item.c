#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1434e70(_QWORD, _QWORD);
__int64 GameRoutine_68bdf0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_210ba90;
extern __int64* GameData_212e030[4];
__int64 ClassChengeItem_Unknown25(__int64 a1);

__int64 ClassChengeItem_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _WORD v9[12];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 == 0) {
    return 1;
  }
  v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                      &GameData_210ba90, 0);
  result = 1;
  if (v3 != 0 && (*(_BYTE*)(a1 + 82) & 1) != 0) {
    v5 = *(_QWORD*)(v1 + 152);
    v9[0] = 0;
    if (v5 != 0) {
      v6 = v5;
    }
    else {
      v6 = v1;
    }
    v7 = GameRoutine_1434e70(v6, v9);
    if (v7 != 0) {
      v8 = v7;
      if (v7 + 248 != v3 + 1088) {
        GameRoutine_68bdf0();
      }
      *(_DWORD*)(v8 + 272) = *(_DWORD*)(v3 + 1080);
      *(_BYTE*)(v8 + 240) = 1;
      *(_BYTE*)(v8 + 152) = 2;
    }
    return 9;
  }
  return result;
}

#pragma GCC visibility pop
