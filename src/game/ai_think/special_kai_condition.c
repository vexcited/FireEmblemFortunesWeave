#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool SpecialEntrustSingleAttackCondition_Unknown2(__int64 a1, __int64 a2);

bool SpecialKaiCondition_Unknown2(__int64 a1, _DWORD* a2) { return *a2 > 0; }

bool SpecialBeltranCondition_Unknown7(__int64 a1, _DWORD* a2)
{
  return *a2 > 0;
}

bool GameHr_12a2cd0(__int64 a1, _DWORD* a2) { return *a2 > 1; }

bool SpecialAnhatolyahCondition_Unknown2(__int64 a1, _DWORD* a2)
{
  return *a2 > 0;
}

bool SpecialBurnupMultiAttackCondition_Unknown3(__int64 a1, _DWORD* a2)
{
  return *a2 > 1;
}

bool SpecialEntrustSingleAttackCondition_Unknown2(__int64 a1, __int64 a2)
{
  return *(float*)(a2 + 4) >= *(float*)(a1 + 8);
}

#pragma GCC visibility pop
