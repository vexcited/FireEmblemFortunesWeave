#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1265f00(_QWORD, _QWORD, _QWORD);
__int64 DeliveryItemChecker_Destructor(__int64 a1, __int64 a2);
__int64 DeliveryItemChecker_DeletingDestructor(__int64 a1, __int64 a2, int a3);

__int64 DeliveryItemChecker_Destructor(__int64 a1, __int64 a2)
{
  GameRoutine_1265f00(a1, a2 + 4, *(unsigned __int16*)(a2 + 2));
  return 0;
}

__int64 DeliveryItemChecker_DeletingDestructor(__int64 a1, __int64 a2, int a3)
{
  GameRoutine_1265f00(a1, a2 + 8LL * a3 + 828, 1);
  return 0;
}

#pragma GCC visibility pop
