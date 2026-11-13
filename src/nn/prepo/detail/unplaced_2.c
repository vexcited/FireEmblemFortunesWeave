#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt();
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_os_SignalSystemEvent_plt(__int64);
__int64 nn_prepo_GetOverSaveFrequencyLimitEvent_plt(void);
__int64 nn_prepo_GetOverSendFrequencyLimitEvent_plt();
__int64 nn_prepo_detail_5a9f60(__int64*);
extern _UNKNOWN SdkData_f6a048;
extern _UNKNOWN SdkData_f6a04c;
extern _UNKNOWN SdkData_f6a050;
extern _UNKNOWN SdkData_f6a058;
extern __int64 SdkData_f667e8[];
extern __int64 SdkData_f667f0;
extern __int64 SdkData_f68418[];
extern __int64 SdkData_f68420;
int __cxa_guard_acquire_plt(__int64);
void __cxa_guard_release_plt(__int64);
bool nn_prepo_detail_5a9900();
bool nn_prepo_detail_5a9c80();

bool nn_prepo_detail_5a9900()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;

  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_f6a048);
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6a050,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_plt((__int64)&SdkData_f6a050) != 0) {
    nn_prepo_detail_5a9f60(SdkData_f667e8);
    __cxa_guard_release_plt((__int64)&SdkData_f6a050);
  }
  v0 = nn_os_GetSystemTick_plt();
  v1 = nn_os_ConvertToTimeSpan_plt(
      v0 - SdkData_f667e8[SdkData_f667f0 % 0x384uLL + 2]);
  v2 = SdkData_f667e8[0];
  v3 = v1;
  if (v1 < SdkData_f667e8[0]) {
    v5 = nn_prepo_GetOverSaveFrequencyLimitEvent_plt();
    nn_os_SignalSystemEvent_plt(v5);
  }
  else {
    v4 = SdkData_f667f0++ % 0x384uLL;
    SdkData_f667e8[v4 + 2] = v0;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f6a048);
  return v3 >= v2;
}

bool nn_prepo_detail_5a9c80()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;

  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_f6a04c);
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6a058,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_plt((__int64)&SdkData_f6a058) != 0) {
    nn_prepo_detail_5a9f60(SdkData_f68418);
    __cxa_guard_release_plt((__int64)&SdkData_f6a058);
  }
  v0 = nn_os_GetSystemTick_plt();
  v1 = nn_os_ConvertToTimeSpan_plt(
      v0 - SdkData_f68418[SdkData_f68420 % 0x384uLL + 2]);
  v2 = SdkData_f68418[0];
  v3 = v1;
  if (v1 < SdkData_f68418[0]) {
    v5 = nn_prepo_GetOverSendFrequencyLimitEvent_plt();
    nn_os_SignalSystemEvent_plt(v5);
  }
  else {
    v4 = SdkData_f68420++ % 0x384uLL;
    SdkData_f68418[v4 + 2] = v0;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f6a04c);
  return v3 >= v2;
}

#pragma GCC visibility pop
