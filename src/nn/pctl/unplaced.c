#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_WaitSystemEvent_plt(_QWORD);
__int64 nn_pctl_detail_AbortIfUnexpectResultImpl_plt(_QWORD);
__int64 nn_pctl_detail_ipc_GetService_plt(_QWORD);
__int64 nn_pctl_RequestCameraPermission(__int64 a1);

__int64 nn_pctl_RequestCameraPermission(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[6];
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v2 = ((__int64 (*)(void))nn_pctl_detail_ipc_GetService_plt)();
  v3 = (*(__int64 (**)(__int64, __int64*, __int64*, __int64))(
      *(_QWORD*)v2 + 408LL))(v2, &v9, &v7, a1);
  nn_pctl_detail_AbortIfUnexpectResultImpl_plt(v3);
  if (v3 != 0) {
    if (BYTE4(v7) != 1) {
      return v3;
    }
  }
  else {
    memset(v8, 0, sizeof(v8));
    nn_os_AttachReadableHandleToSystemEvent_plt(v8, (unsigned int)v7, BYTE4(v7),
                                                0);
    BYTE4(v7) = 0;
    LODWORD(v7) = 0;
    nn_os_WaitSystemEvent_plt(v8);
    v5 = nn_os_DestroySystemEvent_plt(v8);
    v6 = nn_pctl_detail_ipc_GetService_plt(v5);
    v3 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v6 + 424LL))(v6, v9);
    nn_pctl_detail_AbortIfUnexpectResultImpl_plt(v3);
    if (BYTE4(v7) != 1) {
      return v3;
    }
  }
  nn_os_CloseNativeHandle_plt((unsigned int)v7);
  return v3;
}

#pragma GCC visibility pop
