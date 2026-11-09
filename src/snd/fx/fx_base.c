#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1679b0(_QWORD*);
void GameRoutine_651250(void*, unsigned __int64);
void FxBase_167ab0(__int64 a1);
__int64 snd_HandlePtr_unregisterHandle(_QWORD);
__int64 snd_Obj_Destroy_Obj_126190(_QWORD*);
__n128 Param_Destructor(_QWORD*);
extern __int64* GameData_2134248[3];
extern __int64* GameData_2134250[2];
__int64 FxBase_1679b0(_QWORD* a1);

__int64 FxBase_1679b0(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;

  v2 = GameData_2134250[0] + 28;
  *a1 = GameData_2134250[0] + 2;
  a1[5] = v2;
  v3 = a1 + 5;
  a1[699] = GameData_2134248[0] + 2;
  snd_HandlePtr_unregisterHandle(a1 + 699);
  Param_Destructor(v3);
  return snd_Obj_Destroy_Obj_126190(a1);
}

void FxBase_167ab0(__int64 a1)
{
  GameRoutine_1679b0((_QWORD*)(a1 - 5592));
  GameRoutine_651250((void*)(a1 - 5592), 0x1630u);
}

#pragma GCC visibility pop
