#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_879ef0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a3f0(PSEUDO_X8, _QWORD, _QWORD,
                                                  _QWORD);
__attribute__((swiftcall)) void math_702080(PSEUDO_X8, __int64, __int64*,
                                            __int64*);
__int64 gyro_pointing_kalman_filter_729580(unsigned __int64*, __int64*,
                                           __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
double math_722a20(double, double);
extern void (*SdkData_e89198[33])();
extern void (*SdkData_e891a8[31])();
float gyro_pointing_kalman_filter_728fe0(unsigned __int64*, unsigned __int64*,
                                         __int64);
float gyro_pointing_kalman_filter_729c20(unsigned __int64*, unsigned __int64*,
                                         __int64);
_QWORD* math_7022a0(_QWORD* a1, _QWORD* a2);
float math_728a60(__int64 a1, __int64* a2);
void math_734e60(void* this_);

_QWORD* math_7022a0(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
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
  float v19;
  __int64 v20;
  float* v21;
  float* v22;
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
  _QWORD* result;
  __int64 v35;
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
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  char v65;
  _QWORD v66[364];
  _BYTE v67[2916];
  _QWORD v68[364];
  _BYTE v69[2916];
  _BYTE v70[2916];
  __int64 v71[21];
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78[28];

  {
    v2 = a1[16];
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v3 = a1[17];
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v6 = a2[20];
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = v3 + 2;
  {
    v72 = a2[21];
    __asm__ volatile("" ::"r"(v72));
  }
  v71[18] = v6;
  v78[0] = v2;
  v78[1] = v2 + 1;
  v8 = v3 + 1;
  v71[19] = v6 + 1;
  v71[20] = v6 + 2;
  v73 = v72 + 1;
  v74 = v72 + 2;
  v75 = v72 + 3;
  v76 = v72 + 4;
  v77 = v72 + 5;
  v78[2] = v2 + 2;
  v78[3] = v3;
  {
    v9 = a1[18];
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v10 = a1[19];
    __asm__ volatile("" ::"r"(v10));
  }
  v78[4] = v8;
  v78[5] = v7;
  v11 = v9 + 2;
  v78[6] = v9;
  v78[7] = v9 + 1;
  {
    v12 = a1[20];
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = a1[21];
    __asm__ volatile("" ::"r"(v13));
  }
  v78[12] = v10 + 3;
  v78[13] = v10 + 4;
  v78[14] = v10 + 5;
  v78[15] = v10 + 6;
  {
    v14 = a2[18];
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = a2[19];
    __asm__ volatile("" ::"r"(v15));
  }
  v78[8] = v11;
  v78[9] = v10;
  v78[16] = v10 + 7;
  v78[17] = v10 + 8;
  v78[10] = v10 + 1;
  v78[11] = v10 + 2;
  v16 = v12 + 2;
  v71[6] = v14;
  v71[9] = v15;
  v78[18] = v12;
  v78[19] = v12 + 1;
  {
    v17 = a2[16];
    __asm__ volatile("" ::"r"(v17));
  }
  {
    v18 = a2[17];
    __asm__ volatile("" ::"r"(v18));
  }
  v78[20] = v16;
  v78[21] = v13;
  v78[22] = v13 + 1;
  v78[23] = v13 + 2;
  v78[24] = v13 + 3;
  v78[25] = v13 + 4;
  v78[26] = v13 + 5;
  v71[7] = v14 + 1;
  v71[8] = v14 + 2;
  v71[17] = v15 + 8;
  v71[11] = v15 + 2;
  v71[13] = v15 + 4;
  v71[10] = v15 + 1;
  v71[12] = v15 + 3;
  v71[14] = v15 + 5;
  v71[15] = v15 + 6;
  v71[16] = v15 + 7;
  v71[0] = v17;
  v71[3] = v18;
  v71[1] = v17 + 1;
  v71[2] = v17 + 2;
  v71[4] = v18 + 1;
  v71[5] = v18 + 2;
  memset_plt((__int64)v70, 0, 0xB64u);
  math_702080((void*)((__int64)v70), (__int64)(a1 + 22), v78, v78);
  memset_plt((__int64)v69, 0, 0xB64u);
  math_702080((void*)((__int64)v69), (__int64)(a2 + 22), v71, v71);
  v19 = 0x0.0p+0f;
  v20 = 0;
  do {
    {
      v21 = (float*)&v70[v20];
      __asm__ volatile("" ::"r"(v21));
    }
    {
      v22 = (float*)&v69[v20];
      __asm__ volatile("" ::"r"(v22));
    }
    v20 += 336;
    if (*v22 >= *v21) {
      v23 = *v21;
      __asm__ volatile("" ::"w"(v23));
    }
    else {
      v23 = *v22;
      __asm__ volatile("" ::"w"(v23));
    }
    v24 = v23 * 0x1.0000000000000p-23f;
    {
      v25 = v22[28];
      __asm__ volatile("" ::"w"(v25));
    }
    v26 = vabds_f32(*v21, *v22) / v24;
    {
      v27 = v21[28];
      __asm__ volatile("" ::"w"(v27));
    }
    if (v19 >= v26) {
      v26 = v19;
    }
    if (v25 >= v27) {
      v28 = v21[28];
      __asm__ volatile("" ::"w"(v28));
    }
    else {
      v28 = v22[28];
      __asm__ volatile("" ::"w"(v28));
    }
    v29 = vabds_f32(v27, v25) / (float)(v28 * 0x1.0000000000000p-23f);
    {
      v30 = v22[56];
      __asm__ volatile("" ::"w"(v30));
    }
    if (v26 < v29) {
      v26 = v29;
    }
    {
      v31 = v21[56];
      __asm__ volatile("" ::"w"(v31));
    }
    if (v30 >= v31) {
      v32 = v21[56];
      __asm__ volatile("" ::"w"(v32));
    }
    else {
      v32 = v22[56];
      __asm__ volatile("" ::"w"(v32));
    }
    v33 = vabds_f32(v31, v30) / (float)(v32 * 0x1.0000000000000p-23f);
    if (v26 >= v33) {
      v19 = v26;
    }
    else {
      v19 = v33;
    }
  } while (v20 != 3024);
  memset_plt((__int64)v68, 0, 0xB64u);
  memcpy_plt((__int64)v67, (__int64)v70, 0xB64u);
  SdkRoutine_879ef0((void*)(v68), v67);
  memset_plt((__int64)v66, 0, 0xB64u);
  memcpy_plt((__int64)&v65, (__int64)v69, 0xB64u);
  result = X8CALL_X0(void*, SdkRoutine_879ef0((void*)(v66), &v65));
  v35 = 0;
  do {
    v36 = (float*)((char*)v68 + v35);
    v37 = (float*)((char*)v66 + v35);
    v35 += 108;
    v38 = vabds_f32(*v36, *v37) * 0x1.0000000000000p+23f;
    v39 = vabds_f32(v36[1], v37[1]) * 0x1.0000000000000p+23f;
    if (v19 >= v38) {
      v38 = v19;
    }
    if (v38 < v39) {
      v38 = v39;
    }
    v40 = vabds_f32(v36[2], v37[2]) * 0x1.0000000000000p+23f;
    if (v38 < v40) {
      v38 = v40;
    }
    v41 = vabds_f32(v36[3], v37[3]) * 0x1.0000000000000p+23f;
    if (v38 < v41) {
      v38 = v41;
    }
    v42 = vabds_f32(v36[4], v37[4]) * 0x1.0000000000000p+23f;
    if (v38 < v42) {
      v38 = v42;
    }
    v43 = vabds_f32(v36[5], v37[5]) * 0x1.0000000000000p+23f;
    if (v38 < v43) {
      v38 = v43;
    }
    v44 = vabds_f32(v36[6], v37[6]) * 0x1.0000000000000p+23f;
    if (v38 < v44) {
      v38 = v44;
    }
    v45 = vabds_f32(v36[7], v37[7]) * 0x1.0000000000000p+23f;
    if (v38 < v45) {
      v38 = v45;
    }
    v46 = vabds_f32(v36[8], v37[8]) * 0x1.0000000000000p+23f;
    if (v38 < v46) {
      v38 = v46;
    }
    v47 = vabds_f32(v36[9], v37[9]) * 0x1.0000000000000p+23f;
    if (v38 < v47) {
      v38 = v47;
    }
    v48 = vabds_f32(v36[10], v37[10]) * 0x1.0000000000000p+23f;
    if (v38 < v48) {
      v38 = v48;
    }
    v49 = vabds_f32(v36[11], v37[11]) * 0x1.0000000000000p+23f;
    if (v38 < v49) {
      v38 = v49;
    }
    v50 = vabds_f32(v36[12], v37[12]) * 0x1.0000000000000p+23f;
    if (v38 < v50) {
      v38 = v50;
    }
    v51 = vabds_f32(v36[13], v37[13]) * 0x1.0000000000000p+23f;
    if (v38 < v51) {
      v38 = v51;
    }
    v52 = vabds_f32(v36[14], v37[14]) * 0x1.0000000000000p+23f;
    if (v38 < v52) {
      v38 = v52;
    }
    v53 = vabds_f32(v36[15], v37[15]) * 0x1.0000000000000p+23f;
    if (v38 < v53) {
      v38 = v53;
    }
    v54 = vabds_f32(v36[16], v37[16]) * 0x1.0000000000000p+23f;
    if (v38 < v54) {
      v38 = v54;
    }
    v55 = vabds_f32(v36[17], v37[17]) * 0x1.0000000000000p+23f;
    if (v38 < v55) {
      v38 = v55;
    }
    v56 = vabds_f32(v36[18], v37[18]) * 0x1.0000000000000p+23f;
    if (v38 < v56) {
      v38 = v56;
    }
    v57 = vabds_f32(v36[19], v37[19]) * 0x1.0000000000000p+23f;
    if (v38 < v57) {
      v38 = v57;
    }
    v58 = vabds_f32(v36[20], v37[20]) * 0x1.0000000000000p+23f;
    if (v38 < v58) {
      v38 = v58;
    }
    v59 = vabds_f32(v36[21], v37[21]) * 0x1.0000000000000p+23f;
    if (v38 < v59) {
      v38 = v59;
    }
    v60 = vabds_f32(v36[22], v37[22]) * 0x1.0000000000000p+23f;
    if (v38 < v60) {
      v38 = v60;
    }
    v61 = vabds_f32(v36[23], v37[23]) * 0x1.0000000000000p+23f;
    if (v38 < v61) {
      v38 = v61;
    }
    v62 = vabds_f32(v36[24], v37[24]) * 0x1.0000000000000p+23f;
    if (v38 < v62) {
      v38 = v62;
    }
    v63 = vabds_f32(v36[25], v37[25]) * 0x1.0000000000000p+23f;
    if (v38 < v63) {
      v38 = v63;
    }
    v64 = vabds_f32(v36[26], v37[26]) * 0x1.0000000000000p+23f;
    if (v38 >= v64) {
      v19 = v38;
    }
    else {
      v19 = v64;
    }
  } while (v35 != 2916);
  return result;
}

float math_728a60(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  _BYTE* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  void(__attribute__((noreturn)) * v8)();
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
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
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  void(__attribute__((noreturn)) * v43)();
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
  int v62;
  int v63;
  struct {
    char gap8_[4];
    int v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    int v70;
    int v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    int v76;
    int v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    int v82;
    int v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    int v88;
    int v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    int v94;
    int v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    int v100;
    int v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    int v106;
    int v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    int v112;
    int v113;
  } v65_;

  v4 = (_BYTE*)(a1 + 0x2000);
  memset_plt(a1, 0, 0x1114u);
  v5 = 4384;
  v6 = 0;
  *(_QWORD*)(a1 + 4376) = 0;
  *(_QWORD*)(a1 + 7488) = 0;
  *(_QWORD*)(a1 + 7480) = 128;
  do {
    *(_QWORD*)(a1 + v5) = 0;
    ++v6;
    v5 += 24;
    {
      v7 = *(_QWORD*)(a1 + 7480);
      __asm__ volatile("" ::"r"(v7));
    }
  } while (v6 < v7);
  v4[192] = 0;
  v8 = SdkData_e89198[0];
  v4[240] = 0;
  *(_QWORD*)(a1 + 7760) = 0;
  *(_QWORD*)(a1 + 8000) = 0;
  *(_QWORD*)(a1 + 8040) = 0;
  *(_QWORD*)(a1 + 8048) = 0;
  *(_QWORD*)(a1 + 8144) = 0;
  *(_QWORD*)(a1 + 8240) = 0;
  *(_QWORD*)(a1 + 7784) = 0x43FA000043FA0000LL;
  *(_QWORD*)(a1 + 7800) = 0x42700000C2700000LL;
  *(_QWORD*)(a1 + 7776) = 0x43FA0000C3FA0000LL;
  *(_QWORD*)(a1 + 7808) = 0x4270000042700000LL;
  *(_QWORD*)(a1 + 8232) = 0;
  *(_QWORD*)(a1 + 7832) = 0xBCF5C28F3F733333LL;
  *(_QWORD*)(a1 + 7928) = 0xBCF5C28F3F733333LL;
  *(_QWORD*)(a1 + 7848) = 0x3F8666663F733333LL;
  *(_QWORD*)(a1 + 7880) = 0x3F8666663CF5C28FLL;
  *(_QWORD*)(a1 + 7904) = 0x3E3333333E333333LL;
  *(_QWORD*)(a1 + 7944) = 0x3F8666663F733333LL;
  {
    v9 = *(__int64*)((char*)(*(void*(*)[5])0x18LL) + (_QWORD)v8 + 4);
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v10 = *(__int64*)((char*)((__int64*)0x48LL) + (_QWORD)v8 + 4);
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v12 = *(__int64*)((char*)((__int64*)0x28LL) + (_QWORD)v8);
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = *(__int64*)((char*)((__int64*)0x28LL) + (_QWORD)v8 + 8);
    __asm__ volatile("" ::"r"(v11));
  }
  *(_QWORD*)(a1 + 7856) = 0x3CF5C28F3CF5C28FLL;
  *(_QWORD*)(a1 + 7872) = 0x3CF5C28F3CF5C28FLL;
  *(_QWORD*)(a1 + 7952) = 0x3CF5C28F3CF5C28FLL;
  *(_QWORD*)(a1 + 7968) = 0x3CF5C28F3CF5C28FLL;
  {
    v13 = *(_QWORD*)((char*)((int*)0x14LL) + (_QWORD)v8);
    __asm__ volatile("" ::"r"(v13));
  }
  *(_QWORD*)(a1 + 7896) = 0x3E333333BE333333LL;
  *(_QWORD*)(a1 + 7824) = 0xBCF5C28FBCF5C28FLL;
  *(_QWORD*)(a1 + 7920) = 0xBCF5C28FBCF5C28FLL;
  *(_QWORD*)(a1 + 7976) = 0x3F8666663CF5C28FLL;
  *(_QWORD*)(a1 + 4384 + 24 * v7) = -1;
  {
    v14 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v8 + 4);
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v8);
    __asm__ volatile("" ::"r"(v15));
  }
  *(_QWORD*)(a1 + 7840) = 0xBCF5C28FBCF5C28FLL;
  *(_QWORD*)(a1 + 7936) = 0xBCF5C28FBCF5C28FLL;
  {
    v16 = *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v8);
    __asm__ volatile("" ::"r"(v16));
  }
  *(_QWORD*)(a1 + 12168) = 0;
  *(_QWORD*)(a1 + 7816) = 0xBCF5C28F3F733333LL;
  *(_QWORD*)(a1 + 7864) = 0x3F8666663CF5C28FLL;
  *(_QWORD*)(a1 + 7912) = 0xBCF5C28F3F733333LL;
  {
    v17 = *(_DWORD*)((char*)((__int64*)0x48LL) + (_QWORD)v8);
    __asm__ volatile("" ::"r"(v17));
  }
  *(_QWORD*)(a1 + 7960) = 0x3F8666663CF5C28FLL;
  {
    v19 = *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v8);
    __asm__ volatile("" ::"r"(v19));
  }
  {
    v18 = *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v8 + 8);
    __asm__ volatile("" ::"r"(v18));
  }
  *(_QWORD*)(a1 + 8064) = v9;
  v4[200] = 0;
  *(_QWORD*)(a1 + 7768) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(a1 + 8032) = v13;
  *(_QWORD*)(a1 + 8008) = 0;
  *(_QWORD*)(a1 + 8016) = 0;
  *(_QWORD*)(a1 + 8056) = 0;
  *(_QWORD*)(a1 + 8096) = 0;
  *(_QWORD*)(a1 + 8088) = 0;
  *(_QWORD*)(a1 + 8080) = 0;
  *(_QWORD*)(a1 + 8152) = 0;
  *(_QWORD*)(a1 + 8160) = 0;
  *(_QWORD*)(a1 + 8168) = 0;
  *(_QWORD*)(a1 + 8176) = 0;
  *(_QWORD*)(a1 + 8184) = 0;
  *(_QWORD*)(a1 + 0x2000) = 0;
  *(_QWORD*)(a1 + 8200) = 0;
  *(_QWORD*)(a1 + 8208) = 0;
  *(_QWORD*)(a1 + 8248) = 0;
  *(_QWORD*)(a1 + 12176) = 0;
  *(_QWORD*)(a1 + 12160) = 0;
  *(_BYTE*)(a1 + 8344) = 0;
  *(_QWORD*)(a1 + 8336) = 0;
  *(_QWORD*)(a1 + 8328) = 0;
  *(_QWORD*)(a1 + 8320) = 0;
  *(_QWORD*)(a1 + 8312) = 0;
  *(_QWORD*)(a1 + 8304) = 0;
  *(_QWORD*)(a1 + 8296) = 0;
  *(_QWORD*)(a1 + 8104) = v12;
  *(_QWORD*)(a1 + 8112) = v11;
  *(_QWORD*)(a1 + 8216) = v10;
  *(_QWORD*)(a1 + 7792) = 0xC2700000C2700000LL;
  *(_DWORD*)(a1 + 7992) = v14;
  *(_QWORD*)(a1 + 8024) = v16;
  {
    v20 = *(__int64*)((char*)((__int64*)0x58LL) + (_QWORD)v8);
    __asm__ volatile("" ::"r"(v20));
  }
  {
    v21 = *(__int64*)((char*)((__int64*)0x58LL) + (_QWORD)v8 + 8);
    __asm__ volatile("" ::"r"(v21));
  }
  *(_DWORD*)(a1 + 8072) = v15;
  {
    v22 = *(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + (_QWORD)v8);
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v23 = *(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + (_QWORD)v8 + 8);
    __asm__ volatile("" ::"r"(v23));
  }
  *(_DWORD*)(a1 + 8136) = v17;
  *(_QWORD*)(a1 + 8128) = v18;
  *(_QWORD*)(a1 + 8120) = v19;
  *(_QWORD*)(a1 + 7888) = 0xBE333333BE333333LL;
  *(_QWORD*)(a1 + 12168) = 2;
  {
    v24 = *(_QWORD*)v8;
    __asm__ volatile("" ::"r"(v24));
  }
  *(_QWORD*)(a1 + 8256) = v20;
  *(_QWORD*)(a1 + 8280) = v23;
  *(_QWORD*)(a1 + 8272) = v22;
  *(_QWORD*)(a1 + 8264) = v21;
  *(_QWORD*)(a1 + 7984) = v24;
  LODWORD(v24) = *(_DWORD*)((char*)((__int64*)0x50LL) + (_QWORD)v8 + 4);
  LODWORD(v8) = *(_DWORD*)((char*)((_UNKNOWN*)0x78LL) + (_QWORD)v8);
  *(_DWORD*)(a1 + 8224) = v24;
  *(_DWORD*)(a1 + 8288) = (_DWORD)v8;
  {
    v25 = a2[12];
    __asm__ volatile("" ::"r"(v25));
  }
  *(_DWORD*)(a1 + 7800) = *((_DWORD*)a2 + 26);
  *(_QWORD*)(a1 + 7792) = v25;
  LODWORD(v25) = *((_DWORD*)a2 + 29);
  *(_QWORD*)(a1 + 7804) = *(__int64*)((char*)a2 + 108);
  *(_DWORD*)(a1 + 7812) = v25;
  {
    v26 = a2[15];
    __asm__ volatile("" ::"r"(v26));
  }
  {
    v27 = a2[16];
    __asm__ volatile("" ::"r"(v27));
  }
  {
    v28 = a2[17];
    __asm__ volatile("" ::"r"(v28));
  }
  {
    v29 = a2[18];
    __asm__ volatile("" ::"r"(v29));
  }
  *(_DWORD*)(a1 + 7848) = *((_DWORD*)a2 + 38);
  *(_QWORD*)(a1 + 7840) = v29;
  *(_QWORD*)(a1 + 7832) = v28;
  *(_QWORD*)(a1 + 7824) = v27;
  *(_QWORD*)(a1 + 7816) = v26;
  {
    v30 = *(__int64*)((char*)a2 + 156);
    __asm__ volatile("" ::"r"(v30));
  }
  {
    v31 = *(__int64*)((char*)a2 + 164);
    __asm__ volatile("" ::"r"(v31));
  }
  {
    v32 = *(__int64*)((char*)a2 + 172);
    __asm__ volatile("" ::"r"(v32));
  }
  {
    v33 = *(__int64*)((char*)a2 + 180);
    __asm__ volatile("" ::"r"(v33));
  }
  *(_DWORD*)(a1 + 7884) = *((_DWORD*)a2 + 47);
  *(_QWORD*)(a1 + 7868) = v32;
  *(_QWORD*)(a1 + 7876) = v33;
  *(_QWORD*)(a1 + 7852) = v30;
  *(_QWORD*)(a1 + 7860) = v31;
  {
    v34 = *a2;
    __asm__ volatile("" ::"r"(v34));
  }
  *(_DWORD*)(a1 + 7896) = *((_DWORD*)a2 + 2);
  *(_QWORD*)(a1 + 7888) = v34;
  LODWORD(v34) = *((_DWORD*)a2 + 5);
  *(_QWORD*)(a1 + 7900) = *(__int64*)((char*)a2 + 12);
  *(_DWORD*)(a1 + 7908) = v34;
  {
    v35 = a2[3];
    __asm__ volatile("" ::"r"(v35));
  }
  {
    v36 = a2[4];
    __asm__ volatile("" ::"r"(v36));
  }
  {
    v37 = a2[5];
    __asm__ volatile("" ::"r"(v37));
  }
  {
    v38 = a2[6];
    __asm__ volatile("" ::"r"(v38));
  }
  *(_DWORD*)(a1 + 7944) = *((_DWORD*)a2 + 14);
  *(_QWORD*)(a1 + 7936) = v38;
  *(_QWORD*)(a1 + 7928) = v37;
  *(_QWORD*)(a1 + 7920) = v36;
  *(_QWORD*)(a1 + 7912) = v35;
  {
    v39 = *(__int64*)((char*)a2 + 60);
    __asm__ volatile("" ::"r"(v39));
  }
  {
    v40 = *(__int64*)((char*)a2 + 68);
    __asm__ volatile("" ::"r"(v40));
  }
  {
    v41 = *(__int64*)((char*)a2 + 76);
    __asm__ volatile("" ::"r"(v41));
  }
  {
    v42 = *(__int64*)((char*)a2 + 84);
    __asm__ volatile("" ::"r"(v42));
  }
  *(_DWORD*)(a1 + 7980) = *((_DWORD*)a2 + 23);
  *(_QWORD*)(a1 + 7964) = v41;
  *(_QWORD*)(a1 + 7972) = v42;
  *(_QWORD*)(a1 + 7948) = v39;
  *(_QWORD*)(a1 + 7956) = v40;
  v43 = SdkData_e891a8[0];
  v65_.v66 = 0;
  LODWORD(v65_.v67) = 0;
  v65_.v68 = 0;
  LODWORD(v65_.v69) = 0;
  {
    v44 = *((_DWORD*)SdkData_e891a8[0] + 1);
    __asm__ volatile("" ::"r"(v44));
  }
  {
    v45 = *(_DWORD*)((char*)SdkData_e891a8[0] +
                     (unsigned __int64)((__int64*)0x4LL) + 4);
    __asm__ volatile("" ::"r"(v45));
  }
  v65_.v65 = *(_DWORD*)SdkData_e891a8[0];
  HIDWORD(v65_.v67) = v44;
  HIDWORD(v65_.v69) = v45;
  gyro_pointing_kalman_filter_728fe0((unsigned __int64*)a1,
                                     (unsigned __int64*)(a1 + 8000),
                                     (__int64)&v65_.v65);
  {
    v46 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v43);
    __asm__ volatile("" ::"r"(v46));
  }
  {
    v47 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v43 + 4);
    __asm__ volatile("" ::"r"(v47));
  }
  v65_.v66 = 0;
  LODWORD(v65_.v67) = 0;
  v65_.v68 = 0;
  LODWORD(v65_.v69) = 0;
  v65_.v65 = v46;
  {
    v48 = *(int*)((char*)((int*)0x14LL) + (_QWORD)v43);
    __asm__ volatile("" ::"r"(v48));
  }
  HIDWORD(v65_.v67) = v47;
  HIDWORD(v65_.v69) = v48;
  gyro_pointing_kalman_filter_728fe0((unsigned __int64*)a1,
                                     (unsigned __int64*)(a1 + 8040),
                                     (__int64)&v65_.v65);
  {
    v49 = *(_DWORD*)((char*)(*(void*(*)[5])0x18LL) + (_QWORD)v43);
    __asm__ volatile("" ::"r"(v49));
  }
  {
    v50 = *(_DWORD*)((char*)(*(void*(*)[5])0x18LL) + (_QWORD)v43 + 4);
    __asm__ volatile("" ::"r"(v50));
  }
  v65_.v66 = 0;
  LODWORD(v65_.v67) = 0;
  v65_.v68 = 0;
  LODWORD(v65_.v69) = 0;
  v65_.v65 = v49;
  v51 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v43];
  HIDWORD(v65_.v67) = v50;
  HIDWORD(v65_.v69) = v51;
  gyro_pointing_kalman_filter_728fe0((unsigned __int64*)a1,
                                     (unsigned __int64*)(a1 + 8080),
                                     (__int64)&v65_.v65);
  {
    v52 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v43);
    __asm__ volatile("" ::"r"(v52));
  }
  {
    v53 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v43 + 4);
    __asm__ volatile("" ::"r"(v53));
  }
  {
    v54 = *(_DWORD*)((char*)((__int64*)0x28LL) + (_QWORD)v43 + 4);
    __asm__ volatile("" ::"r"(v54));
  }
  {
    v55 = *(_DWORD*)((char*)((__int64*)0x28LL) + (_QWORD)v43 + 8);
    __asm__ volatile("" ::"r"(v55));
  }
  {
    v56 = *(int*)((char*)((int*)0x44LL) + (_QWORD)v43);
    __asm__ volatile("" ::"r"(v56));
  }
  v65_.v66 = 0;
  v65_.v67 = 0;
  v65_.v68 = 0;
  v65_.v69 = 0;
  v65_.v70 = 0;
  v65_.v104 = 0;
  v65_.v105 = 0;
  v65_.v72 = 0;
  v65_.v73 = 0;
  v65_.v74 = 0;
  v65_.v75 = 0;
  v65_.v76 = 0;
  v65_.v82 = 0;
  v65_.v80 = 0;
  v65_.v81 = 0;
  v65_.v78 = 0;
  v65_.v79 = 0;
  v65_.v88 = 0;
  v65_.v87 = 0;
  v65_.v86 = 0;
  v65_.v85 = 0;
  v65_.v84 = 0;
  v65_.v94 = 0;
  v65_.v93 = 0;
  v65_.v92 = 0;
  v65_.v91 = 0;
  v65_.v90 = 0;
  v65_.v96 = 0;
  v65_.v97 = 0;
  v65_.v98 = 0;
  v65_.v99 = 0;
  v65_.v100 = 0;
  v65_.v102 = 0;
  v65_.v103 = 0;
  v65_.v106 = 0;
  v65_.v108 = 0;
  v65_.v109 = 0;
  v65_.v110 = 0;
  v65_.v111 = 0;
  v65_.v112 = 0;
  v65_.v65 = v52;
  {
    v57 = *(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)v43 + 4);
    __asm__ volatile("" ::"r"(v57));
  }
  {
    v58 = *(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)v43 + 8);
    __asm__ volatile("" ::"r"(v58));
  }
  v65_.v71 = v53;
  v65_.v77 = v54;
  {
    v59 = *(_DWORD*)((char*)((__int64*)0x38LL) + (_QWORD)v43 + 4);
    __asm__ volatile("" ::"r"(v59));
  }
  {
    v60 = *(_DWORD*)((char*)((__int64*)0x38LL) + (_QWORD)v43 + 8);
    __asm__ volatile("" ::"r"(v60));
  }
  v65_.v83 = v55;
  v65_.v113 = v56;
  v65_.v89 = v57;
  v65_.v95 = v58;
  v65_.v101 = v59;
  v65_.v107 = v60;
  gyro_pointing_kalman_filter_729580((unsigned __int64*)a1,
                                     (__int64*)(a1 + 8144), (__int64)&v65_.v65);
  {
    v61 = *(_DWORD*)((char*)((__int64*)0x48LL) + (_QWORD)v43);
    __asm__ volatile("" ::"r"(v61));
  }
  {
    v62 = *(_DWORD*)((char*)((__int64*)0x48LL) + (_QWORD)v43 + 4);
    __asm__ volatile("" ::"r"(v62));
  }
  v65_.v66 = 0;
  LODWORD(v65_.v67) = 0;
  v65_.v68 = 0;
  LODWORD(v65_.v69) = 0;
  v65_.v65 = v61;
  {
    v63 = *(_DWORD*)((char*)((__int64*)0x50LL) + (_QWORD)v43);
    __asm__ volatile("" ::"r"(v63));
  }
  HIDWORD(v65_.v67) = v62;
  HIDWORD(v65_.v69) = v63;
  gyro_pointing_kalman_filter_728fe0((unsigned __int64*)a1,
                                     (unsigned __int64*)(a1 + 8232),
                                     (__int64)&v65_.v65);
  return gyro_pointing_kalman_filter_729c20(
      (unsigned __int64*)a1, (unsigned __int64*)(a1 + 8296), (__int64)v43 + 84);
}

void math_734e60(void* this_)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  char* v3;
  float v4;
  float v5;
  float v7;
  float v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  void* v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  float* v18;
  float v19;
  float v20;
  float v21;
  unsigned __int64 v22;
  float* v23;
  float v24;
  float v25;
  float v26;
  float v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  float* v31;
  unsigned __int64 v32;
  float* v33;
  unsigned __int64 v34;
  char* v35;
  bool v36;
  unsigned __int64 v37;
  float* v38;
  char v39;
  float v40;
  char* v41;
  float v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  char* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  float v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;
  float v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  float v64;
  unsigned __int64 v65;
  bool v66;
  float v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  char* v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  float v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  char* v84;
  float v85;
  unsigned __int64 v86;
  char* v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  float v90;
  unsigned __int64 v91;
  float v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  char* v100;
  char* v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  float v105;
  unsigned __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  char* v109;
  float v110;
  unsigned __int64 v111;
  char* v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  float v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  float v118;
  unsigned int v119;
  float v120;
  float v121;
  bool v122;
  bool v123;
  float v124;
  unsigned __int64 v125;
  float v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  float* v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  float v144;
  float v145;
  __int64 v146;
  float v147;
  void* v148;
  __int64 v149;
  unsigned __int64 v150;
  char* v151;
  unsigned __int64 v152;
  float* v153;
  float v154;
  float v155;
  float v156;
  unsigned __int64 v157;
  float* v158;
  float v159;
  float v160;
  float v161;
  float v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  float* v166;
  unsigned __int64 v167;
  float* v168;
  unsigned __int64 v169;
  char* v170;
  unsigned __int64 v171;
  float* v172;
  float v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  unsigned __int64 v177;
  unsigned __int64 v178;
  double* v179;
  char* v180;
  char* v181;
  unsigned __int64 v182;
  unsigned __int64 v183;
  float v184;
  unsigned __int64 v185;
  float v186;
  unsigned __int64 v187;
  unsigned __int64 v188;
  float v189;
  unsigned __int64 v190;
  double v191;
  unsigned __int64 v192;
  char* v193;
  float v194;
  double* v195;
  unsigned __int64 v196;
  char* v197;
  unsigned __int64 v198;
  float v199;
  __int64 v200;
  float v201;
  unsigned __int64 v202;
  unsigned __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  double* v207;
  char* v208;
  char* v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  float v212;
  unsigned __int64 v213;
  float v214;
  unsigned __int64 v215;
  unsigned __int64 v216;
  float v217;
  unsigned __int64 v218;
  double v219;
  unsigned __int64 v220;
  char* v221;
  float v222;
  __int64 v223;
  unsigned __int64 v224;
  double* v225;
  char* v226;
  unsigned __int64 v227;
  float v228;
  __int64 v229;
  float v230;
  unsigned __int64 v231;
  unsigned __int64 v232;
  __int64 v233;
  unsigned __int64 v234;
  unsigned __int64 v235;
  double* v236;
  char* v237;
  char* v238;
  unsigned __int64 v239;
  unsigned __int64 v240;
  float v241;
  unsigned __int64 v242;
  float v243;
  unsigned __int64 v244;
  unsigned __int64 v245;
  float v246;
  unsigned __int64 v247;
  double v248;
  unsigned __int64 v249;
  char* v250;
  float v251;
  double* v252;
  unsigned __int64 v253;
  char* v254;
  unsigned __int64 v255;
  float v256;
  double v257;
  _BYTE* v258;
  __int64 i;
  double v260;
  double v261;
  double v262;
  _BYTE v263[16];
  __int64 v264;
  struct {
    __int64 v265;
    char gap520_[1016];
    __int64 v266;
  } v265_;
  _BYTE v267[512];
  struct {
    double v268;
    double v269;
  } v268_;

  {
    v1 = *((_QWORD*)this_ + 551);
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v2 = *((_QWORD*)this_ + 552);
    __asm__ volatile("" ::"r"(v2));
  }
  v3 = (char*)this_ + 4096;
  if (v1 < v2) {
    *((_WORD*)this_ + 2248) = 257;
    return;
  }
  v4 = 0x0.0p+0f;
  v5 = 0x0.0p+0f;
  v7 = 0x0.0p+0f;
  v8 = 0x0.0p+0f;
  if (v1 != 0) {
    {
      v9 = *((_QWORD*)this_ + 553);
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v10 = *((_QWORD*)this_ + 551) & 3LL;
      __asm__ volatile("" ::"r"(v10));
    }
    {
      v11 = v9 >= v1 ? 0LL : *((_QWORD*)this_ + 552);
      __asm__ volatile("" ::"r"(v11));
    }
    if (v1 - 1 >= 3) {
      v12 = 0;
      v13 = this_;
      v14 = 12 * v9 + 12 * v11 - 12 * v1;
      do {
        v15 = v9 - v1 + v11 + v12;
        v16 = (char*)v13 + v14;
        v12 += 4;
        if (v15 >= v2) {
          v17 = v2;
        }
        else {
          v17 = 0;
        }
        v18 = (float*)((char*)v13 + v14 - 12 * v17);
        v13 = (void*)((char*)v13 + 48);
        {
          v19 = v8 + v18[910];
          __asm__ volatile("" ::"w"(v19));
        }
        {
          v20 = v7 + v18[911];
          __asm__ volatile("" ::"w"(v20));
        }
        {
          v21 = v18[912];
          __asm__ volatile("" ::"w"(v21));
        }
        if (v15 + 1 >= v2) {
          v22 = v2;
        }
        else {
          v22 = 0;
        }
        {
          v23 = (float*)&v16[-12 * v22];
          __asm__ volatile("" ::"r"(v23));
        }
        v24 = v5 + v21;
        {
          v25 = v19 + v23[913];
          __asm__ volatile("" ::"w"(v25));
        }
        {
          v26 = v20 + v23[914];
          __asm__ volatile("" ::"w"(v26));
        }
        {
          v27 = v23[915];
          __asm__ volatile("" ::"w"(v27));
        }
        v28 = v15 + 2;
        v29 = v15 + 3;
        if (v28 >= v2) {
          v30 = v2;
        }
        else {
          v30 = 0;
        }
        {
          v31 = (float*)&v16[-12 * v30];
          __asm__ volatile("" ::"r"(v31));
        }
        if (v29 >= v2) {
          v32 = v2;
        }
        else {
          v32 = 0;
        }
        {
          v33 = (float*)&v16[-12 * v32];
          __asm__ volatile("" ::"r"(v33));
        }
        {
          v8 = (float)(v25 + v31[916]) + v33[919];
          __asm__ volatile("" ::"w"(v8));
        }
        {
          v7 = (float)(v26 + v31[917]) + v33[920];
          __asm__ volatile("" ::"w"(v7));
        }
        {
          v5 = (float)((float)(v24 + v27) + v31[918]) + v33[921];
          __asm__ volatile("" ::"w"(v5));
        }
      } while ((v1 & 0xFFFFFFFFFFFFFFFCLL) != v12);
    }
    else {
      v12 = 0;
    }
    if ((v1 & 3) != 0) {
      v34 = v11 + v12 + v9 - v1;
      v35 = (char*)this_ + 12 * v34 + 3648;
      do {
        v36 = v34++ >= v2;
        if (v36) {
          v37 = v2;
        }
        else {
          v37 = 0;
        }
        --v10;
        {
          v38 = (float*)&v35[-12 * v37];
          __asm__ volatile("" ::"r"(v38));
        }
        v35 += 12;
        {
          v8 = v8 + *(v38 - 2);
          __asm__ volatile("" ::"w"(v8));
        }
        {
          v7 = v7 + *(v38 - 1);
          __asm__ volatile("" ::"w"(v7));
        }
        v5 = v5 + *v38;
      } while (v10 != 0);
    }
  }
  {
    v39 = v3[496];
    __asm__ volatile("" ::"r"(v39));
  }
  v40 = (float)v1;
  v41 = (char*)this_ + 3640;
  if ((v39 & 1) != 0 && v1 >= 2) {
    v42 = v8 / v40;
    {
      v43 = *((_QWORD*)this_ + 553);
      __asm__ volatile("" ::"r"(v43));
    }
    v44 = v1 - 1;
    v45 = v43 - v1;
    if (v43 >= v1) {
      v46 = 0;
    }
    else {
      v46 = v2;
    }
    v47 = v43 + ~v1 + v46;
    if (v1 == 2) {
      v4 = 0x0.0p+0f;
      v48 = 1;
      if ((v44 & 1) == 0) {
        goto LABEL_56;
      }
      goto LABEL_49;
    }
    v4 = 0x0.0p+0f;
    v49 = 0;
    v50 = (char*)this_ + 12 * v47 + 3652;
    v51 = (char*)this_ + 12 * (v46 + v43) - 12 * v1 + 3652;
    do {
      v52 = v47 + 1 + v49;
      v49 += 2;
      if (v52 + 1 >= v2) {
        v53 = v2;
      }
      else {
        v53 = 0;
      }
      v36 = v52 >= v2;
      v54 = v52 + 2;
      {
        v55 = *(float*)&v51[-12 * v53];
        __asm__ volatile("" ::"w"(v55));
      }
      if (v36) {
        v56 = v2;
      }
      else {
        v56 = 0;
      }
      v57 = -12LL * v56;
      if (v54 >= v2) {
        v58 = v2;
      }
      else {
        v58 = 0;
      }
      {
        v59 = &v51[-12 * v58];
        __asm__ volatile("" ::"r"(v59));
      }
      v51 += 24;
      {
        v60 = *(float*)&v50[v57];
        __asm__ volatile("" ::"w"(v60));
      }
      v50 += 24;
      v4 = (float)(v4 + (float)(PSEUDO_UNFUSED((float)(v55 - v42) *
                                               (float)(v60 - v42)))) +
           (float)(PSEUDO_UNFUSED((float)(*((float*)v59 + 3) - v42) *
                                  (float)(v55 - v42)));
    } while ((v44 & 0xFFFFFFFFFFFFFFFELL) != v49);
    v48 = v49 + 1;
    if ((v44 & 1) != 0) {
    LABEL_49:
      v61 = v48 + v47;
      v62 = v48 + v45 + v46;
      if (v62 >= v2) {
        v63 = v2;
      }
      else {
        v63 = 0;
      }
      {
        v64 = *(float*)&v41[12 * (v62 - v63)];
        __asm__ volatile("" ::"w"(v64));
      }
      if (v61 >= v2) {
        v65 = v2;
      }
      else {
        v65 = 0;
      }
      v4 = v4 + (float)(PSEUDO_UNFUSED(
                    (float)(v64 - v42) *
                    (float)(*(float*)&v41[12 * (v61 - v65)] - v42)));
    }
  }
LABEL_56:
  if ((v3[496] & 2) != 0) {
    if (v1 < 2) {
      v66 = (v39 & 4) == 0;
      goto LABEL_114;
    }
    v67 = v7 / v40;
    {
      v68 = *((_QWORD*)this_ + 553);
      __asm__ volatile("" ::"r"(v68));
    }
    v69 = v1 - 1;
    v70 = v68 - v1;
    if (v68 >= v1) {
      v71 = 0;
    }
    else {
      v71 = v2;
    }
    v72 = v68 + ~v1 + v71;
    if (v1 == 2) {
      v73 = 1;
      if ((v69 & 1) == 0) {
        goto LABEL_87;
      }
    }
    else {
      v74 = 0;
      v75 = (char*)this_ + 12 * v72 + 3656;
      v76 = (char*)this_ + 12 * (v71 + v68) - 12 * v1 + 3656;
      do {
        v77 = v72 + 1 + v74;
        v74 += 2;
        if (v77 + 1 >= v2) {
          v78 = v2;
        }
        else {
          v78 = 0;
        }
        v36 = v77 >= v2;
        v79 = v77 + 2;
        {
          v80 = *(float*)&v76[-12 * v78];
          __asm__ volatile("" ::"w"(v80));
        }
        if (v36) {
          v81 = v2;
        }
        else {
          v81 = 0;
        }
        v82 = -12LL * v81;
        if (v79 >= v2) {
          v83 = v2;
        }
        else {
          v83 = 0;
        }
        {
          v84 = &v76[-12 * v83];
          __asm__ volatile("" ::"r"(v84));
        }
        v76 += 24;
        {
          v85 = *(float*)&v75[v82];
          __asm__ volatile("" ::"w"(v85));
        }
        v75 += 24;
        v4 = (float)(v4 + (float)(PSEUDO_UNFUSED((float)(v80 - v67) *
                                                 (float)(v85 - v67)))) +
             (float)(PSEUDO_UNFUSED((float)(*((float*)v84 + 3) - v67) *
                                    (float)(v80 - v67)));
      } while ((v69 & 0xFFFFFFFFFFFFFFFELL) != v74);
      v73 = v74 + 1;
      if ((v69 & 1) == 0) {
      LABEL_87:
        if ((v3[496] & 4) == 0) {
          v66 = true;
          goto LABEL_114;
        }
        goto LABEL_89;
      }
    }
    v86 = v73 + v72;
    v87 = (char*)this_ + 3644;
    v88 = v73 + v70 + v71;
    if (v88 >= v2) {
      v89 = v2;
    }
    else {
      v89 = 0;
    }
    {
      v90 = *(float*)&v87[12 * (v88 - v89)];
      __asm__ volatile("" ::"w"(v90));
    }
    if (v86 >= v2) {
      v91 = v2;
    }
    else {
      v91 = 0;
    }
    v4 =
        v4 +
        (float)(PSEUDO_UNFUSED((float)(v90 - v67) *
                               (float)(*(float*)&v87[12 * (v86 - v91)] - v67)));
    goto LABEL_87;
  }
  v66 = (v39 & 4) == 0;
  if ((v3[496] & 4) == 0 || v1 < 2) {
    goto LABEL_114;
  }
LABEL_89:
  v92 = v5 / v40;
  {
    v93 = *((_QWORD*)this_ + 553);
    __asm__ volatile("" ::"r"(v93));
  }
  v94 = v1 - 1;
  v95 = v93 - v1;
  if (v93 >= v1) {
    v96 = 0;
  }
  else {
    v96 = v2;
  }
  v97 = v93 + ~v1 + v96;
  if (v1 == 2) {
    v98 = 1;
    v66 = false;
    if ((v94 & 1) == 0) {
      goto LABEL_114;
    }
    goto LABEL_107;
  }
  v99 = 0;
  v100 = (char*)this_ + 12 * v97 + 3660;
  v101 = (char*)this_ + 12 * (v96 + v93) - 12 * v1 + 3660;
  do {
    v102 = v97 + 1 + v99;
    v99 += 2;
    if (v102 + 1 >= v2) {
      v103 = v2;
    }
    else {
      v103 = 0;
    }
    v36 = v102 >= v2;
    v104 = v102 + 2;
    {
      v105 = *(float*)&v101[-12 * v103];
      __asm__ volatile("" ::"w"(v105));
    }
    if (v36) {
      v106 = v2;
    }
    else {
      v106 = 0;
    }
    v107 = -12LL * v106;
    if (v104 >= v2) {
      v108 = v2;
    }
    else {
      v108 = 0;
    }
    {
      v109 = &v101[-12 * v108];
      __asm__ volatile("" ::"r"(v109));
    }
    v101 += 24;
    {
      v110 = *(float*)&v100[v107];
      __asm__ volatile("" ::"w"(v110));
    }
    v100 += 24;
    v4 = (float)(v4 + (float)(PSEUDO_UNFUSED((float)(v105 - v92) *
                                             (float)(v110 - v92)))) +
         (float)(PSEUDO_UNFUSED((float)(*((float*)v109 + 3) - v92) *
                                (float)(v105 - v92)));
  } while ((v94 & 0xFFFFFFFFFFFFFFFELL) != v99);
  v98 = v99 + 1;
  v66 = false;
  if ((v94 & 1) != 0) {
  LABEL_107:
    v111 = v98 + v97;
    v112 = (char*)this_ + 3648;
    v113 = v98 + v95 + v96;
    if (v113 >= v2) {
      v114 = v2;
    }
    else {
      v114 = 0;
    }
    {
      v115 = *(float*)&v112[12 * (v113 - v114)];
      __asm__ volatile("" ::"w"(v115));
    }
    if (v111 >= v2) {
      v116 = v2;
    }
    else {
      v116 = 0;
    }
    v4 = v4 + (float)(PSEUDO_UNFUSED(
                  (float)(v115 - v92) *
                  (float)(*(float*)&v112[12 * (v111 - v116)] - v92)));
  }
LABEL_114:
  v117 = v1 - 1;
  {
    v118 = *((float*)this_ + 1147);
    __asm__ volatile("" ::"w"(v118));
  }
  v119 =
      (((unsigned __int8)v3[496] - (((unsigned __int8)v3[496] >> 1) & 0x55)) &
       0x33333333) +
      ((((unsigned __int8)v3[496] -
         (((unsigned __int8)v3[496] >> 1) & 0x55u)) >>
        2) &
       0x33333333);
  v120 = v4 / (float)((v1 - 1) *
                      ((16843009 * ((v119 + (v119 >> 4)) & 0xF0F0F0F)) >> 24));
  *((double*)this_ + 563) = v120;
  v121 = v118 * v118;
  v122 = v120 > (float)(v118 * v118);
  v123 = v120 < (float)-(float)(v118 * v118);
  v124 = fabsf(v120);
  if (v123) {
    v122 = true;
  }
  v3[400] = v122;
  if (v124 < 0x1.a36e2e0000000p-12f) {
    {
      v125 = *((_QWORD*)this_ + 553);
      __asm__ volatile("" ::"r"(v125));
    }
    v126 = 0x1.0000000000000p+0f / (float)(v124 + v121);
    v36 = v125 >= v1;
    v127 = v125 - v1 + (v1 >> 1);
    v128 = v36 ? 0LL : v2;
    v129 = v127 + v128;
    v130 = v129 >= v2 ? v2 : 0LL;
    {
      v131 = (float*)&v41[12 * (v129 - v130)];
      __asm__ volatile("" ::"r"(v131));
    }
    v132 = (float)(PSEUDO_UNFUSED(v126 * *v131)) + *((float*)this_ + 1152);
    {
      v133 = v131[2];
      __asm__ volatile("" ::"w"(v133));
    }
    v134 = (float)(PSEUDO_UNFUSED(v126 * v131[1])) + *((float*)this_ + 1153);
    {
      v135 = *((float*)this_ + 1154);
      __asm__ volatile("" ::"w"(v135));
    }
    *((float*)this_ + 1152) = v132;
    *((float*)this_ + 1153) = v134;
    v136 = (float)(PSEUDO_UNFUSED(v126 * v133)) + v135;
    {
      v137 = *((float*)this_ + 1155);
      __asm__ volatile("" ::"w"(v137));
    }
    *((float*)this_ + 1154) = v136;
    v138 = v126 + v137;
    *((float*)this_ + 1155) = v138;
    v139 = 0x1.f400000000000p+9f / v121;
    if (v138 > v139) {
      v140 = v138 / v139;
      *((float*)this_ + 1152) = v132 / v140;
      *((float*)this_ + 1155) = v138 / v140;
      *((float*)this_ + 1153) = v134 / v140;
      *((float*)this_ + 1154) = v136 / v140;
    }
  }
  if (v1 != 0) {
    {
      v141 = *((_QWORD*)this_ + 553);
      __asm__ volatile("" ::"r"(v141));
    }
    v142 = v1 & 3;
    if (v141 >= v1) {
      v143 = 0;
    }
    else {
      v143 = v2;
    }
    if (v117 >= 3) {
      v144 = 0x0.0p+0f;
      v145 = 0x0.0p+0f;
      v146 = 0;
      v148 = this_;
      v147 = 0x0.0p+0f;
      v149 = 12 * v141 + 12 * v143 - 12 * v1;
      do {
        v150 = v141 - v1 + v143 + v146;
        v151 = (char*)v148 + v149;
        v146 += 4;
        if (v150 >= v2) {
          v152 = v2;
        }
        else {
          v152 = 0;
        }
        v153 = (float*)((char*)v148 + v149 - 12 * v152);
        v148 = (void*)((char*)v148 + 48);
        {
          v154 = v153[910];
          __asm__ volatile("" ::"w"(v154));
        }
        {
          v155 = v153[911];
          __asm__ volatile("" ::"w"(v155));
        }
        {
          v156 = v153[912];
          __asm__ volatile("" ::"w"(v156));
        }
        if (v150 + 1 >= v2) {
          v157 = v2;
        }
        else {
          v157 = 0;
        }
        {
          v158 = (float*)&v151[-12 * v157];
          __asm__ volatile("" ::"r"(v158));
        }
        v159 = v144 + v156;
        {
          v160 = (float)(v147 + v154) + v158[913];
          __asm__ volatile("" ::"w"(v160));
        }
        {
          v161 = (float)(v145 + v155) + v158[914];
          __asm__ volatile("" ::"w"(v161));
        }
        {
          v162 = v158[915];
          __asm__ volatile("" ::"w"(v162));
        }
        v163 = v150 + 2;
        v164 = v150 + 3;
        if (v163 >= v2) {
          v165 = v2;
        }
        else {
          v165 = 0;
        }
        {
          v166 = (float*)&v151[-12 * v165];
          __asm__ volatile("" ::"r"(v166));
        }
        if (v164 >= v2) {
          v167 = v2;
        }
        else {
          v167 = 0;
        }
        {
          v168 = (float*)&v151[-12 * v167];
          __asm__ volatile("" ::"r"(v168));
        }
        {
          v147 = (float)(v160 + v166[916]) + v168[919];
          __asm__ volatile("" ::"w"(v147));
        }
        {
          v145 = (float)(v161 + v166[917]) + v168[920];
          __asm__ volatile("" ::"w"(v145));
        }
        {
          v144 = (float)((float)(v159 + v162) + v166[918]) + v168[921];
          __asm__ volatile("" ::"w"(v144));
        }
      } while ((v1 & 0xFFFFFFFFFFFFFFFCLL) != v146);
    }
    else {
      v144 = 0x0.0p+0f;
      v145 = 0x0.0p+0f;
      v146 = 0;
      v147 = 0x0.0p+0f;
    }
    if ((v1 & 3) != 0) {
      v169 = v143 + v146 + v141 - v1;
      v170 = (char*)this_ + 12 * v169 + 3648;
      do {
        v36 = v169++ >= v2;
        if (v36) {
          v171 = v2;
        }
        else {
          v171 = 0;
        }
        --v142;
        {
          v172 = (float*)&v170[-12 * v171];
          __asm__ volatile("" ::"r"(v172));
        }
        v170 += 12;
        {
          v147 = v147 + *(v172 - 2);
          __asm__ volatile("" ::"w"(v147));
        }
        {
          v145 = v145 + *(v172 - 1);
          __asm__ volatile("" ::"w"(v145));
        }
        v144 = v144 + *v172;
      } while (v142 != 0);
    }
  }
  else {
    v147 = 0x0.0p+0f;
    v145 = 0x0.0p+0f;
    v144 = 0x0.0p+0f;
    v40 = 0x0.0p+0f;
  }
  memset_plt((__int64)v263, 0, 0x608u);
  if ((v39 & 1) == 0) {
    if ((v39 & 2) == 0) {
      v200 = 0;
      if (!v66) {
        goto LABEL_214;
      }
      goto LABEL_240;
    }
    memset_plt((__int64)v263, 0, 0x200u);
    v200 = ++v265_.v266;
    if (v1 != 0) {
    LABEL_185:
      v201 = v145 / v40;
      {
        v202 = *((_QWORD*)this_ + 553);
        __asm__ volatile("" ::"r"(v202));
      }
      v203 = v1 & 3;
      v204 = 0;
      if (v202 >= v1) {
        v205 = 0;
      }
      else {
        v205 = v2;
      }
      if (v117 >= 3) {
        v206 = v202 - v1 + v205;
        v204 = 0;
        {
          v207 = (double*)&v263[512 * v200 - 512];
          __asm__ volatile("" ::"r"(v207));
        }
        v208 = (char*)this_ + 12 * v206 + 3644;
        v209 = (char*)this_ + 12 * (v205 + v202) - 12 * v1 + 3680;
        do {
          v210 = v206 + v204;
          v204 += 4;
          if (v210 >= v2) {
            v211 = v2;
          }
          else {
            v211 = 0;
          }
          {
            v212 = *(float*)&v208[-12 * v211];
            __asm__ volatile("" ::"w"(v212));
          }
          v208 += 48;
          if (v210 + 1 >= v2) {
            v213 = v2;
          }
          else {
            v213 = 0;
          }
          {
            v214 = *(float*)&v209[-12 * v213 - 24];
            __asm__ volatile("" ::"w"(v214));
          }
          v215 = v210 + 2;
          v216 = v210 + 3;
          v217 = v212 - v201;
          if (v215 >= v2) {
            v218 = v2;
          }
          else {
            v218 = 0;
          }
          v219 = v217;
          if (v216 >= v2) {
            v220 = v2;
          }
          else {
            v220 = 0;
          }
          {
            v221 = &v209[-12 * v218];
            __asm__ volatile("" ::"r"(v221));
          }
          *v207 = v219;
          v207[1] = (float)(v214 - v201);
          {
            v222 = *(float*)&v209[-12 * v220];
            __asm__ volatile("" ::"w"(v222));
          }
          v209 += 48;
          v207[2] = (float)(*((float*)v221 - 3) - v201);
          v207[3] = (float)(v222 - v201);
          v207 += 4;
        } while ((v1 & 0xFFFFFFFFFFFFFFFCLL) != v204);
      }
      if ((v1 & 3) != 0) {
        v223 = (v200 << 9) + 8 * v204;
        v224 = v205 + v204 + v202 - v1;
        {
          v225 = (double*)&v263[v223 - 512];
          __asm__ volatile("" ::"r"(v225));
        }
        v226 = (char*)this_ + 12 * v224 + 3644;
        do {
          v36 = v224++ >= v2;
          if (v36) {
            v227 = v2;
          }
          else {
            v227 = 0;
          }
          --v203;
          {
            v228 = *(float*)&v226[-12 * v227];
            __asm__ volatile("" ::"w"(v228));
          }
          v226 += 12;
          *v225++ = (float)(v228 - v201);
        } while (v203 != 0);
      }
      v200 = v265_.v266;
      if (v66) {
        goto LABEL_240;
      }
      goto LABEL_214;
    }
    goto LABEL_213;
  }
  memset_plt((__int64)v263, 0, 0x200u);
  v265_.v266 = 1;
  if (v1 != 0) {
    v173 = v147 / v40;
    {
      v174 = *((_QWORD*)this_ + 553);
      __asm__ volatile("" ::"r"(v174));
    }
    v175 = v1 & 3;
    v176 = 0;
    if (v174 >= v1) {
      v177 = 0;
    }
    else {
      v177 = v2;
    }
    if (v117 >= 3) {
      v178 = v174 - v1 + v177;
      v176 = 0;
      v179 = (double*)&v264;
      v180 = (char*)this_ + 12 * v178 + 3640;
      v181 = (char*)this_ + 12 * (v177 + v174) - 12 * v1 + 3676;
      do {
        v182 = v178 + v176;
        v176 += 4;
        if (v182 >= v2) {
          v183 = v2;
        }
        else {
          v183 = 0;
        }
        {
          v184 = *(float*)&v180[-12 * v183];
          __asm__ volatile("" ::"w"(v184));
        }
        v180 += 48;
        if (v182 + 1 >= v2) {
          v185 = v2;
        }
        else {
          v185 = 0;
        }
        {
          v186 = *(float*)&v181[-12 * v185 - 24];
          __asm__ volatile("" ::"w"(v186));
        }
        v187 = v182 + 2;
        v188 = v182 + 3;
        v189 = v184 - v173;
        if (v187 >= v2) {
          v190 = v2;
        }
        else {
          v190 = 0;
        }
        v191 = v189;
        if (v188 >= v2) {
          v192 = v2;
        }
        else {
          v192 = 0;
        }
        {
          v193 = &v181[-12 * v190];
          __asm__ volatile("" ::"r"(v193));
        }
        *(v179 - 2) = v191;
        *(v179 - 1) = (float)(v186 - v173);
        {
          v194 = *(float*)&v181[-12 * v192];
          __asm__ volatile("" ::"w"(v194));
        }
        v181 += 48;
        *v179 = (float)(*((float*)v193 - 3) - v173);
        v179[1] = (float)(v194 - v173);
        v179 += 4;
      } while ((v1 & 0xFFFFFFFFFFFFFFFCLL) != v176);
    }
    if ((v1 & 3) != 0) {
      {
        v195 = (double*)&v263[8 * v176];
        __asm__ volatile("" ::"r"(v195));
      }
      v196 = v177 + v176 + v174 - v1;
      v197 = (char*)this_ + 12 * v196 + 3640;
      do {
        v36 = v196++ >= v2;
        if (v36) {
          v198 = v2;
        }
        else {
          v198 = 0;
        }
        --v175;
        {
          v199 = *(float*)&v197[-12 * v198];
          __asm__ volatile("" ::"w"(v199));
        }
        v197 += 12;
        *v195++ = (float)(v199 - v173);
      } while (v175 != 0);
    }
    v200 = v265_.v266;
    if ((v39 & 2) != 0) {
      memset_plt((__int64)&v263[512 * v265_.v266], 0, 0x200u);
      v200 = ++v265_.v266;
      goto LABEL_185;
    }
  LABEL_213:
    if (!v66) {
      goto LABEL_214;
    }
    goto LABEL_240;
  }
  if ((v39 & 2) == 0) {
    v200 = 1;
    goto LABEL_213;
  }
  memset_plt((__int64)&v265_.v265, 0, 0x200u);
  v200 = ++v265_.v266;
  if (!v66) {
  LABEL_214:
    memset_plt((__int64)&v263[512 * v200], 0, 0x200u);
    v229 = v265_.v266;
    v200 = ++v265_.v266;
    if (v1 != 0) {
      v230 = v144 / v40;
      {
        v231 = *((_QWORD*)this_ + 553);
        __asm__ volatile("" ::"r"(v231));
      }
      v232 = v1 & 3;
      v233 = 0;
      if (v231 >= v1) {
        v234 = 0;
      }
      else {
        v234 = v2;
      }
      if (v117 >= 3) {
        v235 = v231 - v1 + v234;
        v233 = 0;
        {
          v236 = (double*)&v263[512 * v229 + 16];
          __asm__ volatile("" ::"r"(v236));
        }
        v237 = (char*)this_ + 12 * v235 + 3648;
        v238 = (char*)this_ + 12 * (v234 + v231) - 12 * v1 + 3684;
        do {
          v239 = v235 + v233;
          v233 += 4;
          if (v239 >= v2) {
            v240 = v2;
          }
          else {
            v240 = 0;
          }
          {
            v241 = *(float*)&v237[-12 * v240];
            __asm__ volatile("" ::"w"(v241));
          }
          v237 += 48;
          if (v239 + 1 >= v2) {
            v242 = v2;
          }
          else {
            v242 = 0;
          }
          {
            v243 = *(float*)&v238[-12 * v242 - 24];
            __asm__ volatile("" ::"w"(v243));
          }
          v244 = v239 + 2;
          v245 = v239 + 3;
          v246 = v241 - v230;
          if (v244 >= v2) {
            v247 = v2;
          }
          else {
            v247 = 0;
          }
          v248 = v246;
          if (v245 >= v2) {
            v249 = v2;
          }
          else {
            v249 = 0;
          }
          {
            v250 = &v238[-12 * v247];
            __asm__ volatile("" ::"r"(v250));
          }
          *(v236 - 2) = v248;
          *(v236 - 1) = (float)(v243 - v230);
          {
            v251 = *(float*)&v238[-12 * v249];
            __asm__ volatile("" ::"w"(v251));
          }
          v238 += 48;
          *v236 = (float)(*((float*)v250 - 3) - v230);
          v236[1] = (float)(v251 - v230);
          v236 += 4;
        } while ((v1 & 0xFFFFFFFFFFFFFFFCLL) != v233);
      }
      if ((v1 & 3) != 0) {
        {
          v252 = (double*)&v263[512 * v229 + 8 * v233];
          __asm__ volatile("" ::"r"(v252));
        }
        v253 = v234 + v233 + v231 - v1;
        v254 = (char*)this_ + 12 * v253 + 3648;
        do {
          v36 = v253++ >= v2;
          if (v36) {
            v255 = v2;
          }
          else {
            v255 = 0;
          }
          --v232;
          {
            v256 = *(float*)&v254[-12 * v255];
            __asm__ volatile("" ::"w"(v256));
          }
          v254 += 12;
          *v252++ = (float)(v256 - v230);
        } while (v232 != 0);
      }
      v200 = v265_.v266;
    }
  }
LABEL_240:
  if (v200 != 0) {
    v257 = 0x0.0p+0;
    v258 = v263;
    for (i = v200; i != 0; --i) {
      memset_plt((__int64)&v268_.v268, 0, 0x208u);
      memcpy_plt((__int64)v267, (__int64)v258, 0x200u);
      SdkRoutine_87a3f0((void*)(&v268_.v268), v267, 1, 3);
      v258 += 512;
      v257 = v257 +
             PSEUDO_UNFUSED(v268_.v268 * 0x1.0000000000000p+6) * v268_.v268 +
             PSEUDO_UNFUSED(v268_.v269 * 0x1.0000000000000p+6) * v268_.v269;
    }
    v260 = vcvtd_n_f64_u64(2 * v200, 1u);
  }
  else {
    v260 = 0x0.0p+0;
    v257 = 0x0.0p+0;
  }
  v261 = math_722a20(v260, v257 * 0x1.0000000000000p-1);
  {
    v262 = *((double*)this_ + 565);
    __asm__ volatile("" ::"w"(v262));
  }
  *((double*)this_ + 564) = v261;
  *((double*)this_ + 566) = v257;
  v3[401] = v261 < v262;
}

#pragma GCC visibility pop
