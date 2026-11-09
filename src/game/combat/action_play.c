#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1079e10(__int64);
float GameRoutine_1079580(__int64, int, float, float, float);
float ActionPlay_Unknown5(__int64 a1);
__int64 ActionPlay_Unknown6(__int64 a1);

float ActionPlay_Unknown5(__int64 a1)
{
  return GameRoutine_1079580(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL),
                             *(_DWORD*)(a1 + 24), -1.0, -1.0, 1.0);
}

__int64 ActionPlay_Unknown6(__int64 a1)
{
  __int64 result;
  int v3;
  int v5;

  result = GameRoutine_1079e10(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL));
  if ((result & 1) != 0) {
    v3 = *(_DWORD*)(a1 + 16);
    if (v3 != 1 && v3 != 3) {
      if (v3 == 2) {
        v5 = 3;
      }
      else {
        v5 = 1;
      }
      *(_DWORD*)(a1 + 16) = v5;
    }
  }
  return result;
}

#pragma GCC visibility pop
