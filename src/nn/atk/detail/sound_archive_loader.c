#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*nn_atk_detail_SoundArchiveLoader_vtable)();
_QWORD* SoundArchiveLoader_Destructor(_QWORD* result);
unsigned __int64 GameHr_288600(int a1);

void __attribute__((noreturn)) SoundArchiveLoader_DeletingDestructor()
{
  __udf(0x8002u);
}

_QWORD* SoundArchiveLoader_Destructor(_QWORD* result)
{
  *result = &nn_atk_detail_SoundArchiveLoader_vtable;
  result[1] = 0;
  return result;
}

unsigned __int64 GameHr_288600(int a1)
{
  return (a1 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
}

#pragma GCC visibility pop
