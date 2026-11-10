#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a61180(_QWORD, float);
__int64 ClothWindModule_Unknown5(__int64 a1);

__int64 ClothWindModule_Unknown5(__int64 a1)
{
  return GameRoutine_a61180(
      a1 + 32, *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 496LL) + 16LL));
}

#pragma GCC visibility pop
