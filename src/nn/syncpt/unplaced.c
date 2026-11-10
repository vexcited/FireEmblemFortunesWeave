#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
extern __int64 SdkData_f6e830;
__int64 nn_syncpt_sdk_DestroyDebugSyncDevice(__int64 result);
__int64 nn_syncpt_sdk_MakeDebugSyncCounterSyncPointHandle(__int64 a1);

__int64 nn_syncpt_sdk_DestroyDebugSyncDevice(__int64 result)
{
  if (result != SdkData_f6e830) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  atomic_store(0, (unsigned __int64*)&SdkData_f6e830);
  return result;
}

__int64 nn_syncpt_sdk_MakeDebugSyncCounterSyncPointHandle(__int64 a1)
{
  return *(unsigned int*)(a1 + 8) | 0x100000000LL;
}

#pragma GCC visibility pop
