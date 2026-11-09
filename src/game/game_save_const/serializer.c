#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_81a990(void);
__int64 GameHr_8b24a0(__int64 a1);

void __attribute__((noreturn)) Serializer_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) ProcSaveLoader_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) GlobalSerializer_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 GameHr_8b24a0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 264);
  if (result != 0) {
    return GameRoutine_81a990();
  }
  return result;
}

#pragma GCC visibility pop
