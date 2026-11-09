#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_143f2e0(_QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1aa8505;
__int64 TrainingMenuItem_16b3860();

__int64 TrainingMenuItem_16b3860()
{
  _QWORD v1[2];

  v1[1] = &GameData_1aa8505;
  v1[0] = game_HashString(&GameData_1aa8505);
  return GameRoutine_143f2e0(v1);
}

#pragma GCC visibility pop
