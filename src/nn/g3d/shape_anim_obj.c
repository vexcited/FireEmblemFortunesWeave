#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5dfe60(__int64 result, unsigned __int16);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
float GameRoutine_5e9320(__int64, _DWORD*);
void GameRoutine_5e9180(__int64, float*, unsigned __int8*, long double);
void GameRoutine_5e9260(__int64, float*, unsigned __int8*, long double);
__int64 ShapeAnimObj_Unknown4(__int64 a1, __int64 a2);
__int64 ShapeAnimObj_5ea620(__int64 a1, __int64 a2, __int64 a3);
void ShapeAnimObj_Unknown2(__int64 a1);
__int64 ShapeAnimObj_Unknown5(__int64 a1, _QWORD* a2);
void ShapeAnimObj_Unknown3(__int64 a1, long double a2);
__int64 ShapeAnimObj_Unknown7(__int64 result, __int64 a2);
float GameRoutine_5e52c0(__int64, long double);
void ShapeAnimObj_5e9180(__int64 a1, float* a2, unsigned __int8* a3,
                         long double a4);
void ShapeAnimObj_5e9260(__int64 a1, float* a2, unsigned __int8* a3,
                         long double a4);
float ShapeAnimObj_5e9320(__int64 a1, _DWORD* a2);
__int64 MaterialAnimObj_5dfe60(__int64 result, unsigned __int16);
__int64 MaterialAnimObj_5dff40(__int64 result, __int64);
void ShapeAnimObj_Unknown6(__int64 a1, __int64 a2);

void ShapeAnimObj_5e9180(__int64 a1, float* a2, unsigned __int8* a3,
                         long double a4)
{
  __int64 v4;
  int v5;
  char* v9;
  int v10;

  v4 = *(unsigned __int16*)(a1 + 34);
  if (*(_WORD*)(a1 + 34) != 0) {
    v5 = LODWORD(a4);
    v9 = (char*)(*(_QWORD*)(a1 + 24) + 8LL);
    do {
      v10 = *a3++;
      if (v10 != 255 && *v9 != -1) {
        LODWORD(a4) = v5;
        *a2 = GameRoutine_5e52c0(*(_QWORD*)(a1 + 8) + 48LL * *v9, a4);
      }
      ++a2;
      --v4;
      v9 += 16;
    } while (v4 != 0);
  }
}

void ShapeAnimObj_5e9260(__int64 a1, float* a2, unsigned __int8* a3,
                         long double a4)
{
  __int64 v4;
  int v5;
  char* v9;
  int v10;

  v4 = *(unsigned __int16*)(a1 + 34);
  if (*(_WORD*)(a1 + 34) != 0) {
    v5 = LODWORD(a4);
    v9 = (char*)(*(_QWORD*)(a1 + 24) + 8LL);
    do {
      v10 = *a3++;
      if (v10 != 255 && *v9 != -1) {
        LODWORD(a4) = v5;
        *a2 = GameRoutine_5e52c0(*(_QWORD*)(a1 + 8) + 48LL * *v9, a4);
      }
      ++a2;
      --v4;
      v9 += 16;
    } while (v4 != 0);
  }
}

float ShapeAnimObj_5e9320(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  float* v9;
  float* v10;
  float result;
  float* v12;
  float* v13;
  float v14;

  *a2 = 0;
  v2 = *(unsigned __int16*)(a1 + 34);
  v3 = v2 - 2;
  if ((unsigned int)v2 >= 2) {
    v4 = *(_QWORD*)(a1 + 16);
    v5 = v2 - 1;
    v6 = (v2 - 1) & 7;
    if (v3 >= 7) {
      v8 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      v9 = (float*)(v4 + 16);
      v10 = (float*)(a2 + 4);
      v7 = v8 | 1;
      do {
        v8 -= 8LL;
        *(v10 - 3) = *(v9 - 4);
        *(v10 - 2) = *(v9 - 3);
        *(v10 - 1) = *(v9 - 2);
        *v10 = *(v9 - 1);
        v10[1] = *v9;
        v10[2] = v9[1];
        v10[3] = v9[2];
        result = v9[3];
        v9 += 8;
        v10[4] = result;
        v10 += 8;
      } while (v8 != 0);
    }
    else {
      v7 = 1;
    }
    if (v6 != 0) {
      v12 = (float*)&a2[v7];
      v13 = (float*)(v4 + 4 * v7 - 4);
      do {
        v14 = *v13++;
        result = v14;
        --v6;
        *v12++ = v14;
      } while (v6 != 0);
    }
  }
  return result;
}

__int64 ShapeAnimObj_Unknown4(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int16* v17;
  int v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int16 v22;
  int v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  GameRoutine_5dfe60(a1 + 88, *(_WORD*)(a2 + 106));
  v4 = *(unsigned __int16*)(a1 + 100);
  if (*(_WORD*)(a1 + 100) != 0) {
    if (*(_QWORD*)(a2 + 48) != 0) {
      v5 = 0;
      v6 = 0;
      do {
        v7 = *(_QWORD*)(a2 + 48);
        if (v7 == 0) {
          goto LABEL_14;
        }
        v8 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 40LL) + 48 * v5);
        v9 = *v8 + 2LL;
        v10 = strlen(v9);
        v11 = v7 + 8;
        v12 = *(unsigned __int16*)(v7 + 12);
        v13 = v7 + 8 + 16 * v12;
        v14 = *(_DWORD*)v13;
        if (*(_DWORD*)(v7 + 8) < *(_DWORD*)v13) {
          do {
            v16 = (__int64)v14 >> 3;
            if (v10 > v16) {
              v15 = (*(unsigned __int8*)(v9 + v10 + ~v16) >> (v14 & 7)) & 1;
            }
            else {
              v15 = 0;
            }
            v12 = *(unsigned __int16*)(v7 + 12 + 16 * v12 + 2 * v15);
            v24 = v14 < *(_DWORD*)(v11 + 16 * v12);
            v14 = *(_DWORD*)(v11 + 16 * v12);
          } while (v24);
          v13 = v11 + 16 * v12;
        }
        v17 = *(unsigned __int16**)(v13 + 8);
        if (v10 != *v17 || (unsigned int)memcmp(v17 + 1, v9, v10) != 0 ||
            (v19 = v13 - v7 - 24, v20 = v19 >> 4,
             ((v19 >> 4) & 0x80000000) != 0)) {
        LABEL_14:
          v18 = 0x10000;
        }
        else {
          v21 = (v19 >> 4) & 0x7FFFFFFF;
          v18 = ShapeAnimObj_5ea620(a1, v8, *(_QWORD*)(a2 + 40) + 96 * v21);
          if ((v18 & 1) != 0) {
            *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v5) &= 0x3FFF8000u;
            *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v5) |= v20 & 0x7FFF;
            *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v21) &= 0xC0007FFF;
            *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v21) |= (v5 & 0x7FFF) << 15;
          }
        }
        ++v5;
        v6 |= v18;
      } while (v5 != v4);
    }
    else {
      v6 = 0x10000;
    }
  }
  else {
    v6 = 0;
  }
  v22 = *(_WORD*)(a1 + 96);
  *(_QWORD*)(a1 + 112) = a2;
  *(_WORD*)(a1 + 96) = v22 | 1;
  v23 = *(_DWORD*)(a1 + 60);
  v24 = v23 >= 1 && v23 <= *(_DWORD*)(a1 + 56);
  *(_DWORD*)(a1 + 64) = 2139095040;
  if (v24) {
    v25 = 0;
    v26 = 0;
    do {
      ++v26;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v25) = 2139095040;
      v25 += 12;
    } while (v26 < *(int*)(a1 + 60));
  }
  if (*(_WORD*)(a1 + 100) != 0) {
    v27 = 0;
    v28 = 48LL * *(unsigned __int16*)(a1 + 100);
    do {
      v29 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 40LL) + v27;
      GameRoutine_5e9320(
          v29, (_DWORD*)(*(_QWORD*)(a1 + 72) + 4LL * *(int*)(v29 + 40)));
      v27 += 48;
    } while (v28 != v27);
  }
  return v6;
}

__int64 ShapeAnimObj_5ea620(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int16* v20;
  unsigned __int64 v21;

  v3 = *(unsigned __int16*)(a2 + 34);
  if (*(_WORD*)(a2 + 34) != 0) {
    v4 = *(int*)(a2 + 40);
    v5 = *(_QWORD**)(a2 + 24);
    v8 = 0;
    v9 = 0;
    while (1) {
      v10 = *(_QWORD*)(a3 + 48);
      if (v10 == 0) {
        goto LABEL_13;
      }
      v11 = *v5 + 2LL;
      v12 = strlen(v11);
      v13 = v10 + 8;
      v14 = *(unsigned __int16*)(v10 + 12);
      v15 = v10 + 8 + 16 * v14;
      v16 = *(_DWORD*)v15;
      if (*(_DWORD*)(v10 + 8) < *(_DWORD*)v15) {
        do {
          v19 = (__int64)v16 >> 3;
          if (v12 > v19) {
            v17 = (*(unsigned __int8*)(v11 + v12 + ~v19) >> (v16 & 7)) & 1;
          }
          else {
            v17 = 0;
          }
          v14 = *(unsigned __int16*)(v10 + 12 + 16 * v14 + 2 * v17);
          v18 = v16 < *(_DWORD*)(v13 + 16 * v14);
          v16 = *(_DWORD*)(v13 + 16 * v14);
        } while (v18);
        v15 = v13 + 16 * v14;
      }
      v20 = *(unsigned __int16**)(v15 + 8);
      if (v12 == *v20 && (unsigned int)memcmp(v20 + 1, v11, v12) == 0) {
        v21 = v15 - v10 - 24;
        *(_BYTE*)(*(_QWORD*)(a1 + 128) + v8 + v4) = v21 >> 4;
        if ((v21 & 0x800000000LL) != 0) {
          goto LABEL_14;
        }
        ++v8;
        v5 += 2;
        v9 |= 1u;
        if (v8 == v3) {
          return v9;
        }
      }
      else {
      LABEL_13:
        *(_BYTE*)(*(_QWORD*)(a1 + 128) + v8 + v4) = -1;
      LABEL_14:
        ++v8;
        v5 += 2;
        v9 |= 0x10000u;
        if (v8 == v3) {
          return v9;
        }
      }
    }
  }
  return 0;
}

void ShapeAnimObj_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (*(_WORD*)(a1 + 100) != 0) {
    v2 = 0;
    v3 = 48LL * *(unsigned __int16*)(a1 + 100);
    do {
      v4 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 40LL) + v2;
      GameRoutine_5e9320(
          v4, (_DWORD*)(*(_QWORD*)(a1 + 72) + 4LL * *(int*)(v4 + 40)));
      v2 += 48;
    } while (v3 != v2);
  }
}

__int64 ShapeAnimObj_Unknown5(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 32LL))(a1, *a2);
}

void ShapeAnimObj_Unknown6(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  int v36;
  int v37;
  int v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  MaterialAnimObj_5dfe60(a1 + 88, *(_WORD*)(a2 + 106));
  MaterialAnimObj_5dff40(a1 + 88, *(_QWORD*)(*(_QWORD*)(a1 + 104) + 32LL));
  v3 = *(unsigned __int16*)(a1 + 100);
  if (*(_WORD*)(a1 + 100) != 0) {
    v4 = 0;
    do {
      v5 = *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v4) & 0x7FFF;
      if ((*(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v4) & 0x7FFF) != 0x7FFF) {
        v6 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 40LL) + 48 * v4;
        v7 = *(unsigned __int16*)(v6 + 34);
        if (*(_WORD*)(v6 + 34) != 0) {
          v8 = *(int*)(v6 + 40);
          v9 = *(char**)(v6 + 24);
          if (v7 >= 8) {
            v10 = 0;
            v11 = 0;
            do {
              v12 = v9[9];
              v13 = v8 + v10;
              *(_BYTE*)(*(_QWORD*)(a1 + 128) + v8 + v10) = v9[9];
              if (v12 >= 0) {
                v14 = 1;
              }
              else {
                v14 = 0x10000;
              }
              v10 += 8;
              v15 = v14 | v11;
              v16 = v9[25];
              *(_BYTE*)(*(_QWORD*)(a1 + 128) + v13 + 1) = v9[25];
              if (v16 >= 0) {
                v17 = 1;
              }
              else {
                v17 = 0x10000;
              }
              v18 = v9[41];
              *(_BYTE*)(*(_QWORD*)(a1 + 128) + v13 + 2) = v9[41];
              if (v18 >= 0) {
                v19 = 1;
              }
              else {
                v19 = 0x10000;
              }
              v20 = v19 | v17 | v15;
              v21 = v9[57];
              *(_BYTE*)(*(_QWORD*)(a1 + 128) + v13 + 3) = v9[57];
              if (v21 >= 0) {
                v22 = 1;
              }
              else {
                v22 = 0x10000;
              }
              v23 = v9[73];
              *(_BYTE*)(*(_QWORD*)(a1 + 128) + v13 + 4) = v9[73];
              if (v23 >= 0) {
                v24 = 1;
              }
              else {
                v24 = 0x10000;
              }
              v25 = v24 | v22;
              v26 = v9[89];
              *(_BYTE*)(*(_QWORD*)(a1 + 128) + v13 + 5) = v9[89];
              if (v26 >= 0) {
                v27 = 1;
              }
              else {
                v27 = 0x10000;
              }
              v28 = v27 | v25 | v20;
              v29 = v9[105];
              *(_BYTE*)(*(_QWORD*)(a1 + 128) + v13 + 6) = v9[105];
              if (v29 >= 0) {
                v30 = 1;
              }
              else {
                v30 = 0x10000;
              }
              v31 = v9[121];
              v9 += 128;
              *(_BYTE*)(*(_QWORD*)(a1 + 128) + v13 + 7) = v31;
              if (v31 >= 0) {
                v32 = 1;
              }
              else {
                v32 = 0x10000;
              }
              v11 = v32 | v30 | v28;
            } while ((v7 & 0xFFF8) != v10);
          }
          else {
            v10 = 0;
            v11 = 0;
          }
          v33 = v7 & 7;
          if (v33 != 0) {
            v34 = v10 + v8;
            v35 = v9 + 9;
            do {
              v36 = *v35;
              v35 += 16;
              *(_BYTE*)(*(_QWORD*)(a1 + 128) + v34++) = v36;
              if (v36 >= 0) {
                v37 = 1;
              }
              else {
                v37 = 0x10000;
              }
              --v33;
              v11 |= v37;
            } while (v33 != 0);
          }
          if ((v11 & 0x10001) == 0x10000) {
            *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v4) |= 0xC0007FFF;
            *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v5) |= 0x3FFF8000u;
          }
        }
      }
      ++v4;
    } while (v4 != v3);
  }
  *(_WORD*)(a1 + 96) |= 1u;
  v38 = *(_DWORD*)(a1 + 60);
  v39 = v38 >= 1 && v38 <= *(_DWORD*)(a1 + 56);
  *(_DWORD*)(a1 + 64) = 2139095040;
  if (v39) {
    v40 = 0;
    v41 = 0;
    do {
      ++v41;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v40) = 2139095040;
      v40 += 12;
    } while (v41 < *(int*)(a1 + 60));
  }
  if (*(_WORD*)(a1 + 100) != 0) {
    v42 = 0;
    v43 = 48LL * *(unsigned __int16*)(a1 + 100);
    do {
      v44 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 40LL) + v42;
      ShapeAnimObj_5e9320(
          v44, (_DWORD*)(*(_QWORD*)(a1 + 72) + 4LL * *(int*)(v44 + 40)));
      v42 += 48;
    } while (v43 != v42);
  }
}

void ShapeAnimObj_Unknown3(__int64 a1, long double a2)
{
  float v2;
  int v3;
  __int64 v4;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = **(float**)(a1 + 8);
  if (*(float*)(a1 + 64) != v2) {
    v3 = *(_DWORD*)(a1 + 60);
    v4 = *(unsigned __int16*)(a1 + 100);
    v6 = *(_QWORD*)(a1 + 72);
    if (v3 >= 1 && v3 <= *(_DWORD*)(a1 + 56)) {
      if (*(_WORD*)(a1 + 100) != 0) {
        v12 = 4 * v4;
        v13 = 36;
        v14 = 0;
        do {
          if ((*(_BYTE*)(*(_QWORD*)(a1 + 88) + v14 + 3) & 0x40) == 0) {
            *(float*)&a2 = v2;
            v15 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 40LL) + v13;
            GameRoutine_5e9260(
                v15 - 36, (float*)(v6 + 4LL * *(int*)(v15 + 4)),
                (unsigned __int8*)(*(_QWORD*)(a1 + 128) + *(int*)(v15 + 4)),
                a2);
          }
          v14 += 4;
          v13 += 48;
        } while (v12 != v14);
      }
    }
    else if (*(_WORD*)(a1 + 100) != 0) {
      v8 = 4 * v4;
      v9 = 40;
      v10 = 0;
      do {
        if ((*(_BYTE*)(*(_QWORD*)(a1 + 88) + v10 + 3) & 0x40) == 0) {
          *(float*)&a2 = v2;
          v11 = (int*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 40LL) + v9);
          GameRoutine_5e9180((__int64)(v11 - 10), (float*)(v6 + 4LL * *v11),
                             (unsigned __int8*)(*(_QWORD*)(a1 + 128) + *v11),
                             a2);
        }
        v10 += 4;
        v9 += 48;
      } while (v8 != v10);
    }
    *(_DWORD*)(a1 + 64) = **(_DWORD**)(a1 + 8);
  }
}

__int64 ShapeAnimObj_Unknown7(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 i;
  __int64 v4;
  int v5;
  float v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float* v17;
  __int64 v18;
  int v19;
  float v20;
  __int64 v21;
  int v22;
  float v23;
  __int64 v24;
  int v25;
  float v26;
  __int64 v27;
  int v28;
  float v29;
  __int64 v30;
  __int64 v31;
  int v32;
  float v33;
  __int64 v34;

  v2 = *(unsigned __int16*)(result + 100);
  if (*(_WORD*)(result + 100) != 0) {
    for (i = 0; i != v2; ++i) {
      v5 = *(_DWORD*)(*(_QWORD*)(result + 88) + 4 * i);
      if (v5 < 0) {
        continue;
      }
      v6 = 1.0;
      v7 = *(_QWORD*)(a2 + 40) + 112LL * (v5 & 0x7FFF);
      v8 = *(_QWORD*)(*(_QWORD*)(result + 104) + 40LL) + 48 * i;
      v9 = *(unsigned __int16*)(v8 + 34);
      v10 = *(int*)(v8 + 40);
      v11 = v9 - 2;
      if ((unsigned int)v9 >= 2) {
        v12 = *(_QWORD*)(result + 72);
        v13 = v9 - 1;
        if (v11 >= 3) {
          v16 = v10;
          v17 = (float*)(v12 + 4 * v10 + 8);
          v18 = -1;
          do {
            v19 = *(char*)(*(_QWORD*)(result + 128) + v16 + 1);
            if (v19 != -1) {
              v20 = *(v17 - 1);
              *(float*)(*(_QWORD*)(v7 + 40) +
                        4LL * *(char*)(*(_QWORD*)(result + 128) + v16 + 1)) =
                  v20;
              v6 = v6 - v20;
              v21 = *(_QWORD*)(v7 + 48);
              *(_DWORD*)(v7 + 8) |= 2u;
              *(_DWORD*)(v21 + 4LL * (v19 >> 5)) |= 1 << v19;
            }
            v22 = *(char*)(*(_QWORD*)(result + 128) + v16 + 2);
            if (v22 != -1) {
              v23 = *v17;
              *(float*)(*(_QWORD*)(v7 + 40) +
                        4LL * *(char*)(*(_QWORD*)(result + 128) + v16 + 2)) =
                  *v17;
              v6 = v6 - v23;
              v24 = *(_QWORD*)(v7 + 48);
              *(_DWORD*)(v7 + 8) |= 2u;
              *(_DWORD*)(v24 + 4LL * (v22 >> 5)) |= 1 << v22;
            }
            v25 = *(char*)(*(_QWORD*)(result + 128) + v16 + 3);
            if (v25 != -1) {
              v26 = v17[1];
              *(float*)(*(_QWORD*)(v7 + 40) +
                        4LL * *(char*)(*(_QWORD*)(result + 128) + v16 + 3)) =
                  v26;
              v6 = v6 - v26;
              v27 = *(_QWORD*)(v7 + 48);
              *(_DWORD*)(v7 + 8) |= 2u;
              *(_DWORD*)(v27 + 4LL * (v25 >> 5)) |= 1 << v25;
            }
            v28 = *(char*)(*(_QWORD*)(result + 128) + v16 + 4);
            if (v28 != -1) {
              v29 = v17[2];
              *(float*)(*(_QWORD*)(v7 + 40) +
                        4LL * *(char*)(*(_QWORD*)(result + 128) + v16 + 4)) =
                  v29;
              v6 = v6 - v29;
              v30 = *(_QWORD*)(v7 + 48);
              *(_DWORD*)(v7 + 8) |= 2u;
              *(_DWORD*)(v30 + 4LL * (v28 >> 5)) |= 1 << v28;
            }
            v18 -= 4;
            v16 += 4;
            v17 += 4;
          } while ((v13 & 0xFFFFFFFFFFFFFFFCLL) + v18 != -1);
          v14 = -v18;
          v15 = v13 & 3;
          if (v15 == 0) {
            goto LABEL_3;
          }
        LABEL_21:
          v31 = v14 + v10;
          do {
            v32 = *(char*)(*(_QWORD*)(result + 128) + v31);
            if (v32 != -1) {
              v33 = *(float*)(v12 + 4 * v31);
              *(float*)(*(_QWORD*)(v7 + 40) +
                        4LL * *(char*)(*(_QWORD*)(result + 128) + v31)) = v33;
              v6 = v6 - v33;
              v34 = *(_QWORD*)(v7 + 48);
              *(_DWORD*)(v7 + 8) |= 2u;
              *(_DWORD*)(v34 + 4LL * (v32 >> 5)) |= 1 << v32;
            }
            ++v31;
            --v15;
          } while (v15 != 0);
          goto LABEL_3;
        }
        v14 = 1;
        v15 = v13 & 3;
        if (v15 != 0) {
          goto LABEL_21;
        }
      }
    LABEL_3:
      v4 = *(char*)(*(_QWORD*)(result + 128) + v10);
      *(float*)(*(_QWORD*)(v7 + 40) + 4 * v4) = v6;
      *(_DWORD*)(v7 + 8) |= 2u;
      *(_DWORD*)(*(_QWORD*)(v7 + 48) + 4LL * ((int)v4 >> 5)) |= 1 << v4;
    }
  }
  return result;
}

#pragma GCC visibility pop
