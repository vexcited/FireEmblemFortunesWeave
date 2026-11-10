#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float* NE10_fft_generic_int32_neonintrinsic_212d40(float* result,
                                                   const float* a2, int a3,
                                                   unsigned int a4);
float* NE10_fft_generic_int32_neonintrinsic_215920(float* result, __int64 a2,
                                                   __int64 a3, int a4, int a5);
float* NE10_fft_generic_int32_neonintrinsic_215f20(float* result,
                                                   const float* a2, int a3,
                                                   unsigned int a4);

float* NE10_fft_generic_int32_neonintrinsic_212d40(float* result,
                                                   const float* a2, int a3,
                                                   unsigned int a4)
{
  int v4;
  __int64 v5;
  int32x4_t v6;
  unsigned int v7;
  const float* v8;
  int32x4_t v9;
  int32x4_t v10;
  const float* v11;
  unsigned int v12;
  const float* v13;
  int32x4_t v14;
  const float* v15;
  int32x4_t v16;
  int32x4_t v17;
  const float* v18;
  int32x4_t v19;
  float* v20;
  float32x4x2_t v21;
  float32x4x2_t v22;
  float32x4x2_t v23;
  float32x4x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;

  if (a3 >= 1) {
    v4 = a3 & 3;
    v5 = (__int64)(int)(a4 + (a4 >> 31)) >> 1;
    if ((a3 & 3) != 0) {
      ((uint64_t*)&v6)[0] = 0x4000000040000000LL;
      ((uint64_t*)&v6)[1] = 0x4000000040000000LL;
      v7 = a3 & 0xFFFFFFFC;
      do {
        v8 = &a2[8 * v5];
        v26 = vld2q_f32(a2);
        a2 += 8;
        --v4;
        v31 = vld2q_f32(v8);
        v9 = vqrdmulhq_s32(v31.val[0], v6);
        v31.val[0] = vqrdmulhq_s32(v31.val[1], v6);
        v31.val[1] = vqrdmulhq_s32(v26.val[0], v6);
        v26.val[0] = vqrdmulhq_s32(v26.val[1], v6);
        v36.val[0] = vaddq_s32(v31.val[1], v9);
        v36.val[1] = vaddq_s32(v26.val[0], v31.val[0]);
        vst2q_f32(result, v36);
        v21.val[0] = vsubq_s32(v31.val[1], v9);
        v21.val[1] = vsubq_s32(v26.val[0], v31.val[0]);
        vst2q_f32(result + 8, v21);
        result += 16;
      } while (v4 != 0);
      if ((unsigned int)a3 < 4) {
        return result;
      }
    }
    else {
      v7 = a3;
      if ((unsigned int)a3 < 4) {
        return result;
      }
    }
    ((uint64_t*)&v10)[0] = 0x4000000040000000LL;
    ((uint64_t*)&v10)[1] = 0x4000000040000000LL;
    v11 = &a2[8 * v5];
    v12 = v7 - 1;
    v13 = a2 + 16;
    do {
      v12 -= 4;
      v27 = vld2q_f32(v13 - 16);
      v32 = vld2q_f32(v11);
      v14 = vqrdmulhq_s32(v32.val[0], v10);
      v32.val[0] = vqrdmulhq_s32(v32.val[1], v10);
      v32.val[1] = vqrdmulhq_s32(v27.val[0], v10);
      v27.val[0] = vqrdmulhq_s32(v27.val[1], v10);
      v37.val[0] = vaddq_s32(v32.val[1], v14);
      v37.val[1] = vaddq_s32(v27.val[0], v32.val[0]);
      vst2q_f32(result, v37);
      v22.val[0] = vsubq_s32(v32.val[1], v14);
      v22.val[1] = vsubq_s32(v27.val[0], v32.val[0]);
      vst2q_f32(result + 8, v22);
      v28 = vld2q_f32(v13 - 8);
      v33 = vld2q_f32(v11 + 8);
      v15 = v13;
      v13 += 32;
      v16 = vqrdmulhq_s32(v33.val[0], v10);
      v33.val[0] = vqrdmulhq_s32(v33.val[1], v10);
      v33.val[1] = vqrdmulhq_s32(v28.val[0], v10);
      v28.val[0] = vqrdmulhq_s32(v28.val[1], v10);
      v37.val[0] = vaddq_s32(v33.val[1], v16);
      v37.val[1] = vaddq_s32(v28.val[0], v33.val[0]);
      vst2q_f32(result + 16, v37);
      v23.val[0] = vsubq_s32(v33.val[1], v16);
      v23.val[1] = vsubq_s32(v28.val[0], v33.val[0]);
      vst2q_f32(result + 24, v23);
      v29 = vld2q_f32(v15);
      v34 = vld2q_f32(v11 + 16);
      v17 = vqrdmulhq_s32(v34.val[0], v10);
      v34.val[0] = vqrdmulhq_s32(v34.val[1], v10);
      v34.val[1] = vqrdmulhq_s32(v29.val[0], v10);
      v29.val[0] = vqrdmulhq_s32(v29.val[1], v10);
      v37.val[0] = vaddq_s32(v34.val[1], v17);
      v37.val[1] = vaddq_s32(v29.val[0], v34.val[0]);
      vst2q_f32(result + 32, v37);
      v24.val[0] = vsubq_s32(v34.val[1], v17);
      v24.val[1] = vsubq_s32(v29.val[0], v34.val[0]);
      vst2q_f32(result + 40, v24);
      v18 = v11 + 24;
      v11 += 32;
      v30 = vld2q_f32(v15 + 8);
      v35 = vld2q_f32(v18);
      v19 = vqrdmulhq_s32(v35.val[0], v10);
      v35.val[0] = vqrdmulhq_s32(v35.val[1], v10);
      v35.val[1] = vqrdmulhq_s32(v30.val[0], v10);
      v30.val[0] = vqrdmulhq_s32(v30.val[1], v10);
      v37.val[0] = vaddq_s32(v35.val[1], v19);
      v37.val[1] = vaddq_s32(v30.val[0], v35.val[0]);
      vst2q_f32(result + 48, v37);
      v20 = result + 56;
      result += 64;
      v25.val[0] = vsubq_s32(v35.val[1], v19);
      v25.val[1] = vsubq_s32(v30.val[0], v35.val[0]);
      vst2q_f32(v20, v25);
    } while (v12 < 0xFFFFFFFE);
  }
  return result;
}

float* NE10_fft_generic_int32_neonintrinsic_215920(float* result, __int64 a2,
                                                   __int64 a3, int a4, int a5)
{

#pragma clang fp contract(off)
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  int v13;
  const float* v14;
  float* v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  const float* v19;
  float* v20;
  float* v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int v26;
  unsigned __int64 v27;
  const float* v28;
  float* v29;
  float* v30;
  float* v31;
  const float* v32;
  int32x4_t v33;
  int32x4_t v34;
  int32x4_t v35;
  const float* v36;
  float* v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  int32x4_t v41;
  const float* v42;
  const float* v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x4_t v50;
  int32x4_t v51;
  int v52;
  int v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  int* v58;
  _DWORD* v59;
  float v60;
  int v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  int v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  int v78;
  int v79;
  float32x4x2_t v80;
  float32x4x2_t v81;
  float32x4x2_t v82;
  float32x4x2_t v83;
  float32x4x2_t v84;
  float32x4x2_t v85;
  float32x4x2_t v86;
  float32x4x2_t v87;
  float32x4x2_t v88;
  float32x4x2_t v89;
  float32x4x2_t v90;
  float32x4x2_t v91;
  float32x4x2_t v92;
  float32x4x2_t v93;
  float32x4x2_t v94;
  float32x4x2_t v95;
  float32x4x2_t v96;
  float32x4x2_t v97;
  float32x4x2_t v98;
  float32x4x2_t v99;
  float32x4x2_t v100;
  float32x4x2_t v101;
  float32x4x2_t v102;
  float32x4x2_t v103;
  float32x4x2_t v104;
  float32x4x2_t v105;
  float32x4x2_t v106;
  float32x4x2_t v107;
  float32x4x2_t v108;
  float32x4x2_t v109;
  float32x4x2_t v110;

  v5 = 2 * a5;
  v78 = 2 * a5;
  if (a4 >= 1) {
    v6 = a5 + 3;
    if (a5 >= 0) {
      v6 = a5;
    }
    if (a5 >= 4) {
      v7 = v6 >> 2;
      v8 = a5 & 0x7FFFFFFC;
      v9 = 3 * a5;
      v10 = 8LL * a5;
      v79 = (v6 >> 2) - 1;
      v11 = 8LL * v5;
      do {
        if ((v7 & 1) != 0) {
          v90 = vld2q_f32((const float*)a2);
          v14 = (const float*)(a3 + 8LL * v5);
          v15 = &result[2 * v9];
          v93 = vld2q_f32((const float*)(a2 + 32));
          v16 = vtrn1q_s32(v90.val[0], v93.val[0]);
          v96 = vld2q_f32((const float*)(a2 + 64));
          v99 = vld2q_f32((const float*)(a2 + 96));
          v17 = vtrn2q_s32(v90.val[0], v93.val[0]);
          v18 = vtrn1q_s32(v90.val[1], v93.val[1]);
          v90.val[0] = vtrn2q_s32(v90.val[1], v93.val[1]);
          v19 = (const float*)(a3 + 8LL * a5);
          a2 += 128;
          v90.val[1] = vtrn1q_s32(v96.val[0], v99.val[0]);
          v93.val[0] = vtrn2q_s32(v96.val[0], v99.val[0]);
          v93.val[1] = vtrn1q_s32(v96.val[1], v99.val[1]);
          v96.val[0] = vtrn2q_s32(v96.val[1], v99.val[1]);
          v100 = vld2q_f32((const float*)a3);
          a3 += 32;
          v105 = vld2q_f32(v19);
          v108 = vld2q_f32(v14);
          v20 = &result[2 * a5];
          v21 = &result[2 * v5];
          v96.val[1] = vzip2q_s64(v16, v90.val[1]);
          LANES128(v16).n128_u64[1] = LANES128(v90.val[1]).n128_u64[0];
          v90.val[1] = vzip2q_s64(v17, v93.val[0]);
          LANES128(v17).n128_u64[1] = LANES128(v93.val[0]).n128_u64[0];
          v93.val[0] = vzip2q_s64(v18, v93.val[1]);
          LANES128(v18).n128_u64[1] = LANES128(v93.val[1]).n128_u64[0];
          v93.val[1] = vzip2q_s64(v90.val[0], v96.val[0]);
          LANES128(v90.val[0]).n128_u64[1] = LANES128(v96.val[0]).n128_u64[0];
          v93.val[0] = vnegq_s32(v93.val[0]);
          v93.val[1] = vnegq_s32(v93.val[1]);
          v90.val[0] = vnegq_s32(v90.val[0]);
          v96.val[0] = vqrdmulhq_s32(v17, v100.val[0]);
          v22 = vqrdmulhq_s32(v17, v100.val[1]);
          v23 = vqrdmulhq_s32(v90.val[0], v100.val[0]);
          v90.val[0] = vqrdmulhq_s32(v90.val[0], v100.val[1]);
          v100.val[1] = vqrdmulhq_s32(v93.val[0], v105.val[0]);
          v93.val[0] = vsubq_s32(vqrdmulhq_s32(v96.val[1], v105.val[0]),
                                 vqrdmulhq_s32(v93.val[0], v105.val[1]));
          v96.val[1] =
              vaddq_s32(v100.val[1], vqrdmulhq_s32(v96.val[1], v105.val[1]));
          v100.val[0] = vqrdmulhq_s32(v90.val[1], v108.val[0]);
          v90.val[0] = vsubq_s32(v96.val[0], v90.val[0]);
          v96.val[0] = vaddq_s32(v23, v22);
          v90.val[1] = vaddq_s32(vqrdmulhq_s32(v93.val[1], v108.val[0]),
                                 vqrdmulhq_s32(v90.val[1], v108.val[1]));
          v93.val[1] =
              vsubq_s32(v100.val[0], vqrdmulhq_s32(v93.val[1], v108.val[1]));
          v100.val[1] = vsubq_s32(v96.val[1], v18);
          v100.val[0] = vaddq_s32(v93.val[0], v16);
          v93.val[0] = vsubq_s32(v16, v93.val[0]);
          v96.val[1] = vaddq_s32(v96.val[1], v18);
          v24 = vaddq_s32(v90.val[1], v96.val[0]);
          v25 = vaddq_s32(v93.val[1], v90.val[0]);
          v90.val[0] = vsubq_s32(v90.val[0], v93.val[1]);
          v90.val[1] = vsubq_s32(v96.val[0], v90.val[1]);
          v80.val[0] = vaddq_s32(v25, v100.val[0]);
          v80.val[1] = vnegq_s32(vaddq_s32(v100.val[1], v24));
          vst2q_f32(result, v80);
          result += 8;
          v81.val[0] = vaddq_s32(v90.val[1], v93.val[0]);
          v81.val[1] = vaddq_s32(v90.val[0], v96.val[1]);
          vst2q_f32(v20, v81);
          v13 = v79;
          v82.val[0] = vsubq_s32(v100.val[0], v25);
          v82.val[1] = vsubq_s32(v24, v100.val[1]);
          vst2q_f32(v21, v82);
          v83.val[0] = vsubq_s32(v93.val[0], v90.val[1]);
          v83.val[1] = vsubq_s32(v96.val[1], v90.val[0]);
          vst2q_f32(v15, v83);
          if (v8 != 4) {
          LABEL_11:
            v26 = v13 + 2;
            v27 = 0;
            do {
              v91 = vld2q_f32((const float*)a2);
              v28 = (const float*)(a3 + v11 + 32 + v27);
              v29 = &result[v27 / 4];
              v97 = vld2q_f32((const float*)(a2 + 32));
              v30 = &result[(unsigned __int64)v10 / 4 + v27 / 4];
              v31 = &result[(unsigned __int64)v11 / 4 + v27 / 4];
              v94 = vld2q_f32((const float*)(a2 + 64));
              v32 = (const float*)(a3 + v10 + 32 + v27);
              v26 -= 2;
              v33 = vtrn1q_s32(v91.val[0], v97.val[0]);
              v101 = vld2q_f32((const float*)(a2 + 96));
              v34 = vtrn2q_s32(v91.val[0], v97.val[0]);
              v35 = vtrn1q_s32(v91.val[1], v97.val[1]);
              v91.val[0] = vtrn2q_s32(v91.val[1], v97.val[1]);
              v91.val[1] = vtrn1q_s32(v94.val[0], v101.val[0]);
              v97.val[0] = vtrn2q_s32(v94.val[0], v101.val[0]);
              v97.val[1] = vtrn1q_s32(v94.val[1], v101.val[1]);
              v94.val[0] = vtrn2q_s32(v94.val[1], v101.val[1]);
              v94.val[1] = vzip2q_s64(v33, v91.val[1]);
              LANES128(v33).n128_u64[1] = LANES128(v91.val[1]).n128_u64[0];
              v91.val[1] = vzip2q_s64(v34, v97.val[0]);
              LANES128(v34).n128_u64[1] = LANES128(v97.val[0]).n128_u64[0];
              v97.val[0] = vzip2q_s64(v35, v97.val[1]);
              LANES128(v35).n128_u64[1] = LANES128(v97.val[1]).n128_u64[0];
              v97.val[1] = vzip2q_s64(v91.val[0], v94.val[0]);
              LANES128(v91.val[0]).n128_u64[1] =
                  LANES128(v94.val[0]).n128_u64[0];
              v94.val[0] = vnegq_s32(v97.val[0]);
              v97.val[0] = vnegq_s32(v97.val[1]);
              v84 = vld2q_f32((const float*)(a3 + v27));
              v36 = (const float*)(a3 + v27 + 32);
              v106 = vld2q_f32((const float*)(a3 + v10 + v27));
              v91.val[0] = vnegq_s32(v91.val[0]);
              v109 = vld2q_f32((const float*)(a3 + v11 + v27));
              v37 = &result[2 * v9 + v27 / 4];
              v27 += 64LL;
              v38 = vqrdmulhq_s32(v91.val[0], v84.val[0]);
              v101.val[0] = vqrdmulhq_s32(v94.val[0], v106.val[0]);
              v94.val[0] = vsubq_s32(vqrdmulhq_s32(v94.val[1], v106.val[0]),
                                     vqrdmulhq_s32(v94.val[0], v106.val[1]));
              v94.val[1] = vaddq_s32(v101.val[0],
                                     vqrdmulhq_s32(v94.val[1], v106.val[1]));
              v101.val[0] = vqrdmulhq_s32(v97.val[0], v109.val[0]);
              v91.val[0] = vsubq_s32(vqrdmulhq_s32(v34, v84.val[0]),
                                     vqrdmulhq_s32(v91.val[0], v84.val[1]));
              v101.val[1] = vaddq_s32(v38, vqrdmulhq_s32(v34, v84.val[1]));
              v97.val[0] = vsubq_s32(vqrdmulhq_s32(v91.val[1], v109.val[0]),
                                     vqrdmulhq_s32(v97.val[0], v109.val[1]));
              v91.val[1] = vaddq_s32(v101.val[0],
                                     vqrdmulhq_s32(v91.val[1], v109.val[1]));
              v97.val[1] = vaddq_s32(v94.val[0], v33);
              v101.val[0] = vsubq_s32(v94.val[1], v35);
              v94.val[0] = vsubq_s32(v33, v94.val[0]);
              v94.val[1] = vaddq_s32(v94.val[1], v35);
              v39 = vaddq_s32(v97.val[0], v91.val[0]);
              v40 = vaddq_s32(v91.val[1], v101.val[1]);
              v91.val[0] = vsubq_s32(v91.val[0], v97.val[0]);
              v91.val[1] = vsubq_s32(v101.val[1], v91.val[1]);
              v41 = vsubq_s32(v97.val[1], v39);
              v106.val[0] = vsubq_s32(v40, v101.val[0]);
              v97.val[0] = vaddq_s32(v39, v97.val[1]);
              v97.val[1] = vnegq_s32(vaddq_s32(v101.val[0], v40));
              v101.val[0] = vaddq_s32(v91.val[1], v94.val[0]);
              v101.val[1] = vaddq_s32(v91.val[0], v94.val[1]);
              vst2q_f32(v29, v97);
              vst2q_f32(v30, v101);
              v85.val[0] = v41;
              v85.val[1] = v106.val[0];
              vst2q_f32(v31, v85);
              v86.val[0] = vsubq_s32(v94.val[0], v91.val[1]);
              v86.val[1] = vsubq_s32(v94.val[1], v91.val[0]);
              vst2q_f32(v37, v86);
              v92 = vld2q_f32((const float*)(a2 + 128));
              v42 = (const float*)(a2 + 160);
              v98 = vld2q_f32((const float*)(a2 + 192));
              v43 = (const float*)(a2 + 224);
              v107 = vld2q_f32(v32);
              v110 = vld2q_f32(v28);
              a2 += 256;
              v95 = vld2q_f32(v42);
              v102 = vld2q_f32(v43);
              v44 = vtrn1q_s32(v92.val[0], v95.val[0]);
              v45 = vtrn2q_s32(v92.val[0], v95.val[0]);
              v46 = vtrn1q_s32(v92.val[1], v95.val[1]);
              v92.val[0] = vtrn2q_s32(v92.val[1], v95.val[1]);
              v92.val[1] = vtrn1q_s32(v98.val[0], v102.val[0]);
              v95.val[0] = vtrn2q_s32(v98.val[0], v102.val[0]);
              v95.val[1] = vtrn1q_s32(v98.val[1], v102.val[1]);
              v98.val[0] = vtrn2q_s32(v98.val[1], v102.val[1]);
              v103 = vld2q_f32(v36);
              v98.val[1] = vzip2q_s64(v44, v92.val[1]);
              LANES128(v44).n128_u64[1] = LANES128(v92.val[1]).n128_u64[0];
              v92.val[1] = vzip2q_s64(v45, v95.val[0]);
              LANES128(v45).n128_u64[1] = LANES128(v95.val[0]).n128_u64[0];
              v95.val[0] = vzip2q_s64(v46, v95.val[1]);
              LANES128(v46).n128_u64[1] = LANES128(v95.val[1]).n128_u64[0];
              v95.val[1] = vzip2q_s64(v92.val[0], v98.val[0]);
              LANES128(v92.val[0]).n128_u64[1] =
                  LANES128(v98.val[0]).n128_u64[0];
              v95.val[0] = vnegq_s32(v95.val[0]);
              v95.val[1] = vnegq_s32(v95.val[1]);
              v92.val[0] = vnegq_s32(v92.val[0]);
              v98.val[0] = vqrdmulhq_s32(v45, v103.val[0]);
              v47 = vqrdmulhq_s32(v45, v103.val[1]);
              v48 = vqrdmulhq_s32(v92.val[0], v103.val[0]);
              v92.val[0] = vqrdmulhq_s32(v92.val[0], v103.val[1]);
              v103.val[1] = vqrdmulhq_s32(v95.val[0], v107.val[0]);
              v92.val[0] = vsubq_s32(v98.val[0], v92.val[0]);
              v103.val[0] = vaddq_s32(v48, v47);
              v95.val[0] = vsubq_s32(vqrdmulhq_s32(v98.val[1], v107.val[0]),
                                     vqrdmulhq_s32(v95.val[0], v107.val[1]));
              v98.val[0] = vaddq_s32(v103.val[1],
                                     vqrdmulhq_s32(v98.val[1], v107.val[1]));
              v98.val[1] = vqrdmulhq_s32(v92.val[1], v110.val[0]);
              v92.val[1] = vaddq_s32(vqrdmulhq_s32(v95.val[1], v110.val[0]),
                                     vqrdmulhq_s32(v92.val[1], v110.val[1]));
              v95.val[1] =
                  vsubq_s32(v98.val[1], vqrdmulhq_s32(v95.val[1], v110.val[1]));
              v103.val[1] = vsubq_s32(v98.val[0], v46);
              v98.val[1] = vaddq_s32(v95.val[0], v44);
              v95.val[0] = vsubq_s32(v44, v95.val[0]);
              v98.val[0] = vaddq_s32(v98.val[0], v46);
              v49 = vaddq_s32(v92.val[1], v103.val[0]);
              v50 = vaddq_s32(v95.val[1], v92.val[0]);
              v92.val[0] = vsubq_s32(v92.val[0], v95.val[1]);
              v92.val[1] = vsubq_s32(v103.val[0], v92.val[1]);
              v95.val[1] = vaddq_s32(v103.val[1], v49);
              v51 = vsubq_s32(v98.val[1], v50);
              v107.val[0] = vsubq_s32(v49, v103.val[1]);
              v98.val[1] = vaddq_s32(v50, v98.val[1]);
              v104.val[0] = vaddq_s32(v92.val[1], v95.val[0]);
              v104.val[1] = vaddq_s32(v92.val[0], v98.val[0]);
              v87.val[0] = v98.val[1];
              v87.val[1] = vnegq_s32(v95.val[1]);
              vst2q_f32(v29 + 8, v87);
              vst2q_f32(v30 + 8, v104);
              v88.val[0] = v51;
              v88.val[1] = v107.val[0];
              vst2q_f32(v31 + 8, v88);
              v89.val[0] = vsubq_s32(v95.val[0], v92.val[1]);
              v89.val[1] = vsubq_s32(v98.val[0], v92.val[0]);
              vst2q_f32(v37 + 8, v89);
            } while (v26 > 2);
            result = (float*)((char*)result + v27);
            a3 += v27;
          }
        }
        else {
          v13 = v7;
          if (v8 != 4) {
            goto LABEL_11;
          }
        }
        v12 = __OFSUB__(a4--, 1);
      } while (!((a4 < 0) ^ v12 | (a4 == 0)));
    }
  }
  if (a5 <= 0) {
    v52 = -(-a5 & 3);
  }
  else {
    v52 = a5 & 3;
  }
  if (v52 >= 1) {
    v53 = 3 * a5;
    v54 = 2LL * a5;
    v55 = v52 + 1;
    do {
      v56 = *(_QWORD*)(a2 + 8);
      v57 = *(_QWORD*)(a2 + 16);
      v58 = (int*)(a3 + v54 * 4);
      v59 = (_DWORD*)(a3 + 8LL * v78);
      v60 = *(float*)a3;
      v61 = *(_DWORD*)(a3 + 4);
      a3 += 8;
      --v55;
      v62 = *(_QWORD*)(a2 + 24);
      v63 = -(__int64)(v56 & 0xFFFFFFFF00000000LL);
      v64 = (int)v56 * (__int64)SLODWORD(v60);
      v65 = (int)v56 * (__int64)v61;
      v63 >>= 32;
      v66 = -(__int64)(v57 & 0xFFFFFFFF00000000LL) >> 32;
      v67 = -(__int64)(v62 & 0xFFFFFFFF00000000LL) >> 32;
      v68 = (int)v63 * (__int64)SLODWORD(v60);
      v69 = (int)v63 * (__int64)v61;
      v70 = *v58;
      LODWORD(v58) = v58[1];
      LODWORD(v69) = (v64 >> 31) - (v69 >> 31);
      LODWORD(v65) = (v65 >> 31) + (v68 >> 31);
      v71 = (int)v57 * (__int64)v70;
      v72 = (int)v57 * (__int64)(int)v58;
      v73 = (int)v66 * (__int64)v70;
      v74 = (int)v66 * (__int64)(int)v58;
      LODWORD(v58) = *v59;
      LODWORD(v59) = v59[1];
      LODWORD(v72) = (v72 >> 31) + (v73 >> 31);
      LODWORD(v74) = (v71 >> 31) - (v74 >> 31);
      v75 = (int)v62 * (__int64)(int)v58;
      v76 = (int)v67 * (__int64)(int)v58;
      v77 = (unsigned __int64)((int)v67 * (__int64)(int)v59) >> 31;
      LODWORD(v62) = ((unsigned __int64)((int)v62 * (__int64)(int)v59) >> 31) +
                     (v76 >> 31);
      LODWORD(v59) = *(_DWORD*)a2;
      LODWORD(v76) = *(_DWORD*)(a2 + 4);
      a2 += 32;
      LODWORD(v77) = (v75 >> 31) - v77;
      LODWORD(v73) = v72 - v76;
      LODWORD(v72) = v72 + v76;
      LODWORD(v76) = v65 + v62;
      LODWORD(v75) = v74 + (_DWORD)v59;
      LODWORD(v74) = (_DWORD)v59 - v74;
      LODWORD(v59) = v69 + v77;
      LODWORD(v69) = v69 - v77;
      LODWORD(v62) = v65 - v62;
      *(_QWORD*)result = (unsigned int)((_DWORD)v59 + v75) |
                         ((unsigned __int64)(unsigned int)-(v73 + v76) << 32);
      *(_QWORD*)&result[v54] =
          (unsigned int)(v62 + v74) |
          ((unsigned __int64)(unsigned int)(v69 + v72) << 32);
      *(_QWORD*)&result[2 * v78] =
          (unsigned int)(v75 - (_DWORD)v59) |
          ((unsigned __int64)(unsigned int)(v76 - v73) << 32);
      *(_QWORD*)&result[2 * v53] =
          (unsigned int)(v74 - v62) |
          ((unsigned __int64)(unsigned int)(v72 - v69) << 32);
      result += 2;
    } while (v55 > 1);
  }
  return result;
}

float* NE10_fft_generic_int32_neonintrinsic_215f20(float* result,
                                                   const float* a2, int a3,
                                                   unsigned int a4)
{
  int v4;
  __int64 v5;
  const float* v6;
  int32x4_t v7;
  int32x4_t v8;
  const float* v9;
  unsigned int v10;
  const float* v11;
  bool v12;
  float* v13;
  float32x4x2_t v14;
  float32x4x2_t v15;
  float32x4x2_t v16;
  float32x4x2_t v17;
  float32x4x2_t v18;
  float32x4x2_t v19;
  float32x4x2_t v20;
  float32x4x2_t v21;
  float32x4x2_t v22;
  float32x4x2_t v23;

  v4 = a3 - 1;
  if (a3 >= 1) {
    v5 = (__int64)(int)(a4 + (a4 >> 31)) >> 1;
    if ((a3 & 1) != 0) {
      v6 = &a2[8 * v5];
      v14 = vld2q_f32(a2);
      a2 += 8;
      ((uint64_t*)&v7)[0] = 0x4000000040000000LL;
      ((uint64_t*)&v7)[1] = 0x4000000040000000LL;
      v17 = vld2q_f32(v6);
      v14.val[0] = vqrdmulhq_s32(v14.val[0], v7);
      v17.val[0] = vqrdmulhq_s32(v17.val[0], v7);
      v14.val[1] = vqrdmulhq_s32(vnegq_s32(v14.val[1]), v7);
      v17.val[1] = vqrdmulhq_s32(vnegq_s32(v17.val[1]), v7);
      v20.val[0] = vaddq_s32(v14.val[0], v17.val[0]);
      v20.val[1] = vnegq_s32(vaddq_s32(v17.val[1], v14.val[1]));
      v22.val[0] = vsubq_s32(v14.val[0], v17.val[0]);
      v22.val[1] = vsubq_s32(v17.val[1], v14.val[1]);
      vst2q_f32(result, v20);
      vst2q_f32(result + 8, v22);
      result += 16;
      if (a3 == 1) {
        return result;
      }
    }
    else {
      v4 = a3;
      if (a3 == 1) {
        return result;
      }
    }
    ((uint64_t*)&v8)[0] = 0x4000000040000000LL;
    ((uint64_t*)&v8)[1] = 0x4000000040000000LL;
    v9 = a2 + 8;
    v10 = v4 - 1;
    v11 = &a2[8 * v5 + 8];
    do {
      v12 = v10 >= 2;
      v10 -= 2;
      v15 = vld2q_f32(v9 - 8);
      v18 = vld2q_f32(v11 - 8);
      v15.val[0] = vqrdmulhq_s32(v15.val[0], v8);
      v18.val[0] = vqrdmulhq_s32(v18.val[0], v8);
      v15.val[1] = vqrdmulhq_s32(vnegq_s32(v15.val[1]), v8);
      v18.val[1] = vqrdmulhq_s32(vnegq_s32(v18.val[1]), v8);
      v21.val[0] = vaddq_s32(v15.val[0], v18.val[0]);
      v23.val[0] = vsubq_s32(v15.val[0], v18.val[0]);
      v23.val[1] = vsubq_s32(v18.val[1], v15.val[1]);
      v21.val[1] = vnegq_s32(vaddq_s32(v18.val[1], v15.val[1]));
      vst2q_f32(result, v21);
      vst2q_f32(result + 8, v23);
      v16 = vld2q_f32(v9);
      v19 = vld2q_f32(v11);
      v11 += 16;
      v9 += 16;
      v19.val[0] = vqrdmulhq_s32(v19.val[0], v8);
      v16.val[0] = vqrdmulhq_s32(v16.val[0], v8);
      v19.val[1] = vqrdmulhq_s32(vnegq_s32(v19.val[1]), v8);
      v16.val[1] = vqrdmulhq_s32(vnegq_s32(v16.val[1]), v8);
      v21.val[0] = vaddq_s32(v16.val[0], v19.val[0]);
      v23.val[0] = vsubq_s32(v16.val[0], v19.val[0]);
      v23.val[1] = vsubq_s32(v19.val[1], v16.val[1]);
      v21.val[1] = vnegq_s32(vaddq_s32(v19.val[1], v16.val[1]));
      vst2q_f32(result + 16, v21);
      v13 = result + 24;
      result += 32;
      vst2q_f32(v13, v23);
    } while (v12);
  }
  return result;
}

#pragma GCC visibility pop
