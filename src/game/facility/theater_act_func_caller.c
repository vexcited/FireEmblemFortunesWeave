#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14992c0();
__int64 GameRoutine_14993d0();
__int64 GameRoutine_1499450();
__int64 GameRoutine_14994e0(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_2131238;
extern _UNKNOWN* GameData_2131240;
extern _UNKNOWN* GameData_2131248;
__int64 TheaterActFuncCaller_Unknown4(__int64 a1);
__int64 GameRoutine_140ab80(_QWORD, _QWORD);
__int64 SceneCharacter_1401b10(_QWORD, _QWORD, _QWORD);
__int64 SceneCharacter_1401f80(_QWORD, float);
float std___1_stof(_QWORD, _QWORD);
__int64 TheaterActFuncCaller_14993d0(__int64* a1, __int64 a2);

__int64 TheaterActFuncCaller_Unknown4(__int64 a1)
{
  GameRoutine_14994e0(a1 + 8, GameData_2131238, GameRoutine_14992c0);
  GameRoutine_14994e0(a1 + 8, GameData_2131240, GameRoutine_14993d0);
  return GameRoutine_14994e0(a1 + 8, GameData_2131248, GameRoutine_1499450);
}

__int64 TheaterActFuncCaller_14993d0(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  unsigned int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float v9;
  char v10;

  v2 = *a1;
  v6 = *(unsigned __int8*)(*a1 + 72);
  v5 = *a1 + 72;
  v7 = (unsigned __int64)v6 >> 1;
  if ((v6 & 1) != 0) {
    v8 = *(_QWORD*)(v2 + 80);
  }
  else {
    v8 = v7;
  }
  if (v8 != 0) {
    v9 = std___1_stof(v5, 0);
    SceneCharacter_1401f80(a2, v9);
    v2 = *a1;
  }
  v10 = GameRoutine_140ab80(v2 + 48, 0);
  return SceneCharacter_1401b10(a2, v2 + 24, v10 & 1);
}

#pragma GCC visibility pop
