#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 TargetMeshData_Unknown4(__int64 a1);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a60e8;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int64* GameData_212f878;
extern __int64 GameData_21a60e0;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float Unit_6c7fa0(__int64, _OWORD*);
float powf(float, float);
float sinf(float);
int __cxa_guard_acquire(__int64);
void MeshData_f555a0(float32x4_t*, float32x4_t*, unsigned __int64*,
                     unsigned __int64*);
void __cxa_guard_release(__int64);
void game_map_f54ba0(__int64*, unsigned __int64);
long double TargetMeshData_ResetMatrix(__int64 a1);

long double TargetMeshData_ResetMatrix(__int64 a1)
{
  float v2;
  float32x4_t v3;
  float32x4_t v4;
  int8x16_t v5;
  float v6;
  float32x4_t v7;
  float v8;
  float32x4_t v9;
  float v10;
  float v11;
  bool v12;
  float v13;
  float32x4_t v14;
  __int128 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  int v22;
  int32x2_t v23;
  int32x4_t v24;
  __int64* v25;
  int16x4_t v26;
  char* v27;
  char* v28;
  char* v29;
  char* v30;
  void (**v31)(char*);
  bool v32;
  unsigned __int64 v33;
  __int64 v34;
  int v35;
  float v36;
  int8x16_t v37;
  float v38;
  float32x2_t v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  float v43;
  float32x4_t v44;
  float32x2_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float* v49;
  int v50;
  float32x4_t v51;
  float32x4_t v52;
  int8x16_t v53;
  int8x16_t v54;
  float32x4_t v55;
  float32x4_t v56;
  int8x16_t v57;
  float v58;
  float* v59;
  float v60;
  int8x16_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  int8x16_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  int8x16_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  bool v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  unsigned int v99;
  unsigned __int64* v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  unsigned __int64 v119;
  float v120;
  float v121;
  float v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  float32x4_t v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float32x4_t v132;
  float v133;
  float v134;
  float32x4_t v135;
  float v136;
  float v137;
  float v138;
  float32x4_t v139;
  float32x4_t v140;
  __int128 v141;
  __int128 v142;
  __int64 v143;
  int v144;
  long double result;
  float32x4_t v146;
  float32x4_t v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  int8x16_t v156;
  float v157;
  float v158;
  float v159;
  float32x4_t v160;
  unsigned __int64 v161;
  float v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  float v166;
  float v167;
  unsigned __int64 v168;
  float32x4_t v169;
  float32x4_t v170;
  unsigned __int64 v171[2];
  int8x16_t v172;
  unsigned __int64 v173;
  struct {
    unsigned __int64 v174;
    int v175;
    float v176;
  } v174_;
  float32x4_t v177;
  float32x4_t v178;
  float32x4_t v179;
  float32x4_t v180[2];

  v2 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                         160LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  v3 = *(float32x4_t*)(a1 + 272);
  v4 = vsubq_f32(*(float32x4_t*)(a1 + 320), v3);
  v5 = vmulq_f32(v4, v4);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_f32[0] >= 0x1.0000000000000p-23f) {
    v6 = *(float*)(a1 + 340);
    v8 = fabsf(v2 / 0x1.3333340000000p-2f);
    if (v6 <= 0x1.0000000000000p+0f) {
      if (v6 >= 0x1.0000000000000p+0f) {
        goto LABEL_14;
      }
      v6 = v8 + v6;
      if (v6 <= 0x1.0000000000000p+0f) {
        goto LABEL_14;
      }
    }
    else {
      v6 = v6 - v8;
      if (v6 >= 0x1.0000000000000p+0f) {
        goto LABEL_14;
      }
    }
    v6 = 0x1.0000000000000p+0f;
  LABEL_14:
    v7 = *(float32x4_t*)(a1 + 288);
    goto LABEL_15;
  }
  *(_QWORD*)(a1 + 288) = LANES128(v3).n128_u64[0];
  v6 = *(float*)(a1 + 340);
  v7 = *(float32x4_t*)(a1 + 288);
  LANES128(v7).n128_u64[1] = LANES128(v3).n128_u32[2];
  v8 = fabsf(v2 / 0x1.3333340000000p-2f);
  *(float32x4_t*)(a1 + 288) = v7;
  if (v6 <= 0x0.0p+0f) {
    if (v6 >= 0x0.0p+0f) {
      goto LABEL_15;
    }
    v6 = v8 + v6;
    if (v6 <= 0x0.0p+0f) {
      goto LABEL_15;
    }
    goto LABEL_10;
  }
  v6 = v6 - v8;
  if (v6 < 0x0.0p+0f) {
  LABEL_10:
    v6 = 0x0.0p+0f;
  }
LABEL_15:
  *(float*)(a1 + 340) = v6;
  v9 = vsubq_f32(v3, v7);
  v10 = (float)(v6 + -0x1.0000000000000p-1f) +
        (float)(v6 + -0x1.0000000000000p-1f);
  if (v10 <= 0x1.0000000000000p+0f) {
    v11 = (float)(v6 + -0x1.0000000000000p-1f) +
          (float)(v6 + -0x1.0000000000000p-1f);
  }
  else {
    v11 = 0x1.0000000000000p+0f;
  }
  v12 = v10 < 0x0.0p+0f;
  v13 = 0x0.0p+0f;
  if (!v12) {
    v13 = v11;
  }
  v14 = vmlaq_n_f32(v7, v9, v13);
  *(_QWORD*)(a1 + 320) = LANES128(v14).n128_u64[0];
  v15 = *(_OWORD*)(a1 + 320);
  *((_QWORD*)&v15 + 1) = LANES128(v14).n128_u32[2];
  *(_OWORD*)(a1 + 320) = v15;
  v16 = *(float*)(a1 + 336);
  if (v16 > 0x1.0000000000000p+0f) {
    v16 = v16 - v8;
    if (v16 >= 0x1.0000000000000p+0f) {
      goto LABEL_26;
    }
  LABEL_25:
    v16 = 0x1.0000000000000p+0f;
    goto LABEL_26;
  }
  if (v16 < 0x1.0000000000000p+0f) {
    v16 = v8 + v16;
    if (v16 > 0x1.0000000000000p+0f) {
      goto LABEL_25;
    }
  }
LABEL_26:
  *(float*)(a1 + 336) = v16;
  v17 = *(float*)(a1 + 344);
  v18 = fabsf(v2 / 0x1.99999a0000000p-2f);
  if (v17 > 0x0.0p+0f) {
    v17 = v17 - v18;
    if (v17 >= 0x0.0p+0f) {
      goto LABEL_32;
    }
  LABEL_31:
    v17 = 0x0.0p+0f;
    goto LABEL_32;
  }
  if (v17 < 0x0.0p+0f) {
    v17 = v18 + v17;
    if (v17 > 0x0.0p+0f) {
      goto LABEL_31;
    }
  }
LABEL_32:
  v19 = *(float*)(a1 + 192);
  *(float*)(a1 + 344) = v17;
  v20 = 0x1.0000000000000p+0f;
  if (v19 < 0x1.99999a0000000p-4f) {
    v20 = (float)(fminf(fmaxf(v19 / 0x1.99999a0000000p-4f, 0x0.0p+0f),
                        0x1.0000000000000p+0f) *
                  0x1.570a3c0000000p-1f) +
          0x1.51eb860000000p-2f;
  }
  v166 = v20;
  v21 = powf(v17, 0x1.99999a0000000p-1f);
  v22 = *(unsigned __int8*)(a1 + 368);
  PSEUDO_LOW_LANE64(v23, n64_f32,
                    (float)(v21 * 0x1.0000000000000p+1f) +
                        0x1.0000000000000p+0f);
  v24 = vdupq_lane_s32(v23, 0);
  LANES128(v24).n128_f32[3] = v166;
  *(int32x4_t*)(a1 + 80) = v24;
  v25 = GameData_212f878;
  if (v22 == 1) {
    LANES64(v26).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(*(float32x4_t*)(a1 + 352),
                                                *(float32x4_t*)(a1 + 320)))))
            .n64_u64[0];
    if ((LANES64(v26).n64_u8[0] & 1) == 0 &&
        (LANES64(v26).n64_u8[2] & 1) == 0 &&
        (LANES64(v26).n64_u8[4] & 1) == 0 && *(_BYTE*)(a1 + 388) == 1 &&
        *(float*)(a1 + 384) == *(float*)(a1 + 336)) {
      goto LABEL_159;
    }
  }
  v27 = *(char**)(a1 + 96);
  v28 = *(char**)(a1 + 104);
  if (v27 != v28) {
    v29 = v28 - 64;
    v30 = v28 - 64;
    do {
      v31 = *(void (***)(char*))v30;
      v30 -= 64;
      (*v31)(v29);
      v32 = v29 == v27;
      v29 = v30;
    } while (!v32);
  }
  *(_QWORD*)(a1 + 104) = v27;
  if ((unsigned __int64)((v28 - v27) >> 6) <= 0x40) {
    v33 = 64;
  }
  else {
    v33 = (v28 - v27) >> 6;
  }
  game_map_f54ba0((__int64*)(a1 + 96), v33);
  v34 = *(_QWORD*)(a1 + 256);
  v35 = *(_DWORD*)(v34 + 592);
  v36 = (float)(unsigned int)(v35 - 1) * 0x1.4000000000000p+1f;
  if (v35 <= 0) {
    v36 = 0x0.0p+0f;
  }
  v164 = *(float32x4_t*)(a1 + 320);
  v167 =
      (float)((float)((float)((float)(unsigned int)(*(char*)(v34 + 584) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v36;
  LANES128(v37).n128_u64[0] = LODWORD(v167);
  v161 = COERCE_UNSIGNED_INT(
      (float)((float)((float)((float)(unsigned int)(*(char*)(v34 + 585) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v36);
  LANES128(v37).n128_u64[1] = v161;
  v172 = v37;
  v38 = Unit_6c7fa0(v34, &v172);
  LANES64(v39).n64_u64[0] = __PAIR64__(LODWORD(v38), LODWORD(v167));
  v40 = *(_QWORD*)(*(_QWORD*)(a1 + 256) + 264LL);
  if (v40 == 0) {
    v43 = 0x1.8000000000000p+0f;
  LABEL_59:
    v44 = v164;
    goto LABEL_60;
  }
  v41 = *(_QWORD*)(v40 + 392);
  v42 = *(_QWORD*)(v40 + 400);
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v41 != 0) {
    v43 = *(float*)(*(_QWORD*)(v41 + 11792) + 32LL) *
          (float)(*(float*)(v41 + 32) *
                  (float)(*(float*)(v41 + 40) +
                          (float)((float)(0x1.0000000000000p+0f -
                                          *(float*)(v41 + 40)) *
                                  *(float*)(v40 + 336))));
    v44 = v164;
    if (v42 == 0) {
      goto LABEL_60;
    }
  }
  else {
    v43 = 0x1.8000000000000p+0f;
    v44 = v164;
    if (v42 == 0) {
      goto LABEL_60;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v168 = __PAIR64__(LODWORD(v38), LODWORD(v167));
    v158 = v43;
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    std___1___shared_weak_count___release_weak(v42);
    v43 = v158;
    LANES64(v39).n64_u64[0] = v168;
    goto LABEL_59;
  }
LABEL_60:
  LANES64(v45).n64_u32[0] = 0;
  LANES64(v45).n64_f32[1] = v43;
  LANES128(v46).n128_u64[0] = LANES64_OF(vadd_f32(v39, v45)).n64_u64[0];
  LANES128(v46).n128_u64[1] = v161;
  v165 = v46;
  v47 = vsubq_f32(v44, v46);
  v48 = vmulq_f32(v47, v47);
  LANES128(v48).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
          .n64_u64[0];
  LANES128(v48).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v48).n128_f32[0] != 0x0.0p+0f) {
    LANES128(v48).n128_u64[1] = LANES128(v48).n128_u64[0];
    v49 = (float*)*v25;
    v50 = *(_DWORD*)(a1 + 304);
    v51 = vrsqrteq_f32(v48);
    v52 = vmulq_f32(v51, vrsqrtsq_f32(v51, vmulq_f32(v48, v51)));
    v53 =
        vmulq_f32(v47, vmulq_f32(v52, vrsqrtsq_f32(v52, vmulq_f32(v48, v52))));
    LANES128(v52).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v52).n128_u64[1] = 0x3F0000003F000000LL;
    v54 = vbicq_s8(v53, vceqzq_f32(v48));
    LANES128(v55).n128_u64[0] = 0xC0200000C0200000LL;
    LANES128(v55).n128_u64[1] = 0xC0200000C0200000LL;
    v169 = vaddq_f32(v44, vmulq_f32(vmulq_f32(v54, v55), v52));
    v56 = vsubq_f32(v165, v169);
    v57 = vmulq_f32(v56, v56);
    LANES128(v57).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
            .n64_u64[0];
    v162 = LANES64_OF(vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]))))
               .n64_f32[0];
    v58 = (float)(PSEUDO_UNFUSED(0x1.0000000000000p-3f * v162)) +
          (float)(fabsf(LANES128(v56).n128_f32[1]) * 0x1.0000000000000p-2f);
    if (v50 == 3) {
      v59 = v49 + 371;
    }
    else if (v50 == 2) {
      v59 = v49 + 370;
    }
    else {
      v59 = v49 + 368;
    }
    v60 = fmaxf(v58, 0x1.4000000000000p-1f);
    LANES128(v54).n128_u32[1] = 0;
    v159 = *v59;
    v61 = vmulq_f32(v54, v54);
    LANES128(v61).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v61, v61, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
            .n64_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
            .n64_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v61).n128_u64[0];
    v62 = vrsqrteq_f32(v61);
    v63 = vmulq_f32(v62, vrsqrtsq_f32(v62, vmulq_f32(v61, v62)));
    v156 = vbicq_s8(
        vmulq_f32(v54, vmulq_f32(v63, vrsqrtsq_f32(v63, vmulq_f32(v61, v63)))),
        vceqzq_f32(v61));
    math_Quat_FromYawPitchRoll((void*)(&v172), 0x1.921fb60000000p+0f, 0x0.0p+0f,
                               0x0.0p+0f);
    LANES128(v64).n128_u64[0] = LANES128(v156).n128_u64[0];
    v65 = vmulq_f32(v172, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v66).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v67).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v66).n128_u64[1] = LANES128(v66).n128_u64[0];
    LANES128(v64).n128_u64[1] = LANES128(v67).n128_u64[0];
    *(int8x8_t*)&LANES128(v68).n128_i8[8] =
        vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v69 =
        vmlaq_f32(vmulq_f32(v65, v66), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v64, v68));
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v67).n128_u64[1] = LANES128(v64).n128_u64[0];
    LANES128(v64).n128_u64[1] = LANES128(v156).n128_u64[0];
    *(int32x2_t*)&LANES128(v70).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v65).n128_u64[0]), 1);
    v71 = vmlaq_f32(v69, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v64, v70));
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v65).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v65).n128_u64[1] = LANES128(v65).n128_u64[0];
    v72 = vmlsq_f32(v71, v64, v67);
    LANES128(v67).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] = LANES128(v172).n128_u64[0];
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[1] = LANES128(v67).n128_u64[0];
    LANES128(v74).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v73).n128_i8[8] =
        vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v74).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v72).n128_u64[0]), 1);
    v75 =
        vmlaq_f32(vmulq_f32(v65, v72), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v64, v73));
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v67).n128_u64[1] = LANES128(v73).n128_u64[0];
    LANES128(v73).n128_u64[1] = LANES128(v172).n128_u64[0];
    LANES128(v76).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v76).n128_i8[8] =
        vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v77 = vmlsq_f32(vmlaq_f32(v75, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v73, v74)),
                    v76, v67);
    LANES128(v77).n128_u32[3] = 0;
    if (v162 <= 0x0.0p+0f) {
      v153 = -*(float*)GameData_212c188;
      v154 = *((float*)GameData_212c188 + 1);
      v151 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
      v152 =
          *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
      v150 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
      v97 = 0x1.0000000000000p+0f;
    }
    else {
      v78 = v162 + -0x1.e000000000000p+2f;
      if ((float)(v162 + -0x1.e000000000000p+2f) < 0x0.0p+0f) {
        v78 = 0x0.0p+0f;
      }
      v79 = v78 / v162;
      if (v79 <= 0x1.0000000000000p+0f) {
        v80 = v79;
      }
      else {
        v80 = 0x1.0000000000000p+0f;
      }
      if (v79 >= 0x1.0000000000000p-1f) {
        v81 = v80;
      }
      else {
        v81 = 0x1.0000000000000p-1f;
      }
      v82 =
          (float)(PSEUDO_UNFUSED(*(float*)(a1 + 336) * 0x1.921fb60000000p+1f)) +
          (float)(roundf((float)(*(float*)(a1 + 336) * 0x1.921fb60000000p+1f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
      if (v82 < -0x1.921fb60000000p+0f) {
        v83 = -0x1.0000000000000p+0f;
      }
      else {
        v83 = 0x1.0000000000000p+0f;
      }
      v84 = -0x1.921fb60000000p+1f - v82;
      if (v82 >= -0x1.921fb60000000p+0f) {
        v84 = v82;
      }
      v85 = 0x1.921fb60000000p+1f - v82;
      v86 = v82 <= 0x1.921fb60000000p+0f;
      if (v82 > 0x1.921fb60000000p+0f) {
        v87 = -0x1.0000000000000p+0f;
      }
      else {
        v87 = v83;
      }
      if (v86) {
        v88 = v84;
      }
      else {
        v88 = v85;
      }
      v89 = v88 * v88;
      v153 = -*(float*)GameData_212c188;
      v154 = *((float*)GameData_212c188 + 1);
      v90 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
      v91 = -(float)(v90 -
                     (float)((float)(v154 -
                                     (float)(*(float*)GameData_212c188 * v89)) *
                             v89));
      v92 = -v90;
      v93 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
      v151 = v92;
      v152 =
          *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
      v150 = -v93;
      v94 =
          v87 *
          (float)((float)((float)-(float)(v93 -
                                          (float)((float)(v152 +
                                                          (float)(v91 * v89)) *
                                                  v89)) *
                          v89) +
                  0x1.0000000000000p+0f);
      v95 = fabsf(v94) * 0x1.0000000000000p-1f;
      if (v94 >= 0x0.0p+0f) {
        v96 = -0x1.0000000000000p+0f;
      }
      else {
        v96 = 0x1.0000000000000p+0f;
      }
      v97 =
          v81 + (float)(fminf(fmaxf((float)(v95 * v96) + 0x1.0000000000000p-1f,
                                    0x0.0p+0f),
                              0x1.0000000000000p+0f) *
                        (float)(0x1.0000000000000p+0f - v81));
    }
    v149 = v97;
    v98 = 0x1.0000000000000p-1f;
    v148 = fminf(v60, 0x1.4000000000000p+2f);
    v99 = 1;
    v163 = vsubq_f32(v169, v165);
    v147 = vmulq_n_f32(v77, v159);
    v146 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83610), v159);
    v100 = (unsigned __int64*)GameData_212c958;
    while (1) {
      v101 = (float)(v149 * (float)((float)(v99 - 1) / 0x1.8000000000000p+4f)) *
             0x1.921fb60000000p+1f;
      v102 = v101 + (float)(roundf(v101 * 0x1.45f3060000000p-3f) *
                            -0x1.921fb60000000p+2f);
      if (v102 > 0x1.921fb60000000p+0f) {
        break;
      }
      v103 = 0x1.0000000000000p+0f;
      if (v102 < -0x1.921fb60000000p+0f) {
        v102 = -0x1.921fb60000000p+1f - v102;
        goto LABEL_96;
      }
    LABEL_97:
      v104 =
          v103 *
          (float)((float)((float)(v150 +
                                  (float)((float)(v152 +
                                                  (float)((float)(v151 +
                                                                  (float)((float)(v154 +
                                                                                  (float)(v153 *
                                                                                          (float)(v102 *
                                                                                                  v102))) *
                                                                          (float)(v102 *
                                                                                  v102))) *
                                                          (float)(v102 *
                                                                  v102))) *
                                          (float)(v102 * v102))) *
                          (float)(v102 * v102)) +
                  0x1.0000000000000p+0f);
      v105 = fabsf(v104) * v98;
      if (v104 >= 0x0.0p+0f) {
        v106 = -0x1.0000000000000p+0f;
      }
      else {
        v106 = 0x1.0000000000000p+0f;
      }
      v107 = v98 + (float)(v105 * v106);
      v108 = (float)(PSEUDO_UNFUSED(
                 (float)(v149 * (float)((float)v99 / 0x1.8000000000000p+4f)) *
                 0x1.921fb60000000p+1f)) +
             (float)(roundf((float)((float)(v149 *
                                            (float)((float)v99 /
                                                    0x1.8000000000000p+4f)) *
                                    0x1.921fb60000000p+1f) *
                            0x1.45f3060000000p-3f) *
                     -0x1.921fb60000000p+2f);
      v109 = -0x1.921fb60000000p+1f - v108;
      if (v108 < -0x1.921fb60000000p+0f) {
        v110 = -0x1.0000000000000p+0f;
      }
      else {
        v110 = 0x1.0000000000000p+0f;
      }
      if (v108 >= -0x1.921fb60000000p+0f) {
        v109 = v108;
      }
      if (v108 <= 0x1.921fb60000000p+0f) {
        v111 = v110;
      }
      else {
        v109 = 0x1.921fb60000000p+1f - v108;
        v111 = -0x1.0000000000000p+0f;
      }
      v112 =
          v111 *
          (float)((float)((float)(v150 +
                                  (float)((float)(v152 +
                                                  (float)((float)(v151 +
                                                                  (float)((float)(v154 +
                                                                                  (float)(v153 *
                                                                                          (float)(v109 *
                                                                                                  v109))) *
                                                                          (float)(v109 *
                                                                                  v109))) *
                                                          (float)(v109 *
                                                                  v109))) *
                                          (float)(v109 * v109))) *
                          (float)(v109 * v109)) +
                  0x1.0000000000000p+0f);
      v113 = fabsf(v112) * v98;
      if (v112 >= 0x0.0p+0f) {
        v114 = -0x1.0000000000000p+0f;
      }
      else {
        v114 = 0x1.0000000000000p+0f;
      }
      v115 = v98 + (float)(v113 * v114);
      v116 = sinf(v107 * 0x1.921fb60000000p+1f);
      v117 = powf(fabsf(v116), 0x1.99999a0000000p-1f);
      v118 = powf(v107, 0x1.3333340000000p+0f);
      LODWORD(v119) = 0;
      *((float*)&v119 + 1) = v148 * v117;
      v170 = vaddq_f32(COERCE_AS(float32x4_t, v119),
                       vmlaq_n_f32(v165, v163, v118));
      v120 = sinf(v115 * 0x1.921fb60000000p+1f);
      v121 = powf(fabsf(v120), 0x1.99999a0000000p-1f);
      v122 = powf(v115, 0x1.3333340000000p+0f);
      LODWORD(v123) = 0;
      v124 = v100[1];
      v171[0] = *v100;
      v171[1] = v124;
      *((float*)&v123 + 1) = v148 * v121;
      v125 = vaddq_f32(COERCE_AS(float32x4_t, v123),
                       vmlaq_n_f32(v165, v163, v122));
      v160 = v125;
      v126 = (float)(0x1.0000000000000p+0f -
                     fabsf((float)(v107 * 0x1.0000000000000p+1f) +
                           -0x1.0000000000000p+0f)) /
             0x1.3333340000000p-1f;
      if (v126 <= 0x1.0000000000000p+0f) {
        v127 = v126;
      }
      else {
        v127 = 0x1.0000000000000p+0f;
      }
      v12 = v126 < 0x0.0p+0f;
      v128 = (float)(fminf(fmaxf(v127, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                     0x1.4ccccc0000000p-1f) +
             0x1.6666660000000p-2f;
      v129 = (float)(0x1.0000000000000p+0f -
                     fabsf((float)(v115 * 0x1.0000000000000p+1f) +
                           -0x1.0000000000000p+0f)) /
             0x1.3333340000000p-1f;
      if (v12) {
        v130 = 0x1.6666660000000p-2f;
      }
      else {
        v130 = v128;
      }
      if (v129 <= 0x1.0000000000000p+0f) {
        v131 = v129;
      }
      else {
        v131 = 0x1.0000000000000p+0f;
      }
      v12 = v129 < 0x0.0p+0f;
      v132 = vmulq_n_f32(v147, v130);
      v133 = (float)(fminf(fmaxf(v131, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                     0x1.4ccccc0000000p-1f) +
             0x1.6666660000000p-2f;
      if (v12) {
        v134 = 0x1.6666660000000p-2f;
      }
      else {
        v134 = v133;
      }
      v155 = v134;
      v157 = v130;
      v179 = vaddq_f32(v132, v170);
      v180[0] = vsubq_f32(v170, v132);
      v135 = vmulq_n_f32(v147, v134);
      v177 = vaddq_f32(v125, v135);
      v178 = vsubq_f32(v125, v135);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release((__int64)&GameData_21a60e8);
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release((__int64)&GameData_21a60e8);
      }
      v98 = 0x1.0000000000000p-1f;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release((__int64)&GameData_21a60e8);
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release((__int64)&GameData_21a60e8);
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release((__int64)&GameData_21a60e8);
      }
      LANES128(v172).n128_u32[0] = 0;
      v136 = v107 + (float)((float)(v115 - v107) * 0x0.0p+0f);
      v137 = v107 + (float)(v115 - v107);
      v138 = v107 + (float)((float)(v115 - v107) * 0x1.0000000000000p-1f);
      LODWORD(v173) = 1065353216;
      LODWORD(v174_.v174) = 0;
      v174_.v175 = 1056964608;
      *((float*)&v173 + 1) = v137;
      *((float*)&v174_.v174 + 1) = v137;
      *(unsigned __int64*)((char*)LANES128(v172).n128_u64 + 4) =
          LODWORD(v136) | 0x3F80000000000000LL;
      LANES128(v172).n128_f32[3] = v136;
      v174_.v176 = v138;
      MeshData_f555a0((float32x4_t*)a1, v180, LANES128(v172).n128_u64, v171);
      MeshData_f555a0((float32x4_t*)a1, &v179, &LANES128(v172).n128_u64[1],
                      v171);
      MeshData_f555a0((float32x4_t*)a1, &v177, &v173, v171);
      MeshData_f555a0((float32x4_t*)a1, &v178, &v174_.v174, v171);
      v139 = vmulq_n_f32(v146, v157);
      v179 = vaddq_f32(v139, v170);
      v180[0] = vsubq_f32(v170, v139);
      v140 = vmulq_n_f32(v146, v155);
      v177 = vaddq_f32(v160, v140);
      v178 = vsubq_f32(v160, v140);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release((__int64)&GameData_21a60e8);
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release((__int64)&GameData_21a60e8);
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release((__int64)&GameData_21a60e8);
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release((__int64)&GameData_21a60e8);
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release((__int64)&GameData_21a60e8);
      }
      LANES128(v172).n128_u32[0] = 0;
      *(unsigned __int64*)((char*)LANES128(v172).n128_u64 + 4) =
          LODWORD(v136) | 0x3F80000000000000LL;
      LANES128(v172).n128_f32[3] = v136;
      LODWORD(v173) = 1065353216;
      *((float*)&v173 + 1) = v137;
      LODWORD(v174_.v174) = 0;
      *((float*)&v174_.v174 + 1) = v137;
      v174_.v175 = 1056964608;
      v174_.v176 = v138;
      MeshData_f555a0((float32x4_t*)a1, v180, LANES128(v172).n128_u64, v171);
      MeshData_f555a0((float32x4_t*)a1, &v179, &LANES128(v172).n128_u64[1],
                      v171);
      MeshData_f555a0((float32x4_t*)a1, &v177, &v173, v171);
      MeshData_f555a0((float32x4_t*)a1, &v178, &v174_.v174, v171);
      if (++v99 == 25) {
        goto LABEL_155;
      }
    }
    v102 = 0x1.921fb60000000p+1f - v102;
  LABEL_96:
    v103 = -0x1.0000000000000p+0f;
    goto LABEL_97;
  }
LABEL_155:
  if (*(_BYTE*)(a1 + 368) == 1) {
    v141 = *(_OWORD*)(a1 + 320);
    *(_QWORD*)(a1 + 352) = v141;
    v142 = *(_OWORD*)(a1 + 352);
    *((_QWORD*)&v142 + 1) = DWORD2(v141);
    *(_OWORD*)(a1 + 352) = v142;
  }
  else {
    v143 = *(_QWORD*)(a1 + 328);
    *(_QWORD*)(a1 + 352) = *(_QWORD*)(a1 + 320);
    *(_QWORD*)(a1 + 360) = v143;
    *(_BYTE*)(a1 + 368) = 1;
  }
  v144 = *(_DWORD*)(a1 + 336);
  *(_BYTE*)(a1 + 388) = 1;
  *(_DWORD*)(a1 + 384) = v144;
LABEL_159:
  *(float*)(a1 + 12) = -(float)(*(float*)(*(_QWORD*)(a1 + 312) + 160LL) *
                                *(float*)(*v25 + 1488));
  result = *(long double*)(a1 + 176);
  *(_OWORD*)(a1 + 16) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 32) = GameData_1a83610;
  *(_OWORD*)(a1 + 48) = GameData_1a83090;
  *(long double*)(a1 + 64) = result;
  return result;
}

__int64 TargetMeshData_Unknown4(__int64 a1)
{
  return *(_QWORD*)(a1 + 256) - 0x61C8864680B583EBLL;
}

#pragma GCC visibility pop
