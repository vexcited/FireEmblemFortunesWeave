#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MeshData_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 MeshData_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "MeshData_DeletingDestructor");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64* GameData_212f8a8[15];
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_f15920();
void MeshData_f555a0(float32x4_t* a1, float32x4_t* a2, unsigned __int64* a3,
                     unsigned __int64* a4);
unsigned __int64 MeshData_f557a0(__int64 a1);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MeshData_DeletingDestructor(_QWORD* a1);

void MeshData_f555a0(float32x4_t* a1, float32x4_t* a2, unsigned __int64* a3,
                     unsigned __int64* a4)
{

#pragma clang fp contract(off)
  float32x4_t v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  float32x4_t* v8;
  unsigned __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v21;
  __int64 v22;
  float32x4_t* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 n128_u64;
  __int64* v30;
  float32x4_t* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  float32x4_t* v34;
  void (**v35)(__int64);
  __int64 v36;
  float32x4_t v37;
  unsigned __int64 v38;
  unsigned __int64 v39;

  v5 = vsubq_f32(*a2, a1[11]);
  v6 = *a3;
  v38 = *a4;
  v39 = a4[1];
  v8 = (float32x4_t*)LANES128(a1[6]).n128_u64[1];
  v7 = LANES128(a1[7]).n128_u64[0];
  if ((unsigned __int64)v8 >= v7) {
    v11 = LANES128(a1[6]).n128_u64[0];
    v12 = (char*)v8 - v11;
    v13 = (__int64)((__int64)v8 - v11) >> 6;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 58 != 0) {
      GameRoutine_f15920();
    }
    v15 = v7 - v11;
    v16 = LANES128(a1[6]).n128_u64[0];
    v37 = v5;
    if (v15 >> 5 > v14) {
      v14 = v15 >> 5;
    }
    v17 = (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFC0LL;
    v18 = 0x3FFFFFFFFFFFFFFLL;
    if (!v17) {
      v18 = v14;
    }
    if (v18 >> 58 != 0) {
      GameRoutine_60a210();
    }
    v19 = v18 << 6;
    v21 = fw_memory_g_heap_manager_ptr;
    v22 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v18 << 6, 16, 0);
    v23 = (float32x4_t*)&v12[v22];
    v24 = v22 + v19;
    v25 = v16;
    v26 = GameData_212f8a8[0];
    v27 = *a4;
    v28 = a4[1];
    LANES128(v23[2]).n128_u64[0] = v6;
    n128_u64 = (unsigned __int64)LANES128(v23[-4 * v13]).n128_u64;
    v9 = (unsigned __int64)LANES128(v23[4]).n128_u64;
    v30 = v26 + 2;
    LANES128(v23[3]).n128_u64[0] = v27;
    LANES128(v23[3]).n128_u64[1] = v28;
    LANES128(*(v23)).n128_u64[0] = (unsigned __int64)v30;
    v23[1] = v37;
    if ((float32x4_t*)v16 != v8) {
      v31 = (float32x4_t*)v16;
      v32 = (_QWORD*)n128_u64;
      do {
        *v32 = v30;
        v32[3] = LANES128(v31[1]).n128_u64[1];
        v32[2] = LANES128(v31[1]).n128_u64[0];
        v32[4] = LANES128(v31[2]).n128_u64[0];
        v32[7] = LANES128(v31[3]).n128_u64[1];
        v33 = LANES128(v31[3]).n128_u64[0];
        v31 += 4;
        v32[6] = v33;
        v32 += 8;
      } while (v31 != v8);
      v34 = (float32x4_t*)v16;
      do {
        v35 = (void (**)(__int64))LANES128(*(v34)).n128_u64[0];
        v34 += 4;
        (*v35)(v25);
        v25 = (__int64)v34;
      } while (v34 != v8);
      v25 = LANES128(a1[6]).n128_i64[0];
    }
    LANES128(a1[6]).n128_u64[0] = n128_u64;
    LANES128(a1[6]).n128_u64[1] = v9;
    LANES128(a1[7]).n128_u64[0] = v24;
    if (v25 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v21 + v36, v25);
    }
  }
  else {
    v9 = (unsigned __int64)LANES128(v8[4]).n128_u64;
    v10 = GameData_212f8a8[0];
    v8[1] = v5;
    LANES128(v8[2]).n128_u64[0] = v6;
    LANES128(*(v8)).n128_u64[0] = (unsigned __int64)(v10 + 2);
    LANES128(v8[3]).n128_u64[0] = v38;
    LANES128(v8[3]).n128_u64[1] = v39;
  }
  LANES128(a1[6]).n128_u64[1] = v9;
}

unsigned __int64 MeshData_f557a0(__int64 a1)
{
  __int128 v1;
  unsigned __int64 v3;
  unsigned __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int128 v9;
  __int128 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  float32x2_t v13;
  unsigned __int64 v14;
  unsigned __int64 v15;

  v1 = *(_OWORD*)(a1 + 176);
  v3 = (((((unsigned int)v1 + 0x1FB68949BF00A3D6LL) ^ 0x9E3779B97F4A7C18LL)
         << 12) +
        ((((unsigned int)v1 + 0x1FB68949BF00A3D6LL) ^ 0x9E3779B97F4A7C18LL) >>
         4) +
        DWORD1(v1) - 0x61C8864680B583EBLL) ^
       ((unsigned int)v1 + 0x1FB68949BF00A3D6LL) ^ 0x9E3779B97F4A7C18LL;
  result = ((v3 << 12) + (v3 >> 4) + DWORD2(v1) - 0x61C8864680B583EBLL) ^ v3;
  v5 = *(_QWORD*)(a1 + 96);
  v6 = *(_QWORD*)(a1 + 104);
  if (v6 != v5) {
    v7 = (v6 - v5) >> 6;
    v8 = v5 + 32;
    do {
      v9 = *(_OWORD*)(v8 - 16);
      v10 = *(_OWORD*)(v8 + 16);
      --v7;
      v11 =
          ((result << 12) - 0x61C8864680B583EBLL + (result >> 4) + 5) ^ result;
      v12 =
          ((v11 << 12) - 0x61C8864680B583EBLL + (v11 >> 4) + (unsigned int)v9) ^
          v11;
      PSEUDO_LOW_LANE64(v13, n64_u64, *(unsigned __int64*)v8);
      v8 += 64;
      v14 = (((((v12 << 12) - 0x61C8864680B583EBLL + (v12 >> 4) + DWORD1(v9)) ^
               v12)
              << 12) -
             0x61C8864680B583EBLL +
             ((((v12 << 12) - 0x61C8864680B583EBLL + (v12 >> 4) + DWORD1(v9)) ^
               v12) >>
              4) +
             DWORD2(v9)) ^
            ((v12 << 12) - 0x61C8864680B583EBLL + (v12 >> 4) + DWORD1(v9)) ^
            v12;
      v15 =
          ((v14 << 12) - 0x61C8864680B583EBLL + (v14 >> 4) +
           COERCE_UNSIGNED_INT(
               (float)((float)(vmuls_lane_f32(0x1.6000000000000p+3f,
                                              *(float32x2_t*)&v10, 1) +
                               (float)(*(float*)&v10 * 0x1.a000000000000p+3f)) +
                       (float)(0x1.c000000000000p+2f * *((float*)&v10 + 2))) +
               (float)(0x1.8000000000000p+1f * *((float*)&v10 + 3)))) ^
          v14;
      result = ((v15 << 12) - 0x61C8864680B583EBLL + (v15 >> 4) +
                COERCE_UNSIGNED_INT(
                    vmuls_lane_f32(0x1.8000000000000p+1f, v13, 1) +
                    (float)(LANES64(v13).n64_f32[0] * 0x1.c000000000000p+2f))) ^
               v15;
    } while (v7 != 0);
  }
  return result;
}

void MeshData_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (**v10)(_QWORD);
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = a1[15];
  *a1 = game_map_MeshData_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[16] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = a1[12];
  if (v6 != 0) {
    v7 = a1[13];
    if (v6 == v7) {
      goto LABEL_11;
    }
    v8 = (void (***)(_QWORD))(v7 - 64);
    v9 = (void (***)(_QWORD))(v7 - 64);
    do {
      v10 = *v9;
      v9 -= 8;
      (*v10)(v8);
      v11 = v8 == (void (***)(_QWORD))v6;
      v8 = v9;
    } while (!v11);
    v12 = a1[12];
    a1[13] = v6;
    v6 = v12;
    if (v12 != 0) {
    LABEL_11:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v13, v6);
    }
  }
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v14 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v14, (__int64)a1);
}

#pragma GCC visibility pop
