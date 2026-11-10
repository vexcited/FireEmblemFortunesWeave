#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_settings_detail_CreateSystemSettingsServerProxyForIpc_plt(_QWORD);
__int64 nn_settings_detail_BindPushNotificationDirtyFlagEvent(__int64 a1,
                                                              unsigned int a2);

__int64 nn_settings_detail_BindPushNotificationDirtyFlagEvent(__int64 a1,
                                                              unsigned int a2)
{
  unsigned int v4;
  __int64 v6;
  __int64 v7;

  if (a1 != 0) {
    v7 = 0;
    v4 = nn_settings_detail_CreateSystemSettingsServerProxyForIpc_plt(&v7);
    if (v4 == 0) {
      v6 = 0;
      v4 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 1728LL))(v7, &v6);
      if (v4 != 0) {
        if (BYTE4(v6) != 0) {
          nn_os_CloseNativeHandle_plt((unsigned int)v6);
        }
      }
      else {
        nn_os_AttachReadableHandleToSystemEvent_plt(a1, (unsigned int)v6,
                                                    BYTE4(v6), a2);
      }
    }
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    }
  }
  else {
    return 610921;
  }
  return v4;
}

#pragma GCC visibility pop
