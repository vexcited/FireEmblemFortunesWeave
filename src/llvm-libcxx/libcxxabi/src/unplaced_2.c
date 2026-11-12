#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxxabiv1_(__int64 result);
void __attribute__((noreturn)) SdkRoutine_7cd620();
void __attribute__((noreturn)) std_terminate_plt(_QWORD);
void __attribute__((noreturn))
llvmlibcxx_libcxxabi_84bb6c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9);
void __attribute__((noreturn))
llvmlibcxx_libcxxabi_84bc7c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, char a10);
void __attribute__((noreturn))

llvmlibcxx_libcxxabi_84bb6c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9)
{
  __int64 v9;
  char v10;
  void (*v11)(__int64);

  if ((v10 & 1) != 0) {
    std_terminate_plt(a1);
  }
  __cxxabiv1_((__int64)&a9);
  v11(v9);
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620();
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
    std_terminate_plt(a1);
  }
  __cxxabiv1_((__int64)&a10);
  v13(v10, v11);
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620();
}

#pragma GCC visibility pop
