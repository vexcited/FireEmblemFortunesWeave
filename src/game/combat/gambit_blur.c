#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GambitBlur_Unknown2(__int64 result);

__int64 GambitBlur_Unknown2(__int64 result)
{
  __int64 v1;
  int v2;

  v1 = *(_QWORD*)(result + 48);
  v2 = *(_DWORD*)(result + 56);
  if ((*(_BYTE*)(v1 + 224) & 1) == 0) {
    *(_BYTE*)(v1 + 224) = 1;
  }
  *(_DWORD*)(v1 + 216) = v2;
  *(_DWORD*)(v1 + 220) = v2;
  return result;
}

#pragma GCC visibility pop
