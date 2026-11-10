#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d2b5f0(_QWORD, double);
__int64 strlen(_QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
extern __int64 (*eft_ClampCurve_ptr)();
bool IKSlopeBiped2_112c3b0(_BOOL8 result, double a2);
__attribute__((swiftcall)) void
GameRoutine_109da60(PSEUDO_X8, float32x4_t*, float32x4_t*, int8x16_t result);
__int64 GameRoutine_d2b5f0_alt1(_QWORD) __asm__("GameRoutine_d2b5f0");
__int64 IKSlopeBiped2_112c3b0_alt1(_QWORD) __asm__("IKSlopeBiped2_112c3b0");
extern __int64 GameData_21d8778;
float math_Vec3_Angle(_QWORD, _QWORD);
float IKSlopeBiped2_Unknown3(float32x4_t* a1);

float IKSlopeBiped2_Unknown3(float32x4_t* a1)
{
  __int64 v1;
  float32x4_t* v2;
  float32x4_t* v3;
  float32x4_t v4;
  int8x16_t v5;
  float32x4_t v6;
  float32x4_t v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float v12;
  float32x4_t v13;
  char v14;
  float v15;
  float v16;
  int v17;
  unsigned __int64 v18;
  int8x16_t v19;
  unsigned __int32 v20;
  __int64 v21;
  float32x4_t* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  int v28;
  _DWORD* v29;
  float32x4_t v30;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;

  if (LANES128(a1[3]).n128_f32[0] >= 0.0f) {
    v18 = LANES128(a1[1]).n128_u64[1];
    v19 = vsubq_f32(
        *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v18 + 104) + 8LL) + 304LL),
        a1[4]);
    v20 = LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u32[0];
    LANES128(v19).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v20),
                         COERCE_AS(float32x2_t, v20)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u32[0]))))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
            .n64_f32[0] > 0x1.a36e2e0000000p-14f) {
      goto LABEL_22;
    }
    v21 = *(_QWORD*)(*(_QWORD*)(v18 + 72) + 96LL);
    if (v21 == 0) {
      goto LABEL_22;
    }
    v22 = a1;
    v23 = GameRoutine_d2b5f0_alt1(*(_QWORD*)(v21 + 32) + 72LL);
    a1 = v22;
    if ((v23 & 0x100000000LL) == 0 ||
        (v24 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 72LL) +
                          104LL * (int)v23)) == 0 ||
        (v25 = *(_QWORD*)(v24 + 16)) != 0 &&
            *(__int64 (**)())(v25 + 16) == eft_ClampCurve_ptr &&
            ((v26 = v24 + 104, v27 = strlen(v24 + 104), a1 = v22, v27 < 5) ||
             (v28 = strncmp(v26 + v27 - 5, "Start", 5), a1 = v22, v28 != 0))) {
    LABEL_22:
      LANES128(a1[3]).n128_u32[0] = -1082130432;
    }
  }
  else {
    v1 = GameData_21d8778;
    if ((float)(*(float*)(*(_QWORD*)(LANES128(a1[1]).n128_u64[1] + 104) +
                          200LL) *
                0x1.cccccc0000000p+1f) <= *(float*)(GameData_21d8778 + 236)) {
      v2 = *(float32x4_t**)(LANES128(a1[2]).n128_u64[1] + 80);
      if (LANES128(v2[7]).n128_u8[1] == 1 && LANES128(v2[19]).n128_u8[1] == 1 &&
          vabds_f32(LANES128(v2[22]).n128_f32[1],
                    LANES128(v2[10]).n128_f32[1]) >=
              *(float*)(GameData_21d8778 + 240)) {
        v3 = a1;
        v4 = vsubq_f32(v2[22], v2[10]);
        v5 = vmulq_f32(v4, v4);
        LANES128(v5).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
                .n64_u64[0];
        LANES128(v5).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
                .n64_u64[0];
        LANES128(v5).n128_u64[1] = LANES128(v5).n128_u64[0];
        v6 = vrsqrteq_f32(v5);
        v7 = vmulq_f32(v6, vrsqrtsq_f32(v6, vmulq_f32(v5, v6)));
        v34 = vbicq_s8(
            vmulq_f32(v4, vmulq_f32(v7, vrsqrtsq_f32(v7, vmulq_f32(v5, v7)))),
            vceqzq_f32(v5));
        LANES128(v33).n128_u64[0] = LANES128(v34).n128_u32[0];
        LANES128(v33).n128_u64[1] = LANES128(v34).n128_u64[1];
        v8 = vmulq_f32(v33, v33);
        LANES128(v8).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
                .n64_u64[0];
        LANES128(v8).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
                .n64_u64[0];
        LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
        v9 = vrsqrteq_f32(v8);
        v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v8, v9)));
        v33 = vbicq_s8(
            vmulq_f32(v33,
                      vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v8, v10)))),
            vceqzq_f32(v8));
        LANES128(v11).n128_f32[0] = math_Vec3_Angle(&v34, &v33);
        a1 = v3;
        if (LANES128(v11).n128_f32[0] >=
            (float)(*(float*)(v1 + 244) * 0x1.1df46a0000000p-6f)) {
          v12 = LANES128(v11).n128_f32[0] +
                (float)(*(float*)(v1 + 248) * -0x1.1df46a0000000p-6f);
          if (v12 > 0.0f) {
            LANES128(v11).n128_f32[0] = v12 / LANES128(v11).n128_f32[0];
            GameRoutine_109da60((void*)(&v32), &v34, &v33, v11);
            a1 = v3;
            LANES128(v13).n128_u64[0] = LANES128(v32).n128_u64[0];
            LANES128(v13).n128_u64[1] = LANES128(v32).n128_u32[2];
            v34 = v13;
          }
          v14 = IKSlopeBiped2_112c3b0_alt1(LANES128(a1[1]).n128_u64[1]);
          a1 = v3;
          if ((v14 & 1) != 0) {
            v15 = LANES128(v2[10]).n128_f32[1];
            v16 = LANES128(v2[22]).n128_f32[1];
            LANES128(v3[3]).n128_u32[0] = 0;
            if (v15 > v16) {
              v17 = 1;
            }
            else {
              v17 = 2;
            }
            LANES128(v3[5]).n128_u32[0] = v17;
          }
        }
      }
    }
  }
  v29 = *(_DWORD**)(*(_QWORD*)(LANES128(a1[1]).n128_u64[1] + 104) + 8LL);
  LANES128(a1[4]).n128_u32[0] = v29[76];
  LANES128(a1[4]).n128_u32[1] = v29[77];
  v30 = a1[4];
  LANES128(v30).n128_u64[1] = (unsigned int)v29[78];
  a1[4] = v30;
  return LANES128(v30).n128_f32[0];
}

bool IKSlopeBiped2_112c3b0(_BOOL8 result, double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;

  if (result != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(result + 72) + 96LL);
    result = false;
    if (v2 != 0) {
      v3 = GameRoutine_d2b5f0(*(_QWORD*)(v2 + 32) + 72LL, a2);
      if ((v3 & 0x100000000LL) != 0) {
        v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 72LL) +
                        104LL * (int)v3);
        if (v4 != 0) {
          v5 = *(_QWORD*)(v4 + 16);
          if (v5 == 0) {
            return true;
          }
          if (*(__int64 (**)())(v5 + 16) != eft_ClampCurve_ptr) {
            return true;
          }
          v6 = v4 + 104;
          v7 = strlen(v4 + 104);
          if (v7 >= 5 && (unsigned int)strncmp(v6 + v7 - 5, "Start", 5) == 0) {
            return true;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
