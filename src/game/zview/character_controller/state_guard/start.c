#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d48660(_QWORD, _QWORD, _QWORD);
__int64 Start_Unknown2(__int64 result);
__int64 Start_Unknown3(__int64 a1);
__int64 Start_Unknown5(__int64 result);

__int64 Start_Unknown2(__int64 result)
{
  *(_DWORD*)(result + 16) = 0;
  return result;
}

__int64 Start_Unknown3(__int64 a1)
{
  __int64 v1;
  _QWORD v3[4];

  v1 = *(_QWORD*)(a1 + 8);
  memset(v3, 0, sizeof(v3));
  return GameRoutine_d48660(v1, 501870813, v3);
}

__int64 Start_Unknown5(__int64 result)
{
  *(_QWORD*)(*(_QWORD*)(result + 8) + 64LL) =
      *(_QWORD*)(*(_QWORD*)(result + 8) + 56LL);
  return result;
}

#pragma GCC visibility pop
