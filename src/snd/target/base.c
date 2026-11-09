#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 GameData_2134938[14];
void GameRoutine_651250(void*, unsigned __int64);
void Base_DeletingDestructor(_QWORD* a1);

void Base_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_2134938[0] + 16;
  nn_os_FinalizeMutex(a1 + 3);
  GameRoutine_651250(a1, 0x38u);
}

#pragma GCC visibility pop
