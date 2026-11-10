#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gs_sdk_state_490580(__int64, _DWORD*, __int64, unsigned int, __int64,
                            _QWORD*, _QWORD*);
__int64 nn_am_GetGraphicsSupervisor_plt(_QWORD);
__int64 nn_applet_GetAppletResourceUserId_plt(void* this_);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_SleepThread_plt(_QWORD);
extern _UNKNOWN nn_gsv_g_UserSession;
extern char nn_gsv_g_IsInitialized;
__int64 nn_gsv_BootWithTransferMemory(void* a1, __int64 a2, __int64 a3);

__int64 nn_gsv_BootWithTransferMemory(void* a1, __int64 a2, __int64 a3)
{
  char v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v9 = a3;
  v10 = a2;
  v3 = 0;
  atomic_compare_exchange_strong_explicit(
      (atomic_uchar* volatile)&nn_gsv_g_IsInitialized, (unsigned __int8*)&v3,
      1u, memory_order_acquire, memory_order_acquire);
  if (v3 != 0) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  v4 = (unsigned int)a1;
  v5 = nn_applet_GetAppletResourceUserId_plt(a1);
  v11 = 0;
  while ((unsigned int)nn_am_GetGraphicsSupervisor_plt(&v11) != 0) {
    nn_os_SleepThread_plt(100000000);
  }
  v8 = v11;
  v6 = gs_sdk_state_490580((__int64)&nn_gsv_g_UserSession, &v8, v5, v4,
                           (__int64)&v11, &v10, &v9);
  if ((_DWORD)v6 != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  result = v8;
  if (v8 != 0) {
    return nn_os_CloseNativeHandle_plt(v8);
  }
  return result;
}

#pragma GCC visibility pop
