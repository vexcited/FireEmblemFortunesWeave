#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10c5990(__int64, char);
__int64 GameRoutine_d523c0(_QWORD);
__int64 GameRoutine_e18130(_QWORD);
float GameRoutine_10c6000(__int64);
void StateStationary_Unknown3(__int64 a1);
__int64 StateStationary_Unknown4(__int64 a1);
__int64 StateStationary_Unknown5(__int64 result);

void StateStationary_Unknown3(__int64 a1)
{
  float v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = GameRoutine_10c6000(*(_QWORD*)(a1 + 8));
  v3 = *(_QWORD*)(a1 + 8);
  *(float*)(a1 + 20) = v2;
  *(_BYTE*)(v3 + 36) = 1;
  v4 = *(_QWORD*)(v3 + 8);
  if (*(_DWORD*)(v4 + 748) != 2) {
    v5 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 24LL);
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)(v5 + 37) = 0;
    *(_BYTE*)(v5 + 96) = 1;
    *(_BYTE*)(v5 + 37) = 1;
    v6 = *(_QWORD*)(v5 + 16);
    *(_BYTE*)(v5 + 25) = 0;
    *(_BYTE*)(v5 + 48) = 0;
    *(_BYTE*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_DWORD*)(v5 + 32) = 1086918619;
    GameRoutine_d523c0(*(_QWORD*)(v6 + 488));
  }
}

__int64 StateStationary_Unknown4(__int64 a1)
{
  __int64 result;
  __int64 v3;
  float v4;
  float v5;

  result = GameRoutine_10c5990(*(_QWORD*)(a1 + 8), 0);
  if ((int)result <= 1) {
    if ((_DWORD)result != 0) {
      *(_DWORD*)(a1 + 16) = 0;
      return result;
    }
  LABEL_5:
    v3 = *(_QWORD*)(a1 + 8);
    v4 = *(float*)(a1 + 20);
    v5 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 24LL) + 8LL) +
                   228LL) +
         *(float*)(a1 + 16);
    *(float*)(a1 + 16) = v5;
    if (v5 <= v4) {
      return result;
    }
    goto LABEL_8;
  }
  if ((_DWORD)result == 2) {
    goto LABEL_5;
  }
  v3 = *(_QWORD*)(a1 + 8);

LABEL_8:
  if (*(_BYTE*)(v3 + 76) != 1 || *(_DWORD*)(v3 + 72) != 7) {
    *(_DWORD*)(v3 + 80) = 7;
    *(_BYTE*)(v3 + 84) = 1;
  }
  if ((*(_BYTE*)(v3 + 160) & 1) == 0 && (*(_BYTE*)(v3 + 161) & 1) != 0) {
    return GameRoutine_e18130(v3 + 64);
  }
  return result;
}

__int64 StateStationary_Unknown5(__int64 result)
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
