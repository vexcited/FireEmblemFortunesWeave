#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5714e0(_QWORD, _QWORD);
__int64 GameRoutine_5716e0(_QWORD, _QWORD);
__int64 Parts_Unknown32(__int64 a1, __int64 a2);
__int64 Parts_Unknown34(__int64 a1, __int64 a2);

__int64 Parts_Unknown32(__int64 a1, __int64 a2)
{
  if ((GameRoutine_5714e0(a1 + 176, a2) & 1) != 0) {
    return a1;
  }
  else {
    return 0;
  }
}

__int64 Parts_Unknown34(__int64 a1, __int64 a2)
{
  int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;

  v4 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  if (v4 == 0) {
    return 0;
  }
  v5 = 0;
  while (1) {
    v6 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 88LL))(a1, v5);
    if (v6 != 0) {
      v7 = v6;
      if ((GameRoutine_5716e0(*(_QWORD*)(v6 + 40), a2) & 1) != 0) {
        break;
      }
    }
    if (v4 == ++v5) {
      return 0;
    }
  }
  return v7;
}

#pragma GCC visibility pop
