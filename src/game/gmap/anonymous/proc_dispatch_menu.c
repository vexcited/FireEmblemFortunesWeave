#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
extern _UNKNOWN GameData_1a925e2;
extern _UNKNOWN* GameData_20a0e80;
extern __int64 game_GameModeData_instance_;
void* ProcDispatchMenu_Unknown67(__int64 a1);

void* ProcDispatchMenu_Unknown67(__int64 a1)
{
  __int64 v1;
  unsigned __int8 v3;

  v1 = *(_QWORD*)(a1 + 1064);
  if ((*(_BYTE*)(v1 + 178) & 4) != 0 && game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return &GameData_1a925e2;
  }
  v3 = GameRoutine_13261c0(v1) - 5;
  if (v3 > 4u) {
    return nullptr;
  }
  else {
    return *(&GameData_20a0e80 + v3);
  }
}

#pragma GCC visibility pop
