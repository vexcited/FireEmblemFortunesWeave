#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_abort_plt(_QWORD);
__int64 nn_os_GetThreadAvailableCoreMask_plt(_QWORD, _QWORD);
double _Unwind_Resume_plt(_QWORD);
extern _UNKNOWN SdkData_105ff98;
void __attribute__((noreturn)) ios_instantiations_7d3940(__int64);
void __attribute__((noreturn)) thread_7d5da0();
unsigned __int64 std___1_thread_hardware_concurrency(void* this_, __int64 a2);
void __attribute__((noreturn)) thread_7e7cd4(__int64 a1);

void __attribute__((noreturn)) thread_7d5da0()
{
  ios_instantiations_7d3940((__int64)"vector");
}

unsigned __int64 std___1_thread_hardware_concurrency(void* this_, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;

  v2 = nn_os_GetThreadAvailableCoreMask_plt(this_, a2);
  v3 =
      ((v2 - ((v2 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL) +
      (((v2 - ((v2 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  return (0x101010101010101LL * ((v3 + (v3 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
}

void __attribute__((noreturn)) thread_7e7cd4(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_105ff98);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

#pragma GCC visibility pop
