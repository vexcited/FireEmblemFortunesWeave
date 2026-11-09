#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e42820(_QWORD);
__int64 LegionStackWaitAnimComplate_Unknown5(__int64 a1);

__int64 LegionStackWaitAnimComplate_Unknown5(__int64 a1)
{
  if (*(_BYTE*)(a1 + 56) == 1 && *(float*)(a1 + 52) <= *(float*)(a1 + 60)) {
    return 1;
  }
  else {
    return GameRoutine_e42820(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 104LL));
  }
}

#pragma GCC visibility pop
