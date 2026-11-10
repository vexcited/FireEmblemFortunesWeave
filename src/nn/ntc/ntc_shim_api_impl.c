#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_Cancel_plt(
    void* this_);
__int64
    nn_ntc_shim_CorrectionNetworkClockAsyncTask_CorrectionNetworkClockAsyncTask_plt(
        _QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
extern _UNKNOWN SdkData_ea3950;
extern _UNKNOWN SdkData_f6ecd0;
extern _UNKNOWN SdkData_f6ece0;
extern __int64 SdkData_f6ecd8;
__int64 nn_ntc_shim_CancelEnsuringNetworkClockAvailability(void* this_);

__int64 nn_ntc_shim_CancelEnsuringNetworkClockAvailability(void* this_)
{
  void* v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6ecd0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f6ecd0) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f6ecd0);
  }
  nn_os_LockMutex_plt(&SdkData_ea3950);
  v1 = (void*)SdkData_f6ecd8;
  if (SdkData_f6ecd8 == 0) {
    v1 = (void*)&SdkData_f6ece0;
    nn_ntc_shim_CorrectionNetworkClockAsyncTask_CorrectionNetworkClockAsyncTask_plt(
        &SdkData_f6ece0, 1, 0);
    SdkData_f6ecd8 = (__int64)&SdkData_f6ece0;
  }
  nn_os_UnlockMutex_plt(&SdkData_ea3950);
  return nn_ntc_detail_shim_EnsureNetworkClockAvailabilityClientImpl_Cancel_plt(
      v1);
}

#pragma GCC visibility pop
