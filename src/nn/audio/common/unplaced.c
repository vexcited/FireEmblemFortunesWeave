#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nn_audio_27b9d0();
extern _UNKNOWN SdkData_f26ef8;
extern __int64 SdkData_f26f00;
__int64* nn_audio_common_GetExecutionTimeoutMonitor(void* this_);

__int64* nn_audio_common_GetExecutionTimeoutMonitor(void* this_)
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f26ef8,
                            memory_order_acquire) &
       1) != 0) {
    return &SdkData_f26f00;
  }
  if ((unsigned int)__cxa_guard_acquire_plt(&SdkData_f26ef8) != 0) {
    nn_audio_27b9d0();
    __cxa_guard_release_plt(&SdkData_f26ef8);
  }
  return &SdkData_f26f00;
}

#pragma GCC visibility pop
