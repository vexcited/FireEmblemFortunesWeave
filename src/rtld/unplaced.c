#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* nn_diag_detail_g_SdkCrtHandle;
__int64 rtld_290(unsigned __int64 a1);

__int64 rtld_290(unsigned __int64 a1)
{
  if (a1 < (unsigned __int64)&nn_diag_detail_g_SdkCrtHandle || a1 >= 0xE4C300 ||
      (a1 & 7) != 0) {
    __udf(0x8003u);
  }
  return (*(__int64 (**)(void))a1)();
}

#pragma GCC visibility pop
