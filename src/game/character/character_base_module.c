#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_10887e0(__int64 result, __int64 a2);

void __attribute__((noreturn)) CharacterBaseModule_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 GameHr_10887e0(__int64 result, __int64 a2)
{
  *(_QWORD*)(a2 + 496) = *(_QWORD*)(*(_QWORD*)(result + 8) + 304LL);
  return result;
}

#pragma GCC visibility pop
