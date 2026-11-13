#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __uflow(__int64);
__int64 musl_src_78ead0(_QWORD* a1);

__int64 musl_src_78ead0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 result;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;

  {
    v1 = a1[1];
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v2 = a1[11];
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v3 = a1[23];
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v5 = v1 - v2 + a1[24];
    __asm__ volatile("" ::"r"(v5));
  }
  if (v3 != 0 && v5 >= v3) {
    goto LABEL_17;
  }
  result = __uflow((__int64)a1);
  if ((result & 0x80000000) != 0) {
    {
      v2 = a1[11];
      __asm__ volatile("" ::"r"(v2));
    }
    {
      v1 = a1[1];
      __asm__ volatile("" ::"r"(v1));
    }
  LABEL_17:
    a1[24] = v5 + v2 - v1;
    a1[22] = v1;
    a1[23] = -1;
    return 0xFFFFFFFFLL;
  }
  {
    v8 = a1[23];
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = a1[1];
    __asm__ volatile("" ::"r"(v9));
  }
  v10 = v8 - (v5 + 1);
  if ((__int64)(a1[2] - v9) <= v10) {
    v11 = a1[2];
    __asm__ volatile("" ::"r"(v11));
  }
  else {
    v11 = v9 + v10;
  }
  if (v8 != 0) {
    v12 = v11;
  }
  else {
    v12 = a1[2];
    __asm__ volatile("" ::"r"(v12));
  }
  a1[22] = v12;
  {
    v13 = a1[11];
    __asm__ volatile("" ::"r"(v13));
  }
  a1[24] = v5 + 1 + v13 - v9;
  if (v9 <= v13) {
    *(_BYTE*)(v9 - 1) = result;
  }
  return result;
}

#pragma GCC visibility pop
