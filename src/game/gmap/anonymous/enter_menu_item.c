#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 EnterMenuItem_131e070(__int64 a1, __int64 a2);

__int64 EnterMenuItem_131e070(__int64 a1, __int64 a2)
{
  __int64 result;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1);
  if (result != 0) {
    GameRoutine_60a020(a2 + 8, result);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 600LL))(a1);
    if (result != 0) {
      return GameRoutine_60a020(a2 + 32, result);
    }
  }
  return result;
}

#pragma GCC visibility pop
