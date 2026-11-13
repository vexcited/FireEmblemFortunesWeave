#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_58b5a0(__int64 result, float*, float);
__int64 memset(__int64, int, unsigned __int64);
void nn_ui2d_58b740(__int64, __int64, __int64, unsigned __int16);
float nn_ui2d_58b2b0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4,
                     float* a5, float* a6);

float nn_ui2d_58b2b0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4,
                     float* a5, float* a6)
{
  __int64 v12;
  float v18;
  __int64 v19;
  float32x4_t v20;
  float32x4_t v21;
  __int128 v22;
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
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float32x4_t v41;
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
  float32x4_t v53;
  float v54;
  float v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  __int128 v63;
  __int128 v64;
  __int128 v65;
  float result;
  int v67;
  __int64* v68;
  __int64 v69;
  unsigned int v70;
  float v71;
  __int64* v72;
  __int64 v73;
  unsigned int v74;
  float v75;
  __int64* v76;
  __int64 v77;
  unsigned int v78;
  float v79;
  _QWORD var4[2];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  {
    v12 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + *(unsigned int*)(a1 + 52);
    __asm__ volatile("" ::"r"(v12));
  }
  memset(v12, 0, 0x220u),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  *(float*)(v12 + 4) = *a5;
  {
    v18 = a5[1];
    __asm__ volatile("" ::"w"(v18));
  }
  *(float*)(v12 + 8) = v18;
  if (a6 != nullptr) {
    *(float*)(v12 + 12) = *a6;
    {
      v18 = a6[1];
      __asm__ volatile("" ::"w"(v18));
    }
    *(float*)(v12 + 284) = v18;
  }
  v19 = GameRoutine_58b5a0(a1, (float*)v12, v18),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  {
    v20 = *(float32x4_t*)(a2 + 80);
    __asm__ volatile("" ::"w"(v20));
  }
  {
    v21 = *(float32x4_t*)(a2 + 96);
    __asm__ volatile("" ::"w"(v21));
  }
  v22 = *(_OWORD*)(a2 + 112);
  v23 = 0x0.0p+0f;
  LODWORD(v24) = HIDWORD(*(_QWORD*)(a2 + 80));
  LODWORD(v25) = HIDWORD(*(_QWORD*)(a2 + 96));
  LODWORD(v26) = *(_QWORD*)(a2 + 120);
  LODWORD(v27) = *(_QWORD*)(a2 + 104);
  {
    v28 = (float)-v24 * LANES128(v21).n128_f32[0];
    __asm__ volatile("" ::"w"(v28));
  }
  LODWORD(v29) = HIDWORD(*(_QWORD*)(a2 + 112));
  LODWORD(v30) = *(_QWORD*)(a2 + 88);
  {
    v31 = (float)-v29 * LANES128(v20).n128_f32[0];
    __asm__ volatile("" ::"w"(v31));
  }
  {
    v32 = (float)-v25 * *(float*)&v22;
    __asm__ volatile("" ::"w"(v32));
  }
  v33 = (float)((float)((float)((float)((float)(PSEUDO_UNFUSED(
                                            vmuls_lane_f32(v24, v21, 2) *
                                            *(float*)&v22)) +
                                        (float)(vmuls_lane_f32(
                                                    LANES128(v20).n128_f32[0],
                                                    COERCE_AS(float32x2_t,
                                                              LANES128(v21)
                                                                  .n128_u64[0]),
                                                    1) *
                                                *((float*)&v22 + 2))) +
                                (float)(vmuls_lane_f32(
                                            LANES128(v21).n128_f32[0], v20, 2) *
                                        *((float*)&v22 + 1))) +
                        (float)(v32 * LANES128(v20).n128_f32[2])) +
                (float)(v28 * *((float*)&v22 + 2))) +
        (float)(v31 * LANES128(v21).n128_f32[2]);
  if (v33 != 0x0.0p+0f) {
    v23 = 0x1.0000000000000p+0f / v33;
  }
  {
    v34 = -(float)(v26 * LANES128(v21).n128_f32[0]);
    __asm__ volatile("" ::"w"(v34));
  }
  v35 = (float)(v25 * v26) - (float)(PSEUDO_UNFUSED(v27 * v29));
  v36 = (float)(v29 * v30) - (float)(PSEUDO_UNFUSED(v26 * v24));
  v37 = (float)(v24 * v27) - (float)(PSEUDO_UNFUSED(v30 * v25));
  v38 = (float)(LANES128(v20).n128_f32[0] * v26) -
        (float)(PSEUDO_UNFUSED(v30 * *(float*)&v22));
  {
    v39 = v34 + (float)(*(float*)&v22 * v27);
    __asm__ volatile("" ::"w"(v39));
  }
  {
    v40 = v28 + (float)(LANES128(v20).n128_f32[0] * v25);
    __asm__ volatile("" ::"w"(v40));
  }
  {
    v41 = *(float32x4_t*)(a2 + 160);
    __asm__ volatile("" ::"w"(v41));
  }
  v42 = (float)(LANES128(v21).n128_f32[0] * v30) -
        (float)(PSEUDO_UNFUSED(v27 * LANES128(v20).n128_f32[0]));
  {
    v43 = v32 + (float)(LANES128(v21).n128_f32[0] * v29);
    __asm__ volatile("" ::"w"(v43));
  }
  v44 = v36 * v23;
  v45 = v38 * v23;
  {
    v46 = (float)(v31 + (float)(*(float*)&v22 * v24)) * v23;
    __asm__ volatile("" ::"w"(v46));
  }
  v47 = v35 * v23;
  v48 = v39 * v23;
  v49 = v40 * v23;
  v50 = v37 * v23;
  v51 = v43 * v23;
  v52 = v42 * v23;
  LANES128(v53).n128_u64[0] = 0;
  LANES128(v53).n128_u32[2] = 0;
  LANES128(v21).n128_f32[0] =
      (float)((float)-(float)(PSEUDO_UNFUSED(LANES128(v21).n128_f32[3] * v44)) -
              (float)(v47 * LANES128(v20).n128_f32[3])) -
      (float)(v50 * *((float*)&v22 + 3));
  v54 =
      (float)((float)-(float)(PSEUDO_UNFUSED(LANES128(v21).n128_f32[3] * v45)) -
              (float)(v48 * LANES128(v20).n128_f32[3])) -
      (float)(v52 * *((float*)&v22 + 3));
  v55 =
      (float)((float)-(float)(PSEUDO_UNFUSED(LANES128(v21).n128_f32[3] * v46)) -
              (float)(v51 * LANES128(v20).n128_f32[3])) -
      (float)(v49 * *((float*)&v22 + 3));
  {
    v56 = *(float32x4_t*)(a2 + 128);
    __asm__ volatile("" ::"w"(v56));
  }
  {
    v57 = *(float32x4_t*)(a2 + 144);
    __asm__ volatile("" ::"w"(v57));
  }
  LANES128(v53).n128_u32[3] = LANES128(v21).n128_u32[0];
  LANES128(v21).n128_f32[1] = v54;
  v58 = vmulq_n_f32(v56, v47);
  LANES128(v59).n128_u64[0] = 0;
  LANES128(v59).n128_u32[2] = 0;
  *(float32x4_t*)(v12 + 128) = v56;
  *(float32x4_t*)(v12 + 144) = v57;
  LANES128(v59).n128_f32[3] = v55;
  v60 = vaddq_f32(v53, vmlaq_n_f32(vmlaq_n_f32(v58, v57, v44), v41, v50));
  v61 = vmlaq_n_f32(vmulq_n_f32(v56, v48), v57, v45);
  LANES128(v62).n128_u64[0] = 0;
  LANES128(v62).n128_u32[2] = 0;
  *(float32x4_t*)(v12 + 160) = v41;
  *(float32x4_t*)(v12 + 176) = v60;
  LANES128(v62).n128_f32[3] = v54;
  *(float32x4_t*)(v12 + 192) = vaddq_f32(v62, vmlaq_n_f32(v61, v41, v52));
  *(float32x4_t*)(v12 + 208) = vaddq_f32(
      v59, vmlaq_n_f32(vmlaq_n_f32(vmulq_n_f32(v56, v51), v57, v46), v41, v49));
  v63 = *(_OWORD*)(a2 + 80);
  v64 = *(_OWORD*)(a2 + 96);
  v65 = *(_OWORD*)(a2 + 112);
  *(_QWORD*)(v12 + 272) = LANES128(v21).n128_u64[0];
  *(float*)(v12 + 280) = v55;
  *(_OWORD*)(v12 + 224) = v63;
  *(_OWORD*)(v12 + 240) = v64;
  *(_OWORD*)(v12 + 256) = v65;
  nn_ui2d_58b740(v19, v12, a3, a4),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  {
    v67 = *(_DWORD*)(a1 + 20);
    __asm__ volatile("" ::"r"(v67));
  }
  if ((v67 & 3) != 0) {
    {
      v68 = *(__int64**)(*(_QWORD*)(a1 + 24) + 8LL);
      __asm__ volatile("" ::"r"(v68));
    }
    if (v68 != nullptr) {
      {
        v69 = *v68;
        __asm__ volatile("" ::"r"(v69));
      }
      LODWORD(var4[0]) = 0;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8))(v69 + 32))(
          (void*)(var4)),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      LOWORD(v70) = var4[0];
      v71 = (float)v70;
      *(float*)(v12 + 496) = v71;
      LOWORD(v71) = WORD1(var4[0]);
      result = (float)LODWORD(v71);
      *(float*)(v12 + 500) = result;
      {
        v67 = *(_DWORD*)(a1 + 20);
        __asm__ volatile("" ::"r"(v67));
      }
    }
    if ((v67 & 2) != 0) {
      {
        v72 = *(__int64**)(*(_QWORD*)(a1 + 24) + 24LL);
        __asm__ volatile("" ::"r"(v72));
      }
      if (v72 != nullptr) {
        {
          v73 = *v72;
          __asm__ volatile("" ::"r"(v73));
        }
        LODWORD(var4[0]) = 0;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8))(v73 + 32))(
            (void*)(var4)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        LOWORD(v74) = var4[0];
        v75 = (float)v74;
        *(float*)(v12 + 512) = v75;
        LOWORD(v75) = WORD1(var4[0]);
        result = (float)LODWORD(v75);
        *(float*)(v12 + 516) = result;
        {
          v67 = *(_DWORD*)(a1 + 20);
          __asm__ volatile("" ::"r"(v67));
        }
      }
      if ((~v67 & 3) == 0) {
        {
          v76 = *(__int64**)(*(_QWORD*)(a1 + 24) + 40LL);
          __asm__ volatile("" ::"r"(v76));
        }
        if (v76 != nullptr) {
          {
            v77 = *v76;
            __asm__ volatile("" ::"r"(v77));
          }
          LODWORD(var4[0]) = 0;
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8))(v77 + 32))(
              (void*)(var4)),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
          LOWORD(v78) = var4[0];
          v79 = (float)v78;
          *(float*)(v12 + 528) = v79;
          LOWORD(v79) = WORD1(var4[0]);
          result = (float)LODWORD(v79);
          *(float*)(v12 + 532) = result;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
