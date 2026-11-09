#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 strcmp(_QWORD, _QWORD);
bool TransitionConditionIsNoHit_Unknown2(__int64 a1, __int64 a2);

bool TransitionConditionIsNoHit_Unknown2(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 16) == 3 &&
         (unsigned int)strcmp(*(_QWORD*)(a1 + 16), *(_QWORD*)(a2 + 24)) == 0;
}

#pragma GCC visibility pop
