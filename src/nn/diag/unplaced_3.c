#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_859b90(const char*, const char*,
                                            const char*, int, const char*, ...);
__int64 nn_diag_detail_OnAssertionFailure_plt_859bb0(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_VLogImpl_plt(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) nn_diag_b9290(char* a1, char* a2, char* a3,
                                             int a4, char* a5, ...);
__int64 nn_diag_b9340(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, ...);
__int64 nn_diag_b97d0(__int64 a1, __int64 a2, ...);

void __attribute__((noreturn)) nn_diag_b9290(char* a1, char* a2, char* a3,
                                             int a4, char* a5, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a5);
  __builtin_va_start(va1, a5);
  nn_diag_detail_AbortImpl_plt_859b90(a1, a2, a3, a4, a5, (__int64)&va);
}

__int64 nn_diag_b9340(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, ...)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  double v13;
  __int64 v14;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  double v22;
  __int64 v23;
  __int64 v24;
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a6);
  v23 = __builtin_va_arg(va, _QWORD);
  v24 = __builtin_va_arg(va, _QWORD);
  v16 = __builtin_va_arg(va, double);
  v17 = __builtin_va_arg(va, double);
  v18 = __builtin_va_arg(va, double);
  v19 = __builtin_va_arg(va, double);
  v20 = __builtin_va_arg(va, double);
  v21 = __builtin_va_arg(va, double);
  v22 = __builtin_va_arg(va, double);
  v13 = __builtin_va_arg(va, double);
  __builtin_va_end(va);
  __builtin_va_start(va, a6);
  __builtin_va_start(va1, a6);
  return ((__int64 (*)(__int64, __int64, __int64, __int64, __int64, __int64,
                       void*, __int64, _QWORD, __int64, _QWORD, __int64, _QWORD,
                       __int64, _QWORD, __int64, _QWORD, __int64, _QWORD,
                       __int64, _QWORD, __int64, _QWORD, __int64, __int64,
                       __int64))nn_diag_detail_OnAssertionFailure_plt_859bb0)(
      a1, a2, a3, a4, a5, a6, (__int64)&va, v24, *(_QWORD*)&v16, v6,
      *(_QWORD*)&v17, v7, *(_QWORD*)&v18, v8, *(_QWORD*)&v19, v9,
      *(_QWORD*)&v20, v10, *(_QWORD*)&v21, v11, *(_QWORD*)&v22, v12,
      *(_QWORD*)&v13, v14, v23, v24);
}

__int64 nn_diag_b97d0(__int64 a1, __int64 a2, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va1, a2);
  __builtin_va_start(va, a2);
  return nn_diag_detail_VLogImpl_plt(a1, a2, (__int64)&va1);
}

#pragma GCC visibility pop
