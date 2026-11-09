#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Main_Unknown3(__int64 result);

__int64 Main_Unknown3(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 8);
  if (*(_BYTE*)(v1 + 40) == 1) {
    *(_DWORD*)(v1 + 32) = *(_DWORD*)(v2 + 292);
    *(_DWORD*)(v1 + 36) = *(_DWORD*)(v2 + 296);
  }
  else {
    *(_QWORD*)(v1 + 32) = *(_QWORD*)(v2 + 292);
    *(_BYTE*)(v1 + 40) = 1;
  }
  return result;
}

#pragma GCC visibility pop
