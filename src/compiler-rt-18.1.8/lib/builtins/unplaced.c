#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __netf2();
__int64 __unordtf2(long double);
extern _UNKNOWN SdkData_bb0210;
extern __int128 SdkData_bb1400;
extern __int128 SdkData_bb4110;
long double SdkRoutine_854fd0(long double, long double);
long double __addtf3(long double, long double);
long double __subtf3(long double);
void compilerrt1818_lib_builtins_8549e0(long double a1, long double a2,
                                        long double a3, long double a4);

void compilerrt1818_lib_builtins_8549e0(long double a1, long double a2,
                                        long double a3, long double a4)
{

#pragma clang fp contract(off)
  long double v4;
  long double v5;
  bool v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  uint32x4_t v12;
  __int64 v13;
  __int64 v14;
  long double v15;
  long double v16;
  long double v17;
  long double v18;
  long double v19;
  long double v20;
  unsigned __int64 v21;
  long double v22;
  long double v23;
  long double v24;
  long double v25;
  long double v27;
  long double v30;
  long double v31;
  long double v32;
  __int128 v33;
  __int128 v34;
  long double v35;
  long double v36;
  long double v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  long double v41;
  __int128 v42;
  long double v43;
  long double v44;

  v25 = a3;
  v22 = SdkRoutine_854fd0(a1, a3);
  SdkRoutine_854fd0(a2, a4);
  v20 = SdkRoutine_854fd0(a1, a4);
  v19 = SdkRoutine_854fd0(a2, v25);
  v24 = __subtf3(v22);
  v23 = __addtf3(v19, v20);
  if ((unsigned int)__unordtf2(v24) != 0 &&
      (unsigned int)__unordtf2(v23) != 0) {
    v4 = a1;
    v5 = a2;
    v6 = (*(_QWORD*)&a1 | *((_QWORD*)&a1 + 1) & 0x7FFFFFFFFFFFFFFFLL ^
                              0x7FFF000000000000LL) == 0 ||
         (*(_QWORD*)&a2 | *((_QWORD*)&a2 + 1) & 0x7FFFFFFFFFFFFFFFLL ^
                              0x7FFF000000000000LL) == 0;
    v7 = v6;
    if (!v6) {
    LABEL_20:
      v27 = v4;
      if ((*(_QWORD*)&a4 | *((_QWORD*)&a4 + 1) & 0x7FFFFFFFFFFFFFFFLL ^
                               0x7FFF000000000000LL) == 0 ||
          (*(_QWORD*)&v25 | *((_QWORD*)&v25 + 1) & 0x7FFFFFFFFFFFFFFFLL ^
                                0x7FFF000000000000LL) == 0) {
        v30 = v5;
        if ((*(_QWORD*)&v25 | *((_QWORD*)&v25 + 1) & 0x7FFFFFFFFFFFFFFFLL ^
                                  0x7FFF000000000000LL) != 0) {
          v13 = 0;
        }
        else {
          v13 = 16;
        }
        if ((*(_QWORD*)&a4 | *((_QWORD*)&a4 + 1) & 0x7FFFFFFFFFFFFFFFLL ^
                                 0x7FFF000000000000LL) != 0) {
          v14 = 0;
        }
        else {
          v14 = 16;
        }
        v36 = *(long double*)((char*)&SdkData_bb0210 + v13);
        HIBYTE(v36) = HIBYTE(v25) & 0x80 | HIBYTE(v36) & 0x7F;
        v25 = v36;
        v35 = *(long double*)((char*)&SdkData_bb0210 + v14);
        HIBYTE(v35) = HIBYTE(a4) & 0x80 | HIBYTE(v35) & 0x7F;
        a4 = v35;
        if ((unsigned int)__unordtf2(v4) != 0) {
          v34 = SdkData_bb4110;
          HIBYTE(v34) = HIBYTE(v27) & 0x80;
          v27 = *(long double*)&v34;
          if ((unsigned int)__unordtf2(v30) == 0) {
            goto LABEL_38;
          }
        }
        else if ((unsigned int)__unordtf2(v30) == 0) {
          goto LABEL_38;
        }
        v33 = SdkData_bb4110;
        HIBYTE(v33) = HIBYTE(v30) & 0x80;
        v30 = *(long double*)&v33;
        goto LABEL_38;
      }
      if ((v7 & 1) != 0) {
      LABEL_39:
        v31 = v5;
        SdkRoutine_854fd0(v5, a4);
        v15 = SdkRoutine_854fd0(v27, v25);
        v16 = __subtf3(v15);
        SdkRoutine_854fd0(v16, *(long double*)&SdkData_bb1400);
        v32 = SdkRoutine_854fd0(v25, v31);
        v17 = SdkRoutine_854fd0(v27, a4);
        v18 = __addtf3(v17, v32);
        SdkRoutine_854fd0(v18, *(long double*)&SdkData_bb1400);
        return;
      }
      v30 = v5;
      v10 = (__int64)((unsigned __int64)((unsigned int)__netf2() == 0) << 63) >>
            63;
      v21 = LANES64_OF(
                vzip1_s32(
                    COERCE_AS(int32x2_t,
                              ((__int64)((unsigned __int64)((unsigned int)
                                                                __netf2() == 0)
                                         << 63) >>
                               63)),
                    COERCE_AS(int32x2_t, v10)))
                .n64_u64[0];
      v11 = (__int64)((unsigned __int64)((unsigned int)__netf2() == 0) << 63) >>
            63;
      LANES128(v12).n128_u64[0] =
          LANES64_OF(
              vzip1_s32(
                  COERCE_AS(int32x2_t,
                            ((__int64)((unsigned __int64)((unsigned int)
                                                              __netf2() == 0)
                                       << 63) >>
                             63)),
                  COERCE_AS(int32x2_t, v11)))
              .n64_u64[0];
      LANES128(v12).n128_u64[1] = v21;
      if ((vmaxvq_u32(v12) & 1) == 0) {
        return;
      }
      if ((unsigned int)__unordtf2(v27) != 0) {
        v40 = SdkData_bb4110;
        HIBYTE(v40) = HIBYTE(v27) & 0x80;
        v27 = *(long double*)&v40;
        if ((unsigned int)__unordtf2(v30) == 0) {
        LABEL_26:
          if ((unsigned int)__unordtf2(v25) == 0) {
            goto LABEL_27;
          }
          goto LABEL_47;
        }
      }
      else if ((unsigned int)__unordtf2(v30) == 0) {
        goto LABEL_26;
      }
      v39 = SdkData_bb4110;
      HIBYTE(v39) = HIBYTE(v30) & 0x80;
      v30 = *(long double*)&v39;
      if ((unsigned int)__unordtf2(v25) == 0) {
      LABEL_27:
        if ((unsigned int)__unordtf2(a4) == 0) {
        LABEL_38:
          v5 = v30;
          goto LABEL_39;
        }
      LABEL_28:
        v37 = *(long double*)&SdkData_bb4110;
        HIBYTE(v37) = HIBYTE(a4) & 0x80;
        a4 = v37;
        goto LABEL_38;
      }
    LABEL_47:
      v38 = SdkData_bb4110;
      HIBYTE(v38) = HIBYTE(v25) & 0x80;
      v25 = *(long double*)&v38;
      if ((unsigned int)__unordtf2(a4) == 0) {
        goto LABEL_38;
      }
      goto LABEL_28;
    }
    if ((*(_QWORD*)&a1 | *((_QWORD*)&a1 + 1) & 0x7FFFFFFFFFFFFFFFLL ^
                             0x7FFF000000000000LL) != 0) {
      v8 = 0;
    }
    else {
      v8 = 16;
    }
    if ((*(_QWORD*)&a2 | *((_QWORD*)&a2 + 1) & 0x7FFFFFFFFFFFFFFFLL ^
                             0x7FFF000000000000LL) != 0) {
      v9 = 0;
    }
    else {
      v9 = 16;
    }
    v44 = *(long double*)((char*)&SdkData_bb0210 + v8);
    HIBYTE(v44) = HIBYTE(a1) & 0x80 | HIBYTE(v44) & 0x7F;
    v43 = *(long double*)((char*)&SdkData_bb0210 + v9);
    HIBYTE(v43) = HIBYTE(a2) & 0x80 | HIBYTE(v43) & 0x7F;
    if ((unsigned int)__unordtf2(v25) != 0) {
      v42 = SdkData_bb4110;
      HIBYTE(v42) = HIBYTE(v25) & 0x80;
      v25 = *(long double*)&v42;
      if ((unsigned int)__unordtf2(a4) == 0) {
        goto LABEL_19;
      }
    }
    else if ((unsigned int)__unordtf2(a4) == 0) {
    LABEL_19:
      v4 = v44;
      v5 = v43;
      goto LABEL_20;
    }
    v41 = *(long double*)&SdkData_bb4110;
    HIBYTE(v41) = HIBYTE(a4) & 0x80;
    a4 = v41;
    goto LABEL_19;
  }
}

#pragma GCC visibility pop
