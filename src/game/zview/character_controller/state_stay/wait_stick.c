#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cfa2a0(__int64 result, long double);
__int64 WaitStick_Unknown4(__int64 result, long double a2);

__int64 WaitStick_Unknown4(__int64 result, long double a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  *(float*)&a2 = (float)(*(float*)(*(_QWORD*)(v2 + 8) + 628LL) *
                         *(float*)(*(_QWORD*)(v2 + 8) + 628LL)) +
                 (float)(*(float*)(*(_QWORD*)(v2 + 8) + 624LL) *
                         *(float*)(*(_QWORD*)(v2 + 8) + 624LL));
  if (*(float*)&a2 <= 0.0) {
    result = *(_QWORD*)(v2 + 24);
    if (*(_BYTE*)(result + 12) != 1 || *(_DWORD*)(result + 8) != 1) {
      *(_DWORD*)(result + 16) = 1;
      *(_BYTE*)(result + 20) = 1;
    }
    if ((*(_BYTE*)(result + 96) & 1) == 0 &&
        (*(_BYTE*)(result + 97) & 1) != 0) {
      return GameRoutine_cfa2a0(result, a2);
    }
  }
  return result;
}

#pragma GCC visibility pop
