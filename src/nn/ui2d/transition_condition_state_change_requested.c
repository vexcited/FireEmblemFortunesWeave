#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 strcmp(_QWORD, _QWORD);
bool TransitionConditionStateChangeRequested_Unknown2(__int64 a1, __int64 a2);

bool TransitionConditionStateChangeRequested_Unknown2(__int64 a1, __int64 a2)
{
  if (*(_DWORD*)(a2 + 16) != 8) {
    return false;
  }
  if ((unsigned int)strcmp(*(_QWORD*)(a2 + 32), *(_QWORD*)(a1 + 16)) != 0) {
    return false;
  }
  return (unsigned int)strcmp(*(_QWORD*)(a2 + 40), *(_QWORD*)(a1 + 24)) == 0;
}

#pragma GCC visibility pop
