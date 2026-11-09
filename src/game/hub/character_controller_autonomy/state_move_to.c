#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ceca80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cfa2a0(_QWORD);
__int64 StateMoveTo_Unknown2_e17b90(__int64 result);
__int64 StateMoveTo_Unknown5(__int64 a1);

__int64 StateMoveTo_Unknown2_e17b90(__int64 result)
{
  *(_DWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 20) = 0;
  return result;
}

__int64 StateMoveTo_Unknown5(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 24LL) +
                  16LL);
  if ((*(_QWORD*)(v1 + 24) & 0x1FFFFFFFFLL) == 0x100000001LL &&
      (*(_BYTE*)(v1 + 848) & 1) == 0) {
    if (*(_QWORD*)(*(_QWORD*)(v1 + 8) + 32LL) != 0) {
      v2 = 5;
    }
    else {
      v2 = 0;
    }
    *(_DWORD*)(v1 + 32) = v2;
    *(_BYTE*)(v1 + 36) = 1;
    if ((*(_BYTE*)(v1 + 112) & 1) == 0 && (*(_BYTE*)(v1 + 113) & 1) != 0) {
      v3 = a1;
      GameRoutine_cfa2a0(v1 + 16);
      a1 = v3;
    }
  }
  return GameRoutine_ceca80(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 24LL), 128, 0);
}

#pragma GCC visibility pop
