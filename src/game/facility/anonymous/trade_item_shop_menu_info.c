#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1bf88d0[17];
extern char GameData_1bf8880[2];
__int64
game_facility_anonymous_TradeItemShopMenuInfo_TradeItemShopMenuInfo_closure_Invoke(
    __int64 result, __int64 a2);
__int64

game_facility_anonymous_TradeItemShopMenuInfo_TradeItemShopMenuInfo_closure_Invoke(
    __int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;

  v2 = *(_QWORD*)(**(_QWORD**)a2 + 48LL);
  v3 = *(unsigned __int8*)(v2 + 73);
  v4 = *(unsigned __int8*)(v2 + 72);
  if ((((0x10000000000LL << v4) | (1LL << v3)) & 0xFFBFFFFFFFA39FFFLL) != 0) {
    if ((unsigned int)v4 >= 0x11) {
      v5 = 7;
    }
    else {
      v5 = GameData_1bf88d0[v4];
    }
  }
  else {
    v6 = v3 - 13;
    if (v6 >= 0xA) {
      v5 = 8;
    }
    else {
      v5 = *(_QWORD*)&GameData_1bf8880[8 * (unsigned __int8)v6];
    }
  }
  *(_BYTE*)(*(_QWORD*)(result + 8) + v5) = 1;
  return result;
}

#pragma GCC visibility pop
