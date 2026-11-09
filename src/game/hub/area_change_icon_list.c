#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212dc38[7];
float fmodf(_QWORD, float, float);
void GameRoutine_1035650(__int64, __int64, __int64, float*);
_QWORD* AreaChangeIconList_Unknown3(_QWORD* result, __int64 a2);
void AreaChangeIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                                 __int64 a5);
_QWORD* AreaChangeIconList_Unknown5(_QWORD* result);

_QWORD* AreaChangeIconList_Unknown3(_QWORD* result, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  v2 = *(unsigned __int8*)(a2 + 8);
  if ((v2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    v4 = *(_QWORD*)(a2 + 184);
    v5 = *(_QWORD*)(a2 + 192);
    if (v4 != v5) {
      v6 = 0;
      v3 = 0;
      while (1) {
        v9 = *(_DWORD*)(v4 + 88);
        if (v9 != 0) {
          break;
        }
        v7 = (__int64*)(result[6] + (v3++ << 6));
        v8 = *v7;
        if (v8 != 0) {
          goto LABEL_8;
        }
      LABEL_9:
        v4 += 96;
        if (v4 == v5) {
          goto LABEL_16;
        }
      }
      if (v9 != 1) {
        goto LABEL_9;
      }
      v10 = (__int64*)(result[3] + (v6++ << 6));
      v8 = *v10;
      if (v8 == 0) {
        goto LABEL_9;
      }
    LABEL_8:
      *(_BYTE*)(v8 + 88) |= 1u;
      goto LABEL_9;
    }
    v3 = 0;
  }
  v6 = 0;

LABEL_16:
  v11 = result[3];
  if (v6 < (result[4] - v11) >> 6) {
    v12 = v6 << 6;
    do {
      v13 = *(_QWORD*)(v11 + v12);
      ++v6;
      v12 += 64LL;
      *(_BYTE*)(v13 + 88) &= ~1u;
      v11 = result[3];
    } while (v6 < (result[4] - v11) >> 6);
  }
  v14 = result[6];
  if (v3 < (result[7] - v14) >> 6) {
    v15 = v3 << 6;
    do {
      v16 = *(_QWORD*)(v14 + v15);
      ++v3;
      v15 += 64LL;
      *(_BYTE*)(v16 + 88) &= ~1u;
      v14 = result[6];
    } while (v3 < (result[7] - v14) >> 6);
  }
  return result;
}

void AreaChangeIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                                 __int64 a5)
{
  __int64 v5;
  __int64 v6;
  int v11;
  int v12;
  char v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int128 v26;
  float v27;
  float v28;
  char v29;
  int v30;

  v5 = *(_QWORD*)(a2 + 184);
  v6 = *(_QWORD*)(a2 + 192);
  if (v5 != v6) {
    v11 = 0;
    v12 = 0;
    while (1) {
      v14 = *(_DWORD*)(v5 + 88);
      if (v14 == 0) {
        break;
      }
      if (v14 == 1) {
        v15 = *(_QWORD*)(a1 + 24);
        v16 = v11++;
        goto LABEL_11;
      }
    LABEL_6:
      v5 += 96;
      if (v5 == v6) {
        return;
      }
    }
    v15 = *(_QWORD*)(a1 + 48);
    v16 = v12++;
  LABEL_11:
    v17 = *(_QWORD*)(v15 + (v16 << 6));
    if (v17 != 0) {
      v18 = *(float*)(v5 + 92);
      v19 = fmodf(a1, v18, 360.0);
      v20 = *a3;
      if (v18 >= 0.0) {
        v21 = v19;
      }
      else {
        v21 = v19 + 360.0;
      }
      if (v20 != 0) {
        v22 = 0.0;
        if (v20 == 1) {
          v22 = *a4;
        }
      }
      else {
        v22 = *(float*)a5;
      }
      v27 = v22 / 2.5;
      v28 = 1.0;
      if (v27 <= 1.0) {
        v28 = v27;
        if (v27 < 0.5) {
          v28 = 0.5;
        }
      }
      v29 = *(_BYTE*)(v17 + 88);
      *(float*)(v17 + 72) = v28;
      *(float*)(v17 + 76) = v28;
      *(_BYTE*)(v17 + 88) = v29 | 0x10;
      v30 = *a3;
      if (*a3 == 1) {
        GameRoutine_1035650(a1, v17, v5, a4);
        v30 = *a3;
      }
      if (v30 != 0) {
        v13 = *(_BYTE*)(v17 + 88);
      }
      else {
        v13 = *(_BYTE*)(v17 + 88);
        if ((v13 & 1) != 0) {
          v24 = *(float*)(a5 + 8);
          v23 = *(float*)(a5 + 12);
          v25 = *(float*)a5;
          if (*(_BYTE*)(a5 + 16) == 1) {
            fmodf(a1, *(float*)(*(_QWORD*)GameData_212dc38[0] + 100LL), 360.0);
            v13 = *(_BYTE*)(v17 + 88);
          }
          v26 = *(_OWORD*)v5;
          *(_DWORD*)(v17 + 56) = 0;
          *(float*)(v17 + 48) = v25 * (float)(*(float*)&v26 - v24);
          *(float*)(v17 + 52) =
              -(float)(v25 * (float)(*((float*)&v26 + 2) - v23));
        }
      }
      *(_QWORD*)(v17 + 60) = 0;
      *(float*)(v17 + 68) = v21;
      *(_BYTE*)(v17 + 88) = v13 | 0x10;
    }
    goto LABEL_6;
  }
}

_QWORD* AreaChangeIconList_Unknown5(_QWORD* result)
{
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64* v4;
  __int64* j;
  __int64 v6;

  v1 = (__int64*)result[6];
  for (i = (__int64*)result[7]; v1 != i; *(_BYTE*)(v3 + 88) &= ~1u) {
    v3 = *v1;
    v1 += 8;
  }
  v4 = (__int64*)result[3];
  for (j = (__int64*)result[4]; v4 != j; *(_BYTE*)(v6 + 88) &= ~1u) {
    v6 = *v4;
    v4 += 8;
  }
  return result;
}

#pragma GCC visibility pop
