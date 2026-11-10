#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_a78a90(_QWORD);
__int64* CharacterTrailVertex_d35160(__int64* result, _DWORD* a2);
__attribute__((swiftcall)) void math_Quat_Slerp(PSEUDO_X8, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int128 GameData_1a83800;
__attribute__((swiftcall)) void CharacterTrailVertex_d35500(PSEUDO_X8 x8_,
                                                            float32x4_t** a1,
                                                            float32x4_t result);
__attribute__((swiftcall)) void CharacterTrailVertex_d35680(PSEUDO_X8 x8_,
                                                            int8x16_t* a1,
                                                            _QWORD* a2,
                                                            float32x4_t* a3);

__int64* CharacterTrailVertex_d35160(__int64* result, _DWORD* a2)
{
  unsigned __int64 v2;
  _DWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _DWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = (_DWORD*)result[1];
  v2 = result[2];
  v4 = result;
  if ((unsigned __int64)v3 >= v2) {
    v6 = *result;
    v7 = (__int64)v3 - *result;
    v8 = (v7 >> 2) + 1;
    if (v8 >> 62 != 0) {
      GameRoutine_a78a90(result);
    }
    v9 = v2 - v6;
    v10 = fw_memory_g_heap_manager_ptr;
    if (v9 >> 1 > v8) {
      v8 = v9 >> 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFFCLL) {
      v11 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v8;
    }
    if (v11 != 0) {
      if (v11 >> 62 != 0) {
        GameRoutine_60a210(result);
      }
      v12 = a2;
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v11, 16, 0);
      a2 = v12;
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 4 * v11;
    v15 = v13 + v7 - 4 * (v7 >> 2);
    *(_DWORD*)(v13 + v7) = *a2;
    v5 = v13 + v7 + 4;
    result = (__int64*)memcpy(v15, v6, v7);
    *v4 = v15;
    v4[1] = v5;
    v4[2] = v14;
    if (v6 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v16 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v16, v6);
    }
  }
  else {
    *v3 = *a2;
    v5 = (__int64)(v3 + 1);
  }
  v4[1] = v5;
  return result;
}

__attribute__((swiftcall)) void

CharacterTrailVertex_d35500(PSEUDO_X8 x8_, float32x4_t** a1, float32x4_t result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  float32x4_t* v5;
  float32x4_t* v6;
  __int64 v7;
  float v8;
  float32x4_t* v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  bool v18;
  float v19;
  float32x4_t* v20;
  float32x4_t v21;
  int8x16_t v22;
  __int128 v23;
  __int128 v24;
  float32x4_t v26;
  __int128 v27;
  unsigned __int64 v28;
  __int128 v29;
  float v30;
  int8x16_t v31;
  __int64 v32;
  __int64 v33;

  v5 = *a1;
  v6 = a1[1];
  a2[4] = 0;
  a2[5] = 0;
  a2[2] = 0;
  a2[3] = 0;
  *a2 = 0;
  a2[1] = 0;
  if (v6 != v5) {
    v32 = v3;
    v33 = v4;
    v7 = -1 - 0x3333333333333333LL * (v6 - v5);
    if (v7 != 0) {
      v8 = LANES128(v6[-1]).n128_f32[0];
      v9 = v5 + 6;
      v10 = -1 - 0x3333333333333333LL * (v6 - v5);
      v11 = fminf(
          fmaxf(LANES128(result).n128_f32[0], LANES128(v5[4]).n128_f32[0]), v8);
      while (1) {
        v12 = LANES128(v9[-2]).n128_f32[0];
        if (v12 <= v11) {
          v13 = LANES128(v9[3]).n128_f32[0];
          if (v11 < v13) {
            break;
          }
        }
        --v10;
        v9 += 5;
        if (v10 == 0) {
          goto LABEL_13;
        }
      }
      v14 = v13 - v12;
      if (v14 == 0.0f) {
        v19 = 0.0f;
      }
      else {
        v15 = v11 - v12;
        v16 = 1.0f;
        v17 = v15 / v14;
        if (v17 <= 1.0f) {
          v16 = v17;
        }
        v18 = v17 < 0.0f;
        v19 = 0.0f;
        if (!v18) {
          v19 = v16;
        }
      }
      v30 = v19;
      v26 = vmlaq_n_f32(v9[-5], vsubq_f32(*v9, v9[-5]), v19);
      *a2 = LANES128(v26).n128_u64[0];
      v27 = *(_OWORD*)a2;
      *((_QWORD*)&v27 + 1) = LANES128(v26).n128_u32[2];
      *(_OWORD*)a2 = v27;
      math_Quat_Slerp((void*)(&v31), &v9[-4], &v9[1]);
      v28 = LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0];
      a2[2] = LANES128(v31).n128_u64[0];
      a2[3] = v28;
      result = vmlaq_n_f32(v9[-3], vsubq_f32(v9[2], v9[-3]), v30);
      a2[4] = LANES128(result).n128_u64[0];
      v29 = *((_OWORD*)a2 + 2);
      *((_QWORD*)&v29 + 1) = LANES128(result).n128_u32[2];
      *((_OWORD*)a2 + 2) = v29;
    }
    else {
    LABEL_13:
      v20 = &v5[5 * v7];
      v21 = v20[1];
      v22 = v20[2];
      *a2 = LANES128(v21).n128_u64[0];
      v23 = *(_OWORD*)a2;
      *((_QWORD*)&v23 + 1) = LANES128(v21).n128_u32[2];
      a2[2] = LANES128(v22).n128_u64[0];
      a2[3] = LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0];
      result = v20[3];
      a2[4] = LANES128(result).n128_u64[0];
      v24 = *((_OWORD*)a2 + 2);
      *(_OWORD*)a2 = v23;
      *((_QWORD*)&v24 + 1) = LANES128(result).n128_u32[2];
      *((_OWORD*)a2 + 2) = v24;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void CharacterTrailVertex_d35680(PSEUDO_X8 x8_,
                                                            int8x16_t* a1,
                                                            _QWORD* a2,
                                                            float32x4_t* a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  __int64 v5;
  __int64 v6;
  float32x4_t v7;
  int8x16_t* v8;
  _QWORD* v9;
  float32x4_t* v10;
  _QWORD* v11;
  float32x4_t v12;
  int8x16_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  __int128 v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t result;
  float32x4_t v24;
  float32x4_t v25;

  v4 = *a1;
  v5 = a2[49];
  v6 = a2[50];
  a4[2] = 0;
  a4[3] = 0;
  *a4 = 0;
  a4[1] = 0;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = vld1q_dup_f32((const float*)(v5 + 32));
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v8 = a1;
      v9 = a4;
      v10 = a3;
      v11 = a2;
      v24 = v7;
      v25 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
      v7 = v24;
      v4 = v25;
      a2 = v11;
      a1 = v8;
      a3 = v10;
      a4 = v9;
    }
  }
  else {
    v7 = vld1q_dup_f32((const float*)(v5 + 32));
  }
  v12 = vmulq_f32(v4, v7);
  v13 = a1[1];
  v14 = *(int8x16_t*)(a2[1] + 336LL);
  v15 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(*a3, LANES128(v12).n128_f32[0]), a3[1],
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]), 1),
      a3[2], v12, 2);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v19 = vaddq_f32(a3[3], v15);
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v17).n128_u64[1] = LANES128(v17).n128_u64[0];
  *a4 = LANES128(v19).n128_u64[0];
  v20 = *(_OWORD*)a4;
  *((_QWORD*)&v20 + 1) = LANES128(v19).n128_u32[2];
  LANES128(v19).n128_u64[0] = LANES128(v14).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v16).n128_u64[0];
  *(_OWORD*)a4 = v20;
  *(int32x2_t*)&LANES128(v18).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 1);
  v21 = vmlaq_f32(vmulq_f32(v13, v17), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v19, v12));
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v22).n128_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v14).n128_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  result = vmlsq_f32(vmlaq_f32(v21, COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v22, v18)),
                     v12, v16);
  a4[2] = LANES128(result).n128_u64[0];
  a4[3] = LANES128_OF(vextq_s8(result, result, 8u)).n128_u64[0];
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
