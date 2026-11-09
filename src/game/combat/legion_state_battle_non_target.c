#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LegionStateBattleNonTarget_Unknown2(__int64 result);

__int64 LegionStateBattleNonTarget_Unknown2(__int64 result)
{
  if (*(_BYTE*)(result + 20) == 1) {
    *(_BYTE*)(result + 20) = 0;
  }
  if (*(_BYTE*)(result + 32) == 1) {
    *(_BYTE*)(result + 32) = 0;
  }
  *(_BYTE*)(result + 36) = 0;
  *(_DWORD*)(result + 40) = 0;
  return result;
}

#pragma GCC visibility pop
