#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
_DWORD* nn_result_173ec0(_DWORD* result);

_DWORD* nn_result_173ec0(_DWORD* result)
{
  if (*result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(result);
    __udf(0);
  }
  return result;
}

#pragma GCC visibility pop
