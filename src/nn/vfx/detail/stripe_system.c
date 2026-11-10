#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_2136458;
__int64 StripeSystem_Destructor(__int64 a1);

__int64 StripeSystem_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)a1 = GameData_2136458 + 16;
  result = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 24LL))(
      *(_QWORD*)(a1 + 16), v2);
  *(_QWORD*)(a1 + 48) = 0;
  return result;
}

#pragma GCC visibility pop
