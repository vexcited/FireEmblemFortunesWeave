#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_124a180(_QWORD);
__int64 GameRoutine_124a460(_QWORD);
extern __int64 (*GameData_201d0e0[])();
extern __int64 (*GameData_201d110[])();
extern __int64 (*GameData_201d160[])();
extern __int64 GameData_21ca050;
extern int GameData_2240184;
__int64 SubquestUnlockJobsFile_Destructor(_QWORD* a1);

__int64 SubquestUnlockJobsFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *a1 = GameData_201d0e0;
  a1[1] = GameData_201d110;
  v2 = a1 + 1;
  GameRoutine_124a460(a1 + 1);
  result = GameRoutine_124a180(v2);
  *a1 = GameData_201d160;
  if ((_QWORD*)GameData_21ca050 == a1) {
    GameData_21ca050 = 0;
    GameData_2240184 = 0;
  }
  return result;
}

#pragma GCC visibility pop
