#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_edea70(_QWORD, float, float);
__int64 GambitCameraShakePower_Unknown2(__int64 a1);

__int64 GambitCameraShakePower_Unknown2(__int64 a1)
{
  return GameRoutine_edea70(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 96LL) + 40LL),
      *(float*)(a1 + 56), 0.1);
}

#pragma GCC visibility pop
