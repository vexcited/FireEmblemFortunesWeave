#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern __int128 SdkData_bb1290;
extern __int128 SdkData_bb1750;
extern __int128 SdkData_bb1a80;
extern __int128 SdkData_bb1cc0;
extern __int128 SdkData_bb1f50;
extern __int128 SdkData_bb2aa0;
extern __int128 SdkData_bb3350;
extern __int128 SdkData_bb3560;
extern __int128 SdkData_bb3770;
extern __int128 SdkData_bb44f0;
extern __int128 SdkData_bb4ee0;
extern _DWORD SdkData_c924c4[5];
__int64 SdkRoutine_64b750(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6859f0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6a0be0(void);

int32x4_t SdkHr_681260(__int64* a1, unsigned __int16 a2)
{
  __int64 v3;
  int32x4_t result;

  v3 = *a1;
  if (*a1 + 20 > (unsigned __int64)a1[1]) {
    SdkRoutine_64b750(a1, v3, 4LL * (unsigned int)(*((_DWORD*)a1 + 26) + 5));
    v3 = *a1;
  }
  result = vdupq_n_s32(a2);
  *(_DWORD*)v3 = 537134063;
  *(int32x4_t*)(v3 + 4) = result;
  *a1 = v3 + 20;
  return result;
}

__int64 SdkHr_6819a0(__int64 result, int a2, int a3, __int64 a4)
{
  __int64 v5;
  _DWORD* v6;
  __int64* v9;
  float* v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  float v14;
  float v15;
  float v16;
  float v17;
  bool v18;
  float v19;
  float v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v36;
  int v37;

  v5 = *(_QWORD*)result;
  v6 = *(_DWORD**)(result + 112);
  v9 = (__int64*)result;
  if (*(_QWORD*)result + 4 * (unsigned __int64)(unsigned int)(9 * a3) >
      *(_QWORD*)(result + 8)) {
    result = SdkRoutine_64b750(
        result, v5, 4LL * (unsigned int)(*(_DWORD*)(result + 104) + 9 * a3));
    v5 = *v9;
  }
  if (a3 >= 1) {
    v10 = (float*)(a4 + 8);
    v11 = (unsigned int)a3;
    v12 = 16 * a2 + 3072;
    v13 = 32 * a2 + 2572;
    do {
      v14 = *v10;
      v15 = v10[1];
      v16 = *(v10 - 2);
      v17 = *(v10 - 1);
      v10 += 4;
      v18 = *v6 == 1;
      v19 = v14 * 0.5f;
      v20 = -(float)(v15 * 0.5f);
      v21 = vcvtms_s32_f32(v17);
      *(_DWORD*)v5 = ((v13 - 12) >> 2) | 0x20020000;
      v22 = (v13 >> 2) | 0x20020000;
      v13 += 32;
      *(_DWORD*)(v5 + 12) = v22;
      v23 = vcvtms_s32_f32(v16);
      v24 = vcvtps_s32_f32(v16 + v14);
      if (!v18) {
        v20 = v15 * 0.5f;
      }
      v25 = vcvtps_s32_f32(v17 + v15);
      v26 = v23 & ~(v23 >> 31);
      *(float*)(v5 + 4) = v19;
      *(float*)(v5 + 8) = v20;
      *(float*)(v5 + 16) = v16 + v19;
      *(float*)(v5 + 20) = v17 + (float)(v15 * 0.5f);
      result = v24 - v26;
      if (v24 > 0xFFFE) {
        v27 = ~v26;
      }
      else {
        v27 = v24 - v26;
      }
      v28 = v26 + (v27 << 16);
      if (v23 > 65534 || (int)result < 1) {
        v30 = 0;
      }
      else {
        v30 = v28;
      }
      v31 = v21 & ~(v21 >> 31);
      v32 = v25 - v31;
      if (v25 > 0xFFFE) {
        v33 = ~v31;
      }
      else {
        v33 = v25 - v31;
      }
      v34 = v31 + (v33 << 16);
      if (v21 > 65534 || v32 < 1) {
        v36 = 0;
      }
      else {
        v36 = v34;
      }
      v37 = (v12 >> 2) | 0x20020000;
      --v11;
      v12 += 16;
      *(_DWORD*)(v5 + 24) = v37;
      *(_DWORD*)(v5 + 28) = v30;
      *(_DWORD*)(v5 + 32) = v36;
      v5 += 36;
    } while (v11 != 0);
  }
  *v9 = v5;
  return result;
}

__int64 SdkHr_6833c0(__int64 result, float a2)
{
  unsigned int* v2;
  unsigned int** v4;
  int v5;
  int v6;

  v2 = *(unsigned int**)result;
  v4 = (unsigned int**)result;
  if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
    result = SdkRoutine_64b750(
        result, v2, 4LL * (unsigned int)(*(_DWORD*)(result + 104) + 1));
    v2 = *v4;
  }
  v5 = vcvtps_s32_f32(a2 * 4.0f);
  v6 = v5 & ~(v5 >> 31);
  if (v6 >= 3) {
    v6 = 3;
  }
  *v2 = (v6 << 16) | 0x80000E5E;
  *v4 = v2 + 1;
  return result;
}

int8x16_t SdkHr_6834d0(__int64 a1, char a2, char a3)
{
  int8x16_t* v4;
  int8x16_t v7;
  int8x16_t v8;
  int8x16_t result;

  v4 = *(int8x16_t**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 128LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, v4, 4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 32));
    v4 = *(int8x16_t**)a1;
  }
  v7 = vdupq_n_s32((a2 & 0x1F | ((unsigned __int8)(a3 & 0x1F) << 8)) << 16);
  *v4 = vorrq_s8(v7, (int8x16_t)SdkData_bb3350);
  v4[1] = vorrq_s8(v7, (int8x16_t)SdkData_bb1f50);
  v8 = vorrq_s8(v7, (int8x16_t)SdkData_bb2aa0);
  result = vorrq_s8(v7, (int8x16_t)SdkData_bb1290);
  v4[2] = v8;
  v4[3] = result;
  *(_QWORD*)a1 = v4 + 4;
  return result;
}

unsigned __int64 SdkHr_6863c0(__int64 a1, _DWORD* a2)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int64 result;
  unsigned __int64 v11;
  int v12;
  char v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  float* v20;
  int32x4_t* v21;
  __int64 v22;
  _DWORD* v23;
  __int64 v24;
  int v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  int32x4_t v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  __int64 v41;
  _DWORD* v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  int32x4_t v47;
  int32x4_t v48;
  float* v49;
  int32x4_t v50;
  int32x4_t v51;
  int32x4_t* v52;
  int32x4_t v53;
  int32x4_t v54;
  __int64 v55;
  _DWORD* v56;
  __int64 v57;
  int v58;
  int32x4_t v59;
  int32x4_t v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int32x4_t v64;
  int32x4_t v65;
  int32x4_t v66;
  int32x4_t v67;
  int32x4_t v68;
  int32x4_t v69;
  int32x4_t v70;
  int32x4_t v71;
  int32x4_t v72;
  int32x4_t v73;
  int32x4_t v74;
  __int64 v75;
  _DWORD* v76;
  __int64 v77;
  int v78;
  int32x4_t v79;
  int32x4_t v80;
  int32x4_t v81;
  int32x4_t v82;
  int32x4_t v83;
  int32x4_t v84;
  int32x4_t v85;
  int32x4_t v86;
  int32x4_t v87;
  int32x4_t v88;
  int32x4_t v89;
  int32x4_t v90;
  int32x4_t v91;
  int32x4_t v92;
  int32x4_t v93;
  int32x4_t v94;
  float32x4x2_t v95;
  float32x4x2_t v96;
  float32x4x2_t v97;
  float32x4x2_t v98;

  v4 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL);
  v5 = v4 & 0x200;
  if ((v4 & 0x200) != 0) {
    v6 = 474;
  }
  else {
    v6 = 410;
  }
  v7 = v4 & 0x300;
  if ((v4 & 0x300) != 0) {
    v8 = v6;
  }
  else {
    v8 = 90;
  }
  v9 = (4 * (_WORD)v8 + 255) & 0xF00;
  result = SdkRoutine_6859f0(a1 + 5928, a1, v9);
  v11 = result;
  *(_QWORD*)(a1 + 8) += v9;
  if ((int)a2[64] < 2) {
    v16 = a2[20];
    v15 = 0x1FFFF;
    v13 = 32;
    v14 = 37;
    a2[36] = result;
    a2[20] = v16 | 4;
    v12 = 393216;
  }
  else {
    v12 = 0;
    v13 = 38;
    v14 = 47;
    a2[58] |= 0x100u;
    a2[46] = result >> 6;
    v15 = 0x7FFFF;
  }
  a2[v14] = v12 & a2[v14] | v15 & (result >> v13) | ((_DWORD)v9 << 15);
  v17 = *(_QWORD*)(a1 + 11240);
  if (*(_BYTE*)(a1 + 11408) == 1) {
    if ((unsigned __int64)(v17 + 28) > *(_QWORD*)(a1 + 11248)) {
      result = SdkRoutine_64b750(
          a1 + 11240, v17, 4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 7));
      v17 = *(_QWORD*)(a1 + 11240);
    }
    v18 = v11 + 32;
    if (v7 != 0) {
      v19 = 256;
    }
    else {
      v19 = 0;
    }
    *(_DWORD*)v17 = -1610469714;
    *(_DWORD*)(v17 + 4) = v18;
    *(_DWORD*)(v17 + 8) = v19 | ((v8 << 18) - 0x200000) | v5 | HIDWORD(v18);
    *(_QWORD*)(v17 + 12) = 0x20032A0032EA6LL;
    *(_DWORD*)(v17 + 20) = a2[36];
    *(_DWORD*)(v17 + 24) = a2[37];
    v20 = (float*)(v17 + 28);
  }
  else {
    v21 = (int32x4_t*)(a1 + 376);
    if (v17 + 4 * (unsigned __int64)(unsigned int)(v8 + 7) >
        *(_QWORD*)(a1 + 11248)) {
      result = SdkRoutine_64b750(
          a1 + 11240, v17,
          4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + v8 + 7));
      v17 = *(_QWORD*)(a1 + 11240);
    }
    *(_DWORD*)v17 = -1610404222;
    *(_DWORD*)(v17 + 4) = 4 * v8;
    *(_DWORD*)(v17 + 8) = HIDWORD(v11);
    *(_DWORD*)(v17 + 12) = v11;
    *(_DWORD*)(v17 + 16) = (v8 << 16) | 0x6000206D;
    *(_OWORD*)(v17 + 20) = SdkData_bb1cc0;
    *(_OWORD*)(v17 + 36) = SdkData_bb1750;
    if (v17 + 52 >= (unsigned __int64)(a1 + 632) ||
        (unsigned __int64)v21 >= v17 + 308) {
      v26 = *(int32x4_t*)(a1 + 392);
      v95.val[0] = vuzp1q_s32(*v21, v26);
      v95.val[1] = vuzp2q_s32(*v21, v26);
      vst2q_f32((float*)(v17 + 52), v95);
      v28 = *(int32x4_t*)(a1 + 408);
      v27 = *(int32x4_t*)(a1 + 424);
      v95.val[0] = vuzp1q_s32(v28, v27);
      v95.val[1] = vuzp2q_s32(v28, v27);
      vst2q_f32((float*)(v17 + 84), v95);
      v30 = *(int32x4_t*)(a1 + 440);
      v29 = *(int32x4_t*)(a1 + 456);
      v95.val[0] = vuzp1q_s32(v30, v29);
      v95.val[1] = vuzp2q_s32(v30, v29);
      vst2q_f32((float*)(v17 + 116), v95);
      v32 = *(int32x4_t*)(a1 + 472);
      v31 = *(int32x4_t*)(a1 + 488);
      v95.val[0] = vuzp1q_s32(v32, v31);
      v95.val[1] = vuzp2q_s32(v32, v31);
      vst2q_f32((float*)(v17 + 148), v95);
      v34 = *(int32x4_t*)(a1 + 504);
      v33 = *(int32x4_t*)(a1 + 520);
      v95.val[0] = vuzp1q_s32(v34, v33);
      v95.val[1] = vuzp2q_s32(v34, v33);
      vst2q_f32((float*)(v17 + 180), v95);
      v36 = *(int32x4_t*)(a1 + 536);
      v35 = *(int32x4_t*)(a1 + 552);
      v95.val[0] = vuzp1q_s32(v36, v35);
      v95.val[1] = vuzp2q_s32(v36, v35);
      vst2q_f32((float*)(v17 + 212), v95);
      v38 = *(int32x4_t*)(a1 + 568);
      v37 = *(int32x4_t*)(a1 + 584);
      v95.val[0] = vuzp1q_s32(v38, v37);
      v95.val[1] = vuzp2q_s32(v38, v37);
      vst2q_f32((float*)(v17 + 244), v95);
      v40 = *(int32x4_t*)(a1 + 600);
      v39 = *(int32x4_t*)(a1 + 616);
      v95.val[0] = vuzp1q_s32(v40, v39);
      v95.val[1] = vuzp2q_s32(v40, v39);
      vst2q_f32((float*)(v17 + 276), v95);
    }
    else {
      v22 = a1 + 432;
      v23 = (_DWORD*)(v17 + 56);
      v24 = 32;
      do {
        v24 -= 8;
        *(v23 - 1) = *(_QWORD*)(v22 - 56);
        *v23 = *(_DWORD*)(v22 - 52);
        v23[1] = *(_QWORD*)(v22 - 48);
        v23[2] = *(_DWORD*)(v22 - 44);
        v23[3] = *(_QWORD*)(v22 - 40);
        v23[4] = *(_DWORD*)(v22 - 36);
        v23[5] = *(_QWORD*)(v22 - 32);
        v23[6] = *(_DWORD*)(v22 - 28);
        v23[7] = *(_QWORD*)(v22 - 24);
        v23[8] = *(_DWORD*)(v22 - 20);
        v23[9] = *(_QWORD*)(v22 - 16);
        v23[10] = *(_DWORD*)(v22 - 12);
        v23[11] = *(_QWORD*)(v22 - 8);
        v23[12] = *(_DWORD*)(v22 - 4);
        v23[13] = *(_QWORD*)v22;
        v25 = *(_DWORD*)(v22 + 4);
        v22 += 64;
        v23[14] = v25;
        v23 += 16;
      } while (v24 != 0);
    }
    *(_DWORD*)(v17 + 308) = *(_QWORD*)(a1 + 632);
    *(_DWORD*)(v17 + 312) = *(_DWORD*)(a1 + 636);
    *(_DWORD*)(v17 + 316) = *(_QWORD*)(a1 + 640);
    *(_DWORD*)(v17 + 320) = *(_DWORD*)(a1 + 644);
    *(_DWORD*)(v17 + 324) = *(_QWORD*)(a1 + 648);
    *(_DWORD*)(v17 + 328) = *(_DWORD*)(a1 + 652);
    *(_DWORD*)(v17 + 332) = *(_QWORD*)(a1 + 656);
    *(_DWORD*)(v17 + 336) = *(_DWORD*)(a1 + 660);
    *(_DWORD*)(v17 + 340) = *(_QWORD*)(a1 + 664);
    *(_DWORD*)(v17 + 344) = *(_DWORD*)(a1 + 668);
    *(_DWORD*)(v17 + 348) = *(_QWORD*)(a1 + 672);
    *(_DWORD*)(v17 + 352) = *(_DWORD*)(a1 + 676);
    *(_DWORD*)(v17 + 356) = *(_QWORD*)(a1 + 680);
    *(_DWORD*)(v17 + 360) = *(_DWORD*)(a1 + 684);
    *(_DWORD*)(v17 + 364) = *(_QWORD*)(a1 + 688);
    *(_DWORD*)(v17 + 368) = *(_DWORD*)(a1 + 692);
    v20 = (float*)(v17 + 380);
    if (v7 != 0) {
      if ((unsigned __int64)v20 >= a1 + 1720 ||
          a1 + 696 >= (unsigned __int64)(v17 + 1404)) {
        v45 = -1024;
        do {
          v46 = a1 + v45;
          v48 = *(int32x4_t*)(a1 + v45 + 1720);
          v47 = *(int32x4_t*)(a1 + v45 + 1736);
          v49 = (float*)(v17 + v45);
          v45 += 128;
          v96.val[0] = vuzp1q_s32(v48, v47);
          v96.val[1] = vuzp2q_s32(v48, v47);
          vst2q_f32(v49 + 351, v96);
          v51 = *(int32x4_t*)(v46 + 1752);
          v50 = *(int32x4_t*)(v46 + 1768);
          v96.val[0] = vuzp1q_s32(v51, v50);
          v96.val[1] = vuzp2q_s32(v51, v50);
          vst2q_f32(v49 + 359, v96);
          v52 = (int32x4_t*)(v46 + 1784);
          v46 += 1816;
          v53 = v52[1];
          v96.val[0] = vuzp1q_s32(*v52, v53);
          v96.val[1] = vuzp2q_s32(*v52, v53);
          vst2q_f32(v49 + 367, v96);
          v54 = *(int32x4_t*)(v46 + 16);
          v96.val[0] = vuzp1q_s32(*(int32x4_t*)v46, v54);
          v96.val[1] = vuzp2q_s32(*(int32x4_t*)v46, v54);
          vst2q_f32(v49 + 375, v96);
        } while (v45 != 0);
      }
      else {
        v41 = a1 + 752;
        v42 = (_DWORD*)(v17 + 440);
        v43 = 128;
        do {
          v43 -= 8;
          *(v42 - 15) = *(_QWORD*)(v41 - 56);
          *(v42 - 14) = *(_DWORD*)(v41 - 52);
          *(v42 - 13) = *(_QWORD*)(v41 - 48);
          *(v42 - 12) = *(_DWORD*)(v41 - 44);
          *(v42 - 11) = *(_QWORD*)(v41 - 40);
          *(v42 - 10) = *(_DWORD*)(v41 - 36);
          *(v42 - 9) = *(_QWORD*)(v41 - 32);
          *(v42 - 8) = *(_DWORD*)(v41 - 28);
          *(v42 - 7) = *(_QWORD*)(v41 - 24);
          *(v42 - 6) = *(_DWORD*)(v41 - 20);
          *(v42 - 5) = *(_QWORD*)(v41 - 16);
          *(v42 - 4) = *(_DWORD*)(v41 - 12);
          *(v42 - 3) = *(_QWORD*)(v41 - 8);
          *(v42 - 2) = *(_DWORD*)(v41 - 4);
          *(v42 - 1) = *(_QWORD*)v41;
          v44 = *(_DWORD*)(v41 + 4);
          v41 += 64;
          *v42 = v44;
          v42 += 16;
        } while (v43 != 0);
      }
      if (v17 + 1404 >= (unsigned __int64)(a1 + 1976) ||
          a1 + 1720 >= (unsigned __int64)(v17 + 1660)) {
        v59 = *(int32x4_t*)(a1 + 1736);
        v60 = *(int32x4_t*)(a1 + 1720);
        v97.val[0] = vuzp1q_s32(v60, v59);
        v97.val[1] = vuzp2q_s32(v60, v59);
        vst2q_f32((float*)(v17 + 1404), v97);
        v61 = *(int32x4_t*)(a1 + 1768);
        v62 = *(int32x4_t*)(a1 + 1752);
        v97.val[0] = vuzp1q_s32(v62, v61);
        v97.val[1] = vuzp2q_s32(v62, v61);
        vst2q_f32((float*)(v17 + 1436), v97);
        v63 = *(int32x4_t*)(a1 + 1800);
        v64 = *(int32x4_t*)(a1 + 1784);
        v97.val[0] = vuzp1q_s32(v64, v63);
        v97.val[1] = vuzp2q_s32(v64, v63);
        vst2q_f32((float*)(v17 + 1468), v97);
        v65 = *(int32x4_t*)(a1 + 1832);
        v66 = *(int32x4_t*)(a1 + 1816);
        v97.val[0] = vuzp1q_s32(v66, v65);
        v97.val[1] = vuzp2q_s32(v66, v65);
        vst2q_f32((float*)(v17 + 1500), v97);
        v67 = *(int32x4_t*)(a1 + 1864);
        v68 = *(int32x4_t*)(a1 + 1848);
        v97.val[0] = vuzp1q_s32(v68, v67);
        v97.val[1] = vuzp2q_s32(v68, v67);
        vst2q_f32((float*)(v17 + 1532), v97);
        v69 = *(int32x4_t*)(a1 + 1896);
        v70 = *(int32x4_t*)(a1 + 1880);
        v97.val[0] = vuzp1q_s32(v70, v69);
        v97.val[1] = vuzp2q_s32(v70, v69);
        vst2q_f32((float*)(v17 + 1564), v97);
        v71 = *(int32x4_t*)(a1 + 1928);
        v72 = *(int32x4_t*)(a1 + 1912);
        v97.val[0] = vuzp1q_s32(v72, v71);
        v97.val[1] = vuzp2q_s32(v72, v71);
        vst2q_f32((float*)(v17 + 1596), v97);
        v73 = *(int32x4_t*)(a1 + 1960);
        v74 = *(int32x4_t*)(a1 + 1944);
        v97.val[0] = vuzp1q_s32(v74, v73);
        v97.val[1] = vuzp2q_s32(v74, v73);
        vst2q_f32((float*)(v17 + 1628), v97);
        v20 = (float*)(v17 + 1660);
        if (v5 == 0) {
          goto LABEL_47;
        }
      }
      else {
        v55 = a1 + 1776;
        v56 = (_DWORD*)(v17 + 1464);
        v57 = 32;
        do {
          v57 -= 8;
          *(v56 - 15) = *(_QWORD*)(v55 - 56);
          *(v56 - 14) = *(_DWORD*)(v55 - 52);
          *(v56 - 13) = *(_QWORD*)(v55 - 48);
          *(v56 - 12) = *(_DWORD*)(v55 - 44);
          *(v56 - 11) = *(_QWORD*)(v55 - 40);
          *(v56 - 10) = *(_DWORD*)(v55 - 36);
          *(v56 - 9) = *(_QWORD*)(v55 - 32);
          *(v56 - 8) = *(_DWORD*)(v55 - 28);
          *(v56 - 7) = *(_QWORD*)(v55 - 24);
          *(v56 - 6) = *(_DWORD*)(v55 - 20);
          *(v56 - 5) = *(_QWORD*)(v55 - 16);
          *(v56 - 4) = *(_DWORD*)(v55 - 12);
          *(v56 - 3) = *(_QWORD*)(v55 - 8);
          *(v56 - 2) = *(_DWORD*)(v55 - 4);
          *(v56 - 1) = *(_QWORD*)v55;
          v58 = *(_DWORD*)(v55 + 4);
          v55 += 64;
          *v56 = v58;
          v56 += 16;
        } while (v57 != 0);
        v20 = (float*)(v17 + 1660);
        if (v5 == 0) {
          goto LABEL_47;
        }
      }
      if ((unsigned __int64)v20 >= a1 + 2232 ||
          a1 + 1976 >= (unsigned __int64)(v17 + 1916)) {
        v79 = *(int32x4_t*)(a1 + 1992);
        v80 = *(int32x4_t*)(a1 + 1976);
        v98.val[0] = vuzp1q_s32(v80, v79);
        v98.val[1] = vuzp2q_s32(v80, v79);
        vst2q_f32(v20, v98);
        v81 = *(int32x4_t*)(a1 + 2024);
        v82 = *(int32x4_t*)(a1 + 2008);
        v98.val[0] = vuzp1q_s32(v82, v81);
        v98.val[1] = vuzp2q_s32(v82, v81);
        vst2q_f32((float*)(v17 + 1692), v98);
        v83 = *(int32x4_t*)(a1 + 2056);
        v84 = *(int32x4_t*)(a1 + 2040);
        v98.val[0] = vuzp1q_s32(v84, v83);
        v98.val[1] = vuzp2q_s32(v84, v83);
        vst2q_f32((float*)(v17 + 1724), v98);
        v85 = *(int32x4_t*)(a1 + 2088);
        v86 = *(int32x4_t*)(a1 + 2072);
        v98.val[0] = vuzp1q_s32(v86, v85);
        v98.val[1] = vuzp2q_s32(v86, v85);
        vst2q_f32((float*)(v17 + 1756), v98);
        v87 = *(int32x4_t*)(a1 + 2120);
        v88 = *(int32x4_t*)(a1 + 2104);
        v98.val[0] = vuzp1q_s32(v88, v87);
        v98.val[1] = vuzp2q_s32(v88, v87);
        vst2q_f32((float*)(v17 + 1788), v98);
        v89 = *(int32x4_t*)(a1 + 2152);
        v90 = *(int32x4_t*)(a1 + 2136);
        v98.val[0] = vuzp1q_s32(v90, v89);
        v98.val[1] = vuzp2q_s32(v90, v89);
        vst2q_f32((float*)(v17 + 1820), v98);
        v91 = *(int32x4_t*)(a1 + 2184);
        v92 = *(int32x4_t*)(a1 + 2168);
        v98.val[0] = vuzp1q_s32(v92, v91);
        v98.val[1] = vuzp2q_s32(v92, v91);
        vst2q_f32((float*)(v17 + 1852), v98);
        v93 = *(int32x4_t*)(a1 + 2216);
        v94 = *(int32x4_t*)(a1 + 2200);
        v98.val[0] = vuzp1q_s32(v94, v93);
        v98.val[1] = vuzp2q_s32(v94, v93);
        vst2q_f32((float*)(v17 + 1884), v98);
      }
      else {
        v75 = a1 + 2032;
        v76 = (_DWORD*)(v17 + 1720);
        v77 = 32;
        do {
          v77 -= 8;
          *(v76 - 15) = *(_QWORD*)(v75 - 56);
          *(v76 - 14) = *(_DWORD*)(v75 - 52);
          *(v76 - 13) = *(_QWORD*)(v75 - 48);
          *(v76 - 12) = *(_DWORD*)(v75 - 44);
          *(v76 - 11) = *(_QWORD*)(v75 - 40);
          *(v76 - 10) = *(_DWORD*)(v75 - 36);
          *(v76 - 9) = *(_QWORD*)(v75 - 32);
          *(v76 - 8) = *(_DWORD*)(v75 - 28);
          *(v76 - 7) = *(_QWORD*)(v75 - 24);
          *(v76 - 6) = *(_DWORD*)(v75 - 20);
          *(v76 - 5) = *(_QWORD*)(v75 - 16);
          *(v76 - 4) = *(_DWORD*)(v75 - 12);
          *(v76 - 3) = *(_QWORD*)(v75 - 8);
          *(v76 - 2) = *(_DWORD*)(v75 - 4);
          *(v76 - 1) = *(_QWORD*)v75;
          v78 = *(_DWORD*)(v75 + 4);
          v75 += 64;
          *v76 = v78;
          v76 += 16;
        } while (v77 != 0);
      }
      v20 = (float*)(v17 + 1916);
    }
  }
LABEL_47:
  *(_QWORD*)(a1 + 11240) = v20;
  return result;
}

long double SdkHr_6890f0(__int64* a1)
{
  __int64 v1;
  int v2;
  int v3;
  char* v4;
  int v5;
  int v6;
  int v7;
  __int64* v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  long double result;
  unsigned __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64* v30;
  int v31;
  __int64 v32;
  __int64 v33;

  v1 = *a1;
  v32 = 0;
  v33 = 0;
  v2 = *(_DWORD*)(v1 + 328);
  if (v2 == 52928) {
    v3 = 196608;
    v4 = (char*)&v32 + 4;
    v5 = 0;
    v6 = 0;
    v7 = 16777218;
    LODWORD(v33) = 5243136;
    v8 = &v32;
  }
  else {
    v3 = 0;
    v6 = 48;
    v5 = 67305472;
    v8 = &v33;
    v4 = (char*)&v33 + 4;
    v7 = 32832;
  }
  *(_DWORD*)v4 = *((unsigned __int16*)v4 + 1) << 16;
  *(_DWORD*)v8 = *((unsigned __int16*)v8 + 1) << 16;
  v9 = *((_DWORD*)a1 + 8);
  if (v2 == 52928) {
    v10 = *(_DWORD*)((char*)a1 + 25);
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = *((_DWORD*)a1 + 9) & 0x1FFFFFF;
    v15 = 11;
    v16 = 65537;
    v17 = 769;
    v18 = 589824;
  }
  else {
    v12 = *((_DWORD*)a1 + 8);
    v9 = *(_DWORD*)((char*)a1 + 25);
    v6 |= 0x10000u;
    v3 = 65537;
    v11 = 768;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v10 = 0;
    v13 = (unsigned __int8)*((_DWORD*)a1 + 9) | 0x40880000;
    v14 = 9;
  }
  v19 = *(_QWORD*)(v1 + 11240);
  if ((unsigned __int64)(v19 + 268) > *(_QWORD*)(v1 + 11248)) {
    v30 = a1;
    v31 = v9;
    v20 = v12;
    v28 = v18;
    v29 = v6;
    v26 = v14;
    v27 = v17;
    SdkRoutine_64b750(v1 + 11240, v19,
                      4LL * (unsigned int)(*(_DWORD*)(v1 + 11344) + 67));
    v14 = v26;
    v17 = v27;
    v18 = v28;
    v6 = v29;
    v12 = v20;
    a1 = v30;
    v9 = v31;
    v19 = *(_QWORD*)(v1 + 11240);
  }
  *(_QWORD*)v19 = 0x10A0422E80LL;
  v22 = a1[3];
  *(_QWORD*)(v19 + 20) = 0;
  *(_QWORD*)(v19 + 12) = 0;
  *(_DWORD*)(v19 + 28) = v7;
  *(_QWORD*)(v19 + 32) = 0;
  *(_QWORD*)(v19 + 40) = 0;
  *(_DWORD*)(v19 + 48) = v15;
  *(_DWORD*)(v19 + 52) = v18;
  *(_DWORD*)(v19 + 56) = v5;
  *(_DWORD*)(v19 + 60) = v10;
  *(_DWORD*)(v19 + 72) = v9;
  *(_DWORD*)(v19 + 76) = v14;
  *(_DWORD*)(v19 + 80) = 0;
  *(_DWORD*)(v19 + 84) = v6;
  *(_DWORD*)(v19 + 88) = v3;
  *(_DWORD*)(v19 + 92) = v11;
  *(_DWORD*)(v19 + 8) = v22 >> 8;
  v23 = v33;
  *(_DWORD*)(v19 + 64) = HIDWORD(v33);
  *(_DWORD*)(v19 + 68) = v23;
  v24 = v32;
  *(_OWORD*)(v19 + 180) = 0u;
  v25 = v19 + 180;
  *(_QWORD*)(v25 - 84) = 0;
  *(_DWORD*)(v25 - 76) = 0;
  *(_DWORD*)(v25 - 72) = v12;
  *(_DWORD*)(v25 - 68) = v13;
  *(_OWORD*)(v25 - 64) = 0u;
  *(_OWORD*)(v25 - 48) = 0u;
  *(_DWORD*)(v25 - 32) = v16;
  *(_DWORD*)(v25 - 28) = v17;
  *(_QWORD*)(v25 - 24) = 0;
  *(_QWORD*)(v25 - 16) = 0;
  *(_QWORD*)(v25 + 80) = 0;
  *(_OWORD*)(v25 + 16) = 0u;
  *(_OWORD*)(v25 + 32) = 0u;
  *(_OWORD*)(v25 + 48) = 0u;
  *(_OWORD*)(v25 + 64) = 0u;
  *(_DWORD*)(v25 - 8) = HIDWORD(v24);
  *(_DWORD*)(v25 - 4) = v24;
  *(_QWORD*)(*a1 + 11240) = v25 + 88;
  *(_OWORD*)&result = 0u;
  return result;
}

__int64 SdkHr_694e60(__int64 result, int a2, __int64 a3)
{
  int v3;
  unsigned int** v6;
  int v7;
  unsigned int* v8;
  unsigned int v9;
  int* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  _DWORD* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int* v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  unsigned int* v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  bool v37;
  __int64 v38;
  float32x4_t* v39;
  const float* v40;
  __int64 v41;
  __int64 v42;
  const float* v43;
  __int64 v44;
  int* v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  unsigned int* v49;
  unsigned int v50;
  float32x4_t v51;

  v3 = a2 & 1;
  v6 = (unsigned int**)result;
  v7 = v3 + a2;
  v8 = *(unsigned int**)result;
  v9 = 2 * v7 + 4;
  if (*(_QWORD*)result + 4 * (unsigned __int64)v9 > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, v8, 4LL * (*(_DWORD*)(result + 104) + v9));
    v8 = *v6;
  }
  v8[1] = v7 / 2;
  v10 = (int*)(v8 + 2);
  if (a2 < 1) {
    v14 = 0;
    v13 = 0;
  }
  else {
    v11 = a2 & 3;
    if ((unsigned int)a2 >= 4) {
      v15 = (_DWORD*)(a3 + 16);
      v12 = 0;
      v13 = 0;
      v14 = 0;
      do {
        v16 = *(v15 - 3);
        v17 = 1 << v12;
        if (v16 == 0) {
          v17 = 0;
        }
        *v10 = *(v15 - 4) & 0xFFF | 0x1000;
        v18 = v17 | v13;
        if (v16 != 0) {
          v14 = v12 + 1;
        }
        v19 = 1 << (v12 + 1);
        if (*(v15 - 1) != 0) {
          v14 = v12 + 2;
        }
        else {
          v19 = 0;
        }
        v10[1] = *(v15 - 2) & 0xFFF | 0x1000;
        v20 = 1 << (v12 + 2);
        v21 = v12 + 3;
        v12 += 4;
        if (v15[1] != 0) {
          v14 = v21;
        }
        else {
          v20 = 0;
        }
        v10[2] = *v15 & 0xFFF | 0x1000;
        v22 = v20 | v19 | v18;
        v23 = v15[2];
        v24 = v15[3];
        v15 += 8;
        result = v23 & 0xFFF | 0x1000u;
        v25 = 1 << v21;
        if (v24 != 0) {
          v14 = v12;
        }
        else {
          v25 = 0;
        }
        v10[3] = result;
        v10 += 4;
        v13 = v25 | v22;
      } while (v12 != (a2 & 0x7FFFFFFC));
    }
    else {
      v12 = 0;
      v13 = 0;
      v14 = 0;
    }
    if ((a2 & 3) != 0) {
      v26 = (int*)(a3 + 8 * v12 + 4);
      do {
        v27 = *(v26 - 1);
        v28 = *v26;
        v26 += 2;
        v29 = v27 & 0xFFF | 0x1000;
        v30 = 1 << v12;
        if (v28 != 0) {
          v14 = v12 + 1;
        }
        else {
          v30 = 0;
        }
        --v11;
        LODWORD(v12) = v12 + 1;
        v13 |= v30;
        *v10++ = v29;
      } while (v11 != 0);
    }
  }
  if (v3 != 0) {
    *v10++ = 0;
  }
  v31 = v14 & 1;
  v32 = v31 + v14;
  *v10 = (int)(v31 + v14) / 2;
  v10[1] = v13;
  v33 = (unsigned int*)(v10 + 2);
  if ((int)v14 >= 1) {
    v34 = v14;
    if (v14 > 0xC &&
        ((v35 = a3 + 8LL * v14, v36 = (unsigned __int64)&v10[v14 + 2],
          (unsigned __int64)v33 < v35)
             ? (v37 = a3 + 4 >= v36)
             : (v37 = true),
         v37)) {
      v38 = v34 & 7;
      v39 = (float32x4_t*)(v10 + 6);
      if ((v34 & 7) == 0) {
        v38 = 8;
      }
      v40 = (const float*)(a3 + 36);
      v41 = v34 - v38;
      v33 += v41;
      v42 = v41;
      do {
        v43 = v40 - 8;
        v51 = vld2q_f32(v40).val[0];
        v40 += 16;
        v42 -= 8;
        v39[-1] = vld2q_f32(v43).val[0];
        *v39 = v51;
        v39 += 2;
      } while (v42 != 0);
    }
    else {
      v41 = 0;
    }
    v44 = ((_BYTE)v34 - (_BYTE)v41) & 7;
    if ((((_BYTE)v34 - (_BYTE)v41) & 7) != 0) {
      v45 = (int*)(a3 + 8 * v41 + 4);
      v46 = v41 + v44;
      do {
        v47 = *v45;
        v45 += 2;
        --v44;
        *v33++ = v47;
      } while (v44 != 0);
    }
    else {
      v46 = v41;
    }
    if ((unsigned __int64)(v41 - v34) <= 0xFFFFFFFFFFFFFFF8LL) {
      v48 = v34 - v46;
      v49 = (unsigned int*)(a3 + 8 * v46 + 36);
      do {
        v48 -= 8;
        *v33 = *(v49 - 8);
        v33[1] = *(v49 - 6);
        v33[2] = *(v49 - 4);
        v33[3] = *(v49 - 2);
        v33[4] = *v49;
        v33[5] = v49[2];
        v33[6] = v49[4];
        v50 = v49[6];
        v49 += 16;
        v33[7] = v50;
        v33 += 8;
      } while (v48 != 0);
    }
  }
  if (v31 != 0) {
    *v33++ = 0;
  }
  *v8 = (((v32 + v7) << 16) + 196608) & 0x1FFF0000 | 0xA0000E9A;
  *v6 = v33;
  return result;
}

__int64 SdkHr_695480(__int64 result, __int64 a2, int a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int32x4_t v11;
  int32x4_t v12;
  __int64 v13;
  int32x4_t* v14;
  int32x4_t v15;
  int32x4_t v16;
  __int64 v17;
  int* v18;
  int v19;
  int v20;
  unsigned int* v21;

  v4 = result;
  v5 = *(_QWORD*)(a2 + 8LL * a3 + 40);
  v6 = *(unsigned int*)(v5 + 76);
  if ((_DWORD)v6 == 0) {
    v10 = -65536;
    goto LABEL_13;
  }
  v7 = *(unsigned int*)(v5 + 72);
  if ((unsigned int)v6 < 8) {
    v8 = 0;
    v9 = -1;
    goto LABEL_8;
  }
  ((uint64_t*)&v11)[0] = -1;
  ((uint64_t*)&v11)[1] = -1;
  ((uint64_t*)&v12)[0] = -1;
  ((uint64_t*)&v12)[1] = -1;
  v8 = (unsigned int)v6 & 0xFFFFFFF8;
  v13 = v8;
  v14 = (int32x4_t*)(v7 + 4 * v6 + v5 + 16);
  do {
    v15 = v14[-1];
    v16 = *v14;
    v13 -= 8;
    v14 += 2;
    v11 = vmaxq_s32(v11, v15);
    v12 = vmaxq_s32(v12, v16);
  } while (v13 != 0);
  v9 = vmaxvq_s32(vmaxq_s32(v11, v12));
  if (v8 != v6) {
  LABEL_8:
    v17 = v6 - v8;
    v18 = (int*)(v5 + v7 + 4 * v8 + 4 * v6);
    do {
      v20 = *v18++;
      v19 = v20;
      if (v9 <= v20) {
        v9 = v19;
      }
      --v17;
    } while (v17 != 0);
  }
  v10 = v9 << 16;
LABEL_13:
  v21 = *(unsigned int**)(result + 11240);
  if ((unsigned __int64)(v21 + 1) > *(_QWORD*)(result + 11248)) {
    result =
        SdkRoutine_64b750(result + 11240, v21,
                          4LL * (unsigned int)(*(_DWORD*)(result + 11344) + 1));
    v21 = *(unsigned int**)(v4 + 11240);
  }
  *v21 = v10 | (SdkData_c924c4[a3] >> 2) | 0x80000000;
  *(_QWORD*)(v4 + 11240) = v21 + 1;
  return result;
}

int8x16_t SdkHr_69a660(__int64 a1, char a2)
{
  int8x16_t* v3;
  unsigned int v5;
  int8x16_t v6;
  int8x16_t v7;
  int8x16_t result;

  v3 = *(int8x16_t**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 64LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, v3, 4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 16));
    v3 = *(int8x16_t**)a1;
  }
  if (a2 != 0) {
    v5 = -2147418112;
  }
  else {
    v5 = 0x80000000;
  }
  v6 = vdupq_n_s32(v5);
  *v3 = vorrq_s8(v6, (int8x16_t)SdkData_bb44f0);
  v3[1] = vorrq_s8(v6, (int8x16_t)SdkData_bb3770);
  v7 = vorrq_s8(v6, (int8x16_t)SdkData_bb3560);
  result = vorrq_s8(v6, (int8x16_t)SdkData_bb4ee0);
  v3[2] = v7;
  v3[3] = result;
  *(_QWORD*)a1 = v3 + 4;
  return result;
}

int32x4_t SdkHr_6a0500(__int64 a1, int a2, int a3, int a4)
{
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int32x4_t result;

  v7 = SdkRoutine_6a0be0();
  v8 = *(_QWORD*)v7;
  v9 = (__int64*)v7;
  if ((unsigned __int64)(*(_QWORD*)v7 + 172LL) > *(_QWORD*)(v7 + 8)) {
    SdkRoutine_64b750(v7, v8, 4LL * (unsigned int)(*(_DWORD*)(v7 + 104) + 43));
    v8 = *v9;
  }
  *(_OWORD*)v8 = SdkData_bb1a80;
  result = vdupq_n_s32(0x80002040);
  *(_DWORD*)(v8 + 32) = 536944964;
  *(_DWORD*)(v8 + 36) = a2;
  *(_DWORD*)(v8 + 16) = 536947969;
  *(_DWORD*)(v8 + 20) = a3;
  *(_DWORD*)(v8 + 24) = 536947970;
  *(_DWORD*)(v8 + 28) = a4;
  *(int32x4_t*)(v8 + 40) = result;
  *(int32x4_t*)(v8 + 56) = result;
  *(int32x4_t*)(v8 + 72) = result;
  *(int32x4_t*)(v8 + 88) = result;
  *(int32x4_t*)(v8 + 104) = result;
  *(int32x4_t*)(v8 + 120) = result;
  *(int32x4_t*)(v8 + 136) = result;
  *(int32x4_t*)(v8 + 152) = result;
  *(_DWORD*)(v8 + 168) = -2147475373;
  *v9 = v8 + 172;
  return result;
}

#pragma GCC visibility pop
