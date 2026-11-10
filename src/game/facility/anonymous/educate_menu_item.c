#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16dac80(_QWORD);
__int64 EducateMenuItem_Unknown25(_QWORD* a1);
__int64 GameRoutine_16ef100(_QWORD, _QWORD);
__int64 game_facility_anonymous_EducateMenuItem_UpdateHelp_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3);

__int64 EducateMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  GameRoutine_16dac80(v3);
  return 9;
}

__int64 game_facility_anonymous_EducateMenuItem_UpdateHelp_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  if ((*(_BYTE*)(a3 + 1) & 0x10) != 0) {
    return GameRoutine_16ef100(a2, "MID_Menu_Cause_NotHero_Educate");
  }
  return result;
}

#pragma GCC visibility pop
