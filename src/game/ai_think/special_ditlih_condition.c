#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool SpecialDitlihCondition_Unknown2(__int64 a1, int* a2);

bool SpecialDitlihCondition_Unknown2(__int64 a1, int* a2)
{
  int v2;

  v2 = *a2;
  if (*(_BYTE*)(a1 + 9) != 1) {
    return v2 > 1;
  }
  if (v2 < 1) {
    return false;
  }
  return *(_DWORD*)(a1 + 12) > a2[2];
}

#pragma GCC visibility pop
