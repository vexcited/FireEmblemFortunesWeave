#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MeshData_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 MeshData_DeletingDestructor(_QWORD* a1);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64* GameData_212f8a8[15];
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_f15920();
void MeshData_f555a0(float32x4_t* a1, float32x4_t* a2, unsigned __int64* a3,
                     unsigned __int64* a4);

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
  unsigned __int64 v25;
  __int64* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 n128_u64;
  __int64* v30;
  float32x4_t* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  float32x4_t* v34;
  void (**v35)(unsigned __int64);
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
        v35 = (void (**)(unsigned __int64))LANES128(*(v34)).n128_u64[0];
        v34 += 4;
        (*v35)(v25);
        v25 = (unsigned __int64)v34;
      } while (v34 != v8);
      v25 = LANES128(a1[6]).n128_u64[0];
    }
    LANES128(a1[6]).n128_u64[0] = n128_u64;
    LANES128(a1[6]).n128_u64[1] = v9;
    LANES128(a1[7]).n128_u64[0] = v24;
    if (v25 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v36);
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

__n128 MeshData_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  void (***v6)(_QWORD);
  void (***v7)(_QWORD);
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
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = (void (***)(_QWORD))a1[12];
  if (v6 != nullptr) {
    v7 = (void (***)(_QWORD))a1[13];
    if (v6 == v7) {
      goto LABEL_11;
    }
    v8 = v7 - 8;
    v9 = v7 - 8;
    do {
      v10 = *v9;
      v9 -= 8;
      (*v10)(v8);
      v11 = v8 == v6;
      v8 = v9;
    } while (!v11);
    v12 = a1[12];
    a1[13] = v6;
    if (v12 != 0) {
    LABEL_11:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
    }
  }
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v14 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
}

#pragma GCC visibility pop
