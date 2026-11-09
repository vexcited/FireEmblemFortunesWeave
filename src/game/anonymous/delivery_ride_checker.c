#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool DeliveryRideChecker_Unknown2(__int64 a1);
__int64 DeliveryRideChecker_Unknown3(__int64 a1);

bool DeliveryRideChecker_Unknown2(__int64 a1)
{
  int v1;
  int v2;

  v1 = *(_DWORD*)(a1 + 8);
  v2 = *(_DWORD*)(a1 + 12) + 1;
  *(_DWORD*)(a1 + 12) = v2;
  return v2 >= v1;
}

__int64 DeliveryRideChecker_Unknown3(__int64 a1)
{
  ++*(_DWORD*)(a1 + 12);
  return 0;
}

#pragma GCC visibility pop
