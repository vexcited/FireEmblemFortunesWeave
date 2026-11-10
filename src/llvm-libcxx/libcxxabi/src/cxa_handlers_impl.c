#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_get_globals_fast_plt(void);
__int64 __cxxabiv1___isOurExceptionClass(_QWORD);
extern __int64 SdkData_e897f8;
extern __int64 SdkData_e89800;
void __attribute__((noreturn)) SdkRoutine_7cd620(_QWORD);
void __attribute__((noreturn)) SdkRoutine_84c1f0(const char*, ...);
void __attribute__((noreturn))
std___terminate_alt1(_QWORD) __asm__("std___terminate");
void __attribute__((noreturn))
std___unexpected_alt1(void (*)(void)) __asm__("std___unexpected");
void __attribute__((noreturn)) std_terminate();
void __attribute__((noreturn)) cxa_handlers_84b2dc(__int64 a1);
void __attribute__((noreturn)) std___unexpected(void (*a1)(void));
void __attribute__((noreturn)) std_unexpected();
void __attribute__((noreturn)) std___terminate(void (*a1)(void));

void __attribute__((noreturn)) std_terminate()
{
  __int64* v0;
  __int64 v1;

  v0 = (__int64*)__cxa_get_globals_fast_plt();
  if (v0 != nullptr) {
    v1 = *v0;
    if (*v0 != 0 && (__cxxabiv1___isOurExceptionClass(v1 + 96) & 1) != 0) {
      std___terminate_alt1(*(_QWORD*)(v1 + 40));
    }
  }
  std___terminate_alt1(atomic_load_explicit(
      (atomic_ullong* volatile)SdkData_e89800, memory_order_acquire));
}

void __attribute__((noreturn)) cxa_handlers_84b2dc(__int64 a1)
{
  SdkRoutine_7cd620(a1);
}

void __attribute__((noreturn)) std___unexpected(void (*a1)(void))
{
  a1();
  SdkRoutine_84c1f0("libc++abi: unexpected_handler unexpectedly returned");
}

void __attribute__((noreturn)) std_unexpected()
{
  std___unexpected_alt1((void (*)(void))atomic_load_explicit(
      (atomic_ullong* volatile)SdkData_e897f8, memory_order_acquire));
}

void __attribute__((noreturn)) std___terminate(void (*a1)(void))
{
  a1();
  SdkRoutine_84c1f0("libc++abi: terminate_handler unexpectedly returned");
}

#pragma GCC visibility pop
