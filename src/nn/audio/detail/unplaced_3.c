#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_audio_detail_1eb250();
extern _UNKNOWN SdkData_f15f40;
extern __int64 SdkData_f16340;
int __cxa_guard_acquire_plt(__int64);
void __cxa_guard_release_plt(__int64);
__attribute__((swiftcall)) void nn_audio_detail_1eb1c0(PSEUDO_X8 x8_);

__attribute__((swiftcall)) void nn_audio_detail_1eb1c0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 (***result)(_QWORD);
  int v3;
  _QWORD* v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f15f40,
                            memory_order_acquire) &
       1) == 0) {
    v4 = a1;
    v3 = __cxa_guard_acquire_plt((__int64)&SdkData_f15f40);
    a1 = v4;
    if (v3 != 0) {
      nn_audio_detail_1eb250();
      __cxa_guard_release_plt((__int64)&SdkData_f15f40);
      a1 = v4;
    }
  }
  result = (__int64 (***)(_QWORD))SdkData_f16340;
  *a1 = SdkData_f16340;
  if (result != nullptr) {
    (__int64 (***)(_QWORD)) (**result)(result);
    return;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
