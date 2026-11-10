#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212d750;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
bool game_gmap_anonymous_DestroyHellGateItem_ACall_closure_Invoke_1323be0(
    __int64 a1, __int64 a2);
__int64 game_gmap_anonymous_DestroyHellGateItem_ACall_closure_Invoke_1323ce0();

bool game_gmap_anonymous_DestroyHellGateItem_ACall_closure_Invoke_1323be0(
    __int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
  return v2 != 0 && *(_BYTE*)(v2 + 32) == 3 &&
         (*(_WORD*)(*(_QWORD*)a2 + 544LL) & 8) != 0;
}

__int64 game_gmap_anonymous_DestroyHellGateItem_ACall_closure_Invoke_1323ce0()
{
  __int64 v1;
  int v2;

  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 3;
    return 4;
  }
  else {
    v1 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 3;
      v2 = 5;
    }
    else {
      v1 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 3;
      v2 = 12;
    }
    *(_DWORD*)(v1 + 152) = v2;
    return 4;
  }
}

#pragma GCC visibility pop
