#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy(_QWORD, _QWORD, _QWORD);
_QWORD* MemoryFileStream_Unknown2(_QWORD* result);
unsigned __int64 MemoryFileStream_Unknown4(_QWORD* a1, __int64 a2,
                                           unsigned __int64 a3);
__int64 MemoryFileStream_Unknown6(__int64 a1, __int64 a2, int a3);

_QWORD* MemoryFileStream_Unknown2(_QWORD* result)
{
  result[2] = 0;
  result[3] = 0;
  result[1] = 0;
  return result;
}

unsigned __int64 MemoryFileStream_Unknown4(_QWORD* a1, __int64 a2,
                                           unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v5;

  v3 = a1[3];
  if (a1[2] - v3 >= a3) {
    v5 = a3;
  }
  else {
    v5 = a1[2] - v3;
  }
  memcpy(a2, a1[1] + v3, v5);
  a1[3] += v5;
  return v5;
}

__int64 MemoryFileStream_Unknown6(__int64 a1, __int64 a2, int a3)
{
  if (a3 == 2) {
    *(_QWORD*)(a1 + 24) += a2;
    return 0;
  }
  else if (a3 == 1) {
    *(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 16) - a2;
    return 0;
  }
  else if (a3 != 0) {
    return 0x80000000LL;
  }
  else {
    *(_QWORD*)(a1 + 24) = a2;
    return 0;
  }
}

#pragma GCC visibility pop
