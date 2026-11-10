#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_result_detail_ConvertInvalidImpl_plt(_QWORD);
extern __int64 SdkData_10513c0;
__int64 nn_ldn_GetStateForMonitor(void* this_);

__int64 nn_ldn_GetStateForMonitor(void* this_)
{
  unsigned int v1;
  unsigned int v3;
  unsigned int v4;

  v4 = 0;
  v1 = (*(__int64 (**)(__int64, unsigned int*))(*(_QWORD*)SdkData_10513c0 +
                                                32LL))(SdkData_10513c0, &v4);
  if (v1 != 0) {
    v3 = v1;
    nn_result_detail_ConvertInvalidImpl_plt(v1);
    v1 = v3;
  }
  if (v1 != 0) {
    return 0;
  }
  else {
    return v4;
  }
}

#pragma GCC visibility pop
