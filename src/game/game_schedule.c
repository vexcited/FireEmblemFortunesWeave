#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fa22f0[])();
extern __int64 (*GameData_1fa2608[])();
extern __int64 (*game_GameSchedule_vtable[])();
extern __int64 GameData_21c9648;
extern __int64 game_gmap_GmapClock_instance_;
extern int GameData_21ee270;
__int64 GameSchedule_Destructor(_QWORD* a1);

__int64 GameSchedule_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_GameSchedule_vtable;
  a1[1] = GameData_1fa22f0;
  result = game_gmap_GmapClock_instance_;
  if (game_gmap_GmapClock_instance_ != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)game_gmap_GmapClock_instance_ +
                                       8LL))(game_gmap_GmapClock_instance_);
    game_gmap_GmapClock_instance_ = 0;
  }
  *a1 = GameData_1fa2608;
  if ((_QWORD*)GameData_21c9648 == a1) {
    GameData_21c9648 = 0;
    GameData_21ee270 = 0;
  }
  return result;
}

#pragma GCC visibility pop
