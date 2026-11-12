#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_c55de0(__int64 result, float*, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__n128 gfx_light_c53c90(float32x4_t*, float32x4_t*);
__n128 gfx_light_c53e50(float32x4_t*, float32x4_t*);
extern __int64 fw_memory_g_heap_manager_ptr;
float32x4_t RectangleLight_c53f20(__int64, float32x4_t*);
void GameRoutine_c3f7a0(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_c55dc0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void gfx_light_c557e0(float32x4_t* a1, __int64* a2);

void gfx_light_c557e0(float32x4_t* a1, __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v3;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  float32x4_t*** v11;
  float32x4_t** v12;
  float32x4_t** v13;
  float32x4_t* v14;
  unsigned __int32 v15;
  float32x4_t v16;
  __int64 v17;
  int8x16_t v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  char v22;
  char v23;
  _BYTE* v24;
  unsigned __int32 v25;
  unsigned __int64 v26;
  __n128 v27;
  int8x16_t v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  char v32;
  _BYTE* v33;
  float32x4_t v34;
  int8x16_t v35;
  unsigned __int32 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  _DWORD* v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  char v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  int* v51;
  int v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v56;
  unsigned __int32 v57;
  int8x16x2_t v58;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v3 = LANES128(a1[1]).n128_u64[1];
  v2 = LANES128(a1[2]).n128_u64[0];
  if (v3 == v2) {
    goto LABEL_10;
  }
  v5 = 0;
  v6 = LANES128(a1[1]).n128_u64[1];
  do {
    if (*(_BYTE*)(*(_QWORD*)v6 + 60LL) == 1) {
      v5 += (*(_QWORD*)(*(_QWORD*)v6 + 8LL) - **(_QWORD**)v6) >> 4;
    }
    v6 += 16LL;
  } while (v6 != v2);
  if (v5 == 0) {
  LABEL_10:
    v56 = 0;
    v8 = 0;
    if (v3 == v2) {
    LABEL_9:
      v9 = v8;
      goto LABEL_62;
    }
  }
  else {
    if (v5 < 0) {
    LABEL_75:
      GameRoutine_c55dc0(),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    v7 = v5;
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        8LL * v5, 16, 0),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v56 = v8 + 8 * v7;
    v3 = LANES128(a1[1]).n128_u64[1];
    v2 = LANES128(a1[2]).n128_u64[0];
    if (v3 == v2) {
      goto LABEL_9;
    }
  }
  v10 = 0;
  v9 = v8;
  v54 = v2;
  do {
    v11 = *(float32x4_t****)v3;
    if (*(_BYTE*)(*(_QWORD*)v3 + 60LL) == 1) {
      v12 = *v11;
      v13 = v11[1];
      while (1) {
        if (v12 == v13) {
          goto LABEL_12;
        }
        v14 = *v12;
        if (LANES128((*v12)[5]).n128_u8[12] == 1 &&
            (LANES128(v14[5]).n128_u8[13] & 1) != 0 &&
            LANES128(v14[4]).n128_f32[0] > 0x0.0p+0f &&
            LANES128(v14[4]).n128_f32[2] > 0x0.0p+0f) {
          break;
        }
      LABEL_16:
        ++v10;
        v12 += 2;
      }
      v15 = LANES128(*(v14)).n128_u32[2];
      if (v15 == 4) {
        v16 = RectangleLight_c53f20((__int64)v14, nullptr),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v17 = *a2;
        v58.val[0] = v16;
        v58.val[1] = v18;
        v19 = (__int64*)(*(__int64 (**)(__int64*))(v17 + 112))(a2),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v20 = *v19;
        v21 = v19[1];
        if (*v19 != v21) {
          v22 = 1;
          do {
            v24 = *(_BYTE**)(v20 + 16);
            if (v24[8] == 1) {
              v23 = (*(__int64 (**)(_BYTE*, int8x16x2_t*))(*(_QWORD*)v24 +
                                                           24LL))(v24, &v58),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            else {
              v23 = 1;
            }
            v22 &= v23;
            v20 += 24;
          } while (v20 != v21);
          goto LABEL_43;
        }
        goto LABEL_44;
      }
      if (v15 == 3) {
        v27 = gfx_light_c53e50(v14, nullptr),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      else {
        if (v15 != 2) {
          if (v15 == 1) {
            v25 = LANES128(v14[2]).n128_u32[0];
            v26 = LANES128(v14[1]).n128_u64[1];
            LANES128(v58.val[0]).n128_u64[0] = LANES128(v14[1]).n128_u64[0];
            LANES128(v58.val[0]).n128_u64[1] = v26;
            LANES128(v58.val[1]).n128_u32[0] = v25;
          }
          else {
            memset(&v58, 0, 20);
          }
        LABEL_37:
          v29 = (__int64*)(*(__int64 (**)(__int64*))(*a2 + 112))(a2),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
          v30 = *v29;
          v31 = v29[1];
          if (*v29 != v31) {
            v22 = 1;
            do {
              v33 = *(_BYTE**)(v30 + 16);
              if (v33[8] == 1) {
                v32 = (*(__int64 (**)(_BYTE*, int8x16x2_t*))(*(_QWORD*)v33 +
                                                             32LL))(v33, &v58),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              else {
                v32 = 1;
              }
              v22 &= v32;
              v30 += 24;
            } while (v30 != v31);
          LABEL_43:
            if ((v22 & 1) == 0) {
              goto LABEL_16;
            }
          }
        LABEL_44:
          v34 = vsubq_f32(a1[8], (*v12)[1]);
          v35 = vmulq_f32(v34, v34);
          LANES128(v35).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
                  .n64_u64[0];
          v36 = LANES64_OF(
                    vsqrt_f32(vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]))))
                    .n64_u32[0];
          if (v9 < v56) {
            *(_DWORD*)v9 = v10;
            *(_DWORD*)(v9 + 4) = v36;
            v9 += 8LL;
          }
          else {
            v37 = v9 - v8;
            v38 = (__int64)(v9 - v8) >> 3;
            v39 = v38 + 1;
            if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
              goto LABEL_75;
            }
            if ((__int64)(v56 - v8) >> 2 > v39) {
              v39 = (__int64)(v56 - v8) >> 2;
            }
            if (v56 - v8 >= 0x7FFFFFFFFFFFFFF8LL) {
              v40 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v40 = v39;
            }
            if (v40 != 0) {
              v57 = v36;
              if (v40 >> 61 != 0) {
                GameRoutine_60a210(),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              v41 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40, 16, 0),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
              v36 = v57;
            }
            else {
              v41 = 0;
            }
            v42 = (_DWORD*)(v41 + v37);
            v43 = v41 + v37 - 8 * v38;
            v56 = v41 + 8 * v40;
            *v42 = v10;
            v42[1] = v36;
            v9 = v41 + v37 + 8;
            memcpy(v43, v8, v37),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v8 != 0) {
              v44 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v44 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v8),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            v8 = v43;
          }
          goto LABEL_16;
        }
        v27 = gfx_light_c53c90(v14, nullptr),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      LANES128(v28).n128_u64[0] = LANES128(v27).n128_u64[0];
      LANES128(v58.val[1]).n128_u32[0] = LANES128(v27).n128_u32[3];
      LANES128(v28).n128_u64[1] = LANES128(v27).n128_u32[2];
      v58.val[0] = v28;
      goto LABEL_37;
    }
  LABEL_12:
    v3 += 16LL;
  } while (v3 != v54);
  if (v8 != v9) {
    v45 = (__int64)(v9 - v8) >> 3;
    GameHr_c55de0(v8, (float*)v9, (2 * __clz(v45)) ^ 0x7E, 1),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v46 = 0;
    goto LABEL_63;
  }
LABEL_62:
  v47 = v9 - v8;
  v46 = 1;
  v45 = v47 >> 3;
LABEL_63:
  v48 = LANES128(a1[3]).n128_u64[0];
  v49 = (__int64)(LANES128(a1[3]).n128_u64[1] - v48) >> 2;
  if (v45 <= v49) {
    if (v45 < v49) {
      LANES128(a1[3]).n128_u64[1] = v48 + 4 * v45;
    }
  }
  else {
    GameRoutine_c3f7a0((__int64*)&a1[3], v45 - v49),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  if ((v46 & 1) != 0) {
    if (v8 == 0) {
      return;
    }
  }
  else {
    v50 = 0;
    v51 = (int*)v8;
    do {
      v52 = *v51;
      v51 += 2;
      *(_DWORD*)(LANES128(a1[3]).n128_u64[0] + 4 * v50++) = v52;
    } while (v45 > (unsigned int)v50);
  }
  v53 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v53 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                                v8),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w"));
}

#pragma GCC visibility pop
