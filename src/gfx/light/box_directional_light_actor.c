#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfx_light_Actor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BoxDirectionalLightActor_DeletingDestructor(_QWORD* a1);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82d00;
__int64 BoxDirectionalLightActor_Unknown3(_QWORD* a1, __int64 a2);

__int64 BoxDirectionalLightActor_Unknown3(_QWORD* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  float32x4_t v7;
  int8x16_t v8;
  float v9;
  float v10;
  float32x4_t* v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float v25;

  result = a1[2];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = a1[1];
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v6 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v6);
      }
      if (v5 != 0) {
        *(_OWORD*)(a1[4] + 16LL) = *(_OWORD*)(a2 + 48);
        v7 = vsubq_f32(
            vmlaq_f32(vmulq_f32(*(float32x4_t*)a2, COERCE_AS(float32x4_t, 0)),
                      COERCE_AS(float32x4_t, 0), *(float32x4_t*)(a2 + 16)),
            *(float32x4_t*)(a2 + 32));
        v8 = vmulq_f32(v7, v7);
        LANES128(v8).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
                .n64_u64[0];
        v9 = LANES64_OF(vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]))))
                 .n64_f32[0];
        v10 = 0x1.47ae140000000p-7f;
        if (v9 < 0x1.47ae140000000p-7f) {
          v9 = 0x1.47ae140000000p-7f;
        }
        *(float*)(a1[4] + 32LL) = v9;
        v11 = (float32x4_t*)a1[4];
        v12 = vmulq_n_f32(v7,
                          0x1.0000000000000p+0f / LANES128(v11[2]).n128_f32[0]);
        LANES128(v12).n128_u32[3] = 0;
        v11[16] = v12;
        v13 = vmlaq_f32(vmlaq_f32(vnegq_f32(*(float32x4_t*)a2),
                                  COERCE_AS(float32x4_t, 0LL),
                                  *(float32x4_t*)(a2 + 16)),
                        COERCE_AS(float32x4_t, 0LL), *(float32x4_t*)(a2 + 32));
        v14 = vmulq_f32(v13, v13);
        LANES128(v14).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                .n64_u64[0];
        LANES128(v15).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                .n64_u64[0];
        LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
        v16 = LANES128_OF(vsqrtq_f32(v15)).n128_f32[0];
        if (v16 < 0x1.47ae140000000p-7f) {
          v16 = 0x1.47ae140000000p-7f;
        }
        *(float*)(a1[4] + 288LL) = v16;
        v17 = vrsqrteq_f32(v15);
        v18 = vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v15, v17)));
        *(int8x16_t*)(a1[4] + 272LL) = vbicq_s8(
            vmulq_f32(v13,
                      vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v15, v18)))),
            vceqzq_f32(v15));
        LANES128(v18).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v19).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v20).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v18).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v21).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v19).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v21).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v20).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v22 = vmlsq_f32(vmulq_f32(v18, v19), v20, v21);
        v23 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*(float32x4_t*)a2, LANES128(v22).n128_f32[0]),
                *(float32x4_t*)(a2 + 16),
                COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]), 1),
            *(float32x4_t*)(a2 + 32), v22, 2);
        v24 = vmulq_f32(v23, v23);
        LANES128(v24).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
                .n64_u64[0];
        v25 =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))))
                .n64_f32[0];
        if (v25 >= 0x1.47ae140000000p-7f) {
          v10 = v25;
        }
        *(float*)(a1[4] + 292LL) = v10;
      }
    }
  }
  return result;
}

__int64 BoxDirectionalLightActor_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = gfx_light_Actor_vtable;
  a1[1] = 0;
  v2 = a1[2];
  a1[2] = 0;
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
    v3 = a1[2];
    a1[3] = 0;
    if (v3 != 0) {
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

#pragma GCC visibility pop
