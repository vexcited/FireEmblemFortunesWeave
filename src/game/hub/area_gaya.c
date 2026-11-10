#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int128 GameData_1a831c0;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_da89a0();
float32x4_t* AreaGaya_ff8f70(float32x4_t* result, __int64* a2, __int64** a3);

float32x4_t* AreaGaya_ff8f70(float32x4_t* result, __int64* a2, __int64** a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64* v4;
  float32x4_t* v7;
  float32x4_t v8;
  __int64 v9;
  __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float32x4_t v25;

  v3 = *a3;
  v4 = a3[1];
  if (*a3 != v4) {
    v7 = result;
    v8 = COERCE_AS(float32x4_t, GameData_1a831c0);
    do {
      v10 = *v3;
      if (*v3 != 0) {
        v11 = *v7;
        v25 = vaddq_f32(
            *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v10 + 24) + 16LL) + 560LL),
            v8);
        v12 = vsubq_f32(v25, v11);
        v13 = vmulq_f32(v12, v12);
        LANES128(v13).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                .n64_f32[0] < 0x1.2000000000000p+3f) {
          v15 = (__int64*)a2[1];
          v14 = a2[2];
          if ((unsigned __int64)v15 < v14) {
            *v15 = v10;
            v9 = (__int64)(v15 + 1);
          }
          else {
            v16 = *a2;
            v17 = (__int64)v15 - *a2;
            v18 = (v17 >> 3) + 1;
            if (v18 >> 61 != 0) {
              GameRoutine_da89a0();
            }
            v19 = v14 - v16;
            if (v19 >> 2 > v18) {
              v18 = v19 >> 2;
            }
            if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
              v20 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v20 = v18;
            }
            if (v20 != 0) {
              if (v20 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v21 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
              v10 = *v3;
            }
            else {
              v21 = 0;
            }
            v22 = v21 + 8 * v20;
            v23 = v21 + v17 - 8 * (v17 >> 3);
            *(_QWORD*)(v21 + v17) = v10;
            v9 = v21 + v17 + 8;
            memcpy(v23, v16, v17);
            *a2 = v23;
            a2[1] = v9;
            a2[2] = v22;
            if (v16 != 0) {
              v24 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v24 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
            }
          }
          a2[1] = v9;
          *v3 = 0;
          result = AreaGaya_ff8f70(&v25, a2, a3);
          v8 = COERCE_AS(float32x4_t, GameData_1a831c0);
        }
      }
      ++v3;
    } while (v3 != v4);
  }
  return result;
}

#pragma GCC visibility pop
