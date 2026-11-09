#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e43d60(_QWORD);
__int64 LegionStackImmidiateDir_Unknown2(__int64 a1);

__int64 LegionStackImmidiateDir_Unknown2(__int64 a1)
{
  __int64 result;

  result = GameRoutine_e43d60(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 128LL));
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 128LL) + 80LL) = 1;
  return result;
}

#pragma GCC visibility pop
