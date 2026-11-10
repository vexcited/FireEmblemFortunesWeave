#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_8546b0();
__int64 SdkRoutine_854740();
__int64 __gttf2();
__int64 __netf2();
__int64 __rem_pio2_large(__int64, double*, int, int, int, double);
double __trunctfdf2();
extern __int128 SdkData_bb11a0;
extern __int128 SdkData_bb16e0;
extern __int128 SdkData_bb1aa0;
extern __int128 SdkData_bb26f0;
extern __int128 SdkData_bb2e50;
extern __int128 SdkData_bb3590;
extern __int128 SdkData_bb3a60;
extern __int128 SdkData_bb3e20;
extern __int128 SdkData_bb4090;
extern __int128 SdkData_bb49a0;
extern __int128 SdkData_bb4f10;
extern __int128 SdkData_bb4f20;
long double SdkRoutine_853f10(long double, long double);
long double SdkRoutine_854fd0(long double, long double);
long double __addtf3(long double, long double);
long double __extenddftf2(double);
long double __floatsitf(int);
long double __subtf3(long double, long double);
long double __subtf3_alt1(long double) __asm__("__subtf3");
long double musl_math_7b13b0(long double a1);
__int64 musl_math_7b2bc0(long double* a1, long double a2);

long double musl_math_7b13b0(long double a1)
{
  long double v1;

  v1 = __subtf3(a1, a1);
  return SdkRoutine_853f10(v1, v1);
}

__int64 musl_math_7b2bc0(long double* a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  long double v5;
  long double v6;
  unsigned int v7;
  long double v8;
  long double v9;
  long double v10;
  long double v11;
  long double v12;
  long double v13;
  long double v14;
  long double v15;
  long double v16;
  long double v17;
  int v18;
  long double v19;
  int v20;
  long double v21;
  int v22;
  long double v23;
  int v24;
  long double v25;
  double v26;
  __int64 v29;
  double v30;
  long double v31;
  long double v32;
  long double v33;
  __int128 v35;
  long double v36;
  long double v38;
  long double v39;
  long double v40;
  long double v41;
  long double v42;
  long double v43;
  long double v44;
  long double v45;
  long double v46;
  long double v47;
  long double v48;
  long double v49;
  long double v50;
  long double v51;
  double v52[3];
  double v53[5];

  v3 = HIWORD(*((_QWORD*)&a2 + 1));
  v4 = HIWORD(*((_QWORD*)&a2 + 1)) & 0x7FFFLL;
  if ((WORD6(a2) | ((unsigned __int16)(HIWORD(a2) & 0x7FFF) << 16)) <=
      0x402C921Eu) {
    v5 = SdkRoutine_854fd0(a2, *(long double*)&SdkData_bb26f0);
    v6 = __addtf3(v5, *(long double*)&SdkData_bb3e20);
    v40 = __addtf3(v6, *(long double*)&SdkData_bb4f10);
    v7 = SdkRoutine_8546b0() & 0x7FFFFFFF;
    v8 = SdkRoutine_854fd0(v40, *(long double*)&SdkData_bb2e50);
    v45 = __addtf3(a2, v8);
    SdkRoutine_854fd0(v40, *(long double*)&SdkData_bb3a60);
    __subtf3_alt1(v45);
    if ((int)__netf2() < 0) {
      --v7;
      v35 = SdkData_bb1aa0;
    }
    else {
      if ((int)__gttf2() <= 0) {
      LABEL_4:
        v9 = __subtf3_alt1(v45);
        *a1 = v9;
        if ((int)(v4 - (HIWORD(v9) & 0x7FFF)) < 52) {
          v16 = v45;
        }
        else {
          SdkRoutine_854fd0(v40, *(long double*)&SdkData_bb49a0);
          v38 = __subtf3_alt1(v45);
          v10 = __subtf3_alt1(v45);
          __subtf3_alt1(v10);
          v11 = SdkRoutine_854fd0(v40, *(long double*)&SdkData_bb4090);
          __subtf3_alt1(v11);
          v12 = __subtf3_alt1(v38);
          *a1 = v12;
          if ((int)(v4 - (HIWORD(v12) & 0x7FFF)) < 120) {
            v16 = v38;
          }
          else {
            SdkRoutine_854fd0(v40, *(long double*)&SdkData_bb4f20);
            v46 = __subtf3_alt1(v38);
            v13 = __subtf3_alt1(v38);
            __subtf3_alt1(v13);
            v14 = SdkRoutine_854fd0(v40, *(long double*)&SdkData_bb16e0);
            __subtf3_alt1(v14);
            v15 = __subtf3_alt1(v46);
            v16 = v46;
            *a1 = v15;
          }
        }
        v33 = __subtf3_alt1(v16);
        v32 = __subtf3_alt1(v33);
        goto LABEL_16;
      }
      ++v7;
      v35 = SdkData_bb3590;
    }
    v40 = __addtf3(v40, *(long double*)&v35);
    v36 = SdkRoutine_854fd0(v40, *(long double*)&SdkData_bb2e50);
    v45 = __addtf3(a2, v36);
    SdkRoutine_854fd0(v40, *(long double*)&SdkData_bb3a60);
    goto LABEL_4;
  }
  if ((_DWORD)v4 != 0x7FFF) {
    *(_QWORD*)&v51 = *(_QWORD*)&a2;
    *((_QWORD*)&v51 + 1) =
        *((_QWORD*)&a2 + 1) & 0xFFFFFFFFFFFFLL | 0x4016000000000000LL;
    v18 = SdkRoutine_854740();
    v53[0] = (double)v18;
    __floatsitf(v18);
    v19 = __subtf3_alt1(v51);
    v41 = SdkRoutine_854fd0(v19, *(long double*)&SdkData_bb11a0);
    v20 = SdkRoutine_854740();
    v53[1] = (double)v20;
    __floatsitf(v20);
    v21 = __subtf3_alt1(v41);
    v42 = SdkRoutine_854fd0(v21, *(long double*)&SdkData_bb11a0);
    v22 = SdkRoutine_854740();
    v53[2] = (double)v22;
    __floatsitf(v22);
    v23 = __subtf3_alt1(v42);
    v43 = SdkRoutine_854fd0(v23, *(long double*)&SdkData_bb11a0);
    v24 = SdkRoutine_854740();
    v53[3] = (double)v24;
    __floatsitf(v24);
    v25 = __subtf3_alt1(v43);
    SdkRoutine_854fd0(v25, *(long double*)&SdkData_bb11a0);
    v26 = __trunctfdf2();
    v29 = 4;
    v53[4] = v26;
    do {
      v30 = v53[v29--];
    } while (v30 == 0x0.0p+0);
    v7 = __rem_pio2_large((__int64)v53, v52, (int)v4 - 16406, (int)v29 + 2, 3,
                          v30);
    v47 = __extenddftf2(v52[1]);
    v31 = __extenddftf2(v52[2]);
    v48 = __addtf3(v47, v31);
    v39 = __extenddftf2(v52[0]);
    v44 = __addtf3(v48, v39);
    __subtf3_alt1(v44);
    v32 = __subtf3_alt1(v48);
    if ((unsigned int)v3 >= 0x8000) {
      v7 = -v7;
      v49 = v44;
      HIBYTE(v49) = HIBYTE(v44) ^ 0x80;
      *a1 = v49;
      v50 = v32;
      HIBYTE(v50) = HIBYTE(v32) ^ 0x80;
      v32 = v50;
    }
    else {
      *a1 = v44;
    }
  LABEL_16:
    a1[1] = v32;
    return v7;
  }
  v17 = __subtf3_alt1(a2);
  v7 = 0;
  *a1 = v17;
  a1[1] = v17;
  return v7;
}

#pragma GCC visibility pop
