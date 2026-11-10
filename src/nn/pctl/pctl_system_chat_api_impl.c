#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_WaitSystemEvent_plt(_QWORD);
__int64 nn_pctl_detail_AbortIfUnexpectResultImpl_plt(_QWORD);
__int64 nn_pctl_detail_ipc_GetServiceForWatcher_plt(_QWORD);
__int64 nn_pctl_detail_ipc_GetService_plt(_QWORD);
extern _UNKNOWN SdkData_f65d90;
extern _UNKNOWN SdkData_f65d98;
extern char SdkData_f65dc0;
extern char SdkData_f65dcc;
extern int SdkData_f65dc8;
__int64 nn_pctl_UpdateCameraPermission(__int64 a1, unsigned int a2,
                                       unsigned int a3);
void* nn_pctl_GetCameraPermissionChangedEvent(void* this_);

__int64 nn_pctl_UpdateCameraPermission(__int64 a1, unsigned int a2,
                                       unsigned int a3)
{
  __int64 v6;
  unsigned int v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[6];
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v6 = ((__int64 (*)(void))nn_pctl_detail_ipc_GetService_plt)();
  v7 = (*(__int64 (**)(__int64, __int64*, __int64*, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v6 + 1088LL))(v6, &v13, &v11, a1, a2, a3);
  nn_pctl_detail_AbortIfUnexpectResultImpl_plt(v7);
  if (v7 == 0) {
    memset(v12, 0, sizeof(v12));
    nn_os_AttachReadableHandleToSystemEvent_plt(v12, (unsigned int)v11,
                                                BYTE4(v11), 0);
    BYTE4(v11) = 0;
    LODWORD(v11) = 0;
    nn_os_WaitSystemEvent_plt(v12);
    v9 = nn_os_DestroySystemEvent_plt(v12);
    v10 = nn_pctl_detail_ipc_GetService_plt(v9);
    v7 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v10 + 1096LL))(v10, v13);
    nn_pctl_detail_AbortIfUnexpectResultImpl_plt(v7);
    if (BYTE4(v11) != 1) {
      return v7;
    }
  }
  else if (BYTE4(v11) != 1) {
    return v7;
  }
  nn_os_CloseNativeHandle_plt((unsigned int)v11);
  return v7;
}

void* nn_pctl_GetCameraPermissionChangedEvent(void* this_)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f65d90,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f65d90) != 0) {
    SdkData_f65dc0 = 0;
    SdkData_f65dc8 = 0;
    SdkData_f65dcc = 0;
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f65d90);
  }
  v1 = nn_os_SdkMutexType_Lock_plt(&SdkData_f65dc8);
  if ((SdkData_f65dcc & 1) == 0) {
    v6 = 0;
    v2 = nn_pctl_detail_ipc_GetServiceForWatcher_plt(v1);
    v3 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 1048LL))(v2, &v6);
    v5 = v3;
    if ((_DWORD)v3 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v5);
    }
    if (SdkData_f65dc0 != 0) {
      nn_diag_detail_AbortImpl_plt_856170(v3);
    }
    nn_os_AttachReadableHandleToSystemEvent_plt(&SdkData_f65d98,
                                                (unsigned int)v6, BYTE4(v6), 0);
    SdkData_f65dcc = 1;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f65dc8);
  return &SdkData_f65d98;
}

#pragma GCC visibility pop
