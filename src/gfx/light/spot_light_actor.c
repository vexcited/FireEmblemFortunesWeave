#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfx_light_Actor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SpotLightActor_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "SpotLightActor_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN* GameData_212c2a0;
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a837f0;
float32x4_t SpotLightActor_Unknown2(_QWORD* a1);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpotLightActor_DeletingDestructor(_QWORD* a1);

float32x4_t SpotLightActor_Unknown2(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int8x16_t v5;
  float32x4_t v6;
  float32x4_t v7;
  unsigned __int64 v8;
  float32x4_t v9;
  int8x16_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  __int64 v26;
  int8x16x2_t v27;
  int8x16x2_t v28;
  int8x16x2_t v29;

  v2 = a1[2];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = a1[1];
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v4 != 0) {
        LABEL_5:
          v5 = *(int8x16_t*)(a1[4] + 256LL);
          LANES128(v6).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v29.val[1]).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v6).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                        COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v7).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v29.val[1]).n128_i8[8] =
              vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          v8 = LANES64_OF(
                   vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                   .n64_u64[0];
          v9 = vmulq_f32(v6, v29.val[1]);
          *(int8x8_t*)&LANES128(v7).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                        COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v29.val[1]).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          v10 = vmulq_f32(v5, COERCE_AS(float32x4_t, GameData_1a82c50));
          LANES128(v29.val[1]).n128_u64[1] = v8;
          LANES128(v10).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v11).n128_u64[0] = 0x3F8000003F800000LL;
          LANES128(v11).n128_u64[1] = 0x3F8000003F800000LL;
          v12 = vmlsq_f32(v9, v29.val[1], v7);
          LANES128(v7).n128_u64[0] = 0x3F0000003F000000LL;
          LANES128(v7).n128_u64[1] = 0x3F0000003F000000LL;
          LANES128(v10).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v10).n128_u64[1] = LANES128(v10).n128_u64[0];
          v13 = vaddq_f32(v10, v11);
          v14 = vsqrtq_f32(vaddq_f32(v13, v13));
          v15 = vdivq_f32(v12, v14);
          LANES128(v15).n128_u32[3] =
              LANES128_OF(vmulq_f32(v14, v7)).n128_u32[3];
          LANES128(v14).n128_u64[0] = 0x3400000034000000LL;
          LANES128(v14).n128_u64[1] = 0x3400000034000000LL;
          v16 = vbslq_s8(vcgeq_f32(v14, v13),
                         COERCE_AS(int8x16_t, GameData_1a82dd0), v15);
          v17 = v16;
          LANES128(v17).n128_u32[3] = 0;
          LANES128(v13).n128_u64[0] =
              LANES64_OF(
                  vrev64_s32(COERCE_AS(int32x2_t, LANES128(v16).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v14).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                  .n64_u64[0];
          LANES128(v18).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v19).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v13).n128_i8[8] =
              vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          *(int8x8_t*)&LANES128(v14).n128_i8[8] =
              vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v18).n128_u64[1] = LANES128(v13).n128_u64[1];
          LANES128(v19).n128_u64[1] = LANES128(v14).n128_u64[1];
          v20 = vmulq_f32(v13, v13);
          v27.val[1] = vmulq_f32(v14, v14);
          v21 = vmulq_f32(v18, v17);
          v22 = vmulq_laneq_f32(v19, v16, 3);
          v23 = vaddq_f32(v21, v21);
          v24 = vaddq_f32(v22, v22);
          v28.val[0] = vaddq_f32(v24, v23);
          v28.val[1] = vsubq_f32(v23, v24);
          v27.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                                 vaddq_f32(vaddq_f32(v27.val[1], v27.val[1]),
                                           vaddq_f32(v20, v20)));
          LANES128(v29.val[1]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v28, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                  .n64_u64[0];
          LANES128(v27.val[1]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v28, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v29.val[1]).n128_i8[8] =
              vqtbl2_s8(v28, COERCE_AS(int8x8_t, 0x706050413121110LL));
          *(int8x8_t*)&LANES128(v27.val[1]).n128_i8[8] =
              vqtbl2_s8(v28, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
          v29.val[0] = v27.val[0];
          LANES128(v24).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v29, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v24).n128_i8[8] =
              vqtbl2_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
          LANES128(v28.val[0]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v29, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v28.val[0]).n128_i8[8] =
              vqtbl2_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
          LANES128(v28.val[1]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v27, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v28.val[1]).n128_i8[8] =
              vqtbl2_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
          return vmlaq_f32(vmlaq_f32(vmulq_n_f32(v24, 0x1.0000000000000p+0f),
                                     COERCE_AS(float32x4_t, 0), v28.val[0]),
                           COERCE_AS(float32x4_t, 0), v28.val[1]);
        }
      }
      else {
        v26 = v3;
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak_alt1(v26);
        if (v4 != 0) {
          goto LABEL_5;
        }
      }
    }
  }
  return *(float32x4_t*)GameData_212c2a0;
}

void SpotLightActor_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = gfx_light_Actor_vtable;
  a1[1] = 0;
  v2 = a1[2];
  a1[2] = 0;
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
    v3 = a1[2];
    a1[3] = 0;
    if (v3 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)a1);
}

#pragma GCC visibility pop
