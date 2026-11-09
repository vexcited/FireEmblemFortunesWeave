#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 GameRoutine_16dd280(void);
extern __int64 (*GameData_20811e0[])();
extern __int64 GameData_225e7a0;
_QWORD* ProcGmapCarriageList_Unknown145(__int64 a1);

_QWORD* ProcGmapCarriageList_Unknown145(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  int v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;

  v1 = *(_QWORD*)(a1 + 152);
  v3 = GameRoutine_16dd280();
  v9[0] = GameData_20811e0;
  v9[1] = a1;
  v10 = v9;
  if (GameData_225e7a0 != 0) {
    v5 = 32;
    result = v9;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  v7 = v3;
  if (v1 != 0) {
    v8 = v1;
  }
  else {
    v8 = a1;
  }
  GameRoutine_167f810(v8, 6, a1 + 1200, 0, v7, (__int64)v9);
  result = v10;
  if (v10 == v9) {
    v5 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  if (v10 != nullptr) {
    v5 = 40;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  return result;
}

#pragma GCC visibility pop
