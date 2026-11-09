#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15b7780(_QWORD);
__int64 GameRoutine_15e0120(_QWORD);
__int64 GameRoutine_15e0200(_QWORD);
__int64 GameRoutine_15e04f0(_QWORD);
__int64 RelianceMemoryMenuItem_Unknown55(__int64 a1);

__int64 RelianceMemoryMenuItem_Unknown55(__int64 a1)
{
  char v1;
  _BYTE v4[20];

  v1 = *(_BYTE*)(a1 + 96);
  GameRoutine_15e0120(v4);
  if ((v1 & 1) == 0) {
    GameRoutine_15e0200(v4);
  }
  GameRoutine_15b7780(a1);
  return GameRoutine_15e04f0(v4);
}

#pragma GCC visibility pop
