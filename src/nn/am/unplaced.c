#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1db6cc(__int64, __int64*, __int64, __int64);
__int64 SdkRoutine_1dcb20();
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SleepThread_plt(_QWORD);
extern _UNKNOWN SdkData_efd280;
extern __int64 SdkData_efd288;
extern __int64 SdkData_efd290;
extern __int64 SdkData_efd3a0[];
extern __int64 SdkData_efeea0;
extern __int64 nn_am_detail_g_SystemProcessCommonFunctions;
extern int SdkData_efd284;
__int64 nn_am_InitializeSystemProcessInterfaces(void* this_);

__int64 nn_am_InitializeSystemProcessInterfaces(void* this_)
{
  __int64 i;
  int v2;
  int v4;
  __int64 v5[3];
  __int64 v6;

  v5[2] = 0;
  v5[0] = (__int64)SdkData_efd3a0;
  v5[1] = (__int64)"appletAE";
  LODWORD(v5[0]) =
      SdkRoutine_1db6cc((__int64)&SdkData_efeea0, v5,
                        (__int64)SdkRoutine_1dcb20, (__int64)SdkData_efd3a0);
  if (LODWORD(v5[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v5);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_efd280);
  if (SdkData_efd284 != 0) {
    if (SdkData_efd288 == 0) {
      SdkData_efd288 = 0;
      SdkData_efd290 = 0;
    }
    ++SdkData_efd284;
  }
  else {
    v6 = 0;
    for (i = SdkData_efeea0;; i = SdkData_efeea0) {
      v5[0] = (__int64)&v6;
      v2 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)i + 104LL))(i, v5);
      if ((v2 & 0x3FFFFF) != 0x19280) {
        break;
      }
      nn_os_SleepThread_plt(10000000);
    }
    if (v2 != 0) {
      v4 = v2;
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
      }
      nn_os_SdkMutexType_Unlock_plt(&SdkData_efd280);
      LODWORD(v5[0]) = v4;
      nn_diag_detail_AbortImpl_plt_858db0(v5);
    }
    SdkData_efd284 = 1;
    SdkData_efd288 = 0;
    SdkData_efd290 = 0;
    nn_am_detail_g_SystemProcessCommonFunctions = v6;
  }
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_efd280);
}

#pragma GCC visibility pop
