#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_ThrownDiscus_vtable[])();
extern __int64 (*game_combat_ThrownObject_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_10a9ec0(__int64*);
__n128 ThrownDiscus_Destructor(__int64 a1);
__int64 ThrownDiscus_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ThrownDiscus_DeletingDestructor");
__attribute__((swiftcall)) void math_Mtx43_MakeRotation(PSEUDO_X8,
                                                        float32x4_t*);
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64 as_g_base_frame_counter;
float ThrownDiscus_Unknown10(__int64 a1);
float32x4_t game_combat_ThrownDiscus_ThrownDiscus_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2,
                                                                 __int64 a3);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned int* GameHr_109d5e0(unsigned int* result);
void GameHr_10a9ec0(__int64*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ThrownDiscus_DeletingDestructor(__int64 a1);

float ThrownDiscus_Unknown10(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t v1;
  __int64 v2;
  float32x4_t* v3;
  float32x4_t* v5;
  float32x4_t v6;
  int8x16_t v7;

  LANES128(v1).n128_u32[0] = *(_DWORD*)(a1 + 128);
  if (LANES128(v1).n128_f32[0] > 0x1.4000000000000p+3f) {
    v2 = *(_QWORD*)(a1 + 56);
    LANES128(v1).n128_f32[0] =
        *(float*)(a1 + 208) +
        (float)((float)(*(float*)(as_g_base_frame_counter + 160) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f);
    *(_DWORD*)(a1 + 208) = LANES128(v1).n128_u32[0];
    if (v2 != 0) {
      v3 = *(float32x4_t**)(a1 + 64);
      if (*(_QWORD*)(v2 + 8) != -1 && v3 != nullptr) {
        v5 = *(float32x4_t**)(a1 + 8);
        v1 = v3[29];
        v6 = vsubq_f32(v5[19], v1);
        v7 = vmulq_f32(v6, v6);
        LANES128(v7).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
                .n64_f32[0] != 0x0.0p+0f) {
          LANES128(v5[19]).n128_u32[0] = LANES128(v1).n128_u32[0];
          LANES128(v5[19]).n128_u32[1] = LANES128(v3[29]).n128_u32[1];
          v1 = v5[19];
          LANES128(v1).n128_u32[2] = LANES128(v3[29]).n128_u32[2];
          LANES128(v5[18]).n128_u32[2] |= 1u;
          LANES128(v1).n128_u64[1] = LANES128(v1).n128_u32[2];
          v5[19] = v1;
        }
      }
    }
  }
  return LANES128(v1).n128_f32[0];
}

__n128 ThrownDiscus_Destructor(__int64 a1)
{
  __int64 v2;
  __n128 result;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_combat_ThrownDiscus_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 160));
  v2 = *(_QWORD*)(a1 + 184);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  *(_QWORD*)a1 = &game_combat_ThrownObject_vtable;
  GameRoutine_10a9ec0((__int64*)(a1 + 136));
  v4 = *(_QWORD*)(a1 + 56);
  if (v4 != 0) {
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 32);
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

void ThrownDiscus_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_combat_ThrownDiscus_vtable;
  GameHr_109d5e0((unsigned int*)(a1 + 160));
  v2 = *(_QWORD*)(a1 + 184);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  *(_QWORD*)a1 = &game_combat_ThrownObject_vtable;
  GameHr_10a9ec0((__int64*)(a1 + 136));
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = *(_QWORD*)(a1 + 32);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

float32x4_t game_combat_ThrownDiscus_ThrownDiscus_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2,
                                                                 __int64 a3)
{
  float32x4_t* v5;
  float32x4_t result;
  unsigned __int64 v7;
  float32x4_t* v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
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
  struct {
    float32x4_t v28;
    float32x4_t v29;
    float32x4_t v30;
    float32x4_t v31;
  } v28_;

  v5 = *(float32x4_t**)(a1 + 8);
  PSEUDO_LOW_LANE128(result, n128_u32, LANES128(v5[8]).n128_u32[0]);
  if (LANES128(result).n128_f32[0] > 0x1.4000000000000p+3f) {
    LODWORD(v7) = 0;
    **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
    v8 = *(float32x4_t**)a3;
    v26 = v5[12];
    v25 = vsubq_f32(COERCE_AS(float32x4_t, 0), v26);
    *((float*)&v7 + 1) = LANES128(v5[13]).n128_f32[0] * 0x1.4000000000000p+5f;
    v27 = COERCE_AS(float32x4_t, v7);
    math_Mtx43_MakeRotation((void*)(&v28_.v28), &v27);
    v9 = vmulq_f32(v28_.v28, COERCE_AS(float32x4_t, 0));
    v10 = vmlaq_f32(vmlaq_f32(v28_.v28, COERCE_AS(float32x4_t, 0), v28_.v29),
                    COERCE_AS(float32x4_t, 0), v28_.v30);
    v11 =
        vmlaq_f32(vaddq_f32(v28_.v29, v9), COERCE_AS(float32x4_t, 0), v28_.v30);
    v12 =
        vaddq_f32(v28_.v30, vmlaq_f32(v9, COERCE_AS(float32x4_t, 0), v28_.v29));
    v13 = vaddq_f32(
        v28_.v31,
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v28_.v28, LANES128(v25).n128_f32[0]), v28_.v29,
                COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]), 1),
            v28_.v30, v25, 2));
    v14 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v10).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v10, 2);
    v15 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v11).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v11, 2);
    v16 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v12).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v12, 2);
    v17 = v8[2];
    v18 = v8[3];
    v19 = vaddq_f32(
        v26, vmlaq_laneq_f32(
                 vmlaq_lane_f32(
                     vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v13).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 1),
                 COERCE_AS(float32x4_t, GameData_1a83090), v13, 2));
    v20 = v8[1];
    v21 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*v8, LANES128(v14).n128_f32[0]), v20,
                       COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]), 1),
        v17, v14, 2);
    v22 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*v8, LANES128(v15).n128_f32[0]), v20,
                       COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]), 1),
        v17, v15, 2);
    v23 = vmlaq_lane_f32(vmulq_n_f32(*v8, LANES128(v19).n128_f32[0]), v20,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1);
    v24 = vmlaq_lane_f32(vmulq_n_f32(*v8, LANES128(v16).n128_f32[0]), v20,
                         COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1);
    *v8 = v21;
    v8[1] = v22;
    result = vmlaq_laneq_f32(v24, v17, v16, 2);
    v8[2] = result;
    v8[3] = vaddq_f32(v18, vmlaq_laneq_f32(v23, v17, v19, 2));
  }
  return result;
}

#pragma GCC visibility pop
