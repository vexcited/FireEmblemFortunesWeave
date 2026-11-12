#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_ThrownAxe_vtable[])();
extern __int64 (*game_combat_ThrownObject_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_10a9ec0(__int64*);
__n128 ThrownAxe_Destructor(__int64 a1);
__int64 ThrownAxe_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ThrownAxe_DeletingDestructor");
__attribute__((swiftcall)) void math_Mtx43_MakeRotation(PSEUDO_X8,
                                                        float32x4_t*);
extern __int64 game_script_hub_g_frame_counter;
float ThrownAxe_Unknown10(__int64 a1);
float32x4_t game_combat_ThrownAxe_ThrownAxe_lambda0_Invoke(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned int* GameHr_109d5e0(unsigned int* result);
void GameHr_10a9ec0(__int64*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ThrownAxe_DeletingDestructor(__int64 a1);

float ThrownAxe_Unknown10(__int64 a1)
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
        *(float*)(a1 + 196) +
        (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f);
    *(_DWORD*)(a1 + 196) = LANES128(v1).n128_u32[0];
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

__n128 ThrownAxe_Destructor(__int64 a1)
{
  __int64 v2;
  __n128 result;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_combat_ThrownAxe_vtable;
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

void ThrownAxe_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_combat_ThrownAxe_vtable;
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

float32x4_t game_combat_ThrownAxe_ThrownAxe_lambda0_Invoke(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3)
{
  float* v5;
  float32x4_t* v6;
  float32x4_t v7;
  float32x4_t v8;
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
  float32x4_t result;
  float v23;
  float32x4_t v24;
  struct {
    float32x4_t v25;
    float32x4_t v26;
    float32x4_t v27;
    float32x4_t v28;
  } v25_;

  v5 = *(float**)(a1 + 8);
  if (v5[32] > 0x1.4000000000000p+3f) {
    v5[50] = v5[49] * -0x1.4000000000000p+5f;
  }
  **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
  v6 = *(float32x4_t**)a3;
  v23 = v5[48];
  LANES128(v7).n128_u32[0] = 0;
  LANES128(v7).n128_u32[3] = 0;
  *(unsigned __int64*)((char*)LANES128(v7).n128_u64 + 4) =
      *((unsigned int*)v5 + 50);
  v24 = v7;
  math_Mtx43_MakeRotation((void*)(&v25_.v25), &v24);
  v8 = vmulq_f32(v25_.v25, COERCE_AS(float32x4_t, 0));
  v9 = vaddq_f32(v25_.v26, v8);
  v10 = vmlaq_f32(v8, COERCE_AS(float32x4_t, 0), v25_.v26);
  v11 = vmlaq_f32(vmlaq_f32(v25_.v25, COERCE_AS(float32x4_t, 0), v25_.v26),
                  COERCE_AS(float32x4_t, 0), v25_.v27);
  v12 = vmlaq_f32(v9, COERCE_AS(float32x4_t, 0), v25_.v27);
  v13 = vaddq_f32(v25_.v27, v10);
  v14 = v6[2];
  v15 = v6[3];
  v16 = vaddq_f32(v25_.v28, vmlaq_n_f32(v10, v25_.v27, v23));
  v17 = *v6;
  v18 = v6[1];
  v19 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(*v6, LANES128(v11).n128_f32[0]), v18,
                     COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]), 1),
      v14, v11, 2);
  v20 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(*v6, LANES128(v12).n128_f32[0]), v18,
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]), 1),
      v14, v12, 2);
  v21 = vmlaq_lane_f32(vmulq_n_f32(*v6, LANES128(v13).n128_f32[0]), v18,
                       COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 1);
  *v6 = v19;
  v6[1] = v20;
  result = vaddq_f32(
      v15,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v17, LANES128(v16).n128_f32[0]), v18,
                         COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1),
          v14, v16, 2));
  v6[2] = vmlaq_laneq_f32(v21, v14, v13, 2);
  v6[3] = result;
  return result;
}

#pragma GCC visibility pop
