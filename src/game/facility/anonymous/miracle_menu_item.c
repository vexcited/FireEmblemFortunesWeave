#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 MiracleMenuItem_Unknown73(__int64 a1);

__int64 MiracleMenuItem_Unknown73(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _QWORD v8[2];
  char v9;
  int v10;
  int v11;
  char v12;
  __int64 v13;
  _BYTE v14[168];

  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 8) + 848LL, "N_HelpDetail",
                                   0);
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v2 + 848;
  }
  GameRoutine_16ee370(v14, v4, "MID_TempleMenu_MiracleEquip_Help");
  v5 = *(unsigned int*)(a1 + 84);
  v13 = 0;
  GameRoutine_15e7650(v14, v5, v8);
  v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v12 = 0;
  v13 = 0;
  v8[0] = "Tutorial";
  v8[1] = "MID_KeyHelp_Tutorial";
  v9 = 1;
  v10 = 10;
  v11 = v6;
  GameRoutine_16ef210(v14, v8);
  return GameRoutine_16ee520(v14);
}

#pragma GCC visibility pop
