#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool DeliveryKindChecker_Destructor(__int64 a1, __int64 a2);
__int64 DeliveryKindChecker_DeletingDestructor(__int64 a1);
bool DeliveryKindChecker_Unknown4(__int64 a1);

bool DeliveryKindChecker_Destructor(__int64 a1, __int64 a2)
{
  int v2;
  int v3;

  v2 = *(_DWORD*)(a1 + 8);
  v3 = *(_DWORD*)(a1 + 12) + *(unsigned __int16*)(a2 + 2);
  *(_DWORD*)(a1 + 12) = v3;
  return v3 >= v2;
}

__int64 DeliveryKindChecker_DeletingDestructor(__int64 a1)
{
  ++*(_DWORD*)(a1 + 12);
  return 0;
}

bool DeliveryKindChecker_Unknown4(__int64 a1)
{
  return *(_DWORD*)(a1 + 12) >= *(_DWORD*)(a1 + 8);
}

#pragma GCC visibility pop
