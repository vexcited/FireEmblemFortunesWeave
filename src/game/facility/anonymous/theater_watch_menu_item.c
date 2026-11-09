#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ed000(void);
__int64 GameRoutine_16ed430(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_949ea0(_QWORD);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 TheaterWatchMenuItem_Unknown55(__int64 a1);

__int64 TheaterWatchMenuItem_Unknown55(__int64 a1)
{
  __int64 v2;
  _BOOL8 v3;

  GameRoutine_16ed000();
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v2 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v3 = GameRoutine_949ea0(v2) != 0;
  return GameRoutine_16ed430(a1, v3, 1);
}

#pragma GCC visibility pop
