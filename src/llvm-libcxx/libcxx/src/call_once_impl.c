#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _Unwind_Resume_plt(_QWORD);
__int64 pthread_cond_broadcast_plt(_QWORD);
__int64 pthread_mutex_lock_plt(_QWORD);
__int64 pthread_mutex_unlock_plt(_QWORD);
extern _UNKNOWN SdkData_ea91e0;
extern _UNKNOWN SdkData_ea91e8;
void __attribute__((noreturn)) SdkRoutine_7cd620();
void __attribute__((noreturn)) call_once_7cd5b4(__int64 a1);
__int64 call_once_7cd5d0(__int64 result, char a2);
void __attribute__((noreturn)) call_once_7cd61c();

void __attribute__((noreturn)) call_once_7cd5b4(__int64 a1)
{
  __int64 v1;

  call_once_7cd5d0(v1, 0);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 call_once_7cd5d0(__int64 result, char a2)
{
  _QWORD* v2;

  if ((a2 & 1) == 0) {
    v2 = (_QWORD*)result;
    pthread_mutex_lock_plt(&SdkData_ea91e0);
    *v2 = 0;
    pthread_mutex_unlock_plt(&SdkData_ea91e0);
    return pthread_cond_broadcast_plt(&SdkData_ea91e8);
  }
  return result;
}

void __attribute__((noreturn)) call_once_7cd61c() { SdkRoutine_7cd620(); }

#pragma GCC visibility pop
