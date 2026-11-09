#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MyContactCallback_Unknown7(__int64 result);

__int64 MyContactCallback_Unknown7(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    *(_BYTE*)(v1 + 33) = 1;
  }
  return result;
}

#pragma GCC visibility pop
