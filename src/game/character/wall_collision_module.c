#include "decomp/pseudo_helpers.h"

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
