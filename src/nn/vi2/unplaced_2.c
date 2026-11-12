#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nn_vi2_5e1874(PSEUDO_X8 x8_, __int64 result,
                                              int a2, __int64 a3);

__attribute__((swiftcall)) void nn_vi2_5e1874(PSEUDO_X8 x8_, __int64 result,
                                              int a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  a4[6] = 0;
  a4[7] = 0;
  a4[4] = 0;
  a4[5] = 0;
  a4[3] = 0;
  *a4 = 0x1100000000LL;
  a4[1] = ((a2 << 16) - 0x10000) & 0xFFFF0000 |
          (unsigned __int64)(unsigned __int16)(result - 1) | (a3 << 32);
  a4[2] = 0;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
