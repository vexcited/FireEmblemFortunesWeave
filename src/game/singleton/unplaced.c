#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d60750(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 GameData_21c9758;
extern __int64 GameData_21d96b8;
extern __int64 GameData_220b6f0;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_d28710();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_singleton_d28340();

void game_singleton_d28340()
{

#pragma clang fp contract(off)
  _QWORD* v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  float32x4_t* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  float32x4_t v9;
  unsigned __int32 v10;
  float32x4_t v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  float32x4_t* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float32x4_t v26;

  v0 = (_QWORD*)GameData_21c9758;
  if (*(_DWORD*)(GameData_21d96b8 + 8) != 1 ||
      (v1 = *(__int64**)(GameData_220b6f0 + 32),
       v2 = *(__int64**)(GameData_220b6f0 + 40), v1 == v2)) {
    v3 = 0;
    v4 = nullptr;
    v5 = 0;
  }
  else {
    v3 = 0;
    v4 = nullptr;
    v5 = 0;
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v7 = *v1;
      v8 = *(_QWORD*)(*(_QWORD*)(*v1 + 8) + 328LL);
      GameRoutine_d60750(v8);
      if (*(float*)(v8 + 376) > 0x0.0p+0f) {
        LANES128(v9).n128_u32[0] = 0;
        LANES128(v9).n128_u32[3] = 0;
        v10 = *(_DWORD*)(v7 + 532);
        *(unsigned __int64*)((char*)LANES128(v9).n128_u64 + 4) =
            *(unsigned int*)(v7 + 548);
        v11 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v7 + 16) + 560LL), v9);
        LANES128(v11).n128_u32[3] = 0;
        if ((unsigned __int64)v4 < v5) {
          *v4 = v11;
          LANES128(v4[1]).n128_u32[0] = v10;
          LANES128(v4[1]).n128_u8[4] = 0;
          v4 += 2;
        }
        else {
          v12 = (char*)v4 - v3;
          v13 = ((__int64)v4 - v3) >> 5;
          v14 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 59 != 0) {
            GameRoutine_d28710();
          }
          v26 = v11;
          if ((__int64)(v5 - v3) >> 4 > v14) {
            v14 = (__int64)(v5 - v3) >> 4;
          }
          if (v5 - v3 >= 0x7FFFFFFFFFFFFFE0LL) {
            v14 = 0x7FFFFFFFFFFFFFFLL;
          }
          if (v14 >> 59 != 0) {
            GameRoutine_60a210();
          }
          v15 = 32 * v14;
          v16 = fw_memory_HeapManager_Allocate(*v6, 32 * v14, 16, 0);
          v17 = (float32x4_t*)&v12[v16];
          v18 = (__int64)&v12[v16 + -32 * v13];
          LANES128(v17[1]).n128_u32[0] = v10;
          LANES128(v17[1]).n128_u8[4] = 0;
          *v17 = v26;
          if ((float32x4_t*)v3 != v4) {
            v19 = v3;
            v20 = v18;
            do {
              *(_QWORD*)(v20 + 8) = *(_QWORD*)(v19 + 8);
              *(_QWORD*)v20 = *(_QWORD*)v19;
              v21 = *(_DWORD*)(v19 + 16);
              v22 = *(_BYTE*)(v19 + 20);
              v19 += 32;
              *(_BYTE*)(v20 + 20) = v22;
              *(_DWORD*)(v20 + 16) = v21;
              v20 += 32;
            } while ((float32x4_t*)v19 != v4);
          }
          v5 = v16 + v15;
          v4 = v17 + 2;
          if (v3 != 0) {
            v23 = 128;
            if (*(_QWORD*)(*v6 + 200) == 0) {
              v23 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v23, v3);
          }
          v3 = v18;
        }
      }
      v1 += 2;
    } while (v1 != v2);
  }
  v24 = v0[18];
  if (v24 != 0) {
    v0[19] = v24;
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  v24);
  }
  v0[18] = v3;
  v0[19] = v4;
  v0[20] = v5;
}

#pragma GCC visibility pop
