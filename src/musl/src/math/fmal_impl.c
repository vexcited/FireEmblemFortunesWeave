#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __netf2(long double, long double);
__int64 nextafterl_plt(long double, long double);
__int64 scalbnl_plt(_QWORD);
extern __int128 SdkData_bb1400;
extern __int128 SdkData_bb3800;
extern __int128 SdkData_bb4110;
long double SdkRoutine_854fd0(long double, long double);
long double __addtf3(long double, long double);
long double __subtf3(long double, long double);
long double dd_mul(long double a1, long double a2);
long double fmal_7b76c0(long double a1, long double a2);
long double add_adjusted(long double a1, long double a2);
__int64 add_and_denormalize(unsigned int a1, long double a2, long double a3);

long double dd_mul(long double a1, long double a2)
{
  long double v2;
  long double v3;
  long double v4;
  long double v5;
  long double v6;
  long double v8;
  long double v9;
  long double v10;
  long double v11;
  long double v12;
  long double v13;
  long double v14;
  long double v15;
  long double v16;
  long double v18;
  long double v20;

  v14 = SdkRoutine_854fd0(a1, *(long double*)&SdkData_bb3800);
  v2 = __subtf3(a1, v14);
  v15 = __addtf3(v14, v2);
  v18 = __subtf3(a1, v15);
  v11 = SdkRoutine_854fd0(a2, *(long double*)&SdkData_bb3800);
  v3 = __subtf3(a2, v11);
  v8 = __addtf3(v11, v3);
  v20 = __subtf3(a2, v8);
  v12 = SdkRoutine_854fd0(v15, v8);
  v9 = SdkRoutine_854fd0(v18, v8);
  v4 = SdkRoutine_854fd0(v15, v20);
  v10 = __addtf3(v4, v9);
  v16 = __addtf3(v12, v10);
  v5 = __subtf3(v12, v16);
  v13 = __addtf3(v10, v5);
  v6 = SdkRoutine_854fd0(v18, v20);
  __addtf3(v6, v13);
  return v16;
}

long double fmal_7b76c0(long double a1, long double a2)
{
  long double v2;
  long double v3;
  long double v5;
  long double v8;
  long double v9;

  v9 = __addtf3(a1, a2);
  v5 = __subtf3(v9, a1);
  v2 = __subtf3(v9, v5);
  v8 = __subtf3(a1, v2);
  v3 = __subtf3(a2, v5);
  __addtf3(v3, v8);
  return v9;
}

long double add_adjusted(long double a1, long double a2)
{
  long double v2;
  long double v3;
  long double v4;
  long double result;
  long double v6;
  long double v9;
  long double v10;
  long double v11;

  v11 = __addtf3(a1, a2);
  v6 = __subtf3(v11, a1);
  v2 = __subtf3(v11, v6);
  v9 = __subtf3(a1, v2);
  v3 = __subtf3(a2, v6);
  v10 = __addtf3(v3, v9);
  if ((unsigned int)__netf2(v10, *(long double*)&SdkData_bb4110) == 0 ||
      (LOBYTE(v11) & 1) != 0) {
    return v11;
  }
  v4 = SdkRoutine_854fd0(v10, *(long double*)&SdkData_bb1400);
  nextafterl_plt(v11, v4);
  return result;
}

__int64 add_and_denormalize(unsigned int a1, long double a2, long double a3)
{
  long double v4;
  long double v5;
  long double v6;
  long double v8;
  long double v11;
  long double v12;
  long double v13;

  v13 = __addtf3(a2, a3);
  v8 = __subtf3(v13, a2);
  v4 = __subtf3(v13, v8);
  v11 = __subtf3(a2, v4);
  v5 = __subtf3(a3, v8);
  v12 = __addtf3(v5, v11);
  if ((unsigned int)__netf2(v12, *(long double*)&SdkData_bb4110) != 0 &&
      (((a1 + HIWORD(v13) == 0) ^ LODWORD(v13)) & 1) == 0) {
    v6 = SdkRoutine_854fd0(v12, *(long double*)&SdkData_bb1400);
    nextafterl_plt(v13, v6);
  }
  return scalbnl_plt(a1);
}

#pragma GCC visibility pop
