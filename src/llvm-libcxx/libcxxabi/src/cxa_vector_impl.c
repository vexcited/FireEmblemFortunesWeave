#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxxabiv1_(_QWORD);
__int64 __cxxabiv1__alt1(__int64 result) __asm__("__cxxabiv1_");
void SdkRoutine_85c8b0(void*, void*);
void __attribute__((noreturn)) SdkRoutine_7cd620(_QWORD);
void __attribute__((noreturn))
SdkRoutine_7cd620_alt1() __asm__("SdkRoutine_7cd620");
void __attribute__((noreturn)) std_terminate_plt(_QWORD);
void __attribute__((noreturn))
cxa_vector_84b44c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10);
void __attribute__((noreturn))
cxa_vector_84b56c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn))
cxa_vector_84b61c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn))
cxa_vector_84b730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10);
void __attribute__((noreturn))
cxa_vector_84b800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10);
void __attribute__((noreturn)) cxa_vector_84bb68(__int64 a1);
void __attribute__((noreturn))
cxa_vector_84bb6c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn))

cxa_vector_84b44c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10)
{
  void* v10;
  void* v12;

  __cxxabiv1_(&a10);
  SdkRoutine_85c8b0(v10, v12);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

cxa_vector_84b56c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  void (*v9)(__int64);
  __int64 v10;
  __int64 v12;

  __cxxabiv1_(&a9);
  v9(v10);
  v12 = _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620(v12);
}

void __attribute__((noreturn))

cxa_vector_84b61c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __cxxabiv1_(&a9);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

cxa_vector_84b730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10)
{
  void (*v10)(__int64, __int64);
  __int64 v11;
  __int64 v12;
  __int64 v14;

  __cxxabiv1_(&a10);
  v10(v12, v11);
  v14 = _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620(v14);
}

void __attribute__((noreturn))

cxa_vector_84b800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10)
{
  __cxxabiv1_(&a10);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) cxa_vector_84bb68(__int64 a1)
{
  SdkRoutine_7cd620(a1);
}

void __attribute__((noreturn))

cxa_vector_84bb6c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  char v10;
  void (*v11)(__int64);

  if ((v10 & 1) != 0) {
    std_terminate_plt(a1);
  }
  __cxxabiv1__alt1((__int64)&a9);
  v11(v9);
  _Unwind_Resume_plt(a1);
  SdkRoutine_7cd620_alt1();
}

#pragma GCC visibility pop
