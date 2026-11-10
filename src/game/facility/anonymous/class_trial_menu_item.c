#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_960100(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 ClassTrialMenuItem_Unknown73(__int64 a1);
__int64 ClassTrialMenuItem_Unknown70(__int64 a1, __int64 a2);
__int64 GameRoutine_16dd280(_QWORD);
__int64 game_gameui_anonymous_ProcGameUIFade_In(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
extern __int64 GameData_2259540;
__int64
game_facility_anonymous_ClassTrialMenuItem_ACall_closure_Invoke(__int64 result);

__int64 ClassTrialMenuItem_Unknown73(__int64 a1)
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
  GameRoutine_16ee370(v13, v4, "MID_TempleMenu_ClassTrial_Help");
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

__int64 ClassTrialMenuItem_Unknown70(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 result;

  v2 = *(unsigned __int8*)(a1 + 96);
  *(_QWORD*)(a1 + 88) = a2;
  *(_BYTE*)(a1 + 82) = 1;
  result = GameRoutine_960100(a1);
  *(_BYTE*)(a1 + 81) = v2 <= (unsigned __int8)result;
  return result;
}

__int64

game_facility_anonymous_ClassTrialMenuItem_ACall_closure_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;
  unsigned int v5;

  v1 = GameData_2259540;
  if (GameData_2259540 != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL);
    v3 = GameRoutine_16dd280(v2);
    v4 = v3 - (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 224LL))(v2);
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 496LL))(v2);
    return game_gameui_anonymous_ProcGameUIFade_In(v1, v4, 0, v5, 1, v2);
  }
  return result;
}

#pragma GCC visibility pop
