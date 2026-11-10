#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 _Unwind_Resume_plt_alt1(_QWORD) __asm__("_Unwind_Resume_plt");
__int64 __cxa_guard_abort_plt(_QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 locale_7f6d40();
__int64 std___1_locale_Destroy_locale_plt(_QWORD);
__int64 std___1_locale_locale_plt_86ee50(_QWORD);
__int64 std___1_locale_locale_plt_87cd70(_QWORD, _QWORD);
__int64 std___1_locale_use_facet_plt(_QWORD, _QWORD);
double _Unwind_Resume_plt(_QWORD);
extern _UNKNOWN SdkData_1060830;
extern _UNKNOWN SdkData_e7f470;
extern _UNKNOWN SdkData_e7f5a0;
extern __int64 SdkData_e888e8;
extern __int64 SdkData_e89470;
extern void (*SdkData_e894c0[121])();
extern void (*SdkData_e89530[107])();
void std___1_ios_base_Init_Init(void* this_);
void __attribute__((noreturn)) iostream_7f7354(__int64 a1);
__int64 std___1___stdinbuf_Destroy___stdinbuf_7f7380(_QWORD* a1);
__int64 iostream_7f7760(__int64 a1, __int64 a2, __int64 a3);
void __attribute__((noreturn))
iostream_7f780c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10);
__int64 std___1___stdoutbuf_Destroy___stdoutbuf_7f7830(_QWORD* a1);
__int64 std___1___stdinbuf_Destroy___stdinbuf_7f7ba0(_QWORD* a1);
__int64 iostream_7f7f70(__int64 a1, __int64 a2, __int64 a3);
void __attribute__((noreturn))
iostream_7f801c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10);
__int64 std___1___stdoutbuf_Destroy___stdoutbuf_7f8040(_QWORD* a1);

void std___1_ios_base_Init_Init(void* this_)
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1060830,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1060830) != 0) {
    locale_7f6d40();
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_1060830);
  }
}

void __attribute__((noreturn)) iostream_7f7354(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060830);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1___stdinbuf_Destroy___stdinbuf_7f7380(_QWORD* a1)
{
  *a1 = SdkData_e888e8 + 16;
  std___1_locale_Destroy_locale_plt(a1 + 1);
  return SdkRoutine_857220(a1, 104);
}

__int64 iostream_7f7760(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 result;
  _BYTE v9[8];

  *(_QWORD*)a1 = SdkData_e888e8 + 16;
  std___1_locale_locale_plt_86ee50(a1 + 8);
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 64) = a2;
  *(_QWORD*)a1 = &SdkData_e7f470;
  std___1_locale_locale_plt_87cd70(v9, a1 + 8);
  v6 = (__int64*)std___1_locale_use_facet_plt(v9, SdkData_e894c0[0]);
  std___1_locale_Destroy_locale_plt(v9);
  v7 = *v6;
  *(_QWORD*)(a1 + 72) = v6;
  *(_QWORD*)(a1 + 80) = a3;
  result = (*(__int64 (**)(__int64*))(v7 + 56))(v6);
  *(_BYTE*)(a1 + 88) = result & 1;
  return result;
}

void __attribute__((noreturn))

iostream_7f780c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10)
{
  _QWORD* v10;
  __int64 v11;

  std___1_locale_Destroy_locale_plt(&a10);
  *v10 = v11;
  std___1_locale_Destroy_locale_plt(v10 + 1);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1___stdoutbuf_Destroy___stdoutbuf_7f7830(_QWORD* a1)
{
  *a1 = SdkData_e888e8 + 16;
  std___1_locale_Destroy_locale_plt(a1 + 1);
  return SdkRoutine_857220(a1, 96);
}

__int64 std___1___stdinbuf_Destroy___stdinbuf_7f7ba0(_QWORD* a1)
{
  *a1 = SdkData_e89470 + 16;
  std___1_locale_Destroy_locale_plt(a1 + 1);
  return SdkRoutine_857220(a1, 104);
}

__int64 iostream_7f7f70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 result;
  _BYTE v9[8];

  *(_QWORD*)a1 = SdkData_e89470 + 16;
  std___1_locale_locale_plt_86ee50(a1 + 8);
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 64) = a2;
  *(_QWORD*)a1 = &SdkData_e7f5a0;
  std___1_locale_locale_plt_87cd70(v9, a1 + 8);
  v6 = (__int64*)std___1_locale_use_facet_plt(v9, SdkData_e89530[0]);
  std___1_locale_Destroy_locale_plt(v9);
  v7 = *v6;
  *(_QWORD*)(a1 + 72) = v6;
  *(_QWORD*)(a1 + 80) = a3;
  result = (*(__int64 (**)(__int64*))(v7 + 56))(v6);
  *(_BYTE*)(a1 + 88) = result & 1;
  return result;
}

void __attribute__((noreturn))

iostream_7f801c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10)
{
  _QWORD* v10;
  __int64 v11;

  std___1_locale_Destroy_locale_plt(&a10);
  *v10 = v11;
  std___1_locale_Destroy_locale_plt(v10 + 1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1___stdoutbuf_Destroy___stdoutbuf_7f8040(_QWORD* a1)
{
  *a1 = SdkData_e89470 + 16;
  std___1_locale_Destroy_locale_plt(a1 + 1);
  return SdkRoutine_857220(a1, 96);
}

#pragma GCC visibility pop
