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
__int64 BattleInfo_79c520(__int64);
__int64 BattleInfo_7a3000();
__int64 BattleInfo_7a3110();
__int64 BattleSide_7a2950(_QWORD*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 GameData_21ca2f8;
float sinf(float);
void AIBattleSimulator_11fbe50(__int64 a1, int a2);
__int64 AIBattleSimulator_11fc220(__int64 a1, long double a2);

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

void AIBattleSimulator_11fbe50(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  float v12;
  float v13;
  int v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  float v28;
  float v29;

  v2 = (_QWORD*)(a1 + 24LL * a2);
  v3 = a1 + 760LL * (unsigned __int8)a2;
  v2[2036] = 0;
  v2[2035] = 0;
  v2[2034] = 0;
  if (*(_QWORD*)(v3 + 4512) != 0) {
    v4 = *(_QWORD*)(v3 + 4496);
    v5 = v2 + 2034;
    v6 = *(unsigned __int8*)(v3 + 4505);
    v7 = *(_DWORD*)(v3 + 4528);
    v8 = BattleSide_7a2950((_QWORD*)(v3 + 4488));
    *(_DWORD*)v5 = v8;
    *((_DWORD*)v5 + 1) = 3;
    if (v8 == 0) {
      v18 = v4 + 760LL * v6;
      v19 = *(_QWORD*)(v18 + 40);
      if (v19 != 0) {
        v20 = *(_DWORD*)(v18 + 96) - *(_DWORD*)(v18 + 88);
        v21 = *(_DWORD*)(v18 + 100) - *(_DWORD*)(v18 + 92);
        if (((v21 | v20) & 0x80000000) == 0 &&
            (*(_DWORD*)(v19 + 1872) & 0xFFF) != 0) {
          v22 = *(_DWORD*)(v19 + 592);
          if (v20 < v22 && v21 < v22) {
            v24 = v20 + v22 * v21;
            if ((v24 & 0x80000000) == 0) {
              v25 = *(char*)(*(_QWORD*)(v19 + 600) + 4LL * v24 + 2);
              if (v25 >= 1) {
                v26 = BattleInfo_79c520(v18 + 16);
                if (v25 >= (unsigned int)v26) {
                  v27 = v26;
                }
                else {
                  v27 = v25;
                }
                if (v26 < 0) {
                  v27 = 0;
                }
                *(_DWORD*)v5 = v27;
                *((_BYTE*)v5 + 20) = 1;
              }
            }
          }
        }
      }
    }
    v9 = BattleInfo_7a3000();
    if ((v9 & ~(v9 >> 31)) >= 100) {
      v10 = 100;
    }
    else {
      v10 = v9 & ~(v9 >> 31);
    }
    v11 = 100 * v10;
    if (v9 >= 51) {
      v11 += (int)(float)((float)(sinf((float)((float)(180 * v10 - 9000) /
                                               0x1.9000000000000p+5f) *
                                       0x1.1df46a0000000p-6f) *
                                  (float)v10) *
                          0x1.aaaaaa0000000p+3f);
    }
    v12 = (float)((float)v11 / -0x1.3880000000000p+13f) + 0x1.0000000000000p+0f;
    v13 = 0x0.0p+0f;
    if (v12 >= 0x0.0p+0f) {
      v13 = 0x1.0000000000000p+0f;
      if (v12 <= 0x1.0000000000000p+0f) {
        v13 = (float)((float)v11 / -0x1.3880000000000p+13f) +
              0x1.0000000000000p+0f;
      }
    }
    *((float*)v5 + 4) = v13;
    if (v7 < 0) {
      *((_DWORD*)v5 + 3) = 0;
      v15 = 0x1.0000000000000p+0f - v13;
      v17 = 0x0.0p+0f;
    }
    else {
      v14 = BattleInfo_7a3110();
      v15 = 0x1.0000000000000p+0f - *((float*)v5 + 4);
      v16 = v15 * (float)((float)v14 / 0x1.9000000000000p+6f);
      v17 = 0x0.0p+0f;
      if (v16 >= 0x0.0p+0f) {
        v17 = 0x1.0000000000000p+0f;
        if (v16 <= 0x1.0000000000000p+0f) {
          v17 = v15 * (float)((float)v14 / 0x1.9000000000000p+6f);
        }
      }
      *((float*)v5 + 3) = v17;
    }
    v28 = v15 - v17;
    v29 = 0x0.0p+0f;
    if (v28 >= 0x0.0p+0f) {
      v29 = 0x1.0000000000000p+0f;
      if (v28 <= 0x1.0000000000000p+0f) {
        v29 = v28;
      }
    }
    *((float*)v5 + 2) = v29;
  }
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

__int64 AIBattleSimulator_11fc220(__int64 a1, long double a2)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float* v7;
  int v8;
  float* v9;
  int v10;
  float* v11;
  float v12;
  float v13;
  __int16* v14;
  float v15;
  __int64 v16;
  float* v17;
  int v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  int v25;
  int v26;
  __int64 v28;
  __int64 result;
  float v30;
  __int64 v31;
  int v32;
  int v33;
  bool v34;
  int v35;
  int v37;
  float v38;
  int v39;
  int v41;
  int v42;
  float v43;
  int v44;
  int v46;
  int v47;
  int v48;
  float v49;
  __int64 v50;
  int v51;
  int v53;
  int v54;
  float v55;
  int v56;
  int v58;
  int v59;
  signed int v60;
  float v61;
  __int64 v62;
  int v63;
  float v64;
  int v65;
  int v66;
  int v67;
  int v69;
  int v70;
  bool v71;
  int v72;
  int v74;
  int v75;

  v2 = *(float*)(a1 + 16280);
  v3 = *(float*)(a1 + 16284);
  v4 = *(float*)(a1 + 16304);
  v5 = 0x0.0p+0f;
  v6 = *(float*)(a1 + 16308);
  v7 = (float*)(a1 + 16520);
  v8 = *(_DWORD*)(a1 + 16276);
  v9 = (float*)(a1 + 16524);
  v10 = *(_DWORD*)(a1 + 16300);
  v11 = (float*)(a1 + 16528);
  v12 = 0x0.0p+0f;
  v13 = 0x0.0p+0f;
  v14 = (__int16*)(a1 + 15790);
  v15 = 0x0.0p+0f;
  v16 = 160;
  v17 = (float*)(a1 + 16532);
  v19 = 0;
  v20 = 0;
  *(_QWORD*)(a1 + 16528) = 0;
  *(_QWORD*)(a1 + 16520) = 0;
  while (*((_BYTE*)v14 - 2) == 0) {
    v21 = (float)(0x1.0000000000000p+0f - v5) *
          (float)(0x1.0000000000000p+0f - v12);
    v22 = *(float*)(a1 + 16360 + 4LL * v19++);
    v5 = v5 + (float)(v21 * v22);
    *v7 = v5;
    v13 = v13 +
          (float)(v21 * (float)((float)((float)((float)*v14 * v2) + 0x0.0p+0f) +
                                (float)((float)(v8 * *v14) * v3)));
    *v11 = v13;
  LABEL_3:
    v14 += 2;
    v16 -= 4;
    if (v16 == 0) {
      goto LABEL_7;
    }
  }
  if (*((_BYTE*)v14 - 2) != 4) {
    v23 = (float)(0x1.0000000000000p+0f - v5) *
          (float)(0x1.0000000000000p+0f - v12);
    v24 = *(float*)(a1 + 16440 + 4LL * v20++);
    v12 = v12 + (float)(v23 * v24);
    *v9 = v12;
    v15 = v15 +
          (float)(v23 * (float)((float)((float)((float)*v14 * v4) + 0x0.0p+0f) +
                                (float)((float)(v10 * *v14) * v6)));
    *v17 = v15;
    goto LABEL_3;
  }
LABEL_7:
  *(_DWORD*)(a1 + 15784) = 0;
  v25 = *(unsigned __int8*)(*(_QWORD*)(a1 + 456) + 16LL);
  v26 = *(unsigned __int8*)(GameData_21ca2f8 + 24);
  if (v25 != v26) {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 456) + 16LL) != 0) {
      if (*(_BYTE*)(GameData_21ca2f8 + 24) != 0 || v25 != 3) {
      LABEL_16:
        *(float*)&a2 = *v7;
        v30 = *v11;
        v31 = *(_QWORD*)(a1 + 4464);
        v32 = (int)(float)(*v7 * 0x1.9000000000000p+6f);
        if (*v7 < 0x1.3333340000000p-2f) {
          v32 = 0;
        }
        *(_DWORD*)(a1 + 15784) = (v32 + *(_DWORD*)(a1 + 15784)) << 11;
        if (v31 != 0) {
          result = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v31 +
                                                          152LL))(v31, a2);
        }
        else {
          result = (unsigned int)*(__int16*)(a1 + 2732);
        }
        if ((int)result >= 1 && v30 > (float)(unsigned int)result) {
          v30 = (float)(unsigned int)result;
        }
        v37 = vcvts_n_s32_f32(v30, 4u);
        v38 = *v9;
        if (v37 >= 2047) {
          v39 = 2047;
        }
        else {
          v39 = v37;
        }
        if (v37 != 0 || v30 <= 0x0.0p+0f) {
          v41 = v39;
        }
        else {
          v41 = 1;
        }
        v42 = (v41 + *(_DWORD*)(a1 + 15784)) << 14;
        v43 = *v17;
        if (*(__int16*)(a1 + 508) >= 1 &&
            v43 > (float)*(unsigned __int16*)(a1 + 508)) {
          v43 = (float)*(unsigned __int16*)(a1 + 508);
        }
        if ((int)v43 >= 127) {
          v44 = 127;
        }
        else {
          v44 = (int)v43;
        }
        if ((int)v43 != 0 || v43 <= 0x0.0p+0f) {
          v46 = v44;
        }
        else {
          v46 = 1;
        }
        v47 = 16256 - ((int)(float)(v38 * 0x1.9000000000000p+6f) << 7);
        if (v38 < 0x1.0000000000000p-1f) {
          v47 = 16256;
        }
        v48 = v47 + v42 + v46;
        goto LABEL_117;
      }
    }
    else if (v26 != 3) {
      goto LABEL_16;
    }
  }
  v28 = game_g_shared_system_skills_ptr;
  v74 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x11CLL) +
                   game_g_shared_system_skills_ptr + 4) &
        0xFFF;
  result = game_HasSkill((_QWORD*)(a1 + 1760), (unsigned int*)&v74);
  if ((result & 1) != 0) {
    goto LABEL_16;
  }
  v33 = *(unsigned __int8*)(*(_QWORD*)(a1 + 456) + 16LL);
  v34 = v33 == 3 || v33 == 0;
  if (v34 && (v75 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x11CLL) + v28 + 4) & 0xFFF,
              ((result =
                    game_HasSkill((_QWORD*)(a1 + 1760), (unsigned int*)&v75)) &
               1) == 0) ||
      (v35 = *(unsigned __int8*)(a1 + 2002)) == 2) {
    v49 = *v11;
    v50 = *(_QWORD*)(a1 + 4464);
    *(float*)&a2 = *v7;
    v51 = (int)(float)(*v7 * 0x1.9000000000000p+6f);
    if (*v7 < 0x1.3333340000000p-2f) {
      v51 = 0;
    }
    *(_DWORD*)(a1 + 15784) =
        ((v51 +
          ((*(_DWORD*)(a1 + 15784) - (int)(float)(*v9 * 0x1.9000000000000p+6f))
           << 7))
         << 18) -
        33423360;
    if (v50 != 0) {
      result = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v50 + 152LL))(
          v50, a2);
    }
    else {
      result = (unsigned int)*(__int16*)(a1 + 2732);
    }
    if ((int)result >= 1 && v49 > (float)(unsigned int)result) {
      v49 = (float)(unsigned int)result;
    }
    v53 = vcvts_n_s32_f32(v49, 8u);
    v54 = 0x7FFF;
    v55 = *v17;
    if (v53 >= 0x7FFF) {
      v56 = 0x7FFF;
    }
    else {
      v56 = v53;
    }
    if (v53 != 0 || v49 <= 0x0.0p+0f) {
      v58 = v56;
    }
    else {
      v58 = 1;
    }
    v59 = v58 + *(_DWORD*)(a1 + 15784);
    if (*(__int16*)(a1 + 508) >= 1 &&
        v55 > (float)*(unsigned __int16*)(a1 + 508)) {
      v55 = (float)*(unsigned __int16*)(a1 + 508);
    }
    v60 = vcvts_n_s32_f32(v55, 8u);
  }
  else {
    if (v35 != 1) {
      if (*(_BYTE*)(a1 + 2002) == 0) {
        goto LABEL_16;
      }
      return result;
    }
    v61 = *v11;
    v62 = *(_QWORD*)(a1 + 4464);
    v63 = (int)(float)(*v7 * 0x1.9000000000000p+6f);
    v64 = *v9;
    if (*v7 < 0x1.3333340000000p-2f) {
      v63 = 0;
    }
    v65 = 4 * (v63 + *(_DWORD*)(a1 + 15784));
    v66 = v65 | 1;
    if (v64 >= 0x1.6666660000000p-1f) {
      v66 = v65;
    }
    v67 = v65 | 2;
    if (v64 >= 0x1.3333340000000p-2f) {
      v67 = v66;
    }
    *(_DWORD*)(a1 + 15784) = (v67 << 23) | 0x400000;
    if (v62 != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v62 + 152LL))(v62);
    }
    else {
      result = (unsigned int)*(__int16*)(a1 + 2732);
    }
    if ((int)result >= 1 && v61 > (float)(unsigned int)result) {
      v61 = (float)(unsigned int)result;
    }
    v69 = vcvts_n_s32_f32(v61, 0xDu);
    v54 = 0xFFFFF;
    v55 = *v17;
    if (v69 >= 0xFFFFF) {
      v70 = 0xFFFFF;
    }
    else {
      v70 = v69;
    }
    v71 = v69 != 0 || v61 <= 0x0.0p+0f;
    v72 = 3 * v70;
    if (!v71) {
      v72 = 3;
    }
    v59 = v72 + *(_DWORD*)(a1 + 15784);
    if (*(__int16*)(a1 + 508) >= 1 &&
        v55 > (float)*(unsigned __int16*)(a1 + 508)) {
      v55 = (float)*(unsigned __int16*)(a1 + 508);
    }
    v60 = vcvts_n_s32_f32(v55, 0xDu);
  }
  if (v60 < v54) {
    v54 = v60;
  }
  if (v60 == 0 && v55 > 0x0.0p+0f) {
    v54 = 1;
  }
  v48 = v59 - v54;
LABEL_117:
  *(_DWORD*)(a1 + 15784) = v48;
  return result;
}

#pragma GCC visibility pop
