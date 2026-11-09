#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fa8cf0[])();
extern __int64 (*game_GameRestartData_vtable[])();
extern __int64 GameData_21c96a0;
extern __int64 game_GameRestartData_unknown_;
__int64 GameRestartData_Destructor(_QWORD* a1);

__int64 GameRestartData_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_GameRestartData_vtable;
  result = game_GameRestartData_unknown_;
  if (game_GameRestartData_unknown_ != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)game_GameRestartData_unknown_ +
                                       8LL))(game_GameRestartData_unknown_);
    game_GameRestartData_unknown_ = 0;
  }
  *a1 = GameData_1fa8cf0;
  if ((_QWORD*)GameData_21c96a0 == a1) {
    GameData_21c96a0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
