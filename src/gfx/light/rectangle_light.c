#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int128 GameData_1b80310;
extern __int64 (*gfx_light_Instance_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
float RectangleLight_Unknown2(__int64 a1);
__int64 GameHr_c76f00(__int64 a1, __int64 a2);
_QWORD*
RectangleLight_c541a0_alt1(_QWORD* result) __asm__("RectangleLight_c541a0");
extern __int128 GameData_1b80320;
long double RectangleLight_c53f10();
extern __int128 GameData_1a82f20;
float32x4_t RectangleLight_c53f20(__int64 a1, float32x4_t* a2);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RectangleLight_c541a0(_QWORD* a1);

float RectangleLight_Unknown2(__int64 a1)
{
  float v1;
  int v2;
  float v3;

  v1 = *(float*)(a1 + 64);
  v2 = *(_DWORD*)(a1 + 88);
  if (v2 == 3) {
    v3 = *(float*)(a1 + 288);
    goto LABEL_5;
  }
  if (v2 == 0) {
    v3 = *(float*)(a1 + 288) * 3.1416f;
  LABEL_5:
    v1 = v1 / (float)(v3 * *(float*)(a1 + 292));
  }
  return (float)(v1 * *(float*)(a1 + 72)) * (float)(*(float*)(a1 + 68) + 1.0f);
}

long double RectangleLight_c53f00() { return *(long double*)&GameData_1b80310; }

long double RectangleLight_c53f10() { return *(long double*)&GameData_1b80320; }

float32x4_t RectangleLight_c53f20(__int64 a1, float32x4_t* a2)
{
  float32x4_t v2;
  float32x4_t v3;
  float32x4_t v4;
  int8x16_t v5;
  float32x4_t v6;
  float32x4_t v7;
  int8x16_t v8;
  int8x16_t v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
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
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;

  v2 = *(float32x4_t*)(a1 + 256);
  v3 = *(float32x4_t*)(a1 + 272);
  LANES128(v4).n128_u64[0] = *(_QWORD*)(a1 + 16);
  LANES128(v4).n128_u64[1] = *(unsigned int*)(a1 + 24);
  v5 = vmulq_f32(v2, v2);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  LANES128(v5).n128_u64[1] = LANES128(v5).n128_u64[0];
  v6 = vrsqrteq_f32(v5);
  v7 = vmulq_f32(v6, vrsqrtsq_f32(v6, vmulq_f32(v5, v6)));
  v8 = vbicq_s8(
      vmulq_f32(v2, vmulq_f32(v7, vrsqrtsq_f32(v7, vmulq_f32(v5, v7)))),
      vceqzq_f32(v5));
  v9 = vmulq_f32(v3, v3);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  LANES128(v9).n128_u64[1] = LANES128(v9).n128_u64[0];
  v10 = vrsqrteq_f32(v9);
  v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v9, v10)));
  v12 = vbicq_s8(
      vmulq_f32(v3, vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v9, v11)))),
      vceqzq_f32(v9));
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] =
      vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v9).n128_i8[8] =
      vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v15 = vmulq_n_f32(v12, *(float*)(a1 + 288) * 0.5f);
  v16 = vmulq_n_f32(vmlsq_f32(vmulq_f32(v11, v13), v9, v14),
                    *(float*)(a1 + 292) * 0.5f);
  v17 = vaddq_f32(v4, v15);
  v18 = vsubq_f32(v4, v15);
  v19 = vaddq_f32(v18, v16);
  v20 = vsubq_f32(v18, v16);
  v21 = vaddq_f32(v17, v16);
  v22 = vsubq_f32(v17, v16);
  v23 = vmulq_n_f32(v8, COERCE_FLOAT(*(_OWORD*)(a1 + 32)));
  v24 = vaddq_f32(v23, v21);
  v25 = vaddq_f32(v23, v22);
  v26 = vaddq_f32(v23, v19);
  v27 = vaddq_f32(v23, v20);
  if (a2 == nullptr) {
    return vminq_f32(
        vminq_f32(
            vminq_f32(
                vminq_f32(
                    vminq_f32(
                        vminq_f32(
                            vminq_f32(
                                vminq_f32(v21, COERCE_AS(float32x4_t,
                                                         GameData_1a82f20)),
                                v22),
                            v19),
                        v20),
                    v24),
                v25),
            v26),
        v27);
  }
  v28 = a2[1];
  v29 = a2[2];
  v30 = a2[3];
  return vminq_f32(
      vminq_f32(
          vminq_f32(
              vminq_f32(
                  vminq_f32(
                      vminq_f32(
                          vminq_f32(
                              vminq_f32(
                                  vaddq_f32(
                                      vmlaq_laneq_f32(
                                          vmlaq_lane_f32(
                                              vmulq_n_f32(
                                                  *a2,
                                                  LANES128(v21).n128_f32[0]),
                                              v28,
                                              COERCE_AS(
                                                  float32x2_t,
                                                  LANES128(v21).n128_u64[0]),
                                              1),
                                          v29, v21, 2),
                                      v30),
                                  COERCE_AS(float32x4_t, GameData_1a82f20)),
                              vaddq_f32(
                                  vmlaq_laneq_f32(
                                      vmlaq_lane_f32(
                                          vmulq_n_f32(
                                              *a2, LANES128(v22).n128_f32[0]),
                                          v28,
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v22).n128_u64[0]),
                                          1),
                                      v29, v22, 2),
                                  v30)),
                          vaddq_f32(
                              vmlaq_laneq_f32(
                                  vmlaq_lane_f32(
                                      vmulq_n_f32(*a2,
                                                  LANES128(v19).n128_f32[0]),
                                      v28,
                                      COERCE_AS(float32x2_t,
                                                LANES128(v19).n128_u64[0]),
                                      1),
                                  v29, v19, 2),
                              v30)),
                      vaddq_f32(
                          vmlaq_laneq_f32(
                              vmlaq_lane_f32(
                                  vmulq_n_f32(*a2, LANES128(v20).n128_f32[0]),
                                  v28,
                                  COERCE_AS(float32x2_t,
                                            LANES128(v20).n128_u64[0]),
                                  1),
                              v29, v20, 2),
                          v30)),
                  vaddq_f32(
                      vmlaq_laneq_f32(
                          vmlaq_lane_f32(
                              vmulq_n_f32(*a2, LANES128(v24).n128_f32[0]), v28,
                              COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                              1),
                          v29, v24, 2),
                      v30)),
              vaddq_f32(
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(*a2, LANES128(v25).n128_f32[0]), v28,
                          COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]), 1),
                      v29, v25, 2),
                  v30)),
          vaddq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(*a2, LANES128(v26).n128_f32[0]), v28,
                      COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]), 1),
                  v29, v26, 2),
              v30)),
      vaddq_f32(vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(*a2, LANES128(v27).n128_f32[0]), v28,
                        COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]), 1),
                    v29, v27, 2),
                v30));
}

void RectangleLight_c541a0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = a1[20];
  *a1 = gfx_light_Instance_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[21] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = a1[17];
  if (v6 != 0) {
    v7 = a1[18];
    if (v6 == v7) {
      goto LABEL_15;
    }
    do {
      v8 = *(_QWORD*)(v7 - 24);
      if (v8 != 0) {
        *(_QWORD*)(v7 - 16) = v8;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
      }
      v7 -= 48;
    } while (v7 != v6);
    v10 = a1[17];
    a1[18] = v6;
    v6 = v10;
    if (v10 != 0) {
    LABEL_15:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v11, v6);
    }
  }
  v12 = a1[14];
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    a1[15] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v13 + v14, v12);
  }
}

#pragma GCC visibility pop
