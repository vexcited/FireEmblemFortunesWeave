#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_95e2c0(PSEUDO_X8, __int64 result, __int64);
bool ClassTrialJobMenuItem_IsActive(__int64 a1);

bool ClassTrialJobMenuItem_IsActive(__int64 a1)
{
  __int16 v2;

  game_95e2c0((void*)(&v2), *(_QWORD*)(a1 + 88), *(_QWORD*)(a1 + 96));
  return (v2 & 0x801) == 2048;
}

#pragma GCC visibility pop
