#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_328100(__int64);
extern _UNKNOWN SdkData_f29b60;
extern _UNKNOWN SdkData_f29b70;
extern __int64 SdkData_f2a570;
int __cxa_guard_acquire_plt(__int64);
void __cxa_guard_release_plt(__int64);
__attribute__((swiftcall)) void nn_codec_opus_328070(PSEUDO_X8 x8_);

__attribute__((swiftcall)) void nn_codec_opus_328070(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 (***result)(_QWORD);
  _QWORD* v3;
  int v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f29b60,
                            memory_order_acquire) &
       1) == 0) {
    v3 = a1;
    v4 = __cxa_guard_acquire_plt((__int64)&SdkData_f29b60);
    a1 = v3;
    if (v4 != 0) {
      nn_codec_328100((__int64)&SdkData_f29b70);
      __cxa_guard_release_plt((__int64)&SdkData_f29b60);
      a1 = v3;
    }
  }
  result = (__int64 (***)(_QWORD))SdkData_f2a570;
  *a1 = SdkData_f2a570;
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
