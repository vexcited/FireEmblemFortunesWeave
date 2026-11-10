#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_132de0(void);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_result_detail_ConvertInvalidImpl_plt(_QWORD);
extern _UNKNOWN SdkData_eb0b78;
extern __int64 SdkData_eb0b70;
__int64 htc_target_environment_variable_132aa0(__int64* a1);

__int64 htc_target_environment_variable_132aa0(__int64* a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eb0b78,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_eb0b78) != 0) {
    SdkRoutine_132de0();
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_eb0b78);
  }
  v3 = 0;
  v4 = &v3;
  result = (*(__int64 (**)(__int64, __int64**, _QWORD))(
      *(_QWORD*)SdkData_eb0b70 + 32LL))(SdkData_eb0b70, &v4, 0);
  if ((_DWORD)result != 0) {
    nn_result_detail_ConvertInvalidImpl_plt((unsigned int)result);
    result = v3;
    *a1 = 0;
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  else {
    *a1 = v3;
  }
  return result;
}

#pragma GCC visibility pop
