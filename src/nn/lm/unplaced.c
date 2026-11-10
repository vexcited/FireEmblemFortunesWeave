#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_lmem_DestroyUnitHeap_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
extern __int64 SdkData_e86d80;
__int64 nn_lm_4a3a30(__int64 a1);

__int64 nn_lm_4a3a30(__int64 a1)
{
  int v2;

  *(_QWORD*)(a1 + 368) = SdkData_e86d80 + 16;
  nn_os_SdkMutexType_Lock_plt(a1 + 432);
  nn_sf_hipc_client_ResizeSessions(a1 + 368, 0);
  nn_os_SdkMutexType_Unlock_plt(a1 + 432);
  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v2 = *(_DWORD*)(a1 + 12) - 1;
  *(_DWORD*)(a1 + 12) = v2;
  if (v2 == 0) {
    nn_lmem_DestroyUnitHeap_plt(*(_QWORD*)(*(_QWORD*)a1 + 152LL));
    *(_QWORD*)a1 = 0;
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 8);
}

#pragma GCC visibility pop
