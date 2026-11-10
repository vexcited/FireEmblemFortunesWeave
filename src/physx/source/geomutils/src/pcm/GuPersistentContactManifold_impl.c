#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 physx_Gu_SinglePersistentContactManifold_reduceBatchContactsConvex(
    __int64 result, __int64 a2, unsigned int a3, __int64 a4, __int64 a5,
    __int64 a6);

__int64 physx_Gu_SinglePersistentContactManifold_reduceBatchContactsConvex(
    __int64 result, __int64 a2, unsigned int a3, __int64 a4, __int64 a5,
    __int64 a6)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int32x2_t v11;
  __int64 v12;
  unsigned int v13;
  int32x2_t* v14;
  __int64 v15;
  __int64 v16;
  int32x2_t v17;
  __int64 v18;
  int32x2_t v19;
  __int64 v20;
  int32x2_t v21;
  __int64 v22;
  int32x2_t v23;
  int32x2_t* v24;
  int32x2_t v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  float32x4_t* v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x2_t v34;
  float32x4_t* v35;
  __int64 v36;
  int v37;
  __int64 v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x2_t v41;
  unsigned __int8 v42;
  unsigned int v43;
  int8x8_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x2_t v48;
  unsigned __int8 v49;
  unsigned int v50;
  float32x4_t v51;
  float32x4_t v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  float v56;
  float32x4_t* v57;
  __int64 v58;
  float32x4_t* v59;
  int v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t* v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  unsigned __int64* v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  _BYTE v79[64];

  v7 = result;
  if (a3 <= 2) {
    if (a3 != 0) {
      *(_OWORD*)*(_QWORD*)(result + 80) = *(_OWORD*)a2;
      *(_OWORD*)(*(_QWORD*)(result + 80) + 16LL) = *(_OWORD*)(a2 + 16);
      *(_OWORD*)(*(_QWORD*)(result + 80) + 32LL) = *(_OWORD*)(a2 + 32);
      if (a3 != 1) {
        *(_OWORD*)(*(_QWORD*)(result + 80) + 48LL) = *(_OWORD*)(a2 + 48);
        *(_OWORD*)(*(_QWORD*)(result + 80) + 64LL) = *(_OWORD*)(a2 + 64);
        *(_OWORD*)(*(_QWORD*)(result + 80) + 80LL) = *(_OWORD*)(a2 + 80);
      }
    }
    goto LABEL_57;
  }
  v8 = a3;
  memset(v79, 0, a3, a4, a5, a6);
  v9 = v8 - 1;
  v10 = (v8 - 1) & 3;
  LANES64(v11).n64_u64[0] =
      LANES64_OF(vdup_lane_s32(*(int32x2_t*)(a2 + 40), 1)).n64_u64[0];
  if ((unsigned __int64)(v8 - 2) >= 3) {
    v14 = (int32x2_t*)(a2 + 128);
    v15 = 1;
    result = 0;
    while (1) {
      v16 = v15;
      LANES64(v17).n64_u64[0] =
          LANES64_OF(vdup_lane_s32(v14[-5], 1)).n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v11, v17)).n64_u8[0] & 1) != 0) {
        PSEUDO_LOW_LANE64(v11, n64_u64, LANES64(v17).n64_u64[0]);
        result = (unsigned int)v15;
        v18 = v15 + 1;
        LANES64(v19).n64_u64[0] =
            LANES64_OF(vdup_lane_s32(v14[1], 1)).n64_u64[0];
        if ((LANES64_OF(vcgt_f32(v11, v19)).n64_u8[0] & 1) == 0) {
        LABEL_12:
          v20 = v18 + 1;
          LANES64(v21).n64_u64[0] =
              LANES64_OF(vdup_lane_s32(v14[7], 1)).n64_u64[0];
          if ((LANES64_OF(vcgt_f32(v11, v21)).n64_u8[0] & 1) == 0) {
            goto LABEL_13;
          }
          goto LABEL_17;
        }
      }
      else {
        v18 = v15 + 1;
        LANES64(v19).n64_u64[0] =
            LANES64_OF(vdup_lane_s32(v14[1], 1)).n64_u64[0];
        if ((LANES64_OF(vcgt_f32(v11, v19)).n64_u8[0] & 1) == 0) {
          goto LABEL_12;
        }
      }
      PSEUDO_LOW_LANE64(v11, n64_u64, LANES64(v19).n64_u64[0]);
      result = (unsigned int)v18;
      v20 = v18 + 1;
      LANES64(v21).n64_u64[0] = LANES64_OF(vdup_lane_s32(v14[7], 1)).n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v11, v21)).n64_u8[0] & 1) == 0) {
      LABEL_13:
        v22 = v20 + 1;
        LANES64(v23).n64_u64[0] =
            LANES64_OF(vdup_lane_s32(v14[13], 1)).n64_u64[0];
        if ((LANES64_OF(vcgt_f32(v11, v23)).n64_u8[0] & 1) != 0) {
          goto LABEL_18;
        }
        goto LABEL_9;
      }
    LABEL_17:
      PSEUDO_LOW_LANE64(v11, n64_u64, LANES64(v21).n64_u64[0]);
      result = (unsigned int)v20;
      v22 = v20 + 1;
      LANES64(v23).n64_u64[0] =
          LANES64_OF(vdup_lane_s32(v14[13], 1)).n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v11, v23)).n64_u8[0] & 1) != 0) {
      LABEL_18:
        PSEUDO_LOW_LANE64(v11, n64_u64, LANES64(v23).n64_u64[0]);
        result = (unsigned int)v22;
      }
    LABEL_9:
      v14 += 24;
      v15 = v22 + 1;
      if (v22 == (v9 & 0xFFFFFFFFFFFFFFFCLL)) {
        v12 = v16 + 4;
        v13 = result;
        if (v10 != 0) {
          goto LABEL_20;
        }
        goto LABEL_24;
      }
    }
  }
  v12 = 1;
  result = 0;
  v13 = 0;
  if (v10 != 0) {
  LABEL_20:
    v24 = (int32x2_t*)(a2 + 48 * v12 + 32);
    do {
      v13 = v12;
      LANES64(v25).n64_u64[0] = LANES64_OF(vdup_lane_s32(v24[1], 1)).n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v11, v25)).n64_u8[0] & 1) == 0) {
        PSEUDO_LOW_LANE64(v25, n64_u64, LANES64(v11).n64_u64[0]);
        v13 = result;
      }
      PSEUDO_LOW_LANE64(v11, n64_u64, LANES64(v25).n64_u64[0]);
      LODWORD(v12) = v12 + 1;
      v24 += 6;
      --v10;
      result = v13;
    } while (v10 != 0);
  }
LABEL_24:
  v26 = *(_QWORD**)(v7 + 80);
  v27 = (_QWORD*)(a2 + 48LL * (int)v13);
  v26[1] = v27[1];
  v28 = v27[3];
  v26[5] = v27[5];
  v26[3] = v28;
  *v26 = *v27;
  v29 = v27[2];
  v26[4] = v27[4];
  v26[2] = v29;
  v79[v13] = 1;
  v30 = *(float32x4_t**)(v7 + 80);
  v31 = v30[1];
  v32 = vsubq_f32(*(float32x4_t*)(a2 + 16), v31);
  v33 = vmulq_f32(v32, v32);
  LANES128(v33).n128_u64[0] = LANES128_OF(vpaddq_f32(v33, v33)).n128_u64[0];
  LANES64(v34).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
          .n64_u64[0];
  v35 = (float32x4_t*)(a2 + 112);
  v36 = 1;
  v37 = 0;
  do {
    v38 = v36 + 1;
    v39 = vsubq_f32(v35[-3], v31);
    v40 = vmulq_f32(v39, v39);
    LANES128(v40).n128_u64[0] = LANES128_OF(vpaddq_f32(v40, v40)).n128_u64[0];
    LANES64(v41).n64_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    v42 = LANES64_OF(vcgt_f32(v41, v34)).n64_u8[0];
    if ((v42 & 1) != 0) {
      v43 = -1;
    }
    else {
      v43 = 0;
    }
    if ((v42 & 1) != 0) {
      v37 = v36;
    }
    v36 += 2;
    LANES64(v44).n64_u64[0] =
        LANES64_OF(vbsl_s8(vdup_n_s32(v43), v41, v34)).n64_u64[0];
    v45 = *v35;
    v35 += 6;
    v46 = vsubq_f32(v45, v31);
    v47 = vmulq_f32(v46, v46);
    LANES128(v47).n128_u64[0] = LANES128_OF(vpaddq_f32(v47, v47)).n128_u64[0];
    LANES64(v48).n64_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
            .n64_u64[0];
    v49 = LANES64_OF(vcgt_f32(v48, v44)).n64_u8[0];
    if ((v49 & 1) != 0) {
      v50 = -1;
    }
    else {
      v50 = 0;
    }
    if ((v49 & 1) != 0) {
      v37 = v38;
    }
    LANES64(v34).n64_u64[0] =
        LANES64_OF(vbsl_s8(vdup_n_s32(v50), v48, v44)).n64_u64[0];
  } while (v38 != (v9 & 0xFFFFFFFFFFFFFFFELL));
  if ((v9 & 1) != 0) {
    v51 = vsubq_f32(*(float32x4_t*)(a2 + 48 * v36 + 16), v31);
    v52 = vmulq_f32(v51, v51);
    LANES128(v52).n128_u64[0] = LANES128_OF(vpaddq_f32(v52, v52)).n128_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])),
                 v34))
             .n64_u32[0] &
         1) != 0) {
      v37 = v36;
    }
  }
  v53 = a2 + 48LL * v37;
  v54 = *(_QWORD*)(v53 + 40);
  LANES128(v30[4]).n128_u64[1] = *(_QWORD*)(v53 + 24);
  LANES128(v30[5]).n128_u64[1] = v54;
  LANES128(v30[3]).n128_u64[1] = *(_QWORD*)(v53 + 8);
  LANES128(v30[3]).n128_u64[0] = *(_QWORD*)v53;
  v55 = *(_QWORD*)(v53 + 16);
  LANES128(v30[5]).n128_u64[0] = *(_QWORD*)(v53 + 32);
  LANES128(v30[4]).n128_u64[0] = v55;
  v56 = *(float*)(v53 + 44);
  v79[v37] = 1;
  v57 = *(float32x4_t**)(v7 + 80);
  v58 = 0;
  v59 = (float32x4_t*)(a2 + 64);
  v60 = v37;
  do {
    if ((v79[v58] & 1) == 0) {
      v61 = v59[-3];
      v62 = vsubq_f32(v57[1], v61);
      v63 = vsubq_f32(v57[4], v61);
      v64 = vmulq_f32(v62, v62);
      v65 = vmulq_f32(v63, v63);
      LANES128(v64).n128_u64[0] = LANES128_OF(vpaddq_f32(v64, v64)).n128_u64[0];
      LANES128(v65).n128_u64[0] = LANES128_OF(vpaddq_f32(v65, v65)).n128_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]))))
               .n64_u8[0] &
           1) != 0 &&
          v56 > LANES128(v59[-2]).n128_f32[3]) {
        v60 = v58;
      }
    }
    if ((v79[v58 + 1] & 1) == 0) {
      v66 = vsubq_f32(v57[1], *v59);
      v67 = vsubq_f32(v57[4], *v59);
      v68 = vmulq_f32(v66, v66);
      v69 = vmulq_f32(v67, v67);
      LANES128(v68).n128_u64[0] = LANES128_OF(vpaddq_f32(v68, v68)).n128_u64[0];
      LANES128(v69).n128_u64[0] = LANES128_OF(vpaddq_f32(v69, v69)).n128_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]))))
               .n64_u8[0] &
           1) != 0 &&
          v56 > LANES128(v59[1]).n128_f32[3]) {
        v60 = v58 + 1;
      }
    }
    v58 += 2;
    v59 += 6;
  } while ((v8 & 0xFFFFFFFE) != v58);
  if ((v8 & 1) != 0 && (v79[v58] & 1) == 0) {
    v70 = (float32x4_t*)(a2 + 48 * v58);
    v71 = v70[1];
    v72 = vsubq_f32(v57[1], v71);
    v73 = vsubq_f32(v57[4], v71);
    v74 = vmulq_f32(v72, v72);
    v75 = vmulq_f32(v73, v73);
    LANES128(v74).n128_u64[0] = LANES128_OF(vpaddq_f32(v74, v74)).n128_u64[0];
    LANES128(v75).n128_u64[0] = LANES128_OF(vpaddq_f32(v75, v75)).n128_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]))))
             .n64_u8[0] &
         1) != 0 &&
        v56 > LANES128(v70[2]).n128_f32[3]) {
      v60 = v58;
    }
  }
  if (v60 != v37) {
    v76 = (unsigned __int64*)(a2 + 48LL * v60);
    v77 = v76[5];
    LANES128(v57[4]).n128_u64[1] = v76[3];
    LANES128(v57[5]).n128_u64[1] = v77;
    LANES128(v57[3]).n128_u64[1] = v76[1];
    LANES128(v57[3]).n128_u64[0] = *v76;
    v78 = v76[2];
    LANES128(v57[5]).n128_u64[0] = v76[4];
    LANES128(v57[4]).n128_u64[0] = v78;
  }
  LOBYTE(a3) = 2;
LABEL_57:
  *(_BYTE*)(v7 + 64) = a3;
  return result;
}

#pragma GCC visibility pop
