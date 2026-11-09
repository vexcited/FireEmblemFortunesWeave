#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11fbb20(_QWORD);
__int64 GameRoutine_11fbe50(_QWORD, _QWORD);
__int64 GameRoutine_11fc090(_QWORD, _QWORD);
__int64 GameRoutine_11fc220(_QWORD);
__int64 GameRoutine_128df90(_QWORD, _QWORD);
__int64 GameRoutine_128e230(_QWORD, _QWORD);
__int64 AIBattleSimulator_Destructor(__int64 a1, __int64 a2);
__int64 GameRoutine_11fc720(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_7a3220(_QWORD);
extern _QWORD GameData_1b016c8[4];
float AiBattleSimulator_11fc090(__int64 a1, unsigned int a2);

__int64 AIBattleSimulator_Destructor(__int64 a1, __int64 a2)
{
  GameRoutine_128df90(a1, a2);
  GameRoutine_128e230(a1, a2);
  GameRoutine_11fbb20(a1);
  GameRoutine_11fbe50(a1, 0);
  GameRoutine_11fbe50(a1, 1);
  GameRoutine_11fc090(a1, 0);
  GameRoutine_11fc090(a1, 1);
  return GameRoutine_11fc220(a1);
}

float AiBattleSimulator_11fc090(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  float result;
  float* v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;

  v4 = a1 + 4488;
  v5 = a1 + 4488 + 760LL * (unsigned __int8)a2;
  if ((a2 & 0xFC) != 0) {
    v6 = 760 * (unsigned int)(unsigned __int8)a2 + 96;
  }
  else {
    v6 = GameData_1b016c8[a2 & 3];
  }
  v7 = (_QWORD*)(a1 + 80LL * (int)a2);
  v7[2054] = 0;
  v7[2053] = 0;
  v7[2052] = 0;
  v7[2051] = 0;
  v7[2050] = 0;
  v7[2049] = 0;
  v7[2048] = 0;
  v7[2047] = 0;
  v7[2046] = 0;
  v7[2045] = 0;
  if ((int)GameRoutine_7a3220(v5) >= 1 &&
      (*(_BYTE*)(a1 + 24LL * (int)a2 + 16292) & 1) == 0) {
    GameRoutine_11fc720(a1, a2, 0, *(unsigned int*)(v4 + v6), 1.0);
    v9 = (float*)(a1 + 16360 + 80LL * (int)a2);
    v10 = *v9 + v9[1];
    v11 = v10 + v9[2];
    v9[1] = v10;
    v9[2] = v11;
    v12 = v11 + v9[3];
    v13 = v12 + v9[4];
    v9[3] = v12;
    v9[4] = v13;
    v14 = v13 + v9[5];
    v15 = v14 + v9[6];
    v9[5] = v14;
    v9[6] = v15;
    v16 = v15 + v9[7];
    v17 = v16 + v9[8];
    v9[7] = v16;
    v9[8] = v17;
    v18 = v17 + v9[9];
    v19 = v18 + v9[10];
    v9[9] = v18;
    v9[10] = v19;
    v20 = v19 + v9[11];
    v21 = v20 + v9[12];
    v9[11] = v20;
    v9[12] = v21;
    v22 = v21 + v9[13];
    v23 = v22 + v9[14];
    v9[13] = v22;
    v9[14] = v23;
    v24 = v23 + v9[15];
    v25 = v24 + v9[16];
    v9[15] = v24;
    v9[16] = v25;
    v26 = v25 + v9[17];
    v27 = v26 + v9[18];
    v9[17] = v26;
    v9[18] = v27;
    result = v27 + v9[19];
    v9[19] = result;
  }
  return result;
}

#pragma GCC visibility pop
