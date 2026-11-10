#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void PlacementTextureInfo_10154a0(PSEUDO_X8 x8_,
                                                             __int64 result);

__attribute__((swiftcall)) void PlacementTextureInfo_10154a0(PSEUDO_X8 x8_,
                                                             __int64 result)
{
  _DWORD* a2 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  *a2 = *(_DWORD*)(result + 16);
  {
    result;
    return;
  }
}

bool PlacementTextureInfo_Unknown6(__int64 a1)
{
  return *(_QWORD*)(a1 + 8) != -1;
}

#pragma GCC visibility pop
