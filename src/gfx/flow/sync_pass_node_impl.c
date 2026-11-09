#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b485e0();
__int64 GameRoutine_b48610();
extern _UNKNOWN GameData_2203110;
extern _UNKNOWN GameData_2203140;
extern _UNKNOWN* GameData_1f50948;
extern __int64 GameData_2203130;
extern __int64 GameData_2203160;
__int64 SyncPassNode_b48e10();

__int64 SyncPassNode_b48e10()
{
  GameData_2203130 = 0;
  GameRoutine_2b0(GameRoutine_b485e0, &GameData_2203110, &GameData_1f50948);
  GameData_2203160 = 0;
  return GameRoutine_2b0(GameRoutine_b48610, &GameData_2203140,
                         &GameData_1f50948);
}

#pragma GCC visibility pop
