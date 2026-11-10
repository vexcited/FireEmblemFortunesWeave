#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e5a4a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GambitCameraSpotIndex_Dispatch(__int64 a1);
__attribute__((swiftcall)) void GambitCameraSpotIndex_Unknown3(PSEUDO_X8 x8_);

__int64 GambitCameraSpotIndex_Dispatch(__int64 a1)
{
  char v1;
  int v2;
  __int64 v3;
  __int64 v5;
  int v6;

  v1 = *(_BYTE*)(a1 + 72);
  v2 = *(_DWORD*)(a1 + 68);
  v5 = *(_QWORD*)(a1 + 60);
  v3 = *(_QWORD*)(a1 + 48);
  v6 = v2;
  *(_BYTE*)(*(_QWORD*)(v3 + 96) + 149LL) = v1;
  return GameRoutine_e5a4a0(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 96LL),
                            *(unsigned int*)(*(_QWORD*)(a1 + 48) + 8LL),
                            *(unsigned int*)(a1 + 56), &v5);
}

__attribute__((swiftcall)) void GambitCameraSpotIndex_Unknown3(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 30;
  strcpy(a1 + 1, "CameraSpotIndex");
}

#pragma GCC visibility pop
