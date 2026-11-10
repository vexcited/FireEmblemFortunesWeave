#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16497b0(__int64, __int64);
__int64 GameRoutine_812170(_QWORD);
__int64 GameRoutine_f8a870(_QWORD, _QWORD);
extern __int64 GameData_212efc0;
__int64 game_facility_ObeliskHeroStartMenuItem_ACall_lambda1_Invoke(__int64 a1);
__int64
game_facility_ObeliskHeroStartMenuItem_CreateConfirmDialog_lambda0_Invoke(
    __int64 a1);

__int64 game_facility_ObeliskHeroStartMenuItem_ACall_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 464LL))(v1);
  if ((result & 1) != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 568LL))(v1);
    if (result != 0) {
      v3 = result;
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 576LL))(v1);
      GameRoutine_16497b0(v3, v4);
      return GameRoutine_812170("V_PTV_Fot_Preview");
    }
  }
  return result;
}

__int64

game_facility_ObeliskHeroStartMenuItem_CreateConfirmDialog_lambda0_Invoke(
    __int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  int v6;
  char v7;
  int v8;
  int v9;
  char v10;

  v2 = *(_QWORD*)GameData_212efc0;
  if (*(_QWORD*)GameData_212efc0 != 0) {
    v3 = *(_QWORD*)(a1 + 8);
    v6 = 0;
    v4 = *(_BYTE*)(v3 + 83);
    LODWORD(v3) = *(_DWORD*)(v3 + 84);
    v7 = v4;
    v8 = v3;
    v9 = 1;
    v10 = 1;
    GameRoutine_f8a870(v2, &v6);
  }
  return 4;
}

#pragma GCC visibility pop
