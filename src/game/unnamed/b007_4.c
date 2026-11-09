#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
__int64 GameRoutine_6d2b90(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_6ea8c0(_QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_93a920(_QWORD*, unsigned __int8*);
__int64 GameRoutine_93ce60(__int64*, __int64, unsigned int);
__int64 GameRoutine_93d1e0(__int64, __int64);
unsigned __int64 GameRoutine_93d9e0(unsigned __int64 result);
_QWORD* GameRoutine_94f740(_QWORD* result, _QWORD*, unsigned __int64, __int64*,
                           signed __int64);

__int64 GameHr_93e230(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3;
  __int64 v5;
  unsigned __int8* v6;
  __int64 v7;
  unsigned __int8* v8;
  int v9;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int8 v15[4];

  v3 = *(_BYTE*)(a1 + 148) != 1 || a2 == 0;
  if (v3 || (a3 & 0x80000000) != 0) {
    return 0;
  }
  v5 = a3;
  v6 = (unsigned __int8*)(*(_QWORD*)(a1 + 120) + ((unsigned __int64)a3 << 6));
  if (*v6 == 0 || *(_BYTE*)((v7 = *(_QWORD*)(a2 + 400)) + 96) != 2 ||
      *(unsigned __int8*)(*(_QWORD*)(v7 + 112) + 32LL) !=
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                         8LL * *v6) +
                              32LL)) {
    v9 = v6[3];
    v8 = v6 + 3;
    if (v9 != 0) {
      v11 = GameRoutine_6ea8c0(v8);
      if (v11 != 0) {
        v12 = *(_QWORD*)(a1 + 120) + (v5 << 6);
        v13 = (_QWORD*)a1;
        v14 = v11;
        *(_BYTE*)(v12 + 3) = 0;
        GameRoutine_6d2b90(v11, GameData_212c8b0[0]);
        v15[0] = *(_BYTE*)(v14 + 2088);
        GameRoutine_93a920(v13, v15);
      }
    }
    return 0;
  }
  return GameRoutine_93ce60((__int64*)a1, a2, a3);
}

unsigned __int64 GameHr_93e320(__int64* a1, __int64 a2, __int64 a3,
                               unsigned int a4, _DWORD* a5)
{
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;

  if ((a4 & 0x80000000) == 0) {
    v9 = a1[15] + ((unsigned __int64)a4 << 6);
    if (*(_BYTE*)v9 != 0) {
      v10 = a2;
      if (*(_BYTE*)(v9 + 3) != 0) {
        v11 = GameRoutine_6ea8c0(v9 + 3);
      }
      else {
        v11 = 0;
      }
      GameRoutine_93d1e0((__int64)a1, v11);
      v12 = *(_BYTE*)(v9 + 40);
      *(_QWORD*)v9 = 0;
      *(_DWORD*)(v9 + 8) = 0;
      if ((v12 & 1) != 0) {
        **(_BYTE**)(v9 + 56) = 0;
        *(_QWORD*)(v9 + 48) = 0;
      }
      else {
        *(_WORD*)(v9 + 40) = 0;
      }
      v14 = *(_QWORD*)(v9 + 24);
      v13 = (_QWORD*)(v9 + 24);
      GameRoutine_6e3b50(v13 - 1, v14);
      *v13 = 0;
      v13[1] = 0;
      *(v13 - 1) = v13;
      GameRoutine_93d9e0((unsigned __int64)a1);
      a2 = v10;
    }
  }
  v15 = (__int64)(int)a4 << 6;
  GameRoutine_930b90(a1[15] + v15, a2);
  *(_DWORD*)(a1[15] + v15 + 4) = *a5;
  GameRoutine_93ce60(a1, a3, a4);
  return GameRoutine_93d9e0((unsigned __int64)a1);
}

__int64* GameHr_94fa20(__int64* result, __int64* a2, unsigned __int64 a3,
                       __int64* a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;

  switch (a3) {
  case 0uLL:
    return result;
  case 2uLL:
    v4 = *(a2 - 1);
    v5 = *result;
    if (v4 != *result) {
      v6 = *(unsigned __int8*)(v4 + 498);
      v7 = *(unsigned __int8*)(v5 + 498);
      if (v6 == v7) {
        if (*(__int16*)(v4 + 490) >= *(__int16*)(v5 + 490)) {
          goto LABEL_8;
        }
      }
      else if (v6 <= v7) {
        goto LABEL_8;
      }
      *a4 = v4;
      v8 = *result;
      goto LABEL_47;
    }
  LABEL_8:
    *a4 = v5;
    v8 = *(a2 - 1);
  LABEL_47:
    a4[1] = v8;
    return result;
  case 1uLL:
    *a4 = *result;
    return result;
  default:
    break;
  }
  if ((__int64)a3 <= 8) {
    if (result == a2) {
      return result;
    }
    v9 = *result++;
    *a4 = v9;
    if (result == a2) {
      return result;
    }
    v10 = 0;
    v11 = a4;
    v12 = a4;
  LABEL_15:
    v14 = *v12++;
    v13 = v14;
    v15 = *result;
    if (*result == v14) {
    LABEL_13:
      *v12 = v15;
      goto LABEL_14;
    }
    v16 = *(unsigned __int8*)(v15 + 498);
    v17 = *(unsigned __int8*)(v13 + 498);
    if (v16 == v17) {
      if (*(__int16*)(v15 + 490) >= *(__int16*)(v13 + 490)) {
        goto LABEL_13;
      }
    }
    else if (v16 <= v17) {
      goto LABEL_13;
    }
    v11[1] = v13;
    v18 = a4;
    if (v11 == a4) {
      goto LABEL_30;
    }
    v19 = v10;
    while (1) {
      v20 = (__int64*)((char*)a4 + v19);
      v21 = *result;
      v22 = *(__int64*)((char*)a4 + v19 - 8);
      if (*result == v22) {
      LABEL_27:
        v18 = v11;
        goto LABEL_30;
      }
      v23 = *(unsigned __int8*)(v21 + 498);
      v24 = *(unsigned __int8*)(v22 + 498);
      if (v23 == v24) {
        if (*(__int16*)(v21 + 490) >= *(__int16*)(v22 + 490)) {
          v18 = (__int64*)((char*)a4 + v19);
        LABEL_30:
          *v18 = *result;
        LABEL_14:
          ++result;
          v10 += 8;
          v11 = v12;
          if (result == a2) {
            return result;
          }
          goto LABEL_15;
        }
      }
      else if (v23 <= v24) {
        goto LABEL_27;
      }
      --v11;
      v19 -= 8;
      *v20 = v22;
      if (v19 == 0) {
        v18 = a4;
        goto LABEL_30;
      }
    }
  }
  v25 = a3 >> 1;
  v26 = result;
  v30 = &result[a3 >> 1];
  v31 = 8 * (a3 >> 1);
  GameRoutine_94f740(result, v30, v25, a4, v25);
  result = GameRoutine_94f740(v30, a2, a3 - v25, &a4[v25], a3 - v25);
  if (v31 != 0) {
    v32 = v30;
    v33 = a4;
    v34 = a2;
    v35 = v26;
    while (1) {
      if (v32 == a2) {
        while (v35 != v30) {
          v40 = *v35++;
          *v33++ = v40;
        }
        return result;
      }
      v36 = *v32;
      v37 = *v35;
      if (*v32 != *v35) {
        v38 = *(unsigned __int8*)(v36 + 498);
        v39 = *(unsigned __int8*)(v37 + 498);
        if (v38 == v39) {
          if (*(__int16*)(v36 + 490) < *(__int16*)(v37 + 490)) {
            goto LABEL_41;
          }
        }
        else if (v38 > v39) {
        LABEL_41:
          ++v32;
          *v33 = v36;
          goto LABEL_34;
        }
      }
      *v33 = v37;
      ++v35;
    LABEL_34:
      ++v33;
      if (v35 == v30) {
        goto LABEL_50;
      }
    }
  }
  v32 = v30;
  v33 = a4;
  v34 = a2;
LABEL_50:
  while (v32 != v34) {
    v41 = *v32++;
    *v33++ = v41;
  }
  return result;
}

#pragma GCC visibility pop
