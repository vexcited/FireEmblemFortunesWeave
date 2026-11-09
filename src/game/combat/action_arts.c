#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1079e10(__int64);
__int64 GameRoutine_1098db0(_QWORD);
extern __int64 (*game_combat_ActionArts_vtable[])();
__int64 ActionArts_Unknown6(__int64 a1);
__int64 ActionArts_DeletingDestructor(_QWORD* a1);

__int64 ActionArts_Unknown6(__int64 a1)
{
  __int64 result;
  int v3;
  int v5;

  result = GameRoutine_1079e10(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL));
  if ((result & 1) != 0) {
    v3 = *(_DWORD*)(a1 + 16);
    if (v3 != 1 && v3 != 3) {
      if (v3 == 2) {
        v5 = 3;
      }
      else {
        v5 = 1;
      }
      *(_DWORD*)(a1 + 16) = v5;
    }
  }
  return result;
}

__int64 ActionArts_DeletingDestructor(_QWORD* a1)
{
  *a1 = game_combat_ActionArts_vtable;
  return GameRoutine_1098db0(a1 + 4);
}

#pragma GCC visibility pop
