#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BladeResonance_14b8270(_QWORD);
extern __int64 GameData_212d750;
extern __int64 GameData_21f1620;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
__int64 game_gmap_BladeResonanceItem_ACall_closure_Invoke();

__int64 game_gmap_BladeResonanceItem_ACall_closure_Invoke()
{
  __int64 v0;
  int v1;

  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 19;
  }
  else {
    v0 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 19;
      v1 = 5;
    }
    else {
      v0 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 19;
      v1 = 12;
    }
    *(_DWORD*)(v0 + 152) = v1;
  }
  BladeResonance_14b8270(*(_QWORD*)(GameData_21f1620 + 8));
  return 4;
}

#pragma GCC visibility pop
