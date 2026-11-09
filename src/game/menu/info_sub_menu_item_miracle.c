#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1462780(_QWORD, _QWORD);
__int64 GameRoutine_1462ac0(_QWORD, _QWORD);
__int64 InfoSubMenuItem_Miracle_Unknown25(__int64 a1, __int64 a2);

__int64 InfoSubMenuItem_Miracle_Unknown25(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  char v4;

  if (*(_BYTE*)(a1 + 82) != 1) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  v4 = GameRoutine_1462ac0(a1, a2);
  GameRoutine_1462780(v3, v4 & 1);
  return 9;
}

#pragma GCC visibility pop
