#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool SpecialEntrustAssistCondition_Unknown4(__int64 a1, _DWORD* a2);

bool SpecialEntrustSingleAttackCondition_Unknown8(__int64 a1, float* a2)
{
  return *a2 >= *(float*)(a1 + 8);
}

bool SpecialEntrustAssistCondition_Unknown4(__int64 a1, _DWORD* a2)
{
  return *a2 >= *(_DWORD*)(a1 + 8);
}

#pragma GCC visibility pop
