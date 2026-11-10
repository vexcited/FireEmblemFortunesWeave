#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1c13200[17];
__int64
game_facility_ItemShopMenuInfo_ItemShopMenuInfo_lambda0_Invoke(__int64 result,
                                                               __int64 a2);
__int64

game_facility_ItemShopMenuInfo_ItemShopMenuInfo_lambda0_Invoke(__int64 result,
                                                               __int64 a2)
{
  unsigned __int64 v2;
  __int64 v3;

  v2 = *(unsigned __int8*)(*(_QWORD*)(**(_QWORD**)a2 + 48LL) + 72LL);
  if (v2 > 0x10) {
    v3 = 7;
  }
  else {
    v3 = GameData_1c13200[v2];
  }
  *(_BYTE*)(*(_QWORD*)(result + 8) + v3) = 1;
  return result;
}

#pragma GCC visibility pop
