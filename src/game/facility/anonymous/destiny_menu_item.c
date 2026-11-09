#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 DestinyMenuItem_Unknown73(__int64 a1);

__int64 DestinyMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  _QWORD v7[2];
  char v8;
  int v9;
  int v10;
  char v11;
  __int64 v12;
  _BYTE v13[168];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameRoutine_16ee370(v13, v4, "MID_ObeliskMenu_Destiny_Help");
  v5 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v11 = 0;
  v12 = 0;
  v7[0] = "Tutorial";
  v7[1] = "MID_KeyHelp_Tutorial";
  v8 = 1;
  v9 = 10;
  v10 = v5;
  GameRoutine_16ef210(v13, v7);
  return GameRoutine_16ee520(v13);
}

#pragma GCC visibility pop
