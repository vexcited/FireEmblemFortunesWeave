#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_55d690(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
extern __int64* GameData_2135fb8[3];
void GameRoutine_651250(void*, unsigned __int64);
void PlacementTextureObject_DeletingDestructor(_QWORD* a1);

void PlacementTextureObject_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_2135fb8[0] + 2;
  GameRoutine_55d690(a1, 0, 12, 0, 0, 0, 1);
  GameRoutine_651250(a1, 0x28u);
}

#pragma GCC visibility pop
