#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_allocate_exception_plt(_QWORD);
__int64 __cxa_throw_plt(_QWORD, _QWORD, _QWORD);
__int64 std_bad_array_new_length_bad_array_new_length_plt(void);
__int64 std_bad_cast_bad_cast_plt(void);
__int64 std_bad_typeid_bad_typeid_plt(void);
extern __int64 SdkData_e892e0;
extern __int64 SdkData_e89328;
extern __int64 SdkData_e89330;
extern __int64 SdkData_e894c8;
extern __int64 SdkData_e897e8;
extern __int64 SdkData_e897f0;
void __attribute__((noreturn)) __cxa_bad_cast();
void __attribute__((noreturn)) __cxa_bad_typeid();
void __attribute__((noreturn)) __cxa_throw_bad_array_new_length();

void __attribute__((noreturn)) __cxa_bad_cast()
{
  __int64 v0;

  v0 = __cxa_allocate_exception_plt(8);
  std_bad_cast_bad_cast_plt();
  __cxa_throw_plt(v0, SdkData_e892e0, SdkData_e894c8);
  __udf(0);
}

void __attribute__((noreturn)) __cxa_bad_typeid()
{
  __int64 v0;

  v0 = __cxa_allocate_exception_plt(8);
  std_bad_typeid_bad_typeid_plt();
  __cxa_throw_plt(v0, SdkData_e897e8, SdkData_e897f0);
  __udf(0);
}

void __attribute__((noreturn)) __cxa_throw_bad_array_new_length()
{
  __int64 v0;

  v0 = __cxa_allocate_exception_plt(8);
  std_bad_array_new_length_bad_array_new_length_plt();
  __cxa_throw_plt(v0, SdkData_e89328, SdkData_e89330);
  __udf(0);
}

#pragma GCC visibility pop
