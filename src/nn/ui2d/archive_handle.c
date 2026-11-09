#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_576c10(_QWORD);
__int64 GameRoutine_597ad0(_QWORD);
__int64 GameRoutine_59e0f0(_QWORD);
extern __int64* GameData_2136128;
_QWORD* ArchiveHandle_Destructor(_QWORD* a1);

_QWORD* ArchiveHandle_Destructor(_QWORD* a1)
{
  *a1 = GameData_2136128 + 2;
  GameRoutine_597ad0(a1 + 20);
  GameRoutine_59e0f0(a1 + 18);
  GameRoutine_576c10(a1 + 16);
  return a1 + 1;
}

#pragma GCC visibility pop
