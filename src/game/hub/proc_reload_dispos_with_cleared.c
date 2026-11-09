#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern char GameData_2222318;
__int64 ProcReloadDisposWithCleared_Destructor(__int64 a1);

__int64 ProcReloadDisposWithCleared_Destructor(__int64 a1)
{
  GameData_2222318 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
