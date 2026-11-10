#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 _Unwind_Resume_plt_alt1(_QWORD) __asm__("_Unwind_Resume_plt");
__int64 __cxa_allocate_exception_plt(_QWORD);
__int64 __cxa_free_exception_plt(_QWORD);
__int64 __cxa_throw_plt(_QWORD, _QWORD, _QWORD);
__int64 std___1_system_error_system_error_plt_87cc20(_QWORD, _QWORD, _QWORD,
                                                     _QWORD);
double _Unwind_Resume_plt(_QWORD);
extern _UNKNOWN* SdkData_ea9418;
extern __int64 SdkData_e89320;
extern __int64 SdkData_e893e8;
void std___1_system_error_Destroy_system_error_7e50b0(void* this_);
void __attribute__((noreturn))
system_error_7e4988(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11, __int64 a12, __int64 a13, __int64 a14);
void __attribute__((noreturn))
system_error_7e4ac8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11, __int64 a12);
void __attribute__((noreturn))
system_error_7e4c08(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11, __int64 a12, __int64 a13, __int64 a14);
void __attribute__((noreturn))
system_error_7e4d08(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11, __int64 a12);
void __attribute__((noreturn))
system_error_7e4dfc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11);
void __attribute__((noreturn))
system_error_7e4f8c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11);
void system_error_7e508c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10, __int64 a11, __int64 a12);
void __attribute__((noreturn)) std___1___throw_system_error(unsigned int a1,
                                                            const char* a2);
void __attribute__((noreturn)) system_error_7e5110(__int64 a1, __int64 a2,
                                                   __int64 a3);
void __attribute__((noreturn))

system_error_7e4988(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  if ((a12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

system_error_7e4ac8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11, __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

system_error_7e4c08(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  if ((a12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

system_error_7e4d08(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11, __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

system_error_7e4dfc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11)
{
  __int64 v11;

  if ((*(_BYTE*)(v11 - 24) & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v11 - 8),
                      *(_QWORD*)(v11 - 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

system_error_7e4f8c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
                    __int64 a11)
{
  __int64 v11;

  if ((*(_BYTE*)(v11 - 24) & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v11 - 8),
                      *(_QWORD*)(v11 - 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void system_error_7e508c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10, __int64 a11, __int64 a12)
{
  void* v13;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  v13 = (void*)_Unwind_Resume_plt_alt1(a1);
  std___1_system_error_Destroy_system_error_7e50b0(v13);
}

void __attribute__((noreturn)) std___1___throw_system_error(unsigned int a1,
                                                            const char* a2)
{
  system_error_7e5110(a1, (__int64)&SdkData_ea9418, (__int64)a2);
}

void __attribute__((noreturn)) system_error_7e5110(__int64 a1, __int64 a2,
                                                   __int64 a3)
{
  __int64 v6;
  __int64 v7;

  v6 = __cxa_allocate_exception_plt(32);
  std___1_system_error_system_error_plt_87cc20(v6, a1, a2, a3);
  v7 = __cxa_throw_plt(v6, SdkData_e89320, SdkData_e893e8);
  __cxa_free_exception_plt(v6);
  _Unwind_Resume_plt_alt1(v7);
  __udf(0);
}

#pragma GCC visibility pop
