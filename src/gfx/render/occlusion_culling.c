#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 OcclusionCulling_Unknown5(__int64 result);
__int64 OcclusionCulling_Unknown6(__int64 result);
__int64 OcclusionCulling_DeletingDestructor_alt1(__int64 a1) __asm__(
    "OcclusionCulling_DeletingDestructor");
__int64
    OcclusionCulling_1938520_alt1(_QWORD,
                                  _QWORD) __asm__("OcclusionCulling_1938520");
__int64 OcclusionCulling_Unknown3_alt1(
    float32x4_t* a1, float32x4_t* a2) __asm__("OcclusionCulling_Unknown3");
extern __int128 GameData_1a830a0;
bool OcclusionCulling_1938520(__int64 a1, int32x2_t* a2);
bool OcclusionCulling_Unknown3(float32x4_t* a1, float32x4_t* a2);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void OcclusionCulling_DeletingDestructor(__int64 a1);

bool OcclusionCulling_Unknown3(float32x4_t* a1, float32x4_t* a2)
{
  float32x4_t v4;
  float32x4_t v5;
  int16x4_t v7;
  __int64 v8;
  float v9;
  unsigned __int32 v10;
  float32x4_t v11;
  int16x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  __int64 v15;
  float32x4_t v16;
  float32x4_t v17;
  float v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  char v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  struct {
    int32x2_t v53;
    unsigned __int64 v54;
    int v55;
    int v56;
  } v53_;

  v4 = *a2;
  v5 = a1[2];
  LANES64(v7).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vcgeq_f32(v5, *a2)))).n64_u64[0];
  if ((LANES64(v7).n64_u8[0] & 1) != 0) {
    v9 = LANES128(a2[1]).n128_f32[0];
    v8 = LANES128(a2[1]).n128_u32[1];
    v10 = LANES128(a2[1]).n128_u32[2];
  }
  else {
    v11 = a2[1];
    v8 = LANES128(v11).n128_u32[1];
    v10 = LANES128(a2[1]).n128_u64[1];
    v9 = LANES128(v11).n128_f32[0];
    LANES64(v12).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(vcgeq_f32(v11, v5)))).n64_u64[0];
    if ((LANES64(v12).n64_u8[0] & 1) == 0 && (LANES64(v7).n64_u8[2] & 1) == 0 &&
        (LANES64(v12).n64_u8[2] & 1) == 0 && (LANES64(v7).n64_u8[4] & 1) == 0 &&
        (LANES64(v12).n64_u8[4] & 1) == 0) {
      return true;
    }
  }
  v13 = a1[11];
  v14 = a1[12];
  v15 = LANES128(a1[1]).n128_i64[0];
  v17 = a1[13];
  v16 = a1[14];
  v18 = LANES128(a1[15]).n128_f32[0];
  v19 = v10 | 0x3F80000000000000LL;
  v20 = LANES128(v4).n128_u32[0] | ((unsigned __int64)(unsigned int)v8 << 32);
  v21 = LANES128(v4).n128_u32[2] | 0x3F80000000000000LL;
  v22 = vmlaq_lane_f32(vmulq_n_f32(v13, LANES128(v4).n128_f32[0]), v14,
                       COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1);
  v23 = vmlaq_lane_f32(
      vmulq_n_f32(v13, v9), v14,
      COERCE_AS(
          float32x2_t,
          (((unsigned __int64)LANES128(v4).n128_u32[1] << 32) | LODWORD(v9))),
      1);
  v24 = vmlaq_lane_f32(vmlaq_n_f32(v22, v17, *(float*)&v19), v16,
                       COERCE_AS(float32x2_t, v19), 1);
  v25 = vmlaq_lane_f32(vmulq_n_f32(v13, *(float*)&v20), v14,
                       COERCE_AS(float32x2_t, v20), 1);
  v26 = vmlaq_lane_f32(
      vmulq_n_f32(v13, v9), v14,
      COERCE_AS(float32x2_t, (LODWORD(v9) | (unsigned __int64)(v8 << 32))), 1);
  v27 = vmlaq_lane_f32(vmlaq_n_f32(v23, v17, *(float*)&v19), v16,
                       COERCE_AS(float32x2_t, v19), 1);
  v28 = vmlaq_lane_f32(vmlaq_n_f32(v22, v17, *(float*)&v21), v16,
                       COERCE_AS(float32x2_t, v21), 1);
  v29 = vmlaq_lane_f32(vmlaq_n_f32(v25, v17, *(float*)&v19), v16,
                       COERCE_AS(float32x2_t, v19), 1);
  v30 = vmlaq_lane_f32(vmlaq_n_f32(v26, v17, *(float*)&v19), v16,
                       COERCE_AS(float32x2_t, v19), 1);
  v31 = vmlaq_lane_f32(vmlaq_n_f32(v23, v17, *(float*)&v21), v16,
                       COERCE_AS(float32x2_t, v21), 1);
  v32 = vmlaq_lane_f32(vmlaq_n_f32(v25, v17, *(float*)&v21), v16,
                       COERCE_AS(float32x2_t, v21), 1);
  v33 = vmlaq_lane_f32(vmlaq_n_f32(v26, v17, *(float*)&v21), v16,
                       COERCE_AS(float32x2_t, v21), 1);
  if (LANES128(v28).n128_f32[3] < v18 || LANES128(v31).n128_f32[3] < v18 ||
      LANES128(v32).n128_f32[3] < v18 || LANES128(v24).n128_f32[3] < v18 ||
      LANES128(v29).n128_f32[3] < v18 || LANES128(v27).n128_f32[3] < v18 ||
      LANES128(v33).n128_f32[3] < v18 || LANES128(v30).n128_f32[3] < v18) {
    v53_.v54 = 0;
    v53_.v56 = 0;
    LANES64(v53_.v53).n64_u64[0] = 0;
    v53_.v55 = -1082130432;
    v42 = 1;
  }
  else {
    v42 = 0;
    v43 = vmulq_n_f32(v31, 0x1.0000000000000p+0f / LANES128(v31).n128_f32[3]);
    v44 = vmulq_n_f32(v28, 0x1.0000000000000p+0f / LANES128(v28).n128_f32[3]);
    LANES128(v45).n128_u64[0] = 0x80000000800000LL;
    LANES128(v45).n128_u64[1] = 0x80000000800000LL;
    v46 = vmulq_n_f32(v32, 0x1.0000000000000p+0f / LANES128(v32).n128_f32[3]);
    v47 = vmulq_n_f32(v24, 0x1.0000000000000p+0f / LANES128(v24).n128_f32[3]);
    v48 = vmulq_n_f32(v33, 0x1.0000000000000p+0f / LANES128(v33).n128_f32[3]);
    v49 = vmulq_n_f32(v29, 0x1.0000000000000p+0f / LANES128(v29).n128_f32[3]);
    v50 = vmulq_n_f32(v30, 0x1.0000000000000p+0f / LANES128(v30).n128_f32[3]);
    v51 = vmulq_n_f32(v27, 0x1.0000000000000p+0f / LANES128(v27).n128_f32[3]);
    v52 = vmaxq_f32(
        vmaxq_f32(
            vmaxq_f32(
                vmaxq_f32(
                    vmaxq_f32(
                        vmaxq_f32(vmaxq_f32(vmaxq_f32(v44, v45), v43), v46),
                        v47),
                    v49),
                v51),
            v48),
        v50);
    v53_.v55 = LANES128(v52).n128_i32[2];
    LANES128(v47).n128_u64[0] =
        LANES64_OF(
            vmin_f32(
                vmin_f32(
                    vmin_f32(
                        vmin_f32(
                            vmin_f32(
                                vmin_f32(
                                    vmin_f32(
                                        vmin_f32(COERCE_AS(
                                                     float32x2_t,
                                                     LANES128(v44).n128_u64[0]),
                                                 vneg_f32(COERCE_AS(
                                                     float32x2_t,
                                                     0x80000000800000LL))),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v43).n128_u64[0])),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v46).n128_u64[0])),
                                COERCE_AS(float32x2_t,
                                          LANES128(v47).n128_u64[0])),
                            COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])),
                        COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])),
                    COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])),
                COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
            .n64_u64[0];
    LANES64(v53_.v53).n64_u64[0] =
        LANES64_OF(vzip1_s32(COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]),
                             COERCE_AS(int32x2_t, LANES128(v52).n128_u64[0])))
            .n64_u64[0];
    v53_.v54 =
        LANES64_OF(vzip2_s32(COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]),
                             COERCE_AS(int32x2_t, LANES128(v52).n128_u64[0])))
            .n64_u64[0];
  }
  LOBYTE(v53_.v56) = v42;
  return !OcclusionCulling_1938520(v15, &v53_.v53);
}

__int64 OcclusionCulling_Unknown5(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 16) + 32LL) = 1;
  return result;
}

__int64 OcclusionCulling_Unknown6(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 16) + 32LL) = 0;
  return result;
}

void OcclusionCulling_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

bool OcclusionCulling_1938520(__int64 a1, int32x2_t* a2)
{
  _BOOL8 result;
  unsigned int v3;
  __int64 v4;
  float32x4_t v5;
  int32x4_t v6;
  float v7;
  int32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  int32x4_t v11;
  signed __int32 v12;
  signed __int32 v13;
  unsigned __int32 v14;
  signed __int32 v15;
  int v16;
  int v17;
  unsigned __int32 v18;
  int v19;
  int v20;
  int v21;
  unsigned __int32 v22;
  float32x4_t* v23;
  int32x4_t v24;
  unsigned __int32 v25;
  bool v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  float32x4_t* v31;
  float32x4_t v32;
  __int64 v33;
  float32x4_t* v34;
  int32x4_t v35;
  bool v37;
  int v38;

  if ((LANES64(a2[2]).n64_u8[4] & 1) != 0) {
    return false;
  }
  v3 = *(_DWORD*)(a1 + 28);
  v4 = *(int*)(a1 + 24);
  LANES128(v5).n128_f32[0] = vcvts_n_f32_s32(4 * v4, 1u);
  LANES128(v6).n128_u64[0] = LANES64_OF(vdup_n_s32(4 * (int)v4 - 1)).n64_u64[0];
  v7 = vcvts_n_f32_s32(v3, 1u);
  v8 = vdupq_lane_s32(a2[2], 0);
  LANES128(v5).n128_u32[1] = LANES128(v5).n128_u32[0];
  *(int32x2_t*)&LANES128(v6).n128_i8[8] = vdup_n_s32(v3 - 1);
  LANES128(v9).n128_u64[0] = LANES128(v5).n128_u64[0];
  LANES128(v9).n128_f32[2] = -v7;
  LANES128(v9).n128_f32[3] = -v7;
  LANES128(v5).n128_f32[2] = v7;
  LANES128(v5).n128_f32[3] = v7;
  LANES128(v10).n128_u64[0] = LANES64(*(a2)).n64_u64[0];
  LANES128(v10).n128_u32[2] = LANES64(a2[1]).n64_u32[1];
  LANES128(v10).n128_u32[3] = LANES64(a2[1]).n64_u32[0];
  v11 = vminq_s32(
      vmaxq_s32(vcvtq_s32_f32(vmlaq_f32(v5, v9, v10)), COERCE_AS(int32x4_t, 0)),
      v6);
  v12 = LANES128(v11).n128_i32[1];
  v13 = LANES128(v11).n128_i32[2];
  v14 = LANES128(v11).n128_u32[3];
  v15 = LANES128(v11).n128_u32[0] + 3;
  if (LANES128(v11).n128_i32[0] < -3) {
    v15 = LANES128(v11).n128_u32[0] + 6;
  }
  v16 = v15 >> 2;
  if ((int)v4 - 1 >= v16) {
    v17 = v16;
  }
  else {
    v17 = v4 - 1;
  }
  v18 = LANES128(v11).n128_u32[1] - 3;
  if (LANES128(v11).n128_i32[1] >= 3) {
    v12 = LANES128(v11).n128_u32[1] - 3;
  }
  v19 = v12 >> 2;
  v20 = (v12 >> 2) & ~(v12 >> 31);
  if (LANES128(v11).n128_i32[3] >= LANES128(v11).n128_i32[2] && v17 <= v20) {
    v28 = LANES128(v11).n128_i32[2];
    v29 = *(_QWORD*)a1 + 48 * v4 * LANES128(v11).n128_i32[2] + 48LL * v17;
  LABEL_25:
    v30 = v20 - v17 + 1;
    v31 = (float32x4_t*)v29;
    while (1) {
      v32 = *v31;
      v31 += 3;
      if (vaddvq_s32(vmvnq_s8(vcgeq_f32(v8, v32))) != -4) {
        return false;
      }
      if (--v30 == 0) {
        ++v28;
        v29 += 48 * v4;
        if (LANES128(v11).n128_u32[3] + 1 != (_DWORD)v28) {
          goto LABEL_25;
        }
        break;
      }
    }
  }
  if (LANES128(v11).n128_i32[0] <= 0) {
    v21 = -(-LANES128(v11).n128_u32[0] & 3);
  }
  else {
    v21 = LANES128(v11).n128_u8[0] & 3;
  }
  if (v21 != 0 && LANES128(v11).n128_i32[3] >= LANES128(v11).n128_i32[2]) {
    v22 = LANES128(v11).n128_u32[3] - LANES128(v11).n128_u32[2] + 1;
    v23 = (float32x4_t*)(48 * v4 * LANES128(v11).n128_i32[2] + 48LL * v17 +
                         *(_QWORD*)a1 - 48);
    v24 = vceqzq_s32(vandq_s8(vdupq_n_s32(-1 << v21),
                              COERCE_AS(int8x16_t, GameData_1a830a0)));
    while (vaddvq_s32(vornq_s8(v24, vcgeq_f32(v8, *v23))) == -4) {
      v23 += 3 * v4;
      if (--v22 == 0) {
        goto LABEL_20;
      }
    }
    return false;
  }
LABEL_20:
  v25 = v18 - 4 * v19;
  if (v25 == 0) {
    return true;
  }
  v26 = __OFSUB__(v14, v13);
  v27 = v14 - v13;
  if (v27 < 0 != v26) {
    return true;
  }
  v33 = 48 * v4;
  v34 =
      (float32x4_t*)(v33 * v13 + 48LL * (unsigned int)v20 + *(_QWORD*)a1 + 48);
  v35 = vceqzq_s32(vandq_s8(vdupq_n_s32(~(-1 << v25)),
                            COERCE_AS(int8x16_t, GameData_1a830a0)));
  do {
    v37 = v27-- != 0;
    v38 = vaddvq_s32(vornq_s8(v35, vcgeq_f32(v8, *v34)));
    result = v38 == -4;
    if (v38 != -4) {
      break;
    }
    v34 = (float32x4_t*)((char*)v34 + v33);
  } while (v37);
  return result;
}

#pragma GCC visibility pop
