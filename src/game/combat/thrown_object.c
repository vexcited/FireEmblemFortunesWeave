#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 StateReturn_Unknown2(__int64 result);

void __attribute__((noreturn)) ThrownObject_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) CharacterControllerBase_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 StateReturn_Unknown2(__int64 result)
{
  *(_BYTE*)(result + 16) = 0;
  return result;
}

#pragma GCC visibility pop
