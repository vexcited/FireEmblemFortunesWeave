#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_efdf40(_QWORD, _QWORD);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212cc78[56];
bool WatchingMenuItem_Unknown58();
extern __int64 GameData_225c918;
__int64 game_facility_anonymous_WatchingMenuItem_ACall_closure_Invoke();

bool WatchingMenuItem_Unknown58()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v0 = GameData_212cc78[0];
  v1 = *GameData_212cc78[0];
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v2 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v4 = v1 + 64;
  v3 = *(_QWORD*)(v1 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(v4 + 8) - v3) >> 3) < 1) {
    return false;
  }
  v5 = 0;
  while ((GameRoutine_efdf40(*(_QWORD*)(v3 + 8 * v5), v2) & 1) == 0) {
    ++v5;
    v3 = *(_QWORD*)(*v0 + 64);
    if (v5 >= (int)((unsigned __int64)(*(_QWORD*)(*v0 + 72) - v3) >> 3)) {
      return false;
    }
  }
  return *(_QWORD*)(*(_QWORD*)(*v0 + 64) + 8 * v5) != 0;
}

__int64 game_facility_anonymous_WatchingMenuItem_ACall_closure_Invoke()
{
  if (GameData_225c918 != 0) {
    *(_DWORD*)(GameData_225c918 + 152) = 3;
  }
  return 4;
}

#pragma GCC visibility pop
