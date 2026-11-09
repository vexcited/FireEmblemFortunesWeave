#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ddcfc0(_QWORD);
__int64 GameRoutine_ddd2a0(_QWORD);
extern __int64 (*GameData_1fe0da0[])();
extern __int64 (*GameData_1fe0dd0[])();
extern __int64 (*GameData_1fe0e20[])();
extern __int64 GameData_21c9f28;
extern int GameData_2213f7c;
__int64 HubSubquestFile_Destructor(_QWORD* a1);

__int64 HubSubquestFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *a1 = GameData_1fe0da0;
  a1[1] = GameData_1fe0dd0;
  v2 = a1 + 1;
  GameRoutine_ddd2a0(a1 + 1);
  result = GameRoutine_ddcfc0(v2);
  *a1 = GameData_1fe0e20;
  if ((_QWORD*)GameData_21c9f28 == a1) {
    GameData_21c9f28 = 0;
    GameData_2213f7c = 0;
  }
  return result;
}

#pragma GCC visibility pop
