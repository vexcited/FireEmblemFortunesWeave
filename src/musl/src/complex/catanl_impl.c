#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_8546b0(long double);
__int64 __gttf2(long double, long double);
extern _UNKNOWN SdkData_bb06b0;
extern __int128 SdkData_bb0ef0;
extern __int128 SdkData_bb1aa0;
extern __int128 SdkData_bb2850;
extern __int128 SdkData_bb3590;
extern __int128 SdkData_bb35a0;
extern __int128 SdkData_bb4110;
extern __int128 SdkData_bb4750;
extern __int128 SdkData_bb4cb0;
extern __int128 SdkData_bb50b0;
float __trunctfsf2(long double);
long double SdkRoutine_853f10(long double, long double);
long double SdkRoutine_854fd0(long double, long double);
long double __addtf3(long double, long double);
long double __extendsftf2(float);
long double __floatditf(_QWORD);
long double __subtf3(long double, long double);
long double atan2l_plt(long double, long double);
long double logl_plt(long double);
long double catanl(long double a1, long double a2);

long double catanl(long double a1, long double a2)
{
  long double v2;
  long double v3;
  long double v4;
  int v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  long double v9;
  long double v10;
  long double v11;
  long double v12;
  long double v13;
  long double v14;
  long double v15;
  long double v16;
  float v17;
  long double v18;
  long double v19;
  float v20;
  long double v22;
  long double v23;
  long double v24;
  long double v25;
  long double v26;
  long double v27;
  long double v29;
  long double v30;
  long double v31;
  long double v32;
  long double v34;
  long double v35;

  v32 = ((long double (*)(void))SdkRoutine_854fd0)();
  v22 = ((long double (*)(void))__subtf3)();
  v2 = SdkRoutine_854fd0(a2, a2);
  v23 = __subtf3(v22, v2);
  v3 = __addtf3(a1, a1);
  v4 = atan2l_plt(v3, v23);
  v24 = SdkRoutine_854fd0(v4, *(long double*)&SdkData_bb2850);
  v29 = SdkRoutine_853f10(v24, *(long double*)&SdkData_bb50b0);
  v5 = __gttf2(v29, *(long double*)&SdkData_bb4110);
  v6 = 16;
  if (v5 >= 0) {
    v6 = 0;
  }
  v7 = __addtf3(v29, *(long double*)((char*)&SdkData_bb06b0 + v6));
  v8 = SdkRoutine_8546b0(v7);
  v30 = __floatditf(v8);
  v9 = SdkRoutine_854fd0(v30, *(long double*)&SdkData_bb4cb0);
  v25 = __addtf3(v24, v9);
  v10 = SdkRoutine_854fd0(v30, *(long double*)&SdkData_bb4750);
  v26 = __addtf3(v25, v10);
  v11 = SdkRoutine_854fd0(v30, *(long double*)&SdkData_bb35a0);
  v31 = __addtf3(v26, v11);
  v12 = __addtf3(a2, *(long double*)&SdkData_bb1aa0);
  v13 = SdkRoutine_854fd0(v12, v12);
  v27 = __addtf3(v13, v32);
  v14 = __addtf3(a2, *(long double*)&SdkData_bb3590);
  v15 = SdkRoutine_854fd0(v14, v14);
  v16 = __addtf3(v15, v32);
  v34 = SdkRoutine_853f10(v16, v27);
  v17 = __trunctfsf2(v31);
  v18 = logl_plt(v34);
  v19 = SdkRoutine_854fd0(v18, *(long double*)&SdkData_bb0ef0);
  v20 = __trunctfsf2(v19);
  v35 = __extendsftf2(v17);
  __extendsftf2(v20);
  return v35;
}

#pragma GCC visibility pop
