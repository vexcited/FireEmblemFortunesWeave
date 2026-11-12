#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1567590(__int64 result, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
extern __int64* GameData_21319f0[9];
extern __int64 GameData_2131c40[50];
__int64 CmdBtlSystemTroopSequence_Unknown48(unsigned int* a1);

__int64 CmdBtlSystemTroopSequence_Unknown48(unsigned int* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;

  if (((*(__int64 (**)(unsigned int*))(*(_QWORD*)a1 + 368LL))(a1) & 1) != 0) {
    v2 = *(_QWORD*)&a1[2 * a1[88] + 76];
    v6 = v2 == 0 ||
         (v3 = __dynamic_cast(v2, GameData_21319f0[0], GameData_2131c40[0],
                              0)) == 0 ||
         (v4 = *(_QWORD*)(v3 + 336)) == 0 ||
         (v5 = __dynamic_cast(v4, GameData_212e008[0], GameData_212e0c8[0],
                              0)) == 0 ||
         *(_QWORD*)(v5 + 88) == 0;
    GameRoutine_1567590((__int64)"OpenStatus", v6);
  }
  v7 = *(_QWORD*)&a1[2 * a1[88] + 76];
  v11 =
      v7 == 0 ||
      (v8 = __dynamic_cast(v7, GameData_21319f0[0], GameData_2131c40[0], 0)) ==
          0 ||
      (v9 = *(_QWORD*)(v8 + 336)) == 0 ||
      (v10 = __dynamic_cast(v9, GameData_212e008[0], GameData_212e0c8[0], 0)) ==
          0 ||
      *(_QWORD*)(v10 + 88) == 0;
  return GameRoutine_1567590((__int64)"SortieUnit", v11);
}

#pragma GCC visibility pop
