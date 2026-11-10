#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool TransitionConditionIsButtonDecided_Unknown2(__int64 a1, __int64 a2);

bool TransitionConditionIsButtonDecided_Unknown2(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 16) == 11;
}

#pragma GCC visibility pop
