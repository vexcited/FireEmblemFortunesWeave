#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1079e10(__int64);
void GameRoutine_10a6ac0(__int64);
void ActionRazeBlaze_Unknown6(__int64 a1);

void ActionRazeBlaze_Unknown6(__int64 a1)
{
  int v2;
  int v4;

  if ((GameRoutine_1079e10(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL)) & 1) != 0) {
    v2 = *(_DWORD*)(a1 + 16);
    if (v2 != 1 && v2 != 3) {
      if (v2 == 2) {
        v4 = 3;
      }
      else {
        v4 = 1;
      }
      *(_DWORD*)(a1 + 16) = v4;
    }
    GameRoutine_10a6ac0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL) + 128LL));
  }
}

#pragma GCC visibility pop
