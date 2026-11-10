#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern unsigned __int8 GameData_1b015a8[32];
float32x4_t physx_Gu_BucketPrunerNode_classifyBoxes(
    int* a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, float a9, float a10, char a11, int a12);

float32x4_t physx_Gu_BucketPrunerNode_classifyBoxes(
    int* a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, float a9, float a10, char a11, int a12)
{

#pragma clang fp contract(off)
  __int64 v12;
  float32x4_t* v13;
  __int64 v14;
  float* v15;
  __int64 v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float32x4_t v25;
  float32x4_t v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int* v32;
  int v33;
  int v34;
  __int64 v35;
  __int128* v36;
  __int64* v37;
  _DWORD* v38;
  __int64 v39;
  __int64 v40;
  __int128 v41;
  __int128 v42;
  __int128 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _OWORD* v47;
  _QWORD* v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  __int128 v53;
  int v54;
  int v55;
  __int64 v56;
  _OWORD* v57;
  __int64 v58;
  __int64 v59;
  _DWORD* v60;
  _QWORD* v61;
  __int128* v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  __int128 v66;
  __int128 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _OWORD* v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t result;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;

  *(_QWORD*)a1 = 0;
  *((_QWORD*)a1 + 1) = 0;
  a1[4] = 0;
  LANES128(v97).n128_u64[0] = 0xFE7FFFFFFE7FFFFFLL;
  LANES128(v97).n128_u64[1] = 4269801471LL;
  LANES128(v98).n128_u64[0] = 0xFE7FFFFFFE7FFFFFLL;
  LANES128(v98).n128_u64[1] = 4269801471LL;
  LANES128(v102).n128_u64[0] = 0x7E7FFFFF7E7FFFFFLL;
  LANES128(v102).n128_u64[1] = 2122317823;
  LANES128(v103).n128_u64[0] = 0x7E7FFFFF7E7FFFFFLL;
  LANES128(v103).n128_u64[1] = 2122317823;
  LANES128(v104).n128_u64[0] = 0x7E7FFFFF7E7FFFFFLL;
  LANES128(v104).n128_u64[1] = 2122317823;
  LANES128(v105).n128_u64[0] = 0x7E7FFFFF7E7FFFFFLL;
  LANES128(v105).n128_u64[1] = 2122317823;
  LANES128(v106).n128_u64[0] = 0x7E7FFFFF7E7FFFFFLL;
  LANES128(v106).n128_u64[1] = 2122317823;
  LANES128(v99).n128_u64[0] = 0xFE7FFFFFFE7FFFFFLL;
  LANES128(v99).n128_u64[1] = 4269801471LL;
  if (a12 == 1) {
    v12 = 2;
  }
  else {
    v12 = 1;
  }
  LANES128(v100).n128_u64[0] = 0xFE7FFFFFFE7FFFFFLL;
  LANES128(v100).n128_u64[1] = 4269801471LL;
  LANES128(v101).n128_u64[0] = 0xFE7FFFFFFE7FFFFFLL;
  LANES128(v101).n128_u64[1] = 4269801471LL;
  if (a2 != 0) {
    v13 = (float32x4_t*)(a3 + 16);
    v14 = a2;
    v15 = (float*)(a3 + 16 + 4 * v12);
    v16 = 16;
    if ((a11 & 1) == 0) {
      v16 = 0;
    }
    do {
      v17 = v13[-1];
      v18 = vsubq_f32(v17, *v13);
      v19 = vaddq_f32(v17, *v13);
      v20 = *(v15 - 4);
      v21 = *v15;
      v15 += 8;
      v22 = v16 | (4LL * ((float)(v20 - v21) > a10)) |
            (8LL * ((float)(v20 + v21) < a10));
      if (LANES128(v18).n128_f32[0] > a9) {
        ++v22;
      }
      --v14;
      v23 = GameData_1b015a8[v22 | (2LL * (LANES128(v19).n128_f32[0] < a9))];
      v24 = 16 * v23;
      LANES128(v13[-1]).n128_u32[3] = v23;
      v13 += 2;
      v25 = vminq_f32(*(&v102 + v23), v18);
      v26 = *(&v97 + v23);
      *(float32x4_t*)((char*)&v102 + v24) = v25;
      *(float32x4_t*)((char*)&v97 + v24) = vmaxq_f32(v26, v19);
      ++a1[v23];
    } while (v14 != 0);
    v27 = *a1;
    v28 = a1[1];
    v29 = a1[2];
    v30 = a1[3];
  }
  else {
    v30 = 0;
    v29 = 0;
    v28 = 0;
    v27 = 0;
  }
  v31 = v28 + v27;
  a1[5] = 0;
  a1[6] = v27;
  v32 = a1 + 5;
  v33 = v29 + v31;
  v34 = v30 + v33;
  a1[7] = v31;
  a1[8] = v33;
  a1[9] = v34;
  if (a2 != 0) {
    if (a2 == 1) {
      v35 = 0;
    LABEL_18:
      v62 = (__int128*)(a3 + 32 * v35);
      v63 = a5 + 28 * v35;
      v64 = (__int64*)(a4 + 16 * v35);
      v65 = *((unsigned int*)v62 + 3);
      v66 = *v62;
      v67 = v62[1];
      v68 = *v64;
      v69 = v64[1];
      v70 = (unsigned int)v32[v65];
      v71 = (_OWORD*)(a6 + 32 * v70);
      v72 = a8 + 28LL * (unsigned int)v70;
      v73 = (_QWORD*)(a7 + 16 * v70);
      v32[v65] = v70 + 1;
      v74 = *(_QWORD*)(v63 + 16);
      *v73 = v68;
      v73[1] = v69;
      *v71 = v66;
      v71[1] = v67;
      LODWORD(v66) = *(_DWORD*)(v63 + 24);
      *(_QWORD*)(v72 + 16) = v74;
      *(_DWORD*)(v72 + 24) = v66;
      LODWORD(v67) = *(_DWORD*)(v63 + 4);
      *(_DWORD*)v72 = *(_DWORD*)v63;
      *(_DWORD*)(v72 + 4) = v67;
      LODWORD(v67) = *(_DWORD*)(v63 + 12);
      *(_DWORD*)(v72 + 8) = *(_DWORD*)(v63 + 8);
      *(_DWORD*)(v72 + 12) = v67;
      goto LABEL_19;
    }
    v36 = (__int128*)(a3 + 48);
    v37 = (__int64*)(a4 + 16);
    v38 = (_DWORD*)(a5 + 28);
    v39 = 0;
    do {
      v40 = *((unsigned int*)v36 - 9);
      v41 = *(v36 - 3);
      v42 = *(v36 - 2);
      v39 -= 2;
      v43 = *(v36 - 1);
      v44 = (unsigned int)v32[v40];
      v45 = *(v37 - 2);
      v46 = *(v37 - 1);
      v32[v40] = v44 + 1;
      v47 = (_OWORD*)(a6 + 32 * v44);
      v48 = (_QWORD*)(a7 + 16 * v44);
      *v48 = v45;
      v48[1] = v46;
      *v47 = v41;
      v47[1] = v42;
      LODWORD(v41) = *(v38 - 1);
      LODWORD(v42) = *v38;
      v49 = a8 + 28LL * (unsigned int)v44;
      *(_QWORD*)(v49 + 16) = *(_QWORD*)(v38 - 3);
      *(_DWORD*)(v49 + 24) = v41;
      v50 = *(v38 - 6);
      *(_DWORD*)v49 = *(v38 - 7);
      *(_DWORD*)(v49 + 4) = v50;
      v51 = *(v38 - 4);
      *(_DWORD*)(v49 + 8) = *(v38 - 5);
      *(_DWORD*)(v49 + 12) = v51;
      v52 = *((unsigned int*)v36 - 1);
      v53 = *v36;
      v36 += 4;
      v55 = v38[3];
      v54 = v38[4];
      v56 = (unsigned int)v32[v52];
      v32[v52] = v56 + 1;
      v57 = (_OWORD*)(a6 + 32 * v56);
      v59 = *v37;
      v58 = v37[1];
      v37 += 4;
      *v57 = v43;
      v57[1] = v53;
      LODWORD(v41) = v38[5];
      LODWORD(v43) = v38[6];
      v60 = (_DWORD*)(a8 + 28LL * (unsigned int)v56);
      v61 = (_QWORD*)(a7 + 16 * v56);
      *v61 = v59;
      v61[1] = v58;
      v60[4] = v54;
      v60[5] = v41;
      v60[6] = v43;
      LODWORD(v41) = v38[1];
      LODWORD(v43) = v38[2];
      v38 += 14;
      *v60 = v42;
      v60[1] = v41;
      v60[2] = v43;
      v60[3] = v55;
    } while (-(__int64)(a2 & 0xFFFFFFFE) != v39);
    v35 = -v39;
    if ((a2 & 1) != 0) {
      goto LABEL_18;
    }
  }
LABEL_19:
  LANES128(v75).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v75).n128_u64[1] = 0x3F0000003F000000LL;
  v76 = vaddq_f32(v102, v97);
  v77 = vsubq_f32(v97, v102);
  v78 = vaddq_f32(v103, v98);
  v79 = vsubq_f32(v98, v103);
  v80 = v104;
  v81 = v105;
  a1[5] = 0;
  a1[6] = v27;
  a1[7] = v31;
  a1[8] = v33;
  a1[9] = v34;
  v82 = vmulq_f32(v76, v75);
  v83 = vmulq_f32(v77, v75);
  v84 = vmulq_f32(v78, v75);
  v85 = vmulq_f32(v79, v75);
  a1[14] = LANES128(v82).n128_i32[2];
  *((_QWORD*)a1 + 6) = LANES128(v82).n128_u64[0];
  *((_QWORD*)a1 + 8) = LANES128(v83).n128_u64[0];
  *((_QWORD*)a1 + 10) = LANES128(v84).n128_u64[0];
  *((_QWORD*)a1 + 12) = LANES128(v85).n128_u64[0];
  a1[18] = LANES128(v83).n128_i32[2];
  v86 = v99;
  v87 = v100;
  a1[22] = LANES128(v84).n128_i32[2];
  a1[26] = LANES128(v85).n128_i32[2];
  v88 = vmulq_f32(vaddq_f32(v80, v86), v75);
  v89 = vmulq_f32(vsubq_f32(v86, v80), v75);
  a1[30] = LANES128(v88).n128_i32[2];
  *((_QWORD*)a1 + 14) = LANES128(v88).n128_u64[0];
  *((_QWORD*)a1 + 16) = LANES128(v89).n128_u64[0];
  a1[34] = LANES128(v89).n128_i32[2];
  v90 = v106;
  v91 = vmulq_f32(vaddq_f32(v81, v87), v75);
  a1[38] = LANES128(v91).n128_i32[2];
  *((_QWORD*)a1 + 18) = LANES128(v91).n128_u64[0];
  v92 = vaddq_f32(v90, v101);
  v93 = vsubq_f32(v101, v90);
  v94 = vmulq_f32(vsubq_f32(v87, v81), v75);
  a1[42] = LANES128(v94).n128_i32[2];
  *((_QWORD*)a1 + 20) = LANES128(v94).n128_u64[0];
  v95 = vmulq_f32(v92, v75);
  result = vmulq_f32(v93, v75);
  a1[46] = LANES128(v95).n128_i32[2];
  *((_QWORD*)a1 + 22) = LANES128(v95).n128_u64[0];
  *((_QWORD*)a1 + 24) = LANES128(result).n128_u64[0];
  a1[50] = LANES128(result).n128_i32[2];
  return result;
}

#pragma GCC visibility pop
