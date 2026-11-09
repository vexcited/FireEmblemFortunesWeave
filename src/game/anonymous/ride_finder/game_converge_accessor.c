#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameConvergeAccessor_Unknown2_12c6e80(__int64 a1);
__int64 GameConvergeAccessor_Unknown3(__int64 a1, int a2);

__int64 GameConvergeAccessor_Unknown2_12c6e80(__int64 a1)
{
  return *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 144LL);
}

__int64 GameConvergeAccessor_Unknown3(__int64 a1, int a2)
{
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 120LL) +
         ((__int64)a2 << 6);
}

#pragma GCC visibility pop
