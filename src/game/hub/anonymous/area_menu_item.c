#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_169a430(_QWORD, _QWORD);
__int64 AreaMenuItem_Unknown25(__int64 a1);
__int64 AreaMenuItem_Unknown3(__int64 a1);

__int64 AreaMenuItem_Unknown3(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 112) + 8LL) + 8LL) +
                    40LL);
}

__int64 AreaMenuItem_Unknown25(__int64 a1)
{
  _BYTE v3[32];

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v3[0] = 0;
  v3[16] = 0;
  GameRoutine_169a430(a1, v3);
  return 12;
}

#pragma GCC visibility pop
