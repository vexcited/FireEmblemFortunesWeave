#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1bf8ef0[10];
__int64
game_facility_anonymous_MaterialItemShopMenuInfo_MaterialItemShopMenuInfo_closure_Invoke(
    __int64 result, __int64 a2);
__int64

game_facility_anonymous_MaterialItemShopMenuInfo_MaterialItemShopMenuInfo_closure_Invoke(
    __int64 result, __int64 a2)
{
  __int64 v2;

  if ((unsigned int)*(unsigned __int8*)(*(_QWORD*)(**(_QWORD**)a2 + 48LL) +
                                        73LL) -
          13 >
      9) {
    v2 = 0;
  }
  else {
    v2 = GameData_1bf8ef0[(
        unsigned __int8)(*(_BYTE*)(*(_QWORD*)(**(_QWORD**)a2 + 48LL) + 73LL) -
                         13)];
  }
  *(_BYTE*)(*(_QWORD*)(result + 8) + v2) = 1;
  return result;
}

#pragma GCC visibility pop
