#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_c1ea10(__int64, unsigned __int64, __int64, unsigned __int64,
                           __int64, unsigned __int64, __int64, unsigned __int64,
                           __int64, char);
extern char GameData_1a9f09e;
__int64 wld_map_c1b700(__int64 a1, unsigned __int64 a2, __int64 a3,
                       unsigned __int64 a4, __int64 a5, unsigned __int64 a6,
                       __int64 a7, unsigned __int64 a8, __int64 a9);

__int64 wld_map_c1b700(__int64 a1, unsigned __int64 a2, __int64 a3,
                       unsigned __int64 a4, __int64 a5, unsigned __int64 a6,
                       __int64 a7, unsigned __int64 a8, __int64 a9)
{
  __int64 v17;
  __int64 v18;
  char v19;
  _BYTE* v20;
  _BYTE* v21;
  __int64 result;

  v17 = *(_QWORD*)(a9 + 8);
  if (v17 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v17 + 8), v17);
  }
  v18 = *(_QWORD*)a9;
  *(_QWORD*)(a9 + 8) = 0;
  if (v18 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v18 + 8), v18);
  }
  v19 = *(_BYTE*)(a9 + 40);
  *(_QWORD*)a9 = 0;
  if ((v19 & 1) != 0) {
    v20 = *(_BYTE**)(a9 + 56);
    *(_QWORD*)(a9 + 48) = 0;
  }
  else {
    v20 = (_BYTE*)(a9 + 41);
    *(_BYTE*)(a9 + 40) = 0;
  }
  *v20 = 0;
  if ((*(_BYTE*)(a9 + 16) & 1) != 0) {
    v21 = *(_BYTE**)(a9 + 32);
    *(_QWORD*)(a9 + 24) = 0;
    *v21 = 0;
    if (a6 == 0) {
    LABEL_15:
      if (a8 == 0) {
        return GameRoutine_c1ea10(a1, a2, a3, a4, (__int64)&GameData_1a9f09e, 0,
                                  (__int64)&GameData_1a9f09e, 0, a9, 0);
      }
      result = GameRoutine_c1ea10(a1, a2, a3, a4, (__int64)&GameData_1a9f09e, 0,
                                  a7, a8, a9, 1);
      if ((result & 1) == 0) {
        return GameRoutine_c1ea10(a1, a2, a3, a4, (__int64)&GameData_1a9f09e, 0,
                                  (__int64)&GameData_1a9f09e, 0, a9, 0);
      }
      return result;
    }
  }
  else {
    *(_BYTE*)(a9 + 16) = 0;
    *(_BYTE*)(a9 + 17) = 0;
    if (a6 == 0) {
      goto LABEL_15;
    }
  }
  if (a8 == 0 ||
      ((result = GameRoutine_c1ea10(a1, a2, a3, a4, a5, a6, a7, a8, a9, 1)) &
       1) == 0) {
    result = GameRoutine_c1ea10(a1, a2, a3, a4, a5, a6,
                                (__int64)&GameData_1a9f09e, 0, a9, 1);
    if ((result & 1) == 0) {
      goto LABEL_15;
    }
  }
  return result;
}

#pragma GCC visibility pop
