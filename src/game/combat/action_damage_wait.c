#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21ec7b0;
__int64 ActionDamageWait_Unknown5(__int64 result);

__int64 ActionDamageWait_Unknown5(__int64 result)
{
  __int64 v1;
  int v2;
  int v4;
  int v5;

  if ((GameData_21ec7b0 == 0 || (v1 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
       (*(_BYTE*)(v1 + 113) & 0x80) == 0) &&
      (*(_DWORD*)(*(_QWORD*)(result + 24) + 4LL) & 0x40000100) == 0) {
    v5 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 368LL) + 120LL);
    if (v5 <= -77626399) {
      if (v5 != -972548316 && v5 != -93581017) {
        return result;
      }
    }
    else if (v5 != -77626398 && v5 != 1715476756 && v5 != 1400556095) {
      return result;
    }
    *(_DWORD*)(result + 32) = 1077936128;
    return result;
  }
  v2 = *(_DWORD*)(result + 16);
  if (v2 != 1 && v2 != 3) {
    if (v2 == 2) {
      v4 = 3;
    }
    else {
      v4 = 1;
    }
    *(_DWORD*)(result + 16) = v4;
  }
  return result;
}

#pragma GCC visibility pop
