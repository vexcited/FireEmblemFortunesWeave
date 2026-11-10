#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_20433d8[])();
_QWORD* game_facility_SceneCameraSyncStickController_SetImpl_lambda0_CloneInto(
    _QWORD* result, _QWORD* a2);

_QWORD* game_facility_SceneCameraSyncStickController_SetImpl_lambda0_CloneInto(
    _QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_20433d8;
  v2 = result[5];
  a2[3] = result[3];
  a2[5] = v2;
  v3 = result[2];
  a2[4] = result[4];
  a2[2] = v3;
  return result;
}

#pragma GCC visibility pop
