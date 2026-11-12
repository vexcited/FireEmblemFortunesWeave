#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_592cb0(__int64);
__int64 SdkRoutine_592e50(__int64);
__int64 SdkRoutine_593ae0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_593ae0_alt1(_WORD*, __int64,
                               __int64) __asm__("SdkRoutine_593ae0");
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_am_GetApplicationFunctions_plt(_QWORD);
__int64 nn_applet_GetStorageSize_plt(_QWORD);
__int64 nn_applet_ReadFromStorage_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_applet_ReleaseStorage_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_result_detail_ConvertInvalidImpl_plt(_QWORD);
extern _UNKNOWN SdkData_f652f0;
extern _UNKNOWN SdkData_f652f8;
extern _UNKNOWN SdkData_f65300;
extern __int64 SdkData_f65570;
__attribute__((swiftcall)) void
nn_notification_GetNotificationServicesCommon(PSEUDO_X8 x8_);
void* nn_notification_GetNotificationSystemEvent();
bool nn_notification_TryPopNotifiedApplicationParameter(void* this_,
                                                        unsigned __int64* a2,
                                                        unsigned __int64 a3);
__int64 nn_notification_RegisterAlarmSetting_593ab0(__int64 a1, __int64 a2,
                                                    __int64 a3, __int64 a4);
__int64 nn_notification_RegisterAlarmSetting_593bd0(_WORD* a1, __int64 a2);
__attribute__((swiftcall)) void
    nn_notification_GetNotificationServicesCommon_plt(PSEUDO_X8, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_hid_IsFirmwareUpdateNeededForNotification_plt(void);
__int64 nn_hid_ShowControllerFirmwareUpdate_plt(_QWORD);
__int64 nn_notification_ErrShowError_plt(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
extern char SdkData_f65328;
__int64 unplaced_592e50(__int64 a1);
__int64 unplaced_593ae0(_WORD* a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void

nn_notification_GetNotificationServicesCommon(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f652f0,
                            memory_order_acquire) &
       1) == 0) {
    v3 = __cxa_guard_acquire_plt(&SdkData_f652f0);
    if ((_DWORD)v3 != 0) {
      SdkRoutine_592cb0(v3);
      __cxa_guard_release_plt(&SdkData_f652f0);
    }
  }
  v2 = SdkData_f65570;
  if (SdkData_f65570 != 0) {
    (**(void (***)(__int64))SdkData_f65570)(SdkData_f65570);
  }
  *a1 = v2;
}

void* nn_notification_GetNotificationSystemEvent()
{
  __int64 v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f652f8,
                            memory_order_acquire) &
       1) != 0) {
    return &SdkData_f65300;
  }
  v1 = __cxa_guard_acquire_plt(&SdkData_f652f8);
  if ((_DWORD)v1 != 0) {
    SdkRoutine_592e50(v1);
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f652f8);
  }
  return &SdkData_f65300;
}

__int64 unplaced_592e50(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v4;
  __int64 v5;

  v5 = 0;
  SdkData_f65328 = 0;
  v1 = nn_am_GetApplicationFunctions_plt(a1);
  v2 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v1 + 448LL))(v1, &v5);
  v4 = v2;
  if ((_DWORD)v2 != 0) {
    v2 = nn_diag_detail_AbortImpl_plt_858db0(&v4);
  LABEL_5:
    nn_diag_detail_AbortImpl_plt_856170(v2);
    __udf(0);
  }
  if (SdkData_f65328 != 0) {
    goto LABEL_5;
  }
  return nn_os_AttachReadableHandleToSystemEvent_plt(
      &SdkData_f65300, (unsigned int)v5, BYTE4(v5), 0);
}

bool nn_notification_TryPopNotifiedApplicationParameter(void* this_,
                                                        unsigned __int64* a2,
                                                        unsigned __int64 a3)
{
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v11;
  __int64* v12;

  v11 = 0;
  v6 = nn_am_GetApplicationFunctions_plt(this_);
  v12 = &v11;
  v7 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v6 + 456LL))(v6, &v12);
  if (v7 != 0) {
    if ((v7 & 0x3FFFFFLL) != 0x480) {
      nn_result_detail_ConvertInvalidImpl_plt(v7);
    }
  }
  else {
    v8 = v11;
    v11 = 0;
    v9 = nn_applet_GetStorageSize_plt(v8);
    if (a3 >= v9) {
      a3 = v9;
    }
    if (a3 != 0) {
      LODWORD(v12) = nn_applet_ReadFromStorage_plt(v8, 0, a2, a3);
      if ((_DWORD)v12 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v12);
      }
    }
    *(_QWORD*)this_ = a3;
    nn_applet_ReleaseStorage_plt(v8);
  }
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  return v7 == 0;
}

__int64 nn_notification_RegisterAlarmSetting_593ab0(__int64 a1, __int64 a2,
                                                    __int64 a3, __int64 a4)
{
  _QWORD v5[2];

  v5[0] = a3;
  v5[1] = a4;
  return SdkRoutine_593ae0(a1, a2, v5) & 1;
}

__int64 unplaced_593ae0(_WORD* a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  unsigned int v7;
  bool v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v12;
  __int16 v13;
  __int64 v14;

  v6 = nn_hid_IsFirmwareUpdateNeededForNotification_plt();
  if ((v6 & 1) != 0) {
    LODWORD(v14) = 1;
    v6 = nn_hid_ShowControllerFirmwareUpdate_plt(&v14);
  }
  v14 = 0;
  nn_notification_GetNotificationServicesCommon_plt((void*)&v14, v6);
  v13 = 0;
  v7 = (*(__int64 (**)(__int64, __int16*, __int64, __int64))(
      *(_QWORD*)v14 + 32LL))(v14, &v13, a2, a3);
  v8 = (v7 & 0x1FF) == 0xE5 && ((v7 >> 9) & 0x1FFC) - 300 >= 0xFFFFFF9C;
  v9 = !v8;
  if (v8) {
    nn_notification_ErrShowError_plt(v7);
    v10 = v14;
    if (v14 == 0) {
      return v9;
    }
  LABEL_14:
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    return v9;
  }
  v12 = v7;
  if (v7 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v12);
    __udf(0);
  }
  *a1 = v13;
  v10 = v14;
  if (v14 != 0) {
    goto LABEL_14;
  }
  return v9;
}

__int64 nn_notification_RegisterAlarmSetting_593bd0(_WORD* a1, __int64 a2)
{
  _QWORD v3[2];

  v3[0] = 0;
  v3[1] = 0;
  return SdkRoutine_593ae0_alt1(a1, a2, (__int64)v3) & 1;
}

#pragma GCC visibility pop
