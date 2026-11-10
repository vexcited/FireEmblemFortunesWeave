#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f8a870(__int64 result, __int64*);
extern __int64 GameData_212efc0;
__int64
game_facility_anonymous_StartMenuItem_CreateConfirmDialog_closure_Invoke(
    __int64 a1);
__int64

game_facility_anonymous_StartMenuItem_CreateConfirmDialog_closure_Invoke(
    __int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5[2];
  char v6;

  v2 = *(_QWORD*)GameData_212efc0;
  if (*(_QWORD*)GameData_212efc0 != 0) {
    v3 = *(_QWORD*)(a1 + 8);
    LODWORD(v5[0]) = 0;
    BYTE4(v5[0]) = *(_BYTE*)(v3 + 83);
    v5[1] = -1;
    v6 = 1;
    GameRoutine_f8a870(v2, v5);
  }
  return 4;
}

#pragma GCC visibility pop
