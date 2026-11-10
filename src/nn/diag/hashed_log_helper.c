#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_CallOnOtherStack_plt(_QWORD);
extern __int64 (*SdkData_e4d140[])();
__int64 HashedLogHelper_Caller_ba2d0(__int64* a1, __int64 a2);

__int64 HashedLogHelper_Caller_ba2d0(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD v5[4];

  v2 = *a1;
  v3 = a1[1];
  v5[2] = a2;
  v5[3] = v3;
  v5[0] = SdkData_e4d140;
  v5[1] = v2;
  return nn_diag_detail_CallOnOtherStack_plt(v5);
}

#pragma GCC visibility pop
