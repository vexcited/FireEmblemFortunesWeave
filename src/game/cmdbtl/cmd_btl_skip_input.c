#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1006910(void);
extern __int64 (*GameData_20008b8[])();
extern __int64 (*game_cmdbtl_CmdBtlSkipInput_vtable[])();
extern __int64 GameData_22190c0;
extern int GameData_22330fc;
__int64 CmdBtlSkipInput_Destructor(_QWORD* a1);

__int64 CmdBtlSkipInput_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_cmdbtl_CmdBtlSkipInput_vtable;
  result = GameRoutine_1006910();
  *a1 = GameData_20008b8;
  if ((_QWORD*)GameData_22190c0 == a1) {
    GameData_22190c0 = 0;
    GameData_22330fc = 0;
  }
  return result;
}

#pragma GCC visibility pop
