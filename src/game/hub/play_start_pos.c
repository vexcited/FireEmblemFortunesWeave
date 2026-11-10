#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_fa2110(void);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff9198[])();
extern __int64 (*game_hub_PlayStartPos_vtable[])();
extern __int64 GameData_220b6f8;
extern int GameData_2229a68;
void PlayStartPos_Destructor(_QWORD* a1);

void PlayStartPos_Destructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_hub_PlayStartPos_vtable;
  GameRoutine_fa2110();
  v2 = a1[2];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  *a1 = GameData_1ff9198;
  if ((_QWORD*)GameData_220b6f8 == a1) {
    GameData_220b6f8 = 0;
    GameData_2229a68 = 0;
  }
}

#pragma GCC visibility pop
