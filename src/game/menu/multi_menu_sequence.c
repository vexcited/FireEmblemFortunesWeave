#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1375be0(void);
__int64 GameHr_1795e30(__int64 a1);

void __attribute__((noreturn)) MultiMenuSequence_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) UnitTroopMenu_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 GameHr_1795e30(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 881) & 1) != 0) {
    return 1;
  }
  else {
    return GameRoutine_1375be0();
  }
}

#pragma GCC visibility pop
