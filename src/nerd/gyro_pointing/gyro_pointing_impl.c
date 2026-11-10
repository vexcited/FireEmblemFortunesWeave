#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nerd_gyro_pointing_GyroPointingStateDetector_StoreState_plt(PSEUDO_X8,
                                                                _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nerd_gyro_pointing_GyroPointingCore_StoreKalmanState_plt(_QWORD);
float linear_algebra_700970(float* a1, float* a2);
__attribute__((swiftcall)) void
nerd_gyro_pointing_GyroPointing_StoreKalmanState(PSEUDO_X8 x8_, void* this_,
                                                 __int64 unused_int1,
                                                 __int64 unused_int2,
                                                 unsigned __int64 a2);
__int64 gyro_pointing_7015c0(__int64 result, __int64 a2);

float linear_algebra_700970(float* a1, float* a2)
{

#pragma clang fp contract(off)
  return (float)((float)((float)(*a1 * *a2) + 0x0.0p+0f) +
                 (float)(a1[1] * a2[1])) +
         (float)(a1[2] * a2[2]);
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_GyroPointing_StoreKalmanState(PSEUDO_X8 x8_, void* this_,
                                                 __int64 unused_int1,
                                                 __int64 unused_int2,
                                                 unsigned __int64 a2)
{
  void* a3 = (void*)PSEUDO_X8_VALUE(x8_);
  _QWORD v6[455];

  memset_plt(a3, nullptr, 6776, a2);
  nerd_gyro_pointing_GyroPointingCore_StoreKalmanState_plt((char*)this_ + 48);
  nerd_gyro_pointing_GyroPointingStateDetector_StoreState_plt(
      (void*)(v6), (char*)this_ + 23832);
  {
    gyro_pointing_7015c0((__int64)a3 + 3104, (__int64)v6);
    return;
  }
}

__int64 gyro_pointing_7015c0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;

  if (*(_BYTE*)(result + 3640) == 1) {
    *(_QWORD*)(result + 3584) = 0;
    *(_QWORD*)(result + 3600) = 0;
    *(_QWORD*)(result + 3592) = *(_QWORD*)(a2 + 3592);
    v2 = *(_QWORD*)(a2 + 3584);
    if (v2 != 0) {
      if (v2 == 1) {
        v3 = 0;
        v4 = (_QWORD*)result;
      }
      else {
        v3 = 0;
        v4 = (_QWORD*)result;
        do {
          v10 = *(_QWORD*)(a2 + 3584);
          v11 = *(_QWORD*)(a2 + 3600);
          v12 = *(_QWORD*)(a2 + 3592);
          if (v10 <= v11) {
            v13 = 0;
          }
          else {
            v13 = *(_QWORD*)(a2 + 3592);
          }
          v14 = v13 + v11;
          if (v3 + v14 - v10 < v12) {
            v12 = 0;
          }
          v15 = (__int64*)(a2 + 56 * (v3 + v14 - v12 - v10));
          v16 = *v15;
          v17 = v15[2];
          v4[1] = v15[1];
          v4[2] = v17;
          *v4 = v16;
          v18 = v15[3];
          v19 = v15[4];
          v21 = v15[5];
          v20 = v15[6];
          v4[5] = v21;
          v4[6] = v20;
          v4[3] = v18;
          v4[4] = v19;
          v22 = *(_QWORD*)(a2 + 3584);
          v23 = *(_QWORD*)(a2 + 3600);
          v24 = *(_QWORD*)(a2 + 3592);
          if (v22 <= v23) {
            v25 = 0;
          }
          else {
            v25 = *(_QWORD*)(a2 + 3592);
          }
          v26 = v25 + v23;
          if (v3 + v26 - v22 + 1 < v24) {
            v24 = 0;
          }
          v27 = v3 + v26 - v24 - v22;
          v3 += 2;
          v28 = (_QWORD*)(a2 + 56 * v27);
          v29 = v28[7];
          v30 = v28[9];
          v4[8] = v28[8];
          v4[9] = v30;
          v4[7] = v29;
          v31 = v28[10];
          v32 = v28[11];
          v34 = v28[12];
          v33 = v28[13];
          v4[12] = v34;
          v4[13] = v33;
          v4[10] = v31;
          v4[11] = v32;
          v4 += 14;
        } while ((v2 & 0xFFFFFFFFFFFFFFFELL) != v3);
      }
      if ((v2 & 1) != 0) {
        v35 = *(_QWORD*)(a2 + 3584);
        v36 = *(_QWORD*)(a2 + 3600);
        v37 = v3 - v35;
        if (v35 <= v36) {
          v38 = 0;
        }
        else {
          v38 = *(_QWORD*)(a2 + 3592);
        }
        v39 = v37 + v36 + v38;
        if (v39 >= *(_QWORD*)(a2 + 3592)) {
          v40 = *(_QWORD*)(a2 + 3592);
        }
        else {
          v40 = 0;
        }
        v41 = (__int64*)(a2 + 56 * (v39 - v40));
        v42 = v41[6];
        v44 = v41[3];
        v43 = v41[4];
        v4[5] = v41[5];
        v4[6] = v42;
        v4[3] = v44;
        v4[4] = v43;
        v45 = *v41;
        v46 = v41[1];
        v47 = v41[2];
        v4[1] = v46;
        v4[2] = v47;
        *v4 = v45;
      }
      v8 = *(_QWORD*)(a2 + 3584);
    }
    else {
      v8 = 0;
    }
    *(_QWORD*)(result + 3584) = v8;
    *(_WORD*)(result + 3608) = *(_WORD*)(a2 + 3608);
    v48 = *(_QWORD*)(a2 + 3612);
    *(_DWORD*)(result + 3620) = *(_DWORD*)(a2 + 3620);
    *(_QWORD*)(result + 3612) = v48;
    v49 = *(_QWORD*)(a2 + 3624);
    *(_DWORD*)(result + 3632) = *(_DWORD*)(a2 + 3632);
    *(_QWORD*)(result + 3624) = v49;
  }
  else {
    *(_QWORD*)(result + 3592) = 0;
    *(_QWORD*)(result + 3600) = 0;
    *(_QWORD*)(result + 3584) = 0;
    *(_QWORD*)(result + 3592) = *(_QWORD*)(a2 + 3592);
    v5 = *(_QWORD*)(a2 + 3584);
    if (v5 != 0) {
      if (v5 == 1) {
        v6 = 0;
        v7 = (_QWORD*)result;
      }
      else {
        v6 = 0;
        v7 = (_QWORD*)result;
        do {
          v50 = *(_QWORD*)(a2 + 3584);
          v51 = *(_QWORD*)(a2 + 3600);
          v52 = *(_QWORD*)(a2 + 3592);
          if (v50 <= v51) {
            v53 = 0;
          }
          else {
            v53 = *(_QWORD*)(a2 + 3592);
          }
          v54 = v53 + v51;
          if (v6 + v54 - v50 < v52) {
            v52 = 0;
          }
          v55 = (__int64*)(a2 + 56 * (v6 + v54 - v52 - v50));
          v56 = *v55;
          v57 = v55[2];
          v7[1] = v55[1];
          v7[2] = v57;
          *v7 = v56;
          v58 = v55[3];
          v59 = v55[4];
          v61 = v55[5];
          v60 = v55[6];
          v7[5] = v61;
          v7[6] = v60;
          v7[3] = v58;
          v7[4] = v59;
          v62 = *(_QWORD*)(a2 + 3584);
          v63 = *(_QWORD*)(a2 + 3600);
          v64 = *(_QWORD*)(a2 + 3592);
          if (v62 <= v63) {
            v65 = 0;
          }
          else {
            v65 = *(_QWORD*)(a2 + 3592);
          }
          v66 = v65 + v63;
          if (v6 + v66 - v62 + 1 < v64) {
            v64 = 0;
          }
          v67 = v6 + v66 - v64 - v62;
          v6 += 2;
          v68 = (_QWORD*)(a2 + 56 * v67);
          v69 = v68[7];
          v70 = v68[9];
          v7[8] = v68[8];
          v7[9] = v70;
          v7[7] = v69;
          v71 = v68[10];
          v72 = v68[11];
          v74 = v68[12];
          v73 = v68[13];
          v7[12] = v74;
          v7[13] = v73;
          v7[10] = v71;
          v7[11] = v72;
          v7 += 14;
        } while ((v5 & 0xFFFFFFFFFFFFFFFELL) != v6);
      }
      if ((v5 & 1) != 0) {
        v75 = *(_QWORD*)(a2 + 3584);
        v76 = *(_QWORD*)(a2 + 3600);
        v77 = v6 - v75;
        if (v75 <= v76) {
          v78 = 0;
        }
        else {
          v78 = *(_QWORD*)(a2 + 3592);
        }
        v79 = v77 + v76 + v78;
        if (v79 >= *(_QWORD*)(a2 + 3592)) {
          v80 = *(_QWORD*)(a2 + 3592);
        }
        else {
          v80 = 0;
        }
        v81 = (__int64*)(a2 + 56 * (v79 - v80));
        v82 = v81[6];
        v84 = v81[3];
        v83 = v81[4];
        v7[5] = v81[5];
        v7[6] = v82;
        v7[3] = v84;
        v7[4] = v83;
        v85 = *v81;
        v86 = v81[1];
        v87 = v81[2];
        v7[1] = v86;
        v7[2] = v87;
        *v7 = v85;
      }
      v9 = *(_QWORD*)(a2 + 3584);
    }
    else {
      v9 = 0;
    }
    *(_QWORD*)(result + 3584) = v9;
    v88 = *(_QWORD*)(a2 + 3616);
    v89 = *(_QWORD*)(a2 + 3624);
    v90 = *(_DWORD*)(a2 + 3632);
    *(_QWORD*)(result + 3608) = *(_QWORD*)(a2 + 3608);
    *(_DWORD*)(result + 3632) = v90;
    *(_QWORD*)(result + 3624) = v89;
    *(_QWORD*)(result + 3616) = v88;
    *(_BYTE*)(result + 3640) = 1;
  }
  return result;
}

#pragma GCC visibility pop
