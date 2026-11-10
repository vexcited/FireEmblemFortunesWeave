#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_edea70(_QWORD, float, float);
__int64 GambitCameraShakePower_Dispatch(__int64 a1);
__attribute__((swiftcall)) void GambitCameraShakePower_Unknown3(PSEUDO_X8 x8_);

__int64 GambitCameraShakePower_Dispatch(__int64 a1)
{
  return GameRoutine_edea70(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 96LL) + 40LL),
      *(float*)(a1 + 56), 0.1);
}

__attribute__((swiftcall)) void GambitCameraShakePower_Unknown3(PSEUDO_X8 x8_)
{
  char* a1 = (char*)PSEUDO_X8_VALUE(x8_);
  strcpy(a1, " CameraShakePower");
}

#pragma GCC visibility pop
