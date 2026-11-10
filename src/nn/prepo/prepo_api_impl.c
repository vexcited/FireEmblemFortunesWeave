#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5a85f0(__int64, __int64, __int64);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_os_ConvertToTick_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
extern _UNKNOWN SdkData_f66700;
extern _UNKNOWN SdkData_f66708;
extern _UNKNOWN SdkData_f66710;
extern _UNKNOWN SdkData_f66740;
__int64 prepo_api_5a8490(_QWORD* a1);
void* nn_prepo_GetOverSaveFrequencyLimitEvent(void* this_);
void* nn_prepo_GetOverSendFrequencyLimitEvent();

__int64 prepo_api_5a8490(_QWORD* a1)
{
  __int64 v2;
  __int64 result;

  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  *a1 = 600000000000LL;
  a1[1] = 0;
  v2 = nn_os_GetSystemTick_plt(a1);
  result = nn_os_ConvertToTick_plt(*a1);
  a1[2] = v2 - result;
  a1[3] = v2 - result;
  a1[4] = v2 - result;
  a1[5] = v2 - result;
  a1[6] = v2 - result;
  a1[7] = v2 - result;
  a1[8] = v2 - result;
  a1[9] = v2 - result;
  a1[10] = v2 - result;
  a1[11] = v2 - result;
  return result;
}

void* nn_prepo_GetOverSaveFrequencyLimitEvent(void* this_)
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f66700,
                            memory_order_acquire) &
       1) != 0) {
    return &SdkData_f66710;
  }
  if ((unsigned int)__cxa_guard_acquire_plt(&SdkData_f66700) != 0) {
    SdkRoutine_5a85f0((__int64)&SdkData_f66710, 0, 0);
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f66700);
  }
  return &SdkData_f66710;
}

void* nn_prepo_GetOverSendFrequencyLimitEvent()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f66708,
                            memory_order_acquire) &
       1) != 0) {
    return &SdkData_f66740;
  }
  if ((unsigned int)__cxa_guard_acquire_plt(&SdkData_f66708) != 0) {
    SdkRoutine_5a85f0((__int64)&SdkData_f66740, 0, 0);
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f66708);
  }
  return &SdkData_f66740;
}

#pragma GCC visibility pop
