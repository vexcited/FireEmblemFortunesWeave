#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool LegionStackDefault_Unknown5(__int64 a1);

bool LegionStackDefault_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 112LL) + 136LL);
  v2 = (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 112LL) + 144LL) - v1) >> 4;
  return v2 != 0 && (v2 != 1 || (*(_BYTE*)(*(_QWORD*)v1 + 9LL) & 1) == 0);
}

#pragma GCC visibility pop
