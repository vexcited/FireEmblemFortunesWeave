#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_853880(_QWORD);
__int64 unwind_phase2(_QWORD, _QWORD, _QWORD);
__int64 unwind_phase2_forced(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_aeb60(const char*, ...);
void __attribute__((noreturn)) _Unwind_Resume(__int64 a1);

void __attribute__((noreturn)) _Unwind_Resume(__int64 a1)
{
  __int64 v2;
  _BYTE v3[624];
  _BYTE v4[528];

  SdkRoutine_853880(v4);
  v2 = *(_QWORD*)(a1 + 16);
  if (v2 != 0) {
    unwind_phase2_forced(v4, v3, a1, v2, *(_QWORD*)(a1 + 24));
  }
  else {
    unwind_phase2(v4, v3, a1);
  }
  SdkRoutine_aeb60(
      "libunwind: %s %s:%d - %s\n", "_Unwind_Resume",
      "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src/UnwindLevel1.c", 502,
      "_Unwind_Resume() can't return");
}

#pragma GCC visibility pop
