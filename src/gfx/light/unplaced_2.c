#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN* GameData_212c2a0;
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a837f0;
float32x4_t gfx_light_c54ca0(_QWORD* a1, _QWORD* a2);

float32x4_t gfx_light_c54ca0(_QWORD* a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v5;
  float32x4_t result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float32x4_t* v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t* v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  unsigned __int64 v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16x2_t v39;
  int8x16x2_t v40;
  int8x16x2_t v41;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = a1[2];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v5 != 0) {
      v7 = a1[1];
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v8),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (v7 != 0) {
        v9 = a1[4];
        v10 = a2[1];
        *(_QWORD*)(v9 + 256) = *a2;
        *(_QWORD*)(v9 + 264) = v10;
        v11 = (float32x4_t*)a1[4];
        v12 = v11[16];
        v13 = vmulq_f32(v12, v12);
        LANES128(v13).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                .n64_u64[0];
        LANES128(v13).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                .n64_u64[0];
        LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
        v14 = vrsqrteq_f32(v13);
        v15 = vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v13, v14)));
        v11[16] = vbicq_s8(
            vmulq_f32(v12,
                      vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v13, v15)))),
            vceqzq_f32(v13));
        v16 = (float32x4_t*)a1[4];
        v17 = v16[16];
        v18 = vmulq_f32(v17, v17);
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_u64[0];
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_u64[0];
        LANES128(v18).n128_u64[1] = LANES128(v18).n128_u64[0];
        v19 = vrsqrteq_f32(v18);
        v20 = vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v18, v19)));
        v21 = vbicq_s8(
            vmulq_f32(v17,
                      vmulq_f32(v20, vrsqrtsq_f32(v20, vmulq_f32(v18, v20)))),
            vceqzq_f32(v18));
        LANES128(v22).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v23).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v22).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v24).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v23).n128_i8[8] =
            vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v25 =
            LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                .n64_u64[0];
        v26 = vmulq_f32(v22, v23);
        *(int8x8_t*)&LANES128(v24).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v23).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        v27 = vmulq_f32(v21, COERCE_AS(float32x4_t, GameData_1a82c50));
        LANES128(v23).n128_u64[1] = v25;
        LANES128(v27).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                .n64_u64[0];
        LANES128(v28).n128_u64[0] = 0x3F8000003F800000LL;
        LANES128(v28).n128_u64[1] = 0x3F8000003F800000LL;
        v29 = vmlsq_f32(v26, v23, v24);
        LANES128(v24).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v24).n128_u64[1] = 0x3F0000003F000000LL;
        LANES128(v27).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                .n64_u64[0];
        LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
        v30 = vaddq_f32(v27, v28);
        v31 = vsqrtq_f32(vaddq_f32(v30, v30));
        v32 = vdivq_f32(v29, v31);
        LANES128(v32).n128_u32[3] =
            LANES128_OF(vmulq_f32(v31, v24)).n128_u32[3];
        LANES128(v31).n128_u64[0] = 0x3400000034000000LL;
        LANES128(v31).n128_u64[1] = 0x3400000034000000LL;
        v33 = vbslq_s8(vcgeq_f32(v31, v30),
                       COERCE_AS(int8x16_t, GameData_1a82dd0), v32);
        v34 = v33;
        LANES128(v34).n128_u32[3] = 0;
        LANES128(v31).n128_u64[0] =
            LANES64_OF(
                vrev64_s32(COERCE_AS(int32x2_t, LANES128(v33).n128_u64[0])))
                .n64_u64[0];
        LANES128(v23).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                .n64_u64[0];
        LANES128(v18).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v20).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v31).n128_i8[8] =
            vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v23).n128_i8[8] =
            vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v18).n128_u64[1] = LANES128(v31).n128_u64[1];
        LANES128(v20).n128_u64[1] = LANES128(v23).n128_u64[1];
        v40.val[1] = vmulq_f32(v31, v31);
        v35 = vmulq_f32(v23, v23);
        v36 = vmulq_f32(v18, v34);
        v37 = vmulq_laneq_f32(v20, v33, 3);
        v38 = vaddq_f32(v36, v36);
        v39.val[1] = vaddq_f32(v37, v37);
        v41.val[0] = vaddq_f32(v39.val[1], v38);
        v41.val[1] = vsubq_f32(v38, v39.val[1]);
        v40.val[0] = vsubq_f32(
            COERCE_AS(float32x4_t, GameData_1a837f0),
            vaddq_f32(vaddq_f32(v35, v35), vaddq_f32(v40.val[1], v40.val[1])));
        LANES128(v39.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                .n64_u64[0];
        LANES128(v40.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v39.val[1]).n128_i8[8] =
            vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x706050413121110LL));
        *(int8x8_t*)&LANES128(v40.val[1]).n128_i8[8] =
            vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
        v39.val[0] = v40.val[0];
        LANES128(v41.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v39, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v41.val[0]).n128_i8[8] =
            vqtbl2_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
        LANES128(v41.val[1]).n128_u64[0] =
            LANES64_OF(vqtbl2_s8(v39, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v41.val[1]).n128_i8[8] =
            vqtbl2_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
        LANES128(v39.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v40, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v39.val[0]).n128_i8[8] =
            vqtbl2_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
        result = vaddq_f32(
            *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                            (_QWORD)GameData_212c2a0),
            vmlaq_f32(vmlaq_f32(vnegq_f32(v41.val[0]),
                                COERCE_AS(float32x4_t, 0), v41.val[1]),
                      COERCE_AS(float32x4_t, 0), v39.val[0]));
        v16[17] = result;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
