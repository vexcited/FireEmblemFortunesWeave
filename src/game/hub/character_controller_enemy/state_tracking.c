#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d523c0(_QWORD);
float GameRoutine_10c6000(__int64);
void StateTracking_Unknown3(__int64 a1);
__int64 StateTracking_Unknown5(__int64 result);

void StateTracking_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 36) = 1;
  v3 = *(_QWORD*)(v1 + 8);
  if (*(_DWORD*)(v3 + 748) != 2) {
    v4 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 24LL);
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)(v4 + 37) = 0;
    *(_BYTE*)(v4 + 96) = 1;
    *(_BYTE*)(v4 + 37) = 1;
    v5 = *(_QWORD*)(v4 + 16);
    *(_BYTE*)(v4 + 25) = 0;
    *(_BYTE*)(v4 + 48) = 0;
    *(_BYTE*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_DWORD*)(v4 + 32) = 1086918619;
    GameRoutine_d523c0(*(_QWORD*)(v5 + 488));
  }
  *(float*)(a1 + 20) = GameRoutine_10c6000(*(_QWORD*)(a1 + 8));
}

__int64 StateTracking_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 8);
  *(_BYTE*)(v1 + 36) = 0;
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 24LL);
  if (*(_BYTE*)(v2 + 96) == 1) {
    *(_BYTE*)(v2 + 96) = 0;
  }
  *(_BYTE*)(v2 + 25) = 0;
  return result;
}

#pragma GCC visibility pop
