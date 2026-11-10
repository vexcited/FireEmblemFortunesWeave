#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64
game_combat_CombatSound_SetEnableSignalSound_lambda0_Invoke(__int64 result,
                                                            __int64 a2);
__int64

game_combat_CombatSound_SetEnableSignalSound_lambda0_Invoke(__int64 result,
                                                            __int64 a2)
{
  __int64 v2;

  if (**(_QWORD**)(result + 8) != *(_QWORD*)a2) {
    v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 120LL);
    if (v2 != 0) {
      *(_BYTE*)(v2 + 416) = **(_BYTE**)(result + 16);
    }
  }
  return result;
}

#pragma GCC visibility pop
