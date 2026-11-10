#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3d00(_QWORD, _QWORD);
__int64 game_UnitSkill_GetEquipSortKey(_QWORD, _QWORD);
__int64 game_EquipSkills_Add_closure_Invoke(__int64 a1, __int64 a2);

__int64 game_EquipSkills_Add_closure_Invoke(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 8);
  result = game_UnitSkill_GetEquipSortKey(a2, *(_QWORD*)(a1 + 16));
  if ((int)result >= 1) {
    return GameRoutine_6e3d00(v3, a2);
  }
  return result;
}

#pragma GCC visibility pop
