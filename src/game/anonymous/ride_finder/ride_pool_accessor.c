#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212cf88[4];
__int64 RidePoolAccessor_Unknown3(__int64 a1, int a2);

__int64 RidePoolAccessor_Unknown3(__int64 a1, int a2)
{
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 120LL) +
         ((__int64)a2 << 6);
}

#pragma GCC visibility pop
