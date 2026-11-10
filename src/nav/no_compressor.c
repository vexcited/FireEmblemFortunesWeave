#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(void);
__int64 NoCompressor_Unknown2(__int64 a1, unsigned int a2);
__int64 NoCompressor_Unknown2(__int64 a1, unsigned int a2) { return a2; }

__int64 NoCompressor_Unknown3(__int64 a1, __int64 a2, int a3, __int64 a4,
                              __int64 a5, _DWORD* a6)
{
  memcpy(a4, a2, a3);
  *a6 = a3;
  return 0x40000000;
}

__int64 NoCompressor_Unknown4(__int64 a1, __int64 a2, int a3, __int64 a4,
                              __int64 a5, int* a6)
{
  memcpy(a4, a2, a3);
  *a6 = a3;
  if (a3 >= 0) {
    return 0x40000000;
  }
  else {
    return 0x80000000LL;
  }
}

#pragma GCC visibility pop
