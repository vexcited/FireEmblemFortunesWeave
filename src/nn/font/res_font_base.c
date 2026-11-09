#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_55d690(__int64 result, __int64, __int16, __int16, __int16,
                           __int16, char);
__int64 GameRoutine_55d6e0(_QWORD);
extern __int64 (*nn_font_TextureObject_vtable)();
extern __int64* GameData_2135fb0[4];
extern __int64* GameData_2135fb8[3];
__int64 ResFontBase_DeletingDestructor(__int64 a1);
__int64 ResFontBase_55f0a0(__int64 a1);

__int64 ResFontBase_DeletingDestructor(__int64 a1)
{
  *(_QWORD*)a1 = GameData_2135fb0[0] + 2;
  *(_QWORD*)(a1 + 40) = &nn_font_TextureObject_vtable;
  GameRoutine_55d690(a1 + 40, 0, 12, 0, 0, 0, 1);
  *(_BYTE*)(a1 + 65) = 0;
  *(_QWORD*)(a1 + 72) = -1;
  return GameRoutine_55d6e0(a1);
}

__int64 ResFontBase_55f0a0(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_2135fb8[0] + 2;
  result = GameRoutine_55d690(a1, 0, 12, 0, 0, 0, 1);
  *(_BYTE*)(a1 + 25) = 0;
  *(_QWORD*)(a1 + 32) = -1;
  return result;
}

#pragma GCC visibility pop
