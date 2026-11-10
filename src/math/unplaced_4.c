#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_87a2e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a2f0(PSEUDO_X8, _QWORD, _QWORD);
__int64 SdkRoutine_87a2d0(_QWORD);
__int64 exp_plt(void* this_, double);
__int64 exp_plt_alt1(double) __asm__("exp_plt");
__int64 log1p_plt(_QWORD, double);
__int64 log_plt(void* this_, double);
__int64 math_731120(__int64 result, __int64, __int64, unsigned __int64);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
double lgamma_plt(_QWORD, double);
double log1p_plt_alt1(_QWORD, double) __asm__("log1p_plt");
float SdkRoutine_87a330(_QWORD);
float atan2f_plt(float, float);
float cosf_plt(float);
float sinf_plt(float);
unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);
unsigned __int64 math_730ec0(unsigned __int64*, unsigned __int64,
                             unsigned __int64, unsigned __int64);
__int64 linear_algebra_701e90(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void
linear_algebra_70ad80(PSEUDO_X8 x8_, __int64 result, float* a2);
__attribute__((swiftcall)) void
nerd_linear_algebra_LMakeBackwardAutoDiff(PSEUDO_X8 x8_, __int64 result,
                                          int* a2);
__attribute__((swiftcall)) void linear_algebra_716420(PSEUDO_X8 x8_, float* a1,
                                                      float* a2);
__attribute__((swiftcall)) void math_716760(PSEUDO_X8 x8_, float* a1);
__attribute__((swiftcall)) void
nerd_linear_algebra_cross(PSEUDO_X8 x8_, __int64* a1, float* a2);
__attribute__((swiftcall)) void linear_algebra_716c90(PSEUDO_X8 x8_, float** a1,
                                                      float* a2);
__attribute__((swiftcall)) void math_71a690(PSEUDO_X8 x8_, __int64 a1,
                                            _QWORD* a2, __int64* a3);
__attribute__((swiftcall)) void math_71be60(PSEUDO_X8 x8_, __int64 a1,
                                            _QWORD* a2, __int64 a3,
                                            unsigned __int64 a4);
__attribute__((swiftcall)) void math_71d560(PSEUDO_X8 x8_, _QWORD* a1,
                                            unsigned __int64* a2);
__attribute__((swiftcall)) void math_71ec60(PSEUDO_X8 x8_, __int64 a1,
                                            _QWORD* a2, __int64 a3,
                                            unsigned __int64 a4);
__attribute__((swiftcall)) void linear_algebra_720ce0(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64* a2,
                                                      __int64 unused_int2,
                                                      unsigned __int64 a3);
__attribute__((swiftcall)) void linear_algebra_721480(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64* a2);
__int64 math_722a20(void* a1, double a2, double a3);
double math_722b40(void* a1, double a2, double a3);
double math_722c60(void* a1, double a2, double a3);
__attribute__((swiftcall)) void math_7241f0(PSEUDO_X8 x8_, float* a1,
                                            float* a2);
__attribute__((swiftcall)) void math_724480(PSEUDO_X8 x8_, float* a1);
float nerd_linear_algebra_sinc(float* a1);
__attribute__((swiftcall)) void math_724870(PSEUDO_X8 x8_, float* a1);
__attribute__((swiftcall)) void linear_algebra_724c60(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64* a2,
                                                      __int64 unused_int2,
                                                      unsigned __int64 a3);
__attribute__((swiftcall)) void math_726720(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 unused_int1,
                                            __int64 unused_int2,
                                            unsigned __int64 a2, float result);
bool math_726b80(float* a1, __int64 a2, __int64 a3, unsigned __int64 a4);
bool math_727520(_QWORD* a1, __int64 a2, int a3, unsigned __int64 a4);
__attribute__((swiftcall)) void math_730a40(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            __int64* a2);
__attribute__((swiftcall)) void math_730ca0(PSEUDO_X8 x8_, __int64 a1,
                                            __int64* a2, __int64* a3,
                                            unsigned __int64 a4);
unsigned __int64 math_7312c0(unsigned __int64* a1, unsigned __int64* a2,
                             __int64 a3, unsigned __int64 a4);
unsigned __int64* math_731360(unsigned __int64* a1, unsigned __int64* a2,
                              __int64 a3, unsigned __int64 a4);
float math_7314a0(__int64 a1, __int64 a2);
float math_732b60(_QWORD* a1, _DWORD** a2);
float math_733f80(_QWORD* a1, float a2);
unsigned __int64 math_7342e0(unsigned __int64* a1, unsigned __int64* a2,
                             __int64 a3, unsigned __int64 a4);
bool math_734400(unsigned __int64* a1, __int64* a2);

__int64 linear_algebra_701e90(__int64 a1, __int64 a2)
{
  float* v2;
  float* v3;
  __int64 v4;

  v2 = (float*)(a1 + 52);
  v3 = (float*)(a2 + 52);
  v4 = 27;
  while (*(v2 - 13) == *(v3 - 13) && *(v2 - 12) == *(v3 - 12) &&
         *(v2 - 11) == *(v3 - 11) && *(v2 - 10) == *(v3 - 10) &&
         *(v2 - 9) == *(v3 - 9) && *(v2 - 8) == *(v3 - 8) &&
         *(v2 - 7) == *(v3 - 7) && *(v2 - 6) == *(v3 - 6) &&
         *(v2 - 5) == *(v3 - 5) && *(v2 - 4) == *(v3 - 4) &&
         *(v2 - 3) == *(v3 - 3) && *(v2 - 2) == *(v3 - 2) &&
         *(v2 - 1) == *(v3 - 1) && *v2 == *v3 && v2[1] == v3[1] &&
         v2[2] == v3[2] && v2[3] == v3[3] && v2[4] == v3[4] && v2[5] == v3[5] &&
         v2[6] == v3[6] && v2[7] == v3[7] && v2[8] == v3[8] && v2[9] == v3[9] &&
         v2[10] == v3[10] && v2[11] == v3[11] && v2[12] == v3[12] &&
         v2[13] == v3[13]) {
    --v4;
    v2 += 27;
    v3 += 27;
    if (v4 == 0) {
      return 1;
    }
  }
  return 0;
}

__attribute__((swiftcall)) void linear_algebra_70ad80(PSEUDO_X8 x8_,
                                                      __int64 result, float* a2)
{

#pragma clang fp contract(off)
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  float* v4;
  char v5;
  float v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  char v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  char v31;
  float v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
  } v51_;

  v3 = 0;
  v51_.v57 = 0;
  v51_.v53 = 0;
  v51_.v54 = 0;
  v51_.v51 = 0;
  v51_.v52 = -1;
  v51_.v55 = -1;
  v51_.v56 = 0;
  v51_.v58 = -1;
  v51_.v59 = 0;
  v4 = (float*)(result + 32);
  do {
    v10 = *(v4 - 4);
    v11 = a2[4];
    v12 = *(_QWORD*)a2;
    if (*((_QWORD*)v4 - 4) != 0) {
      v13 = *((_QWORD*)v4 - 3);
      if (v12 != 0) {
        v14 = *((_BYTE*)a2 + 8);
        v15 = *((_DWORD*)a2 + 4);
        v16 = *((_DWORD*)v4 - 4);
        v12 = *((_QWORD*)v4 - 4);
      }
      else {
        v14 = 0;
        v16 = 0;
        v12 = *((_QWORD*)v4 - 4);
        v15 = *((_DWORD*)a2 + 4);
      }
    LABEL_16:
      v17 = v12 + 16LL * *(_QWORD*)(v12 + 4096);
      *(_BYTE*)(v17 + 4) = v13;
      *(_BYTE*)(v17 + 5) = v14;
      *(_DWORD*)(v17 + 8) = v15;
      *(_DWORD*)(v17 + 12) = v16;
      v18 = *(_QWORD*)(v12 + 4096);
      *(_QWORD*)(v12 + 4096) = v18 + 1;
      v19 = v12 + 16 * (v18 + 1);
      *(_WORD*)(v19 + 4) = (unsigned __int8)v18;
      *(_QWORD*)(v19 + 8) = 1065353216;
      v20 = *(_QWORD*)(v12 + 4096);
      *(_QWORD*)(v12 + 4096) = v20 + 1;
      v21 = v4[2];
      v22 = a2[10];
      v23 = *((_QWORD*)v4 - 1);
      v24 = *((_QWORD*)a2 + 3);
      if (v23 != 0) {
        goto LABEL_17;
      }
      goto LABEL_21;
    }
    if (v12 != 0) {
      v13 = *((_QWORD*)a2 + 1);
      v14 = 0;
      v16 = 0;
      v15 = *((_DWORD*)v4 - 4);
      goto LABEL_16;
    }
    LOBYTE(v20) = -1;
    v21 = v4[2];
    v22 = a2[10];
    v23 = *((_QWORD*)v4 - 1);
    v24 = *((_QWORD*)a2 + 3);
    if (v23 != 0) {
    LABEL_17:
      v25 = *(_QWORD*)v4;
      if (v24 != 0) {
        v26 = *((_BYTE*)a2 + 32);
        v27 = v22;
        v28 = v21;
      }
      else {
        v26 = 0;
        v28 = 0x0.0p+0f;
        v27 = v22;
      }
    LABEL_23:
      v29 = v23 + 16LL * *(_QWORD*)(v23 + 4096);
      *(_BYTE*)(v29 + 4) = v25;
      *(_BYTE*)(v29 + 5) = v26;
      *(float*)(v29 + 8) = v27;
      *(float*)(v29 + 12) = v28;
      v30 = *(_QWORD*)(v23 + 4096);
      *(_QWORD*)(v23 + 4096) = v30 + 1;
      if (v12 != 0) {
        goto LABEL_24;
      }
      goto LABEL_31;
    }
  LABEL_21:
    if (v24 != 0) {
      v25 = *((_QWORD*)a2 + 4);
      v28 = 0x0.0p+0f;
      v27 = v21;
      v26 = 0;
      v23 = v24;
      goto LABEL_23;
    }
    v23 = 0;
    LOBYTE(v30) = -1;
    if (v12 != 0) {
    LABEL_24:
      if (v23 != 0) {
        v31 = v30;
      }
      else {
        v31 = 0;
      }
      if (v23 != 0) {
        v32 = 0x1.0000000000000p+0f;
      }
      else {
        v32 = 0x0.0p+0f;
      }
    LABEL_33:
      v33 = v12 + 16LL * *(_QWORD*)(v12 + 4096);
      *(_BYTE*)(v33 + 4) = v20;
      *(_BYTE*)(v33 + 5) = v31;
      *(_DWORD*)(v33 + 8) = 1065353216;
      *(float*)(v33 + 12) = v32;
      v34 = *(_QWORD*)(v12 + 4096);
      *(_QWORD*)(v12 + 4096) = v34 + 1;
      v35 = v4[8];
      v36 = a2[16];
      v37 = *((_QWORD*)v4 + 2);
      v38 = *((_QWORD*)a2 + 6);
      if (v37 != 0) {
        goto LABEL_34;
      }
      goto LABEL_38;
    }
  LABEL_31:
    if (v23 != 0) {
      v32 = 0x0.0p+0f;
      v31 = 0;
      v12 = v23;
      LOBYTE(v20) = v30;
      goto LABEL_33;
    }
    v12 = 0;
    LOBYTE(v34) = -1;
    v35 = v4[8];
    v36 = a2[16];
    v37 = *((_QWORD*)v4 + 2);
    v38 = *((_QWORD*)a2 + 6);
    if (v37 != 0) {
    LABEL_34:
      v39 = *((_QWORD*)v4 + 3);
      if (v38 != 0) {
        v40 = *((_BYTE*)a2 + 56);
        v41 = v36;
        v42 = v35;
      }
      else {
        v40 = 0;
        v42 = 0x0.0p+0f;
        v41 = v36;
      }
    LABEL_40:
      v43 = v37 + 16LL * *(_QWORD*)(v37 + 4096);
      *(_BYTE*)(v43 + 4) = v39;
      *(_BYTE*)(v43 + 5) = v40;
      *(float*)(v43 + 8) = v41;
      *(float*)(v43 + 12) = v42;
      v44 = *(_QWORD*)(v37 + 4096);
      *(_QWORD*)(v37 + 4096) = v44 + 1;
      if (v12 != 0) {
        goto LABEL_2;
      }
      goto LABEL_41;
    }
  LABEL_38:
    if (v38 != 0) {
      v39 = *((_QWORD*)a2 + 7);
      v42 = 0x0.0p+0f;
      v41 = v35;
      v40 = 0;
      v37 = v38;
      goto LABEL_40;
    }
    v37 = 0;
    LOBYTE(v44) = -1;
    if (v12 != 0) {
    LABEL_2:
      if (v37 != 0) {
        v5 = v44;
      }
      else {
        v5 = 0;
      }
      if (v37 != 0) {
        v6 = 0x1.0000000000000p+0f;
      }
      else {
        v6 = 0x0.0p+0f;
      }
      goto LABEL_8;
    }
  LABEL_41:
    if (v37 != 0) {
      v6 = 0x0.0p+0f;
      v5 = 0;
      v12 = v37;
      LOBYTE(v34) = v44;
    LABEL_8:
      v7 = v12 + 16LL * *(_QWORD*)(v12 + 4096);
      *(_BYTE*)(v7 + 4) = v34;
      *(_BYTE*)(v7 + 5) = v5;
      *(_DWORD*)(v7 + 8) = 1065353216;
      *(float*)(v7 + 12) = v6;
      v8 = *(_QWORD*)(v12 + 4096);
      *(_QWORD*)(v12 + 4096) = v8 + 1;
      goto LABEL_9;
    }
    v12 = 0;
    v8 = -1;
  LABEL_9:
    v9 = (char*)&v51_.v51 + v3;
    v3 += 24;
    v4 += 18;
    *(_QWORD*)v9 = v12;
    *((_QWORD*)v9 + 1) = v8;
    *((float*)v9 + 4) =
        (float)((float)((float)(v10 * v11) + 0x0.0p+0f) + (float)(v21 * v22)) +
        (float)(v35 * v36);
  } while (v3 != 72);
  v45 = v51_.v58;
  v46 = v51_.v59;
  a3[6] = v51_.v57;
  a3[7] = v45;
  v47 = v51_.v53;
  v48 = v51_.v54;
  a3[8] = v46;
  a3[2] = v47;
  a3[3] = v48;
  v49 = v51_.v56;
  a3[4] = v51_.v55;
  a3[5] = v49;
  v50 = v51_.v52;
  *a3 = v51_.v51;
  a3[1] = v50;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nerd_linear_algebra_LMakeBackwardAutoDiff(PSEUDO_X8 x8_, __int64 result,
                                          int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;

  v3 = *a2;
  if (result != 0) {
    v4 = result + 16LL * *(_QWORD*)(result + 4096);
    *(_WORD*)(v4 + 4) = 0;
    *(_QWORD*)(v4 + 8) = 0;
    v5 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v5 + 1;
    v6 = result + 16 * (v5 + 1);
    v7 = a2[1];
    *(_WORD*)(v6 + 4) = 0;
    *(_QWORD*)(v6 + 8) = 0;
    v8 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v8 + 1;
    v9 = result + 16 * (v8 + 1);
    v10 = a2[2];
    *(_WORD*)(v9 + 4) = 0;
    *(_QWORD*)(v9 + 8) = 0;
    v11 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v11 + 1;
    v12 = result + 16 * (v11 + 1);
    v13 = a2[3];
    *(_WORD*)(v12 + 4) = 0;
    *(_QWORD*)(v12 + 8) = 0;
    v14 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v14 + 1;
    v15 = result + 16 * (v14 + 1);
    v16 = a2[4];
    *(_WORD*)(v15 + 4) = 0;
    *(_QWORD*)(v15 + 8) = 0;
    v17 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v17 + 1;
    v18 = result + 16 * (v17 + 1);
    v19 = a2[5];
    *(_WORD*)(v18 + 4) = 0;
    *(_QWORD*)(v18 + 8) = 0;
    v20 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v20 + 1;
    v21 = result + 16 * (v20 + 1);
    v22 = a2[6];
    *(_WORD*)(v21 + 4) = 0;
    *(_QWORD*)(v21 + 8) = 0;
    v23 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v23 + 1;
    v24 = result + 16 * (v23 + 1);
    v25 = a2[7];
    *(_WORD*)(v24 + 4) = 0;
    *(_QWORD*)(v24 + 8) = 0;
    v26 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v26 + 1;
    v27 = result + 16 * (v26 + 1);
    v28 = a2[8];
    *(_WORD*)(v27 + 4) = 0;
    *(_QWORD*)(v27 + 8) = 0;
    v29 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v29 + 1;
    v30 = result + 16 * (v29 + 1);
    v31 = a2[9];
    *(_WORD*)(v30 + 4) = 0;
    *(_QWORD*)(v30 + 8) = 0;
    v32 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v32 + 1;
    v33 = result + 16 * (v32 + 1);
    v34 = a2[10];
    *(_WORD*)(v33 + 4) = 0;
    *(_QWORD*)(v33 + 8) = 0;
    v35 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v35 + 1;
    v36 = result + 16 * (v35 + 1);
    v37 = a2[11];
    *(_WORD*)(v36 + 4) = 0;
    *(_QWORD*)(v36 + 8) = 0;
    v38 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v38 + 1;
    v39 = result + 16 * (v38 + 1);
    v40 = a2[12];
    *(_WORD*)(v39 + 4) = 0;
    *(_QWORD*)(v39 + 8) = 0;
    v41 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v41 + 1;
    v42 = result + 16 * (v41 + 1);
    v43 = a2[13];
    *(_WORD*)(v42 + 4) = 0;
    *(_QWORD*)(v42 + 8) = 0;
    v44 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v44 + 1;
    v45 = result + 16 * (v44 + 1);
    v46 = a2[14];
    *(_WORD*)(v45 + 4) = 0;
    *(_QWORD*)(v45 + 8) = 0;
    v47 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v47 + 1;
    v48 = result + 16 * (v47 + 1);
    v49 = a2[15];
    *(_WORD*)(v48 + 4) = 0;
    *(_QWORD*)(v48 + 8) = 0;
    v50 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v50 + 1;
    v51 = result + 16 * (v50 + 1);
    v52 = a2[16];
    *(_WORD*)(v51 + 4) = 0;
    *(_QWORD*)(v51 + 8) = 0;
    v53 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v53 + 1;
    v54 = a2[17];
    v55 = result + 16 * (v53 + 1);
    *(_WORD*)(v55 + 4) = 0;
    *(_QWORD*)(v55 + 8) = 0;
    v56 = *(_QWORD*)(result + 4096);
    *(_QWORD*)(result + 4096) = v56 + 1;
  }
  else {
    v7 = a2[1];
    v10 = a2[2];
    v13 = a2[3];
    v16 = a2[4];
    v19 = a2[5];
    v22 = a2[6];
    v5 = -1;
    v8 = -1;
    v11 = -1;
    v14 = -1;
    v17 = -1;
    v54 = a2[17];
    v25 = a2[7];
    v28 = a2[8];
    v31 = a2[9];
    v34 = a2[10];
    v20 = -1;
    v23 = -1;
    v26 = -1;
    v29 = -1;
    v37 = a2[11];
    v40 = a2[12];
    v32 = -1;
    v35 = -1;
    v43 = a2[13];
    v46 = a2[14];
    v49 = a2[15];
    v52 = a2[16];
    v38 = -1;
    v41 = -1;
    v44 = -1;
    v47 = -1;
    v50 = -1;
    v53 = -1;
    v56 = -1;
  }
  *(_QWORD*)a3 = result;
  *(_QWORD*)(a3 + 8) = v5;
  *(_DWORD*)(a3 + 16) = v3;
  *(_DWORD*)(a3 + 20) = 0;
  *(_QWORD*)(a3 + 24) = result;
  *(_QWORD*)(a3 + 32) = v8;
  *(_DWORD*)(a3 + 40) = v7;
  *(_DWORD*)(a3 + 44) = 0;
  *(_QWORD*)(a3 + 48) = result;
  *(_QWORD*)(a3 + 56) = v11;
  *(_DWORD*)(a3 + 64) = v10;
  *(_DWORD*)(a3 + 68) = 0;
  *(_QWORD*)(a3 + 72) = result;
  *(_QWORD*)(a3 + 80) = v14;
  *(_DWORD*)(a3 + 88) = v13;
  *(_DWORD*)(a3 + 92) = 0;
  *(_QWORD*)(a3 + 96) = result;
  *(_QWORD*)(a3 + 104) = v17;
  *(_DWORD*)(a3 + 112) = v16;
  *(_DWORD*)(a3 + 116) = 0;
  *(_QWORD*)(a3 + 120) = result;
  *(_QWORD*)(a3 + 128) = v20;
  *(_DWORD*)(a3 + 136) = v19;
  *(_DWORD*)(a3 + 140) = 0;
  *(_QWORD*)(a3 + 144) = result;
  *(_QWORD*)(a3 + 152) = v23;
  *(_DWORD*)(a3 + 160) = v22;
  *(_DWORD*)(a3 + 164) = 0;
  *(_QWORD*)(a3 + 168) = result;
  *(_QWORD*)(a3 + 176) = v26;
  *(_DWORD*)(a3 + 184) = v25;
  *(_DWORD*)(a3 + 188) = 0;
  *(_QWORD*)(a3 + 192) = result;
  *(_QWORD*)(a3 + 200) = v29;
  *(_DWORD*)(a3 + 208) = v28;
  *(_DWORD*)(a3 + 212) = 0;
  *(_QWORD*)(a3 + 216) = result;
  *(_QWORD*)(a3 + 224) = v32;
  *(_DWORD*)(a3 + 232) = v31;
  *(_DWORD*)(a3 + 236) = 0;
  *(_QWORD*)(a3 + 240) = result;
  *(_QWORD*)(a3 + 248) = v35;
  *(_DWORD*)(a3 + 256) = v34;
  *(_DWORD*)(a3 + 260) = 0;
  *(_QWORD*)(a3 + 264) = result;
  *(_QWORD*)(a3 + 272) = v38;
  *(_DWORD*)(a3 + 280) = v37;
  *(_DWORD*)(a3 + 284) = 0;
  *(_QWORD*)(a3 + 288) = result;
  *(_QWORD*)(a3 + 296) = v41;
  *(_DWORD*)(a3 + 304) = v40;
  *(_DWORD*)(a3 + 308) = 0;
  *(_QWORD*)(a3 + 312) = result;
  *(_QWORD*)(a3 + 320) = v44;
  *(_DWORD*)(a3 + 328) = v43;
  *(_DWORD*)(a3 + 332) = 0;
  *(_QWORD*)(a3 + 336) = result;
  *(_QWORD*)(a3 + 344) = v47;
  *(_DWORD*)(a3 + 352) = v46;
  *(_DWORD*)(a3 + 356) = 0;
  *(_QWORD*)(a3 + 360) = result;
  *(_QWORD*)(a3 + 368) = v50;
  *(_DWORD*)(a3 + 376) = v49;
  *(_DWORD*)(a3 + 380) = 0;
  *(_QWORD*)(a3 + 384) = result;
  *(_QWORD*)(a3 + 392) = v53;
  *(_DWORD*)(a3 + 400) = v52;
  *(_DWORD*)(a3 + 404) = 0;
  *(_QWORD*)(a3 + 408) = result;
  *(_QWORD*)(a3 + 416) = v56;
  *(_DWORD*)(a3 + 424) = v54;
  *(_DWORD*)(a3 + 428) = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void linear_algebra_716420(PSEUDO_X8 x8_, float* a1,
                                                      float* a2)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  float v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  float v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  float v43;
  float v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;

  v3 = a1[4];
  v4 = *a2;
  v5 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 != 0) {
    v6 = v5 + 16LL * *(_QWORD*)(v5 + 4096);
    *(_WORD*)(v6 + 4) = (unsigned __int8)*((_QWORD*)a1 + 1);
    *(_QWORD*)(v6 + 8) = 1065353216;
    v7 = *(_QWORD*)(v5 + 4096);
    *(_QWORD*)(v5 + 4096) = v7 + 1;
    v8 = a1[10];
    v9 = a2[1];
    v10 = *((_QWORD*)a1 + 3);
    if (v10 != 0) {
      goto LABEL_3;
    }
  }
  else {
    v7 = -1;
    v8 = a1[10];
    v9 = a2[1];
    v10 = *((_QWORD*)a1 + 3);
    if (v10 != 0) {
    LABEL_3:
      v11 = v10 + 16LL * *(_QWORD*)(v10 + 4096);
      *(_WORD*)(v11 + 4) = (unsigned __int8)*((_QWORD*)a1 + 4);
      *(_QWORD*)(v11 + 8) = 1065353216;
      v12 = *(_QWORD*)(v10 + 4096);
      *(_QWORD*)(v10 + 4096) = v12 + 1;
      v13 = a1[16];
      v14 = a2[2];
      v15 = *((_QWORD*)a1 + 6);
      if (v15 != 0) {
        goto LABEL_4;
      }
      goto LABEL_13;
    }
  }
  v12 = -1;
  v13 = a1[16];
  v14 = a2[2];
  v15 = *((_QWORD*)a1 + 6);
  if (v15 != 0) {
  LABEL_4:
    v16 = v15 + 16LL * *(_QWORD*)(v15 + 4096);
    *(_WORD*)(v16 + 4) = (unsigned __int8)*((_QWORD*)a1 + 7);
    *(_QWORD*)(v16 + 8) = 1065353216;
    v17 = *(_QWORD*)(v15 + 4096);
    *(_QWORD*)(v15 + 4096) = v17 + 1;
    v18 = a1[22];
    v19 = a2[3];
    v20 = *((_QWORD*)a1 + 9);
    if (v20 != 0) {
      goto LABEL_5;
    }
    goto LABEL_14;
  }
LABEL_13:
  v17 = -1;
  v18 = a1[22];
  v19 = a2[3];
  v20 = *((_QWORD*)a1 + 9);
  if (v20 != 0) {
  LABEL_5:
    v21 = v20 + 16LL * *(_QWORD*)(v20 + 4096);
    *(_WORD*)(v21 + 4) = (unsigned __int8)*((_QWORD*)a1 + 10);
    *(_QWORD*)(v21 + 8) = 1065353216;
    v22 = *(_QWORD*)(v20 + 4096);
    *(_QWORD*)(v20 + 4096) = v22 + 1;
    v23 = a1[28];
    v24 = a2[4];
    v25 = *((_QWORD*)a1 + 12);
    if (v25 != 0) {
      goto LABEL_6;
    }
    goto LABEL_15;
  }
LABEL_14:
  v22 = -1;
  v23 = a1[28];
  v24 = a2[4];
  v25 = *((_QWORD*)a1 + 12);
  if (v25 != 0) {
  LABEL_6:
    v26 = v25 + 16LL * *(_QWORD*)(v25 + 4096);
    *(_WORD*)(v26 + 4) = (unsigned __int8)*((_QWORD*)a1 + 13);
    *(_QWORD*)(v26 + 8) = 1065353216;
    v27 = *(_QWORD*)(v25 + 4096);
    *(_QWORD*)(v25 + 4096) = v27 + 1;
    v28 = a1[34];
    v29 = a2[5];
    v30 = *((_QWORD*)a1 + 15);
    if (v30 != 0) {
      goto LABEL_7;
    }
    goto LABEL_16;
  }
LABEL_15:
  v27 = -1;
  v28 = a1[34];
  v29 = a2[5];
  v30 = *((_QWORD*)a1 + 15);
  if (v30 != 0) {
  LABEL_7:
    v31 = v30 + 16LL * *(_QWORD*)(v30 + 4096);
    *(_WORD*)(v31 + 4) = (unsigned __int8)*((_QWORD*)a1 + 16);
    *(_QWORD*)(v31 + 8) = 1065353216;
    v32 = *(_QWORD*)(v30 + 4096);
    *(_QWORD*)(v30 + 4096) = v32 + 1;
    v33 = a1[40];
    v34 = a2[6];
    v35 = *((_QWORD*)a1 + 18);
    if (v35 != 0) {
      goto LABEL_8;
    }
    goto LABEL_17;
  }
LABEL_16:
  v32 = -1;
  v33 = a1[40];
  v34 = a2[6];
  v35 = *((_QWORD*)a1 + 18);
  if (v35 != 0) {
  LABEL_8:
    v36 = v35 + 16LL * *(_QWORD*)(v35 + 4096);
    *(_WORD*)(v36 + 4) = (unsigned __int8)*((_QWORD*)a1 + 19);
    *(_QWORD*)(v36 + 8) = 1065353216;
    v37 = *(_QWORD*)(v35 + 4096);
    *(_QWORD*)(v35 + 4096) = v37 + 1;
    v38 = a1[46];
    v39 = a2[7];
    v40 = *((_QWORD*)a1 + 21);
    if (v40 != 0) {
      goto LABEL_9;
    }
  LABEL_18:
    v42 = -1;
    v43 = a1[52];
    v44 = a2[8];
    v45 = *((_QWORD*)a1 + 24);
    if (v45 != 0) {
      goto LABEL_10;
    }
  LABEL_19:
    v47 = -1;
    goto LABEL_20;
  }
LABEL_17:
  v37 = -1;
  v38 = a1[46];
  v39 = a2[7];
  v40 = *((_QWORD*)a1 + 21);
  if (v40 == 0) {
    goto LABEL_18;
  }
LABEL_9:
  v41 = v40 + 16LL * *(_QWORD*)(v40 + 4096);
  *(_WORD*)(v41 + 4) = (unsigned __int8)*((_QWORD*)a1 + 22);
  *(_QWORD*)(v41 + 8) = 1065353216;
  v42 = *(_QWORD*)(v40 + 4096);
  *(_QWORD*)(v40 + 4096) = v42 + 1;
  v43 = a1[52];
  v44 = a2[8];
  v45 = *((_QWORD*)a1 + 24);
  if (v45 == 0) {
    goto LABEL_19;
  }
LABEL_10:
  v46 = v45 + 16LL * *(_QWORD*)(v45 + 4096);
  *(_WORD*)(v46 + 4) = (unsigned __int8)*((_QWORD*)a1 + 25);
  *(_QWORD*)(v46 + 8) = 1065353216;
  v47 = *(_QWORD*)(v45 + 4096);
  *(_QWORD*)(v45 + 4096) = v47 + 1;
LABEL_20:
  *(_QWORD*)a3 = v5;
  *(_QWORD*)(a3 + 8) = v7;
  *(_DWORD*)(a3 + 20) = 0;
  *(_QWORD*)(a3 + 24) = v10;
  *(_QWORD*)(a3 + 32) = v12;
  *(_DWORD*)(a3 + 44) = 0;
  *(_QWORD*)(a3 + 48) = v15;
  *(_QWORD*)(a3 + 56) = v17;
  *(_DWORD*)(a3 + 68) = 0;
  *(_QWORD*)(a3 + 72) = v20;
  *(_QWORD*)(a3 + 80) = v22;
  *(_DWORD*)(a3 + 92) = 0;
  *(_QWORD*)(a3 + 96) = v25;
  *(_QWORD*)(a3 + 104) = v27;
  *(_DWORD*)(a3 + 116) = 0;
  *(_QWORD*)(a3 + 120) = v30;
  *(_QWORD*)(a3 + 128) = v32;
  *(_DWORD*)(a3 + 140) = 0;
  *(_QWORD*)(a3 + 144) = v35;
  *(_QWORD*)(a3 + 152) = v37;
  *(_DWORD*)(a3 + 164) = 0;
  *(_QWORD*)(a3 + 168) = v40;
  *(_QWORD*)(a3 + 176) = v42;
  *(_DWORD*)(a3 + 188) = 0;
  *(_QWORD*)(a3 + 192) = v45;
  *(_QWORD*)(a3 + 200) = v47;
  *(float*)(a3 + 16) = v3 + v4;
  *(float*)(a3 + 88) = v18 + v19;
  *(float*)(a3 + 112) = v23 + v24;
  *(float*)(a3 + 136) = v28 + v29;
  *(float*)(a3 + 160) = v33 + v34;
  *(float*)(a3 + 184) = v38 + v39;
  *(float*)(a3 + 208) = v43 + v44;
  *(_DWORD*)(a3 + 212) = 0;
  *(float*)(a3 + 40) = v8 + v9;
  *(float*)(a3 + 64) = v13 + v14;
  {
    v13 + v14;
    return;
  }
}

__attribute__((swiftcall)) void math_716760(PSEUDO_X8 x8_, float* a1)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  float v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char v13;
  __int64 v14;
  float v15;
  char v16;
  __int64 v17;
  __int64 v18;
  float v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  int v24;
  float v25;
  bool v26;
  char v27;
  __int64 v28;
  float result;

  v2 = a1[4];
  v3 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 != 0) {
    v4 = *((_BYTE*)a1 + 8);
    v5 = v3 + 16LL * *(_QWORD*)(v3 + 4096);
    *(_BYTE*)(v5 + 4) = v4;
    *(_BYTE*)(v5 + 5) = v4;
    *(float*)(v5 + 8) = v2;
    *(float*)(v5 + 12) = v2;
    v6 = *(_QWORD*)(v3 + 4096);
    *(_QWORD*)(v3 + 4096) = v6 + 1;
    v7 = v3 + 16 * (v6 + 1);
    *(_WORD*)(v7 + 4) = (unsigned __int8)v6;
    *(_DWORD*)(v7 + 8) = 1065353216;
    *(_DWORD*)(v7 + 12) = 0;
    v8 = *(_QWORD*)(v3 + 4096);
    *(_QWORD*)(v3 + 4096) = v8 + 1;
    v9 = a1[10];
    v10 = *((_QWORD*)a1 + 3);
    if (v10 == 0) {
      LOBYTE(v11) = -1;
      v12 = 1;
      goto LABEL_8;
    }
  }
  else {
    v9 = a1[10];
    v10 = *((_QWORD*)a1 + 3);
    if (v10 == 0) {
      v19 = a1[16];
      v20 = *((_QWORD*)a1 + 6);
      v18 = -1;
      v3 = 0;
      if (v20 == 0) {
        goto LABEL_27;
      }
      goto LABEL_16;
    }
    LOBYTE(v8) = -1;
  }
  v13 = *((_BYTE*)a1 + 32);
  v14 = v10 + 16LL * *(_QWORD*)(v10 + 4096);
  *(_BYTE*)(v14 + 4) = v13;
  *(_BYTE*)(v14 + 5) = v13;
  *(float*)(v14 + 8) = v9;
  *(float*)(v14 + 12) = v9;
  v11 = *(_QWORD*)(v10 + 4096);
  *(_QWORD*)(v10 + 4096) = v11 + 1;
  if (v3 == 0) {
    v16 = 0;
    v15 = 0x0.0p+0f;
    v3 = v10;
    goto LABEL_15;
  }
  v12 = 0;
LABEL_8:
  v15 = 0x1.0000000000000p+0f;
  if (v12 != 0) {
    v16 = 0;
  }
  else {
    v16 = v11;
  }
  LOBYTE(v11) = v8;
  if (v12 != 0) {
    v15 = 0x0.0p+0f;
  }
LABEL_15:
  v17 = v3 + 16LL * *(_QWORD*)(v3 + 4096);
  *(_BYTE*)(v17 + 4) = v11;
  *(_BYTE*)(v17 + 5) = v16;
  *(float*)(v17 + 12) = v15;
  *(_DWORD*)(v17 + 8) = 1065353216;
  v18 = *(_QWORD*)(v3 + 4096);
  *(_QWORD*)(v3 + 4096) = v18 + 1;
  v19 = a1[16];
  v20 = *((_QWORD*)a1 + 6);
  if (v20 == 0) {
    LOBYTE(v23) = -1;
    v24 = 1;
    goto LABEL_19;
  }
LABEL_16:
  v21 = *((_BYTE*)a1 + 56);
  v22 = v20 + 16LL * *(_QWORD*)(v20 + 4096);
  *(_BYTE*)(v22 + 4) = v21;
  *(_BYTE*)(v22 + 5) = v21;
  *(float*)(v22 + 8) = v19;
  *(float*)(v22 + 12) = v19;
  v23 = *(_QWORD*)(v20 + 4096);
  *(_QWORD*)(v20 + 4096) = v23 + 1;
  if (v3 != 0) {
    v24 = 0;
  LABEL_19:
    v25 = 0x1.0000000000000p+0f;
    v26 = v24 == 0;
    v20 = v3;
    if (v26) {
      v27 = v23;
    }
    else {
      v27 = 0;
    }
    LOBYTE(v23) = v18;
    if (!v26) {
      v25 = 0x0.0p+0f;
    }
    goto LABEL_26;
  }
  v27 = 0;
  v25 = 0x0.0p+0f;
LABEL_26:
  v28 = v20 + 16LL * *(_QWORD*)(v20 + 4096);
  *(_BYTE*)(v28 + 4) = v23;
  *(_BYTE*)(v28 + 5) = v27;
  *(_DWORD*)(v28 + 8) = 1065353216;
  *(float*)(v28 + 12) = v25;
  v10 = v20;
  v18 = *(_QWORD*)(v20 + 4096);
  *(_QWORD*)(v20 + 4096) = v18 + 1;
LABEL_27:
  *(_QWORD*)a2 = v10;
  *(_QWORD*)(a2 + 8) = v18;
  *(_DWORD*)(a2 + 20) = 0;
  result = (float)((float)(v2 * v2) + (float)(v9 * v9)) + (float)(v19 * v19);
  *(float*)(a2 + 16) = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nerd_linear_algebra_cross(PSEUDO_X8 x8_, __int64* a1, float* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  float v3;
  float v4;
  __int64 v5;
  float v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  float* v12;
  float v13;
  float* v14;
  float v15;
  char v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  char v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  float v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  __int64 v32;
  char v33;
  __int64 v34;
  float v35;
  float v36;
  __int64 v37;
  float v38;
  __int64 v39;
  __int64 v40;
  float v41;
  __int64 v42;
  float v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float v47;
  float v48;
  __int64 v49;
  char v50;
  __int64 v51;
  float v52;
  float v53;
  __int64 v54;
  float v55;
  __int64 v56;
  __int64 v57;
  float result;

  v3 = *((float*)a1 + 10);
  v4 = a2[2];
  v5 = a1[3];
  if (v5 != 0) {
    v6 = v3 * v4;
    v7 = v5 + 16LL * *(_QWORD*)(v5 + 4096);
    *(_WORD*)(v7 + 4) = (unsigned __int8)a1[4];
    *(float*)(v7 + 8) = v4;
    *(_DWORD*)(v7 + 12) = 0;
    v8 = *(_QWORD*)(v5 + 4096);
    v9 = v8 + 1;
    *(_QWORD*)(v5 + 4096) = v8 + 1;
    v10 = a1 + 6;
    v11 = a1[6];
    v12 = a2 + 1;
    v13 = a2[1];
    v14 = (float*)(a1 + 8);
    v15 = *((float*)a1 + 16);
    if (v11 == 0) {
      v21 = 0;
      v18 = v15 * v13;
      v19 = 0x0.0p+0f;
      v20 = 0x1.0000000000000p+0f;
      goto LABEL_10;
    }
    v16 = v8;
  }
  else {
    v10 = a1 + 6;
    v11 = a1[6];
    v6 = v3 * v4;
    v12 = a2 + 1;
    v13 = a2[1];
    v14 = (float*)(a1 + 8);
    v15 = *((float*)a1 + 16);
    if (v11 == 0) {
      v24 = *a2;
      v5 = 0;
      v18 = v15 * v13;
      v23 = -1;
      goto LABEL_15;
    }
    v16 = -1;
  }
  v17 = v11 + 16LL * *(_QWORD*)(v11 + 4096);
  *(_WORD*)(v17 + 4) = (unsigned __int8)a1[7];
  *(float*)(v17 + 8) = v13;
  v18 = v13 * v15;
  *(_DWORD*)(v17 + 12) = 0;
  v8 = *(_QWORD*)(v11 + 4096);
  v9 = v8 + 1;
  *(_QWORD*)(v11 + 4096) = v8 + 1;
  if (v5 != 0) {
    v9 = *(_QWORD*)(v5 + 4096);
    v19 = -0x1.0000000000000p+0f;
    v20 = 0x1.0000000000000p+0f;
    v21 = v8;
    LOBYTE(v8) = v16;
  }
  else {
    v21 = 0;
    v19 = 0x0.0p+0f;
    v20 = -0x1.0000000000000p+0f;
    v5 = v11;
  }
LABEL_10:
  v22 = v5 + 16 * v9;
  *(_BYTE*)(v22 + 4) = v8;
  *(_BYTE*)(v22 + 5) = v21;
  *(float*)(v22 + 8) = v20;
  *(float*)(v22 + 12) = v19;
  v23 = *(_QWORD*)(v5 + 4096);
  *(_QWORD*)(v5 + 4096) = v23 + 1;
  v15 = *v14;
  v24 = *a2;
  v25 = *v10;
  if (*v10 == 0) {
  LABEL_15:
    v26 = v15 * v24;
    v30 = *((float*)a1 + 4);
    v31 = a2[2];
    v32 = *a1;
    if (*a1 == 0) {
      v41 = *v12;
      v25 = 0;
      v35 = v30 * v31;
      v40 = -1;
      goto LABEL_26;
    }
    LOBYTE(v28) = -1;
    v33 = 1;
    v25 = 0;
    goto LABEL_17;
  }
  v26 = v15 * v24;
  v27 = v25 + 16LL * *(_QWORD*)(v25 + 4096);
  *(_WORD*)(v27 + 4) = (unsigned __int8)v10[1];
  *(float*)(v27 + 8) = v24;
  *(_DWORD*)(v27 + 12) = 0;
  v28 = *(_QWORD*)(v25 + 4096);
  v29 = v28 + 1;
  *(_QWORD*)(v25 + 4096) = v28 + 1;
  v30 = *((float*)a1 + 4);
  v31 = a2[2];
  v32 = *a1;
  if (*a1 == 0) {
    LOBYTE(v34) = 0;
    v35 = v30 * v31;
    v36 = 0x0.0p+0f;
    goto LABEL_20;
  }
  v33 = 0;
LABEL_17:
  v37 = v32 + 16LL * *(_QWORD*)(v32 + 4096);
  *(_WORD*)(v37 + 4) = (unsigned __int8)a1[1];
  *(float*)(v37 + 8) = v31;
  *(_DWORD*)(v37 + 12) = 0;
  v35 = v31 * v30;
  v34 = *(_QWORD*)(v32 + 4096);
  v29 = v34 + 1;
  *(_QWORD*)(v32 + 4096) = v34 + 1;
  if ((v33 & 1) != 0) {
    v36 = 0x0.0p+0f;
    v38 = -0x1.0000000000000p+0f;
    v25 = v32;
    LOBYTE(v28) = v34;
    LOBYTE(v34) = 0;
    goto LABEL_21;
  }
  v29 = *(_QWORD*)(v25 + 4096);
  v36 = -0x1.0000000000000p+0f;
LABEL_20:
  v38 = 0x1.0000000000000p+0f;
LABEL_21:
  v39 = v25 + 16 * v29;
  *(_BYTE*)(v39 + 4) = v28;
  *(_BYTE*)(v39 + 5) = v34;
  *(float*)(v39 + 8) = v38;
  *(float*)(v39 + 12) = v36;
  v40 = *(_QWORD*)(v25 + 4096);
  *(_QWORD*)(v25 + 4096) = v40 + 1;
  v30 = *((float*)a1 + 4);
  v41 = *v12;
  v42 = *a1;
  if (*a1 == 0) {
  LABEL_26:
    v43 = v30 * v41;
    v47 = *((float*)a1 + 10);
    v48 = *a2;
    v49 = a1[3];
    if (v49 == 0) {
      v42 = 0;
      v52 = v47 * v48;
      v57 = -1;
      goto LABEL_33;
    }
    LOBYTE(v45) = -1;
    v50 = 1;
    v42 = 0;
    goto LABEL_28;
  }
  v43 = v30 * v41;
  v44 = v42 + 16LL * *(_QWORD*)(v42 + 4096);
  *(_WORD*)(v44 + 4) = (unsigned __int8)a1[1];
  *(float*)(v44 + 8) = v41;
  *(_DWORD*)(v44 + 12) = 0;
  v45 = *(_QWORD*)(v42 + 4096);
  v46 = v45 + 1;
  *(_QWORD*)(v42 + 4096) = v45 + 1;
  v47 = *((float*)a1 + 10);
  v48 = *a2;
  v49 = a1[3];
  if (v49 == 0) {
    LOBYTE(v51) = 0;
    v52 = v47 * v48;
    v53 = 0x0.0p+0f;
  LABEL_31:
    v55 = 0x1.0000000000000p+0f;
    goto LABEL_32;
  }
  v50 = 0;
LABEL_28:
  v52 = v48 * v47;
  v54 = v49 + 16LL * *(_QWORD*)(v49 + 4096);
  *(_WORD*)(v54 + 4) = (unsigned __int8)a1[4];
  *(float*)(v54 + 8) = v48;
  *(_DWORD*)(v54 + 12) = 0;
  v51 = *(_QWORD*)(v49 + 4096);
  v46 = v51 + 1;
  *(_QWORD*)(v49 + 4096) = v51 + 1;
  if ((v50 & 1) == 0) {
    v46 = *(_QWORD*)(v42 + 4096);
    v53 = -0x1.0000000000000p+0f;
    goto LABEL_31;
  }
  v53 = 0x0.0p+0f;
  v55 = -0x1.0000000000000p+0f;
  v42 = v49;
  LOBYTE(v45) = v51;
  LOBYTE(v51) = 0;
LABEL_32:
  v56 = v42 + 16 * v46;
  *(_BYTE*)(v56 + 4) = v45;
  *(_BYTE*)(v56 + 5) = v51;
  *(float*)(v56 + 8) = v55;
  *(float*)(v56 + 12) = v53;
  v57 = *(_QWORD*)(v42 + 4096);
  *(_QWORD*)(v42 + 4096) = v57 + 1;
LABEL_33:
  result = v6 - v18;
  *((_QWORD*)a3 + 1) = v23;
  *((_QWORD*)a3 + 2) = 0;
  *((_QWORD*)a3 + 7) = v57;
  *((_QWORD*)a3 + 8) = 0;
  *(_QWORD*)a3 = v5;
  *((_QWORD*)a3 + 3) = v25;
  *((_QWORD*)a3 + 4) = v40;
  *((_QWORD*)a3 + 5) = 0;
  *((_QWORD*)a3 + 6) = v42;
  a3[4] = result;
  a3[10] = v26 - v35;
  a3[16] = v43 - v52;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void linear_algebra_716c90(PSEUDO_X8 x8_, float** a1,
                                                      float* a2)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  float* v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  float v28;
  bool v29;
  __int64 v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  float result;

  v3 = *a1;
  v4 = *a2;
  v5 = (*a1)[4];
  v6 = *(_QWORD*)*a1;
  if (v6 != 0) {
    v7 = *((_QWORD*)v3 + 1);
    v8 = v6 + 16LL * *(_QWORD*)(v6 + 4096);
    *(_WORD*)(v8 + 4) = (unsigned __int8)v7;
    *(float*)(v8 + 8) = v4;
    *(_DWORD*)(v8 + 12) = 0;
    v9 = *(_QWORD*)(v6 + 4096);
    *(_QWORD*)(v6 + 4096) = v9 + 1;
    v10 = v6 + 16 * (v9 + 1);
    *(_WORD*)(v10 + 4) = (unsigned __int8)v9;
    *(_DWORD*)(v10 + 8) = 1065353216;
    *(_DWORD*)(v10 + 12) = 0;
    v11 = *(_QWORD*)(v6 + 4096);
    *(_QWORD*)(v6 + 4096) = v11 + 1;
    v3 = *a1;
    v12 = a2[1];
    v13 = (*a1)[10];
    v14 = *((_QWORD*)*a1 + 3);
    if (v14 == 0) {
      LOBYTE(v15) = 0;
      v16 = v13 * v12;
      v17 = 0x0.0p+0f;
      goto LABEL_13;
    }
  }
  else {
    v13 = v3[10];
    v12 = a2[1];
    v14 = *((_QWORD*)v3 + 3);
    if (v14 == 0) {
      v16 = v13 * v12;
      v25 = v3[16];
      v24 = a2[2];
      v26 = *((_QWORD*)v3 + 6);
      if (v26 == 0) {
        v6 = 0;
        v28 = v25 * v24;
        v35 = -1;
        goto LABEL_23;
      }
      LOBYTE(v23) = -1;
      v6 = 0;
      goto LABEL_14;
    }
    LOBYTE(v11) = -1;
  }
  v18 = *((_QWORD*)v3 + 4);
  v16 = v13 * v12;
  v19 = v6 == 0;
  if (v6 == 0) {
    v6 = v14;
  }
  v20 = v14 + 16LL * *(_QWORD*)(v14 + 4096);
  *(_BYTE*)(v20 + 4) = v18;
  *(_BYTE*)(v20 + 5) = 0;
  *(float*)(v20 + 8) = v12;
  v17 = 0x0.0p+0f;
  *(_DWORD*)(v20 + 12) = 0;
  v15 = *(_QWORD*)(v14 + 4096);
  if (!v19) {
    v17 = 0x1.0000000000000p+0f;
  }
  v21 = v15 + 1;
  if (v19) {
    v11 = *(_QWORD*)(v14 + 4096);
    LOBYTE(v15) = 0;
  }
  *(_QWORD*)(v14 + 4096) = v21;
LABEL_13:
  v22 = v6 + 16LL * *(_QWORD*)(v6 + 4096);
  *(_BYTE*)(v22 + 4) = v11;
  *(_BYTE*)(v22 + 5) = v15;
  *(float*)(v22 + 12) = v17;
  *(_DWORD*)(v22 + 8) = 1065353216;
  v23 = *(_QWORD*)(v6 + 4096);
  *(_QWORD*)(v6 + 4096) = v23 + 1;
  v3 = *a1;
  v24 = a2[2];
  v25 = (*a1)[16];
  v26 = *((_QWORD*)*a1 + 6);
  if (v26 != 0) {
  LABEL_14:
    v27 = *((_QWORD*)v3 + 7);
    v28 = v25 * v24;
    v29 = v6 == 0;
    if (v6 == 0) {
      v6 = v26;
    }
    v30 = v26 + 16LL * *(_QWORD*)(v26 + 4096);
    *(_BYTE*)(v30 + 4) = v27;
    *(_BYTE*)(v30 + 5) = 0;
    *(float*)(v30 + 8) = v24;
    v31 = 0x0.0p+0f;
    *(_DWORD*)(v30 + 12) = 0;
    v32 = *(_QWORD*)(v26 + 4096);
    if (!v29) {
      v31 = 0x1.0000000000000p+0f;
    }
    v33 = v32 + 1;
    if (v29) {
      v23 = *(_QWORD*)(v26 + 4096);
      LOBYTE(v32) = 0;
    }
    *(_QWORD*)(v26 + 4096) = v33;
    goto LABEL_22;
  }
  LOBYTE(v32) = 0;
  v28 = v25 * v24;
  v31 = 0x0.0p+0f;
LABEL_22:
  v34 = v6 + 16LL * *(_QWORD*)(v6 + 4096);
  *(_BYTE*)(v34 + 4) = v23;
  *(_BYTE*)(v34 + 5) = v32;
  *(float*)(v34 + 12) = v31;
  *(_DWORD*)(v34 + 8) = 1065353216;
  v35 = *(_QWORD*)(v6 + 4096);
  *(_QWORD*)(v6 + 4096) = v35 + 1;
LABEL_23:
  *(_QWORD*)a3 = v6;
  *(_QWORD*)(a3 + 8) = v35;
  *(_DWORD*)(a3 + 20) = 0;
  result = (float)((float)((float)(v5 * v4) + 0x0.0p+0f) + v16) + v28;
  *(float*)(a3 + 16) = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_71a690(PSEUDO_X8 x8_, __int64 a1,
                                            _QWORD* a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  float result;

  v4 = a1 + 16;
  v5 = *a3;
  v6 = a3[1];
  v7 = a3[8];
  v8 = a3[2];
  v9 = a3[3];
  v10 = a3[4];
  v11 = a3[5];
  v12 = a3[6];
  v13 = a3[7];
  v14 = 33LL * *a2;
  v15 = 33LL * a2[1];
  v16 = *(_DWORD*)(v4 + 4 * (v14 + v6));
  *(_DWORD*)a4 = *(_DWORD*)(v4 + 4 * (v14 + v5));
  *(_DWORD*)(a4 + 4) = v16;
  v17 = *(_DWORD*)(v4 + 4 * (v14 + v9));
  *(_DWORD*)(a4 + 8) = *(_DWORD*)(v4 + 4 * (v14 + v8));
  *(_DWORD*)(a4 + 12) = v17;
  v18 = *(_DWORD*)(v4 + 4 * (v14 + v11));
  *(_DWORD*)(a4 + 16) = *(_DWORD*)(v4 + 4 * (v14 + v10));
  *(_DWORD*)(a4 + 20) = v18;
  v19 = *(_DWORD*)(v4 + 4 * (v14 + v13));
  *(_DWORD*)(a4 + 24) = *(_DWORD*)(v4 + 4 * (v14 + v12));
  *(_DWORD*)(a4 + 28) = v19;
  v20 = *(_DWORD*)(v4 + 4 * (v15 + v5));
  *(_DWORD*)(a4 + 32) = *(_DWORD*)(v4 + 4 * (v14 + v7));
  *(_DWORD*)(a4 + 36) = v20;
  v21 = *(_DWORD*)(v4 + 4 * (v15 + v8));
  *(_DWORD*)(a4 + 40) = *(_DWORD*)(v4 + 4 * (v15 + v6));
  *(_DWORD*)(a4 + 44) = v21;
  v22 = *(_DWORD*)(v4 + 4 * (v15 + v10));
  *(_DWORD*)(a4 + 48) = *(_DWORD*)(v4 + 4 * (v15 + v9));
  *(_DWORD*)(a4 + 52) = v22;
  v23 = *(_DWORD*)(v4 + 4 * (v15 + v12));
  *(_DWORD*)(a4 + 56) = *(_DWORD*)(v4 + 4 * (v15 + v11));
  *(_DWORD*)(a4 + 60) = v23;
  v24 = *(_DWORD*)(v4 + 4 * (v15 + v13));
  v25 = *(_DWORD*)(v4 + 4 * (v15 + v7));
  v26 = a2[3];
  v27 = 33LL * a2[2];
  *(_DWORD*)(a4 + 64) = v24;
  *(_DWORD*)(a4 + 68) = v25;
  v28 = *(_DWORD*)(v4 + 4 * (v27 + v6));
  *(_DWORD*)(a4 + 72) = *(_DWORD*)(v4 + 4 * (v27 + v5));
  *(_DWORD*)(a4 + 76) = v28;
  v29 = *(_DWORD*)(v4 + 4 * (v27 + v9));
  *(_DWORD*)(a4 + 80) = *(_DWORD*)(v4 + 4 * (v27 + v8));
  *(_DWORD*)(a4 + 84) = v29;
  v30 = *(_DWORD*)(v4 + 4 * (v27 + v11));
  *(_DWORD*)(a4 + 88) = *(_DWORD*)(v4 + 4 * (v27 + v10));
  *(_DWORD*)(a4 + 92) = v30;
  v31 = *(_DWORD*)(v4 + 4 * (v27 + v13));
  *(_DWORD*)(a4 + 96) = *(_DWORD*)(v4 + 4 * (v27 + v12));
  *(_DWORD*)(a4 + 100) = v31;
  v32 = *(_DWORD*)(v4 + 4 * (33 * v26 + v5));
  *(_DWORD*)(a4 + 104) = *(_DWORD*)(v4 + 4 * (v27 + v7));
  *(_DWORD*)(a4 + 108) = v32;
  v33 = *(_DWORD*)(v4 + 4 * (33 * v26 + v8));
  *(_DWORD*)(a4 + 112) = *(_DWORD*)(v4 + 4 * (33 * v26 + v6));
  *(_DWORD*)(a4 + 116) = v33;
  v34 = *(_DWORD*)(v4 + 4 * (33 * v26 + v10));
  *(_DWORD*)(a4 + 120) = *(_DWORD*)(v4 + 4 * (33 * v26 + v9));
  *(_DWORD*)(a4 + 124) = v34;
  v35 = *(_DWORD*)(v4 + 4 * (33 * v26 + v12));
  *(_DWORD*)(a4 + 128) = *(_DWORD*)(v4 + 4 * (33 * v26 + v11));
  *(_DWORD*)(a4 + 132) = v35;
  v36 = *(_DWORD*)(v4 + 4 * (33 * v26 + v7));
  *(_DWORD*)(a4 + 136) = *(_DWORD*)(v4 + 4 * (33 * v26 + v13));
  *(_DWORD*)(a4 + 140) = v36;
  v37 = a2[5];
  v38 = 33LL * a2[4];
  v39 = *(_DWORD*)(v4 + 4 * (v38 + v6));
  *(_DWORD*)(a4 + 144) = *(_DWORD*)(v4 + 4 * (v38 + v5));
  *(_DWORD*)(a4 + 148) = v39;
  v40 = *(_DWORD*)(v4 + 4 * (v38 + v9));
  *(_DWORD*)(a4 + 152) = *(_DWORD*)(v4 + 4 * (v38 + v8));
  *(_DWORD*)(a4 + 156) = v40;
  v41 = *(_DWORD*)(v4 + 4 * (v38 + v11));
  *(_DWORD*)(a4 + 160) = *(_DWORD*)(v4 + 4 * (v38 + v10));
  *(_DWORD*)(a4 + 164) = v41;
  v42 = *(_DWORD*)(v4 + 4 * (v38 + v13));
  *(_DWORD*)(a4 + 168) = *(_DWORD*)(v4 + 4 * (v38 + v12));
  *(_DWORD*)(a4 + 172) = v42;
  v43 = *(_DWORD*)(v4 + 4 * (33 * v37 + v5));
  *(_DWORD*)(a4 + 176) = *(_DWORD*)(v4 + 4 * (v38 + v7));
  *(_DWORD*)(a4 + 180) = v43;
  v44 = *(_DWORD*)(v4 + 4 * (33 * v37 + v8));
  *(_DWORD*)(a4 + 184) = *(_DWORD*)(v4 + 4 * (33 * v37 + v6));
  *(_DWORD*)(a4 + 188) = v44;
  v45 = *(_DWORD*)(v4 + 4 * (33 * v37 + v10));
  *(_DWORD*)(a4 + 192) = *(_DWORD*)(v4 + 4 * (33 * v37 + v9));
  *(_DWORD*)(a4 + 196) = v45;
  v46 = *(_DWORD*)(v4 + 4 * (33 * v37 + v12));
  *(_DWORD*)(a4 + 200) = *(_DWORD*)(v4 + 4 * (33 * v37 + v11));
  *(_DWORD*)(a4 + 204) = v46;
  v47 = *(_DWORD*)(v4 + 4 * (33 * v37 + v13));
  v48 = *(_DWORD*)(v4 + 4 * (33 * v37 + v7));
  v49 = a2[7];
  v50 = 33LL * a2[6];
  *(_DWORD*)(a4 + 208) = v47;
  *(_DWORD*)(a4 + 212) = v48;
  v51 = *(_DWORD*)(v4 + 4 * (v50 + v6));
  *(_DWORD*)(a4 + 216) = *(_DWORD*)(v4 + 4 * (v50 + v5));
  *(_DWORD*)(a4 + 220) = v51;
  v52 = *(_DWORD*)(v4 + 4 * (v50 + v9));
  *(_DWORD*)(a4 + 224) = *(_DWORD*)(v4 + 4 * (v50 + v8));
  *(_DWORD*)(a4 + 228) = v52;
  v53 = *(_DWORD*)(v4 + 4 * (v50 + v11));
  *(_DWORD*)(a4 + 232) = *(_DWORD*)(v4 + 4 * (v50 + v10));
  *(_DWORD*)(a4 + 236) = v53;
  v54 = *(_DWORD*)(v4 + 4 * (v50 + v13));
  *(_DWORD*)(a4 + 240) = *(_DWORD*)(v4 + 4 * (v50 + v12));
  *(_DWORD*)(a4 + 244) = v54;
  v55 = *(_DWORD*)(v4 + 4 * (33 * v49 + v5));
  *(_DWORD*)(a4 + 248) = *(_DWORD*)(v4 + 4 * (v50 + v7));
  *(_DWORD*)(a4 + 252) = v55;
  *(_DWORD*)(a4 + 256) = *(_DWORD*)(v4 + 4 * (33 * v49 + v6));
  *(_DWORD*)(a4 + 260) = *(_DWORD*)(v4 + 4 * (33 * v49 + v8));
  *(_DWORD*)(a4 + 264) = *(_DWORD*)(v4 + 4 * (33 * v49 + v9));
  *(_DWORD*)(a4 + 268) = *(_DWORD*)(v4 + 4 * (33 * v49 + v10));
  *(_DWORD*)(a4 + 272) = *(_DWORD*)(v4 + 4 * (33 * v49 + v11));
  *(_DWORD*)(a4 + 276) = *(_DWORD*)(v4 + 4 * (33 * v49 + v12));
  *(_DWORD*)(a4 + 280) = *(_DWORD*)(v4 + 4 * (33 * v49 + v13));
  v56 = 33LL * a2[8];
  *(_DWORD*)(a4 + 284) = *(_DWORD*)(v4 + 4 * (33 * v49 + v7));
  *(_DWORD*)(a4 + 288) = *(_DWORD*)(v4 + 4 * (v56 + v5));
  *(_DWORD*)(a4 + 292) = *(_DWORD*)(v4 + 4 * (v56 + v6));
  *(_DWORD*)(a4 + 296) = *(_DWORD*)(v4 + 4 * (v56 + v8));
  *(_DWORD*)(a4 + 300) = *(_DWORD*)(v4 + 4 * (v56 + v9));
  *(_DWORD*)(a4 + 304) = *(_DWORD*)(v4 + 4 * (v56 + v10));
  *(_DWORD*)(a4 + 308) = *(_DWORD*)(v4 + 4 * (v56 + v11));
  *(_DWORD*)(a4 + 312) = *(_DWORD*)(v4 + 4 * (v56 + v12));
  *(_DWORD*)(a4 + 316) = *(_DWORD*)(v4 + 4 * (v56 + v13));
  result = *(float*)(v4 + 4 * (v56 + v7));
  *(float*)(a4 + 320) = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_71be60(PSEUDO_X8 x8_, __int64 a1,
                                            _QWORD* a2, __int64 a3,
                                            unsigned __int64 a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v5;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int* v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  char* v30;
  __int64* v31;
  _DWORD* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  int* v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  char* v51;
  __int64* v52;
  _DWORD* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  int* v60;
  int v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  int v66;
  int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  int v71;
  char* v72;
  __int64* v73;
  _DWORD* v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  int* v81;
  int v82;
  int v83;
  int v84;
  __int64 v85;
  __int64 v86;
  int v87;
  int v88;
  __int64 v89;
  __int64 v90;
  int v91;
  int v92;
  char* v93;
  __int64* v94;
  _DWORD* v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  int* v102;
  int v103;
  int v104;
  int v105;
  __int64 v106;
  __int64 v107;
  int v108;
  int v109;
  __int64 v110;
  __int64 v111;
  int v112;
  int v113;
  char* v114;
  __int64* v115;
  _DWORD* v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64 v122;
  int* v123;
  int v124;
  int v125;
  int v126;
  __int64 v127;
  __int64 v128;
  int v129;
  int v130;
  __int64 v131;
  __int64 v132;
  int v133;
  int v134;
  char* v135;
  __int64* v136;
  _DWORD* v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64* v142;
  __int64 v143;
  int* v144;
  int v145;
  int v146;
  int v147;
  __int64 v148;
  __int64 v149;
  int v150;
  int v151;
  __int64 v152;
  __int64 v153;
  int v154;
  int v155;
  char* v156;
  __int64* v157;
  _DWORD* v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64* v163;
  __int64 v164;
  int* v165;
  int v166;
  int v167;
  int v168;
  __int64 v169;
  __int64 v170;
  int v171;
  int v172;
  __int64 v173;
  __int64 v174;
  int v175;
  int v176;
  char* v177;
  __int64* v178;
  _DWORD* v179;
  __int64 v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64* v184;
  __int64 v185;
  int* v186;
  int v187;
  int v188;
  int v189;
  __int64 v190;
  __int64 v191;
  int v192;
  int v193;
  __int64 v194;
  __int64 v195;
  int v196;
  int v197;
  char* v198;
  __int64* v199;
  _DWORD* v200;
  __int64 v201;
  struct {
    unsigned __int64 v203;
    __int64 v204;
    char gap24_[4];
    int v205;
    char gap32_[108];
    int v206;
    char gap144_[92];
    int v207;
    char gap240_[92];
    int v208;
    char gap336_[92];
    int v209;
    char gap432_[92];
    int v210;
    char gap528_[92];
    int v211;
    char gap624_[92];
    int v212;
    char gap720_[92];
    int v213;
  } v203_;

  v203_.v203 = *(_QWORD*)(a3 + 192);
  v5 = v203_.v203;
  memset_plt((void*)&v203_.v204, nullptr, 864, a4);
  if (v203_.v203 == 0) {
    memcpy_plt(a5, &v203_.v203, 872);
    return;
  }
  v10 = a1 + 16;
  v11 = v203_.v203 & 7;
  v12 = 33LL * *a2;
  if (v203_.v203 < 8) {
    v13 = 0;
    v14 = v203_.v203 - 1;
    if ((v203_.v203 & 7) == 0) {
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v15 = (__int64*)(a3 + 32);
  v16 = 0;
  v17 = -(__int64)(v203_.v203 & 0xFFFFFFFFFFFFFFF8LL);
  v18 = &v203_.v205;
  do {
    v16 -= 8;
    v19 = *(_DWORD*)(v10 + 4 * (v12 + *(v15 - 3)));
    v20 = *(_DWORD*)(v10 + 4 * (v12 + *(v15 - 2)));
    v21 = *(_DWORD*)(v10 + 4 * (v12 + *(v15 - 1)));
    v22 = *v15;
    v23 = v15[1];
    *(v18 - 3) = *(_DWORD*)(v10 + 4 * (v12 + *(v15 - 4)));
    *(v18 - 2) = v19;
    v24 = *(_DWORD*)(v10 + 4 * (v12 + v22));
    v25 = *(_DWORD*)(v10 + 4 * (v12 + v23));
    v26 = v15[2];
    v27 = v15[3];
    *(v18 - 1) = v20;
    *v18 = v21;
    v15 += 8;
    v28 = *(_DWORD*)(v10 + 4 * (v12 + v26));
    v18[1] = v24;
    v18[2] = v25;
    v29 = *(_DWORD*)(v10 + 4 * (v12 + v27));
    v18[3] = v28;
    v18[4] = v29;
    v18 += 8;
  } while (v17 != v16);
  v13 = -v16;
  v14 = v5 - 1;
  if (v11 != 0) {
  LABEL_8:
    v30 = (char*)&v203_.v203 + 4 * v13;
    v31 = (__int64*)(a3 + 8 * v13);
    v32 = v30 + 8;
    do {
      v33 = *v31++;
      --v11;
      *v32++ = *(_DWORD*)(v10 + 4 * (v12 + v33));
    } while (v11 != 0);
  }
LABEL_10:
  v34 = v5 & 7;
  v35 = 33LL * a2[1];
  if (v14 < 7) {
    v36 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  v37 = (__int64*)(a3 + 32);
  v38 = 0;
  v39 = &v203_.v206;
  do {
    v38 -= 8;
    v40 = *(_DWORD*)(v10 + 4 * (v35 + *(v37 - 3)));
    v41 = *(_DWORD*)(v10 + 4 * (v35 + *(v37 - 2)));
    v42 = *(_DWORD*)(v10 + 4 * (v35 + *(v37 - 1)));
    v43 = *v37;
    v44 = v37[1];
    *(v39 - 7) = *(_DWORD*)(v10 + 4 * (v35 + *(v37 - 4)));
    *(v39 - 6) = v40;
    v45 = *(_DWORD*)(v10 + 4 * (v35 + v43));
    v46 = *(_DWORD*)(v10 + 4 * (v35 + v44));
    v47 = v37[2];
    v48 = v37[3];
    *(v39 - 5) = v41;
    *(v39 - 4) = v42;
    v37 += 8;
    v49 = *(_DWORD*)(v10 + 4 * (v35 + v47));
    *(v39 - 3) = v45;
    *(v39 - 2) = v46;
    v50 = *(_DWORD*)(v10 + 4 * (v35 + v48));
    *(v39 - 1) = v49;
    *v39 = v50;
    v39 += 8;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v38);
  v36 = -v38;
  if ((v5 & 7) != 0) {
  LABEL_16:
    v51 = (char*)&v203_.v203 + 4 * v36;
    v52 = (__int64*)(a3 + 8 * v36);
    v53 = v51 + 104;
    do {
      v54 = *v52++;
      --v34;
      *v53++ = *(_DWORD*)(v10 + 4 * (v35 + v54));
    } while (v34 != 0);
  }
LABEL_18:
  v55 = v5 & 7;
  v56 = 33LL * a2[2];
  if (v14 < 7) {
    v57 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_26;
    }
    goto LABEL_24;
  }
  v58 = (__int64*)(a3 + 32);
  v59 = 0;
  v60 = &v203_.v207;
  do {
    v59 -= 8;
    v61 = *(_DWORD*)(v10 + 4 * (v56 + *(v58 - 3)));
    v62 = *(_DWORD*)(v10 + 4 * (v56 + *(v58 - 2)));
    v63 = *(_DWORD*)(v10 + 4 * (v56 + *(v58 - 1)));
    v64 = *v58;
    v65 = v58[1];
    *(v60 - 7) = *(_DWORD*)(v10 + 4 * (v56 + *(v58 - 4)));
    *(v60 - 6) = v61;
    v66 = *(_DWORD*)(v10 + 4 * (v56 + v64));
    v67 = *(_DWORD*)(v10 + 4 * (v56 + v65));
    v68 = v58[2];
    v69 = v58[3];
    *(v60 - 5) = v62;
    *(v60 - 4) = v63;
    v58 += 8;
    v70 = *(_DWORD*)(v10 + 4 * (v56 + v68));
    *(v60 - 3) = v66;
    *(v60 - 2) = v67;
    v71 = *(_DWORD*)(v10 + 4 * (v56 + v69));
    *(v60 - 1) = v70;
    *v60 = v71;
    v60 += 8;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v59);
  v57 = -v59;
  if ((v5 & 7) != 0) {
  LABEL_24:
    v72 = (char*)&v203_.v203 + 4 * v57;
    v73 = (__int64*)(a3 + 8 * v57);
    v74 = v72 + 200;
    do {
      v75 = *v73++;
      --v55;
      *v74++ = *(_DWORD*)(v10 + 4 * (v56 + v75));
    } while (v55 != 0);
  }
LABEL_26:
  v76 = v5 & 7;
  v77 = 33LL * a2[3];
  if (v14 < 7) {
    v78 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  v79 = (__int64*)(a3 + 32);
  v80 = 0;
  v81 = &v203_.v208;
  do {
    v80 -= 8;
    v82 = *(_DWORD*)(v10 + 4 * (v77 + *(v79 - 3)));
    v83 = *(_DWORD*)(v10 + 4 * (v77 + *(v79 - 2)));
    v84 = *(_DWORD*)(v10 + 4 * (v77 + *(v79 - 1)));
    v85 = *v79;
    v86 = v79[1];
    *(v81 - 7) = *(_DWORD*)(v10 + 4 * (v77 + *(v79 - 4)));
    *(v81 - 6) = v82;
    v87 = *(_DWORD*)(v10 + 4 * (v77 + v85));
    v88 = *(_DWORD*)(v10 + 4 * (v77 + v86));
    v89 = v79[2];
    v90 = v79[3];
    *(v81 - 5) = v83;
    *(v81 - 4) = v84;
    v79 += 8;
    v91 = *(_DWORD*)(v10 + 4 * (v77 + v89));
    *(v81 - 3) = v87;
    *(v81 - 2) = v88;
    v92 = *(_DWORD*)(v10 + 4 * (v77 + v90));
    *(v81 - 1) = v91;
    *v81 = v92;
    v81 += 8;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v80);
  v78 = -v80;
  if ((v5 & 7) != 0) {
  LABEL_32:
    v93 = (char*)&v203_.v203 + 4 * v78;
    v94 = (__int64*)(a3 + 8 * v78);
    v95 = v93 + 296;
    do {
      v96 = *v94++;
      --v76;
      *v95++ = *(_DWORD*)(v10 + 4 * (v77 + v96));
    } while (v76 != 0);
  }
LABEL_34:
  v97 = v5 & 7;
  v98 = 33LL * a2[4];
  if (v14 < 7) {
    v99 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_42;
    }
    goto LABEL_40;
  }
  v100 = (__int64*)(a3 + 32);
  v101 = 0;
  v102 = &v203_.v209;
  do {
    v101 -= 8;
    v103 = *(_DWORD*)(v10 + 4 * (v98 + *(v100 - 3)));
    v104 = *(_DWORD*)(v10 + 4 * (v98 + *(v100 - 2)));
    v105 = *(_DWORD*)(v10 + 4 * (v98 + *(v100 - 1)));
    v106 = *v100;
    v107 = v100[1];
    *(v102 - 7) = *(_DWORD*)(v10 + 4 * (v98 + *(v100 - 4)));
    *(v102 - 6) = v103;
    v108 = *(_DWORD*)(v10 + 4 * (v98 + v106));
    v109 = *(_DWORD*)(v10 + 4 * (v98 + v107));
    v110 = v100[2];
    v111 = v100[3];
    *(v102 - 5) = v104;
    *(v102 - 4) = v105;
    v100 += 8;
    v112 = *(_DWORD*)(v10 + 4 * (v98 + v110));
    *(v102 - 3) = v108;
    *(v102 - 2) = v109;
    v113 = *(_DWORD*)(v10 + 4 * (v98 + v111));
    *(v102 - 1) = v112;
    *v102 = v113;
    v102 += 8;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v101);
  v99 = -v101;
  if ((v5 & 7) != 0) {
  LABEL_40:
    v114 = (char*)&v203_.v203 + 4 * v99;
    v115 = (__int64*)(a3 + 8 * v99);
    v116 = v114 + 392;
    do {
      v117 = *v115++;
      --v97;
      *v116++ = *(_DWORD*)(v10 + 4 * (v98 + v117));
    } while (v97 != 0);
  }
LABEL_42:
  v118 = v5 & 7;
  v119 = 33LL * a2[5];
  if (v14 < 7) {
    v120 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_50;
    }
    goto LABEL_48;
  }
  v121 = (__int64*)(a3 + 32);
  v122 = 0;
  v123 = &v203_.v210;
  do {
    v122 -= 8;
    v124 = *(_DWORD*)(v10 + 4 * (v119 + *(v121 - 3)));
    v125 = *(_DWORD*)(v10 + 4 * (v119 + *(v121 - 2)));
    v126 = *(_DWORD*)(v10 + 4 * (v119 + *(v121 - 1)));
    v127 = *v121;
    v128 = v121[1];
    *(v123 - 7) = *(_DWORD*)(v10 + 4 * (v119 + *(v121 - 4)));
    *(v123 - 6) = v124;
    v129 = *(_DWORD*)(v10 + 4 * (v119 + v127));
    v130 = *(_DWORD*)(v10 + 4 * (v119 + v128));
    v131 = v121[2];
    v132 = v121[3];
    *(v123 - 5) = v125;
    *(v123 - 4) = v126;
    v121 += 8;
    v133 = *(_DWORD*)(v10 + 4 * (v119 + v131));
    *(v123 - 3) = v129;
    *(v123 - 2) = v130;
    v134 = *(_DWORD*)(v10 + 4 * (v119 + v132));
    *(v123 - 1) = v133;
    *v123 = v134;
    v123 += 8;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v122);
  v120 = -v122;
  if ((v5 & 7) != 0) {
  LABEL_48:
    v135 = (char*)&v203_.v203 + 4 * v120;
    v136 = (__int64*)(a3 + 8 * v120);
    v137 = v135 + 488;
    do {
      v138 = *v136++;
      --v118;
      *v137++ = *(_DWORD*)(v10 + 4 * (v119 + v138));
    } while (v118 != 0);
  }
LABEL_50:
  v139 = v5 & 7;
  v140 = 33LL * a2[6];
  if (v14 < 7) {
    v141 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_58;
    }
    goto LABEL_56;
  }
  v142 = (__int64*)(a3 + 32);
  v143 = 0;
  v144 = &v203_.v211;
  do {
    v143 -= 8;
    v145 = *(_DWORD*)(v10 + 4 * (v140 + *(v142 - 3)));
    v146 = *(_DWORD*)(v10 + 4 * (v140 + *(v142 - 2)));
    v147 = *(_DWORD*)(v10 + 4 * (v140 + *(v142 - 1)));
    v148 = *v142;
    v149 = v142[1];
    *(v144 - 7) = *(_DWORD*)(v10 + 4 * (v140 + *(v142 - 4)));
    *(v144 - 6) = v145;
    v150 = *(_DWORD*)(v10 + 4 * (v140 + v148));
    v151 = *(_DWORD*)(v10 + 4 * (v140 + v149));
    v152 = v142[2];
    v153 = v142[3];
    *(v144 - 5) = v146;
    *(v144 - 4) = v147;
    v142 += 8;
    v154 = *(_DWORD*)(v10 + 4 * (v140 + v152));
    *(v144 - 3) = v150;
    *(v144 - 2) = v151;
    v155 = *(_DWORD*)(v10 + 4 * (v140 + v153));
    *(v144 - 1) = v154;
    *v144 = v155;
    v144 += 8;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v143);
  v141 = -v143;
  if ((v5 & 7) != 0) {
  LABEL_56:
    v156 = (char*)&v203_.v203 + 4 * v141;
    v157 = (__int64*)(a3 + 8 * v141);
    v158 = v156 + 584;
    do {
      v159 = *v157++;
      --v139;
      *v158++ = *(_DWORD*)(v10 + 4 * (v140 + v159));
    } while (v139 != 0);
  }
LABEL_58:
  v160 = v5 & 7;
  v161 = 33LL * a2[7];
  if (v14 >= 7) {
    v163 = (__int64*)(a3 + 32);
    v164 = 0;
    v165 = &v203_.v212;
    do {
      v164 -= 8;
      v166 = *(_DWORD*)(v10 + 4 * (v161 + *(v163 - 3)));
      v167 = *(_DWORD*)(v10 + 4 * (v161 + *(v163 - 2)));
      v168 = *(_DWORD*)(v10 + 4 * (v161 + *(v163 - 1)));
      v169 = *v163;
      v170 = v163[1];
      *(v165 - 7) = *(_DWORD*)(v10 + 4 * (v161 + *(v163 - 4)));
      *(v165 - 6) = v166;
      v171 = *(_DWORD*)(v10 + 4 * (v161 + v169));
      v172 = *(_DWORD*)(v10 + 4 * (v161 + v170));
      v173 = v163[2];
      v174 = v163[3];
      *(v165 - 5) = v167;
      *(v165 - 4) = v168;
      v163 += 8;
      v175 = *(_DWORD*)(v10 + 4 * (v161 + v173));
      *(v165 - 3) = v171;
      *(v165 - 2) = v172;
      v176 = *(_DWORD*)(v10 + 4 * (v161 + v174));
      *(v165 - 1) = v175;
      *v165 = v176;
      v165 += 8;
    } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v164);
    v162 = -v164;
    if ((v5 & 7) == 0) {
      goto LABEL_66;
    }
    goto LABEL_64;
  }
  v162 = 0;
  if ((v5 & 7) != 0) {
  LABEL_64:
    v177 = (char*)&v203_.v203 + 4 * v162;
    v178 = (__int64*)(a3 + 8 * v162);
    v179 = v177 + 680;
    do {
      v180 = *v178++;
      --v160;
      *v179++ = *(_DWORD*)(v10 + 4 * (v161 + v180));
    } while (v160 != 0);
  }
LABEL_66:
  v181 = v5 & 7;
  v182 = 33LL * a2[8];
  if (v14 < 7) {
    v183 = 0;
    if ((v5 & 7) == 0) {
      memcpy_plt(a5, &v203_.v203, 872);
      return;
    }
    goto LABEL_72;
  }
  v184 = (__int64*)(a3 + 32);
  v185 = 0;
  v186 = &v203_.v213;
  do {
    v185 -= 8;
    v187 = *(_DWORD*)(v10 + 4 * (v182 + *(v184 - 3)));
    v188 = *(_DWORD*)(v10 + 4 * (v182 + *(v184 - 2)));
    v189 = *(_DWORD*)(v10 + 4 * (v182 + *(v184 - 1)));
    v190 = *v184;
    v191 = v184[1];
    *(v186 - 7) = *(_DWORD*)(v10 + 4 * (v182 + *(v184 - 4)));
    *(v186 - 6) = v187;
    v192 = *(_DWORD*)(v10 + 4 * (v182 + v190));
    v193 = *(_DWORD*)(v10 + 4 * (v182 + v191));
    v194 = v184[2];
    v195 = v184[3];
    *(v186 - 5) = v188;
    *(v186 - 4) = v189;
    v184 += 8;
    v196 = *(_DWORD*)(v10 + 4 * (v182 + v194));
    *(v186 - 3) = v192;
    *(v186 - 2) = v193;
    v197 = *(_DWORD*)(v10 + 4 * (v182 + v195));
    *(v186 - 1) = v196;
    *v186 = v197;
    v186 += 8;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v185);
  v183 = -v185;
  if ((v5 & 7) != 0) {
  LABEL_72:
    v198 = (char*)&v203_.v203 + 4 * v183;
    v199 = (__int64*)(a3 + 8 * v183);
    v200 = v198 + 776;
    do {
      v201 = *v199++;
      --v181;
      *v200++ = *(_DWORD*)(v10 + 4 * (v182 + v201));
    } while (v181 != 0);
  }
  {
    memcpy_plt(a5, &v203_.v203, 872);
    return;
  }
}

__attribute__((swiftcall)) void math_71d560(PSEUDO_X8 x8_, _QWORD* a1,
                                            unsigned __int64* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  char* v22;
  char* v23;
  _QWORD* v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  _DWORD* v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  __int64* v53;
  unsigned __int64 v54;
  _DWORD* v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  float* v68;
  __int64 v69;
  __int64 v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  _DWORD* v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  _QWORD* result;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  _BYTE v92[656];
  _BYTE v93[2936];
  _QWORD v94[82];
  _QWORD v95[82];
  __int64 v96;
  _QWORD v97[3];
  struct {
    _QWORD v98[23];
    unsigned __int64 v99;
  } v98_;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  struct {
    unsigned __int64 v106;
    unsigned __int64 v107;
    unsigned __int64 v108;
    unsigned __int64 v109;
    unsigned __int64 v110;
    unsigned __int64 v111;
  } v106_;
  struct {
    unsigned __int64 v112;
    unsigned __int64 v113;
    __int64 v114;
    _QWORD v115[364];
    unsigned __int64 v116;
    _QWORD v117[2];
    char gap8200_[4];
    float v118[157];
  } v112_;

  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = a2[3];
  v102 = a2[2];
  v103 = v4;
  v6 = a2[5];
  v104 = a2[4];
  v105 = v6;
  v7 = a2[1];
  v100 = *a2;
  v101 = v7;
  v100 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v100),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v101 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v101),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v102 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v102),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v103 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v103),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v104 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v104),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v9 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v105),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v10 = *a1;
  v112_.v115[0] = 0;
  v112_.v114 = 0;
  v112_.v113 = 0;
  v112_.v112 = 0;
  v112_.v115[1] = 0;
  v106_.v107 = v101;
  v106_.v106 = v100;
  v105 = v9;
  v106_.v111 = v9;
  v112_.v115[2] = v10;
  v106_.v110 = v104;
  v106_.v108 = v102;
  v106_.v109 = v103;
  if (v10 != 0) {
    memset_plt((void*)&v112_.v112, nullptr, v10, v8),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v11 = v106_.v106;
  v12 = v106_.v107;
  v13 = v106_.v108;
  v14 = v106_.v109;
  v15 = v106_.v110;
  v16 = v106_.v111;
  v96 = 0;
  memset(v97, 0, sizeof(v97));
  memset(v98_.v98, 0, sizeof(v98_.v98));
  *((_BYTE*)&v112_.v112 + v106_.v106) = 1;
  *((_BYTE*)&v112_.v112 + v12) = 1;
  *((_BYTE*)&v112_.v112 + v13) = 1;
  *((_BYTE*)&v112_.v112 + v14) = 1;
  *((_BYTE*)&v112_.v112 + v15) = 1;
  *((_BYTE*)&v112_.v112 + v16) = 1;
  v98_.v99 = v10 - 6;
  if (v10 != 6) {
    memset_plt((void*)&v96, nullptr, 8 * (v10 - 6), v8),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v10 == 0) {
      goto LABEL_32;
    }
  }
  v17 = v10 & 7;
  if ((unsigned __int64)(v10 - 1) >= 7) {
    v20 = 3;
    v19 = 0;
    while (1) {
      v21 = (char*)&v112_.v112 + v20;
      if ((*((_BYTE*)&v106_.v111 + v20 + 5) & 1) != 0) {
        if ((*(v21 - 2) & 1) != 0) {
          goto LABEL_12;
        }
      }
      else {
        v97[v19++ - 1] = v20 - 3;
        if ((*(v21 - 2) & 1) != 0) {
        LABEL_12:
          if ((*((_BYTE*)&v112_.v112 + v20 - 1) & 1) != 0) {
            goto LABEL_13;
          }
          goto LABEL_21;
        }
      }
      v97[v19++ - 1] = v20 - 2;
      if ((*((_BYTE*)&v112_.v112 + v20 - 1) & 1) != 0) {
      LABEL_13:
        if ((*((_BYTE*)&v112_.v112 + v20) & 1) != 0) {
          goto LABEL_14;
        }
        goto LABEL_22;
      }
    LABEL_21:
      v97[v19++ - 1] = v20 - 1;
      if ((*((_BYTE*)&v112_.v112 + v20) & 1) != 0) {
      LABEL_14:
        v22 = (char*)&v112_.v112 + v20;
        if ((*((_BYTE*)&v112_.v112 + v20 + 1) & 1) != 0) {
          goto LABEL_15;
        }
        goto LABEL_23;
      }
    LABEL_22:
      v97[v19++ - 1] = v20;
      v22 = (char*)&v112_.v112 + v20;
      if ((*((_BYTE*)&v112_.v112 + v20 + 1) & 1) != 0) {
      LABEL_15:
        if ((v22[2] & 1) != 0) {
          goto LABEL_16;
        }
        goto LABEL_24;
      }
    LABEL_23:
      v97[v19++ - 1] = v20 + 1;
      if ((v22[2] & 1) != 0) {
      LABEL_16:
        v23 = (char*)&v112_.v112 + v20;
        if ((*((_BYTE*)&v112_.v112 + v20 + 3) & 1) != 0) {
          goto LABEL_17;
        }
        goto LABEL_25;
      }
    LABEL_24:
      v97[v19++ - 1] = v20 + 2;
      v23 = (char*)&v112_.v112 + v20;
      if ((*((_BYTE*)&v112_.v112 + v20 + 3) & 1) != 0) {
      LABEL_17:
        if ((v23[4] & 1) == 0) {
          goto LABEL_26;
        }
        goto LABEL_9;
      }
    LABEL_25:
      v97[v19++ - 1] = v20 + 3;
      if ((v23[4] & 1) == 0) {
      LABEL_26:
        v97[v19++ - 1] = v20 + 4;
      }
    LABEL_9:
      v20 += 8;
      if (v20 - (v10 & 0xFFFFFFFFFFFFFFF8LL) == 3) {
        v18 = v20 - 3;
        if ((v10 & 7) != 0) {
          goto LABEL_30;
        }
        goto LABEL_32;
      }
    }
  }
  v18 = 0;
  v19 = 0;
  if ((v10 & 7) != 0) {
    do {
    LABEL_30:
      if ((*((_BYTE*)&v112_.v112 + v18) & 1) == 0) {
        v97[v19++ - 1] = v18;
      }
      ++v18;
      --v17;
    } while (v17 != 0);
  }
LABEL_32:
  v24 = a1 + 2;
  v25 = *(float*)&a1[17 * v11 + 2];
  v26 = *(float*)&a1[17 * v12 + 2];
  v27 = *(float*)&a1[17 * v13 + 2];
  v28 = *(float*)&a1[17 * v14 + 2];
  v29 = *(float*)&a1[17 * v15 + 2];
  v30 = *(float*)&a1[17 * v16 + 2];
  math_71ec60((void*)((__int64)v94), (__int64)a1, &v106_.v106, (__int64)&v96,
              v8),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31 = v98_.v99;
  v112_.v115[363] = 0;
  v112_.v112 = v98_.v99;
  v112_.v113 = v98_.v99;
  memset_plt((void*)&v112_.v114, nullptr, 2916, v32),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v31 != 0) {
    v33 = v112_.v115;
    v34 = 0;
    v35 = 0;
    while (1) {
      v36 = 33 * v97[v35 - 1];
      if (v31 >= 8) {
        break;
      }
      v37 = 0;
      if ((v31 & 7) != 0) {
        goto LABEL_41;
      }
    LABEL_34:
      ++v35;
      v33 = (_QWORD*)((char*)v33 + 108);
      v34 += 27;
      if (v35 == v31) {
        goto LABEL_44;
      }
    }
    v38 = 0;
    v39 = v98_.v98;
    v40 = v33;
    do {
      v38 -= 8;
      v41 = *((_DWORD*)v24 + *(v39 - 3) + v36);
      v42 = *((_DWORD*)v24 + *(v39 - 2) + v36);
      v43 = *((_DWORD*)v24 + *(v39 - 1) + v36);
      v45 = *v39;
      v44 = v39[1];
      *(v40 - 2) = *((_DWORD*)v24 + *(v39 - 4) + v36);
      *(v40 - 1) = v41;
      v46 = *((_DWORD*)v24 + v45 + v36);
      v47 = *((_DWORD*)v24 + v44 + v36);
      v49 = v39[2];
      v48 = v39[3];
      *v40 = v42;
      v40[1] = v43;
      v39 += 8;
      v50 = *((_DWORD*)v24 + v49 + v36);
      v40[2] = v46;
      v40[3] = v47;
      v51 = *((_DWORD*)v24 + v48 + v36);
      v40[4] = v50;
      v40[5] = v51;
      v40 += 8;
    } while (-(__int64)(v31 & 0xFFFFFFFFFFFFFFF8LL) != v38);
    v37 = -v38;
    if ((v31 & 7) == 0) {
      goto LABEL_34;
    }
  LABEL_41:
    v52 = v37 + v34;
    v53 = &v97[v37 - 1];
    v54 = v31 & 7;
    v55 = (_DWORD*)&v112_.v115[-1] + v52;
    do {
      v56 = *v53++;
      --v54;
      *v55++ = *((_DWORD*)v24 + v56 + v36);
    } while (v54 != 0);
    goto LABEL_34;
  }
LABEL_44:
  memcpy_plt(v93, &v112_.v112, 2936),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_87a2d0(v93),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memcpy_plt(&v112_.v112, v93, 2936),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_87a2e0((void*)(v95), v94, &v112_.v112),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v57 = v98_.v99;
  v112_.v116 = v98_.v99;
  memset_plt((void*)v112_.v117, nullptr, 648, v58),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v57 != 0) {
    v59 = v106_.v106;
    v60 = v106_.v107;
    v61 = v106_.v108;
    v62 = v106_.v109;
    v63 = v106_.v110;
    v64 = v106_.v111;
    if (v57 == 1) {
      v65 = 0;
    LABEL_50:
      v81 = &v112_.v117[3 * v65];
      v82 = 33 * v97[v65 - 1];
      v83 = *((_DWORD*)v24 + v82 + v60);
      *v81 = *((_DWORD*)v24 + v82 + v59);
      v81[1] = v83;
      v84 = *((_DWORD*)v24 + v82 + v62);
      v81[2] = *((_DWORD*)v24 + v82 + v61);
      v81[3] = v84;
      v85 = *((_DWORD*)v24 + v82 + v64);
      v81[4] = *((_DWORD*)v24 + v82 + v63);
      v81[5] = v85;
      goto LABEL_51;
    }
    v66 = 0;
    v67 = v97;
    v68 = v112_.v118;
    do {
      v70 = *(v67 - 1);
      v69 = *v67;
      v66 -= 2;
      v67 += 2;
      v70 *= 33;
      v71 = *((_DWORD*)v24 + v70 + v61);
      v72 = *((_DWORD*)v24 + v70 + v60);
      v73 = *((_DWORD*)v24 + v70 + v62);
      v74 = *((_DWORD*)v24 + v70 + v63);
      *(v68 - 5) = *((float*)v24 + v70 + v59);
      *((_DWORD*)v68 - 4) = v72;
      v75 = *((_DWORD*)v24 + v70 + v64);
      *((_DWORD*)v68 - 3) = v71;
      *((_DWORD*)v68 - 2) = v73;
      *((_DWORD*)v68 - 1) = v74;
      *(_DWORD*)v68 = v75;
      v76 = *((_DWORD*)v24 + 33 * v69 + v60);
      v77 = *((_DWORD*)v24 + 33 * v69 + v61);
      v78 = *((_DWORD*)v24 + 33 * v69 + v62);
      v68[1] = *((float*)v24 + 33 * v69 + v59);
      *((_DWORD*)v68 + 2) = v76;
      v79 = *((_DWORD*)v24 + 33 * v69 + v63);
      v80 = *((_DWORD*)v24 + 33 * v69 + v64);
      *((_DWORD*)v68 + 3) = v77;
      *((_DWORD*)v68 + 4) = v78;
      *((_DWORD*)v68 + 5) = v79;
      *((_DWORD*)v68 + 6) = v80;
      v68 += 12;
    } while (-(__int64)(v57 & 0xFFFFFFFFFFFFFFFELL) != v66);
    v65 = -v66;
    if ((v57 & 1) != 0) {
      goto LABEL_50;
    }
  }
LABEL_51:
  memcpy_plt(v92, &v112_.v116, 656),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  result = X8CALL_X0(void*, SdkRoutine_87a2f0((void*)(&v112_.v116), v95, v92)),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v87 = sqrtf(v26 - v112_.v118[0]);
  v88 = sqrtf(v27 - v112_.v118[7]);
  v89 = sqrtf(v28 - v112_.v118[14]);
  v90 = sqrtf(v29 - v112_.v118[21]);
  v91 = sqrtf(v30 - v112_.v118[28]);
  *a3 = sqrtf(v25 - *(float*)&v112_.v116);
  a3[1] = v87;
  a3[2] = v88;
  a3[3] = v89;
  a3[4] = v90;
  a3[5] = v91;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_71ec60(PSEUDO_X8 x8_, __int64 a1,
                                            _QWORD* a2, __int64 a3,
                                            unsigned __int64 a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v5;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  int* v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  char* v29;
  __int64* v30;
  _DWORD* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64* v38;
  int v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  char* v50;
  __int64* v51;
  _DWORD* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  int* v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  char* v71;
  __int64* v72;
  _DWORD* v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64* v80;
  int v81;
  int v82;
  int v83;
  __int64 v84;
  __int64 v85;
  int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  int v90;
  int v91;
  char* v92;
  __int64* v93;
  _DWORD* v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  int* v101;
  int v102;
  int v103;
  int v104;
  __int64 v105;
  __int64 v106;
  int v107;
  int v108;
  __int64 v109;
  __int64 v110;
  int v111;
  int v112;
  char* v113;
  __int64* v114;
  _DWORD* v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64* v120;
  __int64 v121;
  __int64* v122;
  int v123;
  int v124;
  int v125;
  __int64 v126;
  __int64 v127;
  int v128;
  int v129;
  __int64 v130;
  __int64 v131;
  int v132;
  int v133;
  char* v134;
  __int64* v135;
  _DWORD* v136;
  __int64 v137;
  struct {
    unsigned __int64 v139;
    __int64 v140;
    char gap16_[4];
    int v141;
    char gap24_[120];
    __int64 v142;
    char gap152_[100];
    int v143;
    char gap256_[104];
    __int64 v144;
    char gap368_[100];
    int v145;
    char gap472_[104];
    __int64 v146;
  } v139_;

  v139_.v139 = *(_QWORD*)(a3 + 216);
  v5 = v139_.v139;
  memset_plt((void*)&v139_.v140, nullptr, 648, a4);
  if (v139_.v139 == 0) {
    memcpy_plt(a5, &v139_.v139, 656);
    return;
  }
  v10 = a1 + 16;
  v11 = v139_.v139 & 7;
  v12 = 33LL * *a2;
  if (v139_.v139 < 8) {
    v13 = 0;
    if ((v139_.v139 & 7) == 0) {
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v14 = (__int64*)(a3 + 32);
  v15 = 0;
  v16 = -(__int64)(v139_.v139 & 0xFFFFFFFFFFFFFFF8LL);
  v17 = &v139_.v141;
  do {
    v15 -= 8;
    v18 = *(_DWORD*)(v10 + 4 * (v12 + *(v14 - 3)));
    v19 = *(_DWORD*)(v10 + 4 * (v12 + *(v14 - 2)));
    v20 = *(_DWORD*)(v10 + 4 * (v12 + *(v14 - 1)));
    v21 = *v14;
    v22 = v14[1];
    *(v17 - 3) = *(_DWORD*)(v10 + 4 * (v12 + *(v14 - 4)));
    *(v17 - 2) = v18;
    v23 = *(_DWORD*)(v10 + 4 * (v12 + v21));
    v24 = *(_DWORD*)(v10 + 4 * (v12 + v22));
    v25 = v14[2];
    v26 = v14[3];
    *(v17 - 1) = v19;
    *v17 = v20;
    v14 += 8;
    v27 = *(_DWORD*)(v10 + 4 * (v12 + v25));
    v17[1] = v23;
    v17[2] = v24;
    v28 = *(_DWORD*)(v10 + 4 * (v12 + v26));
    v17[3] = v27;
    v17[4] = v28;
    v17 += 8;
  } while (v16 != v15);
  v13 = -v15;
  if (v11 != 0) {
  LABEL_8:
    v29 = (char*)&v139_.v139 + 4 * v13;
    v30 = (__int64*)(a3 + 8 * v13);
    v31 = v29 + 8;
    do {
      v32 = *v30++;
      --v11;
      *v31++ = *(_DWORD*)(v10 + 4 * (v12 + v32));
    } while (v11 != 0);
  }
LABEL_10:
  v33 = v5 & 7;
  v34 = 33LL * a2[1];
  if (v5 < 8) {
    v35 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  v36 = (__int64*)(a3 + 32);
  v37 = 0;
  v38 = &v139_.v142;
  do {
    v37 -= 8;
    v39 = *(_DWORD*)(v10 + 4 * (v34 + *(v36 - 3)));
    v40 = *(_DWORD*)(v10 + 4 * (v34 + *(v36 - 2)));
    v41 = *(_DWORD*)(v10 + 4 * (v34 + *(v36 - 1)));
    v42 = *v36;
    v43 = v36[1];
    *((_DWORD*)v38 - 7) = *(_DWORD*)(v10 + 4 * (v34 + *(v36 - 4)));
    *((_DWORD*)v38 - 6) = v39;
    v44 = *(_DWORD*)(v10 + 4 * (v34 + v42));
    v45 = *(_DWORD*)(v10 + 4 * (v34 + v43));
    v46 = v36[2];
    v47 = v36[3];
    *((_DWORD*)v38 - 5) = v40;
    *((_DWORD*)v38 - 4) = v41;
    v36 += 8;
    v48 = *(_DWORD*)(v10 + 4 * (v34 + v46));
    *((_DWORD*)v38 - 3) = v44;
    *((_DWORD*)v38 - 2) = v45;
    v49 = *(_DWORD*)(v10 + 4 * (v34 + v47));
    *((_DWORD*)v38 - 1) = v48;
    *(_DWORD*)v38 = v49;
    v38 += 4;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v37);
  v35 = -v37;
  if ((v5 & 7) != 0) {
  LABEL_16:
    v50 = (char*)&v139_.v139 + 4 * v35;
    v51 = (__int64*)(a3 + 8 * v35);
    v52 = v50 + 116;
    do {
      v53 = *v51++;
      --v33;
      *v52++ = *(_DWORD*)(v10 + 4 * (v34 + v53));
    } while (v33 != 0);
  }
LABEL_18:
  v54 = v5 & 7;
  v55 = 33LL * a2[2];
  if (v5 < 8) {
    v56 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_26;
    }
    goto LABEL_24;
  }
  v57 = (__int64*)(a3 + 32);
  v58 = 0;
  v59 = &v139_.v143;
  do {
    v58 -= 8;
    v60 = *(_DWORD*)(v10 + 4 * (v55 + *(v57 - 3)));
    v61 = *(_DWORD*)(v10 + 4 * (v55 + *(v57 - 2)));
    v62 = *(_DWORD*)(v10 + 4 * (v55 + *(v57 - 1)));
    v63 = *v57;
    v64 = v57[1];
    *(v59 - 7) = *(_DWORD*)(v10 + 4 * (v55 + *(v57 - 4)));
    *(v59 - 6) = v60;
    v65 = *(_DWORD*)(v10 + 4 * (v55 + v63));
    v66 = *(_DWORD*)(v10 + 4 * (v55 + v64));
    v67 = v57[2];
    v68 = v57[3];
    *(v59 - 5) = v61;
    *(v59 - 4) = v62;
    v57 += 8;
    v69 = *(_DWORD*)(v10 + 4 * (v55 + v67));
    *(v59 - 3) = v65;
    *(v59 - 2) = v66;
    v70 = *(_DWORD*)(v10 + 4 * (v55 + v68));
    *(v59 - 1) = v69;
    *v59 = v70;
    v59 += 8;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v58);
  v56 = -v58;
  if ((v5 & 7) != 0) {
  LABEL_24:
    v71 = (char*)&v139_.v139 + 4 * v56;
    v72 = (__int64*)(a3 + 8 * v56);
    v73 = v71 + 224;
    do {
      v74 = *v72++;
      --v54;
      *v73++ = *(_DWORD*)(v10 + 4 * (v55 + v74));
    } while (v54 != 0);
  }
LABEL_26:
  v75 = v5 & 7;
  v76 = 33LL * a2[3];
  if (v5 < 8) {
    v77 = 0;
    if ((v5 & 7) == 0) {
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  v78 = (__int64*)(a3 + 32);
  v79 = 0;
  v80 = &v139_.v144;
  do {
    v79 -= 8;
    v81 = *(_DWORD*)(v10 + 4 * (v76 + *(v78 - 3)));
    v82 = *(_DWORD*)(v10 + 4 * (v76 + *(v78 - 2)));
    v83 = *(_DWORD*)(v10 + 4 * (v76 + *(v78 - 1)));
    v84 = *v78;
    v85 = v78[1];
    *((_DWORD*)v80 - 7) = *(_DWORD*)(v10 + 4 * (v76 + *(v78 - 4)));
    *((_DWORD*)v80 - 6) = v81;
    v86 = *(_DWORD*)(v10 + 4 * (v76 + v84));
    v87 = *(_DWORD*)(v10 + 4 * (v76 + v85));
    v88 = v78[2];
    v89 = v78[3];
    *((_DWORD*)v80 - 5) = v82;
    *((_DWORD*)v80 - 4) = v83;
    v78 += 8;
    v90 = *(_DWORD*)(v10 + 4 * (v76 + v88));
    *((_DWORD*)v80 - 3) = v86;
    *((_DWORD*)v80 - 2) = v87;
    v91 = *(_DWORD*)(v10 + 4 * (v76 + v89));
    *((_DWORD*)v80 - 1) = v90;
    *(_DWORD*)v80 = v91;
    v80 += 4;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v79);
  v77 = -v79;
  if ((v5 & 7) != 0) {
  LABEL_32:
    v92 = (char*)&v139_.v139 + 4 * v77;
    v93 = (__int64*)(a3 + 8 * v77);
    v94 = v92 + 332;
    do {
      v95 = *v93++;
      --v75;
      *v94++ = *(_DWORD*)(v10 + 4 * (v76 + v95));
    } while (v75 != 0);
  }
LABEL_34:
  v96 = v5 & 7;
  v97 = 33LL * a2[4];
  if (v5 >= 8) {
    v99 = (__int64*)(a3 + 32);
    v100 = 0;
    v101 = &v139_.v145;
    do {
      v100 -= 8;
      v102 = *(_DWORD*)(v10 + 4 * (v97 + *(v99 - 3)));
      v103 = *(_DWORD*)(v10 + 4 * (v97 + *(v99 - 2)));
      v104 = *(_DWORD*)(v10 + 4 * (v97 + *(v99 - 1)));
      v105 = *v99;
      v106 = v99[1];
      *(v101 - 7) = *(_DWORD*)(v10 + 4 * (v97 + *(v99 - 4)));
      *(v101 - 6) = v102;
      v107 = *(_DWORD*)(v10 + 4 * (v97 + v105));
      v108 = *(_DWORD*)(v10 + 4 * (v97 + v106));
      v109 = v99[2];
      v110 = v99[3];
      *(v101 - 5) = v103;
      *(v101 - 4) = v104;
      v99 += 8;
      v111 = *(_DWORD*)(v10 + 4 * (v97 + v109));
      *(v101 - 3) = v107;
      *(v101 - 2) = v108;
      v112 = *(_DWORD*)(v10 + 4 * (v97 + v110));
      *(v101 - 1) = v111;
      *v101 = v112;
      v101 += 8;
    } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v100);
    v98 = -v100;
    if ((v5 & 7) == 0) {
      goto LABEL_42;
    }
    goto LABEL_40;
  }
  v98 = 0;
  if ((v5 & 7) != 0) {
  LABEL_40:
    v113 = (char*)&v139_.v139 + 4 * v98;
    v114 = (__int64*)(a3 + 8 * v98);
    v115 = v113 + 440;
    do {
      v116 = *v114++;
      --v96;
      *v115++ = *(_DWORD*)(v10 + 4 * (v97 + v116));
    } while (v96 != 0);
  }
LABEL_42:
  v117 = v5 & 7;
  v118 = 33LL * a2[5];
  if (v5 < 8) {
    v119 = 0;
    if ((v5 & 7) == 0) {
      memcpy_plt(a5, &v139_.v139, 656);
      return;
    }
    goto LABEL_48;
  }
  v120 = (__int64*)(a3 + 32);
  v121 = 0;
  v122 = &v139_.v146;
  do {
    v121 -= 8;
    v123 = *(_DWORD*)(v10 + 4 * (v118 + *(v120 - 3)));
    v124 = *(_DWORD*)(v10 + 4 * (v118 + *(v120 - 2)));
    v125 = *(_DWORD*)(v10 + 4 * (v118 + *(v120 - 1)));
    v126 = *v120;
    v127 = v120[1];
    *((_DWORD*)v122 - 7) = *(_DWORD*)(v10 + 4 * (v118 + *(v120 - 4)));
    *((_DWORD*)v122 - 6) = v123;
    v128 = *(_DWORD*)(v10 + 4 * (v118 + v126));
    v129 = *(_DWORD*)(v10 + 4 * (v118 + v127));
    v130 = v120[2];
    v131 = v120[3];
    *((_DWORD*)v122 - 5) = v124;
    *((_DWORD*)v122 - 4) = v125;
    v120 += 8;
    v132 = *(_DWORD*)(v10 + 4 * (v118 + v130));
    *((_DWORD*)v122 - 3) = v128;
    *((_DWORD*)v122 - 2) = v129;
    v133 = *(_DWORD*)(v10 + 4 * (v118 + v131));
    *((_DWORD*)v122 - 1) = v132;
    *(_DWORD*)v122 = v133;
    v122 += 4;
  } while (-(__int64)(v5 & 0xFFFFFFFFFFFFFFF8LL) != v121);
  v119 = -v121;
  if ((v5 & 7) != 0) {
  LABEL_48:
    v134 = (char*)&v139_.v139 + 4 * v119;
    v135 = (__int64*)(a3 + 8 * v119);
    v136 = v134 + 548;
    do {
      v137 = *v135++;
      --v117;
      *v136++ = *(_DWORD*)(v10 + 4 * (v118 + v137));
    } while (v117 != 0);
  }
  {
    memcpy_plt(a5, &v139_.v139, 656);
    return;
  }
}

__attribute__((swiftcall)) void linear_algebra_720ce0(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64* a2,
                                                      __int64 unused_int2,
                                                      unsigned __int64 a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float* v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  float* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  float v59;
  __int64 v60;
  __int64 v63;
  __int64 v64;
  _BYTE v65[4];
  int v66;

  v63 = a2[4];
  v64 = *(_QWORD*)(v63 + 240);
  v6 = v64;
  memset_plt((void*)v65, nullptr, 360, a3);
  if (v64 != 0) {
    v8 = a2[2];
    v7 = (_QWORD*)a2[3];
    v9 = *a2;
    v10 = a2[1];
    v11 = (float*)&v66;
    v12 = 0;
    v13 = *v7 * v8;
    v14 = v7[1] * v8;
    v15 = v7[2] * v8;
    v16 = v7[3] * v8;
    v17 = v7[4] * v8;
    v18 = v7[5] * v8;
    v19 = v7[6] * v8;
    v20 = v7[7] * v8;
    v21 = v7[8] * v8;
    v22 = -(__int64)(v64 & 0xFFFFFFFFFFFFFFFELL);
    v23 = v7[9] * v8;
    v24 = v7[10] * v8;
    v25 = v7[11] * v8;
    v26 = v7[12] * v8;
    v27 = v7[13] * v8;
    v28 = v7[14] * v8;
    v29 = v7[15] * v8;
    v30 = v7[16] * v8;
    v31 = v7[17] * v8;
    do {
      v32 = (float*)(a1 + 72 * v12);
      v34 = *v32;
      v33 = v32[1];
      v36 = v32[2];
      v35 = v32[3];
      v38 = v32[4];
      v37 = v32[5];
      v40 = v32[6];
      v39 = v32[7];
      v42 = v32[8];
      v41 = v32[9];
      v44 = v32[10];
      v43 = v32[11];
      v46 = v32[12];
      v45 = v32[13];
      v48 = v32[14];
      v47 = v32[15];
      v50 = v32[16];
      v49 = v32[17];
      if (v6 == 1) {
        v51 = 0;
      }
      else {
        v52 = (__int64*)(v63 + 8);
        v53 = 0;
        v54 = v11;
        do {
          v56 = *(v52 - 1);
          v55 = *v52;
          v53 -= 2;
          v52 += 2;
          v57 = v9 + 4 * v56 * v10;
          v58 = v9 + 4 * v55 * v10;
          v59 = (float)((
                          float)((
                                   float)((
                                            float)((float)((float)((float)((float)((
                                                                                     float)((
                                                                                              float)((
                                                                                                       float)((
                                                                                                                float)((
                                                                                                                         float)((float)((float)((float)((float)((float)(v34 * *(float*)(v58 + 4 * v13)) + 0x0.0p+0f) + (float)(v33 * *(float*)(v58 + 4 * v14))) + (float)(v36 * *(float*)(v58 + 4 * v15))) + (float)(v35 * *(float*)(v58 + 4 * v16))) + (float)(v38 * *(float*)(v58 + 4 * v17))) +
                                                                                                                (float)(v37 *
                                                                                                                  *(float*)(v58 +
                                                                                                                    4 *
                                                                                                                      v18))) +
                                                                                                       (float)(v40 *
                                                                                                         *(float*)(v58 +
                                                                                                           4 *
                                                                                                             v19))) +
                                                                                              (float)(v39 *
                                                                                                *(float*)(v58 +
                                                                                                  4 *
                                                                                                    v20))) +
                                                                                     (float)(v42 *
                                                                                       *(float*)(v58 +
                                                                                         4 *
                                                                                           v21))) +
                                                                             (float)(v41 *
                                                                               *(float*)(v58 +
                                                                                 4 *
                                                                                   v23))) +
                                                                     (float)(v44 *
                                                                       *(float*)(v58 +
                                                                         4 *
                                                                           v24))) +
                                                             (float)(v43 *
                                                               *(float*)(v58 +
                                                                 4 * v25))) +
                                                     (float)(v46 *
                                                       *(float*)(v58 +
                                                         4 * v26))) +
                                            (float)(v45 *
                                              *(float*)(v58 + 4 * v27))) +
                                   (float)(v48 * *(float*)(v58 + 4 * v28))) +
                          (float)(v47 * *(float*)(v58 + 4 * v29))) +
                  (float)(v50 * *(float*)(v58 + 4 * v30))) +
            (float)(v49 * *(float*)(v58 + 4 * v31));
          *(v54 - 1) =
            (float)((
                      float)((
                               float)((
                                        float)((
                                                 float)((
                                                          float)((
                                                                   float)((
                                                                            float)((
                                                                                     float)((
                                                                                              float)((
                                                                                                       float)((
                                                                                                                float)((
                                                                                                                         float)((float)((float)((float)((float)((float)(v34 * *(float*)(v57 + 4 * v13)) + 0x0.0p+0f) + (float)(v33 * *(float*)(v57 + 4 * v14))) + (float)(v36 * *(float*)(v57 + 4 * v15))) + (float)(v35 * *(float*)(v57 + 4 * v16))) + (float)(v38 * *(float*)(v57 + 4 * v17))) +
                                                                                                                (float)(v37 *
                                                                                                                  *(float*)(v57 +
                                                                                                                    4 *
                                                                                                                      v18))) +
                                                                                                       (float)(v40 *
                                                                                                         *(float*)(v57 +
                                                                                                           4 *
                                                                                                             v19))) +
                                                                                              (float)(v39 *
                                                                                                *(float*)(v57 +
                                                                                                  4 *
                                                                                                    v20))) +
                                                                                     (float)(v42 *
                                                                                       *(float*)(v57 +
                                                                                         4 *
                                                                                           v21))) +
                                                                            (float)(v41 *
                                                                              *(float*)(v57 +
                                                                                4 *
                                                                                  v23))) +
                                                                   (float)(v44 *
                                                                     *(float*)(v57 +
                                                                       4 *
                                                                         v24))) +
                                                          (float)(v43 *
                                                            *(float*)(v57 +
                                                              4 * v25))) +
                                                 (float)(v46 *
                                                   *(float*)(v57 + 4 * v26))) +
                                        (float)(v45 *
                                          *(float*)(v57 + 4 * v27))) +
                               (float)(v48 * *(float*)(v57 + 4 * v28))) +
                      (float)(v47 * *(float*)(v57 + 4 * v29))) +
              (float)(v50 * *(float*)(v57 + 4 * v30))) +
            (float)(v49 * *(float*)(v57 + 4 * v31));
          *v54 = v59;
          v54 += 2;
        } while (v22 != v53);
        v51 = -v53;
        if ((v6 & 1) == 0) {
          goto LABEL_3;
        }
      }
      v60 = v9 + 4 * *(_QWORD*)(v63 + 8 * v51) * v10;
      *(float*)&v65[120 * v12 + 4 * v51] =
        (float)((
                  float)((
                           float)((
                                    float)((
                                             float)((
                                                      float)((
                                                               float)((
                                                                        float)((
                                                                                 float)((
                                                                                          float)((
                                                                                                   float)((
                                                                                                            float)((
                                                                                                                     float)((float)((float)((float)((float)((float)(v34 * *(float*)(v60 + 4 * v13)) + 0x0.0p+0f) + (float)(v33 * *(float*)(v60 + 4 * v14))) + (float)(v36 * *(float*)(v60 + 4 * v15))) + (float)(v35 * *(float*)(v60 + 4 * v16))) + (float)(v38 * *(float*)(v60 + 4 * v17))) +
                                                                                                            (float)(v37 *
                                                                                                              *(float*)(v60 +
                                                                                                                4 *
                                                                                                                  v18))) +
                                                                                                   (float)(v40 *
                                                                                                     *(float*)(v60 +
                                                                                                       4 *
                                                                                                         v19))) +
                                                                                          (float)(v39 *
                                                                                            *(float*)(v60 +
                                                                                              4 *
                                                                                                v20))) +
                                                                                 (float)(v42 *
                                                                                   *(float*)(v60 +
                                                                                     4 *
                                                                                       v21))) +
                                                                        (float)(v41 *
                                                                          *(float*)(v60 +
                                                                            4 *
                                                                              v23))) +
                                                               (float)(v44 *
                                                                 *(float*)(v60 +
                                                                   4 * v24))) +
                                                      (float)(v43 *
                                                        *(float*)(v60 +
                                                          4 * v25))) +
                                             (float)(v46 *
                                               *(float*)(v60 + 4 * v26))) +
                                    (float)(v45 * *(float*)(v60 + 4 * v27))) +
                           (float)(v48 * *(float*)(v60 + 4 * v28))) +
                  (float)(v47 * *(float*)(v60 + 4 * v29))) +
          (float)(v50 * *(float*)(v60 + 4 * v30))) +
        (float)(v49 * *(float*)(v60 + 4 * v31));
    LABEL_3:
      ++v12;
      v11 += 30;
    } while (v12 != 3);
  }
  {
    memcpy_plt(a4, &v64, 368);
    return;
  }
}

__attribute__((swiftcall)) void linear_algebra_721480(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float* v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  float* v36;
  float* v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  float v60;
  float v61;
  float v62;
  _QWORD v65[28];

  v4 = a2[2];
  v3 = (_QWORD*)a2[3];
  v6 = *a2;
  v7 = a2[1];
  v8 = 0;
  v9 = v3[9] * v4;
  v10 = v3[10];
  v11 = v3[11];
  v12 = *v3 * v4;
  v13 = v3[1] * v4;
  v14 = v3[2] * v4;
  v15 = v3[3] * v4;
  v16 = v3[4] * v4;
  v17 = v3[5] * v4;
  v18 = v3[6] * v4;
  v19 = v3[7] * v4;
  v20 = v3[8] * v4;
  memset(v65, 0, 216);
  v21 = v10 * v4;
  v22 = v11 * v4;
  v23 = v3[12] * v4;
  v24 = v3[13] * v4;
  v25 = v3[14] * v4;
  v26 = a2[4];
  v27 = v3[16];
  v28 = v3[17];
  v29 = v3[15] * v4;
  v30 = (float*)v65 + 1;
  v31 = v27 * v4;
  v32 = v28 * v4;
  v33 = (_QWORD*)(v26 + 8);
  do {
    v34 = 18;
    v35 = v33;
    v36 = v30;
    v37 = (float*)(a1 + 72 * v8);
    v38 = *v37;
    v39 = v37[1];
    v40 = v37[2];
    v41 = v37[3];
    v42 = v37[4];
    v43 = v37[5];
    v44 = v37[6];
    v45 = v37[7];
    v46 = v37[8];
    v47 = v37[9];
    v48 = v37[10];
    v49 = v37[11];
    v50 = v37[12];
    v51 = v37[13];
    v52 = v37[14];
    v53 = v37[15];
    v54 = v37[16];
    v55 = v37[17];
    do {
      v34 -= 3;
      v56 = v6 + 4 * *(v35 - 1) * v7;
      v57 = v6 + 4 * *v35 * v7;
      v58 = v35[1];
      v35 += 3;
      v59 = v6 + 4 * v58 * v7;
      v60 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)(v38 *
                                                                          *(float*)(v59 +
                                                                            4 *
                                                                              v12)) +
                                                                  0x0.0p+0f) +
                                                          (float)(v39 *
                                                            *(float*)(v59 +
                                                              4 * v13))) +
                                                  (float)(v40 *
                                                    *(float*)(v59 + 4 * v14))) +
                                          (float)(v41 *
                                            *(float*)(v59 + 4 * v15))) +
                                  (float)(v42 * *(float*)(v59 + 4 * v16))) +
                          (float)(v43 * *(float*)(v59 + 4 * v17))) +
                  (float)(v44 * *(float*)(v59 + 4 * v18))) +
          (float)(v45 * *(float*)(v59 + 4 * v19))) +
        (float)(v46 * *(float*)(v59 + 4 * v20));
      v61 = (float)((
                      float)((
                               float)((
                                        float)((
                                                 float)((
                                                          float)((
                                                                   float)((
                                                                            float)((
                                                                                     float)((
                                                                                              float)((
                                                                                                       float)((
                                                                                                                float)((
                                                                                                                         float)((float)((float)((float)((float)((float)(v38 * *(float*)(v57 + 4 * v12)) + 0x0.0p+0f) + (float)(v39 * *(float*)(v57 + 4 * v13))) + (float)(v40 * *(float*)(v57 + 4 * v14))) + (float)(v41 * *(float*)(v57 + 4 * v15))) + (float)(v42 * *(float*)(v57 + 4 * v16))) +
                                                                                                                (float)(v43 *
                                                                                                                  *(float*)(v57 +
                                                                                                                    4 *
                                                                                                                      v17))) +
                                                                                                       (float)(v44 *
                                                                                                         *(float*)(v57 +
                                                                                                           4 *
                                                                                                             v18))) +
                                                                                              (float)(v45 *
                                                                                                *(float*)(v57 +
                                                                                                  4 *
                                                                                                    v19))) +
                                                                                     (float)(v46 *
                                                                                       *(float*)(v57 +
                                                                                         4 *
                                                                                           v20))) +
                                                                            (float)(v47 *
                                                                              *(float*)(v57 +
                                                                                4 *
                                                                                  v9))) +
                                                                   (float)(v48 *
                                                                     *(float*)(v57 +
                                                                       4 *
                                                                         v21))) +
                                                          (float)(v49 *
                                                            *(float*)(v57 +
                                                              4 * v22))) +
                                                 (float)(v50 *
                                                   *(float*)(v57 + 4 * v23))) +
                                        (float)(v51 *
                                          *(float*)(v57 + 4 * v24))) +
                               (float)(v52 * *(float*)(v57 + 4 * v25))) +
                      (float)(v53 * *(float*)(v57 + 4 * v29))) +
              (float)(v54 * *(float*)(v57 + 4 * v31))) +
        (float)(v55 * *(float*)(v57 + 4 * v32));
      v62 = *(float*)(v59 + 4 * v9);
      *(v36 - 1) = (float)((float)((float)((float)((float)((float)((float)((float)((
                                                                                     float)((
                                                                                              float)((
                                                                                                       float)((
                                                                                                                float)((
                                                                                                                         float)((float)((float)((float)((float)((float)(v38 * *(float*)(v56 + 4 * v12)) + 0x0.0p+0f) + (float)(v39 * *(float*)(v56 + 4 * v13))) + (float)(v40 * *(float*)(v56 + 4 * v14))) + (float)(v41 * *(float*)(v56 + 4 * v15))) + (float)(v42 * *(float*)(v56 + 4 * v16))) +
                                                                                                                (float)(v43 *
                                                                                                                  *(float*)(v56 +
                                                                                                                    4 *
                                                                                                                      v17))) +
                                                                                                       (float)(v44 *
                                                                                                         *(float*)(v56 +
                                                                                                           4 *
                                                                                                             v18))) +
                                                                                              (float)(v45 *
                                                                                                *(float*)(v56 +
                                                                                                  4 *
                                                                                                    v19))) +
                                                                                     (float)(v46 *
                                                                                       *(float*)(v56 +
                                                                                         4 *
                                                                                           v20))) +
                                                                             (float)(v47 *
                                                                               *(float*)(v56 +
                                                                                 4 *
                                                                                   v9))) +
                                                                     (float)(v48 *
                                                                       *(float*)(v56 +
                                                                         4 *
                                                                           v21))) +
                                                             (float)(v49 *
                                                               *(float*)(v56 +
                                                                 4 * v22))) +
                                                     (float)(v50 *
                                                       *(float*)(v56 +
                                                         4 * v23))) +
                                             (float)(v51 *
                                               *(float*)(v56 + 4 * v24))) +
                                     (float)(v52 * *(float*)(v56 + 4 * v25))) +
                             (float)(v53 * *(float*)(v56 + 4 * v29))) +
                     (float)(v54 * *(float*)(v56 + 4 * v31))) +
        (float)(v55 * *(float*)(v56 + 4 * v32));
      *v36 = v61;
      v36[1] =
        (float)((float)((float)((float)((float)((float)((float)((float)(v60 +
                                                                  (float)(v47 *
                                                                    v62)) +
                                                          (float)(v48 *
                                                            *(float*)(v59 +
                                                              4 * v21))) +
                                                  (float)(v49 *
                                                    *(float*)(v59 + 4 * v22))) +
                                          (float)(v50 *
                                            *(float*)(v59 + 4 * v23))) +
                                  (float)(v51 * *(float*)(v59 + 4 * v24))) +
                          (float)(v52 * *(float*)(v59 + 4 * v25))) +
                  (float)(v53 * *(float*)(v59 + 4 * v29))) +
          (float)(v54 * *(float*)(v59 + 4 * v31))) +
        (float)(v55 * *(float*)(v59 + 4 * v32));
      v36 += 3;
    } while (v34 != 0);
    ++v8;
    v30 += 18;
  } while (v8 != 3);
  {
    memcpy_plt(a3, v65, 216);
    return;
  }
}

__int64 math_722a20(void* a1, double a2, double a3)
{
  double v3;
  void* v4;
  __int64 v5;
  double v6;
  void* v7;
  double v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  double v11;
  double v12;
  double v13;
  double v14;
  double v15;
  double v16;
  double v17;
  void* v20;
  double v21;
  double v22;
  __int64 v23;
  double v24;

  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(double, "d0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(double, "d0", "=w")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
  if (a3 >= a2) {
    v9 = 1;
    v10 = 2;
    v11 = 0x1.0000000000000p+0 / (a3 - (a2 + -0x1.0000000000000p+0));
    v12 = v11 + 0x0.0p+0;
    v13 = v11;
    do {
      v14 = (double)v9;
      v15 = v12;
      ++v9;
      v16 = a2 + -0x1.0000000000000p+0 - (double)v10;
      v10 += 2LL;
      v17 = v11 * ((a2 - v14) * v14);
      v11 = 0x1.0000000000000p+0 / (a3 - v16 + v17);
      v13 = v13 * -(v17 * v11);
      v12 = v15 + v13;
    } while (v15 + v13 != v15);
    v20 = (void*)log_plt(a1, v15 + v13),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(double, "d0", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(double, "d0", "=w")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
    v22 = v21 - a3;
    v23 = log_plt(v20, a3),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(double, "d0", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(double, "d0", "=w")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
    v8 = v22 + a2 * v24 - lgamma_plt(v23, a2),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(double, "d0", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(double, "d0", "=w")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v3 = math_722c60(a1, a2, a3),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(double, "d0", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(double, "d0", "=w")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
    v5 = exp_plt(v4, v3),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(double, "d0", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(double, "d0", "=w")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
    v7 = (void*)log1p_plt(v5, -v6),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(double, "d0", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(double, "d0", "=w")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
  }
  return exp_plt(v7, v8);
}

double math_722b40(void* a1, double a2, double a3)
{
  double v3;
  __int64 v5;
  double v6;
  double result;
  unsigned __int64 v8;
  unsigned __int64 v9;
  double v10;
  double v11;
  double v12;
  double v13;
  double v14;
  double v15;
  double v16;
  void* v19;
  double v20;
  double v21;
  __int64 v22;
  double v23;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(double, "d0", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(double, "d0", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
  if (a3 >= a2) {
    v8 = 1;
    v9 = 2;
    v10 = 0x1.0000000000000p+0 / (a3 - (a2 + -0x1.0000000000000p+0));
    v11 = v10 + 0x0.0p+0;
    v12 = v10;
    do {
      v13 = (double)v8;
      v14 = v11;
      ++v8;
      v15 = a2 + -0x1.0000000000000p+0 - (double)v9;
      v9 += 2LL;
      v16 = v10 * ((a2 - v13) * v13);
      v10 = 0x1.0000000000000p+0 / (a3 - v15 + v16);
      v12 = v12 * -(v16 * v10);
      v11 = v14 + v12;
    } while (v14 + v12 != v14);
    v19 = (void*)log_plt(a1, v14 + v12),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(double, "d0", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(double, "d0", "=w")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
    v21 = v20 - a3;
    v22 = log_plt(v19, a3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(double, "d0", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(double, "d0", "=w")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
    return v21 + a2 * v23 - lgamma_plt(v22, a2);
  }
  else {
    v3 = math_722c60(a1, a2, a3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(double, "d0", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(double, "d0", "=w")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
    v5 = exp_plt_alt1(v3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(double, "d0", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(double, "d0", "=w")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
    log1p_plt(v5, -v6),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(double, "d0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(double, "d0", "=w")),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
  }
  return result;
}

double math_722c60(void* a1, double a2, double a3)
{
  double v3;
  __int64 v5;
  double v6;
  unsigned __int64 v8;
  double v9;
  double v10;
  double v11;
  double v12;
  void* v15;
  double v16;
  double v17;
  __int64 v18;
  double v19;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(double, "d0", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
  if (a3 <= a2) {
    v8 = 1;
    v9 = 0x1.0000000000000p+0 / a2;
    v10 = 0x1.0000000000000p+0 / a2;
    do {
      v11 = v9;
      v12 = (double)v8++;
      v10 = v10 * (a3 / (a2 + v12));
      v9 = v11 + v10;
    } while (v11 != v11 + v10);
    v15 = (void*)log_plt(a1, v11 + v10),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(double, "d0", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
    v17 = v16 - a3;
    v18 = log_plt(v15, a3),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(double, "d0", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
    return v17 + a2 * v19 - lgamma_plt(v18, a2);
  }
  else {
    v3 = math_722b40(a1, a2, a3),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(double, "d0", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
    v5 = exp_plt_alt1(v3),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(double, "d0", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
    return log1p_plt_alt1(v5, -v6);
  }
}

__attribute__((swiftcall)) void math_7241f0(PSEUDO_X8 x8_, float* a1, float* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float result;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;

  v3 = a1[1];
  v4 = *a2;
  v5 = a2[1];
  v7 = a1[2];
  v6 = a1[3];
  v8 = a1[6];
  v9 = a1[7];
  v11 = a1[8];
  v10 = a1[9];
  v13 = a2[2];
  v12 = a2[3];
  v14 = a1[12];
  v15 = a1[13];
  v26 = a1[5];
  v27 = a1[4];
  v17 = a1[10];
  v16 = a1[11];
  v18 = a1[14];
  v19 = a1[15];
  v33 = (float)((float)(v6 * *a2) + 0x0.0p+0f) + (float)(v9 * v5);
  v30 = (float)((float)((float)(v3 * *a2) + 0x0.0p+0f) + (float)(v26 * v5)) +
        (float)(v10 * v13);
  v31 = (float)((float)((float)(*a1 * *a2) + 0x0.0p+0f) + (float)(v27 * v5)) +
        (float)(v11 * v13);
  v32 = (float)((float)((float)(v7 * *a2) + 0x0.0p+0f) + (float)(v8 * v5)) +
        (float)(v17 * v13);
  v20 = *a1;
  v21 = (float)(v12 * v3) + (float)(v15 * *a2);
  v22 = v6;
  v29 = (float)(v12 * v7) + (float)(v18 * *a2);
  v28 = (float)(v12 * v6) + (float)(v19 * *a2);
  v23 = v27 * *a2;
  v24 = v26 * *a2;
  *a3 = (float)((float)(v12 * *a1) + (float)(v14 * *a2)) +
        (float)((float)(v27 * v13) - (float)(v11 * v5));
  a3[1] = v21 + (float)((float)(v26 * v13) - (float)(v10 * v5));
  a3[2] = v29 + (float)((float)(v8 * v13) - (float)(v17 * v5));
  a3[3] = v28 + (float)((float)(v9 * v13) - (float)(v16 * v5));
  a3[4] = (float)((float)(v12 * v27) + (float)(v14 * v5)) +
          (float)((float)(v11 * v4) - (float)(v20 * v13));
  a3[5] = (float)((float)(v12 * v26) + (float)(v15 * v5)) +
          (float)((float)(v10 * v4) - (float)(v3 * v13));
  a3[6] = (float)((float)(v12 * v8) + (float)(v18 * v5)) +
          (float)((float)(v17 * v4) - (float)(v7 * v13));
  a3[7] = (float)((float)(v12 * v9) + (float)(v19 * v5)) +
          (float)((float)(v16 * v4) - (float)(v22 * v13));
  a3[8] = (float)((float)(v20 * v5) - v23) +
          (float)((float)(v12 * v11) + (float)(v14 * v13));
  a3[9] = (float)((float)(v3 * v5) - v24) +
          (float)((float)(v12 * v10) + (float)(v15 * v13));
  a3[10] = (float)((float)(v7 * v5) - (float)(v8 * v4)) +
           (float)((float)(v12 * v17) + (float)(v18 * v13));
  a3[11] = (float)((float)(v22 * v5) - (float)(v9 * v4)) +
           (float)((float)(v12 * v16) + (float)(v19 * v13));
  a3[12] = (float)(v14 * v12) - v31;
  a3[13] = (float)(v12 * v15) - v30;
  result = (float)(v12 * v19) - (float)(v33 + (float)(v16 * v13));
  a3[14] = (float)(v12 * v18) - v32;
  a3[15] = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_724480(PSEUDO_X8 x8_, float* a1)
{

#pragma clang fp contract(off)
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float result;
  float v36;
  float v37[4];

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s3", "=w"));
  v4 = a1[4];
  v5 = (float)(*a1 * *a1) + (float)(v4 * v4);
  v6 = (float)((float)((float)(*a1 * a1[1]) + (float)(*a1 * a1[1])) +
               0x0.0p+0f) +
       (float)((float)(v4 * a1[5]) + (float)(v4 * a1[5]));
  v7 = (float)((float)((float)(*a1 * a1[2]) + (float)(*a1 * a1[2])) +
               0x0.0p+0f) +
       (float)((float)(v4 * a1[6]) + (float)(v4 * a1[6]));
  v8 = (float)((float)((float)(*a1 * a1[3]) + (float)(*a1 * a1[3])) +
               0x0.0p+0f) +
       (float)((float)(v4 * a1[7]) + (float)(v4 * a1[7]));
  v9 = a1[8];
  v10 = sqrtf((float)(v5 + (float)(v9 * v9)) + 0x1.0000000000000p-126f);
  v11 = v10 * 0x1.0000000000000p-1f;
  v12 =
      (float)((float)(v6 + (float)((float)(v9 * a1[9]) + (float)(v9 * a1[9]))) /
              (float)(v10 + v10)) *
      0x1.0000000000000p-1f;
  v13 = (float)((float)(v7 +
                        (float)((float)(v9 * a1[10]) + (float)(v9 * a1[10]))) /
                (float)(v10 + v10)) *
        0x1.0000000000000p-1f;
  v14 = (float)((float)(v8 +
                        (float)((float)(v9 * a1[11]) + (float)(v9 * a1[11]))) /
                (float)(v10 + v10)) *
        0x1.0000000000000p-1f;
  v37[0] = v10 * 0x1.0000000000000p-1f;
  v37[1] = v12;
  v37[2] = v13;
  v37[3] = v14;
  v15 = SdkRoutine_87a330(v37) * 0x1.0000000000000p-1f,
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s3", "=w"));
  v17 = v16 * 0x1.0000000000000p-1f;
  v19 = v18 * 0x1.0000000000000p-1f;
  v21 = v20 * 0x1.0000000000000p-1f;
  v36 = cosf_plt(v11),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s3", "=w"));
  v22 = sinf_plt(v11),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s3", "=w"));
  v23 = a1[4];
  v24 = v15 * *a1;
  v25 = v15 * a1[5];
  v26 = a1[8];
  v27 = a1[9];
  v28 = v15 * a1[6];
  v29 = v15 * a1[7];
  v30 = (float)(v21 * *a1) + (float)(v15 * a1[3]);
  v31 = (float)(v17 * *a1) + (float)(v15 * a1[1]);
  v32 = a1[10];
  v33 = a1[11];
  a2[2] = (float)(v19 * *a1) + (float)(v15 * a1[2]);
  a2[3] = v30;
  *a2 = v24;
  a2[1] = v31;
  a2[4] = v15 * v23;
  a2[5] = (float)(v17 * v23) + v25;
  a2[6] = (float)(v19 * v23) + v28;
  a2[7] = (float)(v21 * v23) + v29;
  a2[8] = v15 * v26;
  a2[9] = (float)(v17 * v26) + (float)(v15 * v27);
  a2[10] = (float)(v19 * v26) + (float)(v15 * v32);
  a2[11] = (float)(v21 * v26) + (float)(v15 * v33);
  a2[12] = v36;
  a2[13] = -(float)(v22 * v12);
  v34 = -(float)(v22 * v13);
  result = -(float)(v22 * v14);
  a2[14] = v34;
  a2[15] = result;
  {
    result;
    return;
  }
}

float nerd_linear_algebra_sinc(float* a1)
{
  float v1;
  float v3;

  v1 = *a1;
  if ((float)(v1 * v1) <= 0.04f) {
    return (float)((float)(v1 * v1) *
                   (float)((float)((float)(v1 * v1) *
                                   (float)((float)((float)(v1 * v1) *
                                                   (float)((float)((float)(v1 *
                                                                           v1) *
                                                                   (float)(0.0000027557f -
                                                                           (float)((float)(v1 *
                                                                                           v1) *
                                                                                   0.000000025052f))) +
                                                           -0.00019841f)) +
                                           0.0083333f)) +
                           -0.16667f)) +
           1.0f;
  }
  v3 = sinf_plt(v1);
  cosf_plt(*a1);
  return v3 / *a1;
}

__attribute__((swiftcall)) void math_724870(PSEUDO_X8 x8_, float* a1)
{

#pragma clang fp contract(off)
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float result;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;

  v3 = a1[14];
  v2 = a1[15];
  v5 = *a1;
  v4 = a1[1];
  v6 = a1[2];
  v7 = a1[3];
  v9 = a1[4];
  v10 = a1[5];
  v11 = a1[6];
  v12 = a1[7];
  v13 = a1[8];
  v14 = a1[9];
  v15 = a1[10];
  v16 = a1[11];
  v18 = a1[12];
  v17 = a1[13];
  if (v2 >= 0x0.0p+0f) {
    v46 = a1[18];
    v47 = a1[19];
    v45 = a1[17];
    v37 = a1[16];
  }
  else {
    v5 = -v5;
    v4 = -v4;
    v6 = -v6;
    v7 = -v7;
    v9 = -v9;
    v10 = -v10;
    v11 = -v11;
    v12 = -v12;
    v13 = -v13;
    v14 = -v14;
    v15 = -v15;
    v16 = -v16;
    v18 = -v18;
    v17 = -v17;
    v3 = -v3;
    v2 = -v2;
    v37 = -a1[16];
    v45 = -a1[17];
    v46 = -a1[18];
    v47 = -a1[19];
  }
  v39 = v4;
  v40 = v6;
  v41 = v7;
  v42 = v13;
  v38 = v9;
  v43 = v11;
  v44 = v12;
  v32 = v14;
  v33 = v16;
  v34 = v18;
  v35 = v17;
  v36 = v3;
  v19 = sqrtf((float)((float)(v15 * v15) +
                      (float)((float)(v10 * v10) + (float)(v5 * v5))) +
              0x1.0000000000000p-126f);
  v20 = (float)((float)((float)(v18 * v15) + (float)(v18 * v15)) +
                (float)((float)((float)(v12 * v10) + (float)(v12 * v10)) +
                        (float)((float)((float)(v6 * v5) + (float)(v6 * v5)) +
                                0x0.0p+0f))) /
        (float)(v19 + v19);
  v21 = (float)((float)((float)(v16 * v15) + (float)(v16 * v15)) +
                (float)((float)((float)(v11 * v10) + (float)(v11 * v10)) +
                        (float)((float)((float)(v4 * v5) + (float)(v4 * v5)) +
                                0x0.0p+0f))) /
        (float)(v19 + v19);
  v31 = (float)((float)((float)(v17 * v15) + (float)(v17 * v15)) +
                (float)((float)((float)(v13 * v10) + (float)(v13 * v10)) +
                        (float)((float)((float)(v7 * v5) + (float)(v7 * v5)) +
                                0x0.0p+0f))) /
        (float)(v19 + v19);
  v22 = (float)((float)((float)(v3 * v15) + (float)(v3 * v15)) +
                (float)((float)((float)(v14 * v10) + (float)(v14 * v10)) +
                        (float)((float)((float)(v9 * v5) + (float)(v9 * v5)) +
                                0x0.0p+0f))) /
        (float)(v19 + v19);
  v23 = atan2f_plt(v19, v2);
  v24 = (float)(v2 * v2) + (float)(v19 * v19);
  v25 = (float)((float)(v2 * v22) - (float)(v47 * v19)) / v24;
  v26 = (float)((float)((float)(v2 * v21) - (float)(v37 * v19)) / v24) +
        (float)((float)((float)(v2 * v21) - (float)(v37 * v19)) / v24);
  v27 = (float)((float)(v2 * v31) - (float)(v46 * v19)) / v24;
  v28 = (float)((float)((float)(v2 * v20) - (float)(v45 * v19)) / v24) +
        (float)((float)((float)(v2 * v20) - (float)(v45 * v19)) / v24);
  v29 = v23 + v23;
  *a2 = (float)(v23 + v23) * (float)(v5 / v19);
  a2[1] = (float)((float)(v23 + v23) *
                  (float)((float)((float)(v39 * v19) - (float)(v5 * v21)) /
                          (float)(v19 * v19))) +
          (float)((float)(v5 / v19) * v26);
  a2[6] = (float)((float)(v23 + v23) *
                  (float)((float)((float)(v43 * v19) - (float)(v10 * v21)) /
                          (float)(v19 * v19))) +
          (float)((float)(v10 / v19) * v26);
  a2[7] = (float)((float)(v23 + v23) *
                  (float)((float)((float)(v44 * v19) - (float)(v10 * v20)) /
                          (float)(v19 * v19))) +
          (float)((float)(v10 / v19) * v28);
  a2[2] = (float)((float)(v23 + v23) *
                  (float)((float)((float)(v40 * v19) - (float)(v5 * v20)) /
                          (float)(v19 * v19))) +
          (float)((float)(v5 / v19) * v28);
  a2[3] = (float)((float)(v23 + v23) *
                  (float)((float)((float)(v41 * v19) - (float)(v5 * v31)) /
                          (float)(v19 * v19))) +
          (float)((float)(v5 / v19) * (float)(v27 + v27));
  a2[4] = (float)((float)(v23 + v23) *
                  (float)((float)((float)(v38 * v19) - (float)(v5 * v22)) /
                          (float)(v19 * v19))) +
          (float)((float)(v5 / v19) * (float)(v25 + v25));
  a2[5] = (float)(v23 + v23) * (float)(v10 / v19);
  a2[8] = (float)((float)(v23 + v23) *
                  (float)((float)((float)(v42 * v19) - (float)(v10 * v31)) /
                          (float)(v19 * v19))) +
          (float)((float)(v10 / v19) * (float)(v27 + v27));
  a2[9] = (float)((float)(v23 + v23) *
                  (float)((float)((float)(v32 * v19) - (float)(v10 * v22)) /
                          (float)(v19 * v19))) +
          (float)((float)(v10 / v19) * (float)(v25 + v25));
  result = (float)((float)(v23 + v23) *
                   (float)((float)((float)(v36 * v19) - (float)(v15 * v22)) /
                           (float)(v19 * v19))) +
           (float)((float)(v15 / v19) * (float)(v25 + v25));
  a2[10] = v29 * (float)(v15 / v19);
  a2[11] =
      (float)(v29 * (float)((float)((float)(v33 * v19) - (float)(v15 * v21)) /
                            (float)(v19 * v19))) +
      (float)((float)(v15 / v19) * v26);
  a2[12] =
      (float)(v29 * (float)((float)((float)(v34 * v19) - (float)(v15 * v20)) /
                            (float)(v19 * v19))) +
      (float)((float)(v15 / v19) * v28);
  a2[13] =
      (float)(v29 * (float)((float)((float)(v35 * v19) - (float)(v15 * v31)) /
                            (float)(v19 * v19))) +
      (float)((float)(v15 / v19) * (float)(v27 + v27));
  a2[14] = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void linear_algebra_724c60(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64* a2,
                                                      __int64 unused_int2,
                                                      unsigned __int64 a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  float* v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  __int64 v38;
  __int64 v39;
  float* v40;
  __int64* v41;
  __int64 v42;
  float v43;
  float v44;
  float v45;
  float v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  __int64 v51;
  __int64 v52;
  float v53;
  __int64 v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  __int64 v62;
  float v63;
  __int64 v64;
  __int64* v65;
  unsigned __int64 v66;
  float* v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v71;
  _BYTE v72[4];
  int v73;

  v4 = a2[4];
  v71 = *(_QWORD*)(v4 + 216);
  v8 = v71;
  memset_plt((void*)v72, nullptr, 648, a3);
  if (v71 != 0) {
    v10 = a2[2];
    v9 = (_QWORD*)a2[3];
    v11 = *a2;
    v12 = a2[1];
    v13 = (float*)&v73;
    v14 = 0;
    v15 = 0;
    v16 = v9[8];
    v17 = *v9 * v10;
    v18 = v9[1] * v10;
    v19 = v9[2] * v10;
    v20 = v9[3] * v10;
    v21 = v9[4] * v10;
    v22 = v9[5] * v10;
    v23 = v9[6] * v10;
    v24 = v9[7] * v10;
    v25 = v16 * v10;
    v26 = v71 & 3;
    v27 = -(__int64)(v71 & 0xFFFFFFFFFFFFFFFCLL);
    while (1) {
      v28 = (float*)(a1 + 36 * v15);
      v29 = *v28;
      v30 = v28[1];
      v31 = v28[2];
      v32 = v28[3];
      v33 = v28[4];
      v34 = v28[5];
      v35 = v28[6];
      v36 = v28[7];
      v37 = v28[8];
      if (v8 >= 4) {
        break;
      }
      v38 = 0;
      if (v26 != 0) {
        goto LABEL_10;
      }
    LABEL_3:
      ++v15;
      v13 += 27;
      v14 += 27;
      if (v15 == 6) {
        memcpy_plt(a4, &v71, 656);
        return;
      }
    }
    v39 = 0;
    v40 = v13;
    v41 = (__int64*)(v4 + 16);
    do {
      v39 -= 4;
      v42 = v11 + 4 * *(v41 - 2) * v12;
      v43 = *(float*)(v42 + 4 * v24);
      v44 = *(float*)(v42 + 4 * v25);
      v45 =
          (float)((float)((float)((float)((float)((float)(v29 *
                                                          *(float*)(v42 +
                                                                    4 * v17)) +
                                                  0x0.0p+0f) +
                                          (float)(v30 *
                                                  *(float*)(v42 + 4 * v18))) +
                                  (float)(v31 * *(float*)(v42 + 4 * v19))) +
                          (float)(v32 * *(float*)(v42 + 4 * v20))) +
                  (float)(v33 * *(float*)(v42 + 4 * v21))) +
          (float)(v34 * *(float*)(v42 + 4 * v22));
      v46 = *(float*)(v42 + 4 * v23);
      v47 = v11 + 4 * *(v41 - 1) * v12;
      v48 = (float)((float)(v45 + (float)(v35 * v46)) + (float)(v36 * v43)) +
            (float)(v37 * v44);
      v49 =
          (float)((float)((float)((float)((float)((float)((float)((float)(v29 *
                                                                          *(float*)(v47 +
                                                                                    4 * v17)) +
                                                                  0x0.0p+0f) +
                                                          (float)(v30 *
                                                                  *(float*)(v47 +
                                                                            4 * v18))) +
                                                  (float)(v31 *
                                                          *(float*)(v47 +
                                                                    4 * v19))) +
                                          (float)(v32 *
                                                  *(float*)(v47 + 4 * v20))) +
                                  (float)(v33 * *(float*)(v47 + 4 * v21))) +
                          (float)(v34 * *(float*)(v47 + 4 * v22))) +
                  (float)(v35 * *(float*)(v47 + 4 * v23))) +
          (float)(v36 * *(float*)(v47 + 4 * v24));
      v50 = *(float*)(v47 + 4 * v25);
      v51 = *v41;
      v52 = v41[1];
      v41 += 4;
      v53 = v49 + (float)(v37 * v50);
      v54 = v11 + 4 * v51 * v12;
      v55 = *(float*)(v54 + 4 * v17);
      v56 = *(float*)(v54 + 4 * v18);
      v57 = *(float*)(v54 + 4 * v22);
      *(v40 - 1) = v48;
      *v40 = v53;
      v58 = (float)((float)((float)((float)((float)(v29 * v55) + 0x0.0p+0f) +
                                    (float)(v30 * v56)) +
                            (float)(v31 * *(float*)(v54 + 4 * v19))) +
                    (float)(v32 * *(float*)(v54 + 4 * v20))) +
            (float)(v33 * *(float*)(v54 + 4 * v21));
      v59 = *(float*)(v54 + 4 * v25);
      v60 = (float)(v58 + (float)(v34 * v57)) +
            (float)(v35 * *(float*)(v54 + 4 * v23));
      v61 = *(float*)(v54 + 4 * v24);
      v62 = v11 + 4 * v52 * v12;
      v63 =
          (float)((float)((float)((float)((float)((float)((float)((float)((float)(v29 *
                                                                                  *(float*)(v62 +
                                                                                            4 * v17)) +
                                                                          0x0.0p+0f) +
                                                                  (float)(v30 *
                                                                          *(float*)(v62 +
                                                                                    4 * v18))) +
                                                          (float)(v31 *
                                                                  *(float*)(v62 +
                                                                            4 * v19))) +
                                                  (float)(v32 *
                                                          *(float*)(v62 +
                                                                    4 * v20))) +
                                          (float)(v33 *
                                                  *(float*)(v62 + 4 * v21))) +
                                  (float)(v34 * *(float*)(v62 + 4 * v22))) +
                          (float)(v35 * *(float*)(v62 + 4 * v23))) +
                  (float)(v36 * *(float*)(v62 + 4 * v24))) +
          (float)(v37 * *(float*)(v62 + 4 * v25));
      v40[1] = (float)(v60 + (float)(v36 * v61)) + (float)(v37 * v59);
      v40[2] = v63;
      v40 += 4;
    } while (v27 != v39);
    v38 = -v39;
    if (v26 == 0) {
      goto LABEL_3;
    }
  LABEL_10:
    v64 = v38 + v14;
    v65 = (__int64*)(v4 + 8 * v38);
    v66 = v8 & 3;
    v67 = (float*)&v72[4 * v64];
    do {
      v68 = *v65++;
      --v66;
      v69 = v11 + 4 * v68 * v12;
      *v67++ =
          (float)((float)((float)((float)((float)((float)((float)((float)((float)(v29 *
                                                                                  *(float*)(v69 +
                                                                                            4 * v17)) +
                                                                          0x0.0p+0f) +
                                                                  (float)(v30 *
                                                                          *(float*)(v69 +
                                                                                    4 * v18))) +
                                                          (float)(v31 *
                                                                  *(float*)(v69 +
                                                                            4 * v19))) +
                                                  (float)(v32 *
                                                          *(float*)(v69 +
                                                                    4 * v20))) +
                                          (float)(v33 *
                                                  *(float*)(v69 + 4 * v21))) +
                                  (float)(v34 * *(float*)(v69 + 4 * v22))) +
                          (float)(v35 * *(float*)(v69 + 4 * v23))) +
                  (float)(v36 * *(float*)(v69 + 4 * v24))) +
          (float)(v37 * *(float*)(v69 + 4 * v25));
    } while (v66 != 0);
    goto LABEL_3;
  }
  {
    memcpy_plt(a4, &v71, 656);
    return;
  }
}

__attribute__((swiftcall)) void math_726720(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 unused_int1,
                                            __int64 unused_int2,
                                            unsigned __int64 a2, float result)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64* v5;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  float* v16;
  unsigned __int64* v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  _DWORD* v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 i;
  unsigned __int64 v32;
  unsigned __int64 j;
  unsigned __int64 k;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int8* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  unsigned __int8* v67;
  __int64* v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  struct {
    _DWORD v74[34];
    unsigned __int64 v75;
  } v74_;
  struct {
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    unsigned __int64 v93;
  } v76_;

  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v5 = *(unsigned __int64**)a1;
  v4 = *(_QWORD*)(a1 + 8);
  a3[16] = 0;
  a3[17] = 0;
  a3[14] = 0;
  a3[15] = 0;
  a3[12] = 0;
  a3[13] = 0;
  a3[10] = 0;
  a3[11] = 0;
  v10 = *v5;
  v8 = v5 + 2;
  v9 = v10;
  a3[8] = 0;
  a3[9] = 0;
  a3[6] = 0;
  a3[7] = 0;
  a3[4] = 0;
  a3[5] = 0;
  a3[2] = 0;
  a3[3] = 0;
  *a3 = 0;
  a3[1] = 0;
  v76_.v93 = v10;
  if (v10 != 0) {
    v76_.v91 = 0;
    v76_.v92 = 0;
    v76_.v89 = 0;
    v76_.v90 = 0;
    v76_.v87 = 0;
    v76_.v88 = 0;
    v76_.v85 = 0;
    v76_.v86 = 0;
    v76_.v83 = 0;
    v76_.v84 = 0;
    v76_.v81 = 0;
    v76_.v82 = 0;
    v76_.v79 = 0;
    v76_.v80 = 0;
    v76_.v77 = 0;
    v76_.v78 = 0;
    v76_.v76 = 0;
    memset_plt((void*)&v76_.v76, nullptr, 4 * v9, a2),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v11 = *(_QWORD*)(a1 + 568);
    if (v11 != 0) {
      v12 = 0;
      while (1) {
        v13 = (char*)v8 + 132 * v12;
        if (v11 >= 8) {
          break;
        }
        v14 = 0;
        result = 0x0.0p+0f;
        if ((v11 & 7) != 0) {
          goto LABEL_11;
        }
      LABEL_4:
        *((float*)&v76_.v76 + v12++) = result;
        if (v12 == v9) {
          goto LABEL_14;
        }
      }
      result = 0x0.0p+0f;
      v15 = 0;
      v16 = (float*)(a1 + 5172);
      v17 = (unsigned __int64*)(a1 + 360);
      do {
        v15 -= 8;
        v18 = (float)((float)((float)((float)(result +
                                              (float)(*(float*)&v13[4 * *(v17 -
                                                                          7)] *
                                                      *(v16 - 7))) +
                                      (float)(*(float*)&v13[4 * *(v17 - 6)] *
                                              *(v16 - 6))) +
                              (float)(*(float*)&v13[4 * *(v17 - 5)] *
                                      *(v16 - 5))) +
                      (float)(*(float*)&v13[4 * *(v17 - 4)] * *(v16 - 4))) +
              (float)(*(float*)&v13[4 * *(v17 - 3)] * *(v16 - 3));
        v19 = *(float*)&v13[4 * *(v17 - 2)];
        v20 = *(v17 - 1);
        a2 = *v17;
        v17 += 8;
        v21 = v18 + (float)(v19 * *(v16 - 2));
        v22 = *(v16 - 1);
        v23 = *v16;
        v16 += 8;
        result = (float)(v21 + (float)(*(float*)&v13[4 * v20] * v22)) +
                 (float)(*(float*)&v13[4 * a2] * v23);
      } while (-(__int64)(v11 & 0xFFFFFFFFFFFFFFF8LL) != v15);
      v14 = -v15;
      if ((v11 & 7) == 0) {
        goto LABEL_4;
      }
    LABEL_11:
      v24 = (_DWORD*)(a1 + 5144 + 4 * v14);
      v25 = (__int64*)(a1 + 304 + 8 * v14);
      v26 = v11 & 7;
      do {
        v28 = *v25++;
        v27 = v28;
        LODWORD(v28) = *v24++;
        --v26;
        result = result + (float)(*(float*)&v13[4 * v27] * *(float*)&v28);
      } while (v26 != 0);
      goto LABEL_4;
    }
  LABEL_14:
    v74_.v75 = v76_.v93;
    if (v76_.v93 != 0) {
      memcpy_plt(v74_.v74, &v76_.v76, 4 * v76_.v93),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v29 = v74_.v75;
    }
    else {
      v29 = 0;
    }
  }
  else {
    v29 = 0;
    v74_.v75 = 0;
  }
  v30 = *(_QWORD*)(v4 + 136);
  v76_.v90 = 0;
  v76_.v91 = 0;
  v76_.v88 = 0;
  v76_.v89 = 0;
  v76_.v86 = 0;
  v76_.v87 = 0;
  v76_.v84 = 0;
  v76_.v85 = 0;
  v76_.v82 = 0;
  v76_.v83 = 0;
  v76_.v80 = 0;
  v76_.v81 = 0;
  v76_.v78 = 0;
  v76_.v79 = 0;
  v76_.v76 = 0;
  v76_.v77 = 0;
  v76_.v92 = 0;
  v76_.v93 = v29 | v30;
  if ((v29 | v30) == 0) {
    goto LABEL_35;
  }
  memset_plt((void*)&v76_.v76, nullptr, 4 * (v29 | v30), a2),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v30 != 0 && v29 != 0) {
    if (v76_.v93 != 0) {
      for (i = 0; i < v76_.v93; ++i) {
        result = *(float*)(v4 + 4 * i) + *(float*)&v74_.v74[i];
        *((float*)&v76_.v76 + i) = result;
        v32 = v76_.v93;
      }
      goto LABEL_33;
    }
  LABEL_35:
    a3[17] = 0;
    goto LABEL_36;
  }
  if (v30 != 0) {
    if (v76_.v93 == 0) {
      goto LABEL_35;
    }
    for (j = 0; j < v76_.v93; ++j) {
      result = *(float*)(v4 + 4 * j);
      *((float*)&v76_.v76 + j) = result;
      v32 = v76_.v93;
    }
  }
  else {
    if (v76_.v93 == 0) {
      goto LABEL_35;
    }
    for (k = 0; k < v76_.v93; ++k) {
      result = *(float*)&v74_.v74[k];
      *((float*)&v76_.v76 + k) = result;
      v32 = v76_.v93;
    }
  }
LABEL_33:
  a3[17] = v32;
  if (v32 != 0) {
    memcpy_plt(a3, &v76_.v76, 4 * v32),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
LABEL_36:
  v35 = *(_QWORD*)(a1 + 568);
  if (v35 == 0) {
    result;
    return;
  }
  v36 = *(_QWORD*)(a1 + 16);
  v37 = *(_QWORD*)(a1 + 24);
  v38 = *(_QWORD*)(a1 + 568) & 7LL;
  if (v35 < 8) {
    v39 = 0;
    if (v38 == 0) {
      result;
      return;
    }
    goto LABEL_67;
  }
  v40 = (unsigned __int8*)(a1 + 583);
  v41 = (__int64*)(a1 + 360);
  v42 = 0;
  v43 = -(__int64)(v35 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v44 = *(v41 - 7);
    v45 = *(v41 - 6);
    v42 -= 8;
    if (*(v40 - 7) != 0) {
      v46 = v37;
    }
    else {
      v46 = v36;
    }
    v47 = *(_DWORD*)(v46 + 4 * v44);
    v48 = *(v40 - 5);
    *((_DWORD*)a3 + v44) = v47;
    if (*(v40 - 6) != 0) {
      v49 = v37;
    }
    else {
      v49 = v36;
    }
    if (v48 != 0) {
      v50 = v37;
    }
    else {
      v50 = v36;
    }
    *((_DWORD*)a3 + v45) = *(_DWORD*)(v49 + 4 * v45);
    v51 = *(v41 - 5);
    v52 = *(v41 - 4);
    v53 = *(_DWORD*)(v50 + 4 * v51);
    v54 = *(v40 - 3);
    *((_DWORD*)a3 + v51) = v53;
    if (*(v40 - 4) != 0) {
      v55 = v37;
    }
    else {
      v55 = v36;
    }
    if (v54 != 0) {
      v56 = v37;
    }
    else {
      v56 = v36;
    }
    *((_DWORD*)a3 + v52) = *(_DWORD*)(v55 + 4 * v52);
    v57 = *(v41 - 3);
    v58 = *(v41 - 2);
    v59 = *(_DWORD*)(v56 + 4 * v57);
    v60 = *(v40 - 1);
    *((_DWORD*)a3 + v57) = v59;
    if (*(v40 - 2) != 0) {
      v61 = v37;
    }
    else {
      v61 = v36;
    }
    if (v60 != 0) {
      v62 = v37;
    }
    else {
      v62 = v36;
    }
    *((_DWORD*)a3 + v58) = *(_DWORD*)(v61 + 4 * v58);
    v63 = *(v41 - 1);
    v64 = *v41;
    v41 += 8;
    *((_DWORD*)a3 + v63) = *(_DWORD*)(v62 + 4 * v63);
    v65 = *v40;
    v40 += 8;
    if (v65 != 0) {
      v66 = v37;
    }
    else {
      v66 = v36;
    }
    result = *(float*)(v66 + 4 * v64);
    *((float*)a3 + v64) = result;
  } while (v43 != v42);
  v39 = -v42;
  if (v38 != 0) {
  LABEL_67:
    v67 = (unsigned __int8*)(v39 + a1 + 576);
    v68 = (__int64*)(a1 + 8 * v39 + 304);
    do {
      v70 = *v67++;
      v69 = v70;
      v72 = *v68++;
      v71 = v72;
      if (v69 != 0) {
        v73 = v37;
      }
      else {
        v73 = v36;
      }
      --v38;
      result = *(float*)(v73 + 4 * v71);
      *((float*)a3 + v71) = result;
    } while (v38 != 0);
  }
  {
    result;
    return;
  }
}

bool math_726b80(float* a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  float* v5;
  unsigned __int64 v7;
  float* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  float* v12;
  float v13;
  unsigned __int64 i;
  unsigned __int64 v15;
  float v16;
  unsigned __int64 v17;
  __int64 v18;
  float* v19;
  __int64 v20;
  float* v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float* v27;
  float* v28;
  float v29;
  float* v30;
  float v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 j;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 k;
  unsigned __int64 v38;
  unsigned __int64 m;
  unsigned __int64 v40;
  unsigned __int64 v41;
  bool v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  float v46;
  float* v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  float* v51;
  float* v52;
  float v53;
  float v54;
  __int64 v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  __int64 v64;
  __int64 v65;
  float v66;
  float v67;
  float v68;
  float v69;
  __int64 v70;
  _DWORD* v71;
  __int64* v72;
  __int64 v73;
  float* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  float v79;
  __int64 v80;
  __int64 v81;
  float* v82;
  __int64 v83;
  float* v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float* v90;
  float* v91;
  float v92;
  float v93;
  float v94;
  unsigned __int64 v95;
  float* v96;
  unsigned __int64 v97;
  struct {
    __int64 v99;
    __int64 v100;
  } v99_;
  __int64 v101;
  struct {
    __int64 v102;
    __int64 v103;
    unsigned __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    unsigned __int64 v116;
    char gap152_[120];
    unsigned __int64 v117;
  } v102_;
  struct {
    _BYTE v118[40];
    unsigned __int64 v119;
    char gap4432_[88];
    unsigned __int64 v120;
    char gap4528_[120];
    unsigned __int64 v121;
  } v118_;
  struct {
    __int64 v122;
    __int64 v123;
  } v122_;
  struct {
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
    __int64 v133;
    __int64 v134;
    __int64 v135;
    __int64 v136;
    __int64 v137;
    __int64 v138;
    unsigned __int64 v139;
  } v124_;
  _QWORD v140[2];
  struct {
    _QWORD v141[15];
    unsigned __int64 v142;
  } v141_;
  _QWORD v143[4];
  struct {
    __int64 v144;
    char gap4984_[224];
    __int64 v145;
  } v144_;

  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v5 = a1 + 76;
  memset_plt((void*)v143, nullptr, 272, a4),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (*((_QWORD*)a1 + 71) == 0) {
    v9 = 0;
    v12 = a1 + 196;
    v13 = a1[34 * a2 + 196];
    if (v13 <= 0x0.0p+0f) {
      return v13 > 0x0.0p+0f;
    }
  LABEL_9:
    v141_.v142 = 0;
    memset(v141_.v141, 0, sizeof(v141_.v141));
    v140[1] = 0;
    v140[0] = 0;
    v102_.v116 = v9;
    if (v9 != 0) {
      v102_.v114 = 0;
      v102_.v115 = 0;
      v102_.v112 = 0;
      v102_.v113 = 0;
      v102_.v110 = 0;
      v102_.v111 = 0;
      v102_.v108 = 0;
      v102_.v109 = 0;
      v102_.v106 = 0;
      v102_.v107 = 0;
      v102_.v104 = 0;
      v102_.v105 = 0;
      v102_.v102 = 0;
      v102_.v103 = 0;
      v99_.v100 = 0;
      v101 = 0;
      v99_.v99 = 0;
      memset_plt((void*)&v99_.v99, nullptr, 4 * v9, v7),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      if (v102_.v116 != 0) {
        for (i = 0; i < v102_.v116; ++i) {
          *((float*)&v99_.v99 + i) = v12[33 * v143[i] + a2];
        }
        v141_.v142 = v102_.v116;
        if (v102_.v116 != 0) {
          memcpy_plt(v140, &v99_.v99, 4 * v102_.v116),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          v15 = v141_.v142;
          v124_.v139 = 0;
          v124_.v138 = 0;
          v124_.v137 = 0;
          v124_.v136 = 0;
          v124_.v135 = 0;
          v124_.v134 = 0;
          v124_.v133 = 0;
          v124_.v132 = 0;
          v124_.v131 = 0;
          v124_.v130 = 0;
          v124_.v129 = 0;
          v124_.v128 = 0;
          v124_.v127 = 0;
          v124_.v126 = 0;
          v124_.v125 = 0;
          v124_.v124 = 0;
          v122_.v123 = 0;
          v122_.v122 = 0;
          v102_.v116 = v141_.v142;
          if (v141_.v142 != 0) {
            v102_.v114 = 0;
            v102_.v115 = 0;
            v102_.v112 = 0;
            v102_.v113 = 0;
            v16 = 0x1.0000000000000p+0f / v13;
            v102_.v110 = 0;
            v102_.v111 = 0;
            v102_.v108 = 0;
            v102_.v109 = 0;
            v102_.v106 = 0;
            v102_.v107 = 0;
            v102_.v104 = 0;
            v102_.v105 = 0;
            v102_.v102 = 0;
            v102_.v103 = 0;
            v99_.v100 = 0;
            v101 = 0;
            v99_.v99 = 0;
            memset_plt((void*)&v99_.v99, nullptr, 4 * v141_.v142, v7),
                v32 =
                    COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v40 =
                    COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            v17 = v15 & 7;
            v18 = 0;
            if (v15 >= 8) {
              v19 = (float*)&v101;
              v20 = 0;
              v21 = (float*)v141_.v141;
              do {
                v20 -= 8;
                v22 = v16 * *(v21 - 3);
                *(v19 - 4) = v16 * *(v21 - 4);
                *(v19 - 3) = v22;
                v23 = v16 * *(v21 - 1);
                *(v19 - 2) = v16 * *(v21 - 2);
                *(v19 - 1) = v23;
                v24 = v16 * v21[1];
                *v19 = v16 * *v21;
                v19[1] = v24;
                v25 = v21[2];
                v26 = v21[3];
                v21 += 8;
                v19[2] = v16 * v25;
                v19[3] = v16 * v26;
                v19 += 8;
              } while (-(__int64)(v15 & 0xFFFFFFFFFFFFFFF8LL) != v20);
              v18 = -v20;
            }
            if ((v15 & 7) != 0) {
              v27 = (float*)&v99_.v99 + v18;
              v28 = (float*)v140 + v18;
              do {
                v29 = *v28++;
                --v17;
                *v27++ = v16 * v29;
              } while (v17 != 0);
            }
            v124_.v139 = v102_.v116;
            if (v102_.v116 != 0) {
              memcpy_plt(&v122_.v122, &v99_.v99, 4 * v102_.v116),
                  v32 = COERCE_AS(
                      __typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v33 = COERCE_AS(
                      __typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v7 = COERCE_AS(
                      __typeof__(v7),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            }
            goto LABEL_28;
          }
        }
        else {
          v124_.v137 = 0;
          v124_.v136 = 0;
          v124_.v135 = 0;
          v124_.v134 = 0;
          v124_.v133 = 0;
          v124_.v132 = 0;
          v124_.v131 = 0;
          v124_.v130 = 0;
          v124_.v129 = 0;
          v124_.v128 = 0;
          v124_.v127 = 0;
          v124_.v126 = 0;
          v124_.v125 = 0;
          v124_.v124 = 0;
          v122_.v123 = 0;
          v122_.v122 = 0;
          v124_.v138 = 0;
        }
        v124_.v139 = 0;
      LABEL_28:
        v30 = a1 + 156;
        v102_.v117 = v9;
        v31 = a1[a2 + 156];
        goto LABEL_29;
      }
    }
    v30 = a1 + 156;
    v141_.v142 = 0;
    v124_.v137 = 0;
    v31 = a1[a2 + 156];
    v124_.v136 = 0;
    v124_.v135 = 0;
    v124_.v134 = 0;
    v124_.v133 = 0;
    v124_.v132 = 0;
    v124_.v131 = 0;
    v124_.v130 = 0;
    v124_.v129 = 0;
    v124_.v128 = 0;
    v124_.v127 = 0;
    v124_.v126 = 0;
    v124_.v125 = 0;
    v124_.v124 = 0;
    v122_.v123 = 0;
    v122_.v122 = 0;
    v124_.v138 = 0;
    v124_.v139 = 0;
    v102_.v117 = v9;
    if (v9 == 0) {
      *((_QWORD*)a1 + 71) = 0;
      *((_QWORD*)a1 + 77) = 0;
      goto LABEL_52;
    }
  LABEL_29:
    memset_plt((void*)&v99_.v99, nullptr, 264, v7),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)&v99_.v99, nullptr, 8 * v9, v32),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v102_.v117 == 0) {
      goto LABEL_36;
    }
    for (j = 0; j < v102_.v117; ++j) {
      *(&v99_.v99 + j) = *(_QWORD*)&v5[2 * v143[j]];
    }
    v118_.v121 = v102_.v117;
    if (v102_.v117 != 0) {
      memcpy_plt(v118_.v118, &v99_.v99, 8 * v102_.v117),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v35 = v118_.v121;
      if (v118_.v121 != 0) {
        memcpy_plt(v5, v118_.v118, 8 * v118_.v121),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      *((_QWORD*)a1 + 71) = v35;
    }
    else {
    LABEL_36:
      *((_QWORD*)a1 + 71) = 0;
    }
    v99_.v99 = 0;
    v99_.v100 = 0;
    v101 = 0;
    v102_.v102 = 0;
    v102_.v103 = 0;
    v102_.v104 = v9;
    memset_plt((void*)&v99_.v99, nullptr, v9, v33),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v102_.v104 == 0) {
      goto LABEL_44;
    }
    for (k = 0; k < v102_.v104; ++k) {
      *((_BYTE*)&v99_.v99 + k) = *((_BYTE*)a1 + v143[k] + 576);
    }
    v118_.v119 = v102_.v104;
    if (v102_.v104 != 0) {
      memcpy_plt(v118_.v118, &v99_.v99, v102_.v104),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v38 = v118_.v119;
      if (v118_.v119 != 0) {
        memcpy_plt(a1 + 144, v118_.v118, v118_.v119),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      *((_QWORD*)a1 + 77) = v38;
    }
    else {
    LABEL_44:
      *((_QWORD*)a1 + 77) = 0;
    }
    v99_.v99 = 0;
    v99_.v100 = 0;
    v101 = 0;
    v102_.v102 = 0;
    v102_.v103 = 0;
    v102_.v104 = 0;
    v102_.v105 = 0;
    v102_.v106 = 0;
    v102_.v107 = 0;
    v102_.v108 = 0;
    v102_.v109 = 0;
    v102_.v110 = 0;
    v102_.v111 = 0;
    v102_.v112 = 0;
    v102_.v113 = 0;
    v102_.v114 = 0;
    v102_.v115 = 0;
    v102_.v116 = v9;
    memset_plt((void*)&v99_.v99, nullptr, 4 * v9, v36),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v102_.v116 != 0) {
      for (m = 0; m < v102_.v116; ++m) {
        *((float*)&v99_.v99 + m) = a1[v143[m] + 156];
      }
      v118_.v120 = v102_.v116;
      if (v102_.v116 != 0) {
        memcpy_plt(v118_.v118, &v99_.v99, 4 * v102_.v116),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v41 = v118_.v120;
        v42 = v118_.v120 == 0;
        if (v118_.v120 != 0) {
          memcpy_plt(v30, v118_.v118, 4 * v118_.v120),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        *((_QWORD*)a1 + 95) = v41;
        v99_.v99 = v9;
        v99_.v100 = v9;
        memset_plt((void*)&v101, nullptr, 4356, v40),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        goto LABEL_53;
      }
    }
  LABEL_52:
    *((_QWORD*)a1 + 95) = 0;
    v99_.v99 = v9;
    v99_.v100 = v9;
    memset_plt((void*)&v101, nullptr, 4356, v7),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v42 = true;
    if (v9 != 0) {
    LABEL_53:
      v43 = 0;
      v44 = 0;
      v45 = &v102_.v102;
      while (1) {
        v46 = *((float*)v140 + v44);
        v47 = &v12[33 * v143[v44]];
        if ((unsigned __int64)(v9 - 1) >= 7) {
          break;
        }
        v48 = 0;
        if ((v9 & 7) != 0) {
          goto LABEL_61;
        }
      LABEL_54:
        ++v44;
        v45 = (__int64*)((char*)v45 + 132);
        v43 += 33;
        if (v44 == v9) {
          goto LABEL_64;
        }
      }
      v49 = 0;
      v50 = &v144_.v144;
      v51 = (float*)&v124_.v124;
      v52 = (float*)v45;
      do {
        v49 -= 8;
        v53 = v46 * *(v51 - 2);
        v54 = v46 * *(v51 - 1);
        v55 = *(v50 - 1);
        v56 = v47[*(v50 - 3)] - (float)(PSEUDO_UNFUSED(v46 * *(v51 - 3)));
        v57 = v47[*(v50 - 2)];
        *(v52 - 2) =
            v47[*(v50 - 4)] - (float)(PSEUDO_UNFUSED(v46 * *(v51 - 4)));
        *(v52 - 1) = v56;
        v58 = v57 - v53;
        v59 = v46 * *v51;
        v60 = v46 * v51[1];
        v61 = v47[v50[1]];
        v62 = v47[v55] - v54;
        v63 = v47[*v50];
        v64 = v50[2];
        v65 = v50[3];
        v50 += 8;
        *v52 = v58;
        v52[1] = v62;
        v66 = v51[2];
        v67 = v51[3];
        v51 += 8;
        v68 = v47[v64];
        v52[2] = v63 - v59;
        v52[3] = v61 - v60;
        v69 = v47[v65] - (float)(PSEUDO_UNFUSED(v46 * v67));
        v52[4] = v68 - (float)(PSEUDO_UNFUSED(v46 * v66));
        v52[5] = v69;
        v52 += 8;
      } while (-(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL) != v49);
      v48 = -v49;
      if ((v9 & 7) == 0) {
        goto LABEL_54;
      }
    LABEL_61:
      v70 = v48 + v43;
      v71 = (_DWORD*)&v122_.v122 + v48;
      v72 = &v143[v48];
      v73 = v9 & 7;
      v74 = (float*)&v101 + v70;
      do {
        v76 = *v72++;
        v75 = v76;
        LODWORD(v76) = *v71++;
        --v73;
        *v74++ = v47[v75] - (float)(PSEUDO_UNFUSED(v46 * *(float*)&v76));
      } while (v73 != 0);
      goto LABEL_54;
    }
  LABEL_64:
    v77 = v99_.v100;
    *((_QWORD*)a1 + 96) = v99_.v99;
    *((_QWORD*)a1 + 97) = v77;
    memmove_plt(v12, &v101, 4356),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v79 = 0x0.0p+0f;
    if (!v42 && v124_.v139 != 0) {
      v80 = v124_.v139 & 7;
      if (v124_.v139 - 1 >= 7) {
        v82 = v30 + 4;
        v83 = 0;
        v84 = (float*)&v124_.v124;
        do {
          v83 -= 8;
          v85 = (float)((float)((float)((float)((float)(v79 +
                                                        (float)(*(v84 - 4) *
                                                                *(v82 - 4))) +
                                                (float)(*(v84 - 3) *
                                                        *(v82 - 3))) +
                                        (float)(*(v84 - 2) * *(v82 - 2))) +
                                (float)(*(v84 - 1) * *(v82 - 1))) +
                        (float)(*v84 * *v82)) +
                (float)(v84[1] * v82[1]);
          v86 = v84[2];
          v87 = v84[3];
          v88 = v82[2];
          v89 = v82[3];
          v82 += 8;
          v84 += 8;
          v79 = (float)(v85 + (float)(v86 * v88)) + (float)(v87 * v89);
        } while (-(__int64)(v124_.v139 & 0xFFFFFFFFFFFFFFF8LL) != v83);
        v81 = -v83;
        if ((v124_.v139 & 7) == 0) {
          goto LABEL_74;
        }
      }
      else {
        v81 = 0;
        if ((v124_.v139 & 7) == 0) {
          goto LABEL_74;
        }
      }
      v90 = &v30[v81];
      v91 = (float*)&v122_.v122 + v81;
      do {
        v92 = *v91++;
        v93 = v92;
        v94 = *v90++;
        --v80;
        v79 = v79 + (float)(v93 * v94);
      } while (v80 != 0);
    }
  LABEL_74:
    v102_.v116 = v9;
    if (v9 != 0 &&
        (memset_plt((void*)&v99_.v99, nullptr, 4 * v9, v78), v102_.v116 != 0)) {
      v95 = 0;
      v96 = a1 + 1286;
      do {
        *((float*)&v99_.v99 + v95) =
            v96[v143[v95]] -
            (float)(PSEUDO_UNFUSED((float)(v31 + v79) * *((float*)v140 + v95)));
        ++v95;
        v97 = v102_.v116;
      } while (v95 < v102_.v116);
      if (v102_.v116 != 0) {
        memcpy_plt(v96, &v99_.v99, 4 * v102_.v116),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
    }
    else {
      v97 = 0;
    }
    *((_QWORD*)a1 + 660) = v97;
    return v13 > 0x0.0p+0f;
  }
  v8 = a1 + 8;
  v9 = 0;
  v10 = 0;
  do {
    while (a2 == v10) {
      *(_QWORD*)&v8[2 * *(_QWORD*)&v5[2 * a2]] = -1;
      if (++v10 >= *((_QWORD*)a1 + 71)) {
        goto LABEL_6;
      }
    }
    v11 = *(_QWORD*)&v5[2 * v10];
    v143[v9] = v10;
    *(_QWORD*)&v8[2 * v11] = v9;
    v9 = ++v144_.v145;
    ++v10;
  } while (v10 < *((_QWORD*)a1 + 71));
LABEL_6:
  v12 = a1 + 196;
  v13 = a1[34 * a2 + 196];
  if (v13 > 0x0.0p+0f) {
    goto LABEL_9;
  }
  return v13 > 0x0.0p+0f;
}

bool math_727520(_QWORD* a1, __int64 a2, int a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 i;
  unsigned __int64 v11;
  unsigned __int64 v12;
  float* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  __int64 v18;
  float* v19;
  float* v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float* v26;
  unsigned __int64 v27;
  float* v28;
  float v29;
  float v30;
  float v31;
  unsigned __int64 v32;
  float v33;
  float v34;
  _BOOL4 v35;
  unsigned __int64 v36;
  __int64 v37;
  float v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  float v41;
  unsigned __int64* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  char v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  float* v54;
  float* v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float* v61;
  float* v62;
  float v63;
  float v64;
  float v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  char* v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  void* v82;
  unsigned __int64 v83;
  int v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  void* v95;
  _BOOL4 v96;
  _QWORD* v97;
  float v98;
  unsigned __int64 v99;
  __int64 v100;
  float* v101;
  __int64 v102;
  float* v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float* v109;
  float* v110;
  float v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  _DWORD* v117;
  _DWORD* v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  __int64 v124;
  int* v125;
  _DWORD* v126;
  int v127;
  float* v128;
  __int64 v129;
  float v130;
  __int64 v131;
  __int64 v132;
  float* v133;
  float* v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float* v145;
  float* v146;
  unsigned __int64 v147;
  float v148;
  __int64 v149;
  float v150;
  char v151;
  float v152;
  float* v153;
  unsigned __int64 v154;
  unsigned __int64 v156;
  __int64 v157;
  float v158;
  float* v159;
  __int64 v160;
  float* v161;
  float v162;
  float v163;
  float v164;
  float v165;
  float v166;
  float* v167;
  float* v168;
  float v169;
  float v170;
  float v171;
  __int64 v172;
  _QWORD* v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  _QWORD v177[2];
  struct {
    _QWORD v178[15];
    unsigned __int64 v179;
  } v178_;
  float v180[4];
  struct {
    _BYTE v181[120];
    unsigned __int64 v182;
  } v181_;
  _DWORD v183[4];
  struct {
    _BYTE v184[120];
    unsigned __int64 v185;
  } v184_;
  struct {
    unsigned __int64 v186;
    unsigned __int64 v187;
  } v186_;
  struct {
    __int64 v188;
    __int64 v189;
    __int64 v190;
    __int64 v191;
    __int64 v192;
    __int64 v193;
    __int64 v194;
    __int64 v195;
    __int64 v196;
    __int64 v197;
    __int64 v198;
    __int64 v199;
    __int64 v200;
    __int64 v201;
    __int64 v202;
    unsigned __int64 v203;
    char gap608_[4];
    _BYTE v204[4236];
    char gap4848_[8];
    int v205;
    _BOOL4 v206;
  } v188_;

  v75 = COERCE_AS(__typeof__(v75),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v76 = COERCE_AS(__typeof__(v76),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v79 = COERCE_AS(__typeof__(v79),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v90 = COERCE_AS(__typeof__(v90),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = a1[71];
  v5 = *a1;
  v6 = a1 + 38;
  LODWORD(v7) = a3;
  v188_.v203 = v4;
  if (v4 != 0) {
    v188_.v202 = 0;
    v188_.v201 = 0;
    v188_.v200 = 0;
    v188_.v199 = 0;
    v188_.v198 = 0;
    v188_.v197 = 0;
    v188_.v196 = 0;
    v188_.v195 = 0;
    v188_.v194 = 0;
    v188_.v193 = 0;
    v188_.v191 = 0;
    v188_.v192 = 0;
    v188_.v189 = 0;
    v188_.v190 = 0;
    v186_.v187 = 0;
    v188_.v188 = 0;
    v186_.v186 = 0;
    memset_plt((void*)&v186_.v186, nullptr, 4 * v4, a4),
        v75 = COERCE_AS(__typeof__(v75),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v76 = COERCE_AS(__typeof__(v76),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v188_.v203 != 0) {
      for (i = 0; i < v188_.v203; ++i) {
        *((_DWORD*)&v186_.v186 + i) =
            *(_DWORD*)(v5 + 16 + 4 * (33LL * v6[i] + a2));
      }
      v184_.v185 = v188_.v203;
      if (v188_.v203 != 0) {
        memcpy_plt(v183, &v186_.v186, 4 * v188_.v203),
            v75 = COERCE_AS(__typeof__(v75),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v76 = COERCE_AS(__typeof__(v76),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v77 = COERCE_AS(__typeof__(v77),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v93 = COERCE_AS(__typeof__(v93),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v94 = COERCE_AS(__typeof__(v94),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      v11 = a1[96];
      v188_.v203 = v11;
      if (v11 == 0) {
        goto LABEL_27;
      }
    LABEL_8:
      v188_.v202 = 0;
      v188_.v201 = 0;
      v188_.v200 = 0;
      v188_.v199 = 0;
      v188_.v198 = 0;
      v188_.v197 = 0;
      v188_.v196 = 0;
      v188_.v195 = 0;
      v188_.v194 = 0;
      v188_.v193 = 0;
      v188_.v191 = 0;
      v188_.v192 = 0;
      v188_.v189 = 0;
      v188_.v190 = 0;
      v186_.v187 = 0;
      v188_.v188 = 0;
      v186_.v186 = 0;
      memset_plt((void*)&v186_.v186, nullptr, 4 * v11, a4),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v92 = COERCE_AS(__typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v93 = COERCE_AS(__typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v12 = a1[97];
      if (v12 != 0) {
        v13 = (float*)a1 + 203;
        v14 = 0;
        v15 = 0;
        while (v12 < 8) {
          v16 = 0;
          v17 = 0x0.0p+0f;
          if ((v12 & 7) != 0) {
            goto LABEL_17;
          }
        LABEL_10:
          *((float*)&v186_.v186 + v15++) = v17;
          v13 += 33;
          v14 += 33;
          if (v15 == v11) {
            goto LABEL_20;
          }
        }
        v17 = 0x0.0p+0f;
        v18 = 0;
        v19 = (float*)v184_.v184;
        v20 = v13;
        do {
          v18 -= 8;
          v21 = (float)((float)((float)((float)((float)(v17 +
                                                        (float)(*(v20 - 7) *
                                                                *(v19 - 4))) +
                                                (float)(*(v20 - 6) *
                                                        *(v19 - 3))) +
                                        (float)(*(v20 - 5) * *(v19 - 2))) +
                                (float)(*(v20 - 4) * *(v19 - 1))) +
                        (float)(*(v20 - 3) * *v19)) +
                (float)(*(v20 - 2) * v19[1]);
          v22 = *(v20 - 1);
          v23 = *v20;
          v24 = v19[2];
          v25 = v19[3];
          v20 += 8;
          v19 += 8;
          v17 = (float)(v21 + (float)(v22 * v24)) + (float)(v23 * v25);
        } while (-(__int64)(v12 & 0xFFFFFFFFFFFFFFF8LL) != v18);
        v16 = -v18;
        if ((v12 & 7) == 0) {
          goto LABEL_10;
        }
      LABEL_17:
        v26 = (float*)&v183[v16];
        v27 = v12 & 7;
        v28 = (float*)a1 + v16 + v14 + 196;
        do {
          v29 = *v28++;
          v30 = v29;
          v31 = *v26++;
          --v27;
          v17 = v17 + (float)(v30 * v31);
        } while (v27 != 0);
        goto LABEL_10;
      }
    LABEL_20:
      v181_.v182 = v188_.v203;
      if (v188_.v203 == 0) {
        goto LABEL_28;
      }
      memcpy_plt(v180, &v186_.v186, 4 * v188_.v203),
          v75 = COERCE_AS(__typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v76 = COERCE_AS(__typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v92 = COERCE_AS(__typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v93 = COERCE_AS(__typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v94 = COERCE_AS(__typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v32 = v181_.v182;
      v33 = 0x0.0p+0f;
      v34 = *(float*)(v5 + 136 * a2 + 16);
      v35 = v181_.v182 == 0;
      if (v184_.v185 != 0 && v181_.v182 != 0) {
        v36 = v184_.v185 & 7;
        if (v184_.v185 - 1 < 7) {
          v37 = 0;
          if ((v184_.v185 & 7) == 0) {
            goto LABEL_29;
          }
          goto LABEL_49;
        }
        v53 = 0;
        v54 = (float*)v181_.v181;
        v55 = (float*)v184_.v184;
        do {
          v53 -= 8;
          v56 = (float)((float)((float)((float)((float)(v33 +
                                                        (float)(*(v55 - 4) *
                                                                *(v54 - 4))) +
                                                (float)(*(v55 - 3) *
                                                        *(v54 - 3))) +
                                        (float)(*(v55 - 2) * *(v54 - 2))) +
                                (float)(*(v55 - 1) * *(v54 - 1))) +
                        (float)(*v55 * *v54)) +
                (float)(v55[1] * v54[1]);
          v57 = v55[2];
          v58 = v55[3];
          v59 = v54[2];
          v60 = v54[3];
          v54 += 8;
          v55 += 8;
          v33 = (float)(v56 + (float)(v57 * v59)) + (float)(v58 * v60);
        } while (-(__int64)(v184_.v185 & 0xFFFFFFFFFFFFFFF8LL) != v53);
        v37 = -v53;
        if ((v184_.v185 & 7) != 0) {
        LABEL_49:
          v61 = &v180[v37];
          v62 = (float*)&v183[v37];
          do {
            v63 = *v62++;
            v64 = v63;
            v65 = *v61++;
            --v36;
            v33 = v33 + (float)(v64 * v65);
          } while (v36 != 0);
        }
      }
    LABEL_29:
      v38 = v34 - v33;
      if ((float)(v34 - v33) > 0x0.0p+0f) {
        v39 = a1[97];
        v40 = v4 + 1;
        v188_.v206 = v35;
        v41 = 0x1.0000000000000p+0f / v38;
        if (v4 + 1 != v11 || v40 != v39) {
          v42 = a1 + 96;
          v176 = v39;
          if (v40 < 0x22) {
            v48 = v40 - v11;
            v173 = a1 + 96;
            *v42 = v40;
            if (v40 > v11 && v176 != 0) {
              v49 = 33 * v11;
              v50 = v48 & 7;
              v51 = 4 * v176;
              if (v4 - v11 >= 7) {
                v175 = v32;
                v188_.v205 = v7;
                v7 = 0;
                v73 = -(__int64)(v48 & 0x38);
                v172 = 33 * v11;
                v74 = (__int64)v173 + 132 * v11 + 148;
                do {
                  memset_plt((void*)(v74 - 132), nullptr, v51, a4),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)v74, nullptr, v51, v75),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v74 + 132), nullptr, v51, v76),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v74 + 264), nullptr, v51, v77),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v74 + 396), nullptr, v51, v78),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v74 + 528), nullptr, v51, v79),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v74 + 660), nullptr, v51, v80),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v74 + 792), nullptr, v51, v81),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  v74 += 1056;
                  v7 -= 8;
                } while (v73 != v7);
                v52 = -v7;
                LODWORD(v7) = v188_.v205;
                v32 = v175;
                v49 = v172;
              }
              else {
                v52 = 0;
              }
              if (v50 != 0) {
                v82 = (void*)((char*)a1 + 132 * v52 + 4 * v49 + 784);
                do {
                  memset_plt(v82, nullptr, v51, a4),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  v82 = (void*)((char*)v82 + 132);
                  --v50;
                } while (v50 != 0);
              }
            }
            v83 = v176;
            a1[97] = v40;
            if (v40 > v176) {
              v84 = 4 * (v40 - v176);
              v85 = v40 & 7;
              if (v4 >= 7) {
                v188_.v205 = v7;
                v7 = 0;
                v87 = (__int64)v173 + 4 * v176 + 148;
                do {
                  memset_plt((void*)(v87 - 132), nullptr, v84, a4),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)v87, nullptr, v84, v88),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v87 + 132), nullptr, v84, v89),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v87 + 264), nullptr, v84, v90),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v87 + 396), nullptr, v84, v91),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v87 + 528), nullptr, v84, v92),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v87 + 660), nullptr, v84, v93),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memset_plt((void*)(v87 + 792), nullptr, v84, v94),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  v87 += 1056;
                  v7 -= 8;
                } while (-(__int64)(v40 & 0x38) != v7);
                v86 = -v7;
                LOBYTE(v7) = v188_.v205;
                v83 = v176;
              }
              else {
                v86 = 0;
              }
              if ((v40 & 7) != 0) {
                v95 = (void*)((char*)a1 + 132 * v86 + 4 * v83 + 784);
                do {
                  memset_plt(v95, nullptr, v84, a4),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  v95 = (void*)((char*)v95 + 132);
                  --v85;
                } while (v85 != 0);
              }
            }
          }
          else {
            v174 = v32;
            *(_QWORD*)&v188_.v204[4220] = 0;
            v186_.v186 = v4 + 1;
            v186_.v187 = v4 + 1;
            memset_plt((void*)&v188_.v188, nullptr, 4356, a4),
                v75 =
                    COERCE_AS(__typeof__(v75),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v76 =
                    COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v77 =
                    COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v92 =
                    COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v93 =
                    COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v94 =
                    COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            v43 = v176;
            if (v40 >= v11) {
              v44 = v11;
            }
            else {
              v44 = v4 + 1;
            }
            if (v11 != 0 && v176 != 0) {
              if (v40 < v176) {
                v43 = v4 + 1;
              }
              v45 = v44 & 7;
              v46 = 4 * v43;
              if (v44 - 1 >= 7) {
                v188_.v205 = v7;
                v66 = 0;
                v67 = 0;
                v68 = -(__int64)(v44 & 0xFFFFFFFFFFFFFFF8LL);
                do {
                  memcpy_plt((char*)&v188_.v188 + v67 * 8, &a1[v67 + 98], v46),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memcpy_plt(&v188_.v204[v67 * 8], (char*)&a1[v67 + 114] + 4,
                             v46),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memcpy_plt(&v188_.v204[v67 * 8 + 132], &a1[v67 + 131], v46),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memcpy_plt(&v188_.v204[v67 * 8 + 264],
                             (char*)&a1[v67 + 147] + 4, v46),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memcpy_plt(&v188_.v204[v67 * 8 + 396], &a1[v67 + 164], v46),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memcpy_plt(&v188_.v204[v67 * 8 + 528],
                             (char*)&a1[v67 + 180] + 4, v46),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memcpy_plt(&v188_.v204[v67 * 8 + 660], &a1[v67 + 197], v46),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  memcpy_plt(&v188_.v204[v67 * 8 + 792],
                             (char*)&a1[v67 + 213] + 4, v46),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  v67 += 132;
                  v66 -= 8;
                } while (v68 != v66);
                v47 = -v66;
                LOBYTE(v7) = v188_.v205;
                v42 = a1 + 96;
              }
              else {
                v47 = 0;
              }
              if (v45 != 0) {
                v69 = 33 * v47;
                v70 = (char*)a1 + 4 * v69 + 784;
                v71 = (char*)&v188_.v188 + 4 * v69;
                do {
                  memcpy_plt(v71, v70, v46),
                      v75 = COERCE_AS(
                          __typeof__(v75),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v76 = COERCE_AS(
                          __typeof__(v76),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v80 = COERCE_AS(
                          __typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v81 = COERCE_AS(
                          __typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v89 = COERCE_AS(
                          __typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v90 = COERCE_AS(
                          __typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v91 = COERCE_AS(
                          __typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v92 = COERCE_AS(
                          __typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v93 = COERCE_AS(
                          __typeof__(v93),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v94 = COERCE_AS(
                          __typeof__(v94),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  v70 += 132;
                  v71 += 132;
                  --v45;
                } while (v45 != 0);
              }
            }
            v72 = v186_.v187;
            *v42 = v186_.v186;
            v42[1] = v72;
            memcpy_plt(a1 + 98, &v188_.v188, 4356),
                v75 =
                    COERCE_AS(__typeof__(v75),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v76 =
                    COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v77 =
                    COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v92 =
                    COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v93 =
                    COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v94 =
                    COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            v32 = v174;
          }
        }
        v96 = v188_.v206;
        v97 = a1 + 98;
        v178_.v179 = 0;
        memset(v178_.v178, 0, sizeof(v178_.v178));
        v177[0] = 0;
        v177[1] = 0;
        v188_.v203 = v32;
        *(float*)&a1[17 * v4 + 98] = v41;
        if (v96) {
          v178_.v179 = 0;
        }
        else {
          v98 = -v41;
          v188_.v202 = 0;
          v188_.v201 = 0;
          v188_.v200 = 0;
          v188_.v199 = 0;
          v188_.v198 = 0;
          v188_.v197 = 0;
          v188_.v196 = 0;
          v188_.v195 = 0;
          v188_.v194 = 0;
          v188_.v193 = 0;
          v188_.v191 = 0;
          v188_.v192 = 0;
          v188_.v189 = 0;
          v188_.v190 = 0;
          v186_.v187 = 0;
          v188_.v188 = 0;
          v186_.v186 = 0;
          memset_plt((void*)&v186_.v186, nullptr, 4 * v32, a4),
              v75 = COERCE_AS(__typeof__(v75),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v92 = COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          v99 = v32 & 7;
          v100 = 0;
          if (v32 - 1 >= 7) {
            v101 = (float*)&v188_.v188;
            v102 = 0;
            v103 = (float*)v181_.v181;
            do {
              v102 -= 8;
              v104 = *(v103 - 3) * v98;
              *(v101 - 4) = *(v103 - 4) * v98;
              *(v101 - 3) = v104;
              v105 = *(v103 - 1) * v98;
              *(v101 - 2) = *(v103 - 2) * v98;
              *(v101 - 1) = v105;
              v106 = v103[1] * v98;
              *v101 = *v103 * v98;
              v101[1] = v106;
              v107 = v103[2];
              v108 = v103[3];
              v103 += 8;
              v101[2] = v107 * v98;
              v101[3] = v108 * v98;
              v101 += 8;
            } while (-(__int64)(v32 & 0xFFFFFFFFFFFFFFF8LL) != v102);
            v100 = -v102;
          }
          if ((v32 & 7) != 0) {
            v109 = (float*)&v186_.v186 + v100;
            v110 = &v180[v100];
            do {
              v111 = *v110++;
              --v99;
              *v109++ = v111 * v98;
            } while (v99 != 0);
          }
          v178_.v179 = v188_.v203;
          if (v188_.v203 != 0) {
            memcpy_plt(v177, &v186_.v186, 4 * v188_.v203),
                v75 =
                    COERCE_AS(__typeof__(v75),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v76 =
                    COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v77 =
                    COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v92 =
                    COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v93 =
                    COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v94 =
                    COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            v112 = v178_.v179;
            if (v178_.v179 != 0) {
              v113 = v178_.v179 & 7;
              if (v178_.v179 >= 8) {
                v115 = 0;
                v116 = -(__int64)(v178_.v179 & 0xFFFFFFFFFFFFFFF8LL);
                v117 = (_DWORD*)a1 + v4 + 229;
                v118 = v178_.v178;
                do {
                  v119 = *(v118 - 3);
                  v115 -= 8;
                  *(v117 - 33) = *(v118 - 4);
                  *v117 = v119;
                  v120 = *(v118 - 1);
                  v117[33] = *(v118 - 2);
                  v117[66] = v120;
                  v121 = v118[1];
                  v117[99] = *v118;
                  v117[132] = v121;
                  v122 = v118[2];
                  v123 = v118[3];
                  v118 += 8;
                  v117[165] = v122;
                  v117[198] = v123;
                  v117 += 264;
                } while (v116 != v115);
                v114 = -v115;
              }
              else {
                v114 = 0;
              }
              if (v113 != 0) {
                v124 = 132 * v114;
                v125 = (int*)v177 + v114;
                v126 = (_DWORD*)((char*)a1 + 4 * v4 + v124 + 784);
                do {
                  v127 = *v125++;
                  --v113;
                  *v126 = v127;
                  v126 += 33;
                } while (v113 != 0);
              }
              memcpy_plt((char*)v97 + 132 * v4, v177, 4 * v112),
                  v75 = COERCE_AS(
                      __typeof__(v75),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v76 = COERCE_AS(
                      __typeof__(v76),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v77 = COERCE_AS(
                      __typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v78 = COERCE_AS(
                      __typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v79 = COERCE_AS(
                      __typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v88 = COERCE_AS(
                      __typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v89 = COERCE_AS(
                      __typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v90 = COERCE_AS(
                      __typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v91 = COERCE_AS(
                      __typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v92 = COERCE_AS(
                      __typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v93 = COERCE_AS(
                      __typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v94 = COERCE_AS(
                      __typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            }
          }
        }
        if (v4 != 0) {
          v128 = (float*)a1 + 203;
          v129 = 0;
          while (1) {
            v130 = *((float*)v177 + v129);
            if (v4 >= 8) {
              break;
            }
            v131 = 0;
            if ((v4 & 7) != 0) {
              goto LABEL_103;
            }
          LABEL_96:
            ++v129;
            v128 += 33;
            v97 = (_QWORD*)((char*)v97 + 132);
            if (v129 == v4) {
              goto LABEL_106;
            }
          }
          v132 = 0;
          v133 = (float*)v181_.v181;
          v134 = v128;
          do {
            v132 -= 8;
            v135 = *(v134 - 6) - (float)(PSEUDO_UNFUSED(v130 * *(v133 - 3)));
            v136 = *v133;
            v137 = v133[1];
            v138 = *(v134 - 5) - (float)(PSEUDO_UNFUSED(v130 * *(v133 - 2)));
            v139 = *(v134 - 4) - (float)(PSEUDO_UNFUSED(v130 * *(v133 - 1)));
            v140 = *(v134 - 3);
            v141 = *(v134 - 2);
            *(v134 - 7) =
                *(v134 - 7) - (float)(PSEUDO_UNFUSED(v130 * *(v133 - 4)));
            *(v134 - 6) = v135;
            v142 = v133[2];
            v143 = v133[3];
            *(v134 - 5) = v138;
            *(v134 - 4) = v139;
            v133 += 8;
            *(v134 - 3) = v140 - (float)(PSEUDO_UNFUSED(v130 * v136));
            *(v134 - 2) = v141 - (float)(PSEUDO_UNFUSED(v130 * v137));
            v144 = *v134 - (float)(PSEUDO_UNFUSED(v130 * v143));
            *(v134 - 1) = *(v134 - 1) - (float)(PSEUDO_UNFUSED(v130 * v142));
            *v134 = v144;
            v134 += 8;
          } while (-(__int64)(v4 & 0xFFFFFFFFFFFFFFF8LL) != v132);
          v131 = -v132;
          if ((v4 & 7) == 0) {
            goto LABEL_96;
          }
        LABEL_103:
          v145 = (float*)v97 + v131;
          v146 = &v180[v131];
          v147 = v4 & 7;
          do {
            v148 = *v146++;
            --v147;
            *v145 = *v145 - (float)(PSEUDO_UNFUSED(v130 * v148));
            ++v145;
          } while (v147 != 0);
          goto LABEL_96;
        }
      LABEL_106:
        v149 = 2;
        if ((v7 & 1) != 0) {
          v149 = 3;
        }
        v150 = *(float*)(a1[v149] + 4 * a2) - *(float*)(a1[1] + 4 * a2);
        v151 = a1[95] == 0 || v96;
        if ((v151 & 1) != 0) {
          v152 = v41 * v150;
          v153 = (float*)(a1 + 643);
          if (v96) {
          LABEL_116:
            v153[(*((_QWORD*)v153 + 17))++] = v152;
            v6[a1[71]++] = a2;
            *((_BYTE*)a1 + a1[77]++ + 576) = v7 & 1;
            *((float*)a1 + a1[95]++ + 156) = v150;
            a1[a2 + 4] = v4;
            return v38 > 0x0.0p+0f;
          }
          if (a1[660] != 0) {
          LABEL_114:
            v154 = 0;
            do {
              *((float*)a1 + v154 + 1286) =
                  *((float*)a1 + v154 + 1286) -
                  (float)(PSEUDO_UNFUSED(v152 * v180[v154]));
              ++v154;
            } while (v154 < a1[660]);
            goto LABEL_116;
          }
        LABEL_127:
          memset_plt((void*)v153, nullptr, 4 * v32, a4),
              v75 = COERCE_AS(__typeof__(v75),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v92 = COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          a1[660] = v32;
          goto LABEL_114;
        }
        v156 = v32 & 7;
        if (v32 - 1 >= 7) {
          v158 = 0x0.0p+0f;
          v159 = (float*)a1 + 163;
          v160 = 0;
          v161 = (float*)v181_.v181;
          do {
            v160 -= 8;
            v162 =
                (float)((float)((float)((float)((float)(v158 +
                                                        (float)(*(v161 - 4) *
                                                                *(v159 - 7))) +
                                                (float)(*(v161 - 3) *
                                                        *(v159 - 6))) +
                                        (float)(*(v161 - 2) * *(v159 - 5))) +
                                (float)(*(v161 - 1) * *(v159 - 4))) +
                        (float)(*v161 * *(v159 - 3))) +
                (float)(v161[1] * *(v159 - 2));
            v163 = v161[2];
            v164 = v161[3];
            v165 = *(v159 - 1);
            v166 = *v159;
            v159 += 8;
            v161 += 8;
            v158 = (float)(v162 + (float)(v163 * v165)) + (float)(v164 * v166);
          } while (-(__int64)(v32 & 0xFFFFFFFFFFFFFFF8LL) != v160);
          v157 = -v160;
          if ((v32 & 7) == 0) {
          LABEL_126:
            v153 = (float*)(a1 + 643);
            v152 = v41 * (float)(v150 - v158);
            if (a1[660] != 0) {
              goto LABEL_114;
            }
            goto LABEL_127;
          }
        }
        else {
          v157 = 0;
          v158 = 0x0.0p+0f;
          if ((v32 & 7) == 0) {
            goto LABEL_126;
          }
        }
        v167 = (float*)a1 + v157 + 156;
        v168 = &v180[v157];
        do {
          v169 = *v168++;
          v170 = v169;
          v171 = *v167++;
          --v156;
          v158 = v158 + (float)(v170 * v171);
        } while (v156 != 0);
        goto LABEL_126;
      }
      return v38 > 0x0.0p+0f;
    }
  }
  v184_.v185 = 0;
  v11 = a1[96];
  v188_.v203 = v11;
  if (v11 != 0) {
    goto LABEL_8;
  }
LABEL_27:
  v181_.v182 = 0;
LABEL_28:
  v32 = 0;
  v33 = 0x0.0p+0f;
  v35 = true;
  v34 = *(float*)(v5 + 136 * a2 + 16);
  goto LABEL_29;
}

__attribute__((swiftcall)) void math_730a40(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            __int64* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  *a2 = *fw_math_LookupStateIndex(a1, a2);
  a2[1] = *fw_math_LookupStateIndex(a1, a2 + 1);
  a2[2] = *fw_math_LookupStateIndex(a1, a2 + 2);
  a2[3] = *fw_math_LookupStateIndex(a1, a2 + 3);
  a2[4] = *fw_math_LookupStateIndex(a1, a2 + 4);
  a2[5] = *fw_math_LookupStateIndex(a1, a2 + 5);
  a2[6] = *fw_math_LookupStateIndex(a1, a2 + 6);
  a2[7] = *fw_math_LookupStateIndex(a1, a2 + 7);
  a2[8] = *fw_math_LookupStateIndex(a1, a2 + 8);
  a2[9] = *fw_math_LookupStateIndex(a1, a2 + 9);
  a2[10] = *fw_math_LookupStateIndex(a1, a2 + 10);
  a2[11] = *fw_math_LookupStateIndex(a1, a2 + 11);
  a2[12] = *fw_math_LookupStateIndex(a1, a2 + 12);
  a2[13] = *fw_math_LookupStateIndex(a1, a2 + 13);
  a2[14] = *fw_math_LookupStateIndex(a1, a2 + 14);
  a2[15] = *fw_math_LookupStateIndex(a1, a2 + 15);
  a2[16] = *fw_math_LookupStateIndex(a1, a2 + 16);
  a2[17] = *fw_math_LookupStateIndex(a1, a2 + 17);
  a2[18] = *fw_math_LookupStateIndex(a1, a2 + 18);
  a2[19] = *fw_math_LookupStateIndex(a1, a2 + 19);
  a2[20] = *fw_math_LookupStateIndex(a1, a2 + 20);
  a2[21] = *fw_math_LookupStateIndex(a1, a2 + 21);
  a2[22] = *fw_math_LookupStateIndex(a1, a2 + 22);
  a2[23] = *fw_math_LookupStateIndex(a1, a2 + 23);
  a2[24] = *fw_math_LookupStateIndex(a1, a2 + 24);
  a2[25] = *fw_math_LookupStateIndex(a1, a2 + 25);
  a2[26] = *fw_math_LookupStateIndex(a1, a2 + 26);
  {
    memcpy_plt(a3, a2, 216);
    return;
  }
}

__attribute__((swiftcall)) void math_730ca0(PSEUDO_X8 x8_, __int64 a1,
                                            __int64* a2, __int64* a3,
                                            unsigned __int64 a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  _DWORD* v62;
  __int64 v65;
  struct {
    char gap16_[4];
    _BYTE v66[2924];
    char gap2944_[8];
    __int64 v67;
  } v66_;

  v6 = a1 + 16;
  memset_plt((void*)v66_.v66, nullptr, 2916, a4);
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v11 = 0;
  v66_.v67 = *a3;
  v12 = a3[4];
  v13 = a3[5];
  v14 = a3[6];
  v15 = a3[7];
  v16 = a3[8];
  v17 = a3[9];
  v18 = a3[10];
  v19 = a3[11];
  v20 = a3[12];
  v21 = a3[13];
  v65 = v8;
  v22 = a3[14];
  v23 = a3[15];
  v24 = a3[16];
  v25 = a3[17];
  v26 = a3[18];
  v27 = a3[19];
  v28 = a3[20];
  v29 = a3[21];
  v30 = a3[22];
  v31 = a3[23];
  v32 = a3[24];
  v33 = a3[25];
  v34 = a3[26];
  do {
    v35 = *a2++;
    v36 = *(_DWORD*)(v6 + 4 * (33 * v35 + v65));
    v37 = *(_DWORD*)(v6 + 4 * (33 * v35 + v9));
    v38 = *(_DWORD*)(v6 + 4 * (33 * v35 + v10));
    v39 = *(_DWORD*)(v6 + 4 * (33 * v35 + v12));
    v40 = *(_DWORD*)(v6 + 4 * (33 * v35 + v13));
    v41 = *(_DWORD*)(v6 + 4 * (33 * v35 + v14));
    v42 = *(_DWORD*)(v6 + 4 * (33 * v35 + v15));
    v43 = *(_DWORD*)(v6 + 4 * (33 * v35 + v16));
    v44 = *(_DWORD*)(v6 + 4 * (33 * v35 + v17));
    v45 = *(_DWORD*)(v6 + 4 * (33 * v35 + v18));
    v46 = *(_DWORD*)(v6 + 4 * (33 * v35 + v19));
    v47 = *(_DWORD*)(v6 + 4 * (33 * v35 + v20));
    v48 = *(_DWORD*)(v6 + 4 * (33 * v35 + v21));
    v49 = *(_DWORD*)(v6 + 4 * (33 * v35 + v22));
    v50 = *(_DWORD*)(v6 + 4 * (33 * v35 + v23));
    v51 = *(_DWORD*)(v6 + 4 * (33 * v35 + v24));
    v52 = *(_DWORD*)(v6 + 4 * (33 * v35 + v25));
    v53 = *(_DWORD*)(v6 + 4 * (33 * v35 + v26));
    v54 = *(_DWORD*)(v6 + 4 * (33 * v35 + v27));
    v55 = *(_DWORD*)(v6 + 4 * (33 * v35 + v28));
    v56 = *(_DWORD*)(v6 + 4 * (33 * v35 + v29));
    v57 = *(_DWORD*)(v6 + 4 * (33 * v35 + v30));
    v58 = *(_DWORD*)(v6 + 4 * (33 * v35 + v31));
    v59 = *(_DWORD*)(v6 + 4 * (33 * v35 + v32));
    v60 = *(_DWORD*)(v6 + 4 * (33 * v35 + v33));
    v61 = *(_DWORD*)(v6 + 4 * (33 * v35 + v34));
    v62 = &v66_.v66[v11];
    v11 += 108;
    *v62 = *(_DWORD*)(v6 + 4 * (33 * v35 + v66_.v67));
    v62[1] = v36;
    v62[2] = v37;
    v62[3] = v38;
    v62[4] = v39;
    v62[5] = v40;
    v62[6] = v41;
    v62[7] = v42;
    v62[8] = v43;
    v62[9] = v44;
    v62[10] = v45;
    v62[11] = v46;
    v62[12] = v47;
    v62[13] = v48;
    v62[14] = v49;
    v62[15] = v50;
    v62[16] = v51;
    v62[17] = v52;
    v62[18] = v53;
    v62[19] = v54;
    v62[20] = v55;
    v62[21] = v56;
    v62[22] = v57;
    v62[23] = v58;
    v62[24] = v59;
    v62[25] = v60;
    v62[26] = v61;
  } while (v11 != 2916);
  {
    memcpy_plt(a5, v66_.v66, 2916);
    return;
  }
}

unsigned __int64 math_7312c0(unsigned __int64* a1, unsigned __int64* a2,
                             __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 result;
  unsigned __int64 v7;
  unsigned __int64* v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;

  result = math_731120((__int64)a1, a2[388], a3, a4);
  v8 = a2;
  if (*a2 == 0) {
    v8 = a2;
    do {
      v9 = v8[3];
      v8 += 3;
    } while (v9 == 0);
  }
  v10 = &a2[3 * a2[387]];
  if (*v10 == 0) {
    do {
      v11 = v10[3];
      v10 += 3;
    } while (v11 == 0);
  }
  while (v8 != v10) {
    result = math_730ec0(a1, v8[1], v8[2], v7);
    do {
      v12 = v8[3];
      v8 += 3;
    } while (v12 == 0);
  }
  return result;
}

unsigned __int64* math_731360(unsigned __int64* a1, unsigned __int64* a2,
                              __int64 a3, unsigned __int64 a4)
{
  unsigned __int64* v6;
  unsigned __int64 v7;
  unsigned __int64* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64* v12;
  unsigned __int64 v13;
  unsigned __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;

  if (a1[388] != 0) {
    v6 = a1;
    if (*a1 == 0) {
      v6 = a1;
      do {
        v7 = v6[3];
        v6 += 3;
      } while (v7 == 0);
    }
    v8 = &a1[3 * a1[387]];
    if (*v8 == 0) {
      do {
        v9 = v8[3];
        v8 += 3;
      } while (v9 == 0);
    }
    while (v6 != v8) {
      *v6 = 0;
      do {
        v10 = v6[3];
        v6 += 3;
      } while (v10 == 0);
    }
    a1[388] = 0;
  }
  math_731120((__int64)a1, a2[388], a3, a4);
  v12 = a2;
  if (*a2 == 0) {
    v12 = a2;
    do {
      v13 = v12[3];
      v12 += 3;
    } while (v13 == 0);
  }
  v14 = &a2[3 * a2[387]];
  if (*v14 == 0) {
    do {
      v15 = v14[3];
      v14 += 3;
    } while (v15 == 0);
  }
  while (v12 != v14) {
    math_730ec0(a1, v12[1], v12[2], v11);
    do {
      v16 = v12[3];
      v12 += 3;
    } while (v16 == 0);
  }
  return a1;
}

float math_7314a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  float result;
  __int64 v5;

  v2 = a2 + 16;
  for (i = 0; i != 72; i += 8) {
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * **(_QWORD**)(a1 + 32) * *(_QWORD*)(a1 + 8)) =
        *(_DWORD*)(v2 - 16);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 - 12);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 16LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 - 8);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 - 4);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 32LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)v2;
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 40LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 + 4);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 48LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 + 8);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 56LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 + 12);
    result = *(float*)(v2 + 16);
    v2 += 36;
    v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + i);
    *(float*)(*(_QWORD*)a1 + 4 * v5 * *(_QWORD*)(a1 + 16) +
              4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 64LL) *
                  *(_QWORD*)(a1 + 8)) = result;
  }
  return result;
}

float math_732b60(_QWORD* a1, _DWORD** a2)
{
  float result;

  *(_DWORD*)(*a1 + 4LL * a1[2] * a1[1]) = **a2;
  *(_DWORD*)(*a1 + 4LL * (a1[1] + a1[1] * a1[2])) = (*a2)[1];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 2LL) * a1[1]) = (*a2)[2];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 3LL) * a1[1]) = (*a2)[3];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 4LL) * a1[1]) = (*a2)[4];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 5LL) * a1[1]) = (*a2)[5];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 6LL) * a1[1]) = (*a2)[6];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 7LL) * a1[1]) = (*a2)[7];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 8LL) * a1[1]) = (*a2)[8];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 9LL) * a1[1]) = (*a2)[9];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 10LL) * a1[1]) = (*a2)[10];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 11LL) * a1[1]) = (*a2)[11];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 12LL) * a1[1]) = (*a2)[12];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 13LL) * a1[1]) = (*a2)[13];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 14LL) * a1[1]) = (*a2)[14];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 15LL) * a1[1]) = (*a2)[15];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 16LL) * a1[1]) = (*a2)[16];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 17LL) * a1[1]) = (*a2)[17];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 18LL) * a1[1]) = (*a2)[18];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 19LL) * a1[1]) = (*a2)[19];
  result = *((float*)*a2 + 20);
  *(float*)(*a1 + 4 * (a1[2] + 20LL) * a1[1]) = result;
  return result;
}

float math_733f80(_QWORD* a1, float a2)
{
  float* v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float* v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;

  v2 = (float*)a1[1];
  v3 = 1.0 - a2;
  v4 = a2 * (float)(1.0 - a2);
  v5 = a2 * *(float*)(*a1 + 64LL);
  v6 = a2 * *(float*)(*a1 + 68LL);
  v7 = a2 * *(float*)(*a1 + 72LL);
  v8 = (float)(1.0 - a2) * v2[4];
  v9 = (float)(1.0 - a2) * v2[5];
  v10 = (float)(1.0 - a2) * v2[6];
  v11 = (float)(1.0 - a2) * v2[7];
  v65 = a2 * *(float*)(*a1 + 4LL);
  v66 = a2 * *(float*)*a1;
  v63 = a2 * *(float*)(*a1 + 12LL);
  v64 = a2 * *(float*)(*a1 + 8LL);
  v61 = a2 * *(float*)(*a1 + 20LL);
  v62 = a2 * *(float*)(*a1 + 16LL);
  v59 = a2 * *(float*)(*a1 + 28LL);
  v60 = a2 * *(float*)(*a1 + 24LL);
  v57 = a2 * *(float*)(*a1 + 36LL);
  v58 = a2 * *(float*)(*a1 + 32LL);
  v12 = v2[2];
  v13 = v2[3];
  v14 = (float)(1.0 - a2) * v2[20];
  v67 = a2 * *(float*)(*a1 + 80LL);
  v68 = a2 * *(float*)(*a1 + 76LL);
  v15 = (float)(1.0 - a2) * *v2;
  v16 = (float)(1.0 - a2) * v2[1];
  v17 = (float)(1.0 - a2) * v2[9];
  v18 = (float)(1.0 - a2) * v2[8];
  v19 =
      (float)(a2 * *(float*)(*a1 + 40LL)) + (float)((float)(1.0 - a2) * v2[10]);
  v20 =
      (float)(a2 * *(float*)(*a1 + 44LL)) + (float)((float)(1.0 - a2) * v2[11]);
  v21 =
      (float)(a2 * *(float*)(*a1 + 48LL)) + (float)((float)(1.0 - a2) * v2[12]);
  v22 = v4 / (float)((float)(a2 * *(float*)(*a1 + 52LL)) +
                     (float)((float)(1.0 - a2) * v2[13]));
  v23 =
      (float)(a2 * *(float*)(*a1 + 56LL)) + (float)((float)(1.0 - a2) * v2[14]);
  v24 =
      (float)(a2 * *(float*)(*a1 + 60LL)) + (float)((float)(1.0 - a2) * v2[15]);
  v25 = (float)(1.0 - a2) * v2[16];
  v26 = (float)(1.0 - a2) * v2[17];
  v28 = v2[18];
  v27 = v2[19];
  v29 = (float*)a1[2];
  v30 = v4 / v23;
  v31 = v4 / v24;
  v32 = v3 * v28;
  v33 = v3 * v27;
  v34 = v4 / (float)(v5 + v25);
  v35 = v4 / (float)(v66 + v15);
  v36 = v4 / (float)(v65 + v16);
  v37 = v4 / (float)(v64 + (float)(v3 * v12));
  v38 = v4 / (float)(v63 + (float)(v3 * v13));
  v39 = v4 / (float)(v62 + v8);
  v40 = v4 / (float)(v61 + v9);
  v41 = v6 + v26;
  v42 = v7 + v32;
  v43 = v4 / (float)(v59 + v11);
  v44 = v4 / (float)(v57 + v17);
  v45 = v4 / v19;
  v46 = v4 / v20;
  v47 = v4 / v21;
  v48 = v4 / v41;
  v49 = v4 / v42;
  v50 = v4 / (float)(v68 + v33);
  v51 = v67 + v14;
  v52 = v4 / (float)(v60 + v10);
  v53 = v4 / (float)(v58 + v18);
  v54 = (float)(v4 / v51) * (float)(v29[20] * v29[20]);
  v55 =
      (float)((float)((float)((float)((float)((float)((float)((float)(v35 *
                                                                      (float)(*v29 *
                                                                              *v29)) +
                                                              0.0) +
                                                      (float)(v36 *
                                                              (float)(v29[1] *
                                                                      v29[1]))) +
                                              (float)(v37 * (float)(v29[2] *
                                                                    v29[2]))) +
                                      (float)(v38 * (float)(v29[3] * v29[3]))) +
                              (float)(v39 * (float)(v29[4] * v29[4]))) +
                      (float)(v40 * (float)(v29[5] * v29[5]))) +
              (float)(v52 * (float)(v29[6] * v29[6]))) +
      (float)(v43 * (float)(v29[7] * v29[7]));
  return (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v55 +
                                                                                                         (float)(v53 *
                                                                                                                 (float)(v29[8] *
                                                                                                                         v29[8]))) +
                                                                                                 (float)(v44 *
                                                                                                         (float)(v29[9] *
                                                                                                                 v29[9]))) +
                                                                                         (float)(v45 *
                                                                                                 (float)(v29[10] *
                                                                                                         v29[10]))) +
                                                                                 (float)(v46 *
                                                                                         (float)(v29[11] *
                                                                                                 v29[11]))) +
                                                                         (float)(v47 *
                                                                                 (float)(v29[12] *
                                                                                         v29[12]))) +
                                                                 (float)(v22 *
                                                                         (float)(v29[13] *
                                                                                 v29[13]))) +
                                                         (float)(v30 *
                                                                 (float)(v29[14] *
                                                                         v29[14]))) +
                                                 (float)(v31 *
                                                         (float)(v29[15] *
                                                                 v29[15]))) +
                                         (float)(v34 *
                                                 (float)(v29[16] * v29[16]))) +
                                 (float)(v48 * (float)(v29[17] * v29[17]))) +
                         (float)(v49 * (float)(v29[18] * v29[18]))) +
                 (float)(v50 * (float)(v29[19] * v29[19]))) +
         v54;
}

unsigned __int64 math_7342e0(unsigned __int64* a1, unsigned __int64* a2,
                             __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64* v11;
  unsigned __int64 v12;

  if (a1[388] != 0) {
    v4 = a1[387];
    v5 = *a2;
    v6 = &a1[3 * ((v4 - 1) & *a2)];
    if (*v6 != 0) {
      if (v6[1] == v5) {
        goto LABEL_17;
      }
      v7 = 1;
      while (1) {
        v6 += 3;
        ++v7;
        if (v6 == &a1[3 * v4]) {
          v6 = a1;
        }
        if (*v6 < v7) {
          break;
        }
        if (v6[1] == v5) {
          if (*v6 == 0) {
            do {
              v8 = v6[3];
              v6 += 3;
            } while (v8 == 0);
          }
          goto LABEL_17;
        }
      }
    }
    v6 = &a1[3 * v4];
    if (*v6 == 0) {
      do {
        v10 = v6[3];
        v6 += 3;
      } while (v10 == 0);
    }
  }
  else {
    v4 = a1[387];
    v6 = &a1[3 * v4];
    if (*v6 == 0) {
      do {
        v9 = v6[3];
        v6 += 3;
      } while (v9 == 0);
    }
  }
LABEL_17:
  v11 = &a1[3 * v4];
  if (*v11 == 0) {
    do {
      v12 = v11[3];
      v11 += 3;
    } while (v12 == 0);
  }
  if (v6 == v11) {
    return math_730ec0(a1, *a2, 0, a4) + 16;
  }
  else {
    return (unsigned __int64)(v6 + 2);
  }
}

bool math_734400(unsigned __int64* a1, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  unsigned __int64* v12;
  unsigned __int64* v13;
  unsigned __int64 v14;
  unsigned __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;

  v2 = a1[388];
  if (v2 != 0) {
    v3 = a1[387];
    v4 = *a2;
    v5 = &a1[3 * ((v3 - 1) & *a2)];
    if (*v5 != 0) {
      if (v5[1] == v4) {
        goto LABEL_17;
      }
      v6 = 1;
      while (1) {
        v5 += 3;
        ++v6;
        if (v5 == &a1[3 * v3]) {
          v5 = a1;
        }
        if (*v5 < v6) {
          break;
        }
        if (v5[1] == v4) {
          if (*v5 == 0) {
            do {
              v7 = v5[3];
              v5 += 3;
            } while (v7 == 0);
          }
          goto LABEL_17;
        }
      }
    }
    v5 = &a1[3 * v3];
    if (*v5 == 0) {
      do {
        v9 = v5[3];
        v5 += 3;
      } while (v9 == 0);
    }
  }
  else {
    v3 = a1[387];
    v5 = &a1[3 * v3];
    if (*v5 == 0) {
      do {
        v8 = v5[3];
        v5 += 3;
      } while (v8 == 0);
    }
  }
LABEL_17:
  v10 = &a1[3 * v3];
  if (*v10 == 0) {
    do {
      v11 = v10[3];
      v10 += 3;
    } while (v11 == 0);
  }
  if (v5 != v10) {
    v12 = v5;
    a1[388] = v2 - 1;
    v13 = v5 + 3;
    v14 = v5[3];
    if (v14 >= 2) {
      v15 = v5;
      while (1) {
        if (v14 == -1) {
          v14 = *a1;
          v13 = a1;
          if (*a1 < 2) {
            break;
          }
        }
        v16 = v14 - 1;
        v12 = v13;
        *v13 = v16;
        v17 = *v15;
        v18 = v15[1];
        *v15 = v16;
        v19 = v15[2];
        v15[1] = v13[1];
        v15[2] = v13[2];
        *v13 = v17;
        v13[1] = v18;
        v13[2] = v19;
        v15 = v13;
        v20 = v13[3];
        v13 += 3;
        v14 = v20;
        if (v20 <= 1) {
          goto LABEL_26;
        }
      }
      v12 = v15;
    }
  LABEL_26:
    *v12 = 0;
  }
  return v5 != v10;
}

#pragma GCC visibility pop
