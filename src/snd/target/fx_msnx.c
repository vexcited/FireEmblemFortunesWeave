#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FxMSNX_mainUnlocked(__int64 result);

__int64 FxMSNX_mainUnlocked(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(result + 5624) + 16LL) + 120LL) =
      *(_BYTE*)(result + 5680);
  return result;
}

#pragma GCC visibility pop
