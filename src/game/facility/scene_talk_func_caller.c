#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1498790();
__int64 GameRoutine_1498870(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1ab56b0;
__int64 SceneTalkFuncCaller_Unknown4(__int64 a1);

__int64 SceneTalkFuncCaller_Unknown4(__int64 a1)
{
  return GameRoutine_1498870(a1 + 8, &GameData_1ab56b0, GameRoutine_1498790);
}

#pragma GCC visibility pop
