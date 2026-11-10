#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 init_source(__int64 result);

__int64 init_source(__int64 result)
{
  *(_DWORD*)(*(_QWORD*)(result + 48) + 72LL) = 1;
  return result;
}

#pragma GCC visibility pop
