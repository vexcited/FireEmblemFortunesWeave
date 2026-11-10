#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_demangle_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_get_globals_fast_plt(void);
__int64 __cxxabiv1___getExceptionClass(_QWORD);
__int64 nnosNotifyDebugger_plt(_QWORD, _QWORD, _QWORD);
bool __cxxabiv1___isOurExceptionClass(_QWORD*);
extern __int64 SdkData_e897f8;
extern char* SdkData_ea94b0;
extern void (*SdkData_e892f8[178])();
void __attribute__((noreturn)) SdkRoutine_84c1f0(__int64, ...);
void __attribute__((noreturn)) std_terminate_plt(_QWORD);
void __attribute__((noreturn)) demangling_terminate_handler();
void __attribute__((noreturn)) demangling_unexpected_handler(__int64 a1);
unsigned __int64 std_set_unexpected(void(__attribute__((noreturn)) *
                                         a1)(__int64 a1));

void __attribute__((noreturn)) demangling_terminate_handler()
{
  _QWORD* v0;
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  const char* v4;
  __int64 v5;
  char v6;
  const char* v7;
  const char* v8;
  _QWORD* v9;

  v0 = (_QWORD*)__cxa_get_globals_fast_plt();
  if (v0 == nullptr || (v1 = (_QWORD*)*v0, *v0 == 0)) {
    SdkRoutine_84c1f0((__int64)"libc++abi: terminating");
  }
  if (__cxxabiv1___isOurExceptionClass(v1 + 12)) {
    if (__cxxabiv1___getExceptionClass(v1 + 12) == 0x434C4E47432B2B01LL) {
      v2 = (_QWORD*)v1[1];
    }
    else {
      v2 = v1 + 16;
    }
    v3 = v1[2];
    v9 = v2;
    v4 = *(const char**)(v3 + 8);
    v5 = __cxa_demangle_plt(v4, 0, 0, 0);
    if (v5 != 0) {
      v4 = (const char*)v5;
    }
    v6 =
        (*(__int64 (**)(void(__attribute__((noreturn))*)(), __int64, _QWORD**))(
            *(_QWORD*)SdkData_e892f8[0] + 32LL))(SdkData_e892f8[0], v3, &v9);
    nnosNotifyDebugger_plt(0, 0, 0);
    if ((v6 & 1) != 0) {
      v7 = SdkData_ea94b0;
      v8 = (const char*)(*(__int64 (**)(_QWORD*))(*v9 + 16LL))(v9);
      SdkRoutine_84c1f0(
          (__int64)"libc++abi: terminating due to %s exception of type %s: %s",
          v7, v4, v8);
    }
    SdkRoutine_84c1f0(
        (__int64)"libc++abi: terminating due to %s exception of type %s",
        SdkData_ea94b0, v4);
  }
  SdkRoutine_84c1f0(
      (__int64)"libc++abi: terminating due to %s foreign exception",
      SdkData_ea94b0);
}

void __attribute__((noreturn)) demangling_unexpected_handler(__int64 a1)
{
  SdkData_ea94b0 = "unexpected";
  std_terminate_plt(a1);
}

unsigned __int64 std_set_unexpected(void(__attribute__((noreturn)) *
                                         a1)(__int64 a1))
{
  void(__attribute__((noreturn)) * v1)(__int64);

  v1 = demangling_unexpected_handler;
  if (a1 != nullptr) {
    v1 = a1;
  }
  return atomic_exchange((atomic_ullong* volatile)SdkData_e897f8,
                         (unsigned __int64)v1);
}

#pragma GCC visibility pop
