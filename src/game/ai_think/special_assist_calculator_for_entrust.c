#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SpecialAssistCalculatorForEntrust_Destructor(__int64 a1, int a2,
                                                     int a3);

__int64 SpecialAssistCalculatorForEntrust_Destructor(__int64 a1, int a2, int a3)
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

#pragma GCC visibility pop
