#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ActionSync_Unknown5(__int64 result);
__int64 ActionSync_Unknown6(__int64 result);

__int64 ActionSync_Unknown5(__int64 result)
{
  *(_DWORD*)(*(_QWORD*)(result + 24) +
             4LL * *(int*)(*(_QWORD*)(result + 8) + 96LL)) = 2;
  return result;
}

__int64 ActionSync_Unknown6(__int64 result)
{
  _DWORD* v1;
  int v2;
  int v3;

  v1 = *(_DWORD**)(result + 24);
  if (*v1 != 1 && v1[1] != 1 && v1[2] != 1 && v1[3] != 1) {
    v2 = *(_DWORD*)(result + 16);
    if (v2 != 1 && v2 != 3) {
      if (v2 == 2) {
        v3 = 3;
      }
      else {
        v3 = 1;
      }
      *(_DWORD*)(result + 16) = v3;
    }
  }
  return result;
}

#pragma GCC visibility pop
