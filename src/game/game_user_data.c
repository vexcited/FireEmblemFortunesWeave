#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f93568[])();
extern __int64 (*game_GameUserData_vtable[])();
extern __int64 GameData_21c96d8;
extern __int64 game_GameModeData_instance_;
extern int GameData_21caab8;
__int64 GameUserData_Destructor(_QWORD* a1);

__int64 GameUserData_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_GameUserData_vtable;
  result = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)game_GameModeData_instance_ +
                                       8LL))(game_GameModeData_instance_);
    game_GameModeData_instance_ = 0;
  }
  *a1 = GameData_1f93568;
  if ((_QWORD*)GameData_21c96d8 == a1) {
    GameData_21c96d8 = 0;
    GameData_21caab8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
