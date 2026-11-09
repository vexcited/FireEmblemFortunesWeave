#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_94bdc0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 DivinationVisitorMenuItem_Unknown73(__int64 a1);

__int64 DivinationVisitorMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  char v7;
  int v8;
  _QWORD v10[7];
  _BYTE v11[92];
  int v12;
  int v13;
  bool v14;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  v5 =
      GameRoutine_16ee370(v11, v4, "MID_DivinationMenu_DivinationVisiter_Help");
  v6 = GameRoutine_94bdc0(v5);
  v7 = v6;
  v10[4] = 0;
  GameRoutine_15e7650(v11, v6, v10);
  v8 = *(_DWORD*)(a1 + 84);
  v14 = (v7 & 0x10) != 0;
  v12 = 0;
  v13 = v8;
  return GameRoutine_16ee520(v11);
}

#pragma GCC visibility pop
