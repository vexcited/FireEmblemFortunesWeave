#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __nnmusl_TimerCreate(void);
void nndiagAbort_plt();
__int64 nn_os_7bc520();

__int64 nn_os_7bc520()
{
  nndiagAbort_plt();
  return __nnmusl_TimerCreate();
}

#pragma GCC visibility pop
