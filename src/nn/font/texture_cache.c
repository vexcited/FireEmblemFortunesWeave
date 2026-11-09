#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_55d690(__int64 result, __int64, __int16, __int16, __int16,
                           __int16, char);
__int64 GameRoutine_5fe300(_QWORD);
__int64 GameRoutine_606390(_QWORD);
__int64 GameRoutine_606500(_QWORD);
extern __int64* GameData_2135fb8[3];
extern __int64* GameData_2136008[2];
__int64 TextureCache_Destructor(__int64 a1);

__int64 TextureCache_Destructor(__int64 a1)
{
  *(_QWORD*)a1 = GameData_2136008[0] + 2;
  *(_QWORD*)(a1 + 7848) = GameData_2135fb8[0] + 2;
  GameRoutine_55d690(a1 + 7848, 0, 12, 0, 0, 0, 1);
  *(_QWORD*)(a1 + 7880) = -1;
  *(_BYTE*)(a1 + 7873) = 0;
  GameRoutine_5fe300(a1 + 7544);
  GameRoutine_606500(a1 + 7472);
  return GameRoutine_606390(a1 + 7256);
}

#pragma GCC visibility pop
