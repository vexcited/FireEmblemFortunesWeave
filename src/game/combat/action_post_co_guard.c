#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1079e10(_QWORD);
extern __int64 GameData_21ec7b0;
__int64 ActionPostCoGuard_Unknown6(__int64 a1);

__int64 ActionPostCoGuard_Unknown6(__int64 a1)
{
  __int64 result;
  int v3;
  int v5;
  __int64 v6;

  result = GameRoutine_1079e10(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL));
  if ((result & 1) != 0 ||
      (v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ec7b0 + 8) + 64LL)) != 0 &&
          *(_DWORD*)(v6 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL) &&
          (*(_BYTE*)(v6 + 4) & 6) != 0) {
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
