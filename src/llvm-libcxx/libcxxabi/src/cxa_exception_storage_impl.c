#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxxabiv1___aligned_free_with_fallback(void);
__int64 __cxxabiv1_anonymous_construct__alt1(_QWORD) __asm__(
    "__cxxabiv1_anonymous_construct_");
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_SdkAllocateTlsSlot_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_IsLockedByCurrentThread_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SetTlsValue_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_106169c;
extern char SdkData_10616a0;
extern int SdkData_1061698;
void __attribute__((noreturn)) SdkRoutine_84c1f0(const char*, ...);
__int64 __cxa_get_globals_fast();
__int64 __cxxabiv1_anonymous_construct_();
__int64 __cxxabiv1_anonymous_destruct_();

__int64 __cxa_get_globals_fast()
{
  __int64 v0;
  __int64 v1;
  __int64 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_10616a0,
                            memory_order_acquire) &
       1) != 0) {
    return nn_os_GetTlsValue_plt((unsigned int)SdkData_1061698);
  }
  v0 = nn_os_SdkMutexType_IsLockedByCurrentThread_plt(&SdkData_106169c);
  if ((v0 & 1) != 0) {
    v3 = nn_diag_detail_AbortImpl_plt_856170(v0);
    nn_os_SdkMutexType_Unlock_plt(&SdkData_106169c);
    _Unwind_Resume_plt(v3);
    __udf(0);
  }
  v1 = nn_os_SdkMutexType_Lock_plt(&SdkData_106169c);
  if ((SdkData_10616a0 & 1) == 0) {
    __cxxabiv1_anonymous_construct__alt1(v1);
    atomic_store(1u, (unsigned __int8*)&SdkData_10616a0);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_106169c);
  return nn_os_GetTlsValue_plt((unsigned int)SdkData_1061698);
}

__int64 __cxxabiv1_anonymous_construct_()
{
  __int64 result;

  result = nn_os_SdkAllocateTlsSlot_plt(&SdkData_1061698,
                                        __cxxabiv1_anonymous_destruct_);
  if ((_DWORD)result != 0) {
    SdkRoutine_84c1f0(
        "libc++abi: cannot create thread specific key for __cxa_get_globals()");
  }
  return result;
}

__int64 __cxxabiv1_anonymous_destruct_()
{
  __cxxabiv1___aligned_free_with_fallback();
  return nn_os_SetTlsValue_plt((unsigned int)SdkData_1061698, 0);
}

#pragma GCC visibility pop
