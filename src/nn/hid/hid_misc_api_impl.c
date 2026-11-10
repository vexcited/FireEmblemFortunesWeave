#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_hid_server_CreateHidServerProxy_plt(_QWORD);
__int64 nn_hid_utility_GetAppletResourceUserId_plt(void);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN nn_hid_detail_g_NpadImuState;
extern __int64 SdkData_1046c50;
extern __int64 SdkData_1046c58;
extern __int64 SdkData_1046c60;
extern __int64 SdkData_1046c68;
extern __int64 SdkData_1046c70;
extern __int64 SdkData_1046c78;
extern __int64 SdkData_1046c80;
extern __int64 SdkData_1046c88;
extern __int64 SdkData_1046c90;
extern __int64 SdkData_1046c98;
extern __int64 SdkData_1046ca0;
extern __int64 SdkData_1046ca8;
extern __int64 SdkData_1046cb0;
extern __int64 SdkData_1046cb8;
extern __int64 SdkData_1046cc0;
extern __int64 SdkData_1046cc8;
extern __int64 SdkData_1046cd0;
extern __int64 SdkData_1046cd8;
extern __int64 SdkData_1046ce0;
extern __int64 SdkData_1046ce8;
extern __int64 SdkData_1046cf0;
extern __int64 SdkData_1046cf8;
__int64 nn_hid_EnableNpadImu(__int64 a1, __int64 a2);
__int64 nn_hid_DisableNpadImu(void* this_);

__int64 nn_hid_EnableNpadImu(__int64 a1, __int64 a2)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  struct {
    unsigned int v9;
    char v10;
  } v9_;
  __int64 v11;
  _QWORD v12[8];

  v4 = 2688714;
  nn_os_SdkMutexType_Lock_plt(&nn_hid_detail_g_NpadImuState);
  if (SdkData_1046c50 != 0) {
    v4 = 2689226;
  }
  else {
    memset(v12, 0, sizeof(v12));
    SdkData_1046c50 = a1;
    SdkData_1046c58 = 0;
    SdkData_1046c60 = 0;
    SdkData_1046c68 = 0;
    SdkData_1046c70 = 0;
    SdkData_1046c78 = 0;
    SdkData_1046c80 = 0;
    SdkData_1046c88 = 0;
    SdkData_1046c90 = 0;
    SdkData_1046c98 = 0;
    SdkData_1046ca0 = 0;
    SdkData_1046ca8 = 0;
    SdkData_1046cb0 = 0;
    SdkData_1046cb8 = 0;
    SdkData_1046cc0 = 0;
    SdkData_1046cc8 = 0;
    SdkData_1046cd0 = 0;
    SdkData_1046cd8 = 0;
    SdkData_1046ce0 = 0;
    SdkData_1046ce8 = 0;
    SdkData_1046cf0 = 0;
    SdkData_1046cf8 = 0;
    if ((unsigned int)nn_os_CreateTransferMemory_plt(v12, a1, a2, 1) == 0) {
      v5 = nn_os_DetachTransferMemory_plt(v12);
      nn_os_DestroyTransferMemory_plt(v12);
      v11 = 0;
      v4 = nn_hid_server_CreateHidServerProxy_plt(&v11);
      if (v4 == 0) {
        v6 = v11;
        v7 = nn_hid_utility_GetAppletResourceUserId_plt();
        v9_.v9 = v5;
        v9_.v10 = 1;
        v4 = (*(__int64 (**)(__int64, __int64, unsigned int*, __int64))(
            *(_QWORD*)v6 + 872LL))(v6, v7, &v9_.v9, a2);
        if (v9_.v10 == 1) {
          nn_os_CloseNativeHandle_plt(v9_.v9);
        }
      }
      if (v11 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      }
    }
  }
  nn_os_SdkMutexType_Unlock_plt(&nn_hid_detail_g_NpadImuState);
  return v4;
}

__int64 nn_hid_DisableNpadImu(void* this_)
{
  __int64 v1;
  __int64 v2;
  int v4;
  __int64 v5;

  nn_os_SdkMutexType_Lock_plt(&nn_hid_detail_g_NpadImuState);
  if (SdkData_1046c50 != 0) {
    v5 = 0;
    v4 = nn_hid_server_CreateHidServerProxy_plt(&v5);
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v4);
    }
    v1 = v5;
    v2 = nn_hid_utility_GetAppletResourceUserId_plt();
    v4 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v1 + 880LL))(v1, v2);
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v4);
    }
    SdkData_1046c50 = 0;
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    }
  }
  return nn_os_SdkMutexType_Unlock_plt(&nn_hid_detail_g_NpadImuState);
}

#pragma GCC visibility pop
