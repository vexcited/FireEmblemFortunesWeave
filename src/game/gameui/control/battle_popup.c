#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void GameHr_18cf330(__int64 a1, _WORD* a2);

void __attribute__((noreturn)) BattlePopup_DeletingDestructor()
{
  __udf(0x8002u);
}

void GameHr_18cf330(__int64 a1, _WORD* a2)
{
  a2[3] = 42;
  *a2 = 514;
}

#pragma GCC visibility pop
