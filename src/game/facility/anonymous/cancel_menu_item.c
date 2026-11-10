#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_225ae28;
__int64 CancelMenuItem_ACall();

__int64 CancelMenuItem_ACall()
{
  if (GameData_225ae28 != 0) {
    *(_DWORD*)(GameData_225ae28 + 152) = 7;
  }
  return 2;
}

#pragma GCC visibility pop
