#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_55d690(void);
extern __int64* GameData_2135fb8[3];
void GameRoutine_651250(void*, unsigned __int64);
void ResourceTextureObject_DeletingDestructor(_QWORD* a1);

void ResourceTextureObject_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_2135fb8[0] + 2;
  GameRoutine_55d690();
  GameRoutine_651250(a1, 0x30u);
}

#pragma GCC visibility pop
