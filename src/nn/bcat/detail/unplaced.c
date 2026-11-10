#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_lmem_DestroyUnitHeap_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
extern _UNKNOWN* SdkData_f28e18;
extern _UNKNOWN SdkData_f28e00;
extern _UNKNOWN SdkData_f28e10;
extern __int64 SdkData_e86d80;
extern __int64 SdkData_f28e08;
extern __int64 SdkData_f28e20;
extern int SdkData_f28e14;
__int64 nn_bcat_ipc_Finalize();
__int64 nn_bcat_detail_2c3b10(__int64 a1);

__int64 nn_bcat_ipc_Finalize()
{
  nn_os_SdkMutexType_Lock_plt(&SdkData_f28e00);
  nn_os_SdkMutexType_Lock_plt(&SdkData_f28e10);
  if (--SdkData_f28e14 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)SdkData_f28e08 + 8LL))(SdkData_f28e08);
    SdkData_f28e08 = 0;
    if (SdkData_f28e18 != nullptr) {
      ((void (*)(__int64))SdkData_f28e18)(SdkData_f28e20);
    }
    SdkData_f28e18 = nullptr;
    SdkData_f28e20 = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f28e10);
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f28e00);
}

__int64 nn_bcat_detail_2c3b10(__int64 a1)
{
  int v2;

  *(_QWORD*)(a1 + 2160) = SdkData_e86d80 + 16;
  nn_os_SdkMutexType_Lock_plt(a1 + 2224);
  nn_sf_hipc_client_ResizeSessions(a1 + 2160, 0);
  nn_os_SdkMutexType_Unlock_plt(a1 + 2224);
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
