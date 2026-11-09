#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0cc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a18e0(_QWORD);
__int64 GameRoutine_2a5790(_QWORD, _QWORD);
bool PlayerHeap_284190(_QWORD* a1, __int64 a2, __int64 a3);
__int64 PlayerHeap_284200(_QWORD* a1);
__int64 PlayerHeap_Unknown2(__int64 a1, __int64 a2);
__int64 PlayerHeap_Unknown3(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);

bool PlayerHeap_284190(_QWORD* a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;

  GameRoutine_2a5790(a2, a3);
  v6 = a2 + a3;
  v7 = (a2 + 4095) & 0xFFFFFFFFFFFFF000LL;
  if (a2 + a3 >= v7) {
    a1[2] = v7;
    a1[3] = v6;
    a1[4] = v7;
  }
  return v6 >= v7;
}

__int64 PlayerHeap_284200(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64* v6;
  __int64* v7;
  __int64 (*v8)(__int64);
  __int64* v9;
  __int64 v10;

  v2 = GameRoutine_2a18e0(a1);
  v3 = GameRoutine_2a0820(v2, 40, 8, 0);
  *(_DWORD*)(v3 + 8) = 67;
  v4 = a1[2];
  *(_QWORD*)(v3 + 24) = v4;
  *(_QWORD*)(v3 + 32) = a1[4] - v4;
  GameRoutine_2a0e80(v2, v3);
  result = GameRoutine_2a0cc0(v2, 0, 0);
  v6 = (__int64*)a1[9];
  v7 = a1 + 8;
  a1[4] = a1[2];
  if (v6 != a1 + 8) {
    do {
      v8 = (__int64 (*)(__int64))v6[2];
      if (v8 != nullptr) {
        result = v8(v6[3]);
      }
      v6 = (__int64*)v6[1];
    } while (v6 != v7);
    goto LABEL_7;
  }
  while (v6 != v7) {
    v9 = (__int64*)v6[1];
    v10 = *v9;
    *(_QWORD*)(*v6 + 8) = v9;
    *v9 = *v6;
    *(_QWORD*)(v10 + 8) = v6;
    *v6 = v10;
  LABEL_7:
    v6 = (__int64*)a1[9];
  }
  return result;
}

__int64 PlayerHeap_Unknown2(__int64 a1, __int64 a2)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 32);
  if ((unsigned __int64)(result + a2) > *(_QWORD*)(a1 + 24)) {
    return 0;
  }
  *(_QWORD*)(a1 + 32) = (result + a2 + 4095) & 0xFFFFFFFFFFFFF000LL;
  return result;
}

__int64 PlayerHeap_Unknown3(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;

  result = a1[4];
  v6 = (_QWORD*)(result + a2);
  if ((unsigned __int64)(result + a2 + 32) > a1[3]) {
    return 0;
  }
  a1[4] = (result + a2 + 4127) & 0xFFFFFFFFFFFFF000LL;
  *v6 = v6;
  v6[1] = v6;
  v6[2] = a3;
  v6[3] = a4;
  v8 = a1[8];
  v7 = a1 + 8;
  *v6 = v8;
  v6[1] = v7;
  *(_QWORD*)(*v7 + 8LL) = v6;
  *v7 = v6;
  return result;
}

#pragma GCC visibility pop
