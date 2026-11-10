#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e40be0(_QWORD, _QWORD);
__int64 LegionStackWalkAndSee_Unknown4(__int64 result);

bool LegionStackWalkAndSee_Unknown5(__int64 a1)
{
  return *(float*)(a1 + 52) <= 0.0;
};

__int64 LegionStackWalkAndSee_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(*(_QWORD*)(result + 40) + 120LL);
  *(_QWORD*)(v1 + 120) = 0;
  *(_QWORD*)(v1 + 40) = 0;
  *(_QWORD*)(v1 + 80) = 0;
  *(_QWORD*)(v1 + 88) = 0;
  *(_DWORD*)(v1 + 116) = 0;
  v2 = *(_QWORD*)(*(_QWORD*)(result + 40) + 120LL);
  if (*(_BYTE*)(v2 + 96) != 0) {
    *(_BYTE*)(v2 + 96) = 0;
    return GameRoutine_e40be0(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 104LL), 0);
  }
  return result;
}

#pragma GCC visibility pop
