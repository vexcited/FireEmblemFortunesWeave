#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffcb78[])();
extern __int64 GameData_22124c8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212fb18[3];
extern int GameData_222b910;
__n128 AreaBarrier_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "AreaBarrier_DeletingDestructor");
__int64 GameRoutine_fbb080(__int64, _QWORD*, float*);
__int64 game_fbb5a0(__int64, __int128*, float);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21ec7c0;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void AreaBarrier_fbae90(__int64 a1);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83460;
extern __int128 GameData_1a836e0;
extern __int128 GameData_1a83800;
__int64 AreaBarrier_fbb080(__int64 a1, _QWORD* a2, float* a3);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AreaBarrier_DeletingDestructor(_QWORD* a1);

void AreaBarrier_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  v1 = a1 - 1;
  v2 = a1[2];
  *a1 = GameData_212fb18[0] + 2;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v3 = a1 - 1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
    v1 = v3;
  }
  *v1 = GameData_1ffcb78;
  if ((_QWORD*)GameData_22124c8 == v1) {
    GameData_22124c8 = 0;
    GameData_222b910 = 0;
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)v1);
}

void AreaBarrier_fbae90(__int64 a1)
{
  float v2;
  float v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int128 v10;

  v2 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                         160LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
    v4 = fabsf(v2);
    goto LABEL_12;
  }
  v3 = *(float*)(a1 + 44);
  v4 = fabsf(v2);
  if (v3 <= 0x0.0p+0f) {
    if (v3 >= 0x0.0p+0f || (v3 = v4 + v3) <= 0x0.0p+0f) {
    LABEL_9:
      *(float*)(a1 + 44) = v3;
      if (v3 != 0x0.0p+0f) {
        goto LABEL_12;
      }
      goto LABEL_10;
    }
  }
  else {
    v3 = v3 - v4;
    if (v3 >= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  *(_DWORD*)(a1 + 44) = 0;
LABEL_10:
  if (*(_BYTE*)(a1 + 36) == 1) {
    *(_BYTE*)(a1 + 36) = 0;
  }
LABEL_12:
  v5 = *(float*)(a1 + 40);
  if (v5 > 0x0.0p+0f) {
    v5 = v5 - v4;
    if (v5 >= 0x0.0p+0f) {
      goto LABEL_18;
    }
  LABEL_17:
    v5 = 0x0.0p+0f;
    goto LABEL_18;
  }
  if (v5 < 0x0.0p+0f) {
    v5 = v4 + v5;
    if (v5 > 0x0.0p+0f) {
      goto LABEL_17;
    }
  }
LABEL_18:
  *(float*)(a1 + 40) = v5;
  v10 = (__typeof__(v10)){0};
  if ((GameRoutine_fbb080(a1, &v10, &v9) & 1) != 0) {
    v7 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v6 = *(_QWORD*)(GameData_21ec7c0 + 80);
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    v8 = std___1___shared_weak_count_lock(v6);
    std___1___shared_weak_count___release_weak(v6);
    if ((float)((float)(PSEUDO_UNFUSED(
                    *(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 16LL) + 672LL) *
                    *(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 16LL) +
                              672LL))) +
                (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 16LL) +
                                  668LL) *
                        *(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 16LL) +
                                  668LL))) > 0x0.0p+0f) {
      game_fbb5a0(a1 + 8, &v10, v9 * 0x1.ca5dc20000000p+5f);
    }
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
  else {
    if (*(_BYTE*)(a1 + 48) == 1) {
      *(_BYTE*)(a1 + 48) = 0;
    }
    if (*(_BYTE*)(a1 + 36) == 1) {
      *(_BYTE*)(a1 + 36) = 0;
    }
  }
}

__int64 AreaBarrier_fbb080(__int64 a1, _QWORD* a2, float* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __n128 v9;
  __int64 v12;
  unsigned int v13;
  float v14;
  float v15;
  unsigned __int64 v16;
  unsigned int v17;
  int8x16_t v18;
  __int128 v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int8x16_t v33;
  float v34;
  __int128 v35;
  float32x4_t v36;
  float32x4_t v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  float32x4_t v40;
  float32x4_t v41;
  int8x16_t v42;
  float32x4_t v43;
  struct {
    __n128 v44[2];
    char gap192_[8];
    unsigned int v45;
    char gap204_[36];
    char v46;
    char gap241_[107];
    float v47;
  } v44_;

  v3 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v3 != 0) {
    v4 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v7 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v7);
    v9 = std___1___shared_weak_count___release_weak(v3);
    LOBYTE(v3) = 0;
    if (v8 != 0 && v4 != 0) {
      v12 = *(_QWORD*)(v4 + 24);
      v13 = 0;
      v14 = *(float*)(v12 + 544);
      v43 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v12 + 16) + 560LL),
                      COERCE_AS(float32x4_t, GameData_1a83460));
      v15 = *(float*)(v12 + 528);
      LODWORD(v16) = 0;
      *((float*)&v16 + 1) = v14 * 0x1.99999a0000000p-1f;
      v36 = vaddq_f32(COERCE_AS(float32x4_t, v16),
                      COERCE_AS(float32x4_t, GameData_1a836e0));
      v44_.v47 = 0x1.fffffe0000000p+127f;
      *(float*)&v17 = v15 + 0x1.99999a0000000p-4f;
      LANES128(v18).n128_u64[0] = 0;
      LANES128(v18).n128_u64[1] = v17;
      *(int8x8_t*)&v19 =
          vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL));
      *((_QWORD*)&v19 + 1) = v19;
      v40 = COERCE_AS(float32x4_t, v19);
      *(int8x8_t*)&v19 =
          vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL));
      v39 = v19;
      *((int8x8_t*)&v19 + 1) =
          vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL));
      v37 = COERCE_AS(float32x4_t, v19);
      v38 = *((_QWORD*)&v19 + 1);
      do {
        math_Quat_FromYawPitchRoll(
            (void*)(&v42),
            (float)(PSEUDO_UNFUSED((float)((float)v13 / 0x1.8000000000000p+3f) *
                                   0x1.921fb60000000p+1f)) +
                (float)(PSEUDO_UNFUSED(
                    (float)((float)v13 / 0x1.8000000000000p+3f) *
                    0x1.921fb60000000p+1f)),
            0x0.0p+0f, 0x0.0p+0f);
        v20 = vmulq_f32(v42, COERCE_AS(float32x4_t, GameData_1a829d0));
        LANES128(v21).n128_u64[0] = LANES128(v42).n128_u64[0];
        LANES128(v22).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v22).n128_u64[1] = v39;
        LANES128(v23).n128_u64[0] = 0;
        *(int8x8_t*)&LANES128(v23).n128_i8[8] =
            vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v24 = vmulq_f32(v23, v22);
        LANES128(v23).n128_u64[0] = v38;
        v25 = vmlaq_f32(vmulq_f32(v20, v40),
                        COERCE_AS(float32x4_t, GameData_1a83800), v24);
        LANES128(v24).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v23).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]), 1);
        v26 = vmlaq_f32(v25, COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v23, v24));
        LANES128(v24).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v24).n128_i8[8] =
            vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v27 = vmlsq_f32(v26, v24, v37);
        LANES128(v20).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v24).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v28).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
        LANES128(v21).n128_u64[1] = LANES128(v24).n128_u64[0];
        *(int8x8_t*)&LANES128(v28).n128_i8[8] =
            vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        LANES128(v23).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v29 = vmlaq_f32(vmulq_f32(v20, v27),
                        COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v21, v28));
        LANES128(v28).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v23).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v27).n128_u64[0]), 1);
        LANES128(v24).n128_u64[1] = LANES128(v28).n128_u64[0];
        LANES128(v28).n128_u64[1] = LANES128(v42).n128_u64[0];
        LANES128(v30).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v30).n128_i8[8] =
            vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v31 = vmlsq_f32(vmlaq_f32(v29, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v28, v23)),
                        v30, v24);
        LANES128(v31).n128_u32[3] = 0;
        v41 = vaddq_f32(v43, v31);
        collision_670c60((void*)((__int64)v44_.v44), &v43, &v41,
                         0x1000000000000LL);
        if ((v44_.v46 & 1) != 0 && v44_.v45 >= 0xFFFFFF00) {
          v9 = v44_.v44[0];
          LANES128(v9).n128_u32[1] = LANES128(v43).n128_u32[1];
          LANES128(v9).n128_u32[3] = 0;
          v32 = vsubq_f32(v9, v43);
          v33 = vmulq_f32(v32, v32);
          LANES128(v33).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                  .n64_u64[0];
          v34 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                  .n64_f32[0];
          if (v34 < v44_.v47) {
            LOBYTE(v3) = 1;
            v44_.v47 = v34;
            v9 = vaddq_f32(v36, v9);
            *a2 = LANES128(v9).n128_u64[0];
            v35 = *(_OWORD*)a2;
            *((_QWORD*)&v35 + 1) = LANES128(v9).n128_u32[2];
            *(_OWORD*)a2 = v35;
            *a3 = (float)(PSEUDO_UNFUSED(
                      (float)((float)v13 / 0x1.8000000000000p+3f) *
                      0x1.921fb60000000p+1f)) +
                  (float)(PSEUDO_UNFUSED(
                      (float)((float)v13 / 0x1.8000000000000p+3f) *
                      0x1.921fb60000000p+1f));
          }
        }
        ++v13;
      } while (v13 != 12);
    }
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
          v8, *(long double*)&v9);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
  return v3 & 1;
}

#pragma GCC visibility pop
