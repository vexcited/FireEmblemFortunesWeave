#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1015950(void);
__int64 GameHr_1015c50(__int64 a1, _QWORD* a2);

bool PlacementTextureInfo_Unknown6(__int64 a1)
{
  return *(_QWORD*)(a1 + 8) != -1;
}

__int64 GameHr_1015c50(__int64 a1, _QWORD* a2)
{
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) = *a2;
  return GameRoutine_1015950();
}

#pragma GCC visibility pop
