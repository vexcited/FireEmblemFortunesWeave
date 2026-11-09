#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Loop_Unknown3(__int64 result);
__int64 Loop_Unknown5(__int64 result);

__int64 Loop_Unknown3(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 129LL) = 1;
  return result;
}

__int64 Loop_Unknown5(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 129LL) = 0;
  return result;
}

#pragma GCC visibility pop
