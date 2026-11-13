#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt();
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_prepo_detail_ShimLibraryGlobal_GetSession_plt(__int64);
__int64 prepo_api_5a8490(_QWORD*);
extern _UNKNOWN SdkData_f666f0;
extern _UNKNOWN SdkData_f666f8;
extern __int64 SdkData_e88e58;
extern __int64 SdkData_f66770[];
extern __int64 SdkData_f66778;
int __cxa_guard_acquire_plt(__int64);
void __cxa_guard_release_plt(__int64);
__int64 nn_prepo_5a8370(void* this_);

__int64 nn_prepo_5a8370(void* this_)
{
  __int64 v1;
  unsigned __int64 v3;
  __int64 v4;

  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_f666f0);
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f666f8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_plt((__int64)&SdkData_f666f8) != 0) {
    prepo_api_5a8490(SdkData_f66770);
    __cxa_guard_release_plt((__int64)&SdkData_f666f8);
  }
  v1 = nn_os_GetSystemTick_plt();
  if (nn_os_ConvertToTimeSpan_plt(
          v1 - SdkData_f66770[SdkData_f66778 % 0xAuLL + 2]) >=
      SdkData_f66770[0]) {
    v3 = SdkData_f66778++ % 0xAuLL;
    *((_QWORD*)&SdkData_f666f0 + v3 + 18) = v1;
    nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f666f0);
    v4 = nn_prepo_detail_ShimLibraryGlobal_GetSession_plt(SdkData_e88e58);
    return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 96LL))(v4);
  }
  else {
    nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f666f0);
    return 0;
  }
}

#pragma GCC visibility pop
