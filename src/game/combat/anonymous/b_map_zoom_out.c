#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10a04e0(__int64*, float*, float*, __int64);
__int64 GameRoutine_10a0720(__int64*, float*, float*, __int64);
extern __int64 (*GameData_200cdb0[])();
extern __int64 (*GameData_200ceb0[])();
__int64 BMapZoomOut_Unknown18(__int64* a1);

__int64 BMapZoomOut_Unknown18(__int64* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  int v11;
  float v12;

  v10 = v9;
  v9[0] = GameData_200cdb0;
  v11 = -1082130432;
  v12 = 0.5;
  v2 = (_QWORD*)a1[20];
  if ((unsigned __int64)v2 >= a1[21]) {
    v3 = (_QWORD*)GameRoutine_10a04e0(a1 + 19, &v12, (float*)&v11, (__int64)v9);
  }
  else {
    v2[2] = GameData_200cdb0;
    v3 = v2 + 8;
    v2[6] = v2 + 2;
    *v2 = 0xBF8000003F000000LL;
  }
  v4 = v10;
  a1[20] = (__int64)v3;
  if (v4 == v9) {
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
  v10 = v9;
  v9[0] = GameData_200ceb0;
  v11 = 1065353216;
  v12 = 0.0;
  if ((unsigned __int64)v3 >= a1[21]) {
    v6 = GameRoutine_10a0720(a1 + 19, &v12, (float*)&v11, (__int64)v9);
  }
  else {
    v3[2] = GameData_200ceb0;
    v3[6] = v3 + 2;
    *v3 = 0x3F80000000000000LL;
    v6 = (__int64)(v3 + 8);
  }
  a1[20] = v6;
  result = (__int64)v10;
  if (v10 == v9) {
    v8 = 32;
  }
  else {
    if (v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(_QWORD*))(*v10 + v8))(v10);
}

#pragma GCC visibility pop
