#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10a04e0(__int64*, float*, float*, __int64);
extern __int64 (*GameData_200dca0[])();
extern __int64 (*GameData_200dd20[])();
extern __int64 (*GameData_200dda0[])();
__int64 DirectIn_Unknown18(__int64* a1);

float DirectIn_Unknown19() { return 0.4; }

__int64 WallCollisionModule_Unknown8(__int64 result);

__int64 DirectIn_Unknown18(__int64* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  int v14;
  int v15;

  v13 = v12;
  v12[0] = GameData_200dca0;
  v14 = -1082130432;
  v15 = 0;
  v2 = (_QWORD*)a1[20];
  if ((unsigned __int64)v2 >= a1[21]) {
    v3 = (_QWORD*)GameRoutine_10a04e0(a1 + 19, (float*)&v15, (float*)&v14,
                                      (__int64)v12);
  }
  else {
    v2[2] = GameData_200dca0;
    v3 = v2 + 8;
    v2[6] = v2 + 2;
    *v2 = 0xBF80000000000000LL;
  }
  v4 = v13;
  a1[20] = (__int64)v3;
  if (v4 == v12) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(_QWORD*))(*v4 + v5))(v4);
  v3 = (_QWORD*)a1[20];

LABEL_9:
  v13 = v12;
  v12[0] = GameData_200dd20;
  v15 = 1061997773;
  v14 = -1082130432;
  if ((unsigned __int64)v3 >= a1[21]) {
    v6 = (_QWORD*)GameRoutine_10a04e0(a1 + 19, (float*)&v15, (float*)&v14,
                                      (__int64)v12);
  }
  else {
    v3[2] = GameData_200dd20;
    v3[6] = v3 + 2;
    *v3 = 0xBF8000003F4CCCCDLL;
    v6 = v3 + 8;
  }
  v7 = v13;
  a1[20] = (__int64)v6;
  if (v7 == v12) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_17;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*))(*v7 + v8))(v7);
  v6 = (_QWORD*)a1[20];

LABEL_17:
  v13 = v12;
  v12[0] = GameData_200dda0;
  v14 = -1082130432;
  v15 = 1065353216;
  if ((unsigned __int64)v6 >= a1[21]) {
    v9 = GameRoutine_10a04e0(a1 + 19, (float*)&v15, (float*)&v14, (__int64)v12);
  }
  else {
    v6[2] = GameData_200dda0;
    v6[6] = v6 + 2;
    *v6 = 0xBF8000003F800000LL;
    v9 = (__int64)(v6 + 8);
  }
  a1[20] = v9;
  result = (__int64)v13;
  if (v13 == v12) {
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(_QWORD*))(*v13 + v11))(v13);
}

#pragma GCC visibility pop
