#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_bc9e0(_QWORD);
__int64 NgxRoutine_bc9e0_alt1() __asm__("NgxRoutine_bc9e0");
__int64 NgxRoutine_db240(__int64*);
__int64 _Unwind_Resume_plt(_QWORD);
void __attribute__((noreturn)) libcxx_bb690(__int64 a1);
void __attribute__((noreturn)) libcxx_bb7f4(__int64 a1);
void __attribute__((noreturn)) libcxx_bb914(__int64 a1);

void __attribute__((noreturn)) libcxx_bb690(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  NgxRoutine_bc9e0(v4 + 8);
  v7 = _Unwind_Resume_plt(a1);
  NgxRoutine_bc9e0(v1 + 8);
  v8 = _Unwind_Resume_plt(v7);
  NgxRoutine_bc9e0(v2 + 8);
  v9 = _Unwind_Resume_plt(v8);
  NgxRoutine_bc9e0(v5 + 8);
  v10 = _Unwind_Resume_plt(v9);
  NgxRoutine_bc9e0(v4 + 8);
  v11 = _Unwind_Resume_plt(v10);
  NgxRoutine_bc9e0(v3 + 8);
  _Unwind_Resume_plt(v11);
  __udf(0);
}

void __attribute__((noreturn)) libcxx_bb7f4(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v6;

  NgxRoutine_bc9e0_alt1();
  v6 = _Unwind_Resume_plt(a1);
  NgxRoutine_db240((__int64*)(v4 + 24));
  *v1 = v3;
  NgxRoutine_db240(v1 + 1);
  _Unwind_Resume_plt(v6);
  __udf(0);
}

void __attribute__((noreturn)) libcxx_bb914(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v6;

  NgxRoutine_bc9e0_alt1();
  v6 = _Unwind_Resume_plt(a1);
  NgxRoutine_db240((__int64*)(v4 + 24));
  *v1 = v3;
  NgxRoutine_db240(v1 + 1);
  _Unwind_Resume_plt(v6);
  __udf(0);
}

#pragma GCC visibility pop
