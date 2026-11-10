#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_148f3d0(__int64, unsigned __int16*);
__int64 game_JobIntroGroup_IsCondition_lambda0_Invoke(__int64 a1, __int64* a2);

__int64 game_JobIntroGroup_IsCondition_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 result;

  result = GameRoutine_148f3d0(*a2, (unsigned __int16*)(a1 + 16));
  if ((result & 1) != 0) {
    **(_BYTE**)(a1 + 8) = 1;
  }
  return result;
}

#pragma GCC visibility pop
