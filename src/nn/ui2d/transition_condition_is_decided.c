#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*nn_ui2d_CaptureTexture_vtable[])();

bool TransitionConditionIsDecided_Unknown2(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 16) == 4;
}

#pragma GCC visibility pop
