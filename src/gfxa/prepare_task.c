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

__int64 PrepareTask_Unknown2(__int64 result, _QWORD* a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  _UNKNOWN** v6;
  _UNKNOWN** v7;
  __int128* v8;
  __int64 v9;
  int v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _DWORD* v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;

  if (a3 != 0) {
    v4 = result;
    v5 = 24 * a3;
    v6 = GameData_212e758;
    v7 = GameData_212e750[0];
    v8 = (__int128*)GameData_212c2a0;
    do {
      v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 32LL))(*a2);
      if ((v9 & 1) != 0) {
        v9 = (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 168LL))(*a2, 0);
      }
      v10 = *(_DWORD*)(*(_QWORD*)(v4 + 8) + 13240LL);
      if ((unsigned int)(v10 - 3) > 3) {
        v13 = *v8;
        v12 = v8[1];
        v11 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v8);
        v14 = 0;
        v15 = 1033099622;
        v16 = 1046068746;
        v17 = 1060574545;
      }
      else {
        if ((unsigned int)(v10 - 5) >= 2) {
          v11 = GameData_1a82d20;
          v12 = GameData_1a834b0;
          v13 = GameData_1a83620;
        }
        else {
          v11 = GameData_1a829e0;
          v12 = GameData_1a83000;
          v13 = GameData_1a82a50;
        }
        v14 = 0x3F80000000000000LL;
        v15 = 1030940327;
        v16 = 1049002141;
        v17 = 1059950919;
      }
      v18 = v17;
      v19 = *(_QWORD**)(v4 + 16);
      *v19 = v13;
      v19[1] = v14 | DWORD2(v13);
      v20 = *(_QWORD*)(v4 + 16);
      *(_QWORD*)(v20 + 16) = v12;
      *(_QWORD*)(v20 + 24) = DWORD2(v12);
      v21 = *(_QWORD*)(v4 + 16);
      *(_QWORD*)(v21 + 32) = v11;
      *(_QWORD*)(v21 + 40) = DWORD2(v11);
      v22 = *(_DWORD**)(v4 + 16);
      v22[12] = v16;
      v22[13] = v18;
      v22[14] = v15;
      v23 = *(float*)&GameData_21675cc;
      v24 = *(float*)&GameData_21675c0;
      v22[15] = 0;
      *(float*)(*(_QWORD*)(v4 + 16) + 64LL) = v23 / v24;
      v25 = 0.0;
      *(_DWORD*)(*(_QWORD*)(v4 + 16) + 68LL) = 1065353216;
      *(_DWORD*)(*(_QWORD*)(v4 + 16) + 72LL) = 1065353216;
      v26 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 16672LL);
      if (*(_BYTE*)(v26 + 2132) == 1) {
        v25 = log2f(v9, (float)*(int*)(v26 + 32) / (float)*(int*)(v26 + 24)) +
              -1.0;
      }
      *(float*)(*(_QWORD*)(v4 + 16) + 76LL) = v25;
      v27 = *a2 + 8LL;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 32LL))(*a2) & 1) != 0) {
        ((void (*)(__int64, _QWORD, _QWORD, __int64, _QWORD))*v7)(
            v27, 0, 0, 112, *(_QWORD*)(v4 + 16));
      }
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 32LL))(*a2);
      if ((result & 2) != 0) {
        result = ((__int64 (*)(__int64, _QWORD, _QWORD, __int64, _QWORD))*v6)(
            v27, 0, 0, 112, *(_QWORD*)(v4 + 16));
      }
      a2 += 3;
      v5 -= 24;
    } while (v5 != 0);
  }
  return result;
}

#pragma GCC visibility pop
