#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5849d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 nfp_proxy_5840a0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                         unsigned int a5);

__int64 nfp_proxy_5840a0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                         unsigned int a5)
{
  return SdkRoutine_5849d0(a1 + 8, a2, a3, *a4, 32LL * a4[1], a5, 300);
}

#pragma GCC visibility pop
