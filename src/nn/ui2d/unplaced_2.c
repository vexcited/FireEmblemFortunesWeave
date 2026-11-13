#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Pane_58dfa0(PSEUDO_X8, __int64);
bool nn_ui2d_59ee50(__int64 a1, float32x2_t* a2);
__int64 nn_ui2d_5a3850(float32x2_t* a1, float32x2_t* a2, unsigned __int64* a3,
                       __int64 a4, __int64 a5, unsigned int a6, float a7);

bool nn_ui2d_59ee50(__int64 a1, float32x2_t* a2)
{
  float32x4_t v5;
  float32x4_t v6;
  __int128 v7;
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
  unsigned int v20;
  int32x4_t v21;
  unsigned int v22;
  unsigned int v23;
  float v24;
  unsigned int v25;
  int32x4_t v26;
  unsigned int v27;
  int32x4_t v28;
  int32x4_t v29;
  unsigned __int64 v33;
  float v34[4];

  v5 = *(float32x4_t*)(a1 + 112);
  v6 = *(float32x4_t*)(a1 + 128);
  v7 = *(_OWORD*)(a1 + 144);
  v8 = 0x0.0p+0f;
  LODWORD(v9) = HIDWORD(*(_QWORD*)(a1 + 112));
  LODWORD(v10) = HIDWORD(*(_QWORD*)(a1 + 128));
  LODWORD(v11) = HIDWORD(*(_QWORD*)(a1 + 144));
  LODWORD(v12) = *(_QWORD*)(a1 + 152);
  LODWORD(v13) = *(_QWORD*)(a1 + 136);
  LODWORD(v14) = *(_QWORD*)(a1 + 120);
  v15 = (float)-v10 * *(float*)&v7;
  v16 = (float)-v9 * LANES128(v6).n128_f32[0];
  v17 = (float)-v11 * LANES128(v5).n128_f32[0];
  v18 =
      (float)((float)((float)((float)((float)(PSEUDO_UNFUSED(
                                          vmuls_lane_f32(v9, v6, 2) *
                                          *(float*)&v7)) +
                                      (float)(vmuls_lane_f32(
                                                  LANES128(v5).n128_f32[0],
                                                  COERCE_AS(
                                                      float32x2_t,
                                                      LANES128(v6).n128_u64[0]),
                                                  1) *
                                              *((float*)&v7 + 2))) +
                              (float)(vmuls_lane_f32(LANES128(v6).n128_f32[0],
                                                     v5, 2) *
                                      *((float*)&v7 + 1))) +
                      (float)(v15 * LANES128(v5).n128_f32[2])) +
              (float)(v16 * *((float*)&v7 + 2))) +
      (float)(v17 * LANES128(v6).n128_f32[2]);
  if (v18 != 0x0.0p+0f) {
    v8 = 0x1.0000000000000p+0f / v18;
  }
  v19 = (float)(*(float*)&v7 * v13) -
        (float)(PSEUDO_UNFUSED(v12 * LANES128(v6).n128_f32[0]));
  *(float*)&v20 =
      (float)((float)(v11 * v14) - (float)(PSEUDO_UNFUSED(v12 * v9))) * v8;
  LANES128(v21).n128_f32[0] =
      (float)((float)(v10 * v12) - (float)(PSEUDO_UNFUSED(v13 * v11))) * v8;
  *(float*)&v22 = (float)((float)(LANES128(v5).n128_f32[0] * v12) -
                          (float)(PSEUDO_UNFUSED(v14 * *(float*)&v7))) *
                  v8;
  *(float*)&v23 = v19 * v8;
  v24 = (float)(v9 * v13) - (float)(PSEUDO_UNFUSED(v14 * v10));
  *(float*)&v25 = (float)(v17 + (float)(*(float*)&v7 * v9)) * v8;
  LANES128(v26).n128_f32[0] = v24 * v8;
  *(float*)&v27 =
      (float)((float)(LANES128(v6).n128_f32[0] * v14) -
              (float)(PSEUDO_UNFUSED(v13 * LANES128(v5).n128_f32[0]))) *
      v8;
  LANES128(v21).n128_f32[1] =
      (float)(v15 + (float)(LANES128(v6).n128_f32[0] * v11)) * v8;
  LANES128(v26).n128_f32[1] =
      (float)(v16 + (float)(LANES128(v5).n128_f32[0] * v10)) * v8;
  LANES128(v21).n128_u64[1] = __PAIR64__(v25, v20);
  LANES128(v26).n128_f32[2] =
      (float)((float)-(float)(PSEUDO_UNFUSED(LANES128(v6).n128_f32[3] *
                                             *(float*)&v20)) -
              (float)(LANES128(v21).n128_f32[0] * LANES128(v5).n128_f32[3])) -
      (float)(LANES128(v26).n128_f32[0] * *((float*)&v7 + 3));
  LANES128(v28).n128_u64[0] = v27;
  LANES128(v26).n128_f32[3] =
      (float)((float)-(float)(PSEUDO_UNFUSED(LANES128(v6).n128_f32[3] *
                                             *(float*)&v25)) -
              (float)(LANES128(v21).n128_f32[1] * LANES128(v5).n128_f32[3])) -
      (float)(LANES128(v26).n128_f32[1] * *((float*)&v7 + 3));
  LANES128(v28).n128_u64[1] = COERCE_UNSIGNED_INT(
      (float)((float)-(float)(PSEUDO_UNFUSED(LANES128(v6).n128_f32[3] *
                                             *(float*)&v22)) -
              (float)(*(float*)&v23 * LANES128(v5).n128_f32[3])) -
      (float)(*(float*)&v27 * *((float*)&v7 + 3)));
  LANES128(v29).n128_u64[0] = v23;
  LANES128(v29).n128_u64[1] = v22;
  v33 = LANES128_OF(
            vaddq_f32(
                vzip2q_s32(v26, v28),
                vmlaq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(vzip1q_s32(v21, v29),
                                    COERCE_FLOAT(LANES64(*(a2)).n64_u64[0])),
                        vzip2q_s32(v21, v29),
                        COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1),
                    COERCE_AS(float32x4_t, 0), vzip1q_s32(v26, v28))))
            .n128_u64[0];
  Pane_58dfa0((void*)(v34), a1);
  return v34[0] <= *(float*)&v33 && *(float*)&v33 <= v34[2] &&
         v34[3] <= *((float*)&v33 + 1) && *((float*)&v33 + 1) <= v34[1];
}

__int64 nn_ui2d_5a3850(float32x2_t* a1, float32x2_t* a2, unsigned __int64* a3,
                       __int64 a4, __int64 a5, unsigned int a6, float a7)
{

#pragma clang fp contract(off)
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  float32x2_t v10;
  float32x2_t v12;
  float32x2_t v13;
  float32x2_t v14;
  float32x2_t v15;
  float32x2_t v16;
  float32x2_t v17;
  float32x2_t v18;
  float32x2_t v19;
  float32x2_t v20;
  float v21;
  float32x2_t v22;
  float32x2_t v23;
  float32x2_t v24;
  float v25;
  float32x2_t v26;
  float32x2_t v27;
  float32x2_t v28;
  float32x2_t v29;
  float32x2_t v30;
  float32x2_t v31;
  float32x2_t v32;
  float32x2_t v33;
  float32x2_t v34;
  float32x2_t v35;
  unsigned int v36;
  float32x2_t v38;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  int v44;
  unsigned __int64 v45;
  float32x2_t v46;
  float32x2_t v47[2];
  unsigned __int64 v48[2];
  float32x2_t v49[3];

  PSEUDO_LOW_LANE64(v10, n64_u64, *(unsigned __int64*)a4);
  if (a6 < 2) {
    goto LABEL_2;
  }
  PSEUDO_LOW_LANE64(v12, n64_u64, LANES64(*(a1)).n64_u64[0]);
  PSEUDO_LOW_LANE64(v13, n64_u64, LANES64(*(a2)).n64_u64[0]);
  LANES64(v14).n64_u64[0] =
      LANES64_OF(
          vsub_f32(v10, COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v15).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v16).n64_u64[0] = LANES64_OF(vmul_f32(v14, v15)).n64_u64[0];
  LANES64(v17).n64_u64[0] = LANES64_OF(vmul_f32(v14, v14)).n64_u64[0];
  LANES64(v18).n64_u64[0] = LANES64_OF(vpadd_f32(v16, v16)).n64_u64[0];
  LANES64(v19).n64_u64[0] = LANES64_OF(vpadd_f32(v17, v17)).n64_u64[0];
  if (LANES64(v18).n64_f32[0] > 0x0.0p+0f) {
    if ((LANES64_OF(vcgt_f32(v18, v19)).n64_u8[0] & 1) == 0) {
      LANES64(v23).n64_u64[0] =
          LANES64_OF(vmul_f32(vmul_f32(v14, vrev64_s32(v15)),
                              COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
              .n64_u64[0];
      LANES64(v24).n64_u64[0] = LANES64_OF(vpadd_f32(v23, v23)).n64_u64[0];
      v25 = LANES64_OF(vdiv_f32(vmul_f32(v24, v24), v19)).n64_f32[0];
      PSEUDO_LOW_LANE64(v22, n64_u64, *a3);
      if (v25 >= a7) {
        goto LABEL_16;
      }
      goto LABEL_9;
    }
    LANES64(v15).n64_u64[0] = LANES64_OF(vsub_f32(v10, v13)).n64_u64[0];
  }
  LANES64(v20).n64_u64[0] = LANES64_OF(vmul_f32(v15, v15)).n64_u64[0];
  v21 = LANES64_OF(vpadd_f32(v20, v20)).n64_f32[0];
  PSEUDO_LOW_LANE64(v22, n64_u64, *a3);
  if (v21 >= a7) {
    goto LABEL_16;
  }
LABEL_9:
  LANES64(v26).n64_u64[0] = LANES64_OF(vsub_f32(v22, v12)).n64_u64[0];
  LANES64(v27).n64_u64[0] = LANES64_OF(vmul_f32(v14, v26)).n64_u64[0];
  LANES64(v28).n64_u64[0] = LANES64_OF(vpadd_f32(v27, v27)).n64_u64[0];
  if (LANES64(v28).n64_f32[0] <= 0x0.0p+0f) {
    LANES64(v31).n64_u64[0] = LANES64_OF(vmul_f32(v26, v26)).n64_u64[0];
    if (LANES64_OF(vpadd_f32(v31, v31)).n64_f32[0] >= a7) {
      goto LABEL_16;
    }
    goto LABEL_2;
  }
  if ((LANES64_OF(vcgt_f32(v28, v19)).n64_u8[0] & 1) != 0) {
    LANES64(v29).n64_u64[0] = LANES64_OF(vsub_f32(v10, v22)).n64_u64[0];
    LANES64(v30).n64_u64[0] = LANES64_OF(vmul_f32(v29, v29)).n64_u64[0];
    if (LANES64_OF(vpadd_f32(v30, v30)).n64_f32[0] >= a7) {
      goto LABEL_16;
    }
  LABEL_2:
    **(_DWORD**)a5 = LANES64(v10).n64_u32[0];
    *(_DWORD*)(*(_QWORD*)a5 + 4LL) = *(_DWORD*)(a4 + 4);
    *(_QWORD*)a5 += 8LL;
    return 1;
  }
  LANES64(v32).n64_u64[0] =
      LANES64_OF(vmul_f32(vmul_f32(v14, vrev64_s32(v26)),
                          COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
          .n64_u64[0];
  LANES64(v33).n64_u64[0] = LANES64_OF(vpadd_f32(v32, v32)).n64_u64[0];
  if (LANES64_OF(vdiv_f32(vmul_f32(v33, v33), v19)).n64_f32[0] < a7) {
    goto LABEL_2;
  }
LABEL_16:
  v48[1] = v9;
  LANES64(v49[1]).n64_u64[0] = v7;
  LANES64(v49[2]).n64_u64[0] = v8;
  LANES64(v34).n64_u64[0] = LANES64_OF(vadd_f32(v12, v13)).n64_u64[0];
  LANES64(v35).n64_u64[0] = LANES64_OF(vadd_f32(v13, v22)).n64_u64[0];
  v36 = a6 >> 1;
  LANES64(v38).n64_u64[0] = LANES64_OF(vadd_f32(v10, v22)).n64_u64[0];
  *(float*)&v41 = 0x1.0000000000000p-1f * LANES64(v34).n64_f32[0];
  *(float*)&v42 = 0x1.0000000000000p-1f * LANES64(v35).n64_f32[0];
  *(float*)&v43 = 0x1.0000000000000p-1f * LANES64(v38).n64_f32[0];
  HIDWORD(v41) =
      COERCE_UNSIGNED_INT(vmuls_lane_f32(0x1.0000000000000p-1f, v34, 1));
  HIDWORD(v42) =
      COERCE_UNSIGNED_INT(vmuls_lane_f32(0x1.0000000000000p-1f, v35, 1));
  HIDWORD(v43) =
      COERCE_UNSIGNED_INT(vmuls_lane_f32(0x1.0000000000000p-1f, v38, 1));
  LANES64(v47[0]).n64_u64[0] = v41;
  LANES64(v47[1]).n64_u64[0] = v42;
  v48[0] = v43;
  *(float*)&v43 =
      (float)((float)(0x1.0000000000000p-1f * LANES64(v34).n64_f32[0]) +
              (float)(0x1.0000000000000p-1f * LANES64(v35).n64_f32[0])) *
      0x1.0000000000000p-1f;
  PSEUDO_LOW_LANE64(v34, n64_f32,
                    (float)(*((float*)&v41 + 1) + *((float*)&v42 + 1)) *
                        0x1.0000000000000p-1f);
  *(float*)&v41 =
      (float)((float)(0x1.0000000000000p-1f * LANES64(v35).n64_f32[0]) +
              (float)(0x1.0000000000000p-1f * LANES64(v38).n64_f32[0])) *
      0x1.0000000000000p-1f;
  *((float*)&v41 + 1) = (float)(*((float*)&v42 + 1) + *((float*)&v43 + 1)) *
                        0x1.0000000000000p-1f;
  HIDWORD(v43) = LANES64(v34).n64_u32[0];
  LANES64(v35).n64_f32[0] =
      (float)(*(float*)&v43 + *(float*)&v41) * 0x1.0000000000000p-1f;
  LANES64(v35).n64_f32[1] =
      (float)(LANES64(v34).n64_f32[0] + *((float*)&v41 + 1)) *
      0x1.0000000000000p-1f;
  v45 = v43;
  LANES64(v46).n64_u64[0] = v41;
  v49[0] = v35;
  v44 = nn_ui2d_5a3850(a1, v47, &v45, (__int64)v49, a5, a6 >> 1, a7);
  return (unsigned int)nn_ui2d_5a3850(v49, &v46, v48, a4, a5, v36, a7) + v44;
}

#pragma GCC visibility pop
