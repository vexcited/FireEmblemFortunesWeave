#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1723840(_QWORD, _QWORD, _QWORD);
__int64 ObeliskHeroRetryMenuItem_Unknown25(__int64 a1);

__int64 ObeliskHeroRetryMenuItem_Unknown25(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v1 = *(_QWORD*)(v1 + 152);
  }
  GameRoutine_1723840(v1, *(unsigned __int8*)(a1 + 83),
                      *(unsigned int*)(a1 + 84));
  return 10;
}

#pragma GCC visibility pop
