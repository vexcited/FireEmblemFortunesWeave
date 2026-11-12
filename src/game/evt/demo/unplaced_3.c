#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void MagicInst_10a43c0(PSEUDO_X8, int, float32x4_t*,
                                                  float32x4_t*, int, float,
                                                  float);
__int64 GameRoutine_11c32d0(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int64* GameData_212fc38[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21a6050;
extern __int64 GameData_21c6978;
extern __int64 game_g_frame_clock;
extern char GameData_1a9f09e;
extern float GameData_1bb6530[3];
extern int GameData_21a5690[624];
float CharacterWork_11c7720(__int64, float32x4_t*, float32x4_t*, int8x16_t*,
                            int8x16_t*, const char*, _DWORD*, _DWORD*, float,
                            float, float, float);
float Cursor_734120(int, int, float, float, float, float);
void gfx_render_b3aee0(float32x4_t*);
void wld_a7fda0(__int64, _DWORD*);
void game_evt_demo_11c72e0(__int64 a1, __int64 a2, float32x4_t* a3, __int64 a4);
void game_evt_demo_11c8190(__int64 a1);

void game_evt_demo_11c72e0(__int64 a1, __int64 a2, float32x4_t* a3, __int64 a4)
{
  float32x4_t v8;
  unsigned __int64 v9;
  double v10;
  double v11;
  double v12;
  float32x4_t v13;
  unsigned int v14;
  unsigned int v15;
  float32x4_t v16;
  unsigned __int64 v17;
  float32x4_t v18;
  int8x16_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  double v32;
  double v33;
  unsigned int v34;
  float32x4_t v35;
  float32x4_t v36;
  unsigned int v37;
  unsigned __int64 v38;
  float32x4_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  int8x16_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float v56;
  float v57;
  float v58;
  float v59;
  const char* v60;
  float32x4_t v61;
  int8x16_t v62;
  int8x16_t v63;
  unsigned __int64 v64;
  float32x4_t v65;
  float32x4_t v66;
  __int128 v67;
  __int128 v68;
  float32x4_t v69;
  int8x16_t v70;
  int8x16_t v71;
  float32x4_t v72;
  struct {
    float32x4_t v73;
    char gap208_[88];
    unsigned __int64 v74;
  } v73_;

  if (a2 != 0 && a3 != nullptr) {
    *(_QWORD*)(a1 + 40) = a3;
    v8 = a3[11];
    LODWORD(v9) = 0;
    LANES128(v8).n128_f32[1] =
        LANES128(a3[12]).n128_f32[1] +
        COERCE_FLOAT(HIDWORD(LANES128(a3[11]).n128_u64[0]));
    *((float*)&v9 + 1) = LANES128(a3[12]).n128_f32[2] * 0x1.1df46a0000000p-6f;
    v66 = v8;
    v67 = v9;
    LANES128(v8).n128_u32[0] = *(_QWORD*)(a2 + 32);
    LANES128(v8).n128_u32[1] = *(_DWORD*)(a2 + 36);
    v64 = *(_QWORD*)(a2 + 32);
    v10 = *((float*)&v9 + 1) * 0x1.0000000000000p-1;
    LANES128(v8).n128_u64[1] = *(unsigned int*)(a2 + 40);
    v63 = v8;
    v11 = cos(v10);
    v12 = sin(v10);
    v73_.v74 = 0x8000000000000000LL;
    LANES128(v13).n128_u64[0] = v64;
    *(float*)&v14 = v12 + PSEUDO_UNFUSED(v11 * 0x0.0p+0);
    *(float*)&v15 = v11 + PSEUDO_UNFUSED(v12 * 0x0.0p+0);
    LANES128(v16).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v63, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(float*)&v17 = PSEUDO_UNFUSED(v12 * -0x0.0p+0) + v11 * 0x0.0p+0;
    LANES128(v18).n128_u64[0] = __PAIR64__(v14, v17);
    LANES128(v13).n128_u64[1] = LANES128(v16).n128_u64[0];
    LANES128(v18).n128_u64[1] = __PAIR64__(v15, v17);
    v19 = vmulq_f32(v18, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v18).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v63, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v20).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v18).n128_u64[1] = LANES128(v18).n128_u64[0];
    *(int8x8_t*)&LANES128(v20).n128_i8[8] =
        vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v22 =
        vmlaq_f32(vmulq_f32(v18, v19), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v13, v20));
    LANES128(v20).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v63, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v21).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v19).n128_u64[0]), 1);
    LANES128(v16).n128_u64[1] = LANES128(v20).n128_u64[0];
    LANES128(v20).n128_u64[1] = v64;
    v23 = vmlaq_f32(v22, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v20, v21));
    LANES128(v20).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v20).n128_i8[8] =
        vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v19).n128_u64[0] = __PAIR64__(v14, v17);
    HIDWORD(v17) = v15;
    v24 = vmlsq_f32(v23, v20, v16);
    LANES128(v25).n128_u64[0] = __PAIR64__(v14, v17);
    LANES128(v26).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v20).n128_u64[0] = LANES128(v25).n128_u64[0];
    LANES128(v25).n128_u64[1] = v17;
    *(int8x8_t*)&LANES128(v26).n128_i8[8] =
        vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
    v28 = vmulq_f32(v27, v24);
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v20).n128_u64[1] = LANES128(v27).n128_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v25).n128_u64[0];
    LANES128(v25).n128_u64[1] = LANES128(v19).n128_u64[0];
    v29 = vmlaq_f32(v28, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v20, v26));
    LANES128(v26).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v26).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 1);
    v30 = vmlaq_f32(v29, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v25, v26));
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v25).n128_i8[8] =
        vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v31 = vmlsq_f32(v30, v25, v27);
    LANES128(v27).n128_u32[0] = *(_QWORD*)(a2 + 44);
    LANES128(v31).n128_u32[3] = 0;
    LANES128(v27).n128_u32[1] = *(_DWORD*)(a2 + 48);
    v65 = v31;
    LANES128(v27).n128_u64[1] = *(unsigned int*)(a2 + 52);
    v62 = v27;
    LANES128(v63).n128_u64[0] = *(_QWORD*)(a2 + 44);
    v32 = cos(v10);
    v33 = sin(v10);
    *(float*)&v34 = v32 + PSEUDO_UNFUSED(v33 * 0x0.0p+0);
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v36).n128_u64[0] = LANES128(v63).n128_u64[0];
    LANES128(v36).n128_u64[1] = LANES128(v35).n128_u64[0];
    *(float*)&v37 = v33 + PSEUDO_UNFUSED(v32 * 0x0.0p+0);
    *(float*)&v38 = PSEUDO_UNFUSED(v33 * -0x0.0p+0) + v32 * 0x0.0p+0;
    LANES128(v39).n128_u64[0] = __PAIR64__(v37, v38);
    LANES128(v39).n128_u64[1] = __PAIR64__(v34, v38);
    v40 = vmulq_f32(v39, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v39).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v41).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
    *(int8x8_t*)&LANES128(v41).n128_i8[8] =
        vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v42).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v43 =
        vmlaq_f32(vmulq_f32(v39, v40), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v36, v41));
    LANES128(v41).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v42).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v40).n128_u64[0]), 1);
    LANES128(v35).n128_u64[1] = LANES128(v41).n128_u64[0];
    LANES128(v41).n128_u64[1] = LANES128(v63).n128_u64[0];
    v44 = vmlaq_f32(v43, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v41, v42));
    LANES128(v45).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v45).n128_i8[8] =
        vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v40).n128_u64[0] = __PAIR64__(v37, v38);
    HIDWORD(v38) = v34;
    v46 = vmlsq_f32(v44, v45, v35);
    LANES128(v47).n128_u64[0] = __PAIR64__(v37, v38);
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v50).n128_u64[0] = __PAIR64__(v37, v38);
    LANES128(v47).n128_u64[1] = v38;
    *(int8x8_t*)&LANES128(v35).n128_i8[8] =
        vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v48).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v49).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v47).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v48).n128_u64[1] = LANES128(v48).n128_u64[0];
    LANES128(v50).n128_u64[1] = LANES128(v49).n128_u64[0];
    LANES128(v49).n128_u64[1] = LANES128(v47).n128_u64[0];
    LANES128(v47).n128_u64[1] = LANES128(v40).n128_u64[0];
    v51 =
        vmlaq_f32(vmulq_f32(v48, v46), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v50, v35));
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v35).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v46).n128_u64[0]), 1);
    v52 = vmlaq_f32(v51, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v47, v35));
    LANES128(v47).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v47).n128_i8[8] =
        vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v53 = vmlsq_f32(v52, v47, v49);
    v54 = vaddq_f32(v66, v65);
    LANES128(v53).n128_u32[3] = 0;
    v55 = vaddq_f32(v66, v53);
    v56 = *(float*)(a2 + 56);
    if (a4 != 0) {
      LANES128(v50).n128_u32[0] = *(_DWORD*)(a4 + 32);
      LANES128(v45).n128_u32[0] = *(_DWORD*)(a4 + 44);
      v57 = *(float*)(a4 + 56);
      v58 = *(float*)(a4 + 60);
      v59 = *(float*)(a4 + 72);
      v60 = *(const char**)(a4 + 64);
      LANES128(v50).n128_u32[1] = *(_DWORD*)(a4 + 36);
      LANES128(v45).n128_u32[1] = *(_DWORD*)(a4 + 48);
      LANES128(v50).n128_u32[2] = *(_DWORD*)(a4 + 40);
      LANES128(v45).n128_u32[2] = *(_DWORD*)(a4 + 52);
    }
    else {
      v59 = -0x1.0000000000000p+0f;
      v57 = 0x0.0p+0f;
      v60 = &GameData_1a9f09e;
      v45 = (__typeof__(v45)){0};
      v58 = 0x0.0p+0f;
      v50 = (__typeof__(v50)){0};
    }
    v70 = v45;
    v71 = v50;
    v72 = v55;
    v73_.v73 = v54;
    v61 = a3[11];
    v68 = v67;
    v69 = v61;
    CharacterWork_11c7720(a1, &v73_.v73, &v72, &v71, &v70, v60, &v69, &v68, v56,
                          v57, v58, v59);
  }
}

void game_evt_demo_11c8190(__int64 a1)
{
  float32x4_t* v2;
  double v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  float32x4_t** v8;
  int v9;
  __int128 v10;
  __int64 v11;
  float v12;
  float v13;
  double v14;
  double v15;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  double v22;
  float v23;
  double v24;
  float32x4_t v25;
  unsigned int v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  float32x4_t v29;
  float32x4_t v30;
  int8x16_t v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  double v44;
  double v45;
  double v46;
  double v47;
  double v48;
  double v49;
  double v50;
  double v51;
  double v52;
  double v53;
  double v54;
  float32x4_t v55;
  unsigned int v56;
  float32x4_t v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  float32x4_t v60;
  int8x16_t v61;
  int8x16_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  int8x16_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  double v74;
  double v75;
  double v76;
  double v77;
  double v78;
  double v79;
  double v80;
  double v81;
  double v82;
  float32x4_t v83;
  unsigned int v84;
  unsigned int v85;
  float32x4_t v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  float32x4_t v89;
  int8x16_t v90;
  int8x16_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  int8x16_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  double v104;
  double v105;
  float32x4_t v106;
  float32x4_t v107;
  unsigned int v108;
  unsigned int v109;
  unsigned __int64 v110;
  float32x4_t v111;
  int8x16_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  int8x16_t v117;
  int8x16_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  double v125;
  double v126;
  float32x4_t v127;
  float32x4_t v128;
  unsigned int v129;
  unsigned __int64 v130;
  unsigned int v131;
  float32x4_t v132;
  int8x16_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  int8x16_t v138;
  int8x16_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  float32x4_t v145;
  double v146;
  double v147;
  int8x16_t v148;
  float32x4_t v149;
  unsigned int v150;
  unsigned __int64 v151;
  unsigned int v152;
  float32x4_t v153;
  int8x16_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  int8x16_t v159;
  int8x16_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  float v166;
  float v167;
  int v168;
  bool v169;
  unsigned int v170;
  __int64 v171;
  __int64* v172;
  int v173;
  unsigned int v174;
  unsigned int v175;
  int v176;
  float v177;
  float v178;
  float v179;
  __int64* v180;
  int v181;
  unsigned int v182;
  unsigned int v183;
  int v184;
  float v185;
  float v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64* v190;
  int v191;
  unsigned int v192;
  unsigned int v193;
  int v194;
  __int64 v195;
  float v196;
  float v197;
  float v198;
  float32x2_t v199;
  float32x2_t v200;
  int v201;
  float* v202;
  float v203;
  int v204;
  unsigned int v205;
  unsigned int v206;
  int v207;
  float v208;
  float v209;
  float v210;
  float v211;
  float v212;
  float v213;
  float v214;
  float v215;
  float v216;
  float v217;
  float v218;
  float v219;
  float v220;
  float v221;
  float v222;
  float v223;
  float v224;
  int v225;
  unsigned int v226;
  unsigned int v227;
  int v228;
  float v229;
  float v230;
  float v231;
  float v232;
  int v233;
  unsigned int v234;
  unsigned int v235;
  int v236;
  unsigned int v237;
  float v238;
  float v239;
  float v240;
  float* v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  float v246;
  unsigned __int64 v247;
  int v248;
  unsigned int v249;
  int v250;
  unsigned int v251;
  unsigned int v252;
  float v253;
  float v254;
  unsigned __int64 v255;
  int v256;
  int v257;
  unsigned int v258;
  unsigned int v259;
  float v260;
  float v261;
  __int64 v262;
  float v263;
  float v264;
  float v265;
  float v266;
  unsigned __int64 v267;
  int v268;
  unsigned __int64 v269;
  unsigned __int32 v270;
  __int64 v271;
  __int128 v272;
  float v273;
  float v274;
  float v275;
  float v276;
  unsigned __int64 v277;
  int v278;
  unsigned __int64 v279;
  unsigned __int32 v280;
  int8x16_t v281;
  double v282;
  double v283;
  float32x4_t v284;
  unsigned int v285;
  unsigned int v286;
  float32x4_t v287;
  unsigned __int64 v288;
  float32x4_t v289;
  int8x16_t v290;
  float32x4_t v291;
  float32x4_t v292;
  float32x4_t v293;
  float32x4_t v294;
  int8x16_t v295;
  int8x16_t v296;
  float32x4_t v297;
  float32x4_t v298;
  float32x4_t v299;
  float32x4_t v300;
  float32x4_t v301;
  float32x4_t v302;
  double v303;
  double v304;
  unsigned int v305;
  int8x16_t v306;
  float32x4_t v307;
  unsigned int v308;
  unsigned __int64 v309;
  float32x4_t v310;
  int8x16_t v311;
  float32x4_t v312;
  float32x4_t v313;
  float32x4_t v314;
  float32x4_t v315;
  int8x16_t v316;
  int8x16_t v317;
  float32x4_t v318;
  float32x4_t v319;
  float32x4_t v320;
  float32x4_t v321;
  float v322;
  float32x4_t v323;
  float v324;
  float v325;
  float v326;
  float32x4_t v327;
  int8x16_t v328;
  float32x4_t v329;
  float32x4_t v330;
  float32x4_t v331;
  int8x16_t v332;
  float32x4_t v333;
  float32x4_t v334;
  float32x4_t v335;
  float32x4_t v336;
  float32x4_t v337;
  float32x4_t v338;
  float32x4_t v339;
  int v340;
  __int64 v341;
  __int64 v342;
  __int64 v343;
  __int64 v344;
  float32x4_t v345;
  int8x16_t v346;
  float32x4_t v347;
  int8x16_t v348;
  int8x16_t v349;
  float32x4_t v350;
  int8x16_t v351;
  float32x4_t v352;
  int8x16_t v353;
  int8x16_t v354;
  int8x16_t v355;
  float32x4_t v356;
  __int128 v357;
  float32x4_t v358;
  float v359;
  float v360;
  int8x16_t v361;
  float32x4_t v362;
  float32x4_t v363;
  float32x4_t v364;
  float32x4_t v365;
  struct {
    float32x4_t v366;
    char gap208_[88];
    double v367;
  } v366_;

  v2 = (float32x4_t*)*GameData_212fc38[0];
  if (*GameData_212fc38[0] != 0) {
    v356 = v2[27];
    v3 = (float)(LANES128(v2[28]).n128_f32[0] * 0x1.1df46a0000000p-6f) *
         0x1.0000000000000p-1;
  }
  else {
    v3 = 0x0.0p+0;
    v356 = (__typeof__(v356)){0};
  }
  v4 = *(unsigned __int8*)(a1 + 320);
  if ((v4 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 328);
  }
  else {
    v5 = v4 >> 1;
  }
  if (v5 == 0) {
    if (*(_BYTE*)(a1 + 200) == 1) {
      *(_DWORD*)(a1 + 208) = 1065353216;
    }
    else {
      v166 = 0x0.0p+0f;
      v167 = fmaxf(*(float*)(a1 + 208) + -0x1.99999a0000000p-6f, 0x0.0p+0f);
      *(float*)(a1 + 208) = v167;
      if (v167 <= 0x0.0p+0f) {
        *(_DWORD*)(a1 + 260) = 0;
        *(_QWORD*)(a1 + 252) = 0;
        v187 = *(_QWORD*)(a1 + 256);
        *(_QWORD*)(a1 + 296) = 0;
        *(_DWORD*)(a1 + 244) = 0;
        *(_QWORD*)(a1 + 264) = 0x3F8000003F800000LL;
        *(_DWORD*)(a1 + 272) = 0;
        *(_DWORD*)(a1 + 292) = 0;
        *(_DWORD*)(a1 + 248) = v187;
      LABEL_85:
        *(_DWORD*)(a1 + 240) = *(_QWORD*)(a1 + 248);
        *(_DWORD*)(a1 + 288) = *(_QWORD*)(a1 + 296);
        v242 = 312;
        v243 = 308;
        v244 = 304;
        v245 = 284;
        *(_DWORD*)(a1 + 280) = *(_QWORD*)(a1 + 288);
        goto LABEL_86;
      }
    }
    v168 = *(_DWORD*)(a1 + 204);
    if (v168 <= 3) {
      v169 = (unsigned int)v168 >= 2;
      v170 = v168 - 2;
      if (!v169) {
        v188 = *(_QWORD*)(a1 + 224);
        *(float*)(a1 + 216) =
            0x1.99999a0000000p-1f * COERCE_FLOAT(*(_QWORD*)(a1 + 216));
        *(float*)(a1 + 224) = *(float*)&v188 + 0x1.7000000000000p+6f;
        v189 = *(_QWORD*)(a1 + 224);
        if (*(float*)&v189 >= 0x1.6800000000000p+8f) {
          *(float*)&v189 = *(float*)&v189 + -0x1.6800000000000p+8f;
        }
        *(_DWORD*)(a1 + 224) = v189;
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v190 = game_map_MapRandom_instance__ptr[0];
        v191 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL));
        v192 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v193 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
               (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v190 + 1) = v191;
        v194 = (v193 >> 8) ^ (v192 >> 19) ^ v193 ^ v192;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v190) = v192;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v190 + 4) = v194;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v195 = *(_QWORD*)(a1 + 216);
        LODWORD(v196) = HIDWORD(*(_QWORD*)(a1 + 224));
        v359 = *(float*)&v195;
        v197 = (float)(PSEUDO_UNFUSED(0x1.1df46a0000000p-6f *
                                      COERCE_FLOAT(*(_QWORD*)(a1 + 224)))) +
               (float)(roundf((float)(0x1.1df46a0000000p-6f *
                                      COERCE_FLOAT(*(_QWORD*)(a1 + 224))) *
                              0x1.45f3060000000p-3f) *
                       -0x1.921fb60000000p+2f);
        if (v197 <= 0x1.921fb60000000p+0f) {
          if (v197 >= -0x1.921fb60000000p+0f) {
            goto LABEL_37;
          }
          v198 = -0x1.921fb60000000p+1f;
        }
        else {
          v198 = 0x1.921fb60000000p+1f;
        }
        v197 = v198 - v197;
      LABEL_37:
        v202 = (float*)GameData_212c190;
        *(float*)(a1 + 220) = *((float*)&v195 + 1) * 0x1.99999a0000000p-1f;
        v203 = v196 + 0x1.fc00000000000p+6f;
        if (v203 >= 0x1.6800000000000p+8f) {
          v203 = v203 + -0x1.6800000000000p+8f;
        }
        *(float*)(a1 + 228) = v203;
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v204 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v190);
        v205 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v190 + 4);
        v206 = *(_DWORD*)v190 ^ (*(_DWORD*)v190 << 11);
        *(_DWORD*)v190 = *((_DWORD*)v190 + 1);
        *((_DWORD*)v190 + 1) = v204;
        v207 = (v206 >> 8) ^ (v205 >> 19) ^ v206 ^ v205;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v190) = v205;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v190 + 4) = v207;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v208 = *(float*)(a1 + 220);
        v209 = (float)(PSEUDO_UNFUSED(*(float*)(a1 + 228) *
                                      0x1.1df46a0000000p-6f)) +
               (float)(roundf((float)(*(float*)(a1 + 228) *
                                      0x1.1df46a0000000p-6f) *
                              0x1.45f3060000000p-3f) *
                       -0x1.921fb60000000p+2f);
        if (v209 <= 0x1.921fb60000000p+0f) {
          if (v209 >= -0x1.921fb60000000p+0f) {
          LABEL_44:
            v211 = *v202;
            v212 = v202[1];
            v213 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v202);
            v214 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v202 + 4);
            v215 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)v202);
            if (v208 <= 0x1.47ae140000000p-7f) {
              *(_BYTE*)(a1 + 200) = 0;
            }
            v216 =
                v208 *
                (float)(v209 *
                        (float)((float)((float)-(
                                            float)(v215 -
                                                   (float)((float)(v214 +
                                                                   (float)((float)-(
                                                                               float)(v213 -
                                                                                      (float)((float)(v212 -
                                                                                                      (float)(v211 *
                                                                                                              (float)(v209 *
                                                                                                                      v209))) *
                                                                                              (float)(v209 *
                                                                                                      v209))) *
                                                                           (float)(v209 *
                                                                                   v209))) *
                                                           (float)(v209 *
                                                                   v209))) *
                                        (float)(v209 * v209)) +
                                0x1.0000000000000p+0f));
            v217 =
                (float)((float)((float)((float)(unsigned __int16)v194 /
                                        0x1.fffe000000000p+15f) *
                                0x1.cccccc0000000p-1f) +
                        0x1.99999a0000000p-4f) *
                (float)((float)(v197 *
                                (float)((float)((float)-(
                                                    float)(v215 -
                                                           (float)((float)(v214 +
                                                                           (float)((float)-(
                                                                                       float)(v213 -
                                                                                              (float)((float)(v212 -
                                                                                                              (float)(v211 *
                                                                                                                      (float)(v197 *
                                                                                                                              v197))) *
                                                                                                      (float)(v197 *
                                                                                                              v197))) *
                                                                                   (float)(v197 *
                                                                                           v197))) *
                                                                   (float)(v197 *
                                                                           v197))) *
                                                (float)(v197 * v197)) +
                                        0x1.0000000000000p+0f)) *
                        v359);
            v218 = *(float*)(a1 + 208);
            v166 =
                (float)((float)((float)((float)((float)(unsigned __int16)v207 /
                                                0x1.fffe000000000p+15f) *
                                        0x1.cccccc0000000p-1f) +
                                0x1.99999a0000000p-4f) *
                        v216) *
                v218;
            *(float*)(a1 + 256) = v217 * v218;
            goto LABEL_67;
          }
          v210 = -0x1.921fb60000000p+1f;
        }
        else {
          v210 = 0x1.921fb60000000p+1f;
        }
        v209 = v210 - v209;
        goto LABEL_44;
      }
      if (v170 < 2) {
        *(float*)(a1 + 224) =
            COERCE_FLOAT(*(_QWORD*)(a1 + 224)) + 0x1.1400000000000p+6f;
        v171 = *(_QWORD*)(a1 + 224);
        if (*(float*)&v171 >= 0x1.6800000000000p+8f) {
          *(float*)&v171 = *(float*)&v171 + -0x1.6800000000000p+8f;
        }
        *(_DWORD*)(a1 + 224) = v171;
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v172 = game_map_MapRandom_instance__ptr[0];
        v173 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL));
        v174 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v175 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
               (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v172 + 1) = v173;
        v176 = (v175 >> 8) ^ (v174 >> 19) ^ v175 ^ v174;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v172) = v174;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v172 + 4) = v176;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v177 = (float)(PSEUDO_UNFUSED(0x1.1df46a0000000p-6f *
                                      COERCE_FLOAT(*(_QWORD*)(a1 + 224)))) +
               (float)(roundf((float)(0x1.1df46a0000000p-6f *
                                      COERCE_FLOAT(*(_QWORD*)(a1 + 224))) *
                              0x1.45f3060000000p-3f) *
                       -0x1.921fb60000000p+2f);
        if (v177 <= 0x1.921fb60000000p+0f) {
          if (v177 >= -0x1.921fb60000000p+0f) {
            goto LABEL_50;
          }
          v178 = -0x1.921fb60000000p+1f;
        }
        else {
          v178 = 0x1.921fb60000000p+1f;
        }
        v177 = v178 - v177;
      LABEL_50:
        LODWORD(v360) = *(_QWORD*)(a1 + 216);
        v219 = *(float*)GameData_212c190;
        v220 = *((float*)GameData_212c190 + 1);
        v221 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
        v222 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 +
                         4);
        v223 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
        v224 =
            COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 224))) + 0x1.9800000000000p+6f;
        if (v224 >= 0x1.6800000000000p+8f) {
          v224 = v224 + -0x1.6800000000000p+8f;
        }
        *(float*)(a1 + 228) = v224;
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v225 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v172);
        v226 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v172 + 4);
        v227 = *(_DWORD*)v172 ^ (*(_DWORD*)v172 << 11);
        *(_DWORD*)v172 = *((_DWORD*)v172 + 1);
        *((_DWORD*)v172 + 1) = v225;
        v228 = (v227 >> 8) ^ (v226 >> 19) ^ v227 ^ v226;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v172) = v226;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v172 + 4) = v228;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v229 = (float)(PSEUDO_UNFUSED(*(float*)(a1 + 228) *
                                      0x1.1df46a0000000p-6f)) +
               (float)(roundf((float)(*(float*)(a1 + 228) *
                                      0x1.1df46a0000000p-6f) *
                              0x1.45f3060000000p-3f) *
                       -0x1.921fb60000000p+2f);
        if (v229 <= 0x1.921fb60000000p+0f) {
          if (v229 >= -0x1.921fb60000000p+0f) {
          LABEL_57:
            v231 =
                *(float*)(a1 + 220) *
                (float)(v229 *
                        (float)((float)((float)-(
                                            float)(v223 -
                                                   (float)((float)(v222 +
                                                                   (float)((float)-(
                                                                               float)(v221 -
                                                                                      (float)((float)(v220 -
                                                                                                      (float)(v219 *
                                                                                                              (float)(v229 *
                                                                                                                      v229))) *
                                                                                              (float)(v229 *
                                                                                                      v229))) *
                                                                           (float)(v229 *
                                                                                   v229))) *
                                                           (float)(v229 *
                                                                   v229))) *
                                        (float)(v229 * v229)) +
                                0x1.0000000000000p+0f));
            v232 = *(float*)(a1 + 208);
            v166 =
                v232 *
                (float)((float)((float)((float)((float)(unsigned __int16)v228 /
                                                0x1.fffe000000000p+15f) *
                                        0x1.cccccc0000000p-1f) +
                                0x1.99999a0000000p-4f) *
                        v231);
            *(float*)(a1 + 256) =
                (float)((float)((float)((float)((float)(unsigned __int16)v176 /
                                                0x1.fffe000000000p+15f) *
                                        0x1.cccccc0000000p-1f) +
                                0x1.99999a0000000p-4f) *
                        (float)((float)(v177 *
                                        (float)((float)((float)-(
                                                            float)(v223 -
                                                                   (float)((float)(v222 +
                                                                                   (float)((float)-(
                                                                                               float)(v221 -
                                                                                                      (float)((float)(v220 -
                                                                                                                      (float)(v219 *
                                                                                                                              (float)(v177 *
                                                                                                                                      v177))) *
                                                                                                              (float)(v177 *
                                                                                                                      v177))) *
                                                                                           (float)(v177 *
                                                                                                   v177))) *
                                                                           (float)(v177 *
                                                                                   v177))) *
                                                        (float)(v177 * v177)) +
                                                0x1.0000000000000p+0f)) *
                                v360)) *
                v232;
          LABEL_67:
            *(float*)(a1 + 260) = v166;
            v242 = 272;
            v243 = 268;
            v244 = 264;
            v245 = 244;
            *(_DWORD*)(a1 + 248) = *(_QWORD*)(a1 + 256);
            *(float*)(a1 + 252) = v166;
            *(_DWORD*)(a1 + 240) = *(_QWORD*)(a1 + 248);
          LABEL_86:
            *(float*)(a1 + v245) = v166;
            *(_DWORD*)(a1 + v244) = 1065353216;
            *(_DWORD*)(a1 + v243) = 1065353216;
            *(_DWORD*)(a1 + v242) = 0;
            goto LABEL_87;
          }
          v230 = -0x1.921fb60000000p+1f;
        }
        else {
          v230 = 0x1.921fb60000000p+1f;
        }
        v229 = v230 - v229;
        goto LABEL_57;
      }
    LABEL_87:
      v263 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
      if (v263 <= 0x0.0p+0f) {
        v264 = 0x1.119ce00000000p-6f;
      }
      else {
        v264 = v263 * 0x1.119ce00000000p-6f;
      }
      v265 = *(float*)(a1 + 100);
      v266 = *(float*)(a1 + 96) + v264;
      *(float*)(a1 + 96) = v266;
      if (v266 > v265) {
        v266 = v265;
        *(float*)(a1 + 96) = v265;
      }
      v267 = *(_QWORD*)(a1 + 72);
      v268 = *(_DWORD*)(a1 + 104);
      LANES128(v365).n128_u64[0] = *(_QWORD*)(a1 + 64);
      LANES128(v365).n128_u64[1] = v267;
      v269 = *(_QWORD*)(a1 + 88);
      LANES128(v364).n128_u64[0] = *(_QWORD*)(a1 + 80);
      LANES128(v364).n128_u64[1] = v269;
      MagicInst_10a43c0((void*)(&v366_.v366), v268, &v365, &v364, 2, v266,
                        v265);
      v270 = LANES128(v366_.v366).n128_u32[2];
      v271 = game_g_frame_clock;
      *(_QWORD*)(a1 + 48) = LANES128(v366_.v366).n128_u64[0];
      v272 = *(_OWORD*)(a1 + 48);
      *((_QWORD*)&v272 + 1) = v270;
      *(_OWORD*)(a1 + 48) = v272;
      v273 = 0x1.e000000000000p+5f / (float)*(int*)(v271 + 476);
      if (v273 <= 0x0.0p+0f) {
        v274 = 0x1.119ce00000000p-6f;
      }
      else {
        v274 = v273 * 0x1.119ce00000000p-6f;
      }
      v275 = *(float*)(a1 + 164);
      v276 = *(float*)(a1 + 160) + v274;
      *(float*)(a1 + 160) = v276;
      if (v276 > v275) {
        v276 = v275;
        *(float*)(a1 + 160) = v275;
      }
      v277 = *(_QWORD*)(a1 + 136);
      v278 = *(_DWORD*)(a1 + 168);
      LANES128(v365).n128_u64[0] = *(_QWORD*)(a1 + 128);
      LANES128(v365).n128_u64[1] = v277;
      v279 = *(_QWORD*)(a1 + 152);
      LANES128(v364).n128_u64[0] = *(_QWORD*)(a1 + 144);
      LANES128(v364).n128_u64[1] = v279;
      MagicInst_10a43c0((void*)(&v366_.v366), v278, &v365, &v364, 2, v276,
                        v275);
      v280 = LANES128(v366_.v366).n128_u32[2];
      *(_QWORD*)(a1 + 112) = LANES128(v366_.v366).n128_u64[0];
      v357 = *(_OWORD*)(a1 + 112);
      LANES128(v281).n128_u64[0] = *(_QWORD*)(a1 + 112);
      LANES128(v281).n128_u64[1] = v280;
      v361 = *(int8x16_t*)(a1 + 48);
      v355 = v281;
      *(int8x16_t*)(a1 + 112) = v281;
      v282 = cos(v3);
      v283 = sin(v3);
      v366_.v367 = -0x0.0p+0;
      LANES128(v284).n128_u64[0] = LANES128(v361).n128_u64[0];
      *(float*)&v285 = v283 + PSEUDO_UNFUSED(v282 * 0x0.0p+0);
      *(float*)&v286 = v282 + PSEUDO_UNFUSED(v283 * 0x0.0p+0);
      LANES128(v287).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v361, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(float*)&v288 = PSEUDO_UNFUSED(v283 * -0x0.0p+0) + v282 * 0x0.0p+0;
      LANES128(v289).n128_u64[0] = __PAIR64__(v285, v288);
      LANES128(v284).n128_u64[1] = LANES128(v287).n128_u64[0];
      LANES128(v289).n128_u64[1] = __PAIR64__(v286, v288);
      v290 = vmulq_f32(v289, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v289).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v361, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v291).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v290, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v289).n128_u64[1] = LANES128(v289).n128_u64[0];
      *(int8x8_t*)&LANES128(v291).n128_i8[8] =
          vqtbl1_s8(v290, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v292).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v290, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v293 = vmlaq_f32(vmulq_f32(v289, v290),
                       COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v284, v291));
      LANES128(v291).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v361, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v292).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v290).n128_u64[0]), 1);
      LANES128(v287).n128_u64[1] = LANES128(v291).n128_u64[0];
      LANES128(v291).n128_u64[1] = LANES128(v361).n128_u64[0];
      v294 = vmlaq_f32(v293, COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v291, v292));
      LANES128(v291).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v290, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v291).n128_i8[8] =
          vqtbl1_s8(v290, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v290).n128_u64[0] = __PAIR64__(v285, v288);
      HIDWORD(v288) = v286;
      v295 = vmlsq_f32(v294, v291, v287);
      LANES128(v296).n128_u64[0] = __PAIR64__(v285, v288);
      LANES128(v297).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v295, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v291).n128_u64[0] = LANES128(v296).n128_u64[0];
      LANES128(v296).n128_u64[1] = v288;
      *(int8x8_t*)&LANES128(v297).n128_i8[8] =
          vqtbl1_s8(v295, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v298).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v296, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v298).n128_u64[1] = LANES128(v298).n128_u64[0];
      v299 = vmulq_f32(v298, v295);
      LANES128(v298).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v296, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v296).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v296, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v291).n128_u64[1] = LANES128(v298).n128_u64[0];
      LANES128(v298).n128_u64[1] = LANES128(v296).n128_u64[0];
      LANES128(v296).n128_u64[1] = LANES128(v290).n128_u64[0];
      v300 = vmlaq_f32(v299, COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v291, v297));
      LANES128(v297).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v295, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v297).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v295).n128_u64[0]), 1);
      v301 = vmlaq_f32(v300, COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v296, v297));
      LANES128(v296).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v295, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v296).n128_i8[8] =
          vqtbl1_s8(v295, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v302 = vmlsq_f32(v301, v296, v298);
      LANES128(v302).n128_u32[3] = 0;
      v362 = v302;
      v303 = cos(v3);
      v304 = sin(v3);
      *(float*)&v305 = v303 + PSEUDO_UNFUSED(v304 * 0x0.0p+0);
      LANES128(v306).n128_u64[0] = v357;
      LANES128(v307).n128_u64[0] = v357;
      *(float*)&v308 = v304 + PSEUDO_UNFUSED(v303 * 0x0.0p+0);
      *(float*)&v309 = PSEUDO_UNFUSED(v304 * v366_.v367) + v303 * 0x0.0p+0;
      LANES128(v310).n128_u64[0] = __PAIR64__(v308, v309);
      LANES128(v310).n128_u64[1] = __PAIR64__(v305, v309);
      v311 = vmulq_f32(v310, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v312).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v311, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v312).n128_i8[8] =
          vqtbl1_s8(v311, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v306).n128_u64[1] =
          LANES128_OF(vextq_s8(v355, v355, 8u)).n128_u64[0];
      LANES128(v313).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v306, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v310).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v306, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v306).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v306, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v307).n128_u64[1] = LANES128(v313).n128_u64[0];
      LANES128(v310).n128_u64[1] = LANES128(v310).n128_u64[0];
      LANES128(v313).n128_u64[1] = LANES128(v306).n128_u64[0];
      LANES128(v306).n128_u64[1] = v357;
      v314 = vmlaq_f32(vmulq_f32(v310, v311),
                       COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v307, v312));
      LANES128(v312).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v311, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v312).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v311).n128_u64[0]), 1);
      v315 = vmlaq_f32(v314, COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v306, v312));
      LANES128(v306).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v311, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v306).n128_i8[8] =
          vqtbl1_s8(v311, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v311).n128_u64[0] = __PAIR64__(v308, v309);
      HIDWORD(v309) = v305;
      v316 = vmlsq_f32(v315, v306, v313);
      LANES128(v317).n128_u64[0] = __PAIR64__(v308, v309);
      LANES128(v306).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v316, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v312).n128_u64[0] = __PAIR64__(v308, v309);
      LANES128(v317).n128_u64[1] = v309;
      *(int8x8_t*)&LANES128(v306).n128_i8[8] =
          vqtbl1_s8(v316, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v318).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v317, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v319).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v317, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v317).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v317, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v318).n128_u64[1] = LANES128(v318).n128_u64[0];
      LANES128(v312).n128_u64[1] = LANES128(v319).n128_u64[0];
      LANES128(v319).n128_u64[1] = LANES128(v317).n128_u64[0];
      LANES128(v317).n128_u64[1] = LANES128(v311).n128_u64[0];
      v320 = vmlaq_f32(vmulq_f32(v318, v316),
                       COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v312, v306));
      LANES128(v306).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v316, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v306).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v316).n128_u64[0]), 1);
      v321 = vmlaq_f32(v320, COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v317, v306));
      LANES128(v317).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v316, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v317).n128_i8[8] =
          vqtbl1_s8(v316, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v323 = vmlsq_f32(v321, v317, v319);
      v322 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
      LANES128(v323).n128_u32[3] = 0;
      if (v322 <= 0x0.0p+0f) {
        v324 = 0x1.119ce00000000p-6f;
      }
      else {
        v324 = v322 * 0x1.119ce00000000p-6f;
      }
      v325 = *(float*)(a1 + 192);
      v326 = *(float*)(a1 + 188) + v324;
      *(float*)(a1 + 188) = v326;
      if (v326 > v325) {
        v326 = v325;
        *(float*)(a1 + 188) = v325;
      }
      v358 = vaddq_f32(v356, v323);
      v363 = vaddq_f32(v356, v362);
      *(float*)(a1 + 176) =
          Cursor_734120(*(_DWORD*)(a1 + 196), 2, *(float*)(a1 + 180),
                        *(float*)(a1 + 184), v326, v325);
      if (*(float*)(a1 + 208) <= 0x0.0p+0f) {
        v338 = v358;
        v339 = v363;
      }
      else {
        LANES128(v327).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v328 = vsubq_f32(v358, v363);
        *(int8x8_t*)&LANES128(v327).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v328).n128_u32[1] = 0;
        LANES128(v329).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v328, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v329).n128_i8[8] =
            vqtbl1_s8(v328, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v330).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v328, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v330).n128_i8[8] =
            vqtbl1_s8(v328, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v328).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v328).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v331 = vmlsq_f32(vmulq_f32(v329, v327), v328, v330);
        v332 = vmulq_f32(v331, v331);
        LANES128(v332).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v332, v332, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v332).n128_u64[0])))
                .n64_u64[0];
        LANES128(v332).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v332).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v332).n128_u64[0])))
                .n64_u64[0];
        LANES128(v332).n128_u64[1] = LANES128(v332).n128_u64[0];
        v333 = vrsqrteq_f32(v332);
        v334 = vmulq_f32(v333, vrsqrtsq_f32(v333, vmulq_f32(v332, v333)));
        v335 = vmulq_n_f32(
            vbicq_s8(
                vmulq_f32(
                    v331,
                    vmulq_f32(v334, vrsqrtsq_f32(v334, vmulq_f32(v332, v334)))),
                vceqzq_f32(v332)),
            COERCE_FLOAT(*(_QWORD*)(a1 + 240)));
        LANES128(v332).n128_u32[0] = HIDWORD(*(_QWORD*)(a1 + 240));
        v336 = vaddq_f32(v363, v335);
        v337 = vaddq_f32(v358, v335);
        LANES128(v336).n128_f32[1] =
            LANES128(v332).n128_f32[0] + LANES128(v336).n128_f32[1];
        LANES128(v337).n128_f32[1] =
            LANES128(v332).n128_f32[0] + LANES128(v337).n128_f32[1];
        v338 = v337;
        v339 = v336;
      }
      v8 = (float32x4_t**)(a1 + 24);
      *(float32x4_t*)(*(_QWORD*)(a1 + 24) + 16LL) = v339;
      *(float32x4_t*)(*(_QWORD*)(a1 + 24) + 32LL) = v338;
      *(_OWORD*)(*(_QWORD*)(a1 + 24) + 48LL) = GameData_1a83610;
      v340 = *(_DWORD*)(a1 + 176);
      v341 = *(_QWORD*)(a1 + 24);
      *(_DWORD*)(v341 + 92) = 0;
      *(_DWORD*)(v341 + 96) = v340;
      *(_QWORD*)(*(_QWORD*)(a1 + 24) + 124LL) = 0x469C40003DCCCCCDLL;
      goto LABEL_106;
    }
    if (v168 != 4) {
      if (v168 != 5) {
        goto LABEL_87;
      }
      v179 = *(float*)(a1 + 228) + 0x1.1400000000000p+6f;
      if (v179 >= 0x1.6800000000000p+8f) {
        v179 = v179 + -0x1.6800000000000p+8f;
      }
      *(float*)(a1 + 228) = v179;
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v180 = game_map_MapRandom_instance__ptr[0];
      v181 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((_UNKNOWN**)0x8LL));
      v182 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v183 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
             (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v180 + 1) = v181;
      v184 = (v183 >> 8) ^ (v182 >> 19) ^ v183 ^ v182;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v180) = v182;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v180 + 4) = v184;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v185 = *(float*)(a1 + 236) + (float)((v184 & 7u) + 1);
      *(float*)(a1 + 236) = v185;
      if (v185 >= 0x1.9000000000000p+7f) {
        *(_DWORD*)(a1 + 236) = 0;
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v233 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v180);
        v234 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v180 + 4);
        v235 = *(_DWORD*)v180 ^ (*(_DWORD*)v180 << 11);
        *(_DWORD*)v180 = *((_DWORD*)v180 + 1);
        *((_DWORD*)v180 + 1) = v233;
        v236 = (v235 >> 8) ^ (v234 >> 19) ^ v235 ^ v234;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v180) = v234;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v180 + 4) = v236;
        v237 = v236 & 0x7FFFFFFF;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v186 = GameData_1bb6530[(
            unsigned int)(v237 -
                          3 * ((1431655766 * (unsigned __int64)v237) >> 32))];
      }
      else {
        v186 = *(float*)(a1 + 220) + -0x1.a36e2e0000000p-14f;
      }
      if (v186 < 0x0.0p+0f) {
        v186 = 0x0.0p+0f;
      }
      v238 = *(float*)(a1 + 228);
      *(float*)(a1 + 220) = v186;
      v239 = (float)(PSEUDO_UNFUSED(v238 * 0x1.1df46a0000000p-6f)) +
             (float)(roundf((float)(v238 * 0x1.1df46a0000000p-6f) *
                            0x1.45f3060000000p-3f) *
                     -0x1.921fb60000000p+2f);
      if (v239 <= 0x1.921fb60000000p+0f) {
        if (v239 >= -0x1.921fb60000000p+0f) {
        LABEL_66:
          v241 = (float*)GameData_212c190;
          *(_DWORD*)(a1 + 256) = 0;
          v166 =
              *(float*)(a1 + 208) *
              (float)(v186 *
                      (float)(v239 *
                              (float)((float)((float)-(
                                                  float)(*(float*)((char*)((
                                                                       __int128*)0x10LL) +
                                                                   (_QWORD)
                                                                       v241) -
                                                         (float)((float)(*(float*)((char*)((
                                                                                       _UNKNOWN**)0x8LL) +
                                                                                   (_QWORD)
                                                                                       v241 +
                                                                                   4) +
                                                                         (float)((float)-(
                                                                                     float)(*(float*)((char*)((
                                                                                                          _UNKNOWN**)0x8LL) +
                                                                                                      (_QWORD)
                                                                                                          v241) -
                                                                                            (float)((float)(v241[1] -
                                                                                                            (float)(*v241 *
                                                                                                                    (float)(v239 *
                                                                                                                            v239))) *
                                                                                                    (float)(v239 *
                                                                                                            v239))) *
                                                                                 (float)(v239 *
                                                                                         v239))) *
                                                                 (float)(v239 *
                                                                         v239))) *
                                              (float)(v239 * v239)) +
                                      0x1.0000000000000p+0f)));
          goto LABEL_67;
        }
        v240 = -0x1.921fb60000000p+1f;
      }
      else {
        v240 = 0x1.921fb60000000p+1f;
      }
      v239 = v240 - v239;
      goto LABEL_66;
    }
    LANES64(v199).n64_u64[0] = *(unsigned __int64*)(a1 + 280);
    LANES64(v200).n64_u64[0] =
        LANES64_OF(vadd_f32(*(float32x2_t*)(a1 + 240), v199)).n64_u64[0];
    if (LANES64(v200).n64_f32[0] <= 0x1.99999a0000000p-6f) {
      if (LANES64(v200).n64_f32[0] >= -0x1.99999a0000000p-6f) {
        LODWORD(v253) = *(_QWORD*)(a1 + 280);
        goto LABEL_75;
      }
      v201 = 990057071;
    }
    else {
      v201 = -1157426577;
    }
    v246 = *(float*)&v201;
    v247 = (GameData_21a6050 + 1) % 0x270uLL;
    v248 = GameData_21a5690[v247];
    v249 = v248 & 0x7FFFFFFE | GameData_21a5690[GameData_21a6050] & 0x80000000;
    if ((v248 & 1) != 0) {
      v250 = -1727483681;
    }
    else {
      v250 = 0;
    }
    GameData_21a5690[GameData_21a6050] =
        v250 ^ GameData_21a5690[(GameData_21a6050 + 397) % 0x270uLL] ^
        (v249 >> 1);
    v251 = GameData_21a5690[GameData_21a6050];
    GameData_21a6050 = v247;
    v252 = ((v251 ^ (v251 >> 11)) << 7) & 0x9D2C5680 ^ v251 ^ (v251 >> 11);
    v253 =
        v246 *
        (float)((float)((float)(vcvts_n_f32_u32(
                                    (v252 << 15) & 0xEFC60000 ^ v252 ^
                                        (((v252 << 15) & 0xEFC60000 ^ v252) >>
                                         18),
                                    0x20u) *
                                0x1.6666660000000p-1f) +
                        0x0.0p+0f) +
                0x1.3333340000000p-2f);
  LABEL_75:
    if (LANES64(v200).n64_f32[1] <= 0x1.99999a0000000p-6f) {
      if (LANES64(v200).n64_f32[1] >= -0x1.99999a0000000p-6f) {
        v166 = LANES64(v199).n64_f32[1];
      LABEL_84:
        v260 = *(float*)(a1 + 208);
        *(float*)(a1 + 296) = v253;
        *(float*)(a1 + 300) = v166;
        v261 = LANES64(v200).n64_f32[1] * v260;
        *(_QWORD*)(a1 + 264) = 0x3F8000003F800000LL;
        *(_DWORD*)(a1 + 272) = 0;
        *(float*)(a1 + 292) = v166;
        *(float*)(a1 + 252) = LANES64(v200).n64_f32[1] * v260;
        *(float*)(a1 + 256) = LANES64(v200).n64_f32[0] * v260;
        *(float*)(a1 + 260) = LANES64(v200).n64_f32[1] * v260;
        v262 = *(_QWORD*)(a1 + 256);
        *(float*)(a1 + 244) = v261;
        *(_DWORD*)(a1 + 248) = v262;
        goto LABEL_85;
      }
      v254 = 0x1.0624de0000000p-9f;
    }
    else {
      v254 = -0x1.0624de0000000p-9f;
    }
    v255 = (GameData_21a6050 + 1) % 0x270uLL;
    v256 = GameData_21a5690[v255];
    if ((v256 & 1) != 0) {
      v257 = -1727483681;
    }
    else {
      v257 = 0;
    }
    GameData_21a5690[GameData_21a6050] =
        v257 ^ GameData_21a5690[(GameData_21a6050 + 397) % 0x270uLL] ^
        ((v256 & 0x7FFFFFFE |
          GameData_21a5690[GameData_21a6050] & 0x80000000) >>
         1);
    v258 = GameData_21a5690[GameData_21a6050];
    GameData_21a6050 = v255;
    v259 = ((v258 ^ (v258 >> 11)) << 7) & 0x9D2C5680 ^ v258 ^ (v258 >> 11);
    v166 =
        v254 *
        (float)((float)((float)(vcvts_n_f32_u32(
                                    (v259 << 15) & 0xEFC60000 ^ v259 ^
                                        (((v259 << 15) & 0xEFC60000 ^ v259) >>
                                         18),
                                    0x20u) *
                                0x1.6666660000000p-1f) +
                        0x0.0p+0f) +
                0x1.3333340000000p-2f);
    goto LABEL_84;
  }
  v6 = GameRoutine_11c32d0(a1 + 320);
  if (v6 == 0) {
    goto LABEL_107;
  }
  v8 = (float32x4_t**)(a1 + 24);
  v7 = *(_QWORD*)(a1 + 24);
  v9 = *(_DWORD*)(v7 + 8);
  *(_DWORD*)(v7 + 8) = 1;
  *(_QWORD*)&v10 = *(_QWORD*)(v6 + 16);
  *((_QWORD*)&v10 + 1) = *(unsigned int*)(v6 + 24);
  *(_OWORD*)(v7 + 16) = v10;
  v11 = *(unsigned int*)(v6 + 36);
  *(_QWORD*)&v10 = *(_QWORD*)(v6 + 28);
  *(_DWORD*)(v7 + 92) = 0;
  *((_QWORD*)&v10 + 1) = v11;
  *(_OWORD*)(v7 + 64) = v10;
  LODWORD(v10) = *(_DWORD*)(v6 + 12);
  *(_DWORD*)(v7 + 92) = 0;
  *(float*)(v7 + 96) = *(float*)&v10 * 0x1.ca5dc00000000p+5f;
  gfx_render_b3aee0((float32x4_t*)v7);
  *(_DWORD*)(v7 + 8) = v9;
  v12 = *(float*)(a1 + 388);
  v13 = *(float*)(a1 + 384);
  v348 = *(int8x16_t*)(*(_QWORD*)(a1 + 24) + 32LL);
  v354 = *(int8x16_t*)(*(_QWORD*)(a1 + 24) + 16LL);
  v353 = *(int8x16_t*)(*(_QWORD*)(a1 + 24) + 48LL);
  v14 = *(float*)(a1 + 392) * 0x1.0000000000000p-1;
  v15 = cos(v14);
  v16 = sin(v14);
  v17 = v13 * 0x1.0000000000000p-1;
  v18 = cos(v17);
  v19 = sin(v17);
  v20 = cos(v12 * 0x1.0000000000000p-1);
  v21 = sin(v12 * 0x1.0000000000000p-1);
  v22 = v16 * v19;
  v23 = *(float*)(a1 + 388);
  v24 = v15 * v19;
  LODWORD(v19) = *(_DWORD*)(a1 + 384);
  LANES128(v25).n128_u64[0] = LANES128(v354).n128_u64[0];
  *(float*)&v26 = PSEUDO_UNFUSED(v22 * v21) + PSEUDO_UNFUSED(v15 * v18) * v20;
  *(float*)&v22 = PSEUDO_UNFUSED(v22 * v20) + PSEUDO_UNFUSED(v15 * v18) * v21;
  *(float*)&v27 = v24 * v20 - PSEUDO_UNFUSED(v21 * (v16 * v18));
  *(float*)&v28 = v16 * v18 * v20 - PSEUDO_UNFUSED(v21 * v24);
  LANES128(v29).n128_u64[0] = __PAIR64__(LODWORD(v22), v27);
  HIDWORD(v27) = LODWORD(v22);
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v354, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v366_.v367 = 0x1.201000f0e0d0cp-975;
  LANES128(v25).n128_u64[1] = LANES128(v30).n128_u64[0];
  LANES128(v29).n128_u64[1] = __PAIR64__(v26, v28);
  HIDWORD(v28) = v26;
  LANES128(v31).n128_u64[0] = v27;
  LANES128(v31).n128_u64[1] = v28;
  v32 = vmulq_f32(v29, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v354, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[1] = LANES128(v29).n128_u64[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[1] = LANES128(v34).n128_u64[0];
  v36 = vmlaq_f32(vmulq_f32(v29, v32), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v25, v33));
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v354, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v35).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v32).n128_u64[0]), 1);
  LANES128(v30).n128_u64[1] = LANES128(v33).n128_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v354).n128_u64[0];
  v37 = vmlaq_f32(v36, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v33, v35));
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v38 = vmlsq_f32(v37, v33, v30);
  LANES128(v30).n128_u64[0] = v27;
  v39 = vmulq_f32(v34, v38);
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[1] = LANES128(v34).n128_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v34).n128_u64[1] = LANES128(v31).n128_u64[0];
  LANES128(v31).n128_u64[1] = v27;
  v41 = vmlaq_f32(v39, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v30, v40));
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v40).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 1);
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v42).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v43 = vmlsq_f32(vmlaq_f32(v41, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v31, v40)),
                  v42, v34);
  v44 = *(float*)(a1 + 392) * 0x1.0000000000000p-1;
  LANES128(v43).n128_u32[3] = 0;
  v350 = v43;
  v45 = cos(v44);
  v46 = sin(v44);
  v47 = *(float*)&v19 * 0x1.0000000000000p-1;
  v48 = cos(v47);
  v49 = sin(v47);
  v50 = v23 * 0x1.0000000000000p-1;
  v51 = cos(v50);
  v52 = sin(v50);
  v53 = v46 * v49;
  LODWORD(v50) = *(_DWORD*)(a1 + 388);
  v54 = v45 * v49;
  LODWORD(v49) = *(_DWORD*)(a1 + 384);
  LANES128(v55).n128_u64[0] = LANES128(v348).n128_u64[0];
  *(float*)&v56 = PSEUDO_UNFUSED(v53 * v52) + PSEUDO_UNFUSED(v45 * v48) * v51;
  *(float*)&v53 = PSEUDO_UNFUSED(v53 * v51) + PSEUDO_UNFUSED(v45 * v48) * v52;
  LANES128(v57).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v348, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(float*)&v58 = v54 * v51 - PSEUDO_UNFUSED(v52 * (v46 * v48));
  *(float*)&v59 = v46 * v48 * v51 - PSEUDO_UNFUSED(v52 * v54);
  LANES128(v55).n128_u64[1] = LANES128(v57).n128_u64[0];
  LANES128(v60).n128_u64[0] = __PAIR64__(LODWORD(v53), v58);
  HIDWORD(v58) = LODWORD(v53);
  LANES128(v60).n128_u64[1] = __PAIR64__(v56, v59);
  HIDWORD(v59) = v56;
  LANES128(v61).n128_u64[0] = v58;
  LANES128(v61).n128_u64[1] = v59;
  v62 = vmulq_f32(v60, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v348, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v60).n128_u64[1] = LANES128(v60).n128_u64[0];
  LANES128(v64).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v63).n128_i8[8] =
      vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v65).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v64).n128_u64[1] = LANES128(v64).n128_u64[0];
  v66 = vmlaq_f32(vmulq_f32(v60, v62), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v55, v63));
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v348, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v65).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v62).n128_u64[0]), 1);
  LANES128(v57).n128_u64[1] = LANES128(v63).n128_u64[0];
  LANES128(v63).n128_u64[1] = LANES128(v348).n128_u64[0];
  v67 = vmlaq_f32(v66, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v63, v65));
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v63).n128_i8[8] =
      vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v68 = vmlsq_f32(v67, v63, v57);
  LANES128(v57).n128_u64[0] = v58;
  v69 = vmulq_f32(v64, v68);
  LANES128(v64).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v70).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v61).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v57).n128_u64[1] = LANES128(v64).n128_u64[0];
  *(int8x8_t*)&LANES128(v70).n128_i8[8] =
      vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v64).n128_u64[1] = LANES128(v61).n128_u64[0];
  LANES128(v61).n128_u64[1] = v58;
  v71 = vmlaq_f32(v69, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v57, v70));
  LANES128(v70).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v70).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v68).n128_u64[0]), 1);
  LANES128(v72).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v72).n128_i8[8] =
      vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v73 = vmlsq_f32(vmlaq_f32(v71, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v61, v70)),
                  v72, v64);
  v74 = *(float*)(a1 + 392) * 0x1.0000000000000p-1;
  LANES128(v73).n128_u32[3] = 0;
  v345 = v73;
  v75 = cos(v74);
  v76 = sin(v74);
  v77 = *(float*)&v49 * 0x1.0000000000000p-1;
  v78 = cos(v77);
  v79 = sin(v77);
  v80 = *(float*)&v50 * 0x1.0000000000000p-1;
  v81 = cos(v80);
  v82 = sin(v80);
  LANES128(v83).n128_u64[0] = LANES128(v353).n128_u64[0];
  *(float*)&v84 =
      PSEUDO_UNFUSED(v76 * v79 * v82) + PSEUDO_UNFUSED(v75 * v78) * v81;
  *(float*)&v85 =
      PSEUDO_UNFUSED(v76 * v79 * v81) + PSEUDO_UNFUSED(v75 * v78) * v82;
  LANES128(v86).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v353, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(float*)&v87 = v75 * v79 * v81 - PSEUDO_UNFUSED(v82 * (v76 * v78));
  *(float*)&v88 = v76 * v78 * v81 - PSEUDO_UNFUSED(v82 * (v75 * v79));
  LANES128(v83).n128_u64[1] = LANES128(v86).n128_u64[0];
  LANES128(v89).n128_u64[0] = __PAIR64__(v85, v87);
  HIDWORD(v87) = v85;
  LANES128(v89).n128_u64[1] = __PAIR64__(v84, v88);
  HIDWORD(v88) = v84;
  LANES128(v90).n128_u64[0] = v87;
  LANES128(v90).n128_u64[1] = v88;
  v91 = vmulq_f32(v89, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v89).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v353, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v92).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v89).n128_u64[1] = LANES128(v89).n128_u64[0];
  LANES128(v93).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v92).n128_i8[8] =
      vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v94).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v93).n128_u64[1] = LANES128(v93).n128_u64[0];
  v95 = vmlaq_f32(vmulq_f32(v89, v91), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v83, v92));
  LANES128(v92).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v353, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v94).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v91).n128_u64[0]), 1);
  LANES128(v86).n128_u64[1] = LANES128(v92).n128_u64[0];
  LANES128(v92).n128_u64[1] = LANES128(v353).n128_u64[0];
  v96 = vmlaq_f32(v95, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v92, v94));
  LANES128(v92).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v92).n128_i8[8] =
      vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v97 = vmlsq_f32(v96, v92, v86);
  LANES128(v86).n128_u64[0] = v87;
  v98 = vmulq_f32(v93, v97);
  LANES128(v93).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v99).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v90).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v86).n128_u64[1] = LANES128(v93).n128_u64[0];
  *(int8x8_t*)&LANES128(v99).n128_i8[8] =
      vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v93).n128_u64[1] = LANES128(v90).n128_u64[0];
  LANES128(v90).n128_u64[1] = v87;
  v100 = vmlaq_f32(v98, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v86, v99));
  LANES128(v99).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v99).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v97).n128_u64[0]), 1);
  LANES128(v101).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v101).n128_i8[8] =
      vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v102 = *(float32x4_t*)(a1 + 368);
  v103 = vmlsq_f32(vmlaq_f32(v100, COERCE_AS(float32x4_t, GameData_1a83800),
                             vmulq_f32(v90, v99)),
                   v101, v93);
  LANES128(v353).n128_u64[0] = LANES128(v103).n128_u64[0];
  LANES128(v103).n128_u32[3] = 0;
  v349 = v103;
  v351 = vaddq_f32(v350, v102);
  v346 = vaddq_f32(v345, v102);
  v104 = cos(v3);
  v105 = sin(v3);
  LANES128(v106).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v351, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v107).n128_u64[0] = LANES128(v351).n128_u64[0];
  *(float*)&v108 = v105 + PSEUDO_UNFUSED(v104 * 0x0.0p+0);
  *(float*)&v109 = v104 + PSEUDO_UNFUSED(v105 * 0x0.0p+0);
  LANES128(v107).n128_u64[1] = LANES128(v106).n128_u64[0];
  *(float*)&v110 = PSEUDO_UNFUSED(v105 * -0x0.0p+0) + v104 * 0x0.0p+0;
  LANES128(v111).n128_u64[0] = __PAIR64__(v108, v110);
  LANES128(v111).n128_u64[1] = __PAIR64__(v109, v110);
  v112 = vmulq_f32(v111, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v111).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v351, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v113).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v111).n128_u64[1] = LANES128(v111).n128_u64[0];
  *(int8x8_t*)&LANES128(v113).n128_i8[8] =
      vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v114).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v115 =
      vmlaq_f32(vmulq_f32(v111, v112), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v107, v113));
  LANES128(v113).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v351, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v114).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v112).n128_u64[0]), 1);
  LANES128(v106).n128_u64[1] = LANES128(v113).n128_u64[0];
  LANES128(v113).n128_u64[1] = LANES128(v351).n128_u64[0];
  v116 = vmlaq_f32(v115, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v113, v114));
  LANES128(v113).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v113).n128_i8[8] =
      vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v112).n128_u64[0] = __PAIR64__(v108, v110);
  HIDWORD(v110) = v109;
  v117 = vmlsq_f32(v116, v113, v106);
  LANES128(v118).n128_u64[0] = __PAIR64__(v108, v110);
  LANES128(v119).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v113).n128_u64[0] = LANES128(v118).n128_u64[0];
  LANES128(v118).n128_u64[1] = v110;
  *(int8x8_t*)&LANES128(v119).n128_i8[8] =
      vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v120).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v118, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v120).n128_u64[1] = LANES128(v120).n128_u64[0];
  v121 = vmulq_f32(v120, v117);
  LANES128(v120).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v118, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v118).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v118, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v113).n128_u64[1] = LANES128(v120).n128_u64[0];
  LANES128(v120).n128_u64[1] = LANES128(v118).n128_u64[0];
  LANES128(v118).n128_u64[1] = LANES128(v112).n128_u64[0];
  v122 = vmlaq_f32(v121, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v113, v119));
  LANES128(v119).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v119).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v117).n128_u64[0]), 1);
  v123 = vmlaq_f32(v122, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v118, v119));
  LANES128(v118).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v118).n128_i8[8] =
      vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v124 = vmlsq_f32(v123, v118, v120);
  LANES128(v124).n128_u32[3] = 0;
  v352 = v124;
  v125 = cos(v3);
  v126 = sin(v3);
  LANES128(v127).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v346, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v128).n128_u64[0] = LANES128(v346).n128_u64[0];
  *(float*)&v129 = v125 + PSEUDO_UNFUSED(v126 * 0x0.0p+0);
  LANES128(v128).n128_u64[1] = LANES128(v127).n128_u64[0];
  *(float*)&v130 = PSEUDO_UNFUSED(v126 * -0x0.0p+0) + v125 * 0x0.0p+0;
  *(float*)&v131 = v126 + PSEUDO_UNFUSED(v125 * 0x0.0p+0);
  LANES128(v132).n128_u64[0] = __PAIR64__(v131, v130);
  LANES128(v132).n128_u64[1] = __PAIR64__(v129, v130);
  v133 = vmulq_f32(v132, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v132).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v346, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v134).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v133, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v132).n128_u64[1] = LANES128(v132).n128_u64[0];
  *(int8x8_t*)&LANES128(v134).n128_i8[8] =
      vqtbl1_s8(v133, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v135).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v133, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v136 =
      vmlaq_f32(vmulq_f32(v132, v133), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v128, v134));
  LANES128(v134).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v346, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v135).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v133).n128_u64[0]), 1);
  LANES128(v127).n128_u64[1] = LANES128(v134).n128_u64[0];
  LANES128(v134).n128_u64[1] = LANES128(v346).n128_u64[0];
  v137 = vmlaq_f32(v136, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v134, v135));
  LANES128(v134).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v133, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v134).n128_i8[8] =
      vqtbl1_s8(v133, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v133).n128_u64[0] = __PAIR64__(v131, v130);
  HIDWORD(v130) = v129;
  v138 = vmlsq_f32(v137, v134, v127);
  LANES128(v139).n128_u64[0] = __PAIR64__(v131, v130);
  LANES128(v140).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v134).n128_u64[0] = LANES128(v139).n128_u64[0];
  LANES128(v139).n128_u64[1] = v130;
  *(int8x8_t*)&LANES128(v140).n128_i8[8] =
      vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v141).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v141).n128_u64[1] = LANES128(v141).n128_u64[0];
  v142 = vmulq_f32(v141, v138);
  LANES128(v141).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v139).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v139, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v134).n128_u64[1] = LANES128(v141).n128_u64[0];
  LANES128(v141).n128_u64[1] = LANES128(v139).n128_u64[0];
  LANES128(v139).n128_u64[1] = LANES128(v133).n128_u64[0];
  v143 = vmlaq_f32(v142, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v134, v140));
  LANES128(v140).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v140).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v138).n128_u64[0]), 1);
  v144 = vmlaq_f32(v143, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v139, v140));
  LANES128(v139).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v139).n128_i8[8] =
      vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v145 = vmlsq_f32(v144, v139, v141);
  LANES128(v145).n128_u32[3] = 0;
  v347 = v145;
  v146 = cos(v3);
  v147 = sin(v3);
  LANES128(v148).n128_u64[0] = LANES128(v353).n128_u64[0];
  LANES128(v149).n128_u64[0] = LANES128(v353).n128_u64[0];
  *(float*)&v150 = v146 + PSEUDO_UNFUSED(v147 * 0x0.0p+0);
  *(float*)&v151 = PSEUDO_UNFUSED(v147 * -0x0.0p+0) + v146 * 0x0.0p+0;
  *(float*)&v152 = v147 + PSEUDO_UNFUSED(v146 * 0x0.0p+0);
  LANES128(v153).n128_u64[0] = __PAIR64__(v152, v151);
  LANES128(v153).n128_u64[1] = __PAIR64__(v150, v151);
  v154 = vmulq_f32(v153, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v155).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v155).n128_i8[8] =
      vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v148).n128_u64[1] =
      LANES128_OF(vextq_s8(v349, v349, 8u)).n128_u64[0];
  LANES128(v156).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v148, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v153).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v148, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v148).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v148, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v149).n128_u64[1] = LANES128(v156).n128_u64[0];
  LANES128(v153).n128_u64[1] = LANES128(v153).n128_u64[0];
  LANES128(v156).n128_u64[1] = LANES128(v148).n128_u64[0];
  LANES128(v148).n128_u64[1] = LANES128(v353).n128_u64[0];
  v157 =
      vmlaq_f32(vmulq_f32(v153, v154), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v149, v155));
  LANES128(v155).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v155).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v154).n128_u64[0]), 1);
  v158 = vmlaq_f32(v157, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v148, v155));
  LANES128(v148).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v148).n128_i8[8] =
      vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v154).n128_u64[0] = __PAIR64__(v152, v151);
  HIDWORD(v151) = v150;
  v159 = vmlsq_f32(v158, v148, v156);
  LANES128(v160).n128_u64[0] = __PAIR64__(v152, v151);
  LANES128(v148).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v159, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v155).n128_u64[0] = __PAIR64__(v152, v151);
  LANES128(v160).n128_u64[1] = v151;
  *(int8x8_t*)&LANES128(v148).n128_i8[8] =
      vqtbl1_s8(v159, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v161).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v160, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v162).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v160, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v160).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v160, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v161).n128_u64[1] = LANES128(v161).n128_u64[0];
  LANES128(v155).n128_u64[1] = LANES128(v162).n128_u64[0];
  LANES128(v162).n128_u64[1] = LANES128(v160).n128_u64[0];
  LANES128(v160).n128_u64[1] = LANES128(v154).n128_u64[0];
  v163 =
      vmlaq_f32(vmulq_f32(v161, v159), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v155, v148));
  LANES128(v148).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v159, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v148).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v159).n128_u64[0]), 1);
  v164 = vmlaq_f32(v163, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v160, v148));
  LANES128(v160).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v159, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v160).n128_i8[8] =
      vqtbl1_s8(v159, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v165 = vmlsq_f32(v164, v160, v162);
  (*v8)[1] = vaddq_f32(v356, v352);
  LANES128(v165).n128_u32[3] = 0;
  (*v8)[2] = vaddq_f32(v356, v347);
  (*v8)[3] = v165;
LABEL_106:
  gfx_render_b3aee0(*v8);
LABEL_107:
  v342 = *(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL);
  v343 = *(_QWORD*)(v342 + 24);
  v344 = *(_QWORD*)(v342 + 32);
  if (v344 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v344 + 8), 1u,
                              memory_order_relaxed);
    wld_a7fda0(v343, *(_DWORD**)(a1 + 24));
    if (atomic_fetch_add((atomic_ullong* volatile)(v344 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v344 + 16LL))(v344);
      std___1___shared_weak_count___release_weak(v344);
    }
  }
  else {
    wld_a7fda0(v343, *(_DWORD**)(a1 + 24));
  }
}

#pragma GCC visibility pop
