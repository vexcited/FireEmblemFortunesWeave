#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fdbd10[])();
extern __int64 (*GameData_1fdbd68[])();
extern __int64 (*GameData_1fdbdc0[])();
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*GameData_1fdce38[6])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c6a0[3];
extern __int64* GameData_212d468[5];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbe8[3];
extern __int64* GameData_212ec58[2];
extern __int64 GameData_21c9608;
extern __int64 GameData_21f3ce0;
extern __int64 GameData_21f3d10;
extern __int64 GameData_2212270;
__int64 GameRoutine_10c910(_QWORD, _QWORD);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(void);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_a2d8b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cf4780(__int64);
char* GameRoutine_cf5da0(__int64);
__int64 GameRoutine_cf7940(__int64);
void __attribute__((noreturn)) GameRoutine_cfa280(void);
__int64 GameRoutine_cfa2a0(__int64 result, long double);
float GameRoutine_d48540(__int64, long double);
__int64 GameRoutine_d5bb40(__int64*, __int64);
_QWORD* GameRoutine_d5bf40(_QWORD* result, __int64, __int64*);
__int64 GameRoutine_d6e320(__int64 result);
__int64 GameRoutine_d9fe20(_QWORD*);
_QWORD* GameRoutine_da42c0(__int64);
void GameRoutine_da5c00(__int64*);
__int64 GameRoutine_daa180(_QWORD, _QWORD);
__int64 GameRoutine_daa340(_QWORD);
__int64 GameRoutine_dbc400(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f482e0(void);
__int64 GameRoutine_f4f8b0(_QWORD, _QWORD, _QWORD);

__int64 GameHr_cfb010(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  long double v5;
  int v6;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  result = GameRoutine_cf7940(v2);
  if (v3 == result) {
    GameRoutine_cf5da0(v2);
    result = GameRoutine_cf4780(v2);
    v6 = *(_DWORD*)(v2 + 8);
    if (*(_BYTE*)(v2 + 44) != 1 || *(_DWORD*)(v2 + 40) != v6) {
      *(_DWORD*)(v2 + 48) = v6;
      *(_BYTE*)(v2 + 52) = 1;
    }
    if ((*(_BYTE*)(v2 + 128) & 1) == 0 && (*(_BYTE*)(v2 + 129) & 1) != 0) {
      return GameRoutine_cfa2a0(v2 + 32, v5);
    }
  }
  return result;
}

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

__int64 GameHr_d42f30(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  long double v37;
  unsigned __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 result;

  *(_BYTE*)(a1 + 16) =
      (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 384LL) & 0x40000000) !=
      0;
  v2 = (_QWORD*)GameData_212bf68;
  v3 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 112, 16, 0);
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v4 = v3;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  v3[12] = 0;
  v3[13] = 0;
  *v3 = GameData_212ec58[0] + 2;
  v3[1] = 0;
  v5 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = v4;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    v4 = *(_QWORD**)(a1 + 24);
  }
  v6 = (_QWORD*)GameRoutine_651b90(*v2, 16, 16, 0);
  *v6 = GameData_1fdbd10;
  v6[1] = a1;
  v8 = (_QWORD*)v4[4];
  v7 = v4[5];
  if ((unsigned __int64)v8 >= v7) {
    v10 = v4[3];
    v11 = (char*)v8 - v10;
    v12 = ((__int64)v8 - v10) >> 3;
    v13 = v12 + 1;
    if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
      goto LABEL_58;
    }
    v14 = v7 - v10;
    if (v14 >> 2 > v13) {
      v13 = v14 >> 2;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v13;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        goto LABEL_59;
      }
      v16 = v6;
      v17 = GameRoutine_651b90(*v2, 8 * v15, 16, 0);
      v6 = v16;
    }
    else {
      v17 = 0;
    }
    v18 = v17 + 8 * v15;
    v19 = (__int64)&v11[v17 + -8 * v12];
    *(_QWORD*)&v11[v17] = v6;
    v9 = (__int64)&v11[v17 + 8];
    GameRoutine_1a0b950(v19, v10, v11);
    v4[3] = v19;
    v4[4] = v9;
    v4[5] = v18;
    if (v10 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v20 = 56;
      }
      GameRoutine_1a0a4e0(*v2 + v20, v10);
    }
  }
  else {
    *v8 = v6;
    v9 = (__int64)(v8 + 1);
  }
  v4[4] = v9;
  v21 = *(_QWORD**)(a1 + 24);
  v6 = (_QWORD*)GameRoutine_651b90(*v2, 16, 16, 0);
  *v6 = GameData_1fdbd68;
  v6[1] = a1;
  v23 = (_QWORD*)v21[4];
  v22 = v21[5];
  if ((unsigned __int64)v23 >= v22) {
    v25 = v21[3];
    v26 = (char*)v23 - v25;
    v27 = ((__int64)v23 - v25) >> 3;
    v28 = v27 + 1;
    if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
      goto LABEL_58;
    }
    v29 = v22 - v25;
    if (v29 >> 2 > v28) {
      v28 = v29 >> 2;
    }
    if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
      v30 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v30 = v28;
    }
    if (v30 != 0) {
      if (v30 >> 61 != 0) {
        goto LABEL_59;
      }
      v31 = v6;
      v32 = GameRoutine_651b90(*v2, 8 * v30, 16, 0);
      v6 = v31;
    }
    else {
      v32 = 0;
    }
    v33 = v32 + 8 * v30;
    v34 = (__int64)&v26[v32 + -8 * v27];
    *(_QWORD*)&v26[v32] = v6;
    v24 = (__int64)&v26[v32 + 8];
    GameRoutine_1a0b950(v34, v25, v26);
    v21[3] = v34;
    v21[4] = v24;
    v21[5] = v33;
    if (v25 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v35 = 56;
      }
      GameRoutine_1a0a4e0(*v2 + v35, v25);
    }
  }
  else {
    *v23 = v6;
    v24 = (__int64)(v23 + 1);
  }
  v21[4] = v24;
  v36 = *(_QWORD**)(a1 + 24);
  v6 = (_QWORD*)GameRoutine_651b90(*v2, 24, 16, 0);
  v6[1] = a1;
  v6[2] = 0;
  *v6 = GameData_1fdbdc0;
  v39 = (_QWORD*)v36[4];
  v38 = v36[5];
  if ((unsigned __int64)v39 < v38) {
    *v39 = v6;
    v40 = (__int64)(v39 + 1);
    goto LABEL_51;
  }
  v41 = v36[3];
  v42 = (char*)v39 - v41;
  v43 = ((__int64)v39 - v41) >> 3;
  v44 = v43 + 1;
  if ((unsigned __int64)(v43 + 1) >> 61 != 0) {
  LABEL_58:
    GameRoutine_cfa280();
  }
  v45 = v38 - v41;
  if (v45 >> 2 > v44) {
    v44 = v45 >> 2;
  }
  if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF8LL) {
    v46 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v46 = v44;
  }
  if (v46 != 0) {
    if (v46 >> 61 == 0) {
      v47 = v6;
      v48 = GameRoutine_651b90(*v2, 8 * v46, 16, 0);
      v6 = v47;
      goto LABEL_47;
    }
  LABEL_59:
    GameRoutine_60a210(v6);
  }
  v48 = 0;
LABEL_47:
  v49 = v48 + 8 * v46;
  v50 = (__int64)&v42[v48 + -8 * v43];
  *(_QWORD*)&v42[v48] = v6;
  v40 = (__int64)&v42[v48 + 8];
  GameRoutine_1a0b950(v50, v41, v42);
  v36[3] = v50;
  v36[4] = v40;
  v36[5] = v49;
  if (v41 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v51 = 56;
    }
    GameRoutine_1a0a4e0(*v2 + v51, v41);
  }
LABEL_51:
  v36[4] = v40;
  result = *(_QWORD*)(a1 + 24);
  if (*(_BYTE*)(result + 12) != 1 || *(_DWORD*)(result + 8) != 0) {
    *(_DWORD*)(result + 16) = 0;
    *(_BYTE*)(result + 20) = 1;
  }
  if ((*(_BYTE*)(result + 96) & 1) == 0 && (*(_BYTE*)(result + 97) & 1) != 0) {
    result = GameRoutine_cfa2a0(result, v37);
  }
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 128LL) |= 2u;
  return result;
}

__int64 GameHr_d43580(__int64 result, long double a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  *(float*)&a2 = (float)(*(float*)(*(_QWORD*)(v2 + 8) + 628LL) *
                         *(float*)(*(_QWORD*)(v2 + 8) + 628LL)) +
                 (float)(*(float*)(*(_QWORD*)(v2 + 8) + 624LL) *
                         *(float*)(*(_QWORD*)(v2 + 8) + 624LL));
  if (*(float*)&a2 <= 0.0) {
    result = *(_QWORD*)(v2 + 24);
    if (*(_BYTE*)(result + 12) != 1 || *(_DWORD*)(result + 8) != 1) {
      *(_DWORD*)(result + 16) = 1;
      *(_BYTE*)(result + 20) = 1;
    }
    if ((*(_BYTE*)(result + 96) & 1) == 0 &&
        (*(_BYTE*)(result + 97) & 1) != 0) {
      return GameRoutine_cfa2a0(result, a2);
    }
  }
  return result;
}

__int64 GameHr_d45200(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4,
                      __int64 a5, __int64 a6)
{
  __int128 v8;
  __int64 result;
  __int64 v10;
  long double v11;

  *(_QWORD*)(a1 + 88) = a5;
  if (*(unsigned __int8*)(a1 + 112) == *(unsigned __int8*)(a6 + 16)) {
    if (*(_BYTE*)(a1 + 112) != 0) {
      *(_DWORD*)(a1 + 96) = *(_DWORD*)a6;
      *(_DWORD*)(a1 + 100) = *(_DWORD*)(a6 + 4);
      v8 = *(_OWORD*)(a1 + 96);
      *((_QWORD*)&v8 + 1) = *(unsigned int*)(a6 + 8);
      *(_OWORD*)(a1 + 96) = v8;
    }
  }
  else if (*(_BYTE*)(a1 + 112) != 0) {
    *(_BYTE*)(a1 + 112) = 0;
  }
  else {
    *(_QWORD*)(a1 + 104) = *(_QWORD*)(a6 + 8);
    *(_QWORD*)(a1 + 96) = *(_QWORD*)a6;
    *(_BYTE*)(a1 + 112) = 1;
  }
  result = GameRoutine_60a060(a1 + 128, a2, a3);
  v10 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 152) = *a4;
  LODWORD(v11) = a4[1];
  *(_DWORD*)(a1 + 156) = LODWORD(v11);
  if ((*(_BYTE*)(v10 + 848) & 1) == 0) {
    *(_DWORD*)(v10 + 32) = 4;
    *(_BYTE*)(v10 + 36) = 1;
    if ((*(_BYTE*)(v10 + 112) & 1) == 0 && (*(_BYTE*)(v10 + 113) & 1) != 0) {
      return GameRoutine_cfa2a0(v10 + 16, v11);
    }
  }
  return result;
}

void GameHr_d49790(__int64 a1, long double a2)
{
  long double v3;
  __int64 v4;
  int v5;
  int v7;

  GameRoutine_d48540(a1, a2);
  LODWORD(v3) = *(_DWORD*)(a1 + 80);
  if (*(float*)&v3 >= *(float*)(*(_QWORD*)(a1 + 96) + 136LL)) {
    v7 = 8;
    if ((GameRoutine_daa180(
             *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 32LL), &v7) &
         1) != 0) {
      return;
    }
    LODWORD(v3) = *(_DWORD*)(a1 + 80);
  }
  if (*(float*)&v3 >= *(float*)(a1 + 112)) {
    v4 = *(_QWORD*)(a1 + 8);
    v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 32LL) != 0 ? 5 : 0;
    if ((*(_BYTE*)(v4 + 848) & 1) == 0) {
      if (*(_BYTE*)(v4 + 28) != 1 || *(_DWORD*)(v4 + 24) != v5) {
        *(_DWORD*)(v4 + 32) = v5;
        *(_BYTE*)(v4 + 36) = 1;
      }
      if ((*(_BYTE*)(v4 + 112) & 1) == 0 && (*(_BYTE*)(v4 + 113) & 1) != 0) {
        GameRoutine_cfa2a0(v4 + 16, v3);
      }
    }
  }
}

__int64 GameHr_d63b00(__int64 a1, unsigned __int8* a2, __int64* a3)
{
  int v3;
  unsigned int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27[2];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[6];
  unsigned int v33;
  unsigned __int64 v34;

  v3 = *(_DWORD*)(a1 + 256);
  LOWORD(v27[0]) = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ((unsigned int)(v3 - 1) >= 3) {
    v6 = 1;
  }
  else {
    v6 = 4;
  }
  v7 = *a2;
  if ((v7 & 1) != 0) {
    v8 = *((_QWORD*)a2 + 1);
  }
  else {
    v8 = v7 >> 1;
  }
  if ((v7 & 1) != 0) {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  else {
    v9 = a2 + 1;
  }
  GameRoutine_60a060(v27, v9, v8);
  if (&v29 != a3) {
    GameRoutine_6b7aa0(&v29);
  }
  v11 = (__int64*)(a1 + 24LL * v6);
  v12 = v11 + 160;
  GameRoutine_d5bf40(v32, v10, v27);
  v13 = v11[161];
  v14 = v11[162];
  v33 = 0;
  if (v13 >= v14) {
    result = GameRoutine_d5bb40(v11 + 160, (__int64)v32);
  }
  else {
    *(_BYTE*)v13 = 0;
    *(_DWORD*)(v13 + 48) = -1;
    v15 = v33;
    if (v33 != -1) {
      v34 = v13;
      ((void (*)(unsigned __int64*, _QWORD*))GameData_1fdce38[v33])(&v34, v32);
      *(_DWORD*)(v13 + 48) = v15;
    }
    result = v13 + 64;
  }
  v17 = v33;
  v12[1] = result;
  if ((_DWORD)v17 != -1) {
    result = ((__int64 (*)(unsigned __int64*, _QWORD*))GameData_1fdce28[v17])(
        &v34, v32);
  }
  v18 = v29;
  if (v29 != 0) {
    v19 = v30;
    v20 = GameData_212bf68;
    if (v29 == v30) {
      goto LABEL_30;
    }
    v21 = v30;
    do {
      v22 = *(_BYTE*)(v21 - 24);
      v21 -= 24;
      if ((v22 & 1) != 0) {
        v23 = *(_QWORD*)(v19 - 8);
        if (v23 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)v20 + v24, v23);
        }
      }
      v19 = v21;
    } while (v21 != v18);
    v30 = v18;
    v18 = v29;
    if (v29 != 0) {
    LABEL_30:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v25 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v20 + v25, v18);
    }
  }
  if ((v27[0] & 1) != 0 && v28 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v26 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v26, v28);
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

__int64 GameHr_da13a0(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  int v3;

  v1 = *(_QWORD**)(a1 + 8);
  v2 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  if ((*(_BYTE*)(GameData_21f3ce0 + 80) & 1) == 0) {
    *(_BYTE*)(GameData_21f3ce0 + 80) = 1;
  }
  v3 = *(_DWORD*)(v2 + 232);
  if (v3 <= 2) {
    v3 = 2;
  }
  *(_DWORD*)(v2 + 232) = v3;
  GameRoutine_f482e0();
  return GameRoutine_d9fe20(v1);
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
