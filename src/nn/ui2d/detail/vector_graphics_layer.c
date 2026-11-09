#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_59f870(__int64, unsigned int, __int64);
__int64 GameRoutine_5a71e0(__int64 result, __int64, __int64, int, int,
                           unsigned __int16*);
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
__int64 VectorGraphicsLayer_Unknown8(__int64 a1, __int64 a2);
_QWORD* VectorGraphicsLayer_Unknown2(_QWORD* result, __int64 a2, __int64 a3,
                                     int a4, int a5);
__int64 VectorGraphicsLayer_Unknown3(__int64 a1, __int64 a2);
__int64 VectorGraphicsLayer_5a80e0(_QWORD* a1, __int64 a2, __int64 a3,
                                   __int64 a4);
__int64 VectorGraphicsLayer_5a8160(_QWORD* a1, __int64 a2);

__int64 VectorGraphicsLayer_Unknown8(__int64 a1, __int64 a2)
{
  int v4;
  __int64 v5;
  __int64 v6;

  if (*(int*)(a1 + 80) < 1) {
    return 0;
  }
  v4 = 0;
  v5 = 0;
  do {
    v6 = GameRoutine_59f870(a2, 0x10u, 64) + v5;
    v5 = v6 + GameRoutine_59f870(a2, 0x10u, 16);
    ++v4;
  } while (v4 < *(_DWORD*)(a1 + 80));
  return v5;
}

_QWORD* VectorGraphicsLayer_Unknown2(_QWORD* result, __int64 a2, __int64 a3,
                                     int a4, int a5)
{
  __int64 v5;
  _OWORD* v6;
  __int64 v7;
  __int64 v8;

  v5 = result[17];
  v6 = (_OWORD*)((*(_QWORD*)(v5 + 16) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
  *(_QWORD*)(v5 + 16) = v6 + 3;
  result[4] = v6;
  *v6 = GameData_1a82dd0;
  v6[1] = GameData_1a83610;
  v6[2] = GameData_1a83090;
  v7 = result[6];
  if (v7 != 0) {
    v8 = result[5];
    if ((*(_BYTE*)(v8 + 145) & 2) != 0) {
      return (_QWORD*)GameRoutine_5a71e0(
          (__int64)(result + 8), a2, a3, a4, a5,
          (unsigned __int16*)(*(_QWORD*)(v7 + 160) +
                              16LL * *(unsigned __int16*)(v8 + 146)));
    }
  }
  return result;
}

__int64 VectorGraphicsLayer_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(int*)(a1 + 80) >= 1) {
    v4 = 8;
    v5 = 0;
    do {
      (*(void (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 88) + v4) + 24LL))(
          *(_QWORD*)(*(_QWORD*)(a1 + 88) + v4));
      (***(void (****)(_QWORD))(*(_QWORD*)(a1 + 88) + v4))(
          *(_QWORD*)(*(_QWORD*)(a1 + 88) + v4));
      ++v5;
      v4 += 40;
    } while (v5 < *(int*)(a1 + 80));
    *(_QWORD*)(a1 + 88) = 0;
    *(_QWORD*)(a1 + 96) = 0;
  }
  result = *(_QWORD*)(a1 + 64);
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 24LL))(
        result, a2);
    *(_QWORD*)(a1 + 64) = 0;
  }
  *(_QWORD*)(a1 + 32) = 0;
  v7 = a1 + 144;
  v8 = *(_QWORD*)(a1 + 152);
  if (v8 != v7) {
    do {
      v10 = *(_QWORD*)(v8 - 8);
      v9 = v8 - 8;
      v11 = *(_QWORD*)(v9 + 16);
      (*(void (**)(__int64, __int64))(v10 + 24))(v9, a2);
      result = (**(__int64 (***)(__int64))v9)(v9);
      v8 = v11;
    } while (v11 != v7);
  }
  return result;
}

__int64 VectorGraphicsLayer_5a80e0(_QWORD* a1, __int64 a2, __int64 a3,
                                   __int64 a4)
{
  __int64 result;
  _QWORD* v9;
  _QWORD* i;
  _QWORD* v11;
  __int64 v12;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 72LL))(a1);
  v9 = a1 + 18;
  for (i = (_QWORD*)a1[19]; i != v9; i = (_QWORD*)v11[2]) {
    v12 = *(i - 1);
    v11 = i - 1;
    result = (*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(v12 + 32))(
        v11, a2, a3, a4);
  }
  return result;
}

__int64 VectorGraphicsLayer_5a8160(_QWORD* a1, __int64 a2)
{
  __int64 result;
  _QWORD* v5;
  _QWORD* i;
  _QWORD* v7;
  __int64 v8;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 80LL))(a1);
  v5 = a1 + 18;
  for (i = (_QWORD*)a1[19]; i != v5; i = (_QWORD*)v7[2]) {
    v8 = *(i - 1);
    v7 = i - 1;
    result = (*(__int64 (**)(_QWORD*, __int64))(v8 + 40))(v7, a2);
  }
  return result;
}

#pragma GCC visibility pop
