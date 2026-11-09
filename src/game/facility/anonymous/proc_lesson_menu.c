#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 game_kVariableHubFacilityForced;
__int64 ProcLessonMenu_Unknown101(__int64 a1);

__int64 ProcLessonMenu_Unknown101(__int64 a1)
{
  __int64 v2;
  __int64 result;

  if (game_GameModeData_instance_ != 0) {
    v2 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        &game_kVariableHubFacilityForced);
    if (v2 != 0 && *(_DWORD*)(v2 + 32) != 0) {
      return 1;
    }
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
