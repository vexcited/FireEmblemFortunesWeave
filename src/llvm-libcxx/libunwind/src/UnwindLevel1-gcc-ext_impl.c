#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) SdkRoutine_aeb60(const char*, ...);
void __attribute__((noreturn)) _Unwind_GetDataRelBase();
void __attribute__((noreturn)) _Unwind_GetTextRelBase();

void __attribute__((noreturn)) _Unwind_GetDataRelBase()
{
  SdkRoutine_aeb60(
      "libunwind: %s %s:%d - %s\n", "_Unwind_GetDataRelBase",
      "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src/UnwindLevel1-gcc-ext.c",
      71, "_Unwind_GetDataRelBase() not implemented");
}

void __attribute__((noreturn)) _Unwind_GetTextRelBase()
{
  SdkRoutine_aeb60(
      "libunwind: %s %s:%d - %s\n", "_Unwind_GetTextRelBase",
      "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src/UnwindLevel1-gcc-ext.c",
      81, "_Unwind_GetTextRelBase() not implemented");
}

#pragma GCC visibility pop
