#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ActionTick_Unknown6(__int64 a1);

__int64 ActionTick_Unknown6(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;
  int v6;

  v2 = *(_QWORD*)(a1 + 112);
  if (v2 == 0) {
    GameRoutine_60a310(0);
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  if ((result & 1) == 0) {
    v4 = *(_DWORD*)(a1 + 16);
    if (v4 != 1 && v4 != 3) {
      if (v4 == 2) {
        v6 = 3;
      }
      else {
        v6 = 1;
      }
      *(_DWORD*)(a1 + 16) = v6;
    }
  }
  return result;
}

#pragma GCC visibility pop
