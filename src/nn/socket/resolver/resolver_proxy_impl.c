#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1a36c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _DWORD);
__int64 SdkRoutine_1a38b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _DWORD);
__int64 resolver_proxy_1a2cd0(__int64 a1, unsigned int a2, __int64 a3, char a4,
                              _QWORD* a5, _QWORD* a6, _QWORD* a7, _QWORD* a8,
                              __int64 a9, __int64 a10, __int64 a11);
__int64 resolver_proxy_1a2d40(__int64 a1, unsigned int a2, __int64 a3,
                              _QWORD* a4, _QWORD* a5, _QWORD* a6,
                              unsigned int a7, __int64 a8, __int64 a9);

__int64 resolver_proxy_1a2cd0(__int64 a1, unsigned int a2, __int64 a3, char a4,
                              _QWORD* a5, _QWORD* a6, _QWORD* a7, _QWORD* a8,
                              __int64 a9, __int64 a10, __int64 a11)
{
  return SdkRoutine_1a36c0(a1 + 8, a2, a3, a4 & 1, *a5, a5[1], *a6, a6[1], *a7,
                           a7[1], *a8, a8[1], a9, a10, a11, 6);
}

__int64 resolver_proxy_1a2d40(__int64 a1, unsigned int a2, __int64 a3,
                              _QWORD* a4, _QWORD* a5, _QWORD* a6,
                              unsigned int a7, __int64 a8, __int64 a9)
{
  return SdkRoutine_1a38b0(a1 + 8, a2, a3, *a4, a4[1], *a5, a5[1], a8, *a6,
                           a6[1], a7, a8, a9, 7);
}

#pragma GCC visibility pop
