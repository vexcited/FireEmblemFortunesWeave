#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_7d7030(_QWORD, _QWORD);
__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxa_allocate_exception_plt(_QWORD);
__int64 __cxa_free_exception_plt(_QWORD);
__int64 __cxa_throw_plt(_QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e89350;
extern __int64 SdkData_e89358;
void __attribute__((noreturn)) hash_7d6fd0(__int64 a1);

void __attribute__((noreturn)) hash_7d6fd0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = __cxa_allocate_exception_plt(16);
  SdkRoutine_7d7030(v2, a1);
  v3 = __cxa_throw_plt(v2, SdkData_e89350, SdkData_e89358);
  __cxa_free_exception_plt(v2);
  _Unwind_Resume_plt(v3);
  __udf(0);
}

#pragma GCC visibility pop
