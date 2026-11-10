#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5dca00(_QWORD, _QWORD);
__int64 SdkRoutine_5dcef0();
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64
nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_GetFinishNotificationEvent_plt(
    void* this_);
__int64
nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_GetResult_plt(
    void* this_);
__int64
nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_IsProcessing_plt(
    void* this_);
__int64
nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_StartTask_plt(
    void* this_);
__int64
    nn_ntc_shim_CorrectionNetworkClockAsyncTask_CorrectionNetworkClockAsyncTask_plt(
        _QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_TimedWaitSystemEvent_plt(_QWORD, _QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
extern _UNKNOWN SdkData_ea3950;
extern _UNKNOWN SdkData_f6ecd0;
extern _UNKNOWN SdkData_f6ece0;
extern _UNKNOWN SdkData_f6ed64;
extern _UNKNOWN SdkData_f6ed70;
extern _UNKNOWN SdkData_f6ed90;
extern __int64 SdkData_f6ecd8;
extern __int64 SdkData_f6ed68;
extern __int64 SdkData_f6ed78;
extern __int64 SdkData_f6ed80;
extern char SdkData_f6ed60;
extern int SdkData_f6ed74;
__int64 nn_ntc_shim_EnsureNetworkClockAvailability(void* this_);
__int64 nn_ntc_detail_shim_GetStaticServiceSharedPointer(__int64* a1);

__int64 nn_ntc_shim_EnsureNetworkClockAvailability(void* this_)
{
  void* v1;
  __int64 result;
  __int64 v3;
  void* v4;
  void* v5;
  void* v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6ecd0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f6ecd0) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f6ecd0);
  }
  nn_os_LockMutex_plt(&SdkData_ea3950);
  v1 = (void*)SdkData_f6ecd8;
  if (SdkData_f6ecd8 != 0) {
    nn_os_UnlockMutex_plt(&SdkData_ea3950);
    result =
        nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_StartTask_plt(
            v1);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  else {
    nn_ntc_shim_CorrectionNetworkClockAsyncTask_CorrectionNetworkClockAsyncTask_plt(
        &SdkData_f6ece0, 1, 0);
    SdkData_f6ecd8 = (__int64)&SdkData_f6ece0;
    nn_os_UnlockMutex_plt(&SdkData_ea3950);
    result =
        nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_StartTask_plt(
            (void*)&SdkData_f6ece0);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  do {
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6ecd0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&SdkData_f6ecd0) != 0) {
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt(&SdkData_f6ecd0);
    }
    nn_os_LockMutex_plt(&SdkData_ea3950);
    v4 = (void*)SdkData_f6ecd8;
    if (SdkData_f6ecd8 == 0) {
      v4 = (void*)&SdkData_f6ece0;
      nn_ntc_shim_CorrectionNetworkClockAsyncTask_CorrectionNetworkClockAsyncTask_plt(
          &SdkData_f6ece0, 1, 0);
      SdkData_f6ecd8 = (__int64)&SdkData_f6ece0;
    }
    nn_os_UnlockMutex_plt(&SdkData_ea3950);
    if ((nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_IsProcessing_plt(
             v4) &
         1) == 0) {
      break;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6ecd0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&SdkData_f6ecd0) != 0) {
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt(&SdkData_f6ecd0);
    }
    nn_os_LockMutex_plt(&SdkData_ea3950);
    v5 = (void*)SdkData_f6ecd8;
    if (SdkData_f6ecd8 == 0) {
      v5 = (void*)&SdkData_f6ece0;
      nn_ntc_shim_CorrectionNetworkClockAsyncTask_CorrectionNetworkClockAsyncTask_plt(
          &SdkData_f6ece0, 1, 0);
      SdkData_f6ecd8 = (__int64)&SdkData_f6ece0;
    }
    nn_os_UnlockMutex_plt(&SdkData_ea3950);
    v3 =
        nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_GetFinishNotificationEvent_plt(
            v5);
  } while ((nn_os_TimedWaitSystemEvent_plt(v3, 2000000000) & 1) == 0);
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6ecd0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f6ecd0) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f6ecd0);
  }
  nn_os_LockMutex_plt(&SdkData_ea3950);
  v6 = (void*)SdkData_f6ecd8;
  if (SdkData_f6ecd8 == 0) {
    v6 = (void*)&SdkData_f6ece0;
    nn_ntc_shim_CorrectionNetworkClockAsyncTask_CorrectionNetworkClockAsyncTask_plt(
        &SdkData_f6ece0, 1, 0);
    SdkData_f6ecd8 = (__int64)&SdkData_f6ece0;
  }
  nn_os_UnlockMutex_plt(&SdkData_ea3950);
  return nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_GetResult_plt(
      v6);
}

__int64 nn_ntc_detail_shim_GetStaticServiceSharedPointer(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  void (***v5)(_QWORD);
  __int64 v6;
  unsigned int v7;
  _QWORD v9[3];
  __int64 v10;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f6ed64);
  if (SdkData_f6ed60 == 1) {
    v2 = SdkData_f6ed68;
    if (SdkData_f6ed68 != 0) {
      (**(void (***)(__int64))SdkData_f6ed68)(SdkData_f6ed68);
    }
    v3 = *a1;
    *a1 = v2;
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    }
    v4 = 0;
    goto LABEL_20;
  }
  v9[2] = 0;
  v9[0] = &SdkData_f6ed90;
  v9[1] = "ntc";
  nn_os_SdkMutexType_Lock_plt(&SdkData_f6ed70);
  if (SdkData_f6ed74 != 0) {
    if (SdkData_f6ed78 == 0) {
      SdkData_f6ed78 = (__int64)SdkRoutine_5dcef0;
      SdkData_f6ed80 = (__int64)&SdkData_f6ed90;
    }
    ++SdkData_f6ed74;
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f6ed70);
    v5 = (void (***)(_QWORD))SdkData_f6ed68;
    if (SdkData_f6ed68 != 0) {
    LABEL_11:
      (**v5)(v5);
    }
  LABEL_12:
    v6 = *a1;
    *a1 = (__int64)v5;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    }
    v4 = 0;
    SdkData_f6ed60 = 1;
    goto LABEL_20;
  }
  v10 = 0;
  v7 = SdkRoutine_5dca00(v9, &v10);
  if (v7 == 0) {
    SdkData_f6ed74 = 1;
    SdkData_f6ed68 = v10;
    SdkData_f6ed78 = (__int64)SdkRoutine_5dcef0;
    SdkData_f6ed80 = (__int64)&SdkData_f6ed90;
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f6ed70);
    v5 = (void (***)(_QWORD))SdkData_f6ed68;
    if (SdkData_f6ed68 == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v4 = v7;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f6ed70);
LABEL_20:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f6ed64);
  return v4;
}

#pragma GCC visibility pop
