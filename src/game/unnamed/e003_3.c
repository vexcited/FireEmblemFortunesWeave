#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern __int64 (*GameData_1fbe160[])();
__int64 GameRoutine_100a90(_QWORD);
__n128 GameRoutine_10c830(_QWORD, long double);
__n128 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_10d050(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD);
__int64 GameRoutine_149a40(_QWORD, _QWORD);
__int64 GameRoutine_149a90(_QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void GameRoutine_a290c0(__int64, __int64, __int64, int, char, float);
__int64 GameRoutine_a2cc00(_QWORD, _QWORD, long double);
__int64 GameRoutine_d9850(_QWORD);
struct PseudoSret GameRoutine_d98c0(_QWORD);
__int64 GameRoutine_dab80(_QWORD);

void GameHr_a2f940(__int64 a1, __int64 a2, _BYTE* a3, char a4, float a5)
{
  _BYTE* v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  long double v15;
  __int64 v16;
  _QWORD v17[25];

  if ((*(_BYTE*)(a1 + 3128) & 1) != 0) {
    return;
  }
  if ((*(_BYTE*)(a1 + 2824) & 1) != 0) {
    v10 = *(_BYTE**)(a1 + 2840);
    *(_QWORD*)(a1 + 2832) = 0;
  }
  else {
    v10 = (_BYTE*)(a1 + 2825);
    *(_BYTE*)(a1 + 2824) = 0;
  }
  *v10 = 0;
  if ((GameRoutine_d9850(*(_QWORD*)(a1 + 8)) & 1) == 0) {
    if (a3 == nullptr) {
      return;
    }
  LABEL_13:
    if (*a3 == 0) {
      return;
    }
    goto LABEL_17;
  }
  v12 = GameRoutine_dab80(*(_QWORD*)(a1 + 8));
  if ((unsigned int)GameRoutine_1a09d30(v12, a3) == 0) {
    goto LABEL_13;
  }
  *(struct PseudoSret*)(v17) = GameRoutine_d98c0(*(_QWORD*)(a1 + 8));
  v13 = GameRoutine_112290(v17);
  if (v13 != 0 && (GameRoutine_149a90(v13 - 5592) & 1) == 0) {
    (*(void (**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
        *(_QWORD*)(a1 + 8), a2, 0);
  }
  if ((*(_BYTE*)(a1 + 2824) & 1) != 0) {
    v14 = *(_BYTE**)(a1 + 2840);
    *(_QWORD*)(a1 + 2832) = 0;
  }
  else {
    v14 = (_BYTE*)(a1 + 2825);
    *(_BYTE*)(a1 + 2824) = 0;
  }
  *v14 = 0;
  if (*a3 != 0) {
  LABEL_17:
    *(_QWORD*)&v11 = 0;
    GameRoutine_10c830(v17, v11);
    GameRoutine_a290c0(a1, (__int64)a3, (__int64)v17, 0, 0, a5);
    *(__n128*)&v15 = GameRoutine_10cff0(v17);
    if ((a4 & 1) == 0) {
      if ((*(_BYTE*)(a1 + 2824) & 1) != 0) {
        v16 = *(_QWORD*)(a1 + 2840);
      }
      else {
        v16 = a1 + 2825;
      }
      GameRoutine_a2cc00(a1, v16, v15);
    }
  }
}

__int64 GameHr_a308c0(__int64 a1, __int64 a2, char a3, int a4, int a5, int a6,
                      long double a7, float a8)
{
  int v8;
  __int64 result;

  v8 = LODWORD(a7);
  *(_QWORD*)&a7 = 0;
  GameRoutine_10c830(a1, a7);
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_DWORD*)(a1 + 223) = 0;
  *(_QWORD*)(a1 + 200) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 208) = 0x1000100000000LL;
  result = GameRoutine_10d050(a1, a2);
  *(_DWORD*)(a1 + 200) = v8;
  *(float*)(a1 + 204) = a8;
  *(_BYTE*)(a1 + 220) = a3;
  *(_DWORD*)(a1 + 208) = a4;
  *(_DWORD*)(a1 + 212) = a5;
  *(_DWORD*)(a1 + 216) = a6;
  return result;
}

void GameHr_a377c0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  long double v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  long double v15;
  _QWORD v16[4];
  _QWORD* v17;
  char v18;
  _QWORD v19[25];

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 152LL))(v2, 32) & 1) !=
      0) {
    goto LABEL_2;
  }
  v6 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 152LL))(v2, 64);
  if ((v6 & 1) != 0) {
    v18 = 0;
    v9 = GameRoutine_100a90(v6);
    v10 = v16;
    v17 = v16;
    v16[0] = GameData_1fbe160;
    v16[1] = v2;
    v11 = *(__int64**)(v9 + 24);
    v16[2] = &v18;
    v12 = *v11;
    if (v12 == 0) {
      goto LABEL_14;
    }
    v13 = *(_QWORD*)(v12 + 5616);
    v10 = v16;
    v19[0] = v12;
    while (1) {
      (*(void (**)(_QWORD*, _QWORD*))(*v10 + 48LL))(v10, v19);
      v10 = v17;
      if (v13 == 0) {
        break;
      }
      v19[0] = v13;
      v13 = *(_QWORD*)(v13 + 5616);
      if (v17 == nullptr) {
        GameRoutine_60a310(0);
      }
    }
    if (v17 == v16) {
    LABEL_14:
      v14 = 32;
    }
    else {
      if (v17 == nullptr) {
        goto LABEL_16;
      }
      v14 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v10 + v14))(v10, v7, v8);
  LABEL_16:
    if (v18 == 1) {
      LODWORD(v4) = *(_DWORD*)(v3 + 520);
      *(__n128*)&v15 = GameRoutine_10c830(v19, v4);
      (*(void (**)(__int64, _QWORD*, long double))(*(_QWORD*)v2 + 248LL))(
          v2, v19, v15);
      goto LABEL_3;
    }
  LABEL_2:
    LODWORD(v4) = *(_DWORD*)(v3 + 520);
    *(__n128*)&v5 = GameRoutine_10c830(v19, v4);
    (*(void (**)(__int64, _QWORD*, long double))(*(_QWORD*)v2 + 240LL))(v2, v19,
                                                                        v5);
  LABEL_3:
    GameRoutine_10cff0(v19);
  }
}

__n128 GameHr_a380c0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  _BYTE v5[200];

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if ((GameRoutine_149a40(*a2, 24) & 1) != 0) {
    ((uint32_t*)&result)[0] = *(_DWORD*)(v3 + 520);
    GameRoutine_10c830(v5, *(long double*)&result);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(*(_QWORD*)v2 + 248LL))(
        v2, v5, 0, 0.0);
    return GameRoutine_10cff0(v5);
  }
  return result;
}

#pragma GCC visibility pop
