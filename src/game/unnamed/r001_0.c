#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1a82d10[2];
extern _QWORD GameData_1a83740[2];
extern unsigned int GameData_1b01748[8];
extern unsigned int GameData_1b33034[5];
extern unsigned int GameData_1b3306c[3];
extern char GameData_1b33078[48];
extern _QWORD GameData_1b33110[9];
extern _QWORD GameData_1b33158[6];
extern _QWORD GameData_1b33188[6];
extern _DWORD GameData_1b373e4[17];
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c098[20];
extern _UNKNOWN* GameData_212c0b0[17];
extern _UNKNOWN* GameData_212c0c0[15];
extern _UNKNOWN* GameData_212c0d0[13];
extern _UNKNOWN* GameData_212c0e0[11];
extern _UNKNOWN* GameData_212c0f0[9];
extern _UNKNOWN* GameData_212c100[7];
extern _UNKNOWN* GameData_212c110[5];
extern _UNKNOWN* GameData_212c120[3];
extern __int64* GameData_212c868;
extern _UNKNOWN* GameData_212cf50;
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfd8[7];
extern __int64 (**GameData_2136538)();
extern __int64 GameData_21ca300;
extern __int64 GameData_21caab0;
extern __int64 GameData_21cf838;
extern __int64 GameData_21ed0a0;
extern __int64 GameData_21eea58;
extern __int64 GameData_21f49b8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_1a09c00(_QWORD);
__int64 GameRoutine_1a09c10(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09c90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a150(long double, float, long double, long double,
                            long double);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_598160(_QWORD, _QWORD);
__int64 GameRoutine_5981c0(_QWORD, _QWORD);
__int64 GameRoutine_5987a0(void);
__int64 GameRoutine_59ed60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_603640(_QWORD);
__int64 GameRoutine_604e40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65cf40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65d2d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682780(_QWORD);
__int64 GameRoutine_689100(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_6ea8c0(_QWORD, long double);
__int64 GameRoutine_6ead60(_QWORD, _QWORD);
__int64 GameRoutine_6f1f10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6f20e0(_QWORD, _QWORD);
__int64 GameRoutine_72a260(_QWORD);
__int64 GameRoutine_72b4a0(_QWORD);
__int64 GameRoutine_72b6c0(_QWORD);
__int64 GameRoutine_7515a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7fe910(_QWORD, _QWORD);
__int64 GameRoutine_97b680(_QWORD);
__int64 GameRoutine_c7160(_QWORD, _QWORD, _QWORD, _QWORD);
__int64* GameRoutine_6f1f10_alt1(__int64* result, __int64*, __int64*, __int64*,
                                 __int64*) __asm__("GameRoutine_6f1f10");
bool GameRoutine_6f20e0_alt1(__int64*, __int64*) __asm__("GameRoutine_6f20e0");
unsigned __int64 GameHr_6f1340(unsigned __int64 result, __int64* a2, __int64 a3,
                               char a4);

__int64 GameHr_597240(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      char* a6)
{
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  _BYTE* v22;
  __int64 result;
  __int64 v24;
  __int64 vars0;

  if (a5 != 0) {
    v11 = a1;
    v12 = GameRoutine_1a09c70(a5);
    if (v12 != 0) {
      v13 = v12;
      v14 = GameRoutine_1a09c70(a6);
      v18 = v14;
      v19 = (char*)&vars0 - ((v13 + v14 + 17) & 0xFFFFFFFFFFFFFFF0LL);
      v20 = &v19[v13];
      if (v13 + v14 + 2 >= v13) {
        v21 = v14 + 2;
      }
      else {
        v21 = 0;
      }
      GameRoutine_1a0ba50(&v19[v13], 0, v21, v15, v16, v17);
      GameRoutine_1a0b950(v19, a5, v13);
      *v20 = 37;
      v22 = v20 + 1;
      GameRoutine_1a0b950(v22, a6, v18);
      v22[v18] = 0;
      a6 = v19;
    }
    a1 = v11;
  }
  result = (*(__int64 (**)(__int64, __int64, char*))(*(_QWORD*)a1 + 112LL))(
      a1, a4, a6);
  if (a2 != 0) {
    v24 = result;
    GameRoutine_1a09c90(a2, a6, a3);
    *(_BYTE*)(a2 + a3 - 1) = 0;
    return v24;
  }
  return result;
}

__int64 GameHr_5a6e40(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 result;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  int v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  int v56;

  *(_QWORD*)(a1 + 64) = a2;
  v56 = 0;
  v3 = GameRoutine_59ed60(*(_QWORD*)(a2 + 56), 1380406358, 1, &v56);
  *(_DWORD*)(a1 + 88) = v3;
  if ((v3 & 0x80000000) == 0) {
    v4 = GameRoutine_598160(*(_QWORD*)(a1 + 64), v3);
    *(_DWORD*)(a1 + 92) = GameRoutine_604e40(v4, 0, 3, "uVgConstantBufferVS");
    v5 = GameRoutine_5981c0(*(_QWORD*)(a1 + 64), *(unsigned int*)(a1 + 88));
    *(_DWORD*)(a1 + 96) = GameRoutine_604e40(v5, 4, 3, "uVgConstantBufferPS");
    v6 = *(_DWORD*)(a1 + 88);
    v7 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 48LL);
    v8 = GameRoutine_5987a0() * v6;
    v9 = *(_QWORD*)(a1 + 64);
    v10 = *(_DWORD*)(a1 + 88);
    *(_DWORD*)(a1 + 100) = *(_DWORD*)(v7 + 4LL * v8);
    v11 = *(_QWORD*)(v9 + 48);
    v12 = GameRoutine_5987a0() * v10;
    v13 = *(_QWORD*)(a1 + 64);
    v14 = *(_DWORD*)(a1 + 88);
    *(_DWORD*)(a1 + 104) = *(_DWORD*)(v11 + 4LL * v12 + 4);
    v15 = *(_QWORD*)(v13 + 48);
    *(_DWORD*)(a1 + 108) =
        *(_DWORD*)(v15 + 4LL * (int)(GameRoutine_5987a0() * v14) + 8);
  }
  v16 = *(_QWORD*)(a1 + 64);
  v56 = 1;
  v17 = GameRoutine_59ed60(*(_QWORD*)(v16 + 56), 1380406358, 1, &v56);
  *(_DWORD*)(a1 + 112) = v17;
  if ((v17 & 0x80000000) == 0) {
    v18 = GameRoutine_598160(*(_QWORD*)(a1 + 64), v17);
    *(_DWORD*)(a1 + 116) = GameRoutine_604e40(v18, 0, 3, "uVgConstantBufferVS");
    v19 = GameRoutine_5981c0(*(_QWORD*)(a1 + 64), *(unsigned int*)(a1 + 112));
    *(_DWORD*)(a1 + 120) = GameRoutine_604e40(v19, 4, 3, "uVgConstantBufferPS");
    v20 = *(_DWORD*)(a1 + 112);
    v21 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 48LL);
    v22 = GameRoutine_5987a0() * v20;
    v23 = *(_QWORD*)(a1 + 64);
    v24 = *(_DWORD*)(a1 + 112);
    *(_DWORD*)(a1 + 124) = *(_DWORD*)(v21 + 4LL * v22);
    v25 = *(_QWORD*)(v23 + 48);
    v26 = GameRoutine_5987a0() * v24;
    v27 = *(_QWORD*)(a1 + 64);
    v28 = *(_DWORD*)(a1 + 112);
    *(_DWORD*)(a1 + 128) = *(_DWORD*)(v25 + 4LL * v26 + 4);
    v29 = *(_QWORD*)(v27 + 48);
    *(_DWORD*)(a1 + 132) =
        *(_DWORD*)(v29 + 4LL * (int)(GameRoutine_5987a0() * v28) + 8);
  }
  v56 = 2;
  v30 = GameRoutine_59ed60(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 56LL), 1380406358,
                           1, &v56);
  *(_DWORD*)(a1 + 136) = v30;
  if ((v30 & 0x80000000) == 0) {
    v31 = GameRoutine_598160(*(_QWORD*)(a1 + 64), v30);
    *(_DWORD*)(a1 + 140) = GameRoutine_604e40(v31, 0, 3, "uVgConstantBufferVS");
    v32 = GameRoutine_5981c0(*(_QWORD*)(a1 + 64), *(unsigned int*)(a1 + 136));
    *(_DWORD*)(a1 + 144) = GameRoutine_604e40(v32, 4, 3, "uVgConstantBufferPS");
    v33 = *(_DWORD*)(a1 + 136);
    v34 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 48LL);
    v35 = GameRoutine_5987a0() * v33;
    v36 = *(_QWORD*)(a1 + 64);
    v37 = *(_DWORD*)(a1 + 136);
    *(_DWORD*)(a1 + 148) = *(_DWORD*)(v34 + 4LL * v35);
    v38 = *(_QWORD*)(v36 + 48);
    v39 = GameRoutine_5987a0() * v37;
    v40 = *(_QWORD*)(a1 + 64);
    v41 = *(_DWORD*)(a1 + 136);
    *(_DWORD*)(a1 + 152) = *(_DWORD*)(v38 + 4LL * v39 + 4);
    v42 = *(_QWORD*)(v40 + 48);
    *(_DWORD*)(a1 + 156) =
        *(_DWORD*)(v42 + 4LL * (int)(GameRoutine_5987a0() * v41) + 8);
  }
  v56 = 3;
  result = GameRoutine_59ed60(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 56LL),
                              1380406358, 1, &v56);
  *(_DWORD*)(a1 + 160) = result;
  if ((result & 0x80000000) == 0) {
    v44 = GameRoutine_598160(*(_QWORD*)(a1 + 64), (unsigned int)result);
    *(_DWORD*)(a1 + 164) = GameRoutine_604e40(v44, 0, 3, "uVgConstantBufferVS");
    v45 = GameRoutine_5981c0(*(_QWORD*)(a1 + 64), *(unsigned int*)(a1 + 160));
    *(_DWORD*)(a1 + 168) = GameRoutine_604e40(v45, 4, 3, "uVgConstantBufferPS");
    v46 = *(_DWORD*)(a1 + 160);
    v47 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 48LL);
    v48 = GameRoutine_5987a0() * v46;
    v49 = *(_QWORD*)(a1 + 64);
    v50 = *(_DWORD*)(a1 + 160);
    *(_DWORD*)(a1 + 172) = *(_DWORD*)(v47 + 4LL * v48);
    v51 = *(_QWORD*)(v49 + 48);
    v52 = GameRoutine_5987a0() * v50;
    v53 = *(_QWORD*)(a1 + 64);
    v54 = *(_DWORD*)(a1 + 160);
    *(_DWORD*)(a1 + 176) = *(_DWORD*)(v51 + 4LL * v52 + 4);
    v55 = *(_QWORD*)(v53 + 48);
    result = GameRoutine_5987a0();
    *(_DWORD*)(a1 + 180) = *(_DWORD*)(v55 + 4LL * (int)result * v54 + 8);
  }
  return result;
}

_DWORD* GameHr_5d76e0(float* a1, unsigned __int64 a2)
{
  float v2;
  int v3;
  float v4;
  float v5;
  _DWORD* i;
  unsigned __int64 v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;

  v2 = *a1;
  v3 = *((_DWORD*)a1 + 1);
  v4 = *(float*)(a2 - 8);
  v5 = *a1;
  if (v4 > *a1 || v4 >= *a1 && v3 >= *(_DWORD*)(a2 - 4)) {
    for (i = a1 + 2; (unsigned __int64)i < a2 &&
                     (*(float*)i > v5 || *(float*)i >= v5 && v3 >= i[1]);
         i += 2)
      ;
  }
  else {
    for (i = a1 + 2; *(float*)i > v5 || *(float*)i >= v5 && v3 >= i[1]; i += 2)
      ;
  }
  if ((unsigned __int64)i < a2) {
    v7 = a2 - 8;
  }
  else {
    v7 = a2;
  }
  if ((unsigned __int64)i < a2 && v4 <= v5) {
    v7 = a2 - 8;
    do {
      if (v4 >= v5 && v3 >= *(_DWORD*)(v7 + 4)) {
        break;
      }
      v8 = *(float*)(v7 - 8);
      v7 -= 8LL;
      v4 = v8;
    } while (v8 <= v5);
  }
  while ((unsigned __int64)i < v7) {
    v9 = *(_QWORD*)i;
    *(_QWORD*)i = *(_QWORD*)v7;
    i += 2;
    *(_QWORD*)v7 = v9;
    while (*(float*)i > v5 || *(float*)i >= v5 && v3 >= i[1]) {
      i += 2;
    }
    do {
      v10 = *(float*)(v7 - 8);
      v7 -= 8LL;
      v11 = v10;
    } while (v10 <= v5 && (v11 < v5 || v3 < *(_DWORD*)(v7 + 4)));
  }
  if (a1 != (float*)(i - 2)) {
    *(_QWORD*)a1 = *((_QWORD*)i - 1);
  }
  *((float*)i - 2) = v2;
  *(i - 1) = v3;
  return i;
}

__int64 GameHr_5d98e0(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  signed __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  int v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;

  if (a3 < 2) {
    return result;
  }
  v4 = a4 - result;
  v5 = (unsigned __int64)(a3 - 2) >> 1;
  if (v5 < (a4 - result) >> 3) {
    return result;
  }
  v6 = (v4 >> 2) + 1;
  v7 = (v4 >> 2) + 2;
  v8 = result + 8 * v6;
  if (v7 < a3) {
    v9 = *(float*)v8;
    v10 = *(float*)(v8 + 8);
    if (*(float*)v8 < 0.0 && v10 < 0.0) {
      if (v9 <= v10) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if (v9 < v10) {
    LABEL_10:
      v8 += 8;
      v6 = v7;
    }
  }
LABEL_11:
  v11 = *(float*)v8;
  v12 = *(float*)a4;
  if (*(float*)v8 >= 0.0 || v12 >= 0.0) {
    if (v11 < v12) {
      return result;
    }
  }
  else if (v11 > v12) {
    return result;
  }
  v13 = *(_DWORD*)(a4 + 4);
  *(_QWORD*)a4 = *(_QWORD*)v8;
  if (v5 >= v6) {
    if (v12 >= 0.0) {
      while (1) {
        v15 = 2 * v6 + 2;
        v6 = (2 * v6) | 1;
        v14 = result + 8 * v6;
        if (v15 < a3) {
          v16 = *(float*)v14;
          v17 = *(float*)(v14 + 8);
          if (*(float*)v14 < 0.0 && v17 < 0.0) {
            if (v16 <= v17) {
              goto LABEL_27;
            }
          LABEL_26:
            v14 += 8;
            v6 = v15;
            goto LABEL_27;
          }
          if (v16 < v17) {
            goto LABEL_26;
          }
        }
      LABEL_27:
        if (*(float*)v14 < v12) {
          goto LABEL_41;
        }
        *(_QWORD*)v8 = *(_QWORD*)v14;
        v8 = v14;
        if (v5 < v6) {
          goto LABEL_18;
        }
      }
    }
    while (1) {
      v18 = 2 * v6 + 2;
      v6 = (2 * v6) | 1;
      v14 = result + 8 * v6;
      if (v18 < a3) {
        v19 = *(float*)v14;
        v20 = *(float*)(v14 + 8);
        if (*(float*)v14 >= 0.0 || v20 >= 0.0) {
          break;
        }
        if (v19 > v20) {
          goto LABEL_38;
        }
      }
    LABEL_39:
      v21 = *(float*)v14;
      if (*(float*)v14 >= 0.0) {
        if (v21 < v12) {
          goto LABEL_41;
        }
      }
      else if (v21 > v12) {
      LABEL_41:
        *(float*)v8 = v12;
        *(_DWORD*)(v8 + 4) = v13;
        return result;
      }
      *(_QWORD*)v8 = *(_QWORD*)v14;
      v8 = v14;
      if (v5 < v6) {
        goto LABEL_18;
      }
    }
    if (v19 >= v20) {
      goto LABEL_39;
    }
  LABEL_38:
    v14 += 8;
    v6 = v18;
    goto LABEL_39;
  }
  v14 = v8;
LABEL_18:
  *(float*)v14 = v12;
  *(_DWORD*)(v14 + 4) = v13;
  return result;
}

__int64* GameHr_5e2b40(__int64* result)
{
  char v1;
  bool v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;

  v1 = *((_BYTE*)result + 28);
  if ((v1 & 1) != 0) {
    v2 = *((int*)result + 4) < 2 || *((_DWORD*)result + 6) < 1;
    if (!v2 && *((int*)result + 5) >= 1) {
      v3 = 0;
      do {
        v4 = *result;
        if (*((int*)result + 4) >= 1) {
          v5 = *(_DWORD*)(v4 + 4 * v3);
          v6 = 0;
          do {
            v7 = v3 + *((_DWORD*)result + 5) * v6++;
            *(_DWORD*)(result[1] + 4LL * v7) |= v5;
          } while (v6 < *((_DWORD*)result + 4));
          v4 = *result;
        }
        *(_DWORD*)(v4 + 4 * v3++) = 0;
      } while (v3 < *((int*)result + 5));
      v1 = *((_BYTE*)result + 28);
    }
    *((_BYTE*)result + 29) = -1;
    *((_BYTE*)result + 28) = v1 & 0xFE;
  }
  return result;
}

float GameHr_5e3f70(__int64 a1, __int64 a2, float a3)
{
  float v4;
  float v7;
  float v8;
  float v9;
  unsigned int v10;
  float v11;
  unsigned int v12;
  unsigned int v13;
  float v14;
  float v15;
  __int16* v16;

  v4 = *(float*)a2;
  if (a3 < *(float*)a2 || (v7 = *(float*)(a2 + 4)) <= a3) {
    v8 = *(float*)(a1 + 24);
    v9 = *(float*)(a1 + 28) - v8;
    *(float*)&v10 = a3 - v8;
    v11 = *(float*)&v10 * (float)(1.0 / v9);
    LOWORD(v10) = *(_WORD*)(a1 + 18);
    v12 = (int)(float)(v11 * (float)v10);
    *(_DWORD*)(a2 + 8) = v12;
    v13 = *(unsigned __int16*)(a1 + 18);
    if (v13 <= v12) {
      *(_DWORD*)(a2 + 8) = v13 - 1;
    }
    ((void (*)(__int64, __int64,
               float))GameData_2136538[2 * (*(_WORD*)(a1 + 16) & 3)])(a1, a2,
                                                                      a3);
    v4 = *(float*)a2;
    v7 = *(float*)(a2 + 4);
  }
  v14 = a3 - v4;
  v15 = 1.0 / (float)(v7 - v4);
  v16 = (__int16*)(*(_QWORD*)(a1 + 8) + 8LL * *(int*)(a2 + 8));
  return (float)((float)*v16 + (float)((float)v16[1] * (float)(v14 * v15))) +
         (float)((float)((float)(v14 * v15) *
                         (float)((float)v16[2] +
                                 (float)((float)v16[3] * (float)(v14 * v15)))) *
                 (float)(v14 * v15));
}

__int64 GameHr_603a60(__int64 a1, float* a2)
{
  long double v4;
  float v5;
  long double v6;
  long double v7;
  long double v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;

  (*(void (**)(void))GameData_212c098[0])();
  v9 = *((unsigned __int16*)a2 + 3);
  v10 = (v9 >> 4) & 3;
  if (v10 == 2) {
    if ((v9 & 3) == 2) {
      v15 = 5;
    }
    else {
      v15 = 1;
    }
    if ((v9 & 3) == 1) {
      v12 = 3;
    }
    else {
      v12 = v15;
    }
    v13 = (v9 >> 2) & 3;
    if (v13 == 1) {
      goto LABEL_10;
    }
  }
  else {
    if (v10 != 1) {
      goto LABEL_23;
    }
    if ((v9 & 3) == 2) {
      v11 = 4;
    }
    else {
      v11 = 0;
    }
    if ((v9 & 3) == 1) {
      v12 = 2;
    }
    else {
      v12 = v11;
    }
    v13 = (v9 >> 2) & 3;
    if (v13 == 1) {
    LABEL_10:
      v14 = 0;
      goto LABEL_20;
    }
  }
  if (v13 != 2) {
  LABEL_23:
    GameRoutine_1a0a150(v4, v5, v6, v7, v8);
    __udf(0);
  }
  v14 = 1;
LABEL_20:
  (*(void (**)(__int64, __int64, __int64))GameData_212c0b0[0])(a1, v12, v14);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))GameData_212c0c0[0])(
      a1, GameData_1b33034[*(unsigned __int8*)a2],
      GameData_1b33034[*((unsigned __int8*)a2 + 1)],
      GameData_1b33034[*((unsigned __int8*)a2 + 2)]);
  (*(void (**)(__int64, float, float))GameData_212c0d0[0])(a1, a2[2], a2[3]);
  (*(void (**)(__int64, float))GameData_212c0e0[0])(a1, a2[4]);
  (*(void (**)(__int64, bool, _QWORD))GameData_212c0f0[0])(
      a1, (*((_WORD*)a2 + 3) & 0x80) != 0,
      GameData_1b01748[*((unsigned __int8*)a2 + 3)]);
  (*(void (**)(__int64, char*))GameData_212c100[0])(
      a1, &GameData_1b33078[16 * *((unsigned __int8*)a2 + 4)]);
  v17 = *((unsigned __int16*)a2 + 3);
  if ((v17 & 0x40) != 0) {
    LOBYTE(v16) = *((_BYTE*)a2 + 5);
    (*(void (**)(__int64, float))GameData_212c110[0])(a1, (float)v16);
    v17 = *((unsigned __int16*)a2 + 3);
  }
  return (*(__int64 (**)(__int64, _QWORD))GameData_212c120[0])(
      a1, GameData_1b3306c[(v17 >> 8) & 3]);
}

__int64 GameHr_604e40(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  unsigned int* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned int* v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int* v32;
  int v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  _DWORD* i;
  __int64 v41;
  __int64 v42;
  unsigned int* v43;
  int v44;
  __int64 v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  bool v49;
  __int64 v50;
  __int64 v51;
  unsigned int* v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned int* v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int* v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int16* v71;
  unsigned __int64 v72;
  __int64* v73;

  v4 = *(_QWORD*)(a1 + 216);
  v6 = a3;
  if (v4 == 0) {
    v19 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + GameData_1b33110[a2]);
    if (v19 != 0) {
      if ((int)a3 > 5) {
        v35 = *(_QWORD*)(v19 + 88);
        if (v35 == 0) {
          return 0xFFFFFFFFLL;
        }
        if (a3 > 7) {
          v73 = *(__int64**)(v35 + 32);
          if (v73 == nullptr) {
            return 0xFFFFFFFFLL;
          }
          v20 = *v73;
          v6 = *((_DWORD*)v73 + 2);
          if (*v73 == 0) {
            return 0xFFFFFFFFLL;
          }
          goto LABEL_53;
        }
        v20 = *(_QWORD*)(v35 + GameData_1a82d10[a3 - 6]);
        v6 = *(_DWORD*)(v35 + GameData_1a83740[a3 - 6]);
      }
      else {
        v20 = *(_QWORD*)(v19 + GameData_1b33158[a3]);
        if (a3 != 0) {
          v6 = *(_DWORD*)(v19 + GameData_1b33188[a3]);
          if (v20 == 0) {
            return 0xFFFFFFFFLL;
          }
        LABEL_53:
          if (a4 != 0) {
            v36 = GameRoutine_1a09c70(a4);
          }
          else {
            v36 = 0;
          }
          v65 = v20 + 8;
          v66 = *(unsigned __int16*)(v20 + 12);
          v67 = v20 + 8 + 16 * v66;
          v68 = *(_DWORD*)v67;
          if (*(_DWORD*)(v20 + 8) < *(_DWORD*)v67) {
            do {
              v70 = (__int64)v68 >> 3;
              if (v36 > v70) {
                v69 = (*(unsigned __int8*)(a4 + v36 + ~v70) >> (v68 & 7)) & 1;
              }
              else {
                v69 = 0;
              }
              v66 = *(unsigned __int16*)(v20 + 12 + 16 * v66 + 2 * v69);
              v49 = v68 < *(_DWORD*)(v65 + 16 * v66);
              v68 = *(_DWORD*)(v65 + 16 * v66);
            } while (v49);
            v67 = v65 + 16 * v66;
          }
          v71 = *(unsigned __int16**)(v67 + 8);
          if (v36 == *v71 &&
              (unsigned int)GameRoutine_1a09cf0(v71 + 1, a4) == 0) {
            v72 = (unsigned __int64)(v67 - v20 - 24) >> 4;
            if ((v72 & 0x80000000) == 0) {
              return *(unsigned int*)(*(_QWORD*)(v19 + 56) +
                                      4LL * (v6 + (int)v72));
            }
          }
          return 0xFFFFFFFFLL;
        }
      }
      if (v20 != 0) {
        goto LABEL_53;
      }
    }
    return 0xFFFFFFFFLL;
  }
  v7 = *(_QWORD*)(v4 + 392);
  v8 = *(_QWORD*)(v4 + 272);
  v9 = *(unsigned int*)(v7 + 4);
  v10 = v8 + v9;
  v11 = v8 + v9 + *(unsigned int*)(v7 + 104);
  v12 = GameRoutine_603640(a2);
  result = 0xFFFFFFFFLL;
  if (v6 <= 3) {
    if (v6 > 1) {
      if (v6 == 2) {
        v41 = *(_QWORD*)(v4 + 392);
        v42 = *(unsigned int*)(v41 + 52);
        if ((int)v42 >= 1) {
          v43 = (unsigned int*)(v10 + *(unsigned int*)(v41 + 56));
          v44 = 1 << v12;
          v45 = 4LL * v12 + 72;
          while (1) {
            if (*((_BYTE*)v43 + 116) == 0) {
              v46 = v43[10];
              v47 = v46 - 66;
              v48 = v46 - 135;
              v49 = v47 >= 0x24 && v48 > 3;
              if (!v49 && (v43[17] & v44) != 0 &&
                  (unsigned int)GameRoutine_1a0a540(a4, v11 + *v43, v43[1]) ==
                      0) {
                result = *(unsigned int*)((char*)v43 + v45);
                if ((result & 0x80000000) == 0) {
                  break;
                }
              }
            }
            --v42;
            v43 += 41;
            if (v42 == 0) {
              return 0xFFFFFFFFLL;
            }
          }
        }
      }
      else {
        v25 = *(_QWORD*)(v4 + 392);
        v26 = *(unsigned int*)(v25 + 44);
        if ((int)v26 >= 1) {
          v27 = (unsigned int*)(v10 + *(unsigned int*)(v25 + 48));
          v28 = 1 << v12;
          v29 = 4LL * v12 + 52;
          while (1) {
            if ((v27[12] & v28) != 0 && (unsigned int)GameRoutine_1a0a540(
                                            a4, v11 + *v27, v27[1]) == 0) {
              result = *(unsigned int*)((char*)v27 + v29);
              if ((result & 0x80000000) == 0) {
                break;
              }
            }
            --v26;
            v27 += 27;
            if (v26 == 0) {
              return 0xFFFFFFFFLL;
            }
          }
        }
      }
    }
    else if (v6 != 0) {
      if (v6 == 1) {
        v21 = *(_QWORD*)(v4 + 392);
        v22 = *(unsigned int*)(v21 + 68);
        if ((int)v22 >= 1) {
          v23 = (unsigned int*)(v10 + *(unsigned int*)(v21 + 72));
          v24 = 1 << v12;
          while (1) {
            if ((v23[14] & v24) != 0 && (unsigned int)GameRoutine_1a0a540(
                                            a4, v11 + *v23, v23[1]) == 0) {
              result = v23[12];
              if ((result & 0x80000000) == 0) {
                break;
              }
            }
            --v22;
            v23 += 23;
            if (v22 == 0) {
              return 0xFFFFFFFFLL;
            }
          }
        }
      }
    }
    else {
      v37 = *(_QWORD*)(v4 + 392);
      v38 = *(unsigned int*)(v37 + 60);
      if ((int)v38 >= 1) {
        v39 = 1 << v12;
        for (i = (_DWORD*)(*(unsigned int*)(v37 + 64) + v9 + v8 + 52);;
             i += 23) {
          if ((*i & v39) != 0 && (unsigned int)GameRoutine_1a0a540(
                                     a4, v11 + (unsigned int)*(i - 13),
                                     (unsigned int)*(i - 12)) == 0) {
            result = (unsigned int)*(i - 1);
            if ((result & 0x80000000) == 0) {
              break;
            }
          }
          if (--v38 == 0) {
            return 0xFFFFFFFFLL;
          }
        }
      }
    }
  }
  else if (v6 <= 5) {
    if (v6 == 4) {
      v55 = *(_QWORD*)(v4 + 392);
      v56 = *(unsigned int*)(v55 + 76);
      if ((int)v56 >= 1) {
        v57 = (unsigned int*)(v10 + *(unsigned int*)(v55 + 80));
        v58 = 1 << v12;
        v59 = 4LL * v12 + 48;
        while (1) {
          if ((v57[21] & v58) != 0 &&
              (unsigned int)GameRoutine_1a0a540(a4, v11 + *v57, v57[1]) == 0) {
            result = *(unsigned int*)((char*)v57 + v59);
            if ((result & 0x80000000) == 0) {
              break;
            }
          }
          --v56;
          v57 += 27;
          if (v56 == 0) {
            return 0xFFFFFFFFLL;
          }
        }
      }
    }
    else {
      v30 = *(_QWORD*)(v4 + 392);
      v31 = *(unsigned int*)(v30 + 52);
      if ((int)v31 >= 1) {
        v32 = (unsigned int*)(v10 + *(unsigned int*)(v30 + 56));
        v33 = 1 << v12;
        v34 = 4LL * v12 + 72;
        while (1) {
          if (*((_BYTE*)v32 + 116) == 0 && v32[10] - 102 <= 0x20 &&
              (v32[17] & v33) != 0 &&
              (unsigned int)GameRoutine_1a0a540(a4, v11 + *v32, v32[1]) == 0) {
            result = *(unsigned int*)((char*)v32 + v34);
            if ((result & 0x80000000) == 0) {
              break;
            }
          }
          --v31;
          v32 += 41;
          if (v31 == 0) {
            return 0xFFFFFFFFLL;
          }
        }
      }
    }
  }
  else {
    switch (v6) {
    case 6:
      v50 = *(_QWORD*)(v4 + 392);
      v51 = *(unsigned int*)(v50 + 52);
      if ((int)v51 >= 1) {
        v52 = (unsigned int*)(v10 + *(unsigned int*)(v50 + 56));
        v53 = 1 << v12;
        v54 = 4LL * v12 + 72;
        while (1) {
          if (*((_BYTE*)v52 + 116) == 0 && v52[10] - 140 <= 0x27 &&
              (v52[17] & v53) != 0 &&
              (unsigned int)GameRoutine_1a0a540(a4, v11 + *v52, v52[1]) == 0) {
            result = *(unsigned int*)((char*)v52 + v54);
            if ((result & 0x80000000) == 0) {
              break;
            }
          }
          --v51;
          v52 += 41;
          if (v51 == 0) {
            return 0xFFFFFFFFLL;
          }
        }
      }
      break;
    case 7:
      v60 = *(_QWORD*)(v4 + 392);
      v61 = *(unsigned int*)(v60 + 52);
      if ((int)v61 >= 1) {
        v62 = (unsigned int*)(v10 + *(unsigned int*)(v60 + 56));
        v63 = 1 << v12;
        v64 = 4LL * v12 + 72;
        while (1) {
          if (*((_BYTE*)v62 + 116) == 0 && v62[10] == 139 &&
              (v62[17] & v63) != 0 &&
              (unsigned int)GameRoutine_1a0a540(a4, v11 + *v62, v62[1]) == 0) {
            result = *(unsigned int*)((char*)v62 + v64);
            if ((result & 0x80000000) == 0) {
              break;
            }
          }
          --v61;
          v62 += 41;
          if (v61 == 0) {
            return 0xFFFFFFFFLL;
          }
        }
      }
      break;
    case 8:
      v14 = *(_QWORD*)(v4 + 392);
      v15 = *(unsigned int*)(v14 + 52);
      if ((int)v15 >= 1) {
        v16 = (unsigned int*)(v10 + *(unsigned int*)(v14 + 56));
        v17 = 1 << v12;
        v18 = 4LL * v12 + 72;
        while (1) {
          if (*((_BYTE*)v16 + 116) == 0 && v16[10] == 182 &&
              (v16[17] & v17) != 0 &&
              (unsigned int)GameRoutine_1a0a540(a4, v11 + *v16, v16[1]) == 0) {
            result = *(unsigned int*)((char*)v16 + v18);
            if ((result & 0x80000000) == 0) {
              break;
            }
          }
          --v15;
          v16 += 41;
          if (v15 == 0) {
            return 0xFFFFFFFFLL;
          }
        }
      }
      break;
    default:
      break;
    }
  }
  return result;
}

__int64 GameHr_635680(__int64 result, __int64* a2, __int64 a3)
{
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;

  v4 = *(_QWORD**)result;
  v3 = *(_QWORD**)(result + 8);
  v7 = (_QWORD*)result;
  if (*(_QWORD**)result != v3) {
  LABEL_2:
    while (1) {
      v8 = *v4;
      GameRoutine_1a09c00(*v4 + 696LL);
      v9 = *(_DWORD*)(v8 + 656);
      result = GameRoutine_1a09c10(v8 + 696);
      if ((v9 & 2) != 0) {
        break;
      }
      if (++v4 == v3) {
        goto LABEL_10;
      }
    }
    while (--v3 != v4) {
      v10 = *v3;
      GameRoutine_1a09c00(*v3 + 696LL);
      v11 = *(_DWORD*)(v10 + 656);
      result = GameRoutine_1a09c10(v10 + 696);
      if ((v11 & 2) == 0) {
        v12 = *v4;
        *v4++ = *v3;
        *v3 = v12;
        if (v3 != v4) {
          goto LABEL_2;
        }
        goto LABEL_10;
      }
    }
  }
  v3 = v4;
LABEL_10:
  v13 = (_QWORD*)*v7;
  v14 = v3;
  if ((_QWORD*)*v7 != v3) {
    v14 = v3;
    v15 = (_QWORD*)*v7;
    while (2) {
      while (1) {
        v16 = *v15;
        if (*(_QWORD*)(*v15 + 752LL) >= a3) {
          break;
        }
        if (++v15 == v14) {
          goto LABEL_20;
        }
      }
      do {
        if (--v14 == v15) {
          v14 = v15;
          goto LABEL_20;
        }
      } while (*(_QWORD*)(*v14 + 752LL) >= a3);
      *v15++ = *v14;
      *v14 = v16;
      if (v14 != v15) {
        continue;
      }
      break;
    }
  }
LABEL_20:
  *a2 = ((__int64)v14 - *v7) >> 3;
  a2[1] = v3 - v13;
  return result;
}

__int64 GameHr_660820(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  unsigned int v48;

  result = GameRoutine_65d2d0(a2, &v48, &v47, &v46);
  if ((result & 1) == 0) {
    return result;
  }
  v5 = v48;
  if (v48 == 0) {
    return result;
  }
  v6 = v46;
  if ((~v46 & 3) != 0) {
    v16 = *(unsigned int*)(a2 + 20);
    if ((int)v16 < 1) {
      return result;
    }
    v17 = *(_QWORD*)(a2 + 8);
    v18 = *(_QWORD*)(a1 + 8);
    if (v18 == v17) {
      goto LABEL_33;
    }
    if (*(_DWORD*)(a1 + 16) >= (int)v16) {
    LABEL_32:
      result = GameRoutine_1a0b950(v18, v17, v16);
    LABEL_33:
      *(_DWORD*)(a1 + 20) = v16;
      return result;
    }
    *(_QWORD*)(a1 + 8) = 0;
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v19 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v19, v18);
      v20 = *(_QWORD*)(a1 + 8);
    }
    else {
      v20 = 0;
    }
    v25 = GameData_2265ee0;
    *(_QWORD*)(a1 + 16) = 0;
    v26 = GameRoutine_651b90(v25, v16, 16, 0);
    GameRoutine_1a0ba50(v26, 0, v16, v27, v28, v29);
    *(_QWORD*)(a1 + 8) = v26;
    if (v20 != 0) {
      v33 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v33 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v33, v20);
      v26 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 16) = v16;
      if (v26 == 0) {
        v18 = 0;
      LABEL_31:
        *(_DWORD*)(a1 + 20) = 0;
        goto LABEL_32;
      }
    }
    else {
      *(_DWORD*)(a1 + 16) = v16;
    }
    if ((unsigned int)v16 >= 0x20) {
      v34 = 32;
    }
    else {
      v34 = (unsigned int)v16;
    }
    GameRoutine_1a0ba50(v26, 0, v34, v30, v31, v32);
    v18 = *(_QWORD*)(a1 + 8);
    goto LABEL_31;
  }
  v7 = *(int*)(a2 + 16);
  v8 = GameData_212bf68;
  v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v7, 16, 0);
  GameRoutine_1a0ba50(v9, 0, v7, v10, v11, v12);
  v13 = GameRoutine_c7160(v9, v7, *(_QWORD*)(a2 + 8) + 32LL, v5);
  if (v13 > v5) {
    v14 = v13;
    GameRoutine_1a0b950(*(_QWORD*)(a1 + 8) + 32LL, v9, v13);
    GameRoutine_65cf40(a1, v14, v47, v6 & 0xFFFFFFFD);
    LODWORD(v15) = v14 + 32;
  LABEL_48:
    *(_DWORD*)(a1 + 20) = v15;
    goto LABEL_49;
  }
  v15 = *(unsigned int*)(a2 + 20);
  if ((int)v15 >= 1) {
    v21 = *(_QWORD*)(a2 + 8);
    v22 = *(_QWORD*)(a1 + 8);
    if (v22 == v21) {
      goto LABEL_48;
    }
    if (*(_DWORD*)(a1 + 16) >= (int)v15) {
    LABEL_47:
      GameRoutine_1a0b950(v22, v21, v15);
      goto LABEL_48;
    }
    *(_QWORD*)(a1 + 8) = 0;
    if (v22 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v23 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v8 + v23, v22);
      v24 = *(_QWORD*)(a1 + 8);
    }
    else {
      v24 = 0;
    }
    v35 = *(_QWORD*)v8;
    *(_QWORD*)(a1 + 16) = 0;
    v36 = GameRoutine_651b90(v35, v15, 16, 0);
    GameRoutine_1a0ba50(v36, 0, v15, v37, v38, v39);
    *(_QWORD*)(a1 + 8) = v36;
    if (v24 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v43 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v8 + v43, v24);
      v36 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 16) = v15;
      if (v36 == 0) {
        v22 = 0;
      LABEL_46:
        *(_DWORD*)(a1 + 20) = 0;
        goto LABEL_47;
      }
    }
    else {
      *(_DWORD*)(a1 + 16) = v15;
    }
    if ((unsigned int)v15 >= 0x20) {
      v44 = 32;
    }
    else {
      v44 = (unsigned int)v15;
    }
    GameRoutine_1a0ba50(v36, 0, v44, v40, v41, v42);
    v22 = *(_QWORD*)(a1 + 8);
    goto LABEL_46;
  }
LABEL_49:
  v45 = 128;
  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
    v45 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v8 + v45, v9);
}

__int64 GameHr_6648e0(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  int v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;

  v1 = result;
  if (GameData_21caab0 == 0) {
    v3 = 19;
  LABEL_6:
    if (GameData_21eea58 != 0) {
      *(_BYTE*)(GameData_21eea58 + 32) = 1;
    }
    v4 = GameRoutine_682780(9);
    if (v4 != 0) {
      for (i = v4; i != 0; i = *(_QWORD*)(i + 624)) {
        v6 = i;
      }
      if (*(_BYTE*)(v6 + 441) == 3) {
        v7 = *(_QWORD*)(v4 + 624);
        if (v7 == 0) {
          v7 = v4;
        }
        v14 = v7;
        v13 = 241;
        v8 = GameRoutine_6ead60(&v14, &v13);
        if (v8 != 0) {
          v9 = (__int64*)(v8 + 2104);
        LABEL_19:
          result = GameRoutine_97b680(v9);
          if (GameData_21eea58 == 0) {
            goto LABEL_26;
          }
          result = *(_QWORD*)(GameData_21eea58 + 80);
          if (result == 0) {
            goto LABEL_26;
          }
          v14 = v1;
          (*(void (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                     &v14);
          v11 = GameData_21eea58;
          result = *(_QWORD*)(GameData_21eea58 + 80);
          *(_QWORD*)(GameData_21eea58 + 80) = 0;
          if (result == v11 + 48) {
            v12 = 32;
          }
          else {
            if (result == 0) {
            LABEL_26:
              *(_DWORD*)(v1 + 152) = v3;
              return result;
            }
            v12 = 40;
          }
          result =
              (*(__int64 (**)(void*))(*(_QWORD*)result + v12))((void*)result);
          goto LABEL_26;
        }
        v10 = *(_QWORD*)(GameData_21caab0 + 176);
        if (*(_BYTE*)(v10 + 144) != 0) {
          v9 = (__int64*)(v10 + 112);
          goto LABEL_19;
        }
      }
    }
    v9 = &GameData_21f49b8;
    goto LABEL_19;
  }
  v2 = *(unsigned __int8*)(GameData_21caab0 + 56);
  if (v2 <= 0x10 && ((0x1F9F5u >> v2) & 1) != 0) {
    v3 = GameData_1b373e4[v2];
    goto LABEL_6;
  }
  return result;
}

bool GameHr_689280(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v5 = *a1;
      v6 = a1[1];
      v7 = *(a2 - 1);
      v8 = *(unsigned __int8*)(v6 + 48);
      v9 = *(unsigned __int8*)(v7 + 48);
      if (v8 < *(unsigned __int8*)(*a1 + 48)) {
        if (v9 >= v8) {
          *a1 = v6;
          a1[1] = v5;
          v22 = *(a2 - 1);
          if (*(unsigned __int8*)(v22 + 48) <
              (unsigned int)*(unsigned __int8*)(v5 + 48)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 >= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      v21 = a1[1];
    LABEL_49:
      v34 = *a1;
      if (*(unsigned __int8*)(v21 + 48) <
          (unsigned int)*(unsigned __int8*)(*a1 + 48)) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      GameRoutine_689100(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v17 = *a1;
    v16 = a1[1];
    v18 = a1[2];
    v19 = *(unsigned __int8*)(v16 + 48);
    v20 = *(unsigned __int8*)(v18 + 48);
    if (v19 >= *(unsigned __int8*)(*a1 + 48)) {
      if (v20 < v19) {
        a1[1] = v18;
        a1[2] = v16;
        if (*(unsigned __int8*)(v18 + 48) <
            (unsigned int)*(unsigned __int8*)(v17 + 48)) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 < v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if (*(unsigned __int8*)(v18 + 48) <
          (unsigned int)*(unsigned __int8*)(v17 + 48)) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    v32 = *(a2 - 1);
    if (*(unsigned __int8*)(v32 + 48) >=
        (unsigned int)*(unsigned __int8*)(v16 + 48)) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    v33 = a1[1];
    v21 = a1[2];
    if (*(unsigned __int8*)(v21 + 48) >=
        (unsigned int)*(unsigned __int8*)(v33 + 48)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if (*(unsigned __int8*)(v3 + 48) <
        (unsigned int)*(unsigned __int8*)(*a1 + 48)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v11 = a1 + 2;
  v10 = a1[2];
  v12 = *a1;
  v13 = a1[1];
  v14 = *(unsigned __int8*)(v13 + 48);
  v15 = *(unsigned __int8*)(v10 + 48);
  if (v14 >= *(unsigned __int8*)(*a1 + 48)) {
    if (v15 < v14) {
      a1[1] = v10;
      a1[2] = v13;
      if (*(unsigned __int8*)(v10 + 48) <
          (unsigned int)*(unsigned __int8*)(v12 + 48)) {
        *a1 = v10;
        a1[1] = v12;
      }
    }
  }
  else {
    if (v15 >= v14) {
      *a1 = v13;
      a1[1] = v12;
      if (*(unsigned __int8*)(v10 + 48) >=
          (unsigned int)*(unsigned __int8*)(v12 + 48)) {
        goto LABEL_32;
      }
      a1[1] = v10;
    }
    else {
      *a1 = v10;
    }
    a1[2] = v12;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    v27 = *v23;
    v28 = *v11;
    if (*(unsigned __int8*)(*v23 + 48) <
        (unsigned int)*(unsigned __int8*)(v28 + 48)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        v28 = *((_QWORD*)v31 - 2);
      } while (*(unsigned __int8*)(v27 + 48) <
               (unsigned int)*(unsigned __int8*)(v28 + 48));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v11 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

__int64 GameHr_6c3050(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  char v16;

  if (*(int*)(a1 + 32) >= 1) {
    *(_DWORD*)(a1 + 32) = 0;
  }
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_DWORD*)(a1 + 504) = 0;
  *(_DWORD*)(a1 + 463) = 0;
  *(_QWORD*)(a1 + 482) = 0;
  *(_QWORD*)(a1 + 468) = 0;
  *(_QWORD*)(a1 + 476) = 0;
  *(_BYTE*)(a1 + 498) = 1;
  *(_QWORD*)(a1 + 514) = 0;
  *(_QWORD*)(a1 + 522) = 0;
  v7 = GameData_212c868;
  *(_QWORD*)(a1 + 530) = 0;
  *(_QWORD*)(a1 + 538) = 0;
  *(_QWORD*)(a1 + 545) = 0;
  v8 = *v7;
  if (*v7 != 0) {
    v9 = *(_QWORD*)(a1 + 560);
    v10 = (*(_QWORD*)(a1 + 568) - v9) >> 1;
    v11 = (int)((__int64)(*(_QWORD*)(v8 + 72) - *(_QWORD*)(v8 + 64)) >> 3);
    if (v11 != v10) {
      if (v11 <= v10) {
        if (v11 < v10) {
          *(_QWORD*)(a1 + 568) = v9 + 2 * v11;
        }
      }
      else {
        GameRoutine_7fe910(a1 + 560, v11 - v10);
      }
    }
  }
  v12 = *(_QWORD*)(a1 + 560);
  v13 = *(_QWORD*)(a1 + 568);
  if (v12 != v13) {
    GameRoutine_1a0ba50(v12, 0, v13 - v12, a4, a5, a6);
  }
  *(_QWORD*)(a1 + 640) = 0;
  *(_BYTE*)(a1 + 501) = 0;
  *(_DWORD*)(a1 + 492) = 0;
  *(_WORD*)(a1 + 496) = 0;
  *(_DWORD*)(a1 + 592) = 0;
  *(_BYTE*)(a1 + 624) = 0;
  *(_WORD*)(a1 + 804) = 0;
  *(_BYTE*)(a1 + 807) = 0;
  *(_DWORD*)(a1 + 416) = 0;
  *(_DWORD*)(a1 + 1768) = 0;
  *(_WORD*)(a1 + 499) = 0;
  *(_QWORD*)(a1 + 1824) = 0;
  *(_QWORD*)(a1 + 1832) = 0;
  *(_DWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1256) = 0;
  *(_DWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1352) = 0;
  *(_QWORD*)(a1 + 1344) = 0;
  *(_DWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_DWORD*)(a1 + 584) = -1;
  v14 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 1152) = 0;
  *(_DWORD*)(a1 + 1384) = 0;
  *(_QWORD*)(a1 + 1448) = 0;
  *(_QWORD*)(a1 + 1440) = 0;
  *(_DWORD*)(a1 + 1480) = 0;
  *(_QWORD*)(a1 + 1544) = 0;
  *(_QWORD*)(a1 + 1536) = 0;
  *(_DWORD*)(a1 + 1576) = 0;
  *(_QWORD*)(a1 + 1640) = 0;
  *(_QWORD*)(a1 + 1632) = 0;
  *(_DWORD*)(a1 + 1672) = 0;
  *(_QWORD*)(a1 + 1736) = 0;
  *(_QWORD*)(a1 + 1728) = 0;
  *(_DWORD*)(a1 + 1864) = 0;
  *(_DWORD*)(a1 + 1872) = 0;
  *(_DWORD*)(a1 + 1888) = 0;
  *(_QWORD*)(a1 + 1880) = 0;
  *(_QWORD*)(a1 + 608) = v14;
  *(_QWORD*)(a1 + 626) = 0;
  *(_QWORD*)(a1 + 634) = 0;
  *(_QWORD*)(a1 + 648) = 1065353216;
  *(_QWORD*)(a1 + 656) = 1065353216;
  *(_QWORD*)(a1 + 664) = 1065353216;
  *(_QWORD*)(a1 + 672) = 1065353216;
  *(_QWORD*)(a1 + 680) = 1065353216;
  *(_QWORD*)(a1 + 688) = 1065353216;
  *(_QWORD*)(a1 + 696) = 1065353216;
  *(_QWORD*)(a1 + 704) = 1065353216;
  *(_QWORD*)(a1 + 712) = 1065353216;
  *(_QWORD*)(a1 + 720) = 1065353216;
  *(_QWORD*)(a1 + 728) = 1065353216;
  *(_QWORD*)(a1 + 736) = 1065353216;
  *(_QWORD*)(a1 + 744) = 1065353216;
  *(_QWORD*)(a1 + 752) = 1065353216;
  *(_QWORD*)(a1 + 760) = 1065353216;
  *(_QWORD*)(a1 + 768) = 1065353216;
  *(_QWORD*)(a1 + 776) = 1065353216;
  *(_QWORD*)(a1 + 784) = 1065353216;
  *(_QWORD*)(a1 + 792) = 1065353216;
  *(_DWORD*)(a1 + 800) = 1065353216;
  *(_DWORD*)(a1 + 808) = 1065353216;
  *(_QWORD*)(a1 + 812) = 0;
  *(_QWORD*)(a1 + 817) = 0;
  *(_QWORD*)(a1 + 1752) = *(_QWORD*)(a1 + 1744);
  *(_QWORD*)(a1 + 1784) = *(_QWORD*)(a1 + 1776);
  *(_QWORD*)(a1 + 1176) = *(_QWORD*)(a1 + 1168);
  *(_QWORD*)(a1 + 1208) = *(_QWORD*)(a1 + 1200);
  *(_QWORD*)(a1 + 1272) = *(_QWORD*)(a1 + 1264);
  *(_QWORD*)(a1 + 1304) = *(_QWORD*)(a1 + 1296);
  *(_QWORD*)(a1 + 1080) = *(_QWORD*)(a1 + 1072);
  *(_QWORD*)(a1 + 1112) = *(_QWORD*)(a1 + 1104);
  *(_QWORD*)(a1 + 1368) = *(_QWORD*)(a1 + 1360);
  *(_QWORD*)(a1 + 1400) = *(_QWORD*)(a1 + 1392);
  *(_QWORD*)(a1 + 1464) = *(_QWORD*)(a1 + 1456);
  *(_QWORD*)(a1 + 1496) = *(_QWORD*)(a1 + 1488);
  *(_QWORD*)(a1 + 1560) = *(_QWORD*)(a1 + 1552);
  *(_QWORD*)(a1 + 1592) = *(_QWORD*)(a1 + 1584);
  *(_QWORD*)(a1 + 1656) = *(_QWORD*)(a1 + 1648);
  *(_QWORD*)(a1 + 1688) = *(_QWORD*)(a1 + 1680);
  *(_QWORD*)(a1 + 1848) = *(_QWORD*)(a1 + 1840);
  *(_QWORD*)(a1 + 1052) = 0;
  *(_QWORD*)(a1 + 1060) = 0;
  *(_QWORD*)(a1 + 1036) = 0;
  *(_QWORD*)(a1 + 1044) = 0;
  *(_QWORD*)(a1 + 1020) = 0;
  *(_QWORD*)(a1 + 1028) = 0;
  *(_QWORD*)(a1 + 1004) = 0;
  *(_QWORD*)(a1 + 1012) = 0;
  *(_QWORD*)(a1 + 988) = 0;
  *(_QWORD*)(a1 + 996) = 0;
  *(_QWORD*)(a1 + 972) = 0;
  *(_QWORD*)(a1 + 980) = 0;
  *(_QWORD*)(a1 + 956) = 0;
  *(_QWORD*)(a1 + 964) = 0;
  *(_QWORD*)(a1 + 940) = 0;
  *(_QWORD*)(a1 + 948) = 0;
  *(_QWORD*)(a1 + 924) = 0;
  *(_QWORD*)(a1 + 932) = 0;
  *(_QWORD*)(a1 + 908) = 0;
  *(_QWORD*)(a1 + 916) = 0;
  *(_QWORD*)(a1 + 892) = 0;
  *(_QWORD*)(a1 + 900) = 0;
  *(_QWORD*)(a1 + 876) = 0;
  *(_QWORD*)(a1 + 884) = 0;
  *(_QWORD*)(a1 + 860) = 0;
  *(_QWORD*)(a1 + 868) = 0;
  *(_QWORD*)(a1 + 844) = 0;
  *(_QWORD*)(a1 + 852) = 0;
  *(_QWORD*)(a1 + 828) = 0;
  *(_QWORD*)(a1 + 836) = 0;
  if ((*(_BYTE*)(a1 + 1920) & 1) != 0) {
    **(_BYTE**)(a1 + 1936) = 0;
    *(_QWORD*)(a1 + 1928) = 0;
  }
  else {
    *(_WORD*)(a1 + 1920) = 0;
  }
  result = GameRoutine_6e3b50(a1 + 1896, *(_QWORD*)(a1 + 1904));
  *(_QWORD*)(a1 + 1976) = 0;
  *(_QWORD*)(a1 + 2000) = 0;
  *(_QWORD*)(a1 + 1912) = 0;
  *(_QWORD*)(a1 + 1896) = a1 + 1904;
  *(_QWORD*)(a1 + 1904) = 0;
  *(_QWORD*)(a1 + 2208) = 0;
  *(_QWORD*)(a1 + 1944) = 0;
  *(_QWORD*)(a1 + 1952) = 0;
  *(_QWORD*)(a1 + 1960) = 0;
  *(_QWORD*)(a1 + 1992) = 0;
  *(_QWORD*)(a1 + 1981) = 0;
  *(_QWORD*)(a1 + 2006) = 0;
  v16 = *(_BYTE*)(a1 + 2112);
  *(_BYTE*)(a1 + 2022) = 0;
  *(_BYTE*)(a1 + 2026) = 0;
  *(_BYTE*)(a1 + 2030) = 0;
  *(_BYTE*)(a1 + 2034) = 0;
  *(_BYTE*)(a1 + 2038) = 0;
  *(_BYTE*)(a1 + 2042) = 0;
  *(_BYTE*)(a1 + 2046) = 0;
  *(_BYTE*)(a1 + 2050) = 0;
  *(_QWORD*)(a1 + 2014) = 0xFFFFFFFFLL;
  *(_BYTE*)(a1 + 2054) = 0;
  *(_BYTE*)(a1 + 2058) = 0;
  *(_BYTE*)(a1 + 2062) = 0;
  *(_BYTE*)(a1 + 2066) = 0;
  *(_BYTE*)(a1 + 2070) = 0;
  *(_BYTE*)(a1 + 2074) = 0;
  *(_BYTE*)(a1 + 2078) = 0;
  *(_BYTE*)(a1 + 2082) = 0;
  *(_BYTE*)(a1 + 2089) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_WORD*)(a1 + 2024) = -1;
  *(_WORD*)(a1 + 2028) = -1;
  *(_WORD*)(a1 + 2032) = -1;
  *(_WORD*)(a1 + 2036) = -1;
  *(_WORD*)(a1 + 2040) = -1;
  *(_WORD*)(a1 + 2044) = -1;
  *(_WORD*)(a1 + 2048) = -1;
  *(_WORD*)(a1 + 2052) = -1;
  *(_WORD*)(a1 + 2056) = -1;
  *(_WORD*)(a1 + 2060) = -1;
  *(_WORD*)(a1 + 2064) = -1;
  *(_WORD*)(a1 + 2068) = -1;
  *(_WORD*)(a1 + 2072) = -1;
  *(_WORD*)(a1 + 2076) = -1;
  *(_WORD*)(a1 + 2080) = -1;
  *(_WORD*)(a1 + 2084) = -1;
  *(_BYTE*)(a1 + 2090) = 3;
  *(_BYTE*)(a1 + 806) = 0;
  *(_DWORD*)(a1 + 2091) = 0;
  *(_DWORD*)(a1 + 2094) = 0;
  if ((v16 & 1) != 0) {
    **(_BYTE**)(a1 + 2128) = 0;
    *(_QWORD*)(a1 + 2120) = 0;
  }
  else {
    *(_WORD*)(a1 + 2112) = 0;
  }
  *(_BYTE*)(a1 + 2140) = 0;
  *(_DWORD*)(a1 + 2136) = 0;
  *(_QWORD*)(a1 + 2152) = 0;
  *(_QWORD*)(a1 + 2160) = 0;
  *(_QWORD*)(a1 + 2168) = 0;
  *(_QWORD*)(a1 + 2176) = 0;
  *(_QWORD*)(a1 + 2184) = 0;
  *(_BYTE*)(a1 + 2192) = 0;
  *(_WORD*)(a1 + 2193) = -1;
  return result;
}

unsigned __int64 GameHr_6f1340(unsigned __int64 result, __int64* a2, __int64 a3,
                               char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  bool v61;
  bool v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 v83;
  int v84;
  __int64* v85;
  bool v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  bool v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64* v108;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64* v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64* v120;
  __int64 v121;
  __int64* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v75 = *v8;
            v76 = v8[1];
            v77 = *(_DWORD*)(*(_QWORD*)(v76 + 24) + 608LL);
            v78 = *(a2 - 1);
            v79 = *(_DWORD*)(*(_QWORD*)(v78 + 24) + 608LL);
            if (v77 <
                (signed __int32)*(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
              if (v79 >= v77) {
                *v8 = v76;
                v8[1] = v75;
                v126 = *(a2 - 1);
                if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v126 + 24) + 608LL) <
                    (signed __int32)*(_DWORD*)(*(_QWORD*)(v75 + 24) + 608LL)) {
                  v8[1] = v126;
                  *(a2 - 1) = v75;
                }
              }
              else {
                *v8 = v78;
                *(a2 - 1) = v75;
              }
              return result;
            }
            if (v79 >= v77) {
              return result;
            }
            v8[1] = v78;
            *(a2 - 1) = v76;
            v123 = v8[1];
          LABEL_182:
            v129 = *v8;
            if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v123 + 24) + 608LL) <
                (signed __int32)*(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
              *v8 = v123;
              v8[1] = v129;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 == 5) {
              return (unsigned __int64)GameRoutine_6f1f10_alt1(
                  v8, v8 + 1, v8 + 2, v8 + 3, a2 - 1);
            }
            goto LABEL_10;
          }
          v81 = *v8;
          v80 = v8[1];
          v82 = *(_DWORD*)(*(_QWORD*)(v80 + 24) + 608LL);
          v83 = v8[2];
          v84 = *(_DWORD*)(*(_QWORD*)(v83 + 24) + 608LL);
          if (v82 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
            if (v84 < v82) {
              v8[1] = v83;
              v8[2] = v80;
              if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v83 + 24) + 608LL) <
                  (signed __int32)*(_DWORD*)(*(_QWORD*)(v81 + 24) + 608LL)) {
                *v8 = v83;
                v8[1] = v81;
              }
              goto LABEL_179;
            }
          }
          else {
            if (v84 < v82) {
              *v8 = v83;
            LABEL_177:
              v8[2] = v81;
              v80 = v81;
              goto LABEL_179;
            }
            *v8 = v80;
            v8[1] = v81;
            if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v83 + 24) + 608LL) <
                (signed __int32)*(_DWORD*)(*(_QWORD*)(v81 + 24) + 608LL)) {
              v8[1] = v83;
              goto LABEL_177;
            }
          }
          v80 = v83;
        LABEL_179:
          v127 = *(a2 - 1);
          if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v127 + 24) + 608LL) >=
              (signed __int32)*(_DWORD*)(*(_QWORD*)(v80 + 24) + 608LL)) {
            return result;
          }
          v8[2] = v127;
          *(a2 - 1) = v80;
          v128 = v8[1];
          v123 = v8[2];
          if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v123 + 24) + 608LL) >=
              (signed __int32)*(_DWORD*)(*(_QWORD*)(v128 + 24) + 608LL)) {
            return result;
          }
          v8[1] = v123;
          v8[2] = v128;
          goto LABEL_182;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v73 = *(a2 - 1);
          v74 = *v8;
          if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v73 + 24) + 608LL) <
              (signed __int32)*(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
            *v8 = v73;
            *(a2 - 1) = v74;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v85 = v8 + 1;
          v87 = v8 == a2 || v85 == a2;
          if ((a4 & 1) != 0) {
            if (!v87) {
              v88 = 8;
              v89 = v8;
              do {
                v92 = *v89;
                v91 = v89[1];
                v89 = v85;
                if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v91 + 24) + 608LL) <
                    (signed __int32)*(_DWORD*)(*(_QWORD*)(v92 + 24) + 608LL)) {
                  v93 = v88;
                  do {
                    v94 = v93 - 8;
                    *(__int64*)((char*)v8 + v93) = v92;
                    if (v93 == 8) {
                      v90 = v8;
                      goto LABEL_124;
                    }
                    v92 = *(__int64*)((char*)v8 + v93 - 16);
                    v93 -= 8;
                  } while (
                      (signed __int32)*(_DWORD*)(*(_QWORD*)(v91 + 24) + 608LL) <
                      (signed __int32)*(_DWORD*)(*(_QWORD*)(v92 + 24) + 608LL));
                  v90 = (__int64*)((char*)v8 + v94);
                LABEL_124:
                  *v90 = v91;
                }
                v85 = v89 + 1;
                v88 += 8;
              } while (v89 + 1 != a2);
            }
          }
          else if (!v87) {
            do {
              v125 = *v7;
              v124 = v7[1];
              v7 = v85;
              if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v124 + 24) + 608LL) <
                  (signed __int32)*(_DWORD*)(*(_QWORD*)(v125 + 24) + 608LL)) {
                do {
                  *v85 = v125;
                  v125 = *(v85 - 2);
                  --v85;
                } while (
                    (signed __int32)*(_DWORD*)(*(_QWORD*)(v124 + 24) + 608LL) <
                    (signed __int32)*(_DWORD*)(*(_QWORD*)(v125 + 24) + 608LL));
                *v85 = v124;
              }
              v85 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v95 = (unsigned __int64)(v9 - 2) >> 1;
            v96 = v95;
            do {
              if (v95 >= v96) {
                v98 = (2 * (v96 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v99 = &v8[v98];
                v100 = *v99;
                if ((__int64)(2 * v96 + 2) < v9 &&
                    (signed __int32)*(_DWORD*)(*(_QWORD*)(v100 + 24) + 608LL) <
                        (signed __int32)*(_DWORD*)(*(_QWORD*)(v99[1] + 24) +
                                                   608LL)) {
                  v100 = v99[1];
                  ++v99;
                  v98 = 2 * v96 + 2;
                }
                v101 = &v8[v96];
                v102 = *v101;
                if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v100 + 24) + 608LL) >=
                    (signed __int32)*(_DWORD*)(*(_QWORD*)(*v101 + 24) +
                                               608LL)) {
                  do {
                    v103 = v99;
                    *v101 = v100;
                    if ((__int64)v95 < v98) {
                      break;
                    }
                    v104 = (2 * (v98 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                    v105 = 2 * v98 + 2;
                    v99 = &v8[v104];
                    v100 = *v99;
                    if (v105 < v9 &&
                        (signed __int32)*(_DWORD*)(*(_QWORD*)(v100 + 24) +
                                                   608LL) <
                            (signed __int32)*(_DWORD*)(*(_QWORD*)(v99[1] + 24) +
                                                       608LL)) {
                      v100 = v99[1];
                      ++v99;
                      v104 = v105;
                    }
                    result = *(unsigned int*)(*(_QWORD*)(v102 + 24) + 608LL);
                    v101 = v103;
                    v98 = v104;
                  } while ((signed __int32)*(_DWORD*)(*(_QWORD*)(v100 + 24) +
                                                      608LL) >= (int)result);
                  *v103 = v102;
                }
              }
              v97 = (__int64)v96-- <= 0;
            } while (!v97);
            do {
              v106 = *v8;
              v107 = 0;
              v108 = v8;
              do {
                v114 = &v108[v107];
                v113 = v114 + 1;
                v112 = v114[1];
                v115 = (2 * v107) | 1;
                v107 = 2 * v107 + 2;
                if (v107 < v9) {
                  v111 = v114[2];
                  v109 = v114 + 2;
                  v110 = v111;
                  result = *(unsigned int*)(*(_QWORD*)(v111 + 24) + 608LL);
                  if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v112 + 24) +
                                                 608LL) >= (int)result) {
                    v107 = v115;
                  }
                  else {
                    v112 = v110;
                    v113 = v109;
                  }
                }
                else {
                  v107 = v115;
                }
                *v108 = v112;
                v108 = v113;
              } while (v107 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v113 == --a2) {
                *v113 = v106;
              }
              else {
                *v113 = *a2;
                *a2 = v106;
                v116 = ((char*)v113 - (char*)v8 + 8) >> 3;
                v97 = v116 < 2;
                v117 = v116 - 2;
                if (!v97) {
                  v118 = v117 >> 1;
                  v119 = *v113;
                  v120 = &v8[v118];
                  v121 = *v120;
                  if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*v120 + 24) +
                                                 608LL) <
                      (signed __int32)*(_DWORD*)(*(_QWORD*)(*v113 + 24) +
                                                 608LL)) {
                    do {
                      v122 = v120;
                      *v113 = v121;
                      if (v118 == 0) {
                        break;
                      }
                      v118 = (v118 - 1) >> 1;
                      v120 = &v8[v118];
                      v121 = *v120;
                      v113 = v122;
                    } while ((signed __int32)*(_DWORD*)(*(_QWORD*)(*v120 + 24) +
                                                        608LL) <
                             (signed __int32)*(_DWORD*)(*(_QWORD*)(v119 + 24) +
                                                        608LL));
                    *v122 = v119;
                  }
                }
              }
              v97 = v9-- <= 2;
            } while (!v97);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(_DWORD*)(*(_QWORD*)(v10 + 24) + 608LL);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(_DWORD*)(*(_QWORD*)(*v11 + 24) + 608LL);
          if (v15 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
            if (v12 < v15) {
              *v11 = v10;
              *(a2 - 1) = v13;
              v19 = *v8;
              if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*v11 + 24) + 608LL) <
                  (signed __int32)*(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
                *v8 = *v11;
                *v11 = v19;
              }
            }
          }
          else {
            if (v12 >= v15) {
              *v8 = v13;
              *v11 = v14;
              v21 = *(a2 - 1);
              if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v21 + 24) + 608LL) >=
                  (signed __int32)*(_DWORD*)(*(_QWORD*)(v14 + 24) + 608LL)) {
                goto LABEL_28;
              }
              *v11 = v21;
            }
            else {
              *v8 = v10;
            }
            *(a2 - 1) = v14;
          }
        LABEL_28:
          v22 = *(v11 - 1);
          v23 = v8[1];
          v24 = *(_DWORD*)(*(_QWORD*)(v22 + 24) + 608LL);
          v25 = *(a2 - 2);
          v26 = *(_DWORD*)(*(_QWORD*)(v25 + 24) + 608LL);
          if (v24 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(v23 + 24) + 608LL)) {
            if (v26 < v24) {
              *(v11 - 1) = v25;
              *(a2 - 2) = v22;
              v27 = *(v11 - 1);
              v28 = v8[1];
              if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v27 + 24) + 608LL) <
                  (signed __int32)*(_DWORD*)(*(_QWORD*)(v28 + 24) + 608LL)) {
                v8[1] = v27;
                *(v11 - 1) = v28;
              }
            }
          }
          else {
            if (v26 >= v24) {
              v8[1] = v22;
              *(v11 - 1) = v23;
              v30 = *(a2 - 2);
              if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v30 + 24) + 608LL) >=
                  (signed __int32)*(_DWORD*)(*(_QWORD*)(v23 + 24) + 608LL)) {
                goto LABEL_40;
              }
              *(v11 - 1) = v30;
            }
            else {
              v8[1] = v25;
            }
            *(a2 - 2) = v23;
          }
        LABEL_40:
          v31 = v11[1];
          v32 = v8[2];
          v33 = *(_DWORD*)(*(_QWORD*)(v31 + 24) + 608LL);
          v34 = *(a2 - 3);
          v35 = *(_DWORD*)(*(_QWORD*)(v34 + 24) + 608LL);
          if (v33 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(v32 + 24) + 608LL)) {
            if (v35 < v33) {
              v11[1] = v34;
              *(a2 - 3) = v31;
              v36 = v11[1];
              v37 = v8[2];
              if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v36 + 24) + 608LL) <
                  (signed __int32)*(_DWORD*)(*(_QWORD*)(v37 + 24) + 608LL)) {
                v8[2] = v36;
                v11[1] = v37;
              }
            }
          }
          else {
            if (v35 >= v33) {
              v8[2] = v31;
              v11[1] = v32;
              v38 = *(a2 - 3);
              if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v38 + 24) + 608LL) >=
                  (signed __int32)*(_DWORD*)(*(_QWORD*)(v32 + 24) + 608LL)) {
                goto LABEL_49;
              }
              v11[1] = v38;
            }
            else {
              v8[2] = v34;
            }
            *(a2 - 3) = v32;
          }
        LABEL_49:
          v39 = *(v11 - 1);
          v40 = *v11;
          v41 = *(_DWORD*)(*(_QWORD*)(*v11 + 24) + 608LL);
          v42 = v11[1];
          v43 = *(_DWORD*)(*(_QWORD*)(v42 + 24) + 608LL);
          if (v41 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(v39 + 24) + 608LL)) {
            if (v43 >= v41) {
              goto LABEL_55;
            }
            *v11 = v42;
            v11[1] = v40;
            if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v42 + 24) + 608LL) <
                (signed __int32)*(_DWORD*)(*(_QWORD*)(v39 + 24) + 608LL)) {
              *(v11 - 1) = v42;
              *v11 = v39;
            LABEL_59:
              v44 = *v8;
              *v8 = v39;
              *v11 = v44;
              goto LABEL_60;
            }
          }
          else {
            if (v43 < v41) {
              *(v11 - 1) = v42;
              v11[1] = v39;
            LABEL_55:
              v39 = v40;
              goto LABEL_59;
            }
            *(v11 - 1) = v40;
            *v11 = v39;
            if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v42 + 24) + 608LL) >=
                (signed __int32)*(_DWORD*)(*(_QWORD*)(v39 + 24) + 608LL)) {
              goto LABEL_59;
            }
            *v11 = v42;
            v11[1] = v39;
          }
          v39 = v42;
          goto LABEL_59;
        }
        v16 = *v8;
        v17 = *v11;
        v18 = *(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL);
        if (v18 >= (signed __int32)*(_DWORD*)(*(_QWORD*)(*v11 + 24) + 608LL)) {
          if (v12 < v18) {
            *v8 = v10;
            *(a2 - 1) = v16;
            v20 = *v11;
            if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL) <
                (signed __int32)*(_DWORD*)(*(_QWORD*)(*v11 + 24) + 608LL)) {
              *v11 = *v8;
              *v8 = v20;
            }
          }
        }
        else {
          if (v12 >= v18) {
            *v11 = v16;
            *v8 = v17;
            v29 = *(a2 - 1);
            if ((signed __int32)*(_DWORD*)(*(_QWORD*)(v29 + 24) + 608LL) >=
                (signed __int32)*(_DWORD*)(*(_QWORD*)(v17 + 24) + 608LL)) {
              goto LABEL_60;
            }
            *v8 = v29;
          }
          else {
            *v11 = v10;
          }
          *(a2 - 1) = v17;
        }
      LABEL_60:
        v45 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v46 = *(_DWORD*)(*(_QWORD*)(v45 + 24) + 608LL);
        if ((signed __int32)*(_DWORD*)(*(_QWORD*)(*(v8 - 1) + 24) + 608LL) <
            v46) {
          goto LABEL_63;
        }
        if (v46 >=
            (signed __int32)*(_DWORD*)(*(_QWORD*)(*(a2 - 1) + 24) + 608LL)) {
          v64 = (unsigned __int64)(v8 + 1);
          do {
            v8 = (__int64*)v64;
            if (v64 >= (unsigned __int64)a2) {
              break;
            }
            v64 += 8LL;
          } while (v46 >=
                   (signed __int32)*(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL));
        }
        else {
          do {
            v63 = v8[1];
            ++v8;
          } while (v46 >=
                   (signed __int32)*(_DWORD*)(*(_QWORD*)(v63 + 24) + 608LL));
        }
        v65 = a2;
        if (v8 < a2) {
          v65 = a2;
          do {
            v66 = *--v65;
          } while (v46 <
                   (signed __int32)*(_DWORD*)(*(_QWORD*)(v66 + 24) + 608LL));
        }
        if (v8 < v65) {
          v67 = *v8;
          v68 = *v65;
          do {
            *v8 = v68;
            *v65 = v67;
            v69 = *(_DWORD*)(*(_QWORD*)(v45 + 24) + 608LL);
            do {
              v70 = v8[1];
              ++v8;
              v67 = v70;
            } while (v69 >=
                     (signed __int32)*(_DWORD*)(*(_QWORD*)(v70 + 24) + 608LL));
            do {
              v71 = *--v65;
              v68 = v71;
            } while (v69 <
                     (signed __int32)*(_DWORD*)(*(_QWORD*)(v71 + 24) + 608LL));
          } while (v8 < v65);
        }
        v72 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v72;
        }
        a4 = 0;
        *v72 = v45;
      }
      v46 = *(_DWORD*)(*(_QWORD*)(v45 + 24) + 608LL);
    LABEL_63:
      v47 = 0;
      do {
        v48 = &v8[v47++];
        v49 = v48[1];
      } while ((signed __int32)*(_DWORD*)(*(_QWORD*)(v49 + 24) + 608LL) < v46);
      v50 = &v8[v47];
      v51 = a2;
      if (v47 == 1) {
        v51 = a2;
        do {
          if (v50 >= v51) {
            break;
          }
          v53 = *--v51;
        } while ((signed __int32)*(_DWORD*)(*(_QWORD*)(v53 + 24) + 608LL) >=
                 v46);
      }
      else {
        do {
          v52 = *--v51;
        } while ((signed __int32)*(_DWORD*)(*(_QWORD*)(v52 + 24) + 608LL) >=
                 v46);
      }
      if (v50 >= v51) {
        v60 = v50 - 1;
        if (v8 == v50 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v8 = *v60;
        goto LABEL_81;
      }
      v54 = *v51;
      v55 = &v8[v47];
      v56 = v51;
      do {
        *v55 = v54;
        *v56 = v49;
        v57 = *(_DWORD*)(*(_QWORD*)(v45 + 24) + 608LL);
        do {
          v58 = v55[1];
          ++v55;
          v49 = v58;
        } while ((signed __int32)*(_DWORD*)(*(_QWORD*)(v58 + 24) + 608LL) <
                 v57);
        do {
          v59 = *--v56;
          v54 = v59;
        } while ((signed __int32)*(_DWORD*)(*(_QWORD*)(v59 + 24) + 608LL) >=
                 v57);
      } while (v55 < v56);
      v60 = v55 - 1;
      if (v8 != v55 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v60 = v45;
      if (v50 < v51) {
        goto LABEL_84;
      }
      v61 = GameRoutine_6f20e0_alt1(v8, v60);
      v8 = v60 + 1;
      v62 = v61;
      result = GameRoutine_6f20e0_alt1(v60 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if (!v62) {
      LABEL_84:
        result = GameHr_6f1340((unsigned __int64)v7, v60, a3, a4 & 1);
        a4 = 0;
        v8 = v60 + 1;
      }
    }
    a2 = v60;
    if (!v62) {
      continue;
    }
    return result;
  }
}

__int64 GameHr_72b080(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v12;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  GameRoutine_1a0ba50(*(_QWORD*)(a1 + 72) + 8LL, 0, 2048, a4, a5, a6);
  v7 = *(unsigned __int8*)(GameData_21ca300 + 20);
  v8 = *(unsigned __int8*)(GameData_21ca300 + 21);
  v9 = *(unsigned __int8*)(GameData_21ca300 + 22);
  v10 = *(unsigned __int8*)(GameData_21ca300 + 23);
  if (v8 <= v10 && v7 <= v9) {
    v14 = v9 + 1;
    v15 = 32 * v8;
    v16 = v9 - v7;
    v17 = 32 * v8 + v7;
    do {
      v19 = v7;
      if ((((_BYTE)v14 - (_BYTE)v7) & 3) != 0) {
        v20 = ((_BYTE)v14 - (_BYTE)v7) & 3;
        v21 = v17;
        v22 = -v7;
        do {
          if (v21 >= 0x400) {
            v23 = 0;
          }
          else {
            v23 = v21;
          }
          v24 = 2LL * (unsigned int)v23;
          if (*(_WORD*)(*(_QWORD*)(a1 + 48) + v24 + 8) != 0) {
            *(_WORD*)(*(_QWORD*)(a1 + 72) + 2 * v23 + 8) =
                *(_WORD*)(*(_QWORD*)(a1 + 48) + v24 + 8);
          }
          else {
            v25 = *(_QWORD*)(a1 + 72) + 8LL;
            if (*(_WORD*)(*(_QWORD*)(a1 + 40) + v24 + 8) != 0) {
              *(_WORD*)(v25 + 2 * v23) =
                  *(_WORD*)(*(_QWORD*)(a1 + 40) + v24 + 8);
            }
            else {
              *(_WORD*)(v25 + 2 * v23) =
                  *(_WORD*)(*(_QWORD*)(a1 + 32) + v24 + 8);
            }
          }
          --v22;
          ++v21;
          --v20;
        } while (v20 != 0);
        v19 = -v22;
      }
      if (v16 >= 3) {
        do {
          LODWORD(v26) = v15 + v19;
          if ((unsigned int)(v15 + v19) >= 0x400) {
            v26 = 0;
          }
          else {
            v26 = (unsigned int)v26;
          }
          v27 = 2LL * (unsigned int)v26;
          if (*(_WORD*)(*(_QWORD*)(a1 + 48) + v27 + 8) != 0) {
            *(_WORD*)(*(_QWORD*)(a1 + 72) + 2 * v26 + 8) =
                *(_WORD*)(*(_QWORD*)(a1 + 48) + v27 + 8);
          }
          else {
            v28 = *(_QWORD*)(a1 + 72) + 8LL;
            if (*(_WORD*)(*(_QWORD*)(a1 + 40) + v27 + 8) != 0) {
              *(_WORD*)(v28 + 2 * v26) =
                  *(_WORD*)(*(_QWORD*)(a1 + 40) + v27 + 8);
            }
            else {
              *(_WORD*)(v28 + 2 * v26) =
                  *(_WORD*)(*(_QWORD*)(a1 + 32) + v27 + 8);
            }
          }
          if ((unsigned int)(v15 + v19 + 1) < 0x400) {
            v29 = (unsigned int)(v15 + v19 + 1);
          }
          else {
            v29 = 0;
          }
          v30 = 2LL * (unsigned int)v29;
          if (*(_WORD*)(*(_QWORD*)(a1 + 48) + v30 + 8) != 0) {
            *(_WORD*)(*(_QWORD*)(a1 + 72) + 2 * v29 + 8) =
                *(_WORD*)(*(_QWORD*)(a1 + 48) + v30 + 8);
          }
          else {
            v31 = *(_QWORD*)(a1 + 72) + 8LL;
            if (*(_WORD*)(*(_QWORD*)(a1 + 40) + v30 + 8) != 0) {
              *(_WORD*)(v31 + 2 * v29) =
                  *(_WORD*)(*(_QWORD*)(a1 + 40) + v30 + 8);
            }
            else {
              *(_WORD*)(v31 + 2 * v29) =
                  *(_WORD*)(*(_QWORD*)(a1 + 32) + v30 + 8);
            }
          }
          LODWORD(v32) = v15 + v19 + 2;
          if ((unsigned int)v32 >= 0x400) {
            v32 = 0;
          }
          else {
            v32 = (unsigned int)v32;
          }
          v33 = 2LL * (unsigned int)v32;
          if (*(_WORD*)(*(_QWORD*)(a1 + 48) + v33 + 8) != 0) {
            *(_WORD*)(*(_QWORD*)(a1 + 72) + 2 * v32 + 8) =
                *(_WORD*)(*(_QWORD*)(a1 + 48) + v33 + 8);
          }
          else {
            v34 = *(_QWORD*)(a1 + 72) + 8LL;
            if (*(_WORD*)(*(_QWORD*)(a1 + 40) + v33 + 8) != 0) {
              *(_WORD*)(v34 + 2 * v32) =
                  *(_WORD*)(*(_QWORD*)(a1 + 40) + v33 + 8);
            }
            else {
              *(_WORD*)(v34 + 2 * v32) =
                  *(_WORD*)(*(_QWORD*)(a1 + 32) + v33 + 8);
            }
          }
          LODWORD(v35) = v15 + v19 + 3;
          if ((unsigned int)v35 >= 0x400) {
            v35 = 0;
          }
          else {
            v35 = (unsigned int)v35;
          }
          v36 = 2LL * (unsigned int)v35;
          if (*(_WORD*)(*(_QWORD*)(a1 + 48) + v36 + 8) != 0) {
            *(_WORD*)(*(_QWORD*)(a1 + 72) + 2 * v35 + 8) =
                *(_WORD*)(*(_QWORD*)(a1 + 48) + v36 + 8);
          }
          else {
            v37 = *(_QWORD*)(a1 + 72) + 8LL;
            if (*(_WORD*)(*(_QWORD*)(a1 + 40) + v36 + 8) != 0) {
              *(_WORD*)(v37 + 2 * v35) =
                  *(_WORD*)(*(_QWORD*)(a1 + 40) + v36 + 8);
            }
            else {
              *(_WORD*)(v37 + 2 * v35) =
                  *(_WORD*)(*(_QWORD*)(a1 + 32) + v36 + 8);
            }
          }
          v19 += 4;
        } while (v14 != v19);
      }
      v17 += 32;
      v15 += 32;
    } while (v8++ != v10);
  }
  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 160) + 32LL))(*(_QWORD*)(a1 + 160));
  v12 = *(_QWORD*)(a1 + 96);
  GameRoutine_72b4a0(v12);
  GameRoutine_72b6c0(v12);
  return GameRoutine_72a260(*(_QWORD*)(a1 + 152));
}

__int64 GameHr_7394a0(__int64 a1, long double a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 result;
  unsigned int* v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v15;
  unsigned __int8* v16;
  unsigned int v17;
  char* v18;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;

  v3 = GameData_212cfd0[0];
  v4 = *GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v5 = GameRoutine_6ea8c0(*GameData_212cfd0[0] + 8, a2);
    if (v5 != 0) {
      v6 = *(char*)(v5 + 585);
      *(_DWORD*)(v4 + 12) = *(char*)(v5 + 584);
      *(_DWORD*)(v4 + 16) = v6;
    }
  }
  v7 = GameData_21ca300;
  v8 = *(_QWORD*)(GameData_21ca300 + 96);
  GameRoutine_72b4a0(v8);
  GameRoutine_72b6c0(v8);
  GameRoutine_72a260(*(_QWORD*)(v7 + 152));
  result = *v3 + 8;
  if (*(_BYTE*)result == 0) {
    goto LABEL_32;
  }
  result = GameRoutine_6ea8c0(result, v9);
  if (result == 0) {
    goto LABEL_32;
  }
  v11 = (unsigned int*)*GameData_212cfd8[0];
  result = GameRoutine_7515a0(*GameData_212cfd8[0] + 24, &v23, &v22, result);
  if ((result & 1) == 0) {
    goto LABEL_32;
  }
  v12 = v11[43];
  v13 = v11[44];
  if (v23 != v12 || v22 != v13) {
    v15 = v11[40];
    if ((int)v15 < 1) {
      goto LABEL_32;
    }
    v16 = (unsigned __int8*)(v11 + 8);
    while (1) {
      v17 = *v16++;
      v18 = (char*)GameData_212cf50 + v17;
      v12 += *v18;
      v13 += v18[256];
      if (v23 == v12 && v22 == v13) {
        break;
      }
      if (--v15 == 0) {
        goto LABEL_32;
      }
    }
  }
  *(_BYTE*)(*v3 + 20) = 14;
  *(_QWORD*)(a1 + 152) = 0;
  result = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 192) = 0;
  if (result == a1 + 160) {
    v20 = 32;
  }
  else {
    if (result == 0) {
      goto LABEL_24;
    }
    v20 = 40;
  }
  result = (*(__int64 (**)(void*))(*(_QWORD*)result + v20))((void*)result);
LABEL_24:
  v21 = *(_QWORD*)(a1 + 8);
  if (v21 != 0) {
    while (1) {
      if (*(_BYTE*)v21 == 2) {
        if (*(_DWORD*)(v21 + 32) == 26) {
          *(_QWORD*)(a1 + 16) = v21;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v21 == 0) {
        break;
      }
      v21 += 64;
    }
  }
LABEL_32:
  *(_BYTE*)(GameData_21ed0a0 + 224) = 0;
  if (GameData_21cf838 != 0) {
    *(_BYTE*)(GameData_21cf838 + 244) = 1;
  }
  return result;
}

#pragma GCC visibility pop
