#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f59d40(_QWORD);
extern __int64 (*game_map_MapDrawOutlineBmap_vtable[])();
__int64 MapDrawOutlineBmap_Destructor(_QWORD* a1);

__int64 MapDrawOutlineBmap_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapDrawOutlineBmap_vtable;
  return GameRoutine_f59d40(a1[3]);
}

#pragma GCC visibility pop
