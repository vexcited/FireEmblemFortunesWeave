#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_am_GetSelfController_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_TryWaitSystemEvent_plt(_QWORD);
extern _UNKNOWN SdkData_f656e8;
extern _UNKNOWN SdkData_f65700;
extern __int64 SdkData_f656f0;
extern __int64 SdkData_f656f8;
__int64 nn_oe_GetProgramTotalActiveTime(void* this_);

__int64 nn_oe_GetProgramTotalActiveTime(void* this_)
{
  __int64 v1;
  __int64 v2;
  __int64 i;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v8;
  __int64 v9;

  v1 = nn_os_SdkMutexType_Lock_plt(&SdkData_f656e8);
  v2 = nn_os_GetSystemTick_plt(v1);
  for (i = nn_os_TryWaitSystemEvent_plt(&SdkData_f65700); (i & 1) != 0;
       i = nn_os_TryWaitSystemEvent_plt(&SdkData_f65700)) {
    v9 = 0;
    v4 = nn_am_GetSelfController_plt(i);
    v5 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v4 + 392LL))(v4, &v9);
    v8 = v5;
    if ((_DWORD)v5 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v8);
    }
    if (v9 <= SdkData_f656f8) {
      break;
    }
    SdkData_f656f8 = v9;
    v2 = nn_os_GetSystemTick_plt(v5);
  }
  v6 = nn_os_ConvertToTimeSpan_plt(v2 - (SdkData_f656f0 + SdkData_f656f8));
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f656e8);
  return v6;
}

#pragma GCC visibility pop
