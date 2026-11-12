#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_87a0a0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a0b0(PSEUDO_X8, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(__int64, int, unsigned __int64);
extern __int64 SdkData_e89100;
unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);
float nerd_gyro_pointing_6d19e0(void* this_, const __int16* a2, unsigned int a3,
                                float* a4, float* a5);
__attribute__((swiftcall)) void
nerd_gyro_pointing_70ace0(PSEUDO_X8 x8_, __int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void nerd_gyro_pointing_720480(PSEUDO_X8 x8_,
                                                          float* a1, float* a2);
__attribute__((swiftcall)) void
nerd_gyro_pointing_720b40(PSEUDO_X8 x8_, unsigned __int64* a1, __int64* a2);

float nerd_gyro_pointing_6d19e0(void* this_, const __int16* a2, unsigned int a3,
                                float* a4, float* a5)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  __int16* v9;
  char* v12;
  __int64 v13;
  void (*v14)(char*, const __int16*, __int16*, __int64, __int64);
  char* v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  char* v23;
  __int64 v24;
  char* v25;
  int i;
  __int64 v27;
  __int16* v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  float v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  float* v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  float* v52;
  float* v53;
  float v54;
  unsigned __int64 v55;
  float result;
  _DWORD v57[240];

  v7 = *((unsigned int*)this_ + 410);
  v8 = *((unsigned int*)this_ + 408);
  v9 = (__int16*)((char*)this_ + 1656);
  v12 = (char*)this_ + 792 * a3;
  v13 = *((_QWORD*)v12 + 95);
  v14 =
      *((void (**)(char*, const __int16*, __int16*, __int64, __int64))v12 + 94);
  v15 = &v12[v13 >> 1];
  if ((v13 & 1) != 0) {
    (*(void (**)(char*, const __int16*, __int16*, __int64, __int64))(
        (char*)v14 + *((_QWORD*)v15 + 48)))(v15 + 384, a2, v9, v7, v8);
    if (a3 == *((_DWORD*)this_ + 409)) {
    LABEL_3:
      v16 = *((_QWORD*)this_ + 206);
      if (v16 != 0) {
        goto LABEL_4;
      }
      goto LABEL_11;
    }
  }
  else {
    v14(v15 + 384, a2, v9, v7, v8);
    if (a3 == *((_DWORD*)this_ + 409)) {
      goto LABEL_3;
    }
  }
  v23 = *((char**)v12 + 46);
  v24 = *((_QWORD*)v12 + 47);
  v25 = &v12[v24 >> 1];
  if ((v24 & 1) != 0) {
    v23 = *(char**)&v23[*(_QWORD*)v25];
  }
  ((void (*)(char*, __int16*, __int16*, _QWORD, __int64))v23)(
      v25, v9, v9, *((unsigned int*)this_ + 410), 1);
  v16 = *((_QWORD*)this_ + 206);
  if (v16 != 0) {
  LABEL_4:
    v17 = *((_DWORD*)v12 + 194);
    memset_plt((__int64)v57, 0, 0x3C0u);
    v18 = *((_DWORD*)this_ + 410);
    if (v18 != 0) {
      goto LABEL_5;
    }
  LABEL_12:
    i = v17;
    goto LABEL_45;
  }
LABEL_11:
  v17 = *v9;
  memset_plt((__int64)v57, 0, 0x3C0u);
  v18 = *((_DWORD*)this_ + 410);
  if (v18 == 0) {
    goto LABEL_12;
  }
LABEL_5:
  v19 = v18 & 3;
  if (v18 >= 4) {
    v27 = v18 & 0xFFFFFFFC;
    v28 = (__int16*)((char*)this_ + 1662);
    v20 = 0;
    v21 = 0;
    v22 = 0;
    do {
      v29 = *(v28 - 3);
      v57[v21] = v20;
      v30 = v17 ^ v29;
      v17 = *v28;
      v31 = v21 + (v30 >> 31);
      if (v29 >= 0) {
        v32 = v29;
      }
      else {
        v32 = -v29;
      }
      if (v22 <= v32) {
        v22 = v32;
      }
      v33 = *(v28 - 2);
      v57[v31] = v20 + 1;
      v34 = v31 + ((v29 ^ (unsigned int)v33) >> 31);
      if (v33 >= 0) {
        v35 = v33;
      }
      else {
        v35 = -v33;
      }
      if (v22 <= v35) {
        v22 = v35;
      }
      v36 = *(v28 - 1);
      v57[v34] = v20 + 2;
      v28 += 4;
      v37 = v34 + ((v33 ^ (unsigned int)v36) >> 31);
      if (v36 >= 0) {
        v38 = v36;
      }
      else {
        v38 = -v36;
      }
      v39 = v36 ^ v17;
      if (v22 <= v38) {
        v22 = v38;
      }
      v40 = v20 + 3;
      v20 += 4;
      v57[v37] = v40;
      v21 = v37 + (v39 >> 31);
      if (v17 >= 0) {
        v41 = v17;
      }
      else {
        v41 = -v17;
      }
      if (v22 <= v41) {
        v22 = v41;
      }
    } while (v20 != v27);
  }
  else {
    v20 = 0;
    v21 = 0;
    v22 = 0;
  }
  for (i = v17; v19 != 0; --v19) {
    i = v9[v20];
    v57[v21] = v20++;
    v42 = v17 ^ i;
    v17 = i;
    v21 += v42 >> 31;
    if (i >= 0) {
      v43 = i;
    }
    else {
      v43 = -i;
    }
    if (v22 <= v43) {
      v22 = v43;
    }
  }
  if (v21 != 0) {
    v44 = vcvts_n_f32_u32(v22, 0xFu);
    v45 = (unsigned int)v57[v21 - 1];
    v46 = v16 + v45;
    if (v21 == 1) {
      v47 = v46 - *((_QWORD*)v12 + 96);
      v21 = 2;
    }
    else {
      v47 = (unsigned int)(v45 - v57[0]);
    }
    *a4 = v44;
    *a5 = (float)(unsigned int)((*((_DWORD*)this_ + 407) >> 1) * (v21 - 1)) /
          (float)v47;
    *((_QWORD*)v12 + 96) = v46;
    v48 = a5;
    goto LABEL_48;
  }
LABEL_45:
  v48 = (float*)(v12 + 784);
  *a4 = *((float*)v12 + 195);
LABEL_48:
  v49 = 256;
  v50 = SdkData_e89100;
  do {
    v51 = v49 >> 1;
    v52 = (float*)(v50 + 4 * (v49 >> 1));
    v54 = *v52;
    v53 = v52 + 1;
    v49 += ~(v49 >> 1);
    if (v54 < *v48) {
      v50 = (__int64)v53;
    }
    else {
      v49 = v51;
    }
  } while (v49 != 0);
  v55 = (unsigned __int64)(v50 - SdkData_e89100) >> 2;
  if ((unsigned int)v55 >= 0xFF) {
    LODWORD(v55) = 255;
  }
  *a5 = *(float*)(SdkData_e89100 + 4LL * (unsigned int)v55);
  *((_DWORD*)v12 + 194) = i;
  *((float*)v12 + 195) = *a4;
  result = *a5;
  *((float*)v12 + 196) = *a5;
  return result;
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_70ace0(PSEUDO_X8 x8_, __int64 a1, _QWORD* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
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
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 result;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v3 = a1 + 24LL * *a2;
  v4 = *(_QWORD*)(v3 + 8);
  v5 = *(unsigned int*)(v3 + 16);
  v6 = *(_QWORD*)(v3 + 24);
  v7 = *(_QWORD*)(v3 + 32);
  v8 = *(unsigned int*)(v3 + 40);
  v9 = *(_QWORD*)(v3 + 48);
  v10 = *(_QWORD*)(v3 + 56);
  v11 = *(unsigned int*)(v3 + 64);
  v12 = *(_QWORD*)(v3 + 72);
  v13 = *(_QWORD*)(v3 + 80);
  v14 = *(unsigned int*)(v3 + 88);
  v15 = *(_QWORD*)(v3 + 96);
  v16 = *(_QWORD*)(v3 + 104);
  *a3 = *(_QWORD*)v3;
  a3[1] = v4;
  v17 = *(unsigned int*)(v3 + 112);
  a3[2] = v5;
  a3[3] = v6;
  v18 = *(_QWORD*)(v3 + 120);
  v19 = *(_QWORD*)(v3 + 128);
  a3[4] = v7;
  a3[5] = v8;
  a3[6] = v9;
  a3[7] = v10;
  v20 = *(unsigned int*)(v3 + 136);
  a3[8] = v11;
  a3[9] = v12;
  v21 = *(_QWORD*)(v3 + 144);
  v22 = *(_QWORD*)(v3 + 152);
  v23 = *(unsigned int*)(v3 + 160);
  v24 = *(unsigned int*)(v3 + 184);
  v26 = *(_QWORD*)(v3 + 192);
  result = *(_QWORD*)(v3 + 200);
  a3[10] = v13;
  a3[11] = v14;
  a3[12] = v15;
  a3[13] = v16;
  a3[14] = v17;
  a3[15] = v18;
  a3[16] = v19;
  a3[17] = v20;
  v27 = *(_QWORD*)(v3 + 168);
  v28 = *(_QWORD*)(v3 + 176);
  v29 = *(unsigned int*)(v3 + 208);
  a3[18] = v21;
  a3[19] = v22;
  a3[24] = v26;
  a3[25] = result;
  a3[20] = v23;
  a3[21] = v27;
  a3[22] = v28;
  a3[23] = v24;
  a3[26] = v29;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nerd_gyro_pointing_720480(PSEUDO_X8 x8_,
                                                          float* a1, float* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  float v3;
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  char v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float v47;
  __int64 v48;
  __int64 v49;
  float v50;
  __int64 v51;
  __int64 v52;
  float v53;
  bool v54;
  char v55;
  __int64 v56;
  __int64 v57;
  float v58;
  char v59;
  __int64 v60;
  __int64 v61;
  float v62;
  char v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  float v75;
  __int64 v76;
  char v77;
  float v78;
  __int64 v79;
  __int64 v80;
  float v81;
  __int64 v82;
  char v83;
  float v84;
  __int64 v85;
  __int64 v86;
  float v87;
  __int64 v88;
  char v89;
  float v90;
  __int64 v91;
  __int64 v92;
  float result;
  float v94;
  float v95;
  __int64* v96;
  float v97;
  float v98;
  __int64 v99;
  __int64 v100;
  float v101;
  float v102;
  float v103;
  struct {
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
  } v104_;
  __int64 v113;
  int v114;
  struct {
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
  } v115_;
  __int64* v124;

  v3 = a2[3];
  v4 = *((_QWORD*)a1 + 9);
  v102 = v3;
  v103 = a1[22];
  if (v4 != 0) {
    v8 = v4 + 16LL * *(_QWORD*)(v4 + 4096);
    *(_WORD*)(v8 + 4) = (unsigned __int8)*((_QWORD*)a1 + 10);
    *(float*)(v8 + 8) = v3;
    *(_DWORD*)(v8 + 12) = 0;
    v9 = *(_QWORD*)(v4 + 4096);
    *(_QWORD*)(v4 + 4096) = v9 + 1;
  }
  else {
    LOBYTE(v9) = -1;
  }
  v10 = *(_QWORD*)a1;
  v11 = *((_QWORD*)a1 + 1);
  v12 = *((_DWORD*)a1 + 4);
  v115_.v120 = 0;
  v115_.v121 = 0;
  v13 = *((_DWORD*)a2 + 2);
  v115_.v122 = 0;
  v115_.v123 = 0;
  v14 = *((_QWORD*)a1 + 4);
  v115_.v115 = v10;
  v115_.v116 = v11;
  *(float*)&v11 = a1[10];
  v16 = (__int64*)(a1 + 6);
  v15 = *((_QWORD*)a1 + 3);
  v115_.v119 = v14;
  v114 = v13;
  LODWORD(v115_.v120) = v11;
  *(float*)&v11 = a1[16];
  v115_.v118 = v15;
  v115_.v117 = v12;
  v17 = *((_QWORD*)a1 + 6);
  v18 = *((_QWORD*)a1 + 7);
  v96 = (__int64*)(a1 + 12);
  LODWORD(v115_.v123) = v11;
  v19 = *(_QWORD*)a2;
  v115_.v121 = v17;
  v115_.v122 = v18;
  v124 = &v115_.v115;
  v113 = v19;
  SdkRoutine_87a0a0((void*)(&v104_.v104), &v124, &v113);
  v20 = v104_.v104;
  v101 = *(float*)&v104_.v106;
  if (v4 != 0) {
    v21 = 0x1.0000000000000p+0f;
    if (v104_.v104 != 0) {
      v22 = v104_.v105;
      v23 = -0x1.0000000000000p+0f;
    }
    else {
      v22 = 0;
      v23 = 0x0.0p+0f;
    }
    v20 = v4;
  LABEL_11:
    v24 = v20 + 16LL * *(_QWORD*)(v20 + 4096);
    *(_BYTE*)(v24 + 4) = v9;
    *(_BYTE*)(v24 + 5) = v22;
    *(float*)(v24 + 8) = v21;
    *(float*)(v24 + 12) = v23;
    v99 = *(_QWORD*)(v20 + 4096);
    v100 = v20;
    *(_QWORD*)(v20 + 4096) = v99 + 1;
    v26 = *a2;
    v25 = a2[1];
    v27 = a2[2];
    v28 = a1[22];
    v29 = *((_QWORD*)a1 + 9);
    if (v29 != 0) {
      goto LABEL_12;
    }
  LABEL_18:
    v33 = 0;
    v36 = 0;
    LOBYTE(v31) = -1;
    LOBYTE(v35) = -1;
    v32 = v28;
    LOBYTE(v38) = -1;
    v98 = v28;
    goto LABEL_19;
  }
  if (v104_.v104 != 0) {
    LOBYTE(v9) = v104_.v105;
    v22 = 0;
    v23 = 0x0.0p+0f;
    v21 = -0x1.0000000000000p+0f;
    goto LABEL_11;
  }
  v99 = -1;
  v100 = 0;
  v26 = *a2;
  v25 = a2[1];
  v27 = a2[2];
  v28 = a1[22];
  v29 = *((_QWORD*)a1 + 9);
  if (v29 == 0) {
    goto LABEL_18;
  }
LABEL_12:
  v30 = v29 + 16LL * *(_QWORD*)(v29 + 4096);
  *(_WORD*)(v30 + 4) = (unsigned __int8)*((_QWORD*)a1 + 10);
  *(float*)(v30 + 8) = v26;
  *(_DWORD*)(v30 + 12) = 0;
  v31 = *(_QWORD*)(v29 + 4096);
  *(_QWORD*)(v29 + 4096) = v31 + 1;
  v32 = a1[22];
  v33 = *((_QWORD*)a1 + 9);
  if (v33 != 0) {
    v34 = v33 + 16LL * *(_QWORD*)(v33 + 4096);
    *(_WORD*)(v34 + 4) = (unsigned __int8)*((_QWORD*)a1 + 10);
    *(float*)(v34 + 8) = v25;
    *(_DWORD*)(v34 + 12) = 0;
    v35 = *(_QWORD*)(v33 + 4096);
    *(_QWORD*)(v33 + 4096) = v35 + 1;
    v36 = *((_QWORD*)a1 + 9);
    v98 = a1[22];
    if (v36 != 0) {
      v37 = v36 + 16LL * *(_QWORD*)(v36 + 4096);
      *(_WORD*)(v37 + 4) = (unsigned __int8)*((_QWORD*)a1 + 10);
      *(float*)(v37 + 8) = v27;
      *(_DWORD*)(v37 + 12) = 0;
      v38 = *(_QWORD*)(v36 + 4096);
      *(_QWORD*)(v36 + 4096) = v38 + 1;
    }
    else {
      LOBYTE(v38) = -1;
    }
  }
  else {
    v36 = 0;
    LOBYTE(v35) = -1;
    LOBYTE(v38) = -1;
    v98 = a1[22];
  }
LABEL_19:
  v39 = a2[3];
  v40 = *(_QWORD*)a1;
  v97 = a1[10];
  v41 = *((_QWORD*)a1 + 3);
  v42 = *((_QWORD*)a1 + 4);
  v43 = *((_QWORD*)a1 + 6);
  v44 = *((_QWORD*)a1 + 7);
  v94 = a1[16];
  v95 = a1[4];
  if (*(_QWORD*)a1 != 0) {
    v45 = v40 + 16LL * *(_QWORD*)(v40 + 4096);
    *(_WORD*)(v45 + 4) = (unsigned __int8)*((_QWORD*)a1 + 1);
    *(float*)(v45 + 8) = v39;
    *(_DWORD*)(v45 + 12) = 0;
    v46 = *(_QWORD*)(v40 + 4096);
    *(_QWORD*)(v40 + 4096) = v46 + 1;
    v47 = a2[3];
    if (v41 != 0) {
      goto LABEL_21;
    }
  }
  else {
    LOBYTE(v46) = -1;
    v47 = a2[3];
    if (v41 != 0) {
    LABEL_21:
      v48 = v41 + 16LL * *(_QWORD*)(v41 + 4096);
      *(_BYTE*)(v48 + 4) = v42;
      *(_BYTE*)(v48 + 5) = 0;
      *(float*)(v48 + 8) = v47;
      *(_DWORD*)(v48 + 12) = 0;
      v49 = *(_QWORD*)(v41 + 4096);
      *(_QWORD*)(v41 + 4096) = v49 + 1;
      v50 = a2[3];
      if (v43 != 0) {
        goto LABEL_22;
      }
      goto LABEL_31;
    }
  }
  LOBYTE(v49) = -1;
  v50 = v47;
  if (v43 != 0) {
  LABEL_22:
    v51 = v43 + 16LL * *(_QWORD*)(v43 + 4096);
    *(_BYTE*)(v51 + 4) = v44;
    *(_BYTE*)(v51 + 5) = 0;
    *(float*)(v51 + 8) = v50;
    *(_DWORD*)(v51 + 12) = 0;
    v52 = *(_QWORD*)(v43 + 4096);
    *(_QWORD*)(v43 + 4096) = v52 + 1;
    if (v29 != 0) {
      goto LABEL_23;
    }
    goto LABEL_32;
  }
LABEL_31:
  LOBYTE(v52) = -1;
  if (v29 != 0) {
  LABEL_23:
    v53 = 0x1.0000000000000p+0f;
    v54 = v40 == 0;
    v40 = v29;
    if (v54) {
      v55 = 0;
    }
    else {
      v55 = v46;
    }
    LOBYTE(v46) = v31;
    if (v54) {
      v53 = 0x0.0p+0f;
    }
  LABEL_34:
    v56 = v40 + 16LL * *(_QWORD*)(v40 + 4096);
    *(_BYTE*)(v56 + 4) = v46;
    *(_BYTE*)(v56 + 5) = v55;
    *(_DWORD*)(v56 + 8) = 1065353216;
    *(float*)(v56 + 12) = v53;
    v57 = *(_QWORD*)(v40 + 4096);
    *(_QWORD*)(v40 + 4096) = v57 + 1;
    if (v33 != 0) {
      goto LABEL_35;
    }
    goto LABEL_42;
  }
LABEL_32:
  if (v40 != 0) {
    v55 = 0;
    v53 = 0x0.0p+0f;
    goto LABEL_34;
  }
  LOBYTE(v57) = -1;
  if (v33 != 0) {
  LABEL_35:
    v58 = 0x1.0000000000000p+0f;
    if (v41 != 0) {
      v59 = v49;
    }
    else {
      v59 = 0;
    }
    if (v41 == 0) {
      v58 = 0x0.0p+0f;
    }
  LABEL_44:
    v60 = v33 + 16LL * *(_QWORD*)(v33 + 4096);
    *(_BYTE*)(v60 + 4) = v35;
    *(_BYTE*)(v60 + 5) = v59;
    *(float*)(v60 + 12) = v58;
    v61 = *(_QWORD*)(v33 + 4096);
    *(_DWORD*)(v60 + 8) = 1065353216;
    *(_QWORD*)(v33 + 4096) = v61 + 1;
    if (v36 != 0) {
      goto LABEL_45;
    }
    goto LABEL_52;
  }
LABEL_42:
  if (v41 != 0) {
    v58 = 0x0.0p+0f;
    v59 = 0;
    v33 = v41;
    LOBYTE(v35) = v49;
    goto LABEL_44;
  }
  v33 = 0;
  LOBYTE(v61) = -1;
  if (v36 != 0) {
  LABEL_45:
    v62 = 0x1.0000000000000p+0f;
    if (v43 != 0) {
      v63 = v52;
    }
    else {
      v63 = 0;
    }
    if (v43 == 0) {
      v62 = 0x0.0p+0f;
    }
    goto LABEL_54;
  }
LABEL_52:
  if (v43 != 0) {
    v62 = 0x0.0p+0f;
    v63 = 0;
    v36 = v43;
    LOBYTE(v38) = v52;
  LABEL_54:
    v64 = v36 + 16LL * *(_QWORD*)(v36 + 4096);
    *(_BYTE*)(v64 + 4) = v38;
    *(_BYTE*)(v64 + 5) = v63;
    *(float*)(v64 + 12) = v62;
    v65 = *(_QWORD*)(v36 + 4096);
    *(_DWORD*)(v64 + 8) = 1065353216;
    *(_QWORD*)(v36 + 4096) = v65 + 1;
    goto LABEL_55;
  }
  v36 = 0;
  LOBYTE(v65) = -1;
LABEL_55:
  v66 = *(_QWORD*)a1;
  v67 = *((_QWORD*)a1 + 1);
  v68 = *((_DWORD*)a1 + 4);
  v104_.v109 = 0;
  v104_.v110 = 0;
  v104_.v111 = 0;
  v104_.v112 = 0;
  v69 = *((_DWORD*)a2 + 2);
  v104_.v104 = v66;
  v104_.v105 = v67;
  v70 = *v16;
  v71 = *((_QWORD*)a1 + 4);
  v114 = v69;
  v104_.v107 = v70;
  v104_.v106 = v68;
  *(float*)&v70 = a1[10];
  v104_.v108 = v71;
  LODWORD(v104_.v109) = v70;
  v72 = v96[1];
  v73 = *((_DWORD*)v96 + 4);
  v104_.v110 = *v96;
  v104_.v111 = v72;
  v74 = *(_QWORD*)a2;
  LODWORD(v104_.v112) = v73;
  v113 = v74;
  SdkRoutine_87a0b0((void*)(&v115_.v115), &v104_.v104, &v113);
  v75 = *(float*)&v115_.v117;
  v76 = v115_.v115;
  if (v40 != 0) {
    if (v115_.v115 != 0) {
      v77 = v115_.v116;
      v78 = 0x1.0000000000000p+0f;
    }
    else {
      v77 = 0;
      v78 = 0x0.0p+0f;
    }
    v76 = v40;
  LABEL_62:
    v79 = v76 + 16LL * *(_QWORD*)(v76 + 4096);
    *(_BYTE*)(v79 + 4) = v57;
    *(_BYTE*)(v79 + 5) = v77;
    *(float*)(v79 + 12) = v78;
    *(_DWORD*)(v79 + 8) = 1065353216;
    v80 = *(_QWORD*)(v76 + 4096);
    *(_QWORD*)(v76 + 4096) = v80 + 1;
    v81 = *(float*)&v115_.v120;
    v82 = v115_.v118;
    if (v33 != 0) {
      goto LABEL_63;
    }
    goto LABEL_68;
  }
  if (v115_.v115 != 0) {
    LOBYTE(v57) = v115_.v116;
    v77 = 0;
    v78 = 0x0.0p+0f;
    goto LABEL_62;
  }
  v80 = -1;
  v81 = *(float*)&v115_.v120;
  v82 = v115_.v118;
  if (v33 != 0) {
  LABEL_63:
    if (v82 != 0) {
      v83 = v115_.v119;
      v84 = 0x1.0000000000000p+0f;
    }
    else {
      v83 = 0;
      v84 = 0x0.0p+0f;
    }
  LABEL_70:
    v85 = v33 + 16LL * *(_QWORD*)(v33 + 4096);
    *(_BYTE*)(v85 + 4) = v61;
    *(_BYTE*)(v85 + 5) = v83;
    *(float*)(v85 + 12) = v84;
    *(_DWORD*)(v85 + 8) = 1065353216;
    v86 = *(_QWORD*)(v33 + 4096);
    *(_QWORD*)(v33 + 4096) = v86 + 1;
    v87 = *(float*)&v115_.v123;
    v88 = v115_.v121;
    if (v36 != 0) {
      goto LABEL_71;
    }
    goto LABEL_75;
  }
LABEL_68:
  if (v82 != 0) {
    LOBYTE(v61) = v115_.v119;
    v84 = 0x0.0p+0f;
    v83 = 0;
    v33 = v82;
    goto LABEL_70;
  }
  v33 = 0;
  v86 = -1;
  v87 = *(float*)&v115_.v123;
  v88 = v115_.v121;
  if (v36 != 0) {
  LABEL_71:
    if (v88 != 0) {
      v89 = v115_.v122;
      v90 = 0x1.0000000000000p+0f;
    }
    else {
      v89 = 0;
      v90 = 0x0.0p+0f;
    }
    goto LABEL_77;
  }
LABEL_75:
  if (v88 == 0) {
    v36 = 0;
    v92 = -1;
    goto LABEL_78;
  }
  LOBYTE(v65) = v115_.v122;
  v90 = 0x0.0p+0f;
  v89 = 0;
  v36 = v88;
LABEL_77:
  v91 = v36 + 16LL * *(_QWORD*)(v36 + 4096);
  *(_BYTE*)(v91 + 4) = v65;
  *(_BYTE*)(v91 + 5) = v89;
  *(float*)(v91 + 12) = v90;
  *(_DWORD*)(v91 + 8) = 1065353216;
  v92 = *(_QWORD*)(v36 + 4096);
  *(_QWORD*)(v36 + 4096) = v92 + 1;
LABEL_78:
  *((_QWORD*)a3 + 2) = 0;
  *((_QWORD*)a3 + 3) = v33;
  *((_QWORD*)a3 + 4) = v86;
  *((_QWORD*)a3 + 5) = 0;
  *((_QWORD*)a3 + 7) = v92;
  *((_QWORD*)a3 + 8) = 0;
  *(_QWORD*)a3 = v76;
  *((_QWORD*)a3 + 1) = v80;
  *((_QWORD*)a3 + 6) = v36;
  *((_QWORD*)a3 + 9) = v100;
  *((_QWORD*)a3 + 10) = v99;
  *((_QWORD*)a3 + 11) = 0;
  a3[4] = (float)((float)(v26 * v28) + (float)(v95 * v39)) + v75;
  a3[10] = (float)((float)(v25 * v32) + (float)(v97 * v47)) + v81;
  a3[16] = (float)((float)(v27 * v98) + (float)(v94 * v50)) + v87;
  result = (float)(v103 * v102) - v101;
  a3[22] = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_720b40(PSEUDO_X8 x8_, unsigned __int64* a1, __int64* a2)
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
  {
    memcpy_plt(a3, a2, 144);
    return;
  }
}

#pragma GCC visibility pop
