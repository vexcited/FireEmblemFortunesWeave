#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SpecialInterferenceCalculatorForEnemy_DeletingDestructor(__int64 a1,
                                                                 __int64 a2);
__int64 SpecialInterferenceCalculatorForEnemy_DeletingDestructor(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v3;
  __int64 v5;

  ++*(_DWORD*)(a1 + 36);
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
  if (v3 != 0) {
    v5 = a2;
    *(_DWORD*)(a1 + 40) +=
        (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v5);
  }
  return 1;
}

#pragma GCC visibility pop
