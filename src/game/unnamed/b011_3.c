#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212bf68;

extern __int64 GameData_212c6a0[3];

extern __int64* GameData_212d468[5];

extern __int64 GameData_212dbe8[3];

extern __int64 GameData_21c9608;

extern __int64 GameData_21f3d10;

extern __int64 GameData_2212270;

__int64 GameRoutine_10c910(_QWORD, _QWORD);

__int64 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a310(void);

__int64 GameRoutine_a2d8b0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_cfa2a0(__int64 result, long double);

__int64 GameRoutine_d6e320(__int64 result);

_QWORD* GameRoutine_da42c0(__int64);

void GameRoutine_da5c00(__int64*);

__int64 GameRoutine_daa340(_QWORD);

__int64 GameRoutine_dbc400(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_f482e0(void);

__int64 GameRoutine_f4f8b0(_QWORD, _QWORD, _QWORD);

__int64 GameHr_d13680(__int64 a1, _QWORD* a2, char a3, long double a4)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 48LL);
  if (result != 0) {
    v5 = *a2;
    *(_QWORD*)(result + 88) = *(_QWORD*)(*a2 + 40LL);
    *(_DWORD*)(result + 96) = *(_DWORD*)(v5 + 208);
    LODWORD(a4) = *(_DWORD*)(v5 + 212);
    v6 = *(_QWORD*)(result + 8);
    *(_DWORD*)(result + 100) = LODWORD(a4);
    if ((*(_BYTE*)(v6 + 848) & 1) == 0) {
      *(_DWORD*)(v6 + 32) = 6;
      *(_BYTE*)(v6 + 36) = 1;
      if ((*(_BYTE*)(v6 + 112) & 1) == 0 && (*(_BYTE*)(v6 + 113) & 1) != 0) {
        v7 = result;
        v8 = a3;
        v9 = a2;
        GameRoutine_cfa2a0(v6 + 16, a4);
        a2 = v9;
        result = v7;
        a3 = v8;
      }
    }
    v10 = a2[1];
    v12 = *a2;
    v13 = v10;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    result = GameRoutine_f4f8b0(result, &v12, a3 & 1);
    v11 = v13;
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      return GameRoutine_1a09c50(v11);
    }
  }
  return result;
}

__int64 GameHr_d13780(__int64 result, __int64* a2, int a3, long double a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;

  v4 = *(_QWORD*)(*(_QWORD*)(result + 40) + 64LL);
  if (v4 != 0) {
    v5 = *a2;
    v6 = a2[1];
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = *(_QWORD*)(v4 + 104);
    *(_QWORD*)(v4 + 96) = v5;
    *(_QWORD*)(v4 + 104) = v6;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v8 = a3;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      result = GameRoutine_1a09c50(v7);
      a3 = v8;
    }
    v9 = *(_QWORD*)(v4 + 8);
    *(_DWORD*)(v4 + 88) = a3;
    if ((*(_BYTE*)(v9 + 848) & 1) == 0) {
      *(_DWORD*)(v9 + 32) = 8;
      *(_BYTE*)(v9 + 36) = 1;
      if ((*(_BYTE*)(v9 + 112) & 1) == 0 && (*(_BYTE*)(v9 + 113) & 1) != 0) {
        result = GameRoutine_cfa2a0(v9 + 16, a4);
      }
    }
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      return GameRoutine_1a09c50(v6);
    }
  }
  return result;
}

__int64 GameHr_d70690(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _BYTE v5[200];

  v2 = *(_QWORD*)(a1 + 152);
  if ((*(_BYTE*)(v2 + 216) & 1) == 0) {
    *(_BYTE*)(v2 + 216) = 1;
    v3 = *(_QWORD*)GameData_212dbe8[0];
    GameRoutine_10c910(v5, 0);
    if ((unsigned int)(*(_DWORD*)(v3 + 8) - 3) <= 1) {
      GameRoutine_a2d8b0(*GameData_212d468[0], v5, 0, 0);
      *(_DWORD*)(v3 + 8) = 2;
    }
    GameRoutine_10cff0(v5);
    v2 = *(_QWORD*)(a1 + 152);
  }
  return GameRoutine_d6e320(v2);
}

__int64 GameHr_da7580(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11[3];

  GameRoutine_da42c0(a1);
  GameRoutine_da5c00(v11);
  v1 = v11[0];
  v2 = v11[1];
  if (v11[0] != v11[1]) {
    v3 = (__int64*)v11[0];
    v4 = (_QWORD*)GameData_212c6a0[0];
    do {
      v5 = *v3++;
      GameRoutine_dbc400(*v4, *(_QWORD*)(v5 + 264), *(_DWORD*)(v5 + 752) == 0);
    } while (v3 != (__int64*)v2);
  }
  if (v1 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v6 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6, v1);
  }
  v7 = *(_QWORD*)(GameData_21c9608 + 328);
  if ((v7 & 0x10) != 0) {
    *(_QWORD*)(GameData_21c9608 + 328) = v7 & 0xFFFFFFFFFFFFFFEFLL;
  }
  if (GameData_2212270 != 0) {
    *(_DWORD*)(GameData_2212270 + 152) = 2;
  }
  v8 = *(_QWORD*)(GameData_21f3d10 + 216);
  v9 = *(_DWORD*)(v8 + 232);
  if (v9 <= 1) {
    v9 = 1;
  }
  *(_DWORD*)(v8 + 232) = v9;
  return GameRoutine_f482e0();
}

__int64 GameHr_daa180(__int64 a1, int* a2, long double a3)
{
  __int64 v3;
  unsigned int v4;
  int v6;
  int* v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v22;

  v3 = *(_QWORD*)(a1 + 16);
  if (*(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8LL) + 228LL) <= 0.0) {
    return 0;
  }
  v4 = 0;
  if (*(float*)(v3 + 820) > 0.0 || *(float*)(a1 + 384) > 0.0) {
    return v4;
  }
  v6 = *a2;
  *(_DWORD*)(a1 + 24) = *a2;
  v7 = (int*)(a1 + 24);
  v8 = *(_QWORD*)(a1 + 224);
  v9 = *(_QWORD*)(a1 + 232);
  v10 = *(float*)(*(_QWORD*)(v3 + 504) + 80LL);
  v11 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 384LL);
  if (v10 <= 0.0) {
    v12 = 1038;
  }
  else {
    v12 = 1036;
  }
  if ((v11 & 0x200000) != 0) {
    v13 = v12 & 0xFFFFFFFB;
  }
  else {
    v13 = v12;
  }
  v14 = v13 & v6;
  *v7 = v14;
  if (v8 != v9) {
    do {
      v15 = *(_QWORD*)(v8 + 48);
      if (v15 == 0) {
        goto LABEL_30;
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 48LL))(v15, a1 + 24);
      v8 += 64;
    } while (v8 != v9);
    v14 = *v7;
  }
  if ((v14 & 8) == 0 || (*(_BYTE*)(a1 + 144) & 1) == 0) {
    return (v14 & 4) != 0 && (GameRoutine_daa340(a1) & 1) != 0;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 40LL) + 48LL);
  if (v16 != 0) {
    *(_QWORD*)(v16 + 88) = *(_QWORD*)(a1 + 136);
    *(_DWORD*)(v16 + 96) = *(_DWORD*)(a1 + 128);
    LODWORD(a3) = *(_DWORD*)(a1 + 132);
    *(_DWORD*)(v16 + 100) = LODWORD(a3);
    v17 = *(_QWORD*)(v16 + 8);
    if ((*(_BYTE*)(v17 + 848) & 1) == 0) {
      *(_DWORD*)(v17 + 32) = 6;
      *(_BYTE*)(v17 + 36) = 1;
      if ((*(_BYTE*)(v17 + 112) & 1) == 0 && (*(_BYTE*)(v17 + 113) & 1) != 0) {
        GameRoutine_cfa2a0(v17 + 16, a3);
      }
    }
  }
  v18 = *(_QWORD*)(a1 + 248);
  v19 = *(_QWORD*)(a1 + 256);
  v4 = 1;
  if (v18 != v19) {
    while (1) {
      v20 = *(_QWORD*)(v18 + 48);
      v22 = 1;
      if (v20 == 0) {
        break;
      }
      (*(void (**)(__int64, int*, __int64))(*(_QWORD*)v20 + 48LL))(v20, &v22,
                                                                   a1 + 32);
      v18 += 64;
      if (v18 == v19) {
        return 1;
      }
    }
  LABEL_30:
    GameRoutine_60a310();
  }
  return v4;
}

#pragma GCC visibility pop
