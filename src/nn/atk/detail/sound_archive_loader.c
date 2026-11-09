#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*nn_atk_detail_SoundArchiveLoader_vtable)();
_QWORD* SoundArchiveLoader_Destructor(_QWORD* result);

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

#pragma GCC visibility pop
