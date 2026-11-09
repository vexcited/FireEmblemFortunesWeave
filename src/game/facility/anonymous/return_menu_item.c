#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_225b938;
__int64 ReturnMenuItem_Unknown25(__int64 a1);

__int64 ReturnMenuItem_Unknown25(__int64 a1)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  if (GameData_225b938 != 0) {
    *(_DWORD*)(GameData_225b938 + 152) = 4;
  }
  return 2;
}

#pragma GCC visibility pop
