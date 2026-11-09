#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d523c0(_QWORD);
__int64 StateEscape_Unknown3(__int64 result);
__int64 StateEscape_Unknown5(__int64 result);

__int64 StateEscape_Unknown3(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(result + 8);
  *(_BYTE*)(v1 + 36) = 1;
  v2 = *(_QWORD*)(v1 + 8);
  if (*(_DWORD*)(v2 + 748) != 2) {
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 24LL);
    *(_QWORD*)(v3 + 32) = 0;
    *(_QWORD*)(v3 + 37) = 0;
    *(_BYTE*)(v3 + 96) = 1;
    *(_BYTE*)(v3 + 37) = 1;
    v4 = *(_QWORD*)(v3 + 16);
    *(_BYTE*)(v3 + 25) = 0;
    *(_BYTE*)(v3 + 48) = 0;
    *(_BYTE*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 80) = 0;
    *(_DWORD*)(v3 + 32) = 1086918619;
    return GameRoutine_d523c0(*(_QWORD*)(v4 + 488));
  }
  return result;
}

__int64 StateEscape_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 8);
  *(_BYTE*)(v1 + 36) = 0;
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 24LL);
  if (*(_BYTE*)(v2 + 96) == 1) {
    *(_BYTE*)(v2 + 96) = 0;
  }
  *(_BYTE*)(v2 + 25) = 0;
  return result;
}

#pragma GCC visibility pop
