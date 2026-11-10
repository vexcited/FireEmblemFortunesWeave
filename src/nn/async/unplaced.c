#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_GetAllModuleInfo_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_GetRequiredBufferSizeForGetAllModuleInfo_plt(void);
__int64 nn_async_DumpAllModuleInfo(__int64 a1);

__int64 nn_async_DumpAllModuleInfo(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;

  v2 = nn_diag_GetRequiredBufferSizeForGetAllModuleInfo_plt();
  v3 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, v2,
                                                                         16);
  v5 = 0;
  nn_diag_GetAllModuleInfo_plt(&v5, v3, v2);
  return (*(__int64 (**)(__int64, __int64, __int64, __int64))(
      *(_QWORD*)a1 + 24LL))(a1, v3, v2, 16);
}

#pragma GCC visibility pop
