#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 physx_Gu_SinglePersistentContactManifold_reduceBatchContactsConvex_alt1(
    __int64 result, __int64 a2, unsigned int a3, __int64 a4, __int64 a5,
    __int64 a6) __asm__("physx_Gu_SinglePersistentContactManifold_"
                        "reduceBatchContactsConvex");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 physx_Gu_SinglePersistentContactManifold_reduceBatchContactsConvex(
    __int64 result, __int64 a2, unsigned int a3);

__int64 physx_Gu_SinglePersistentContactManifold_reduceBatchContactsConvex(
    __int64 result, __int64 a2, unsigned int a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int32x2_t v8;
  __int64 v9;
  unsigned int v10;
  int32x2_t* v11;
  __int64 v12;
  __int64 v13;
  int32x2_t v14;
  __int64 v15;
  int32x2_t v16;
  __int64 v17;
  int32x2_t v18;
  __int64 v19;
  int32x2_t v20;
  int32x2_t* v21;
  int32x2_t v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  float32x4_t* v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x2_t v31;
  float32x4_t* v32;
  __int64 v33;
  int v34;
  __int64 v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x2_t v38;
  unsigned __int8 v39;
  unsigned int v40;
  int8x8_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x2_t v45;
  unsigned __int8 v46;
  unsigned int v47;
  float32x4_t v48;
  float32x4_t v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  float v53;
  float32x4_t* v54;
  __int64 v55;
  float32x4_t* v56;
  int v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t* v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  unsigned __int64* v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  _BYTE v76[64];

  v4 = result;
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
  v5 = a3;
  memset_alt1((__int64)v76, 0, a3);
  v6 = v5 - 1;
  v7 = (v5 - 1) & 3;
  LANES64(v8).n64_u64[0] =
      LANES64_OF(vdup_lane_s32(*(int32x2_t*)(a2 + 40), 1)).n64_u64[0];
  if ((unsigned __int64)(v5 - 2) >= 3) {
    v11 = (int32x2_t*)(a2 + 128);
    v12 = 1;
    result = 0;
    while (1) {
      v13 = v12;
      LANES64(v14).n64_u64[0] =
          LANES64_OF(vdup_lane_s32(v11[-5], 1)).n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v8, v14)).n64_u8[0] & 1) != 0) {
        PSEUDO_LOW_LANE64(v8, n64_u64, LANES64(v14).n64_u64[0]);
        result = (unsigned int)v12;
        v15 = v12 + 1;
        LANES64(v16).n64_u64[0] =
            LANES64_OF(vdup_lane_s32(v11[1], 1)).n64_u64[0];
        if ((LANES64_OF(vcgt_f32(v8, v16)).n64_u8[0] & 1) == 0) {
        LABEL_12:
          v17 = v15 + 1;
          LANES64(v18).n64_u64[0] =
              LANES64_OF(vdup_lane_s32(v11[7], 1)).n64_u64[0];
          if ((LANES64_OF(vcgt_f32(v8, v18)).n64_u8[0] & 1) == 0) {
            goto LABEL_13;
          }
          goto LABEL_17;
        }
      }
      else {
        v15 = v12 + 1;
        LANES64(v16).n64_u64[0] =
            LANES64_OF(vdup_lane_s32(v11[1], 1)).n64_u64[0];
        if ((LANES64_OF(vcgt_f32(v8, v16)).n64_u8[0] & 1) == 0) {
          goto LABEL_12;
        }
      }
      PSEUDO_LOW_LANE64(v8, n64_u64, LANES64(v16).n64_u64[0]);
      result = (unsigned int)v15;
      v17 = v15 + 1;
      LANES64(v18).n64_u64[0] = LANES64_OF(vdup_lane_s32(v11[7], 1)).n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v8, v18)).n64_u8[0] & 1) == 0) {
      LABEL_13:
        v19 = v17 + 1;
        LANES64(v20).n64_u64[0] =
            LANES64_OF(vdup_lane_s32(v11[13], 1)).n64_u64[0];
        if ((LANES64_OF(vcgt_f32(v8, v20)).n64_u8[0] & 1) != 0) {
          goto LABEL_18;
        }
        goto LABEL_9;
      }
    LABEL_17:
      PSEUDO_LOW_LANE64(v8, n64_u64, LANES64(v18).n64_u64[0]);
      result = (unsigned int)v17;
      v19 = v17 + 1;
      LANES64(v20).n64_u64[0] =
          LANES64_OF(vdup_lane_s32(v11[13], 1)).n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v8, v20)).n64_u8[0] & 1) != 0) {
      LABEL_18:
        PSEUDO_LOW_LANE64(v8, n64_u64, LANES64(v20).n64_u64[0]);
        result = (unsigned int)v19;
      }
    LABEL_9:
      v11 += 24;
      v12 = v19 + 1;
      if (v19 == (v6 & 0xFFFFFFFFFFFFFFFCLL)) {
        v9 = v13 + 4;
        v10 = result;
        if (v7 != 0) {
          goto LABEL_20;
        }
        goto LABEL_24;
      }
    }
  }
  v9 = 1;
  result = 0;
  v10 = 0;
  if (v7 != 0) {
  LABEL_20:
    v21 = (int32x2_t*)(a2 + 48 * v9 + 32);
    do {
      v10 = v9;
      LANES64(v22).n64_u64[0] = LANES64_OF(vdup_lane_s32(v21[1], 1)).n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v8, v22)).n64_u8[0] & 1) == 0) {
        PSEUDO_LOW_LANE64(v22, n64_u64, LANES64(v8).n64_u64[0]);
        v10 = result;
      }
      PSEUDO_LOW_LANE64(v8, n64_u64, LANES64(v22).n64_u64[0]);
      LODWORD(v9) = v9 + 1;
      v21 += 6;
      --v7;
      result = v10;
    } while (v7 != 0);
  }
LABEL_24:
  v23 = *(_QWORD**)(v4 + 80);
  v24 = (_QWORD*)(a2 + 48LL * (int)v10);
  v23[1] = v24[1];
  v25 = v24[3];
  v23[5] = v24[5];
  v23[3] = v25;
  *v23 = *v24;
  v26 = v24[2];
  v23[4] = v24[4];
  v23[2] = v26;
  v76[v10] = 1;
  v27 = *(float32x4_t**)(v4 + 80);
  v28 = v27[1];
  v29 = vsubq_f32(*(float32x4_t*)(a2 + 16), v28);
  v30 = vmulq_f32(v29, v29);
  LANES128(v30).n128_u64[0] = LANES128_OF(vpaddq_f32(v30, v30)).n128_u64[0];
  LANES64(v31).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
          .n64_u64[0];
  v32 = (float32x4_t*)(a2 + 112);
  v33 = 1;
  v34 = 0;
  do {
    v35 = v33 + 1;
    v36 = vsubq_f32(v32[-3], v28);
    v37 = vmulq_f32(v36, v36);
    LANES128(v37).n128_u64[0] = LANES128_OF(vpaddq_f32(v37, v37)).n128_u64[0];
    LANES64(v38).n64_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
            .n64_u64[0];
    v39 = LANES64_OF(vcgt_f32(v38, v31)).n64_u8[0];
    if ((v39 & 1) != 0) {
      v40 = -1;
    }
    else {
      v40 = 0;
    }
    if ((v39 & 1) != 0) {
      v34 = v33;
    }
    v33 += 2;
    LANES64(v41).n64_u64[0] =
        LANES64_OF(vbsl_s8(vdup_n_s32(v40), v38, v31)).n64_u64[0];
    v42 = *v32;
    v32 += 6;
    v43 = vsubq_f32(v42, v28);
    v44 = vmulq_f32(v43, v43);
    LANES128(v44).n128_u64[0] = LANES128_OF(vpaddq_f32(v44, v44)).n128_u64[0];
    LANES64(v45).n64_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
            .n64_u64[0];
    v46 = LANES64_OF(vcgt_f32(v45, v41)).n64_u8[0];
    if ((v46 & 1) != 0) {
      v47 = -1;
    }
    else {
      v47 = 0;
    }
    if ((v46 & 1) != 0) {
      v34 = v35;
    }
    LANES64(v31).n64_u64[0] =
        LANES64_OF(vbsl_s8(vdup_n_s32(v47), v45, v41)).n64_u64[0];
  } while (v35 != (v6 & 0xFFFFFFFFFFFFFFFELL));
  if ((v6 & 1) != 0) {
    v48 = vsubq_f32(*(float32x4_t*)(a2 + 48 * v33 + 16), v28);
    v49 = vmulq_f32(v48, v48);
    LANES128(v49).n128_u64[0] = LANES128_OF(vpaddq_f32(v49, v49)).n128_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])),
                 v31))
             .n64_u32[0] &
         1) != 0) {
      v34 = v33;
    }
  }
  v50 = a2 + 48LL * v34;
  v51 = *(_QWORD*)(v50 + 40);
  LANES128(v27[4]).n128_u64[1] = *(_QWORD*)(v50 + 24);
  LANES128(v27[5]).n128_u64[1] = v51;
  LANES128(v27[3]).n128_u64[1] = *(_QWORD*)(v50 + 8);
  LANES128(v27[3]).n128_u64[0] = *(_QWORD*)v50;
  v52 = *(_QWORD*)(v50 + 16);
  LANES128(v27[5]).n128_u64[0] = *(_QWORD*)(v50 + 32);
  LANES128(v27[4]).n128_u64[0] = v52;
  v53 = *(float*)(v50 + 44);
  v76[v34] = 1;
  v54 = *(float32x4_t**)(v4 + 80);
  v55 = 0;
  v56 = (float32x4_t*)(a2 + 64);
  v57 = v34;
  do {
    if ((v76[v55] & 1) == 0) {
      v58 = v56[-3];
      v59 = vsubq_f32(v54[1], v58);
      v60 = vsubq_f32(v54[4], v58);
      v61 = vmulq_f32(v59, v59);
      v62 = vmulq_f32(v60, v60);
      LANES128(v61).n128_u64[0] = LANES128_OF(vpaddq_f32(v61, v61)).n128_u64[0];
      LANES128(v62).n128_u64[0] = LANES128_OF(vpaddq_f32(v62, v62)).n128_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]))))
               .n64_u8[0] &
           1) != 0 &&
          v53 > LANES128(v56[-2]).n128_f32[3]) {
        v57 = v55;
      }
    }
    if ((v76[v55 + 1] & 1) == 0) {
      v63 = vsubq_f32(v54[1], *v56);
      v64 = vsubq_f32(v54[4], *v56);
      v65 = vmulq_f32(v63, v63);
      v66 = vmulq_f32(v64, v64);
      LANES128(v65).n128_u64[0] = LANES128_OF(vpaddq_f32(v65, v65)).n128_u64[0];
      LANES128(v66).n128_u64[0] = LANES128_OF(vpaddq_f32(v66, v66)).n128_u64[0];
      if ((LANES64_OF(
               vcgt_f32(
                   vpadd_f32(COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])),
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]))))
               .n64_u8[0] &
           1) != 0 &&
          v53 > LANES128(v56[1]).n128_f32[3]) {
        v57 = v55 + 1;
      }
    }
    v55 += 2;
    v56 += 6;
  } while ((v5 & 0xFFFFFFFE) != v55);
  if ((v5 & 1) != 0 && (v76[v55] & 1) == 0) {
    v67 = (float32x4_t*)(a2 + 48 * v55);
    v68 = v67[1];
    v69 = vsubq_f32(v54[1], v68);
    v70 = vsubq_f32(v54[4], v68);
    v71 = vmulq_f32(v69, v69);
    v72 = vmulq_f32(v70, v70);
    LANES128(v71).n128_u64[0] = LANES128_OF(vpaddq_f32(v71, v71)).n128_u64[0];
    LANES128(v72).n128_u64[0] = LANES128_OF(vpaddq_f32(v72, v72)).n128_u64[0];
    if ((LANES64_OF(
             vcgt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])),
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]))))
             .n64_u8[0] &
         1) != 0 &&
        v53 > LANES128(v67[2]).n128_f32[3]) {
      v57 = v55;
    }
  }
  if (v57 != v34) {
    v73 = (unsigned __int64*)(a2 + 48LL * v57);
    v74 = v73[5];
    LANES128(v54[4]).n128_u64[1] = v73[3];
    LANES128(v54[5]).n128_u64[1] = v74;
    LANES128(v54[3]).n128_u64[1] = v73[1];
    LANES128(v54[3]).n128_u64[0] = *v73;
    v75 = v73[2];
    LANES128(v54[5]).n128_u64[0] = v73[4];
    LANES128(v54[4]).n128_u64[0] = v75;
  }
  LOBYTE(a3) = 2;
LABEL_57:
  *(_BYTE*)(v4 + 64) = a3;
  return result;
}

#pragma GCC visibility pop
