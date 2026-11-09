#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5e9560(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5e9680(_QWORD, _QWORD, float);
__int64 GameRoutine_5e9780(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_5f33e0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_5f3800(_QWORD, _QWORD, _QWORD, float);
extern __int64 (**GameData_2136538)();
extern __int64 (*GameData_1f8d9c0[10])();
float ModelAnimObj_Destructor(__int64* a1, __int64 a2, float a3);
float ModelAnimObj_Unknown6(__int64 a1, __int64 a2, float a3);
float ModelAnimObj_Unknown12(__int64 a1, __int64 a2, float a3);
float ModelAnimObj_Unknown16(__int64 a1, __int64 a2, float a3);
float ModelAnimObj_Unknown18(__int64 a1, float a2);
__int64 ModelAnimObj_Unknown24(__int64 a1, __int64 a2, float a3);
__int64 ModelAnimObj_Unknown30(__int64 a1, float a2);
__int64 ModelAnimObj_Unknown32(__int64 a1, float a2);
__int64 ModelAnimObj_Unknown34(__int64 a1, float a2);
__int64 ModelAnimObj_Unknown36(__int64 a1, __int64 a2, float a3);
__int64 ModelAnimObj_Unknown42(__int64 a1, float a2);
__int64 ModelAnimObj_Unknown9(__int64 result, __int64 a2);
__int64 ModelAnimObj_Unknown13(__int64 result, __int64 a2);
__int64 ModelAnimObj_Unknown17(__int64 result);
__int64 ModelAnimObj_Unknown21(__int64 result);
_QWORD* ModelAnimObj_Unknown33(_QWORD* result, __int64 a2, float a3);
_QWORD* ModelAnimObj_Unknown35(_QWORD* result, __int64 a2, float a3);
_QWORD* ModelAnimObj_Unknown45(_QWORD* result, __int64 a2, float a3);
_QWORD* ModelAnimObj_Unknown47(_QWORD* result, __int64 a2, float a3);
float ModelAnimObj_DeletingDestructor(__int64 a1, int a2);
float ModelAnimObj_Unknown4(__int64 a1, int a2);
float ModelAnimObj_Unknown7(__int64 a1, int a2);

float ModelAnimObj_Destructor(__int64* a1, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  float v5;
  int v6;
  unsigned int v7;
  float v8;
  float result;
  float* v10;
  float v11;
  __int64 v12;

  v3 = *a1;
  if (a3 >= *(float*)(*a1 + 4 * (*((unsigned __int16*)a1 + 9) - 1LL))) {
    v7 = (unsigned __int16)(*((_WORD*)a1 + 9) - 1);
    *(_DWORD*)(a2 + 8) = v7;
    v8 = *(float*)(v3 + 4LL * v7);
    *(float*)a2 = v8;
    result = v8 + 1.0;
    *(float*)(a2 + 4) = result;
  }
  else {
    v4 = *(int*)(a2 + 8);
    if (a3 >= *(float*)(v3 + 4 * v4)) {
      v6 = v4 - 1;
      v10 = (float*)(v3 + 4 * v4 + 4);
      do {
        v11 = *v10++;
        ++v6;
      } while (v11 <= a3);
    }
    else {
      do {
        v5 = *(float*)(v3 - 4 + 4 * v4);
        v6 = --v4;
      } while (a3 < v5);
    }
    *(_DWORD*)(a2 + 8) = v6;
    v12 = v3 + 4LL * v6;
    *(_DWORD*)a2 = *(_DWORD*)v12;
    result = *(float*)(v12 + 4);
    *(float*)(a2 + 4) = result;
  }
  return result;
}

float ModelAnimObj_Unknown6(__int64 a1, __int64 a2, float a3)
{
  float v4;
  float v7;
  float v8;
  float v9;
  unsigned int v10;
  float v11;
  unsigned int v12;
  unsigned int v13;
  float* v14;

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
  v14 = (float*)(*(_QWORD*)(a1 + 8) + 16LL * *(int*)(a2 + 8));
  return (float)(*v14 +
                 (float)(v14[1] * (float)((float)(a3 - v4) *
                                          (float)(1.0 / (float)(v7 - v4))))) +
         (float)((float)((float)((float)(a3 - v4) *
                                 (float)(1.0 / (float)(v7 - v4))) *
                         (float)(v14[2] +
                                 (float)(v14[3] *
                                         (float)((float)(a3 - v4) *
                                                 (float)(1.0 /
                                                         (float)(v7 - v4)))))) *
                 (float)((float)(a3 - v4) * (float)(1.0 / (float)(v7 - v4))));
}

float ModelAnimObj_Unknown12(__int64 a1, __int64 a2, float a3)
{
  float v4;
  float v7;
  float v8;
  float v9;
  unsigned int v10;
  float v11;
  unsigned int v12;
  unsigned int v13;
  float* v14;

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
  v14 = (float*)(*(_QWORD*)(a1 + 8) + 8LL * *(int*)(a2 + 8));
  return *v14 + (float)(v14[1] * (float)((float)(a3 - v4) *
                                         (float)(1.0 / (float)(v7 - v4))));
}

float ModelAnimObj_Unknown16(__int64 a1, __int64 a2, float a3)
{
  float v4;
  float v7;
  float v8;
  float v9;
  unsigned int v10;
  float v11;
  unsigned int v12;
  unsigned int v13;

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
  return (float)*(char*)(*(_QWORD*)(a1 + 8) + 2LL * *(int*)(a2 + 8)) +
         (float)((float)*(char*)(*(_QWORD*)(a1 + 8) + 2LL * *(int*)(a2 + 8) +
                                 1) *
                 (float)((float)(a3 - v4) * (float)(1.0 / (float)(v7 - v4))));
}

float ModelAnimObj_Unknown18(__int64 a1, float a2)
{
  float* v2;

  v2 = (float*)(*(_QWORD*)(a1 + 8) + 4LL * ((int)a2 - (int)*(float*)(a1 + 24)));
  return (float)((float)(1.0 - (float)(a2 - (float)(int)a2)) * *v2) +
         (float)(v2[1] * (float)(a2 - (float)(int)a2));
}

__int64 ModelAnimObj_Unknown24(__int64 a1, __int64 a2, float a3)
{
  float v5;
  float v6;
  unsigned int v7;
  float v8;
  unsigned int v9;
  unsigned int v10;

  if (a3 < *(float*)a2 || *(float*)(a2 + 4) <= a3) {
    v5 = *(float*)(a1 + 24);
    v6 = *(float*)(a1 + 28) - v5;
    *(float*)&v7 = a3 - v5;
    v8 = *(float*)&v7 * (float)(1.0 / v6);
    LOWORD(v7) = *(_WORD*)(a1 + 18);
    v9 = (int)(float)(v8 * (float)v7);
    *(_DWORD*)(a2 + 8) = v9;
    v10 = *(unsigned __int16*)(a1 + 18);
    if (v10 <= v9) {
      *(_DWORD*)(a2 + 8) = v10 - 1;
    }
    ((void (*)(__int64,
               __int64))GameData_2136538[2 * (*(_WORD*)(a1 + 16) & 3)])(a1, a2);
  }
  return *(unsigned int*)(*(_QWORD*)(a1 + 8) + 4LL * *(int*)(a2 + 8));
}

__int64 ModelAnimObj_Unknown30(__int64 a1, float a2)
{
  return *(unsigned int*)(*(_QWORD*)(a1 + 8) +
                          4LL * ((int)a2 - (int)*(float*)(a1 + 24)));
}

__int64 ModelAnimObj_Unknown32(__int64 a1, float a2)
{
  return (unsigned int)*(__int16*)(*(_QWORD*)(a1 + 8) +
                                   2LL * ((int)a2 - (int)*(float*)(a1 + 24)));
}

__int64 ModelAnimObj_Unknown34(__int64 a1, float a2)
{
  return (unsigned int)*(char*)(*(_QWORD*)(a1 + 8) + (int)a2 -
                                (int)*(float*)(a1 + 24));
}

__int64 ModelAnimObj_Unknown36(__int64 a1, __int64 a2, float a3)
{
  float v5;
  float v6;
  unsigned int v7;
  float v8;
  unsigned int v9;
  unsigned int v10;

  if (a3 < *(float*)a2 || *(float*)(a2 + 4) <= a3) {
    v5 = *(float*)(a1 + 24);
    v6 = *(float*)(a1 + 28) - v5;
    *(float*)&v7 = a3 - v5;
    v8 = *(float*)&v7 * (float)(1.0 / v6);
    LOWORD(v7) = *(_WORD*)(a1 + 18);
    v9 = (int)(float)(v8 * (float)v7);
    *(_DWORD*)(a2 + 8) = v9;
    v10 = *(unsigned __int16*)(a1 + 18);
    if (v10 <= v9) {
      *(_DWORD*)(a2 + 8) = v10 - 1;
    }
    ((void (*)(__int64,
               __int64))GameData_2136538[2 * (*(_WORD*)(a1 + 16) & 3)])(a1, a2);
  }
  return (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 4LL * (*(int*)(a2 + 8) >> 5)) >>
          *(_DWORD*)(a2 + 8)) &
         1;
}

__int64 ModelAnimObj_Unknown42(__int64 a1, float a2)
{
  int v2;

  v2 = (int)a2 - (int)*(float*)(a1 + 24);
  return (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 4LL * (v2 >> 5)) >> v2) & 1;
}

__int64 ModelAnimObj_Unknown9(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  char v7;
  char v8;
  _DWORD* v9;
  unsigned int v10;

  v2 = *(unsigned __int16*)(result + 100);
  v3 = result;
  if (*(_WORD*)(result + 100) == 0) {
    v10 = *(_DWORD*)(result + 124) & 0xFFFFFFF3 | 4;
  LABEL_10:
    *(_DWORD*)(v3 + 124) = v10;
    return result;
  }
  v4 = *(_QWORD*)(result + 72);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  do {
    v9 = (_DWORD*)(v4 + 48 * v6);
    if ((*(_DWORD*)(*(_QWORD*)(v3 + 88) + 4 * v6) & 0x7FFF) != 0x7FFF) {
      result = GameRoutine_5e9560(
          *(_QWORD*)(v3 + 112) + 56 * v6, v4 + 48 * v6,
          *(_QWORD*)(a2 + 16) +
              96LL * (*(_DWORD*)(*(_QWORD*)(v3 + 88) + 4 * v6) & 0x7FFF));
    }
    ++v6;
    v8 |= (*v9 & 0x300000) != 0;
    v7 |= (*v9 & 0x300000) == 0;
  } while (v6 != v2);
  v10 = *(_DWORD*)(v3 + 124) & 0xFFFFFFF3;
  *(_DWORD*)(v3 + 124) = v10 | 4;
  if ((v8 & 1) != 0) {
    if ((v7 & 1) != 0) {
      v10 |= 8u;
    }
    goto LABEL_10;
  }
  return result;
}

__int64 ModelAnimObj_Unknown13(__int64 result, __int64 a2)
{
  __int64 v2;
  _DWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  _DWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  unsigned int v19;
  _DWORD* v20;

  v2 = result;
  if (*(_WORD*)(result + 100) == 0) {
    v19 = *(_DWORD*)(result + 124) & 0xFFFFFFF3 | 4;
  LABEL_18:
    *(_DWORD*)(v2 + 124) = v19;
    return result;
  }
  v3 = *(_DWORD**)(result + 72);
  v4 = 4LL * *(unsigned __int16*)(result + 100);
  v5 = 40;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v20 = v3;
  do {
    v10 = *(_QWORD*)(v2 + 88);
    v9 = v3;
    v11 = *(_DWORD*)(v10 + v6) & 0x7FFF;
    if ((*(_DWORD*)(v10 + v6) & 0x7FFF) != 0x7FFF) {
      v12 = *(_QWORD*)(v2 + 112);
      v13 = v12 + v5 - 40;
      v14 = *(__int16*)(*(_QWORD*)(*(_QWORD*)(v2 + 136) + 48LL) + 2 * v11);
      v15 = *(_QWORD*)(a2 + 16);
      if (v14 < 0) {
        result = GameRoutine_5e9560(
            v13, v3, v15 + 96LL * (*(_DWORD*)(v10 + v6) & 0x7FFF));
        v9 = v3;
      }
      else {
        v16 = v15 + 96LL * *(__int16*)(*(_QWORD*)(*(_QWORD*)(v2 + 136) + 48LL) +
                                       2 * v11);
        v9 = &v20[12 * ((*(_DWORD*)(v10 + 4 * v14) >> 15) & 0x7FFF)];
        result = GameRoutine_5e9560(v13, v9, v16);
        v17 = *(_DWORD*)(v12 + v5) & 0xE020;
        if ((*(_DWORD*)(v12 + v5) & 0x1E10) == 0x10) {
          v18 = *(_DWORD*)(v16 + 52);
          if (v17 == 32) {
            result =
                ((__int64 (*)(_DWORD*, _QWORD))
                     GameData_1f8d9c0[3 * ((unsigned __int8)*(
                                               _DWORD*)(*(_QWORD*)(v2 + 136) +
                                                        4LL) >>
                                           6) +
                                      2])(v9, v18 & 0x700000);
          }
          else {
            result =
                ((__int64 (*)(_DWORD*, _QWORD))
                     GameData_1f8d9c0[3 * ((unsigned __int8)*(
                                               _DWORD*)(*(_QWORD*)(v2 + 136) +
                                                        4LL) >>
                                           6)])(v9, v18 & 0x700000);
          }
        }
        else if (v17 == 32) {
          result =
              ((__int64 (*)(_DWORD*, _QWORD))
                   GameData_1f8d9c0[3 * ((unsigned __int8)*(
                                             _DWORD*)(*(_QWORD*)(v2 + 136) +
                                                      4LL) >>
                                         6) +
                                    1])(v9, *(_DWORD*)(v16 + 52) & 0x700000);
        }
      }
    }
    v6 += 4;
    v3 += 12;
    v5 += 56;
    v8 |= (*v9 & 0x300000) != 0;
    v7 |= (*v9 & 0x300000) == 0;
  } while (v4 != v6);
  v19 = *(_DWORD*)(v2 + 124) & 0xFFFFFFF3;
  *(_DWORD*)(v2 + 124) = v19 | 4;
  if ((v8 & 1) != 0) {
    if ((v7 & 1) != 0) {
      v19 |= 8u;
    }
    goto LABEL_18;
  }
  return result;
}

__int64 ModelAnimObj_Unknown17(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  float v4;
  int v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  __int64 v13;
  unsigned int v14;

  v1 = *(_QWORD*)(result + 72);
  v2 = *(unsigned __int16*)(result + 100);
  v3 = (_QWORD*)result;
  v4 = **(float**)(result + 8);
  v5 = *(_DWORD*)(result + 60);
  if (v5 >= 1 && v5 <= *(_DWORD*)(result + 56)) {
    if (*(_WORD*)(result + 100) != 0) {
      v8 = 4 * v2;
      v9 = 46;
      v10 = 0;
      v11 = 0;
      do {
        v12 = (unsigned __int8*)(v3[14] + v9);
        v14 = *v12;
        result = (__int64)(v12 - 46);
        v13 = v14;
        if ((*(_BYTE*)(v3[11] + v10 + 3) & 0x40) == 0) {
          result = GameRoutine_5e9780(result, v1, v3[6] + 12 * v11, v4);
        }
        v11 += v13;
        v10 += 4;
        v1 += 48;
        v9 += 56;
      } while (v8 != v10);
    }
  }
  else if (*(_WORD*)(result + 100) != 0) {
    v7 = 0;
    do {
      if ((*(_DWORD*)(v3[11] + 4 * v7) & 0x40000000) == 0) {
        result = GameRoutine_5e9680(v3[14] + 56 * v7, v1 + 48 * v7, v4);
      }
      ++v7;
    } while (v7 != v2);
  }
  return result;
}

__int64 ModelAnimObj_Unknown21(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  float v4;
  int v5;
  __int64 v7;
  __int64 i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  unsigned __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;

  v1 = *(_QWORD*)(result + 72);
  v2 = *(unsigned __int16*)(result + 100);
  v3 = (_QWORD*)result;
  v4 = **(float**)(result + 8);
  v5 = *(_DWORD*)(result + 60);
  if (v5 >= 1 && v5 <= *(_DWORD*)(result + 56)) {
    if (*(_WORD*)(result + 100) == 0) {
      return result;
    }
    v31 = 47;
    v32 = 0;
    v33 = 0;
    while (1) {
      v34 = v3[14];
      v35 = v3[11];
      result = v34 + v31 - 47;
      v36 = *(unsigned __int8*)(v34 + v31 - 1);
      v37 = *(_DWORD*)(v35 + 4 * v32);
      v38 = v37 & 0x7FFF;
      if ((v37 & 0x7FFF) == 0x7FFF) {
        break;
      }
      v39 = v3[17];
      v40 = *(__int16*)(*(_QWORD*)(v39 + 48) + 2 * v38);
      if ((v40 & 0x80000000) == 0) {
        v41 = ((unsigned __int64)*(unsigned int*)(v35 + 4LL * v40) >> 15) &
              0x7FFF;
        if ((*(_DWORD*)(v35 + 4 * v41) & 0x40000000) == 0) {
          v42 = v1 + 48LL * (unsigned int)v41;
          v43 = *(_DWORD*)(v34 + v31 - 7);
          if ((v43 & 0xE000) != 0) {
            if ((v43 & 0x1E00) != 0) {
              if ((*(_DWORD*)(*(_QWORD*)(v39 + 16) + 96LL * v40 + 52) &
                   0x700000) != 0x400000) {
                v20 = (v43 & 8) == 0;
                v44 = 12;
                if (v20) {
                  v44 = 0;
                }
                v45 = *(_QWORD*)(v34 + v31 - 31) + v44;
                v46 = *(_QWORD*)v45;
                *(_DWORD*)(v42 + 40) = *(_DWORD*)(v45 + 8);
                *(_QWORD*)(v42 + 32) = v46;
              }
              v47 = *(_QWORD*)(v34 + v31 - 31) +
                    4LL * *(unsigned __int8*)(v34 + v31);
              v48 = *(_QWORD*)v47;
              *(_DWORD*)(v42 + 24) = *(_DWORD*)(v47 + 8);
              *(_QWORD*)(v42 + 16) = v48;
              GameRoutine_5e9780(result, v42, v3[6] + 12 * v33, v4);
              result =
                  ((__int64 (*)(__int64, _QWORD))GameData_1f8d9c0
                       [3 * ((unsigned __int8)*(_DWORD*)(v3[17] + 4LL) >> 6) +
                        2])(v42, *(_DWORD*)(*(_QWORD*)(v3[17] + 16LL) +
                                            96LL * v40 + 52) &
                                     0x700000);
            }
            else {
              v53 = *(_QWORD*)(v34 + v31 - 31) +
                    4LL * *(unsigned __int8*)(v34 + v31);
              v54 = *(_QWORD*)v53;
              *(_DWORD*)(v42 + 24) = *(_DWORD*)(v53 + 8);
              *(_QWORD*)(v42 + 16) = v54;
              GameRoutine_5e9780(result, v42, v3[6] + 12 * v33, v4);
              result =
                  ((__int64 (*)(__int64, _QWORD))GameData_1f8d9c0
                       [3 * ((unsigned __int8)*(_DWORD*)(v3[17] + 4LL) >> 6) +
                        1])(v42, *(_DWORD*)(*(_QWORD*)(v3[17] + 16LL) +
                                            96LL * v40 + 52) &
                                     0x700000);
            }
          }
          else if ((v43 & 0x1E00) != 0) {
            if ((*(_DWORD*)(*(_QWORD*)(v39 + 16) + 96LL * v40 + 52) &
                 0x700000) != 0x400000) {
              v49 = 12;
              v50 = *(_QWORD*)(v34 + v31 - 31);
              if ((v43 & 8) == 0) {
                v49 = 0;
              }
              v51 = (__int64*)(v50 + v49);
              v52 = *v51;
              *(_DWORD*)(v42 + 40) = *((_DWORD*)v51 + 2);
              *(_QWORD*)(v42 + 32) = v52;
            }
            GameRoutine_5e9780(result, v42, v3[6] + 12 * v33, v4);
            result =
                ((__int64 (*)(__int64, _QWORD))GameData_1f8d9c0
                     [3 * ((unsigned __int8)*(_DWORD*)(v3[17] + 4LL) >> 6)])(
                    v42,
                    *(_DWORD*)(*(_QWORD*)(v3[17] + 16LL) + 96LL * v40 + 52) &
                        0x700000);
          }
          else {
            result = GameRoutine_5e9780(result, v42, v3[6] + 12 * v33, v4);
          }
        }
        goto LABEL_34;
      }
      if ((*(_DWORD*)(v35 + 4 * v32) & 0x40000000) == 0) {
        goto LABEL_33;
      }
    LABEL_34:
      v33 += v36;
      ++v32;
      v31 += 56;
      if (v2 == v32) {
        return result;
      }
    }
    if ((v37 & 0x40000000) != 0) {
      goto LABEL_34;
    }
  LABEL_33:
    result = GameRoutine_5e9780(result, v1 + 48 * v32, v3[6] + 12 * v33, v4);
    goto LABEL_34;
  }
  if (*(_WORD*)(result + 100) != 0) {
    v7 = 47;
    for (i = 0; v2 != i; ++i) {
      v11 = v3[14];
      v12 = v3[11];
      result = v11 + v7 - 47;
      v13 = *(_DWORD*)(v12 + 4 * i);
      v14 = v13 & 0x7FFF;
      if ((v13 & 0x7FFF) == 0x7FFF) {
        if ((v13 & 0x40000000) == 0) {
          goto LABEL_21;
        }
      }
      else {
        v15 = v3[17];
        v16 = *(__int16*)(*(_QWORD*)(v15 + 48) + 2 * v14);
        if ((v16 & 0x80000000) != 0) {
          if ((*(_DWORD*)(v12 + 4 * i) & 0x40000000) == 0) {
          LABEL_21:
            v24 = v1 + 48 * i;
          LABEL_22:
            result = GameRoutine_5e9680(result, v24, v4);
          }
        }
        else {
          v17 = ((unsigned __int64)*(unsigned int*)(v12 + 4LL * v16) >> 15) &
                0x7FFF;
          if ((*(_DWORD*)(v12 + 4 * v17) & 0x40000000) == 0) {
            v18 = v1 + 48LL * (unsigned int)v17;
            v19 = *(_DWORD*)(v11 + v7 - 7);
            if ((v19 & 0xE000) != 0) {
              if ((v19 & 0x1E00) != 0) {
                if ((*(_DWORD*)(*(_QWORD*)(v15 + 16) + 96LL * v16 + 52) &
                     0x700000) != 0x400000) {
                  v20 = (v19 & 8) == 0;
                  v21 = 12;
                  if (v20) {
                    v21 = 0;
                  }
                  v22 = *(_QWORD*)(v11 + v7 - 31) + v21;
                  v23 = *(_QWORD*)v22;
                  *(_DWORD*)(v18 + 40) = *(_DWORD*)(v22 + 8);
                  *(_QWORD*)(v18 + 32) = v23;
                }
                v9 = *(_QWORD*)(v11 + v7 - 31) +
                     4LL * *(unsigned __int8*)(v11 + v7);
                v10 = *(_QWORD*)v9;
                *(_DWORD*)(v18 + 24) = *(_DWORD*)(v9 + 8);
                *(_QWORD*)(v18 + 16) = v10;
                GameRoutine_5e9680(result, v18, v4);
                result =
                    ((__int64 (*)(__int64, _QWORD))GameData_1f8d9c0
                         [3 * ((unsigned __int8)*(_DWORD*)(v3[17] + 4LL) >> 6) +
                          2])(v18, *(_DWORD*)(*(_QWORD*)(v3[17] + 16LL) +
                                              96LL * v16 + 52) &
                                       0x700000);
              }
              else {
                v29 = *(_QWORD*)(v11 + v7 - 31) +
                      4LL * *(unsigned __int8*)(v11 + v7);
                v30 = *(_QWORD*)v29;
                *(_DWORD*)(v18 + 24) = *(_DWORD*)(v29 + 8);
                *(_QWORD*)(v18 + 16) = v30;
                GameRoutine_5e9680(result, v18, v4);
                result =
                    ((__int64 (*)(__int64, _QWORD))GameData_1f8d9c0
                         [3 * ((unsigned __int8)*(_DWORD*)(v3[17] + 4LL) >> 6) +
                          1])(v18, *(_DWORD*)(*(_QWORD*)(v3[17] + 16LL) +
                                              96LL * v16 + 52) &
                                       0x700000);
              }
              goto LABEL_8;
            }
            if ((v19 & 0x1E00) != 0) {
              if ((*(_DWORD*)(*(_QWORD*)(v15 + 16) + 96LL * v16 + 52) &
                   0x700000) != 0x400000) {
                v25 = 12;
                v26 = *(_QWORD*)(v11 + v7 - 31);
                if ((v19 & 8) == 0) {
                  v25 = 0;
                }
                v27 = (__int64*)(v26 + v25);
                v28 = *v27;
                *(_DWORD*)(v18 + 40) = *((_DWORD*)v27 + 2);
                *(_QWORD*)(v18 + 32) = v28;
              }
              GameRoutine_5e9680(result, v18, v4);
              result =
                  ((__int64 (*)(__int64, _QWORD))GameData_1f8d9c0
                       [3 * ((unsigned __int8)*(_DWORD*)(v3[17] + 4LL) >> 6)])(
                      v18,
                      *(_DWORD*)(*(_QWORD*)(v3[17] + 16LL) + 96LL * v16 + 52) &
                          0x700000);
              goto LABEL_8;
            }
            v24 = v1 + 48LL * (unsigned int)v17;
            goto LABEL_22;
          }
        }
      }
    LABEL_8:
      v7 += 56;
    }
  }
  return result;
}

_QWORD* ModelAnimObj_Unknown33(_QWORD* result, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _QWORD* v8;
  __int64 v9;

  if (*(_WORD*)(a2 + 100) != 0) {
    v3 = *(_QWORD*)(a2 + 72);
    v4 = *result;
    v6 = 4LL * *(unsigned __int16*)(a2 + 100);
    v8 = result;
    v9 = 0;
    do {
      if ((*(_DWORD*)(*(_QWORD*)(a2 + 88) + v9) & 0x80000000) == 0 &&
          (*(_DWORD*)(*(_QWORD*)(a2 + 88) + v9) & 0x7FFF) != 0x7FFF) {
        result = (_QWORD*)GameRoutine_5f33e0(v8, v4, v3, a3);
      }
      v9 += 4;
      v3 += 48;
    } while (v6 != v9);
  }
  return result;
}

_QWORD* ModelAnimObj_Unknown35(_QWORD* result, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _QWORD* v8;
  __int64 v9;

  if (*(_WORD*)(a2 + 100) != 0) {
    v3 = *(_QWORD*)(a2 + 72);
    v4 = *result;
    v6 = 4LL * *(unsigned __int16*)(a2 + 100);
    v8 = result;
    v9 = 0;
    do {
      if ((*(_DWORD*)(*(_QWORD*)(a2 + 88) + v9) & 0x80000000) == 0 &&
          (*(_DWORD*)(*(_QWORD*)(a2 + 88) + v9) & 0x7FFF) != 0x7FFF) {
        result = (_QWORD*)GameRoutine_5f3800(v8, v4, v3, a3);
      }
      v9 += 4;
      v3 += 48;
    } while (v6 != v9);
  }
  return result;
}

_QWORD* ModelAnimObj_Unknown45(_QWORD* result, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _QWORD* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  float v14;

  if (*(_WORD*)(a2 + 100) != 0) {
    v3 = *(_QWORD*)(a2 + 72);
    v4 = *result;
    v6 = 4LL * *(unsigned __int16*)(a2 + 100);
    v8 = result;
    v9 = 0;
    do {
      v10 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v9);
      if ((v10 & 0x80000000) == 0 &&
          (*(_DWORD*)(*(_QWORD*)(a2 + 88) + v9) & 0x7FFF) != 0x7FFF) {
        v11 = v8[3];
        v12 = a2;
        v13 = v10 & 0x7FFF;
        v14 = a3;
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v11 + 16LL))(v11, &v12);
        result = (_QWORD*)GameRoutine_5f33e0(v8, v4, v3, v14);
      }
      v9 += 4;
      v3 += 48;
    } while (v6 != v9);
  }
  return result;
}

_QWORD* ModelAnimObj_Unknown47(_QWORD* result, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _QWORD* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  float v14;

  if (*(_WORD*)(a2 + 100) != 0) {
    v3 = *(_QWORD*)(a2 + 72);
    v4 = *result;
    v6 = 4LL * *(unsigned __int16*)(a2 + 100);
    v8 = result;
    v9 = 0;
    do {
      v10 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v9);
      if ((v10 & 0x80000000) == 0 &&
          (*(_DWORD*)(*(_QWORD*)(a2 + 88) + v9) & 0x7FFF) != 0x7FFF) {
        v11 = v8[3];
        v12 = a2;
        v13 = v10 & 0x7FFF;
        v14 = a3;
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v11 + 16LL))(v11, &v12);
        result = (_QWORD*)GameRoutine_5f3800(v8, v4, v3, v14);
      }
      v9 += 4;
      v3 += 48;
    } while (v6 != v9);
  }
  return result;
}

float ModelAnimObj_DeletingDestructor(__int64 a1, int a2)
{
  __int64 v2;
  int v3;
  unsigned __int64 v4;
  float v5;
  float result;

  v2 = 16;
  if (a2 != 0) {
    HIDWORD(v4) = a2;
    LODWORD(v4) = a2;
    v3 = v4 >> 20;
    if (v3 != 3) {
      if (v3 != 4) {
        return result;
      }
      v2 = 24;
      v5 = -*(float*)(a1 + 20);
      *(float*)(a1 + 16) = -*(float*)(a1 + 16);
      *(float*)(a1 + 20) = v5;
    }
  }
  result = -*(float*)(a1 + v2);
  *(float*)(a1 + v2) = result;
  return result;
}

float ModelAnimObj_Unknown4(__int64 a1, int a2)
{
  unsigned int v2;
  unsigned __int64 v3;
  __int64 v4;
  float v5;
  float result;

  HIDWORD(v3) = a2;
  LODWORD(v3) = a2;
  v2 = v3 >> 20;
  if (v2 < 2) {
    v4 = 16;
  }
  else if (v2 - 2 >= 2) {
    if (v2 != 4) {
      return result;
    }
    v4 = 24;
    v5 = -*(float*)(a1 + 20);
    *(float*)(a1 + 16) = -*(float*)(a1 + 16);
    *(float*)(a1 + 20) = v5;
  }
  else {
    v4 = 20;
  }
  result = -*(float*)(a1 + v4);
  *(float*)(a1 + v4) = result;
  return result;
}

float ModelAnimObj_Unknown7(__int64 a1, int a2)
{
  unsigned int v2;
  unsigned __int64 v3;
  float v4;
  __int64 v5;
  float result;

  HIDWORD(v3) = a2;
  LODWORD(v3) = a2;
  v2 = v3 >> 20;
  if (v2 < 2) {
    v5 = 16;
  }
  else {
    if (v2 - 2 >= 2) {
      if (v2 != 4) {
        return result;
      }
      v4 = -*(float*)(a1 + 20);
      *(float*)(a1 + 16) = -*(float*)(a1 + 16);
      *(float*)(a1 + 20) = v4;
    }
    v5 = 24;
  }
  result = -*(float*)(a1 + v5);
  *(float*)(a1 + v5) = result;
  return result;
}

#pragma GCC visibility pop
