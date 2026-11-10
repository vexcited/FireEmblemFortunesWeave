#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_10450d8)(__int64, __int64, __int64);
extern __int64 (*SdkData_10450e0)(__int64, __int64);
extern __int64 (*SdkData_10450e8)(__int64, __int64, __int64);
extern __int64 SdkData_10450f0;
__int64 nvn_bootstrap_6af8f0(__int64 a1);
__int64 nvn_bootstrap_6af910(__int64 a1);
__int64 nvn_bootstrap_6af930(__int64 a1, __int64 a2);

__int64 nvn_bootstrap_6af8f0(__int64 a1)
{
  return SdkData_10450d8(a1, 16, SdkData_10450f0);
}

__int64 nvn_bootstrap_6af910(__int64 a1)
{
  return SdkData_10450e0(a1, SdkData_10450f0);
}

__int64 nvn_bootstrap_6af930(__int64 a1, __int64 a2)
{
  return SdkData_10450e8(a1, a2, SdkData_10450f0);
}

#pragma GCC visibility pop
