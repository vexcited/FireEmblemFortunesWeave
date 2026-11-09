#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_15e7650(_QWORD* result, int, __int64);
__int64 GameRoutine_15eb780(_QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef100(_QWORD, _QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 PerchMenuItem_15ea280(_QWORD* a1);
__int64 PerchMenuItem_15ea320(_QWORD* a1);

__int64 PerchMenuItem_15ea280(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  char v4;

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
  v4 = (*(__int64 (**)(_QWORD*))(*a1 + 608LL))(a1);
  GameRoutine_15eb780(v3, v4 & 1);
  return 9;
}

__int64 PerchMenuItem_15ea320(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  char v7;
  int v8;
  _QWORD v10[2];
  char v11;
  int v12;
  int v13;
  char v14;
  __int64 v15;
  _QWORD v16[21];

  v1 = a1[1];
  if (v1 != 0 && (v3 = __dynamic_cast(a1[1], GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  v5 = (*(__int64 (**)(_QWORD*))(*a1 + 592LL))(a1);
  GameRoutine_16ee370(v16, v4, v5);
  v6 = (*(__int64 (**)(_QWORD*))(*a1 + 600LL))(a1);
  v7 = v6;
  v15 = 0;
  GameRoutine_15e7650(v16, v6, (__int64)v10);
  if ((v7 & 0x40) != 0) {
    GameRoutine_16ef100(v16, "MID_Menu_Cause_NotPerson");
  }
  if ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) != 0) {
    v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[1] + 192LL))(a1[1]);
    v14 = 0;
    v15 = 0;
    v10[0] = "Tutorial";
    v10[1] = "MID_KeyHelp_Tutorial";
    v11 = 1;
    v12 = 10;
    v13 = v8;
    GameRoutine_16ef210(v16, v10);
  }
  return GameRoutine_16ee520(v16);
}

#pragma GCC visibility pop
