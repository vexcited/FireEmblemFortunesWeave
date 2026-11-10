#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_audio_sysdev_server_CreateSessionManagerByHipc_plt(PSEUDO_X8);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
extern _UNKNOWN SdkData_f26ef0;
extern __int64 SdkData_f26ee8;
__int64 (***adspshell_27b6f0(_QWORD* a1))(_QWORD);

__int64 (***adspshell_27b6f0(_QWORD* a1))(_QWORD)
{
  __int64 (***result)(_QWORD);
  __int64 v3;
  __int64* v4;
  int v5;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f26ef0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f26ef0) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f26ef0);
  }
  result = (__int64 (***)(_QWORD))SdkData_f26ee8;
  if (SdkData_f26ee8 != 0) {
    *a1 = SdkData_f26ee8;
    return (__int64 (***)(_QWORD))(**result)(result);
  }
  nn_audio_sysdev_server_CreateSessionManagerByHipc_plt((void*)(&v3));
  v4 = &SdkData_f26ee8;
  v5 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v3 + 32LL))(v3, &v4);
  if (v5 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
  }
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  result = (__int64 (***)(_QWORD))SdkData_f26ee8;
  *a1 = SdkData_f26ee8;
  if (result != nullptr) {
    return (__int64 (***)(_QWORD))(**result)(result);
  }
  return result;
}

#pragma GCC visibility pop
