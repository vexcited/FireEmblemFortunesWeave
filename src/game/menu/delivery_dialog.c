#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15858a0(_QWORD, _QWORD);
__int64 GameRoutine_1648c60(void);
__int64 DeliveryDialog_Unknown135(__int64 a1);
const char* DeliveryDialog_Unknown32();

__int64 DeliveryDialog_Unknown135(__int64 a1)
{
  GameRoutine_1648c60();
  return GameRoutine_15858a0(a1 + 848, a1 + 1496);
}

const char* DeliveryDialog_Unknown32() { return "Layout/CommonMenu.arc"; }

#pragma GCC visibility pop
