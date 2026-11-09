#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212bfd8;
__int64 VariableNatives_1192db0(__int64 result, __int64 a2);

__int64 VariableNatives_1192db0(__int64 result, __int64 a2)
{
  __int64 v2;

  v2 = GameData_212bfd8;
  *(_DWORD*)(a2 + 32) = 2;
  *(_QWORD*)a2 = v2 + 16;
  *(_QWORD*)(a2 + 8) = 0;
  *(_DWORD*)(a2 + 8) = (unsigned __int8)result;
  return result;
}

#pragma GCC visibility pop
