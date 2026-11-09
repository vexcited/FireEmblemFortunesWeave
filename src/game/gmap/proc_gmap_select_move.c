#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d728[2];
__int64 ProcGmapSelectMove_Unknown9();

__int64 ProcGmapSelectMove_Unknown9()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  GameRoutine_155e830(*(_QWORD*)(v0 + 16), 1);
  result = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
  return result;
}

#pragma GCC visibility pop
