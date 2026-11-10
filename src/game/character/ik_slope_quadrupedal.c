#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_IKSlopeQuadrupedal_vtable[])();
__n128 IKSlopeQuadrupedal_Destructor(__int64 a1);
__attribute__((swiftcall)) void math_Mtx43_MakeRotation(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
math_Mtx43_MakeRotation_alt1(PSEUDO_X8,
                             float32x4_t*) __asm__("math_Mtx43_MakeRotation");
extern __int64 GameData_212d270;
float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda0_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda2_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda3_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda4_Invoke(
    __int64 a1, __int64 a2, __int64 a3);

__n128 IKSlopeQuadrupedal_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;

  *(_QWORD*)a1 = game_character_IKSlopeQuadrupedal_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 336));
  v2 = *(_QWORD*)(a1 + 360);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 304));
  v3 = *(_QWORD*)(a1 + 328);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 272));
  v4 = *(_QWORD*)(a1 + 296);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 240));
  v5 = *(_QWORD*)(a1 + 264);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  result = GameRoutine_109d5e0((unsigned int*)(a1 + 64));
  v7 = *(_QWORD*)(a1 + 88);
  if (v7 != 0) {
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda0_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t result;
  float32x4_t* v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int128 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;

  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v5 + 8) == 0) {
    LANES128(result).n128_f32[0] = fabsf(*(float*)(v5 + 48));
    if (LANES128(result).n128_f32[0] >= 0x1.0624de0000000p-10f) {
      v22 = v3;
      v23 = v4;
      **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
      v7 = *(float32x4_t**)a3;
      *(_QWORD*)&v8 = 0;
      *((_QWORD*)&v8 + 1) = COERCE_UNSIGNED_INT(
          -(float)(*(float*)(v5 + 48) *
                   *(float*)(*(_QWORD*)GameData_212d270 + 280LL)));
      v17 = v8;
      math_Mtx43_MakeRotation((void*)(&v18), &v17);
      v9 = v7[1];
      v10 = v7[2];
      v11 = v7[3];
      v12 = v20;
      v13 = v21;
      v14 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v19).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
          v10, v19, 2);
      v15 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v21).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
      v16 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v20).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1);
      *v7 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1),
          v10, v18, 2);
      v7[1] = v14;
      result = vaddq_f32(v11, vmlaq_laneq_f32(v15, v10, v13, 2));
      v7[2] = vmlaq_laneq_f32(v16, v10, v12, 2);
      v7[3] = result;
    }
  }
  return result;
}

float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t result;
  float32x4_t* v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int128 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;

  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v5 + 8) == 0) {
    LANES128(result).n128_f32[0] = fabsf(*(float*)(v5 + 48));
    if (LANES128(result).n128_f32[0] >= 0x1.0624de0000000p-10f) {
      v22 = v3;
      v23 = v4;
      **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
      v7 = *(float32x4_t**)a3;
      *(_QWORD*)&v8 = 0;
      *((_QWORD*)&v8 + 1) = COERCE_UNSIGNED_INT(
          -(float)(*(float*)(v5 + 48) *
                   *(float*)(*(_QWORD*)GameData_212d270 + 280LL)));
      v17 = v8;
      math_Mtx43_MakeRotation((void*)(&v18), &v17);
      v9 = v7[1];
      v10 = v7[2];
      v11 = v7[3];
      v12 = v20;
      v13 = v21;
      v14 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v19).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
          v10, v19, 2);
      v15 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v21).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
      v16 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v20).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1);
      *v7 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1),
          v10, v18, 2);
      v7[1] = v14;
      result = vaddq_f32(v11, vmlaq_laneq_f32(v15, v10, v13, 2));
      v7[2] = vmlaq_laneq_f32(v16, v10, v12, 2);
      v7[3] = result;
    }
  }
  return result;
}

float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda2_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t result;
  float32x4_t* v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int128 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;

  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v5 + 8) == 0) {
    LANES128(result).n128_f32[0] = fabsf(*(float*)(v5 + 48));
    if (LANES128(result).n128_f32[0] >= 0x1.0624de0000000p-10f) {
      v22 = v3;
      v23 = v4;
      **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
      v7 = *(float32x4_t**)a3;
      *(_QWORD*)&v8 = 0;
      *((_QWORD*)&v8 + 1) = COERCE_UNSIGNED_INT(
          -(float)(*(float*)(v5 + 48) *
                   *(float*)(*(_QWORD*)GameData_212d270 + 280LL)));
      v17 = v8;
      math_Mtx43_MakeRotation((void*)(&v18), &v17);
      v9 = v7[1];
      v10 = v7[2];
      v11 = v7[3];
      v12 = v20;
      v13 = v21;
      v14 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v19).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
          v10, v19, 2);
      v15 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v21).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
      v16 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v20).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1);
      *v7 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1),
          v10, v18, 2);
      v7[1] = v14;
      result = vaddq_f32(v11, vmlaq_laneq_f32(v15, v10, v13, 2));
      v7[2] = vmlaq_laneq_f32(v16, v10, v12, 2);
      v7[3] = result;
    }
  }
  return result;
}

float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda3_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t result;
  float32x4_t* v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int128 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;

  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v5 + 8) == 0) {
    LANES128(result).n128_f32[0] = fabsf(*(float*)(v5 + 48));
    if (LANES128(result).n128_f32[0] >= 0x1.0624de0000000p-10f) {
      v22 = v3;
      v23 = v4;
      **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
      v7 = *(float32x4_t**)a3;
      *(_QWORD*)&v8 = 0;
      *((_QWORD*)&v8 + 1) = COERCE_UNSIGNED_INT(
          -(float)(*(float*)(v5 + 48) *
                   *(float*)(*(_QWORD*)GameData_212d270 + 280LL)));
      v17 = v8;
      math_Mtx43_MakeRotation((void*)(&v18), &v17);
      v9 = v7[1];
      v10 = v7[2];
      v11 = v7[3];
      v12 = v20;
      v13 = v21;
      v14 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v19).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
          v10, v19, 2);
      v15 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v21).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
      v16 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v20).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1);
      *v7 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1),
          v10, v18, 2);
      v7[1] = v14;
      result = vaddq_f32(v11, vmlaq_laneq_f32(v15, v10, v13, 2));
      v7[2] = vmlaq_laneq_f32(v16, v10, v12, 2);
      v7[3] = result;
    }
  }
  return result;
}

float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda4_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  float32x4_t v6;
  float32x4_t* v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t result;
  float32x4_t v17;
  struct {
    float32x4_t v18;
    float32x4_t v19;
    float32x4_t v20;
    float32x4_t v21;
  } v18_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v5 + 8) == 0) {
    LANES128(v6).n128_u64[0] = 0;
    LANES128(v6).n128_u32[3] = 0;
    **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
    LANES128(v6).n128_u32[2] = *(_DWORD*)(v5 + 96);
    v7 = *(float32x4_t**)a3;
    v17 = v6;
    math_Mtx43_MakeRotation_alt1((void*)(&v18_.v18), &v17),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v8 = v7[1];
    v9 = v7[2];
    v10 = v7[3];
    v11 = v18_.v20;
    v12 = v18_.v21;
    v13 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18_.v19).n128_f32[0]), v8,
                       COERCE_AS(float32x2_t, LANES128(v18_.v19).n128_u64[0]),
                       1),
        v9, v18_.v19, 2);
    v14 = vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18_.v21).n128_f32[0]), v8,
                         COERCE_AS(float32x2_t, LANES128(v18_.v21).n128_u64[0]),
                         1);
    v15 = vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18_.v20).n128_f32[0]), v8,
                         COERCE_AS(float32x2_t, LANES128(v18_.v20).n128_u64[0]),
                         1);
    *v7 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18_.v18).n128_f32[0]), v8,
                       COERCE_AS(float32x2_t, LANES128(v18_.v18).n128_u64[0]),
                       1),
        v9, v18_.v18, 2);
    v7[1] = v13;
    result = vaddq_f32(v10, vmlaq_laneq_f32(v14, v9, v12, 2));
    v7[2] = vmlaq_laneq_f32(v15, v9, v11, 2);
    v7[3] = result;
  }
  return result;
}

#pragma GCC visibility pop
