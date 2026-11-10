#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_combat_ThrownObject_CreateAndLaunch_lambda0_Invoke(_QWORD* result);

void __attribute__((noreturn)) ThrownObject_DeletingDestructor()
{
  __udf(0x8002u);
}

_QWORD* game_combat_ThrownObject_CreateAndLaunch_lambda0_Invoke(_QWORD* result)
{
  __int64 v1;
  __int64 v3;

  v1 = result[3];
  if (v1 != 0 && *(_QWORD*)(v1 + 8) != -1 && result[4] != 0) {
    v3 = result[1];
    if ((*(_BYTE*)(v3 + 288) & 1) == 0) {
      *(_BYTE*)(v3 + 288) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
