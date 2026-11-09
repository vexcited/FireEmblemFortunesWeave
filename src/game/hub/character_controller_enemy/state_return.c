#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cfa2a0(_QWORD);
__int64 StateReturn_Unknown5(__int64 result);

__int64 StateReturn_Unknown5(__int64 result)
{
  __int64 v1;
  int v2;

  if ((*(_BYTE*)(result + 16) & 1) == 0) {
    v1 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) + 24LL) +
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
        return GameRoutine_cfa2a0(v1 + 16);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
