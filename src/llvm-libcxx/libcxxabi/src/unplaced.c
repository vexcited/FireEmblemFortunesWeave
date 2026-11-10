#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxa_allocate_exception_plt(_QWORD);
__int64 __cxa_rethrow_primary_exception_plt(_QWORD);
__int64 __cxa_throw_plt(_QWORD, _QWORD, _QWORD);
__int64 __cxxabiv1_(__int64 result);
__int64 std_bad_alloc_bad_alloc_plt(void);
__int64 std_terminate_plt(_QWORD);
extern __int64 SdkData_e89380;
extern __int64 SdkData_e89388;
void __attribute__((noreturn)) SdkRoutine_7cd620(_QWORD);
void __attribute__((noreturn))
SdkRoutine_7cd620_alt1() __asm__("SdkRoutine_7cd620");
void __attribute__((noreturn))
std_terminate_plt_alt1(_QWORD) __asm__("std_terminate_plt");
void __attribute__((noreturn)) std_rethrow_exception(_QWORD* a1);
void __attribute__((noreturn)) std___throw_bad_alloc();
void __attribute__((noreturn)) llvmlibcxx_libcxxabi_84bc78(__int64 a1);
void __attribute__((noreturn))
llvmlibcxx_libcxxabi_84bc7c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, char a10);

void __attribute__((noreturn)) std_rethrow_exception(_QWORD* a1)
{
  __int64 v1;

  v1 = __cxa_rethrow_primary_exception_plt(*a1);
  std_terminate_plt(v1);
  __udf(0);
}

void __attribute__((noreturn)) std___throw_bad_alloc()
{
  __int64 v0;

  v0 = __cxa_allocate_exception_plt(8);
  std_bad_alloc_bad_alloc_plt();
  __cxa_throw_plt(v0, SdkData_e89380, SdkData_e89388);
}

void __attribute__((noreturn)) llvmlibcxx_libcxxabi_84bc78(__int64 a1)
{
  SdkRoutine_7cd620(a1);
}

void __attribute__((noreturn))

llvmlibcxx_libcxxabi_84bc7c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, char a10)
{
  __int64 v10;
  __int64 v11;
  char v12;
  void (*v13)(__int64, __int64);

  if ((v12 & 1) != 0) {
    std_terminate_plt_alt1(a1);
  }
  __cxxabiv1_((__int64)&a10);
  v13(v10, v11);
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620_alt1();
}

#pragma GCC visibility pop
