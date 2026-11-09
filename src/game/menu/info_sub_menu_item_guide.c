#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8229c0(_QWORD);
__int64 InfoSubMenuItem_Guide_Unknown6(__int64 a1);

__int64 InfoSubMenuItem_Guide_Unknown6(__int64 a1)
{
  return (unsigned __int8)GameRoutine_8229c0(a1) & *(_BYTE*)(a1 + 81) & 1;
}

#pragma GCC visibility pop
