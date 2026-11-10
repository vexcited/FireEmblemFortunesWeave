#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool EquipMenuItem_SkillFix_IsEnable(__int64 a1);

bool EquipMenuItem_SkillFix_IsEnable(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 96) + 356LL) & 1) == 0;
}

#pragma GCC visibility pop
