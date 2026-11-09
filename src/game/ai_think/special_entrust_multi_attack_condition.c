#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool SpecialEntrustMultiAttackCondition_Unknown2(__int64 a1, int* a2);

bool SpecialEntrustMultiAttackCondition_Unknown2(__int64 a1, int* a2)
{
  int v2;
  int v3;

  v2 = *a2;
  v3 = *(_DWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 20) == 1) {
    if (v2 < v3) {
      return false;
    }
    v2 = *(_DWORD*)(a1 + 16) - a2[2];
    v3 = *(_DWORD*)(a1 + 12) / 5;
  }
  return v2 >= v3;
}

#pragma GCC visibility pop
