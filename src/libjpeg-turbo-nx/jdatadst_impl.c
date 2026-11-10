#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 term_mem_destination(__int64 result);

__int64 term_mem_destination(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 48);
  **(_QWORD**)(v1 + 40) = *(_QWORD*)(v1 + 64);
  **(_QWORD**)(v1 + 48) = *(_QWORD*)(v1 + 72) - *(_QWORD*)(v1 + 8);
  return result;
}

#pragma GCC visibility pop
