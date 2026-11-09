#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_575d70(void);
extern __int64 (*nn_ui2d_CaptureTexture_vtable[])();
__int64 CaptureTexture_DeletingDestructor(_QWORD* a1);

bool TransitionConditionIsDecided_Unknown2(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 16) == 4;
}

bool TransitionConditionIsButtonDecided_Unknown2(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 16) == 11;
}

__int64 CaptureTexture_DeletingDestructor(_QWORD* a1)
{
  *a1 = nn_ui2d_CaptureTexture_vtable;
  return GameRoutine_575d70();
}

#pragma GCC visibility pop
