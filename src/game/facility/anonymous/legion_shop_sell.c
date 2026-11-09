#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_947a30(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 LegionShopSell_Unknown73(_QWORD* a1);

__int64 LegionShopSell_Unknown73(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  _QWORD v11[2];
  char v12;
  int v13;
  int v14;
  char v15;
  __int64 v16;
  _BYTE v17[168];

  v1 = a1[1];
  if (v1 != 0 && (v3 = __dynamic_cast(a1[1], GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  v5 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
  v6 = game_util_Format("%s_Help", v5);
  v7 = GameRoutine_16ee370(v17, v4, v6);
  v8 = GameRoutine_947a30(v7);
  v16 = 0;
  GameRoutine_15e7650(v17, v8, v11);
  if ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) != 0) {
    v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[1] + 192LL))(a1[1]);
    v15 = 0;
    v16 = 0;
    v11[0] = "Tutorial";
    v11[1] = "MID_KeyHelp_Tutorial";
    v12 = 1;
    v13 = 10;
    v14 = v9;
    GameRoutine_16ef210(v17, v11);
  }
  return GameRoutine_16ee520(v17);
}

#pragma GCC visibility pop
