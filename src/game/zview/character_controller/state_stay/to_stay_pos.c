#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ToStayPos_Unknown5(__int64 result);

__int64 ToStayPos_Unknown5(__int64 result)
{
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) + 128LL) &= ~0x200u;
  return result;
}

#pragma GCC visibility pop
