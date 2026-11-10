#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

int32x4_t physx_Dy_solve1D4_Block(int32x4_t**, __int64);
__int64 physx_Dy_writeBack1D4_36b8d0(__int64 a1, __int64 a2, __int64 a3);

__int64 physx_Dy_writeBack1D4_36b8d0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  int32x2_t* v6;
  int32x2_t* v7;
  __int64 v8;
  __int64 v9;
  float32x4_t* v13;
  int v14;
  unsigned __int32 v15;
  int8x16_t* v16;
  __int64 v17;
  int32x4_t v18;
  float32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  int8x16_t v26;
  unsigned int v27;
  int8x16_t* v28;
  int8x16_t* v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  unsigned int v60;
  unsigned int v62;
  unsigned int v64;
  int v65;
  unsigned int v67;
  int8x16_t v68;
  unsigned int v69;
  float32x4_t* v70;
  float32x4_t* v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  int8x16_t v79;
  int8x16_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  int8x16_t v84;
  int8x16_t v85;
  float32x4_t v86;
  float32x4_t v87;
  int8x16_t v88;
  unsigned int v89;
  float32x4_t* v90;
  float32x4_t* v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  int8x16_t v99;
  int8x16_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  int8x16_t v104;

  physx_Dy_solve1D4_Block((int32x4_t**)a1, a3);
  result = a1;
  v6 = *(int32x2_t**)(a1 + 40);
  v7 = *(int32x2_t**)(a1 + 104);
  v8 = *(_QWORD*)(a1 + 168);
  v9 = *(_QWORD*)(a1 + 232);
  if (v6 == nullptr && v7 == nullptr && v8 == 0 && v9 == 0) {
    return result;
  }
  v13 = *(float32x4_t**)(a1 + 32);
  v14 = LANES128(*(v13)).n128_u8[0];
  v15 = LANES128(*(v13)).n128_u32[1];
  v16 = v13 + 10;
  if (*(_QWORD*)(a3 + 64) == 0) {
    v17 = 272;
    if (v14 == 8) {
      v17 = 368;
    }
    if (v15 != 0) {
      goto LABEL_22;
    }
  LABEL_28:
    v25 = (__typeof__(v25)){0};
    v24 = (__typeof__(v24)){0};
    v23 = (__typeof__(v23)){0};
    v22 = (__typeof__(v22)){0};
    v21 = (__typeof__(v21)){0};
    v20 = (__typeof__(v20)){0};
    v19 = (__typeof__(v19)){0};
  LABEL_29:
    v18 = (__typeof__(v18)){0};
    goto LABEL_30;
  }
  v17 = 304;
  if (v14 == 8) {
    v17 = 400;
  }
  if (v15 == 0) {
    goto LABEL_28;
  }
  if (*(_QWORD*)(a3 + 64) == 0) {
  LABEL_22:
    v19 = (__typeof__(v19)){0};
    v20 = (__typeof__(v20)){0};
    v21 = (__typeof__(v21)){0};
    v22 = (__typeof__(v22)){0};
    v23 = (__typeof__(v23)){0};
    v24 = (__typeof__(v24)){0};
    v25 = (__typeof__(v25)){0};
    if (v15 != 1) {
      LANES128(v26).n128_u64[0] = 0x200000002LL;
      LANES128(v26).n128_u64[1] = 0x200000002LL;
      v27 = v15 & 0xFFFFFFFE;
      v28 = v13 + 26;
      do {
        v29 = &v28[(unsigned __int64)v17 / 0x10];
        v27 -= 2;
        v30 = vbicq_s8(v28[-1], vceqzq_s32(vandq_s8(*v28, v26)));
        v31 = vmlaq_f32(v20, v30, v28[-16]);
        v32 = vmlaq_f32(v21, v30, v28[-15]);
        v33 = vmlaq_f32(v22, v30, v28[-14]);
        v34 = vmlaq_f32(v23, v30, v28[-10]);
        v35 = v28[-8];
        v36 = vmlaq_f32(v24, v30, v28[-9]);
        v28 = (int8x16_t*)((char*)v28 + 2 * v17);
        v37 = vmlaq_f32(v25, v30, v35);
        v38 = vbicq_s8(v29[-1], vceqzq_s32(vandq_s8(*v29, v26)));
        v20 = vmlaq_f32(v31, v38, v29[-16]);
        v21 = vmlaq_f32(v32, v38, v29[-15]);
        v22 = vmlaq_f32(v33, v38, v29[-14]);
        v23 = vmlaq_f32(v34, v38, v29[-10]);
        v24 = vmlaq_f32(v36, v38, v29[-9]);
        v25 = vmlaq_f32(v37, v38, v29[-8]);
      } while (v27 != 0);
      v16 = v28 - 16;
    }
    if ((v15 & 1) != 0) {
      LANES128(v39).n128_u64[0] = 0x200000002LL;
      LANES128(v39).n128_u64[1] = 0x200000002LL;
      v40 = vbicq_s8(v16[15], vceqzq_s32(vandq_s8(v16[16], v39)));
      v20 = vmlaq_f32(v20, v40, *v16);
      v21 = vmlaq_f32(v21, v40, v16[1]);
      v22 = vmlaq_f32(v22, v40, v16[2]);
      v23 = vmlaq_f32(v23, v40, v16[6]);
      v24 = vmlaq_f32(v24, v40, v16[7]);
      v25 = vmlaq_f32(v25, v40, v16[8]);
    }
    goto LABEL_29;
  }
  if (v14 == 8) {
    if (v15 == 1) {
      v18 = (__typeof__(v18)){0};
      v19 = (__typeof__(v19)){0};
      v20 = (__typeof__(v20)){0};
      v21 = (__typeof__(v21)){0};
      v22 = (__typeof__(v22)){0};
      v23 = (__typeof__(v23)){0};
      v24 = (__typeof__(v24)){0};
      v25 = (__typeof__(v25)){0};
    }
    else {
      v18 = (__typeof__(v18)){0};
      LANES128(v68).n128_u64[0] = 0x200000002LL;
      LANES128(v68).n128_u64[1] = 0x200000002LL;
      v69 = v15 & 0xFFFFFFFE;
      v70 = v13 + 17;
      v19 = (__typeof__(v19)){0};
      v20 = (__typeof__(v20)){0};
      v21 = (__typeof__(v21)){0};
      v22 = (__typeof__(v22)){0};
      v23 = (__typeof__(v23)){0};
      v24 = (__typeof__(v24)){0};
      v25 = (__typeof__(v25)){0};
      do {
        v71 = &v70[(unsigned __int64)v17 / 0x10];
        v69 -= 2;
        v72 = vmlaq_f32(v18, v70[16], v70[16]);
        v73 = vmlaq_f32(v19, v70[17], v70[17]);
        v74 = vbicq_s8(v70[8], vceqzq_s32(vandq_s8(v70[9], v68)));
        v75 = vmlaq_f32(v20, v74, v70[-7]);
        v76 = vmlaq_f32(v21, v74, v70[-6]);
        v77 = vmlaq_f32(v22, v74, v70[-5]);
        v78 = vmlaq_f32(v24, v74, *v70);
        v80 = v70[(unsigned __int64)v17 / 0x10 + 8];
        v79 = v70[(unsigned __int64)v17 / 0x10 + 9];
        v81 = vmlaq_f32(v23, v74, v70[-1]);
        v82 = v70[1];
        v70 = (float32x4_t*)((char*)v70 + 2 * v17);
        v83 = vbicq_s8(v80, vceqzq_s32(vandq_s8(v79, v68)));
        v22 = vmlaq_f32(v77, v83, v71[-5]);
        v18 = vmlaq_f32(v72, v71[16], v71[16]);
        v19 = vmlaq_f32(v73, v71[17], v71[17]);
        v23 = vmlaq_f32(v81, v83, v71[-1]);
        v24 = vmlaq_f32(v78, v83, *v71);
        v20 = vmlaq_f32(v75, v83, v71[-7]);
        v21 = vmlaq_f32(v76, v83, v71[-6]);
        v25 = vmlaq_f32(vmlaq_f32(v25, v74, v82), v83, v71[1]);
      } while (v69 != 0);
      v16 = v70 - 7;
    }
    if ((v15 & 1) == 0) {
      goto LABEL_30;
    }
    LANES128(v84).n128_u64[0] = 0x200000002LL;
    LANES128(v84).n128_u64[1] = 0x200000002LL;
    v85 = vbicq_s8(v16[15], vceqzq_s32(vandq_s8(v16[16], v84)));
    v86 = v16[23];
    v87 = v16[24];
  }
  else {
    if (v15 == 1) {
      v18 = (__typeof__(v18)){0};
      v19 = (__typeof__(v19)){0};
      v20 = (__typeof__(v20)){0};
      v21 = (__typeof__(v21)){0};
      v22 = (__typeof__(v22)){0};
      v23 = (__typeof__(v23)){0};
      v24 = (__typeof__(v24)){0};
      v25 = (__typeof__(v25)){0};
    }
    else {
      v18 = (__typeof__(v18)){0};
      LANES128(v88).n128_u64[0] = 0x200000002LL;
      LANES128(v88).n128_u64[1] = 0x200000002LL;
      v89 = v15 & 0xFFFFFFFE;
      v90 = v13 + 16;
      v19 = (__typeof__(v19)){0};
      v20 = (__typeof__(v20)){0};
      v21 = (__typeof__(v21)){0};
      v22 = (__typeof__(v22)){0};
      v23 = (__typeof__(v23)){0};
      v24 = (__typeof__(v24)){0};
      v25 = (__typeof__(v25)){0};
      do {
        v91 = &v90[(unsigned __int64)v17 / 0x10];
        v89 -= 2;
        v92 = vmlaq_f32(v18, v90[11], v90[11]);
        v93 = vmlaq_f32(v19, v90[12], v90[12]);
        v94 = vbicq_s8(v90[9], vceqzq_s32(vandq_s8(v90[10], v88)));
        v95 = vmlaq_f32(v20, v94, v90[-6]);
        v96 = vmlaq_f32(v21, v94, v90[-5]);
        v97 = vmlaq_f32(v22, v94, v90[-4]);
        v98 = vmlaq_f32(v24, v94, v90[1]);
        v100 = v90[(unsigned __int64)v17 / 0x10 + 9];
        v99 = v90[(unsigned __int64)v17 / 0x10 + 10];
        v101 = vmlaq_f32(v23, v94, *v90);
        v102 = v90[2];
        v90 = (float32x4_t*)((char*)v90 + 2 * v17);
        v103 = vbicq_s8(v100, vceqzq_s32(vandq_s8(v99, v88)));
        v22 = vmlaq_f32(v97, v103, v91[-4]);
        v18 = vmlaq_f32(v92, v91[11], v91[11]);
        v19 = vmlaq_f32(v93, v91[12], v91[12]);
        v23 = vmlaq_f32(v101, v103, *v91);
        v24 = vmlaq_f32(v98, v103, v91[1]);
        v20 = vmlaq_f32(v95, v103, v91[-6]);
        v21 = vmlaq_f32(v96, v103, v91[-5]);
        v25 = vmlaq_f32(vmlaq_f32(v25, v94, v102), v103, v91[2]);
      } while (v89 != 0);
      v16 = v90 - 6;
    }
    if ((v15 & 1) == 0) {
      goto LABEL_30;
    }
    LANES128(v104).n128_u64[0] = 0x200000002LL;
    LANES128(v104).n128_u64[1] = 0x200000002LL;
    v85 = vbicq_s8(v16[15], vceqzq_s32(vandq_s8(v16[16], v104)));
    v86 = v16[17];
    v87 = v16[18];
  }
  v18 = vmlaq_f32(v18, v86, v86);
  v19 = vmlaq_f32(v19, v87, v87);
  v20 = vmlaq_f32(v20, v85, *v16);
  v21 = vmlaq_f32(v21, v85, v16[1]);
  v22 = vmlaq_f32(v22, v85, v16[2]);
  v23 = vmlaq_f32(v23, v85, v16[6]);
  v24 = vmlaq_f32(v24, v85, v16[7]);
  v25 = vmlaq_f32(v25, v85, v16[8]);
LABEL_30:
  v42 = v13[8];
  v41 = v13[9];
  v43 = v13[7];
  v44 = vsubq_f32(v23, vmlsq_f32(vmulq_f32(v22, v42), v21, v41));
  v45 = vsubq_f32(v24, vmlsq_f32(vmulq_f32(v20, v41), v22, v43));
  v46 = vsubq_f32(v25, vmlsq_f32(vmulq_f32(v21, v43), v20, v42));
  v47 = vmlaq_f32(vmlaq_f32(vmulq_f32(v44, v44), v45, v45), v46, v46);
  v48 = vmlaq_f32(vmlaq_f32(vmulq_f32(v20, v20), v21, v21), v22, v22);
  v49 = vrsqrteq_f32(v48);
  v50 = vmulq_f32(v49, vrsqrtsq_f32(vmulq_f32(v49, v49), v48));
  v51 = vmulq_f32(v50, vrsqrtsq_f32(vmulq_f32(v50, v50), v48));
  v52 = vmulq_f32(v51, vrsqrtsq_f32(vmulq_f32(v51, v51), v48));
  v53 = vbslq_s8(
      vceqzq_f32(v48), v48,
      vmulq_f32(v48, vmulq_f32(v52, vrsqrtsq_f32(vmulq_f32(v52, v52), v48))));
  v54 = vrsqrteq_f32(v47);
  v55 = vmulq_f32(v54, vrsqrtsq_f32(vmulq_f32(v54, v54), v47));
  v56 = vmulq_f32(v55, vrsqrtsq_f32(vmulq_f32(v55, v55), v47));
  v57 = vmulq_f32(v56, vrsqrtsq_f32(vmulq_f32(v56, v56), v47));
  v58 = vorrq_s8(
      vcgtq_f32(vbslq_s8(vceqzq_f32(v47), v47,
                         vmulq_f32(v47, vmulq_f32(v57, vrsqrtsq_f32(
                                                           vmulq_f32(v57, v57),
                                                           v47)))),
                v13[2]),
      vcgtq_f32(v53, v13[1]));
  if (v6 != nullptr) {
    LANES64(v6[1]).n64_u32[0] = LANES128(v22).n128_u32[0];
    LANES64(*(v6)).n64_u64[0] =
        LANES64_OF(vzip1_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]),
                             COERCE_AS(int32x2_t, LANES128(v21).n128_u64[0])))
            .n64_u64[0];
    LANES64(v6[2]).n64_u64[0] =
        LANES64_OF(vzip1_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]),
                             COERCE_AS(int32x2_t, LANES128(v45).n128_u64[0])))
            .n64_u64[0];
    LANES64(v6[3]).n64_u64[0] =
        LANES64_OF(vzip1_s32(COERCE_AS(int32x2_t, LANES128(v46).n128_u64[0]),
                             COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v58).n128_u32[0] == 0 || LANES128(*(v13)).n128_u8[12] == 0) {
      v60 = 0;
    }
    else {
      v60 = 0x80000000;
    }
    LANES64(v6[1]).n64_u32[1] =
        v60 & 0x80000000 | LANES128(v19).n128_u32[0] & 0x7FFFFFFF;
  }
  if (v7 != nullptr) {
    LANES64(*(v7)).n64_u64[0] =
        LANES64_OF(vzip2_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]),
                             COERCE_AS(int32x2_t, LANES128(v21).n128_u64[0])))
            .n64_u64[0];
    LANES64(v7[1]).n64_u32[0] = LANES128(v22).n128_u32[1];
    LANES64(v7[2]).n64_u64[0] =
        LANES64_OF(vzip2_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]),
                             COERCE_AS(int32x2_t, LANES128(v45).n128_u64[0])))
            .n64_u64[0];
    LANES64(v7[3]).n64_u64[0] =
        LANES64_OF(vzip2_s32(COERCE_AS(int32x2_t, LANES128(v46).n128_u64[0]),
                             COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v58).n128_u32[1] == 0 || LANES128(*(v13)).n128_u8[13] == 0) {
      v62 = 0;
    }
    else {
      v62 = 0x80000000;
    }
    LANES64(v7[1]).n64_u32[1] =
        v62 & 0x80000000 | LANES128(v19).n128_u32[1] & 0x7FFFFFFF;
  }
  if (v8 != 0) {
    *(_QWORD*)v8 = LANES128_OF(vzip2q_s32(v20, v21)).n128_u64[0];
    *(_DWORD*)(v8 + 8) = LANES128(v22).n128_u32[2];
    *(_QWORD*)(v8 + 16) = LANES128_OF(vzip2q_s32(v44, v45)).n128_u64[0];
    *(_QWORD*)(v8 + 24) = LANES128_OF(vzip2q_s32(v46, v18)).n128_u64[0];
    if (LANES128(v58).n128_u32[2] == 0 || LANES128(*(v13)).n128_u8[14] == 0) {
      v64 = 0;
    }
    else {
      v64 = 0x80000000;
    }
    *(_DWORD*)(v8 + 12) =
        v64 & 0x80000000 | LANES128(v19).n128_u32[2] & 0x7FFFFFFF;
  }
  if (v9 != 0) {
    *(_DWORD*)(v9 + 8) = LANES128(v22).n128_u32[3];
    *(_QWORD*)v9 =
        LANES128_OF(vuzp2q_s32(vuzp2q_s32(v20, v21), v20)).n128_u64[0];
    *(_QWORD*)(v9 + 16) =
        LANES128_OF(vuzp2q_s32(vuzp2q_s32(v44, v45), v44)).n128_u64[0];
    *(_QWORD*)(v9 + 24) =
        LANES128_OF(vuzp2q_s32(vuzp2q_s32(v46, v18), v46)).n128_u64[0];
    v65 = LANES128(*(v13)).n128_u8[15];
    if (LANES128(v58).n128_u32[3] == 0 || v65 == 0) {
      v67 = 0;
    }
    else {
      v67 = 0x80000000;
    }
    *(_DWORD*)(v9 + 12) =
        v67 & 0x80000000 | LANES128(v19).n128_u32[3] & 0x7FFFFFFF;
  }
  return result;
}

#pragma GCC visibility pop
