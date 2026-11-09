#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5791a0(__int64);
__int64 DummyRenderTargetTextureInfo_Unknown3(__int64 a1);

__int64 DummyRenderTargetTextureInfo_Unknown3(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    result = GameRoutine_5791a0(result);
    *(_QWORD*)(a1 + 16) = 0;
  }
  return result;
}

#pragma GCC visibility pop
