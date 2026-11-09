#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14992c0();
__int64 GameRoutine_14993d0();
__int64 GameRoutine_1499450();
__int64 GameRoutine_14994e0(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_2131238;
extern _UNKNOWN* GameData_2131240;
extern _UNKNOWN* GameData_2131248;
__int64 TheaterActFuncCaller_Unknown4(__int64 a1);

__int64 TheaterActFuncCaller_Unknown4(__int64 a1)
{
  GameRoutine_14994e0(a1 + 8, GameData_2131238, GameRoutine_14992c0);
  GameRoutine_14994e0(a1 + 8, GameData_2131240, GameRoutine_14993d0);
  return GameRoutine_14994e0(a1 + 8, GameData_2131248, GameRoutine_1499450);
}

#pragma GCC visibility pop
