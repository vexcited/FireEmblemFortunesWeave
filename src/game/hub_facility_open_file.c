#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_de42e0(_QWORD);
__int64 GameRoutine_de45c0(_QWORD);
extern __int64 (*GameData_1fe10b0[])();
extern __int64 (*GameData_1fe10e0[])();
extern __int64 (*GameData_1fe1130[])();
extern __int64 GameData_21c9f38;
extern int GameData_2213f84;
__int64 HubFacilityOpenFile_Destructor(_QWORD* a1);

__int64 HubFacilityOpenFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *a1 = GameData_1fe10b0;
  a1[1] = GameData_1fe10e0;
  v2 = a1 + 1;
  GameRoutine_de45c0(a1 + 1);
  result = GameRoutine_de42e0(v2);
  *a1 = GameData_1fe1130;
  if ((_QWORD*)GameData_21c9f38 == a1) {
    GameData_21c9f38 = 0;
    GameData_2213f84 = 0;
  }
  return result;
}

#pragma GCC visibility pop
