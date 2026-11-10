#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212d750;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
__int64 game_gmap_anonymous_CorpsDeleteItem_ACall_closure_Invoke();

__int64 game_gmap_anonymous_CorpsDeleteItem_ACall_closure_Invoke()
{
  __int64 v1;
  int v2;

  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 11;
    return 4;
  }
  else {
    v1 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 11;
      v2 = 5;
    }
    else {
      v1 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 11;
      v2 = 12;
    }
    *(_DWORD*)(v1 + 152) = v2;
    return 4;
  }
}

#pragma GCC visibility pop
