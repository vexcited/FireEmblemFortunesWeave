#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 strcmp(_QWORD, _QWORD);
bool TransitionConditionIsStateTransitionCompleted_Unknown2(_QWORD* a1,
                                                            __int64 a2);
bool TransitionConditionIsStateTransitionCompleted_Unknown2(_QWORD* a1,
                                                            __int64 a2)
{
  int v2;

  v2 = *(_DWORD*)(a2 + 16);
  if (v2 == 6) {
    return (unsigned int)strcmp(a1[2], *(_QWORD*)(a2 + 24)) == 0 &&
           (unsigned int)strcmp(a1[3], *(_QWORD*)(a2 + 32)) == 0 &&
           (unsigned int)strcmp(a1[4], *(_QWORD*)(a2 + 40)) == 0;
  }
  return v2 == 5 && (unsigned int)strcmp(a1[2], *(_QWORD*)(a2 + 24)) == 0 &&
         (unsigned int)strcmp(a1[3], *(_QWORD*)(a2 + 32)) == 0;
}

#pragma GCC visibility pop
