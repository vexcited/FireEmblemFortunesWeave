#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_ad5280(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a82ea0;
extern __int128 GameData_1a82f20;
__int64 gfx_flow_b6be20(__int64 a1, __int64 a2);
__int64 gfx_flow_b6bf20(__int64 a1, __int64 a2);

__int64 gfx_flow_b6be20(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  gfx_shader_Archive_CreateShader((void*)(&v8_.v8), *(_QWORD*)(a2 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"ClusteredCulling", 0x10u);
  v3 = v8_.v8;
  v4 = v8_.v9;
  v5 = *(_QWORD*)(a1 + 16);
  v8_.v8 = 0;
  v8_.v9 = 0;
  *(_QWORD*)(a1 + 8) = v3;
  *(_QWORD*)(a1 + 16) = v4;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v8_.v9;
  if (v8_.v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8_.v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  GameRoutine_ad5280(*(_QWORD*)(a1 + 8));
  return DecalObject_a91100(
      (__int64*)(a1 + 24), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 356);
}

__int64 gfx_flow_b6bf20(__int64 a1, __int64 a2)
{
  int v2;
  bool v5;
  int v6;
  int v7;
  float* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  __int64 v13;
  float32x4_t v14;
  __int64 v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  __int64 v41;
  __int64 v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x4_t v50;
  float32x4_t v51;
  unsigned __int64 v52;
  int8x16_t v53;
  int8x16_t v54;
  int8x16_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  unsigned __int64 v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  int8x16_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  int8x16_t v85;
  float32x4_t v86;
  int8x16_t v87;
  int8x16_t v88;
  int8x16_t v89;
  unsigned __int64 v90;
  int8x16_t v91;
  int8x16_t v92;
  unsigned __int64 v93;
  int8x16_t v94;
  int8x16_t v95;
  unsigned __int64 v96;
  int8x16_t v97;
  int8x16_t v98;
  unsigned __int64 v99;
  float v101;
  float v102;
  int8x16_t v103;
  __int128 v104;
  int8x16_t v105;
  __int128 v106;
  int8x16_t v107;
  __int128 v108;
  int8x16_t v109;
  __int128 v110;
  int8x16_t v111;
  __int128 v112;
  int8x16_t v113;
  __int128 v114;
  int8x16_t v115;
  __int128 v116;
  int8x16_t v117;
  __int128 v118;
  float32x4x4_t v119;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v2 = *(_DWORD*)(a1 + 40);
  v5 = v2 < -1;
  v6 = ((_BYTE)v2 + 1) & 1;
  if (v5) {
    v6 = -v6;
  }
  v111 = COERCE_AS(int8x16_t, GameData_1a82dc0);
  v112 = GameData_1a82dc0;
  v113 = COERCE_AS(int8x16_t, GameData_1a82dc0);
  v114 = GameData_1a82dc0;
  v115 = COERCE_AS(int8x16_t, GameData_1a82dc0);
  v116 = GameData_1a82dc0;
  *(_DWORD*)(a1 + 40) = v6;
  v7 = *(_DWORD*)(a2 + 12);
  v117 = COERCE_AS(int8x16_t, GameData_1a82dc0);
  v118 = GameData_1a82dc0;
  v103 = COERCE_AS(int8x16_t, GameData_1a82dc0);
  v104 = GameData_1a82dc0;
  v105 = COERCE_AS(int8x16_t, GameData_1a82dc0);
  v106 = GameData_1a82dc0;
  v107 = COERCE_AS(int8x16_t, GameData_1a82dc0);
  v108 = GameData_1a82dc0;
  v109 = COERCE_AS(int8x16_t, GameData_1a82dc0);
  v110 = GameData_1a82dc0;
  if (v7 >= 1) {
    v8 = (float*)(a2 + 124);
    v9 = 0;
    do {
      v10 = *((unsigned int*)v8 - 2);
      v11 = *((unsigned int*)v8 - 1);
      v12 = *(v8 - 26);
      v13 = *((unsigned int*)v8 - 25);
      v101 = *(v8 - 24);
      v102 = *v8;
      *(long double*)&v14 =
          ((long double (*)(_QWORD)) *
           (_QWORD*)(**(_QWORD**)(a2 + 216) + 16LL))(*(_QWORD*)(a2 + 216)),
             v16 = COERCE_AS(__typeof__(v16),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
             v19 = COERCE_AS(__typeof__(v19),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
             v20 = COERCE_AS(__typeof__(v20),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
             v44 = COERCE_AS(__typeof__(v44),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
             v46 = COERCE_AS(__typeof__(v46),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
             v47 = COERCE_AS(__typeof__(v47),
                             PSEUDO_REGISTER(__n128, "v3", "=w"));
      v8 += 3;
      v15 = 16 * v9++;
      v17 = vmlaq_lane_f32(vmulq_n_f32(v14, *(float*)&v10), v16,
                           COERCE_AS(float32x2_t, (v10 | (v11 << 32))), 1);
      v18 = vmlaq_lane_f32(
          vmulq_n_f32(v14, v12), v16,
          COERCE_AS(float32x2_t, (LODWORD(v12) |
                                  ((unsigned __int64)(unsigned int)v11 << 32))),
          1);
      v21 = vaddq_f32(v20, vmlaq_n_f32(v18, v19, v101));
      v22 = vmlaq_lane_f32(
          vmulq_n_f32(v14, v12), v16,
          COERCE_AS(float32x2_t, (LODWORD(v12) |
                                  ((unsigned __int64)(unsigned int)v13 << 32))),
          1);
      v23 = vaddq_f32(v20, vmlaq_n_f32(v22, v19, v101));
      v24 = vminq_f32(vminq_f32(v21, COERCE_AS(float32x4_t, GameData_1a82f20)),
                      v23);
      v25 = vmaxq_f32(vmaxq_f32(v21, COERCE_AS(float32x4_t, GameData_1a82ea0)),
                      v23);
      v26 = vaddq_f32(v20, vmlaq_n_f32(v17, v19, v101));
      v27 = vmlaq_lane_f32(vmulq_n_f32(v14, *(float*)&v10), v16,
                           COERCE_AS(float32x2_t, (v10 | (v13 << 32))), 1);
      v28 = vaddq_f32(v20, vmlaq_n_f32(v27, v19, v102));
      v29 = vaddq_f32(v20, vmlaq_n_f32(v27, v19, v101));
      v30 = vminq_f32(vminq_f32(v24, v26), v29);
      v31 = vmaxq_f32(vmaxq_f32(v25, v26), v29);
      v32 = vaddq_f32(v20, vmlaq_n_f32(v18, v19, v102));
      v33 = vminq_f32(v30, v32);
      v34 = vmaxq_f32(v31, v32);
      v35 = vaddq_f32(v20, vmlaq_n_f32(v22, v19, v102));
      v36 = vminq_f32(v33, v35);
      v37 = vmaxq_f32(v34, v35);
      v38 = vaddq_f32(v20, vmlaq_n_f32(v17, v19, v102));
      v39 = vminq_f32(vminq_f32(v36, v38), v28);
      v40 = vmaxq_f32(vmaxq_f32(v37, v38), v28);
      LANES128(v37).n128_u64[0] = LANES128(v39).n128_u64[0];
      LANES128(v37).n128_u64[1] = LANES128(v39).n128_u32[2];
      *(int8x16_t*)((char*)&v111 + v15) = v37;
      LANES128(v37).n128_u64[0] = LANES128(v40).n128_u64[0];
      LANES128(v37).n128_u64[1] = LANES128(v40).n128_u32[2];
      *(int8x16_t*)((char*)&v103 + v15) = v37;
    } while (v9 < *(int*)(a2 + 12));
    v6 = *(_DWORD*)(a1 + 40);
  }
  v41 = *(_QWORD*)(a1 + 8LL * v6 + 24);
  v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 56LL))(v41),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(long double*)&v43 =
      ((long double (*)(_QWORD)) *
       (_QWORD*)(**(_QWORD**)(a2 + 216) + 24LL))(*(_QWORD*)(a2 + 216)),
         v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v45 = vzip1q_s32(v43, v44);
  v48 = vzip1q_s32(v46, v47);
  v49 = vzip2q_s32(v43, v44);
  v50 = vzip2q_s32(v46, v47);
  v51 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v43).n128_u64[0]), 0);
  v52 = LANES64_OF(vdup_laneq_s32(v46, 2)).n64_u64[0];
  LANES128(v51).n128_u32[0] = LANES128(v46).n128_u32[0];
  v53 = vzip1q_s32(v45, v48);
  v54 = vzip1q_s32(v49, v50);
  v55 = vzip2q_s32(v49, v50);
  LANES128(v56).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v50).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v56).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v46).n128_u64[0]), 0);
  LANES128(v57).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v57).n128_i8[8] =
      vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v58 = vzip2q_s32(v45, v48);
  v59 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v43).n128_u64[0]), 1);
  LANES128(v59).n128_u32[0] = LANES128(v46).n128_u32[1];
  LANES128(v48).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v48).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v46).n128_u64[0]), 1);
  LANES128(v61).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v60).n128_i8[8] =
      vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v62 = vdupq_laneq_s32(v43, 2);
  v63 = LANES64_OF(vdup_laneq_s32(v46, 3)).n64_u64[0];
  LANES128(v62).n128_u32[0] = LANES128(v46).n128_u32[2];
  v64 = vextq_s8(v46, vdupq_laneq_s32(v43, 3), 0xCu);
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v50).n128_u64[1] = v63;
  LANES128(v61).n128_u64[1] = v52;
  LANES128(v65).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v46).n128_i8[8] =
      vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int8x8_t*)&LANES128(v65).n128_i8[8] =
      vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  LANES128(v54).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v54).n128_u64[1] = 0x3F8000003F800000LL;
  v66 = vnegq_f64(v54);
  v67 = vsubq_f32(vmulq_f32(v61, v46), vmulq_f32(v50, v65));
  v68 = vsubq_f32(vmulq_f32(v62, v46), vmulq_f32(v64, v65));
  v69 = vsubq_f32(vmulq_f32(v62, v50), vmulq_f32(v61, v64));
  v70 = vmlsq_f32(vmulq_f32(v59, v67), v68, v48);
  v71 = vmlsq_f32(vmulq_f32(v51, v67), v68, v56);
  LANES128(v68).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v68).n128_u64[1] = 0xBF800000BF800000LL;
  v72 = vmlaq_f32(v70, v69, v60);
  v73 = vmlaq_f32(v71, v69, v57);
  v74 = vnegq_f64(v68);
  v75 = vsubq_f32(vmulq_f32(v56, v60), vmulq_f32(v48, v57));
  v76 = vsubq_f32(vmulq_f32(v51, v60), vmulq_f32(v59, v57));
  v77 = vsubq_f32(vmulq_f32(v51, v48), vmulq_f32(v56, v59));
  v78 = vmulq_f32(v72, v66);
  v79 = vmulq_f32(v53, v78);
  v80 = vmlaq_f32(vmlsq_f32(vmulq_f32(v64, v75), v76, v50), v77, v46);
  LANES128(v79).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v79, v79, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0])))
          .n64_u64[0];
  v81 = vmulq_f32(vmlaq_f32(vmlsq_f32(vmulq_f32(v62, v75), v76, v61), v77, v65),
                  v74);
  LANES128(v79).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0])))
          .n64_u64[0];
  LANES128(v79).n128_u64[1] = LANES128(v79).n128_u64[0];
  v82 = vrecpeq_f32(v79);
  v83 = vmulq_f32(v82, vrecpsq_f32(v82, v79));
  v84 = vrecpsq_f32(v83, v79);
  v85 = vceqzq_f32(v79);
  v86 = vmulq_f32(v83, v84);
  v119.val[0] = vbicq_s8(vmulq_f32(v86, v78), v85);
  v119.val[1] = vbicq_s8(vmulq_f32(v86, vmulq_f32(v73, v74)), v85);
  v119.val[2] = vbicq_s8(vmulq_f32(vmulq_f32(v80, v66), v86), v85);
  v119.val[3] = vbicq_s8(vmulq_f32(v81, v86), v85);
  vst4q_f32((float*)v42, v119);
  *(float*)(v42 +
            64) = (*(float (**)(_QWORD))(**(_QWORD**)(a2 + 216) +
                                         56LL))(*(_QWORD*)(a2 + 216)),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v87 = v111;
  v88 = COERCE_AS(int8x16_t, v112);
  *(_QWORD*)(v42 + 68) = 0x41800000447A0000LL;
  *(_DWORD*)(v42 + 76) = 1058604060;
  *(_QWORD*)(v42 + 80) = LANES128(v87).n128_u64[0];
  *(_QWORD*)(v42 + 88) = LANES128_OF(vextq_s8(v87, v87, 8u)).n128_u64[0];
  v89 = COERCE_AS(int8x16_t, v104);
  v90 = LANES128_OF(vextq_s8(v103, v103, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 208) = LANES128(v103).n128_u64[0];
  *(_QWORD*)(v42 + 216) = v90;
  *(_QWORD*)(v42 + 96) = LANES128(v88).n128_u64[0];
  *(_QWORD*)(v42 + 104) = LANES128_OF(vextq_s8(v88, v88, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 224) = LANES128(v89).n128_u64[0];
  *(_QWORD*)(v42 + 232) = LANES128_OF(vextq_s8(v89, v89, 8u)).n128_u64[0];
  v91 = COERCE_AS(int8x16_t, v114);
  LANES128(v89).n128_u64[0] = LANES128_OF(vextq_s8(v113, v113, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 112) = LANES128(v113).n128_u64[0];
  *(_QWORD*)(v42 + 120) = LANES128(v89).n128_u64[0];
  v92 = COERCE_AS(int8x16_t, v106);
  v93 = LANES128_OF(vextq_s8(v105, v105, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 240) = LANES128(v105).n128_u64[0];
  *(_QWORD*)(v42 + 248) = v93;
  *(_QWORD*)(v42 + 128) = LANES128(v91).n128_u64[0];
  *(_QWORD*)(v42 + 136) = LANES128_OF(vextq_s8(v91, v91, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 256) = LANES128(v92).n128_u64[0];
  *(_QWORD*)(v42 + 264) = LANES128_OF(vextq_s8(v92, v92, 8u)).n128_u64[0];
  v94 = COERCE_AS(int8x16_t, v116);
  LANES128(v92).n128_u64[0] = LANES128_OF(vextq_s8(v115, v115, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 144) = LANES128(v115).n128_u64[0];
  *(_QWORD*)(v42 + 152) = LANES128(v92).n128_u64[0];
  v95 = COERCE_AS(int8x16_t, v108);
  v96 = LANES128_OF(vextq_s8(v107, v107, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 272) = LANES128(v107).n128_u64[0];
  *(_QWORD*)(v42 + 280) = v96;
  *(_QWORD*)(v42 + 160) = LANES128(v94).n128_u64[0];
  *(_QWORD*)(v42 + 168) = LANES128_OF(vextq_s8(v94, v94, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 288) = LANES128(v95).n128_u64[0];
  *(_QWORD*)(v42 + 296) = LANES128_OF(vextq_s8(v95, v95, 8u)).n128_u64[0];
  v97 = COERCE_AS(int8x16_t, v118);
  LANES128(v95).n128_u64[0] = LANES128_OF(vextq_s8(v117, v117, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 176) = LANES128(v117).n128_u64[0];
  *(_QWORD*)(v42 + 184) = LANES128(v95).n128_u64[0];
  v98 = COERCE_AS(int8x16_t, v110);
  v99 = LANES128_OF(vextq_s8(v109, v109, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 304) = LANES128(v109).n128_u64[0];
  *(_QWORD*)(v42 + 312) = v99;
  *(_QWORD*)(v42 + 192) = LANES128(v97).n128_u64[0];
  *(_QWORD*)(v42 + 200) = LANES128_OF(vextq_s8(v97, v97, 8u)).n128_u64[0];
  *(_QWORD*)(v42 + 320) = LANES128(v98).n128_u64[0];
  *(_QWORD*)(v42 + 328) = LANES128_OF(vextq_s8(v98, v98, 8u)).n128_u64[0];
  *(float*)(v42 + 336) = 0x1.0000000000000p+0f / (float)*(int*)a2;
  *(float*)(v42 + 340) = 0x1.0000000000000p+0f / (float)*(int*)(a2 + 4);
  *(_DWORD*)(v42 + 344) = *(_DWORD*)(a2 + 8);
  *(_DWORD*)(v42 + 348) = *(_DWORD*)(a2 + 12);
  *(_DWORD*)(v42 + 352) = *(_DWORD*)(a2 + 16);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 64LL))(v41);
}

#pragma GCC visibility pop
