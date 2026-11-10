#include "decomp/pseudo_types.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5a4050(__int64, _BYTE*, _DWORD*, __int64, __int64, __int64,
                          __int64, __int64, char, unsigned int);

__int64 SdkHr_5a44e0(__int64 a1, _BYTE* a2, _DWORD* a3, __int64* a4,
                     __int64* a5, __int64 a6, char a7)
{
  return SdkRoutine_5a4050(a1 + 8, a2, a3, *a4, 12 * a4[1], *a5, a5[1], a6,
                           a7 & 1, 1u);
}

#pragma GCC visibility pop
