#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_15d2910(__int64, unsigned __int16*);
extern __int64 game_g_empty_item;
__int64 DecideMenuItem_OnSelect(__int64 a1);

__int64 DecideMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void))(*(_QWORD*)a1 + v2))();
  v3 = GameRoutine_155fbe0(*(_QWORD*)(a1 + 88) + 200LL, "L_InfoDetail");
  return GameRoutine_15d2910(v3, (unsigned __int16*)&game_g_empty_item);
}

#pragma GCC visibility pop
