#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SpecialAssistCalculatorForEnemy_DeletingDestructor(__int64 result,
                                                           __int64 a2);
__int64 SpecialAssistCalculatorForEnemy_DeletingDestructor(__int64 result,
                                                           __int64 a2)
{
  __int64 v2;

  ++*(_DWORD*)(result + 28);
  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 48LL);
  if (v2 != 0 && v2 == *(_QWORD*)(a2 + 392)) {
    *(_BYTE*)(result + 32) = 1;
  }
  return result;
}

#pragma GCC visibility pop
