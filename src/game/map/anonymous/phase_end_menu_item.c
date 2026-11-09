#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21cf830;
__int64 PhaseEndMenuItem_Unknown25();

__int64 PhaseEndMenuItem_Unknown25()
{
  if (GameData_21cf830 != 0) {
    *(_DWORD*)(GameData_21cf830 + 152) = 28;
  }
  return 2;
}

#pragma GCC visibility pop
