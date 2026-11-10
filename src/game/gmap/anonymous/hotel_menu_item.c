#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212d750;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
extern char GameData_2260e78;
void game_gmap_anonymous_HotelMenuItem_ACall_closure_Invoke();

void game_gmap_anonymous_HotelMenuItem_ACall_closure_Invoke()
{
  __int64 v0;
  __int64 v1;

  GameData_2260e78 = 1;
  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 4;
  }
  else {
    v0 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 4;
      *(_DWORD*)(v0 + 152) = 5;
    }
    else {
      v1 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(v1 + 276) = 4;
      *(_DWORD*)(v1 + 152) = 12;
    }
  }
}

#pragma GCC visibility pop
