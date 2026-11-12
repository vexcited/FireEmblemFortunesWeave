#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BaseNx_2ae880(__int64*);
__int64 GameRoutine_2adfb0(__int64);
__int64 SoundThread_2a1f40(__int64, __int64);
__int64 nn_os_SleepThread(_QWORD);
void* BaseNx_2a1b90();
__int64 nn_atk_2ae7a0(__int64* a1);
_QWORD* nn_atk_2b30e0(_QWORD* a1, unsigned __int64 a2);

__int64 nn_atk_2ae7a0(__int64* a1)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64* i;
  __int64* v5;
  __int64 v6;
  void* v7;

  BaseNx_2ae880(a1);
  while ((__int64*)a1[16] != a1 + 15) {
    nn_os_SleepThread(5000000);
  }
  v2 = (unsigned __int64)a1[12] >> 10;
  if ((int)v2 >= 1) {
    v3 = a1[11];
    do {
      GameRoutine_2adfb0(v3);
      v3 += 1024;
      LODWORD(v2) = v2 - 1;
    } while ((_DWORD)v2 != 0);
  }
  for (i = (__int64*)a1[14]; i != a1 + 13; i = (__int64*)a1[14]) {
    v5 = (__int64*)i[1];
    v6 = *v5;
    *(_QWORD*)(*i + 8) = v5;
    *v5 = *i;
    *(_QWORD*)(v6 + 8) = i;
    *i = v6;
  }
  v7 = BaseNx_2a1b90();
  return SoundThread_2a1f40((__int64)v7, (__int64)(a1 + 8));
}

_QWORD* nn_atk_2b30e0(_QWORD* a1, unsigned __int64 a2)
{
  _QWORD* v2;
  _QWORD* result;
  _QWORD* v4;

  v2 = (_QWORD*)a1[1];
  if (v2 == a1) {
    return nullptr;
  }
  while (1) {
    v4 = (_QWORD*)v2[1];
    if (v2[2] <= a2 && v2[3] > a2) {
      break;
    }
    v2 = (_QWORD*)v2[1];
    if (v4 == a1) {
      return nullptr;
    }
  }
  result = (_QWORD*)nn_atk_2b30e0(v2 + 5, a2);
  if (result == nullptr) {
    return v2;
  }
  return result;
}

#pragma GCC visibility pop
