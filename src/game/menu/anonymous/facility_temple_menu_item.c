#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_82e5c0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 game_menu_anonymous_FacilityTempleMenuItem_CheckVisible_closure_Invoke(
    __int64 a1, unsigned __int8* a2);

__int64 game_menu_anonymous_FacilityTempleMenuItem_CheckVisible_closure_Invoke(
    __int64 a1, unsigned __int8* a2)
{
  __int64 result;

  result = GameRoutine_82e5c0(*a2);
  if (*(_QWORD*)result != 0 && game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), result);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      **(_BYTE**)(a1 + 8) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
