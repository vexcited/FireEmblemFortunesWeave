#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21a39c8;
__int64 GameHr_5c01b0(__int64 result);

void __attribute__((noreturn)) PrimitiveShape_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 GameHr_5c01b0(__int64 result)
{
  GameData_21a39c8 = result;
  return result;
}

#pragma GCC visibility pop
