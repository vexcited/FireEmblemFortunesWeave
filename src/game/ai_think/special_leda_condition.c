#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool SpecialLedaCondition_Unknown4(__int64 a1, __int64 a2);

bool SpecialLedaCondition_Unknown4(__int64 a1, __int64 a2)
{
  int v2;

  v2 = *(_DWORD*)a2;
  if (*(_BYTE*)(a1 + 8) != 1) {
    return v2 > 1;
  }
  if (v2 < 1) {
    return false;
  }
  return *(_BYTE*)(a2 + 4) & 1;
}

#pragma GCC visibility pop
