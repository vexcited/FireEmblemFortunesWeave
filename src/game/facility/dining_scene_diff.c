#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7a88a0(_QWORD);
__int64 game_HashString(_QWORD);
extern __int64 GameData_21f4000;
void __attribute__((noreturn)) DiningSceneDiff_1413c50() { __udf(0x8002u); };
__int64 game_facility_DiningSceneDiff_LoadProp_lambda0_Invoke(__int64 result);

__int64 game_facility_DiningSceneDiff_LoadProp_lambda0_Invoke(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];

  v1 = *(__int64**)(GameData_21f4000 + 232);
  v2 = *(__int64**)(GameData_21f4000 + 240);
  if (v1 != v2) {
    v3 = result;
    v4 = result + 9;
    while (1) {
      v6 = *v1++;
      v5 = v6;
      v7 = *(_QWORD*)(v6 + 40);
      v8 = v6 + 25;
      v9 = *(unsigned __int8*)(v3 + 8);
      v10 = (*(_BYTE*)(v6 + 24) & 1) != 0 ? v7 : v8;
      v11 = *(_QWORD*)(v3 + 24);
      v12 = (v9 & 1) == 0;
      v13 = v9 >> 1;
      if (v12) {
        v11 = v4;
      }
      else {
        v13 = *(_QWORD*)(v3 + 16);
      }
      v16[0] = v11;
      v16[1] = v13;
      v14 = game_HashString(v10);
      result = GameRoutine_7a88a0(v16);
      if (v14 == result) {
        break;
      }
      if (v1 == v2) {
        return result;
      }
    }
    v15 = *(_QWORD*)(v5 + 8);
    if (v15 != 0) {
      *(_BYTE*)(v15 + 289) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
