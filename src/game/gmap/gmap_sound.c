#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_133f1d0(_QWORD, _QWORD);
__int64 game_gmap_GmapSound_Impl_HadesAtmos_getBgmVolumeTarget_closure_Invoke(
    __int64 a1, _QWORD* a2);

__int64 game_gmap_GmapSound_Impl_HadesAtmos_getBgmVolumeTarget_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  if ((*(_WORD*)(*a2 + 544LL) & 8) != 0) {
    return ((unsigned int)GameRoutine_133f1d0(*a2, a2) ^ 1) & 1;
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
