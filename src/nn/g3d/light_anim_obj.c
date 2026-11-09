#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void GameRoutine_5e81c0(__int64, _DWORD*, long double);
void GameRoutine_5e82a0(__int64, _DWORD*, __int64, long double);
float LightAnimObj_Unknown3(__int64 a1, long double a2);
__int64 GameRoutine_5e53f0(__int64, long double);
float GameRoutine_5e52c0(__int64, long double);
void LightAnimObj_5e81c0(__int64 a1, _DWORD* a2, long double a3);
void LightAnimObj_5e82a0(__int64 a1, _DWORD* a2, __int64 a3, long double a4);

void LightAnimObj_5e81c0(__int64 a1, _DWORD* a2, long double a3)
{
  int v3;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v3 = LODWORD(a3);
  if ((*(_WORD*)(a1 + 4) & 0x100) != 0) {
    v8 = GameRoutine_5e53f0(*(_QWORD*)(a1 + 16), a3);
    v6 = 1;
    *a2 = v8;
    v7 = *(unsigned __int8*)(a1 + 82);
    if ((unsigned int)v7 <= 1) {
      return;
    }
  }
  else {
    v6 = 0;
    v7 = *(unsigned __int8*)(a1 + 82);
    if (*(_BYTE*)(a1 + 82) == 0) {
      return;
    }
  }
  v9 = v7 - v6;
  v10 = (16LL * v6) | (32LL * v6);
  do {
    LODWORD(a3) = v3;
    v11 = *(_QWORD*)(a1 + 16) + v10;
    v12 = *(unsigned int*)(v11 + 20);
    v10 += 48;
    --v9;
    *(float*)((char*)a2 + v12) = GameRoutine_5e52c0(v11, a3);
  } while (v9 != 0);
}

void LightAnimObj_5e82a0(__int64 a1, _DWORD* a2, __int64 a3, long double a4)
{
  int v4;
  unsigned int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v4 = LODWORD(a4);
  if ((*(_WORD*)(a1 + 4) & 0x100) != 0) {
    v10 = GameRoutine_5e53f0(*(_QWORD*)(a1 + 16), a4);
    v8 = 1;
    *a2 = v10;
    v9 = *(unsigned __int8*)(a1 + 82);
    if ((unsigned int)v9 <= 1) {
      return;
    }
  }
  else {
    v8 = 0;
    v9 = *(unsigned __int8*)(a1 + 82);
    if (*(_BYTE*)(a1 + 82) == 0) {
      return;
    }
  }
  v11 = v9 - v8;
  v12 = a3 + 12LL * v8;
  v13 = (16LL * v8) | (32LL * v8);
  do {
    LODWORD(a4) = v4;
    v14 = *(_QWORD*)(a1 + 16) + v13;
    v15 = *(unsigned int*)(v14 + 20);
    v12 += 12;
    v13 += 48;
    --v11;
    *(float*)((char*)a2 + v15) = GameRoutine_5e52c0(v14, a4);
  } while (v11 != 0);
}

float LightAnimObj_Unknown3(__int64 a1, long double a2)
{
  int v2;
  _DWORD* v5;

  LODWORD(a2) = **(_DWORD**)(a1 + 8);
  if (*(float*)(a1 + 64) != *(float*)&a2) {
    v2 = *(_DWORD*)(a1 + 60);
    if (v2 >= 1 && v2 <= *(_DWORD*)(a1 + 56)) {
      GameRoutine_5e82a0(*(_QWORD*)(a1 + 96), *(_DWORD**)(a1 + 72),
                         *(_QWORD*)(a1 + 48), a2);
    }
    else {
      GameRoutine_5e81c0(*(_QWORD*)(a1 + 96), *(_DWORD**)(a1 + 72), a2);
    }
    v5 = *(_DWORD**)(a1 + 8);
    LODWORD(a2) = *v5;
    *(_DWORD*)(a1 + 64) = *v5;
  }
  return *(float*)&a2;
}

#pragma GCC visibility pop
