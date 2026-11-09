#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f499b0(_QWORD);
__int64 HubDisposFileReader_Destructor(_QWORD);
extern __int64 (*game_hub_HubReload_vtable[])();
__int64 HubReload_Destructor(_QWORD* a1);

__int64 HubReload_Destructor(_QWORD* a1)
{
  *a1 = game_hub_HubReload_vtable;
  GameRoutine_f499b0(a1[27]);
  return HubDisposFileReader_Destructor(a1 + 1);
}

#pragma GCC visibility pop
