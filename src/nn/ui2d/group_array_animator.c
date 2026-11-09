#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GroupArrayAnimator_Unknown31(__int64 result);

__int64 GroupArrayAnimator_Unknown31(__int64 result)
{
  __int64 v1;
  __int64 v2;

  if (*(int*)(result + 80) >= 1) {
    v1 = result;
    v2 = 0;
    do {
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v1 + 120LL))(
          v1, *(_QWORD*)(*(_QWORD*)(v1 + 72) + 8 * v2++));
    } while (v2 < *(int*)(v1 + 80));
  }
  return result;
}

#pragma GCC visibility pop
