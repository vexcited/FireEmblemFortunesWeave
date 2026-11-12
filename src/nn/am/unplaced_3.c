#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void SdkRoutine_1d069c();
__int64 nn_am_1cfe90(__int64 a1, __int64 a2, __int64 a3, __int64 a4);

__int64 nn_am_1cfe90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v6;

  v4 = *(_QWORD*)(a1 + 48);
  v6 = a4;
  return ((__int64 (*)(__int64, __int64, __int64, __int64,
                       __int64*))SdkRoutine_1d069c)(v4, a1 + 8, a2, a3, &v6);
}

#pragma GCC visibility pop
