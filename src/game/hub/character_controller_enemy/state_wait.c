#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 StateWait_Unknown5(__int64 result);

__int64 StateWait_Unknown5(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) + 24LL) +
                  24LL);
  if (*(_BYTE*)(v1 + 96) == 1) {
    *(_BYTE*)(v1 + 96) = 0;
  }
  *(_BYTE*)(v1 + 25) = 0;
  return result;
}

#pragma GCC visibility pop
