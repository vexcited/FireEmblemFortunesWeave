#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212c738[2];

extern __int64 GameData_21c9bd8;

extern __int64 GameData_21c9be0;

extern __int64 GameData_2265ec8;

__int64 GameRoutine_8b4a80(void);

__int64 GameRoutine_8b4c00(_QWORD);

__int64 GameRoutine_a4d420(_QWORD);

__int64 GameRoutine_a4d510(_QWORD, _QWORD);

__int64 GameRoutine_a4d720(_QWORD, _QWORD);

__int64 GameHr_1a09980()
{
  if ((GameRoutine_a4d420(*GameData_212c738[0] + 14600) & 1) != 0) {
    return 1;
  }
  else {
    return GameRoutine_8b4a80();
  }
}

__int64 GameHr_1a099c0()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  unsigned __int64 v4;

  v0 = GameData_2265ec8;
  GameRoutine_a4d510(GameData_2265ec8 + 15040, GameData_2265ec8);
  v1 = GameRoutine_a4d720(v0 + 14896, v0);
  result = GameRoutine_8b4c00(v1);
  v3 = GameData_21c9bd8;
  if (GameData_21c9be0 != GameData_21c9bd8) {
    v4 = 0;
    do {
      result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 8 * v4) + 32LL))(
          *(_QWORD*)(v3 + 8 * v4));
      v3 = GameData_21c9bd8;
      ++v4;
    } while (v4 < (GameData_21c9be0 - GameData_21c9bd8) >> 3);
  }
  return result;
}

#pragma GCC visibility pop
