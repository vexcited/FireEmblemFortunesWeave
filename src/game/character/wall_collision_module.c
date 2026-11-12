#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 WallCollisionModule_Unknown8(__int64 result);
__attribute__((swiftcall)) void collision_672120(PSEUDO_X8, __int128*, __int64,
                                                 float);
__int64 GameRoutine_11057c0(__int64);
__int64 GameRoutine_14a0820(_QWORD*);
__int64 GameRoutine_2b0();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 physx_PxGeometryQuery_computePenetration(float*, __int64, int*, int*,
                                                 int*, int*, __int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN* GameData_212feb0;
extern __int64* GameData_212c838;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212fea8;
int32x2_t* WallCollisionModule_1105be0(_QWORD* a1, float a2);
void WallCollisionModule_1106aa0(float* a1, float a2, float a3, float a4);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void collision_6725f0(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64, float);
void WallCollisionModule_1106720(float* a1, float* a2, float* a3, float a4,
                                 float a5, float a6);

int32x2_t* WallCollisionModule_1105be0(_QWORD* a1, float a2)
{

#pragma clang fp contract(off)
  atomic_uchar* v4;
  unsigned __int8 explicit;
  int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int32x2_t* result;
  int32x2_t* v11;
  unsigned __int64 v12;
  unsigned __int64 i;
  int v14;
  int32x2_t* v15;
  int32x2_t* v16;
  int v17;

  v4 = (atomic_uchar*)GameData_212feb0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212feb0,
                                  memory_order_acquire);
  v6 = GameData_212fea8;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212feb0) != 0) {
    *v6 = wld_Crc32(0, "WallCollisionModule", 0x13u);
    __cxa_guard_release(GameData_212feb0);
  }
  v7 = a1[64];
  v8 = v7;
  do {
    if (v8 == a1[63]) {
      goto LABEL_7;
    }
    v9 = *(_DWORD*)(v8 - 16);
    v8 -= 16;
    v7 -= 16;
  } while (v9 != *v6);
  if (a1[64] == v7 || (result = *(int32x2_t**)(v7 + 8)) == nullptr) {
  LABEL_7:
    result = (int32x2_t*)GameRoutine_11057c0((__int64)a1);
  }
  LANES64(result[6]).n64_f32[0] = a2;
  LANES64(result[6]).n64_u8[4] = 1;
  v11 = (int32x2_t*)a1[92];
  if (v11 != nullptr) {
    LANES64(result[7]).n64_u64[0] =
        LANES64_OF(
            vzip1_s32(
                v11[38],
                COERCE_AS(
                    int32x2_t,
                    LANES128_OF(vextq_s8(*(int8x16_t*)LANES64(v11[38]).n64_u64,
                                         *(int8x16_t*)LANES64(v11[38]).n64_u64,
                                         8u))
                        .n128_u64[0])))
            .n64_u64[0];
    if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
      v16 = result;
      v17 = __cxa_guard_acquire(GameData_212feb0);
      result = v16;
      if (v17 != 0) {
        *v6 = wld_Crc32(0, "WallCollisionModule", 0x13u);
        __cxa_guard_release(GameData_212feb0);
        result = v16;
      }
    }
    v12 = LANES64(v11[64]).n64_u64[0];
    for (i = v12; i != LANES64(v11[63]).n64_u64[0]; i -= 16LL) {
      v14 = *(_DWORD*)(i - 16);
      v12 -= 16LL;
      if (v14 == *v6) {
        if (LANES64(v11[64]).n64_u64[0] != v12) {
          v15 = *(int32x2_t**)(v12 + 8);
          if (v15 != nullptr) {
            LANES64(result[7]).n64_u64[0] =
                LANES64_OF(
                    vzip1_s32(
                        v15[4],
                        COERCE_AS(
                            int32x2_t,
                            LANES128_OF(
                                vextq_s8(*(int8x16_t*)LANES64(v15[4]).n64_u64,
                                         *(int8x16_t*)LANES64(v15[4]).n64_u64,
                                         8u))
                                .n128_u64[0])))
                    .n64_u64[0];
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64 WallCollisionModule_Unknown8(__int64 result)
{
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  return result;
}

void WallCollisionModule_1106720(float* a1, float* a2, float* a3, float a4,
                                 float a5, float a6)
{
  float32x4_t v10;
  float v11;
  float v12;
  float v13;
  bool v14;
  float v15;
  float v16;
  float v17;
  float v18;
  bool v19;
  float v20;
  float v21;
  unsigned int v22;
  int8x8_t v23;
  float v24;
  bool v25;
  int8x8_t v26;
  unsigned int v27;
  unsigned __int64 v28;
  float32x4_t v29;
  float32x4_t v30;
  float v31;
  int8x16_t v32;
  float32x4_t v33;
  float v34;
  unsigned __int64 v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  unsigned __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  bool v46;
  float v47;
  bool v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  unsigned __int64 v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float32x4_t v61;
  float32x4_t v62;
  struct {
    float32x4_t v63;
    float32x4_t v64;
    char gap112_[48];
    char v65;
  } v63_;

  WallCollisionModule_1106aa0((float*)&v63_.v63, a4, a5, a6);
  LANES128(v10).n128_u32[0] = LANES128(v63_.v63).n128_u32[0];
  if (a3 != nullptr &&
      ((v11 = a3[1], v13 = a3[2], v12 = a3[3], *a3 < v13) ? (v14 = v11 < v12)
                                                          : (v14 = false),
       v14)) {
    v15 = a6 + 0x1.47ae140000000p-8f;
    v16 = (float)(a6 + 0x1.47ae140000000p-8f) + *a3;
    v17 = v13 - (float)(a6 + 0x1.47ae140000000p-8f);
    if (LANES128(v63_.v63).n128_f32[0] >= v16) {
      v18 = LANES128(v63_.v63).n128_f32[0];
    }
    else {
      v18 = (float)(a6 + 0x1.47ae140000000p-8f) + *a3;
    }
    if (v18 > v17) {
      v19 = true;
    }
    else {
      v17 = v18;
      v19 = LANES128(v63_.v63).n128_f32[0] < v16;
    }
    LANES128(v10).n128_u32[1] = LANES128(v63_.v63).n128_u32[1];
    v20 = v15 + v11;
    v21 = v12 - v15;
    if (v19) {
      v22 = -1;
    }
    else {
      v22 = 0;
    }
    LANES64(v23).n64_u64[0] =
        LANES64_OF(vbsl_s8(vdup_n_s32(v22),
                           COERCE_AS(int8x8_t,
                                     __PAIR64__(LANES128(v63_.v63).n128_u32[1],
                                                LODWORD(v17))),
                           COERCE_AS(int8x8_t, LANES128(v10).n128_u64[0])))
            .n64_u64[0];
    if (LANES64(v23).n64_f32[1] >= v20) {
      v24 = LANES64(v23).n64_f32[1];
    }
    else {
      v24 = v20;
    }
    if (v24 > v21) {
      v25 = true;
    }
    else {
      v21 = v24;
      v25 = LANES64(v23).n64_f32[1] < v20;
    }
    LANES64(v26).n64_u32[0] = LANES64(v23).n64_u32[0];
    if (v25) {
      v27 = -1;
    }
    else {
      v27 = 0;
    }
    LANES64(v26).n64_f32[1] = v21;
    LANES128(v10).n128_u64[0] =
        LANES64_OF(vbsl_s8(vdup_n_s32(v27), v26, v23)).n64_u64[0];
  }
  else {
    LANES128(v10).n128_u32[1] = LANES128(v63_.v63).n128_u32[1];
  }
  v57 = *a2;
  v59 = a2[1];
  v28 = LANES128(v10).n128_u32[1];
  LANES128(v10).n128_u32[1] = 0;
  LANES128(v10).n128_u64[1] = v28;
  v62 = v10;
  LANES128(v29).n128_u64[0] = LODWORD(v57);
  LANES128(v29).n128_u64[1] = LODWORD(v59);
  v61 = v29;
  collision_6725f0((void*)((__int64)&v63_.v63), &v62, &v61, 8, a6);
  if ((v63_.v65 & 1) != 0) {
    v31 = a6 + 0x1.47ae140000000p-8f;
    LANES128(v30).n128_f32[0] =
        (float)(a6 + 0x1.47ae140000000p-8f) * LANES128(v63_.v64).n128_f32[0];
    LANES128(v30).n128_u32[2] =
        vmuls_lane_f32(a6 + 0x1.47ae140000000p-8f, v63_.v64, 2);
    v32 = vaddq_f32(v63_.v63, v30);
    LANES128(v33).n128_u64[0] =
        LANES64_OF(
            vzip1_s32(
                COERCE_AS(int32x2_t, LANES128(v32).n128_u64[0]),
                COERCE_AS(int32x2_t,
                          LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0])))
            .n64_u64[0];
    LANES128(v32).n128_f32[0] =
        vmuls_lane_f32(LANES128(v32).n128_f32[2] - v59, v63_.v64, 2) +
        (float)((float)(LANES128(v32).n128_f32[0] - v57) *
                LANES128(v63_.v64).n128_f32[0]);
    v34 = vmuls_lane_f32(LANES128(v32).n128_f32[0], v63_.v64, 2);
    LANES128(v32).n128_f32[0] =
        v57 + (float)(PSEUDO_UNFUSED(LANES128(v32).n128_f32[0] *
                                     LANES128(v63_.v64).n128_f32[0]));
    v58 = LANES128(v32).n128_f32[0];
    v60 = v59 + v34;
    LANES128(v32).n128_f32[1] = v60;
    v35 = LANES128(v33).n128_u32[1];
    LANES128(v33).n128_u32[1] = 0;
    v56 = LANES128(v32).n128_u64[0];
    LANES128(v33).n128_u64[1] = v35;
    LANES128(v36).n128_u64[0] = LANES128(v32).n128_u32[0];
    LANES128(v36).n128_u64[1] = LODWORD(v60);
    v61 = v36;
    v62 = v33;
    collision_6725f0((void*)((__int64)&v63_.v63), &v62, &v61, 8, a6);
    if ((v63_.v65 & 1) != 0) {
      LANES128(v37).n128_f32[0] = v31 * LANES128(v63_.v64).n128_f32[0];
      LANES128(v37).n128_u32[2] = vmuls_lane_f32(v31, v63_.v64, 2);
      v38 = vaddq_f32(v63_.v63, v37);
      LANES128(v38).n128_f32[0] =
          vmuls_lane_f32(LANES128(v38).n128_f32[2] - v60, v63_.v64, 2) +
          (float)((float)(LANES128(v38).n128_f32[0] - v58) *
                  LANES128(v63_.v64).n128_f32[0]);
      *(float*)&v39 =
          v58 + (float)(PSEUDO_UNFUSED(LANES128(v38).n128_f32[0] *
                                       LANES128(v63_.v64).n128_f32[0]));
      *((float*)&v39 + 1) =
          v60 + vmuls_lane_f32(LANES128(v38).n128_f32[0], v63_.v64, 2);
    }
    else {
      v39 = v56;
    }
    WallCollisionModule_1106aa0((float*)&v63_.v63, *(float*)&v39,
                                *((float*)&v39 + 1), a6);
    v40 = LANES128(v63_.v63).n128_f32[1];
    v41 = LANES128(v63_.v63).n128_f32[0];
    if (a3 != nullptr) {
      v50 = a3[2];
      if (*a3 < v50) {
        v51 = a3[1];
        v52 = a3[3];
        if (v51 < v52) {
          v53 = v50 - v31;
          v54 = v31 + v51;
          v55 = v52 - v31;
          if (LANES128(v63_.v63).n128_f32[0] < (float)(v31 + *a3)) {
            v41 = v31 + *a3;
          }
          if (v41 > v53) {
            v41 = v53;
          }
          if (LANES128(v63_.v63).n128_f32[1] < v54) {
            v40 = v54;
          }
          if (v40 > v55) {
            v40 = v55;
          }
        }
      }
    }
    goto LABEL_60;
  }
  WallCollisionModule_1106aa0((float*)&v63_.v63, v57, v59, a6);
  v40 = LANES128(v63_.v63).n128_f32[1];
  v41 = LANES128(v63_.v63).n128_f32[0];
  if (a3 == nullptr ||
      ((v42 = *a3, v43 = a3[1], v45 = a3[2], v44 = a3[3], *a3 < v45)
           ? (v46 = v43 < v44)
           : (v46 = false),
       !v46)) {
  LABEL_60:
    *a1 = v41;
    goto LABEL_61;
  }
  *a1 = LANES128(v63_.v63).n128_f32[0];
  a1[1] = v40;
  v47 = v45 - (float)(a6 + 0x1.47ae140000000p-8f);
  if (v41 >= (float)((float)(a6 + 0x1.47ae140000000p-8f) + v42)) {
    v48 = v41 <= v47;
  }
  else {
    v41 = (float)(a6 + 0x1.47ae140000000p-8f) + v42;
    v48 = false;
  }
  if (!v48) {
    if (v41 > v47) {
      v41 = v47;
    }
    *a1 = v41;
  }
  v49 = v44 - (float)(a6 + 0x1.47ae140000000p-8f);
  if (v40 >= (float)((float)(a6 + 0x1.47ae140000000p-8f) + v43)) {
    if (v40 <= v49) {
      return;
    }
  }
  else {
    v40 = (float)(a6 + 0x1.47ae140000000p-8f) + v43;
  }
  if (v40 > v49) {
    v40 = v44 - (float)(a6 + 0x1.47ae140000000p-8f);
  }
LABEL_61:
  a1[1] = v40;
}

void WallCollisionModule_1106aa0(float* a1, float a2, float a3, float a4)
{

#pragma clang fp contract(off)
  int v6;
  __int128 v7;
  __int64 v8;
  int* v9;
  int* v10;
  char v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  int* v16;
  char v18;
  float v19;
  float v20;
  float v21;
  float v23;
  __int64* v24;
  __int64 v25;
  struct {
    __int128 v26;
    int v27;
    int v28;
    int v29;
  } v26_;
  float v30;
  struct {
    __int64 v31;
    float v32;
  } v31_;
  struct {
    __int64 v33;
    __int64 v34;
    char gap64_[8];
    char v35;
  } v33_;
  int v36[3];
  int v37;

  v6 = 0;
  *a1 = a2;
  a1[1] = a3;
  v36[0] = 0;
  *(float*)&v36[2] = a4;
  while (1) {
    *(_QWORD*)&v7 = *(_QWORD*)a1;
    DWORD1(v7) = 0;
    *((_QWORD*)&v7 + 1) = (unsigned int)HIDWORD(*(_QWORD*)a1);
    v26_.v26 = v7;
    collision_672120((void*)((__int64)&v33_.v33), &v26_.v26, 8, a4);
    if (v33_.v35 != 1) {
      break;
    }
    v8 = v33_.v33;
    v9 = (int*)v33_.v34;
    if (v33_.v33 != v33_.v34) {
      v10 = (int*)(v33_.v33 + 16);
      v11 = 0;
      do {
        v13 = *(_QWORD*)a1;
        v31_.v31 = 0;
        v31_.v32 = 0x0.0p+0f;
        v26_.v29 = HIDWORD(v13);
        *(_QWORD*)&v26_.v26 = 0;
        *((_QWORD*)&v26_.v26 + 1) = 0x3F80000000000000LL;
        v26_.v27 = v13;
        v26_.v28 = 0;
        v30 = 0x0.0p+0f;
        v14 = *((_QWORD*)v10 - 1);
        if (v14 != 0) {
          if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)GameData_212c840) != 0) {
            v24 = GameData_212c838;
            *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) =
                0;
            *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8) = 0;
            *v24 = 0;
            v24[1] = 0;
            *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v24) = 0;
            *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v24) = 0;
            *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v24) =
                (_UNKNOWN*)1065353216;
            *((_BYTE*)((char*)0x40LL) + (_QWORD)v24) = 0;
            *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v24) = 0;
            GameRoutine_14a0820(v24);
            GameRoutine_2b0();
            __cxa_guard_release_alt1((__int64)GameData_212c840);
          }
          v15 = *(_QWORD**)(*GameData_212c838 + 32);
          (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v15 + 936LL))(*v15,
                                                                         0, 0);
          v16 = (int*)(*(__int64 (**)(__int64))(*(_QWORD*)v14 + 80LL))(v14);
          v37 = 1;
          v18 = physx_PxGeometryQuery_computePenetration(
              (float*)&v31_.v31, (__int64)&v30, v36, (int*)&v26_.v26, v16, v10,
              (__int64)&v37);
          (*(void (**)(_QWORD))(*(_QWORD*)*v15 + 944LL))(*v15);
          if ((v18 & 1) != 0) {
            v19 = (float)(v30 + 0x1.47ae140000000p-8f) * *(float*)&v31_.v31;
            v20 = v31_.v32 * (float)(v30 + 0x1.47ae140000000p-8f);
            v21 = fabsf(v20);
            if (fabsf(v19) >= 0x1.0000000000000p-23f ||
                v21 >= 0x1.0000000000000p-23f) {
              v11 = 1;
              v23 = v20 + a1[1];
              *a1 = v19 + *a1;
              a1[1] = v23;
            }
          }
        }
        v12 = v10 + 8;
        v10 += 12;
      } while (v12 != v9);
      if (v33_.v35 != 1) {
        goto LABEL_23;
      }
      v8 = v33_.v33;
      if (v33_.v33 == 0) {
        goto LABEL_23;
      }
    LABEL_20:
      v33_.v34 = v8;
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v8);
      goto LABEL_23;
    }
    v11 = 0;
    if (v33_.v33 != 0) {
      goto LABEL_20;
    }
  LABEL_23:
    if ((v11 & 1) != 0 && ++v6 != 8) {
      continue;
    }
    return;
  }
}

#pragma GCC visibility pop
