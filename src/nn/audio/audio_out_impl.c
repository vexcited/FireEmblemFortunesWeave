#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_audio_CreateUserClientSessionByHipc_plt(PSEUDO_X8);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 audio_out_1e7d70_alt1(_QWORD) __asm__("audio_out_1e7d70");
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_result_detail_ConvertInvalidImpl_plt(_QWORD);
extern _UNKNOWN SdkData_f05e30;
extern __int64 SdkData_f05e28;
__int64 nn_audio_ListAudioOuts(__int64 a1, int a2);
__int64 (***audio_out_1e7d70(_QWORD* a1))(_QWORD);

__int64 nn_audio_ListAudioOuts(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v5;
  _QWORD v6[2];
  unsigned int v7;

  v7 = 0;
  if (a2 >= 1) {
    v5 = 0;
    v6[0] = a1;
    v6[1] = (unsigned __int64)(unsigned int)a2 << 8;
    audio_out_1e7d70_alt1(&v5);
    v2 = v5;
    v3 = (*(__int64 (**)(__int64, _QWORD*, unsigned int*))(*(_QWORD*)v5 +
                                                           48LL))(v5, v6, &v7);
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
      return v7;
    }
    nn_result_detail_ConvertInvalidImpl_plt(v3);
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  return 0;
}

__int64 (***audio_out_1e7d70(_QWORD* a1))(_QWORD)
{
  __int64 (***result)(_QWORD);
  __int64* v3;
  __int64* v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f05e30,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f05e30) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f05e30);
  }
  result = (__int64 (***)(_QWORD))SdkData_f05e28;
  if (SdkData_f05e28 != 0) {
    *a1 = SdkData_f05e28;
    return (__int64 (***)(_QWORD))(**result)(result);
  }
  nn_audio_CreateUserClientSessionByHipc_plt((void*)(&v4));
  v3 = v4;
  v4 = &SdkData_f05e28;
  LODWORD(v4) = (*(__int64 (**)(__int64*, __int64**))(*v3 + 40))(v3, &v4);
  if ((_DWORD)v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v4);
  }
  (*(void (**)(__int64*))(*v3 + 8))(v3);
  result = (__int64 (***)(_QWORD))SdkData_f05e28;
  *a1 = SdkData_f05e28;
  if (result != nullptr) {
    return (__int64 (***)(_QWORD))(**result)(result);
  }
  return result;
}

#pragma GCC visibility pop
