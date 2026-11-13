#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21364a8;
__int64 SuperStripeSystem_Destructor(__int64 a1);
__int64 GameRoutine_5df100(__int64, unsigned int);
__int64 GameRoutine_5df110(_QWORD, long double);
__n128 GameRoutine_5c02d0(__int64, char);
extern __int64* GameData_21364f0[4];
float GameRoutine_5d0cd0(_OWORD*, float32x4_t*, __int64, int, int, float);
long double SuperStripeSystem_5cfd20(long double result, __int64, __int64,
                                     __int64, __int64, __int64);
void GameRoutine_5c2d00(long double, long double, __int64, int8x16_t*, __int64,
                        float*);
void GameRoutine_5c38e0(long double, long double, __int64, int8x16_t*, __int64,
                        float*);
__int64 SuperStripeSystem_5cd920(__int64 a1, double a2, long double a3);
void SuperStripeSystem_5d0320(float a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6);
void SuperStripeSystem_5d0a40(__int64 a1, __int64 a2);
__int64 GameRoutine_5ce320(void);
__int64 GameRoutine_5df100_alt1(_QWORD, _QWORD) __asm__("GameRoutine_5df100");
__int64
SuperStripeSystem_5d0320_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              double) __asm__("SuperStripeSystem_5d0320");
float game_5c0500(float32x4_t*, float32x2_t*, float32x2_t*, float32x2_t*,
                  float32x2_t*, float);
long double
SuperStripeSystem_5cfd20_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              double) __asm__("SuperStripeSystem_5cfd20");
void game_5c2d00(long double, long double, __int64, int8x16_t*, __int64,
                 float*);
void game_5c38e0(long double, long double, __int64, int8x16_t*, __int64,
                 float*);
__int64 SuperStripeSystem_5ce190(__int64 a1, __int64 a2, float32x4_t* a3);
float SuperStripeSystem_5d0cd0(float32x4_t* a1, float32x4_t* a2, __int64 a3,
                               int a4, int a5, float a6);

__int64 SuperStripeSystem_5cd920(__int64 a1, double a2, long double a3)
{

#pragma clang fp contract(off)
  float32x4_t* v4;
  int8x16_t* v6;
  _QWORD* v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  long double v11;
  long double v12;
  float32x4_t v13;
  float32x4_t v14;
  float v15;
  float v16;
  unsigned int v17;
  unsigned int v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  long double v23;

  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 160LL) + 1874LL) != 0) {
    return 0;
  }
  v4 = *(float32x4_t**)(a1 + 8);
  if (v4 == nullptr) {
    return 0;
  }
  v6 = *(int8x16_t**)(a1 + 8);
  LANES128(v4[7]).n128_u32[1] = LANES128(v4[7]).n128_u32[0];
  v7 = *(_QWORD**)(a1 + 16);
  v8 = v7[71];
  v10 = v7[19];
  v23 = *(long double*)(v7[62] + 16LL * *(int*)(a1 + 32));
  v9 = v23;
  LODWORD(a3) = *(_DWORD*)(a1 + 24);
  LODWORD(v9) = *(_DWORD*)(a1 + 28);
  GameRoutine_5c2d00(v9, a3, v10, v6, v8, (float*)&v23);
  LODWORD(v12) = *(_DWORD*)(a1 + 24);
  LODWORD(v11) = *(_DWORD*)(a1 + 28);
  GameRoutine_5c38e0(v11, v12, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 152LL), v4 + 1,
                     *(_QWORD*)(*(_QWORD*)(a1 + 16) + 568LL), (float*)&v23);
  v13 = *v4;
  v14 = v4[1];
  v15 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 568LL) + 24LL) +
                  864LL);
  v16 = vmuls_lane_f32(v15, *v4, 2);
  LANES128(v13).n128_f32[0] = v15 * COERCE_FLOAT(*v4);
  *(float*)&v17 = v15 * LANES128(v14).n128_f32[0];
  LANES128(v13).n128_f32[1] = vmuls_lane_f32(
      v15, COERCE_AS(float32x2_t, LANES128(*(v4)).n128_u64[0]), 1);
  *(float*)&v18 =
      vmuls_lane_f32(v15, COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]), 1);
  v19 = vmuls_lane_f32(v15, v14, 2);
  LANES128(v14).n128_u64[0] = __PAIR64__(v18, v17);
  LANES128(v13).n128_f32[2] = v16;
  LANES128(v14).n128_f32[2] = v19;
  *v4 = v13;
  v4[1] = v14;
  v20 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 1048LL);
  v21 = *(_QWORD*)(v20 + 24);
  if (v21 != 0) {
    do {
      v22 = v21;
      v21 = *(_QWORD*)(v21 + 104);
    } while (v21 != 0);
    *(_QWORD*)(v22 + 104) = v4;
    return 0;
  }
  else {
    *(_QWORD*)(v20 + 24) = v4;
    return 0;
  }
}

__int64 SuperStripeSystem_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)a1 = GameData_21364a8 + 16;
  result = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 24LL))(
      *(_QWORD*)(a1 + 16), v2);
  *(_QWORD*)(a1 + 48) = 0;
  return result;
}

__int64 SuperStripeSystem_5ce190(__int64 a1, __int64 a2, float32x4_t* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int32 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  long double v14;
  long double v15;
  long double v16;
  int8x16_t v17;
  float32x4_t v18;
  float v19;
  float v20;
  unsigned int v21;
  unsigned int v22;
  float v23;
  __int64 v24;
  __int64 v25;
  long double v26;
  long double v29;

  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(a2 + 16);
  v6 = *(_QWORD*)(v3 + 1048);
  v7 = *(_QWORD*)(*(_QWORD*)(v3 + 568) + 824LL);
  v8 = GameRoutine_5df100_alt1(v3 + 1960, *(unsigned int*)(v6 + 56)),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LANES128(a3[8]).n128_u32[0] = *(_DWORD*)(a2 + 24);
  v9 = *(_DWORD*)(a2 + 28);
  LANES128(a3[7]).n128_u32[2] = 0;
  LANES128(a3[8]).n128_u32[1] = v9;
  v10 = *(_QWORD**)(a2 + 16);
  v11 = v10[19];
  v12 = v10[71];
  v29 = *(long double*)(v10[62] + 16LL * *(int*)(a2 + 32));
  v13 = v29;
  LODWORD(v14) = *(_DWORD*)(a2 + 24);
  LODWORD(v13) = *(_DWORD*)(a2 + 28);
  game_5c2d00(v13, v14, v11, a3, v12, (float*)&v29),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LODWORD(v16) = *(_DWORD*)(a2 + 24);
  LODWORD(v15) = *(_DWORD*)(a2 + 28);
  game_5c38e0(v15, v16, *(_QWORD*)(*(_QWORD*)(a2 + 16) + 152LL), a3 + 1,
              *(_QWORD*)(*(_QWORD*)(a2 + 16) + 568LL), (float*)&v29),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v17 = *a3;
  v18 = a3[1];
  v19 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 568LL) + 24LL) +
                  864LL);
  v20 = vmuls_lane_f32(v19, *a3, 2);
  LANES128(v17).n128_f32[0] = v19 * COERCE_FLOAT(*a3);
  *(float*)&v21 = v19 * LANES128(v18).n128_f32[0];
  LANES128(v17).n128_f32[1] = vmuls_lane_f32(
      v19, COERCE_AS(float32x2_t, LANES128(*(a3)).n128_u64[0]), 1);
  *(float*)&v22 =
      vmuls_lane_f32(v19, COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1);
  v23 = vmuls_lane_f32(v19, v18, 2);
  LANES128(v18).n128_u64[0] = __PAIR64__(v22, v21);
  LANES128(v17).n128_f32[2] = v20;
  LANES128(v18).n128_f32[2] = v23;
  *a3 = v17;
  a3[1] = v18;
  LANES128(a3[8]).n128_u32[2] = *(_DWORD*)(a2 + 24);
  v24 = GameRoutine_5ce320(),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v25 = v8 + 80LL * *(_DWORD*)(v6 + 32) * LANES128(a3[7]).n128_u32[3];
  if (*(_DWORD*)(v7 + 40) != 0) {
    SuperStripeSystem_5d0320_alt1(v24, v25, a3, v3, v7, 0.0),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v26 = SuperStripeSystem_5cfd20_alt1(v24, v25, a3, v3, v7, 0.0);
  }
  return GameRoutine_5df110(*(_QWORD*)(a2 + 16) + 1960LL, v26);
}

void SuperStripeSystem_5d0320(float a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6)
{
  int v6;
  unsigned int v7;
  float v8;
  __int64 v11;
  int v12;
  float v13;
  unsigned __int64 v14;
  unsigned int v15;
  float32x4_t* v16;
  float32x4_t v17;
  float32x4_t* v18;
  __int8* v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t* v23;
  __int8* v24;
  float32x4_t v25;
  int8x16_t v26;
  float v27;
  float32x4_t v28;
  __int8* v29;
  float32x4_t v30;
  int8x16_t v31;
  float v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  float v43;
  float v44;
  __int64 v45;
  float v46;
  int v47;
  int v48;
  int v49;
  float v50;
  float v51;
  int v52;
  float32x4_t v53;
  __int64 v54;
  int v55;
  float v56;
  int v57;
  int v58;
  __int64 v59;
  char* v60;
  float v61;
  float32x4_t v62;
  float32x4_t v63;
  float v64;
  __int128 v65;
  __int128 v66;
  int v67;
  _DWORD* v68;
  __int64 v69;
  int v70;
  unsigned int v71;
  __int64 v72;
  float32x4_t v73;
  int8x16_t v74;
  float v75;
  float v76;
  float v77;
  __int64 v78;
  char* v79;
  __int64 v80;
  int v81;
  float32x4_t v82;
  float32x4_t v83;
  float v84;
  __int128 v85;
  __int128 v86;
  _DWORD* v87;
  float v88;
  float v89;
  int v90;
  int v91;
  float v92;
  int v93;
  int v94;
  float v95;
  __int64 v96;
  _DWORD* v97;
  _DWORD* v98;
  __int64 v99;
  int v100;
  float32x4_t* v101;
  float v102;
  _DWORD* v103;
  float32x4_t v104;
  int8x16_t v105;
  float32x4_t v106;
  float32x4_t v107;
  int8x16_t v108;
  float v109;
  int v110;
  __int64 v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  struct {
    __int64 v115;
    float v116;
    float v117;
    float v118;
    float v119;
    char gap88_[16];
    int v120;
    int v121;
  } v115_;

  v6 = *(_DWORD*)(a4 + 112);
  v7 = v6 - 2;
  v115_.v121 = v6;
  if (v6 <= 2) {
    *(_DWORD*)(a4 + 120) = 0;
    return;
  }
  v8 = 0x0.0p+0f;
  v11 = *(_QWORD*)(*(_QWORD*)(a4 + 88) + 88LL);
  if (*(_DWORD*)(a6 + 88) == 1) {
    v12 = (v115_.v121 - 1) & 3;
    if (v7 >= 3) {
      v13 = 0x0.0p+0f;
      v15 = (v115_.v121 - 1) & 0xFFFFFFFC;
      v14 = *(_QWORD*)(*(_QWORD*)(a4 + 88) + 88LL);
      do {
        v16 = *(float32x4_t**)(v14 + 88);
        v15 -= 4;
        v17 = *v16;
        v19 = &LANES128(v16[5]).n128_i8[8];
        v18 = (float32x4_t*)LANES128(v16[5]).n128_u64[1];
        v20 = vsubq_f32(v17, *(float32x4_t*)*((_QWORD*)v19 + 1));
        v21 = vmulq_f32(v20, v20);
        LANES128(v21).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
                .n64_u64[0];
        v22 = *v18;
        v24 = &LANES128(v18[5]).n128_i8[8];
        v23 = (float32x4_t*)LANES128(v18[5]).n128_u64[1];
        v25 = vsubq_f32(v22, *(float32x4_t*)*((_QWORD*)v24 + 1));
        v26 = vmulq_f32(v25, v25);
        v27 = v13 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]))))
                        .n64_f32[0];
        LANES128(v26).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
                .n64_u64[0];
        v28 = *v23;
        v29 = &LANES128(v23[5]).n128_i8[8];
        v14 = LANES128(v23[5]).n128_u64[1];
        v30 = vsubq_f32(v28, *(float32x4_t*)*((_QWORD*)v29 + 1));
        v31 = vmulq_f32(v30, v30);
        LANES128(v31).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                .n64_u64[0];
        v32 =
            (float)(v27 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]))))
                        .n64_f32[0]) +
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]))))
                .n64_f32[0];
        v33 =
            vsubq_f32(*(float32x4_t*)v14, *(float32x4_t*)*(_QWORD*)(v14 + 96));
        v34 = vmulq_f32(v33, v33);
        LANES128(v34).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                .n64_u64[0];
        v13 = v32 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]))))
                        .n64_f32[0];
      } while (v15 != 0);
    }
    else {
      v13 = 0x0.0p+0f;
      v14 = *(_QWORD*)(*(_QWORD*)(a4 + 88) + 88LL);
    }
    for (; v12 != 0;
         v13 =
             v13 +
             LANES64_OF(vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]))))
                 .n64_f32[0]) {
      v14 = *(_QWORD*)(v14 + 88);
      --v12;
      v35 = vsubq_f32(*(float32x4_t*)v14, *(float32x4_t*)*(_QWORD*)(v14 + 96));
      v36 = vmulq_f32(v35, v35);
      LANES128(v36).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
              .n64_u64[0];
    }
    v8 = 0x1.0000000000000p+0f / v13;
  }
  v37 = *(float*)(a5 + 116);
  v38 = *(_DWORD*)(a6 + 40);
  v39 = *(_QWORD*)(*(_QWORD*)(a5 + 568) + 16LL);
  v40 = *(unsigned __int8*)(v39 + 1884);
  v41 = *(unsigned __int8*)(v39 + 1878);
  if (v40 == 0) {
    v37 = 0x1.0000000000000p+0f;
  }
  v42 = (unsigned int)(v115_.v121 + v38 * (v115_.v121 - 1));
  if (v41 != 0) {
    v43 = v37 * *(float*)(a5 + 112);
  }
  else {
    v43 = v37;
  }
  v44 = 0x1.0000000000000p+0f / (float)(v38 + 1);
  if ((int)v42 >= 1) {
    v45 = a4;
    v46 = *(float*)(a4 + 128) - floorf(*(float*)(a4 + 128));
    v47 = vcvtms_s32_f32(v44 * 0x0.0p+0f);
    if (v47 < 1) {
      v48 = 0;
    }
    else {
      v11 = *(_QWORD*)(v11 + 88);
      v48 = v47;
    }
    v50 = a1 + v46;
    v114 = (__typeof__(v114)){0};
    v113 = (__typeof__(v113)){0};
    v51 = (float)(unsigned int)(v42 - 1);
    GameRoutine_5d0cd0(&v114, &v113, v11, v47, v115_.v121,
                       (float)(PSEUDO_UNFUSED(v44 * 0x0.0p+0f)) - (float)v47);
    v52 = *(_DWORD*)(a6 + 88);
    v53 = (__typeof__(v53)){0};
    if (v52 != 0) {
      v54 = 0;
      v55 = 0;
      a4 = v45;
      if (v52 != 1) {
        goto LABEL_28;
      }
      v56 = *(float*)(v45 + 140);
      v57 = *(_DWORD*)(a6 + 12);
      v58 = *(_DWORD*)(a6 + 16);
      v115_.v115 = 0;
      v115_.v116 = 0x0.0p+0f;
      v53 = v114;
      v59 = 12LL * v57;
      v60 = (char*)&v115_.v115 + 12 * v58 + 4;
      v115_.v117 = v56 * 0x1.99999a0000000p-4f;
      v115_.v118 = v56 * 0x1.99999a0000000p-4f;
      v115_.v119 = v56 * 0x1.99999a0000000p-4f;
    }
    else {
      a4 = v45;
      v59 = 12LL * *(int*)(a6 + 12);
      v61 = (float)(v50 + 0x0.0p+0f) /
            (float)((int)*(float*)(a6 + 24) - 1 +
                    ((int)*(float*)(a6 + 24) - 1) * v38);
      v60 = (char*)&v115_.v115 + 12 * *(int*)(a6 + 16) + 4;
      *(float*)&v115_.v115 = 0x0.0p+0f / v51;
      *((float*)&v115_.v115 + 1) = 0x0.0p+0f / v51;
      if (v61 > 0x1.0000000000000p+0f) {
        v61 = 0x1.0000000000000p+0f;
      }
      v115_.v116 = 0x0.0p+0f / v51;
      v115_.v117 = v61;
      v115_.v118 = v61;
      v115_.v119 = v61;
    }
    LODWORD(v54) = *(_DWORD*)((char*)&v115_.v115 + v59);
    HIDWORD(v54) = *(_DWORD*)v60;
    v55 = *((_DWORD*)&v115_.v115 + 3 * *(int*)(a6 + 20) + 2);
  LABEL_28:
    v63 = v113;
    v62 = v114;
    v64 = *(float*)(v11 + 80);
    *(_QWORD*)a3 = LANES128(v114).n128_u64[0];
    *(_DWORD*)(a3 + 8) = LANES128(v62).n128_u32[2];
    *(_QWORD*)(a3 + 80) = LANES128(v62).n128_u64[0];
    *(_QWORD*)(a3 + 16) = LANES128(v63).n128_u64[0];
    *(_QWORD*)(a3 + 96) = LANES128(v63).n128_u64[0];
    *(_DWORD*)(a3 + 88) = LANES128(v62).n128_u32[2];
    *(_DWORD*)(a3 + 24) = LANES128(v63).n128_u32[2];
    *(_DWORD*)(a3 + 104) = LANES128(v63).n128_u32[2];
    *(float*)(a3 + 12) = v43 * v64;
    *(float*)(a3 + 92) = -(float)(v43 * v64);
    v65 = *(_OWORD*)(v11 + 48);
    *(_QWORD*)(a3 + 32) = v65;
    *(_DWORD*)(a3 + 40) = DWORD2(v65);
    v66 = *(_OWORD*)(v11 + 48);
    *(_QWORD*)(a3 + 48) = v54;
    *(_QWORD*)(a3 + 128) = v54;
    *(_DWORD*)(a3 + 28) = 0;
    *(_DWORD*)(a3 + 108) = 0;
    *(_DWORD*)(a3 + 120) = DWORD2(v66);
    *(_QWORD*)(a3 + 112) = v66;
    *(_DWORD*)(a3 + 56) = v55;
    *(_DWORD*)(a3 + 136) = v55;
    v49 = 2;
    if ((_DWORD)v42 != 1) {
      v67 = v38 + 1;
      v68 = (_DWORD*)(a3 + 296);
      v69 = 1;
      v112 = v53;
      v111 = a4;
      v115_.v120 = v67;
      v70 = 2;
      do {
        v88 = (float)(unsigned int)v69;
        v89 = v44 * (float)(unsigned int)v69;
        v90 = vcvtms_s32_f32(v89);
        if (v48 < v90) {
          v11 = *(_QWORD*)(v11 + 88);
          v48 = v90;
        }
        v114 = (__typeof__(v114)){0};
        v113 = (__typeof__(v113)){0};
        GameRoutine_5d0cd0(&v114, &v113, v11, v90, v115_.v121,
                           v89 - (float)v90);
        v91 = *(_DWORD*)(a6 + 88);
        if (v91 == 1) {
          if (v70 <= 2) {
            v71 = 2;
          }
          else {
            v71 = v70;
          }
          v72 = a3 + 80LL * v71;
          v73 = vsubq_f32(v114, v112);
          v112 = v114;
          v74 = vmulq_f32(v73, v73);
          LANES128(v74).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v74, v74, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
                  .n64_u64[0];
          v75 = *(float*)(v72 - 112);
          v76 = *(float*)(v72 - 108);
          LANES128(v74).n128_f32[0] =
              LANES64_OF(
                  vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]))))
                  .n64_f32[0];
          *(float*)&v115_.v115 = v75 + (float)(LANES128(v74).n128_f32[0] * v8);
          *((float*)&v115_.v115 + 1) =
              v76 + (float)(LANES128(v74).n128_f32[0] * v8);
          v77 = *(float*)(v72 - 104);
          v78 = 12LL * *(int*)(a6 + 12);
          v79 = (char*)&v115_.v115 + 12 * *(int*)(a6 + 16);
          v115_.v116 = v77 + (float)(LANES128(v74).n128_f32[0] * v8);
          v115_.v117 =
              v75 - (float)(0x1.99999a0000000p-4f * LANES128(v74).n128_f32[0]);
          v115_.v118 =
              v76 - (float)(0x1.99999a0000000p-4f * LANES128(v74).n128_f32[0]);
          v115_.v119 =
              v77 - (float)(0x1.99999a0000000p-4f * LANES128(v74).n128_f32[0]);
          LODWORD(v80) = *(_DWORD*)((char*)&v115_.v115 + v78);
          HIDWORD(v80) = *((_DWORD*)v79 + 1);
          v81 = *((_DWORD*)&v115_.v115 + 3 * *(int*)(a6 + 20) + 2);
        }
        else if (v91 != 0) {
          v81 = 0;
          v80 = 0;
        }
        else {
          v92 = (float)(((int)*(float*)(a6 + 24) - 1) * v115_.v120);
          v93 = *(_DWORD*)(a6 + 12);
          v94 = *(_DWORD*)(a6 + 16);
          *(float*)&v115_.v115 = v88 / v51;
          *((float*)&v115_.v115 + 1) = v88 / v51;
          v95 = (float)(v50 + v88) / v92;
          v96 = 12LL * v93;
          v97 = (_DWORD*)&v115_.v115 + 3 * v94 + 1;
          if (v95 > 0x1.0000000000000p+0f) {
            v95 = 0x1.0000000000000p+0f;
          }
          v115_.v116 = v88 / v51;
          v115_.v117 = v95;
          v115_.v118 = v95;
          v115_.v119 = v95;
          LODWORD(v80) = *(_DWORD*)((char*)&v115_.v115 + v96);
          HIDWORD(v80) = *v97;
          v81 = *((_DWORD*)&v115_.v115 + 3 * *(int*)(a6 + 20) + 2);
        }
        v83 = v113;
        v82 = v114;
        v84 = *(float*)(v11 + 80);
        ++v69;
        v70 += 2;
        *((_QWORD*)v68 - 17) = LANES128(v114).n128_u64[0];
        *(v68 - 32) = LANES128(v82).n128_u32[2];
        *((_QWORD*)v68 - 7) = LANES128(v82).n128_u64[0];
        *((_QWORD*)v68 - 15) = LANES128(v83).n128_u64[0];
        *((_QWORD*)v68 - 5) = LANES128(v83).n128_u64[0];
        *(v68 - 12) = LANES128(v82).n128_u32[2];
        *(v68 - 28) = LANES128(v83).n128_u32[2];
        *(v68 - 8) = LANES128(v83).n128_u32[2];
        *((float*)v68 - 31) = v43 * v84;
        *((float*)v68 - 11) = -(float)(v43 * v84);
        v85 = *(_OWORD*)(v11 + 48);
        *((_QWORD*)v68 - 13) = v85;
        *(v68 - 24) = DWORD2(v85);
        v86 = *(_OWORD*)(v11 + 48);
        *((_QWORD*)v68 - 11) = v80;
        *((_QWORD*)v68 - 1) = v80;
        *v68 = v81;
        *((float*)v68 - 27) = v88;
        *((float*)v68 - 7) = v88;
        *((_QWORD*)v68 - 3) = v86;
        *(v68 - 4) = DWORD2(v86);
        v87 = v68 - 20;
        v68 += 40;
        *v87 = v81;
      } while (v42 != v69);
      a4 = v111;
      v49 = 2 * v42;
    }
    goto LABEL_44;
  }
  v49 = 0;
LABEL_44:
  *(_DWORD*)(a4 + 120) = v49;
  if (*(_DWORD*)a6 != 0 && *(_DWORD*)a6 != 3 && (int)v42 >= 1) {
    v98 = (_DWORD*)(a3 + 152);
    v99 = 0;
    v100 = 0;
    v101 = *(float32x4_t**)(*(_QWORD*)(a4 + 88) + 88LL);
    do {
      v109 = v44 * (float)(unsigned int)v99;
      v110 = vcvtms_s32_f32(v109);
      if (v100 < v110) {
        v101 = (float32x4_t*)LANES128(v101[5]).n128_u64[1];
        v100 = v110;
      }
      ++v99;
      v102 = v109 - (float)v110;
      v103 = v98 - 20;
      v104 = vmlaq_n_f32(
          v101[4],
          vsubq_f32(*(float32x4_t*)(LANES128(v101[5]).n128_u64[1] + 64),
                    v101[4]),
          v102);
      v105 = vmulq_f32(v104, v104);
      LANES128(v105).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v105, v105, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0])))
              .n64_u64[0];
      LANES128(v105).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0])))
              .n64_u64[0];
      LANES128(v105).n128_u64[1] = LANES128(v105).n128_u64[0];
      v106 = vrsqrteq_f32(v105);
      v107 = vmulq_f32(v106, vrsqrtsq_f32(v106, vmulq_f32(v105, v106)));
      v108 = vbicq_s8(
          vmulq_f32(v104,
                    vmulq_f32(v107, vrsqrtsq_f32(v107, vmulq_f32(v105, v107)))),
          vceqzq_f32(v105));
      *((_QWORD*)v98 - 11) = LANES128(v108).n128_u64[0];
      *((_QWORD*)v98 - 1) = LANES128(v108).n128_u64[0];
      *v98 = LANES128(v108).n128_u32[2];
      v98 += 40;
      *v103 = LANES128(v108).n128_u32[2];
    } while (v42 != v99);
  }
}

void SuperStripeSystem_5d0a40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  long double v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  int v13;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  float32x4_t* v19;
  int v20;
  float v21;
  float32x4_t v22;
  float32x4_t* v23;
  int v24;
  float v25;
  float v26;
  __int64 v27;
  __int64 v28;
  float v29;
  float v30;

  v2 = *(_QWORD*)(a2 + 1048);
  v3 = *(_QWORD*)(v2 + 24);
  if (v3 != 0 && *(_BYTE*)(v2 + 16) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(a2 + 568) + 824LL);
    v30 = *(float*)(a2 + 76);
    v6 = GameRoutine_5df100(a2 + 1960, *(_DWORD*)(v2 + 56));
    v8 = v30;
    v9 = v6;
    v10 = 0;
    v11 = GameData_21364f0[0];
    do {
      while (1) {
        v15 = v3;
        v16 = *(_DWORD*)(v3 + 124);
        v17 = *(_DWORD*)(v2 + 32);
        v3 = *(_QWORD*)(v3 + 104);
        v18 = *(_DWORD*)(v15 + 112);
        if (v18 >= 1) {
          v19 = *(float32x4_t**)(v15 + 88);
          v20 = 0;
          v21 = *(float*)(v5 + 52) +
                (float)((float)(0x1.0000000000000p+0f - *(float*)(v5 + 52)) *
                        (float)(0x1.0000000000000p+0f - v30));
          do {
            LANES128(v22).n128_u64[0] = *(_QWORD*)(v5 + 56);
            v19 = (float32x4_t*)LANES128(v19[5]).n128_u64[1];
            ++v20;
            LANES128(v22).n128_u64[1] = *(unsigned int*)(v5 + 64);
            v19[1] = vmulq_n_f32(vaddq_f32(v19[1], vmulq_n_f32(v22, v8)), v21);
            v18 = *(_DWORD*)(v15 + 112);
          } while (v20 < v18);
          if (v18 >= 1) {
            v23 = *(float32x4_t**)(v15 + 88);
            v24 = 0;
            do {
              v23 = (float32x4_t*)LANES128(v23[5]).n128_u64[1];
              ++v24;
              v7 = COERCE_LONG_DOUBLE(vaddq_f32(*v23, vmulq_n_f32(v23[1], v8)));
              *(long double*)v23 = v7;
              v18 = *(_DWORD*)(v15 + 112);
            } while (v24 < v18);
          }
        }
        v25 = *(float*)(a2 + 76) + *(float*)(v15 + 128);
        v26 = *(float*)(v15 + 136);
        *(float*)(v15 + 128) = v25;
        *(float*)(v15 + 136) = v25;
        if (v18 <= 1) {
          break;
        }
        if (floorf(v25) > floorf(v26)) {
          *(_DWORD*)(v15 + 112) = --v18;
        }
        v12 = v9 + 80LL * v17 * v16;
        *(float*)&v7 = (float)(*(_DWORD*)(v15 + 116) - v18);
        v13 = *(_DWORD*)(v5 + 40);
        if (v13 != 0) {
          SuperStripeSystem_5d0320(*(float*)&v7 * (float)(v13 + 1), v6, v12,
                                   v15, a2, v5);
          v10 = v15;
          v8 = v30;
          if (v3 == 0) {
            goto LABEL_21;
          }
        }
        else {
          v7 = SuperStripeSystem_5cfd20(v7, v6, v12, v15, a2, v5);
          v10 = v15;
          v8 = v30;
          if (v3 == 0) {
            goto LABEL_21;
          }
        }
      }
      if (v10 != 0) {
        *(_QWORD*)(v10 + 104) = v3;
      }
      else {
        *(_QWORD*)(v2 + 24) = v3;
      }
      v27 = *(_QWORD*)(v15 + 80);
      v28 = *v11;
      v29 = *(float*)(*(_QWORD*)(*(_QWORD*)(a2 + 568) + 824LL) + 24LL);
      --*(_DWORD*)(a2 + 2104);
      *(_QWORD*)(a2 + 2096) -=
          (112LL * (unsigned int)v29 + 255) & 0xFFFFFFFF00LL;
      *(__n128*)&v7 = GameRoutine_5c02d0(v27, 1);
      *(_QWORD*)(v15 + 80) = 0;
      *(_BYTE*)(v15 + 144) = 0;
      --*(_DWORD*)(v28 + 44);
      v8 = v30;
    } while (v3 != 0);
  LABEL_21:
    GameRoutine_5df110(a2 + 1960, v7);
  }
}

float SuperStripeSystem_5d0cd0(float32x4_t* a1, float32x4_t* a2, __int64 a3,
                               int a4, int a5, float a6)
{

#pragma clang fp contract(off)
  float32x4_t* v6;
  float32x4_t v7;
  float32x4_t v8;
  unsigned __int64 v9;
  float32x4_t* v10;
  unsigned __int64 v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  unsigned __int64 v15;
  float32x4_t* v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t* v19;
  unsigned __int64 v20;
  float32x4_t v21;
  float32x4_t v22;
  unsigned __int64 v23;
  float32x4_t v24;
  float32x4_t* v25;
  unsigned __int64 v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  unsigned __int64 v32;
  float32x4_t* v33;
  float32x4_t* v34;
  float32x4_t v35;
  unsigned __int64 v36;
  float32x4_t v37;
  float32x4_t v39;
  float32x4_t v40;
  struct {
    float32x2_t v41;
    unsigned __int64 v42;
  } v41_;
  struct {
    float32x2_t v43;
    unsigned __int64 v44;
  } v43_;

  if (a4 == 0) {
    v15 = *(_QWORD*)(a3 + 8);
    v16 = *(float32x4_t**)(a3 + 88);
    LANES128(v17).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v17).n128_u64[1] = 0x3F0000003F000000LL;
    v18 = *(float32x4_t*)a3;
    LANES64(v43_.v43).n64_u64[0] = *(unsigned __int64*)a3;
    v43_.v44 = v15;
    v19 = (float32x4_t*)LANES128(v16[5]).n128_u64[1];
    v20 = LANES128(*(v16)).n128_u64[1];
    LANES64(v41_.v41).n64_u64[0] = LANES128(*(v16)).n128_u64[0];
    v41_.v42 = v20;
    v21 = *v19;
    v39 = vmulq_f32(vsubq_f32(*v19, v18), v17);
    v22 = vaddq_f32(vsubq_f32(*v16, v18), vsubq_f32(*v16, v21));
    LANES128(v18).n128_u64[0] = 0x3E8000003E800000LL;
    LANES128(v18).n128_u64[1] = 0x3E8000003E800000LL;
    v40 = vmulq_f32(v22, v18);
    goto LABEL_8;
  }
  if (a4 != a5 - 1) {
    v16 = *(float32x4_t**)(a3 + 88);
    if (a4 == a5 - 2) {
      v23 = LANES128(v16[6]).n128_u64[0];
      LANES128(v24).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v24).n128_u64[1] = 0x3F0000003F000000LL;
      v25 = *(float32x4_t**)(v23 + 96);
      v43_.v44 = *(_QWORD*)(v23 + 8);
      LANES64(v43_.v43).n64_u64[0] = *(unsigned __int64*)v23;
      v26 = LANES128(*(v16)).n128_u64[1];
      LANES64(v41_.v41).n64_u64[0] = LANES128(*(v16)).n128_u64[0];
      v41_.v42 = v26;
      v27 = *v16;
      v28 = *v25;
      v40 = vmulq_f32(vsubq_f32(*v16, *v25), v24);
      v29 = vaddq_f32(vsubq_f32(*(float32x4_t*)v23, v27),
                      vsubq_f32(*(float32x4_t*)v23, v28));
      LANES128(v28).n128_u64[0] = 0xBE800000BE800000LL;
      LANES128(v28).n128_u64[1] = 0xBE800000BE800000LL;
      v30 = vmulq_f32(v29, v28);
      v31 = *(float32x4_t*)(v23 + 32);
      v39 = v30;
    LABEL_9:
      v14 = vaddq_f32(vmulq_n_f32(v31, 0x1.0000000000000p+0f - a6),
                      vmulq_n_f32(v16[2], a6));
      goto LABEL_10;
    }
    v32 = *(_QWORD*)(a3 + 8);
    v33 = *(float32x4_t**)(a3 + 96);
    v34 = (float32x4_t*)LANES128(v16[5]).n128_u64[1];
    v35 = *(float32x4_t*)a3;
    LANES64(v43_.v43).n64_u64[0] = *(unsigned __int64*)a3;
    v43_.v44 = v32;
    v36 = LANES128(*(v16)).n128_u64[1];
    LANES64(v41_.v41).n64_u64[0] = LANES128(*(v16)).n128_u64[0];
    v41_.v42 = v36;
    LANES128(v37).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v37).n128_u64[1] = 0x3F0000003F000000LL;
    v40 = vmulq_f32(vsubq_f32(*v16, *v33), v37);
    v39 = vmulq_f32(vsubq_f32(*v34, v35), v37);
  LABEL_8:
    v31 = *(float32x4_t*)(a3 + 32);
    goto LABEL_9;
  }
  v6 = *(float32x4_t**)(a3 + 96);
  v7 = *(float32x4_t*)a3;
  LANES128(v8).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v8).n128_u64[1] = 0x3F0000003F000000LL;
  v9 = LANES128(*(v6)).n128_u64[1];
  v10 = (float32x4_t*)LANES128(v6[6]).n128_u64[0];
  LANES64(v43_.v43).n64_u64[0] = LANES128(*(v6)).n128_u64[0];
  v43_.v44 = v9;
  v11 = *(_QWORD*)(a3 + 8);
  LANES64(v41_.v41).n64_u64[0] = *(unsigned __int64*)a3;
  v41_.v42 = v11;
  v12 = *v10;
  v40 = vmulq_f32(vsubq_f32(v7, *v10), v8);
  v13 = vaddq_f32(vsubq_f32(*v6, v7), vsubq_f32(*v6, v12));
  LANES128(v12).n128_u64[0] = 0xBE800000BE800000LL;
  LANES128(v12).n128_u64[1] = 0xBE800000BE800000LL;
  v39 = vmulq_f32(v13, v12);
  v14 = vaddq_f32(vmulq_f32(v6[2], COERCE_AS(float32x4_t, 0)),
                  *(float32x4_t*)(a3 + 32));
  a6 = 0x1.0000000000000p+0f;
LABEL_10:
  *a2 = v14;
  return game_5c0500(a1, &v43_.v43, (float32x2_t*)&v40, &v41_.v41,
                     (float32x2_t*)&v39, a6);
}

#pragma GCC visibility pop
