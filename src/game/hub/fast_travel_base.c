#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(void);
__int64 GameHr_efda70(__int64 a1);

void __attribute__((noreturn)) FastTravelBase_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 GameHr_efda70(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 32);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

#pragma GCC visibility pop
