#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

__n128 GameRoutine_10c830(_QWORD, long double);

__n128 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_10d050(_QWORD, _QWORD);

__int64 GameRoutine_112290(_QWORD);

__int64 GameRoutine_149a90(_QWORD);

__int64 GameRoutine_1a09d30(_QWORD, _QWORD);

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

#pragma GCC visibility pop
