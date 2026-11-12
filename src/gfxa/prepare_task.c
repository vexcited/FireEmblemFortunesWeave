#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_20();
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN** GameData_212e750[2];
extern _UNKNOWN** GameData_212e758;
extern __int128 GameData_1a829e0;
extern __int128 GameData_1a82a50;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a83000;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern int GameData_21675c0;
extern int GameData_21675cc;
float log2f(_QWORD, float);
__int64 PrepareTask_Unknown2(__int64 result, _QWORD* a2, __int64 a3);
float log2f_alt1(float) __asm__("log2f");

__int64 PrepareTask_Unknown2(__int64 result, _QWORD* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  _UNKNOWN** v6;
  _UNKNOWN** v7;
  __int128* v8;
  int v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;

  if (a3 != 0) {
    v4 = result;
    v5 = 24 * a3;
    v6 = GameData_212e758;
    v7 = GameData_212e750[0];
    v8 = (__int128*)GameData_212c2a0;
    do {
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 32LL))(*a2) & 1) != 0) {
        (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 168LL))(*a2, 0);
      }
      v9 = *(_DWORD*)(*(_QWORD*)(v4 + 8) + 13240LL);
      if ((unsigned int)(v9 - 3) > 3) {
        v12 = *v8;
        v11 = v8[1];
        v10 = *(_OWORD*)((char*)((char*)0x20LL) + (_QWORD)v8);
        v13 = 0;
        v14 = 1033099622;
        v15 = 1046068746;
        v16 = 1060574545;
      }
      else {
        if ((unsigned int)(v9 - 5) >= 2) {
          v10 = GameData_1a82d20;
          v11 = GameData_1a834b0;
          v12 = GameData_1a83620;
        }
        else {
          v10 = GameData_1a829e0;
          v11 = GameData_1a83000;
          v12 = GameData_1a82a50;
        }
        v13 = 0x3F80000000000000LL;
        v14 = 1030940327;
        v15 = 1049002141;
        v16 = 1059950919;
      }
      v17 = v16;
      v18 = *(_QWORD**)(v4 + 16);
      *v18 = v12;
      v18[1] = v13 | DWORD2(v12);
      v19 = *(_QWORD*)(v4 + 16);
      *(_QWORD*)(v19 + 16) = v11;
      *(_QWORD*)(v19 + 24) = DWORD2(v11);
      v20 = *(_QWORD*)(v4 + 16);
      *(_QWORD*)(v20 + 32) = v10;
      *(_QWORD*)(v20 + 40) = DWORD2(v10);
      v21 = *(_DWORD**)(v4 + 16);
      v21[12] = v15;
      v21[13] = v17;
      v21[14] = v14;
      v22 = *(float*)&GameData_21675cc;
      v23 = *(float*)&GameData_21675c0;
      v21[15] = 0;
      *(float*)(*(_QWORD*)(v4 + 16) + 64LL) = v22 / v23;
      v24 = 0x0.0p+0f;
      *(_DWORD*)(*(_QWORD*)(v4 + 16) + 68LL) = 1065353216;
      *(_DWORD*)(*(_QWORD*)(v4 + 16) + 72LL) = 1065353216;
      v25 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 16672LL);
      if (*(_BYTE*)(v25 + 2132) == 1) {
        v24 = log2f_alt1((float)*(int*)(v25 + 32) / (float)*(int*)(v25 + 24)) +
              -0x1.0000000000000p+0f;
      }
      *(float*)(*(_QWORD*)(v4 + 16) + 76LL) = v24;
      v26 = *a2 + 8LL;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 32LL))(*a2) & 1) != 0) {
        ((void (*)(__int64, _QWORD, _QWORD, __int64, _QWORD))*v7)(
            v26, 0, 0, 112, *(_QWORD*)(v4 + 16));
      }
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 32LL))(*a2);
      if ((result & 2) != 0) {
        result = ((__int64 (*)(__int64, _QWORD, _QWORD, __int64, _QWORD))*v6)(
            v26, 0, 0, 112, *(_QWORD*)(v4 + 16));
      }
      a2 += 3;
      v5 -= 24;
    } while (v5 != 0);
  }
  return result;
}

#pragma GCC visibility pop
