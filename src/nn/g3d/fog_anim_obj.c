#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void GameRoutine_5e83a0(__int64, __int64, long double);
void GameRoutine_5e8440(__int64, __int64, __int64, long double);
float FogAnimObj_Unknown3(__int64 a1, long double a2);
float GameRoutine_5e52c0(__int64, long double);
void FogAnimObj_5e83a0(__int64 a1, __int64 a2, long double a3);
void FogAnimObj_5e8440(__int64 a1, __int64 a2, __int64 a3, long double a4);

void FogAnimObj_5e83a0(__int64 a1, __int64 a2, long double a3)
{
  int v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (*(_BYTE*)(a1 + 66) != 0) {
    v3 = LODWORD(a3);
    v6 = 0;
    v7 = 48LL * *(unsigned __int8*)(a1 + 66);
    do {
      LODWORD(a3) = v3;
      v8 = *(_QWORD*)(a1 + 16) + v6;
      v9 = *(unsigned int*)(v8 + 20);
      v6 += 48;
      *(float*)(a2 + v9) = GameRoutine_5e52c0(v8, a3);
    } while (v7 != v6);
  }
}

void FogAnimObj_5e8440(__int64 a1, __int64 a2, __int64 a3, long double a4)
{
  int v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(_BYTE*)(a1 + 66) != 0) {
    v4 = LODWORD(a4);
    v8 = 0;
    v9 = 48LL * *(unsigned __int8*)(a1 + 66);
    do {
      LODWORD(a4) = v4;
      v10 = *(_QWORD*)(a1 + 16) + v8;
      v11 = *(unsigned int*)(v10 + 20);
      a3 += 12;
      v8 += 48;
      *(float*)(a2 + v11) = GameRoutine_5e52c0(v10, a4);
    } while (v9 != v8);
  }
}

float FogAnimObj_Unknown3(__int64 a1, long double a2)
{
  int v2;
  _DWORD* v5;

  LODWORD(a2) = **(_DWORD**)(a1 + 8);
  if (*(float*)(a1 + 64) != *(float*)&a2) {
    v2 = *(_DWORD*)(a1 + 60);
    if (v2 >= 1 && v2 <= *(_DWORD*)(a1 + 56)) {
      GameRoutine_5e8440(*(_QWORD*)(a1 + 96), *(_QWORD*)(a1 + 72),
                         *(_QWORD*)(a1 + 48), a2);
    }
    else {
      GameRoutine_5e83a0(*(_QWORD*)(a1 + 96), *(_QWORD*)(a1 + 72), a2);
    }
    v5 = *(_DWORD**)(a1 + 8);
    LODWORD(a2) = *v5;
    *(_DWORD*)(a1 + 64) = *v5;
  }
  return *(float*)&a2;
}

#pragma GCC visibility pop
