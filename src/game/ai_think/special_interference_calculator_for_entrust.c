#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SpecialInterferenceCalculatorForEntrust_Destructor(__int64 a1, int a2,
                                                           int a3);
bool SpecialInterferenceCalculatorForEntrust_DeletingDestructor(__int64 a1,
                                                                __int64 a2);
__int64 SpecialInterferenceCalculatorForEntrust_Destructor(__int64 a1, int a2,
                                                           int a3)
{
  __int64 v3;

  v3 = *(_QWORD*)(a1 + 64);
  if (*(_BYTE*)(v3 + 128) == 1) {
    return (*(_DWORD*)(v3 + 4LL * ((a2 + 32 * a3) >> 5)) >> a2) & 1;
  }
  else {
    return 1;
  }
}

bool SpecialInterferenceCalculatorForEntrust_DeletingDestructor(__int64 a1,
                                                                __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v5;
  __int64 v7;

  v2 = *(char*)(a2 + 584) + 32 * *(char*)(a2 + 585);
  if (v2 >= 0x400) {
    v2 = 0;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL * v2) & 0xFFFFFFFELL;
  if (v3 != 0) {
    ++*(_DWORD*)(a1 + 36);
    v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
    if (v5 != 0) {
      v7 = a2;
      *(_DWORD*)(a1 + 40) +=
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v7);
    }
  }
  return v3 != 0;
}

#pragma GCC visibility pop
