#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11fbb20(_QWORD);
__int64 GameRoutine_11fbe50(_QWORD, _QWORD);
__int64 GameRoutine_11fc090(_QWORD, _QWORD);
__int64 GameRoutine_11fc220(_QWORD);
__int64 GameRoutine_128df90(_QWORD, _QWORD);
__int64 GameRoutine_128e230(_QWORD, _QWORD);
__int64 AIBattleSimulator_Destructor(__int64 a1, __int64 a2);

__int64 AIBattleSimulator_Destructor(__int64 a1, __int64 a2)
{
  GameRoutine_128df90(a1, a2);
  GameRoutine_128e230(a1, a2);
  GameRoutine_11fbb20(a1);
  GameRoutine_11fbe50(a1, 0);
  GameRoutine_11fbe50(a1, 1);
  GameRoutine_11fc090(a1, 0);
  GameRoutine_11fc090(a1, 1);
  return GameRoutine_11fc220(a1);
}

#pragma GCC visibility pop
