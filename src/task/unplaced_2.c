#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_17d7840(PSEUDO_X8, __int64, int,
                                                    unsigned __int8*);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64 GameRoutine_17d70b0(unsigned __int8*);
__int64 GameRoutine_64be60();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int128 GameData_1a83620;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void GameRoutine_358c();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
float task_649cd0(__int64 a1, float32x4_t* a2);
__attribute__((swiftcall)) void task_17d8560(PSEUDO_X8 x8_, int a1,
                                             unsigned __int8* a2, _QWORD* a3);

float task_649cd0(__int64 a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  float32x4_t v2;
  int8x16_t v3;

  v2 = *a2;
  if ((unsigned int)(*(_DWORD*)(a1 + 13240) - 3) <= 3) {
    v3 = vmulq_f32(v2, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v3).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v3, v3, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0])))
            .n64_u64[0];
    PSEUDO_LOW_LANE128(
        v2, n128_u32,
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0])))
            .n64_u32[0]);
  }
  return LANES128(v2).n128_f32[0];
}

__attribute__((swiftcall)) void task_17d8560(PSEUDO_X8 x8_, int a1,
                                             unsigned __int8* a2, _QWORD* a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char* v11;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22[2];
    char* v23;
  } v22_;
  _BYTE v24[13];
  _QWORD v25[9];
  struct {
    _QWORD v26[2];
    unsigned __int64 v27;
    __int64 (*v28)();
    __int64 v29;
  } v26_;
  struct {
    _BYTE v30[256];
    _BYTE* v31;
  } v30_;
  __int64* v32[4];
  struct {
    _BYTE v33[8];
    char v34;
  } v33_;
  struct {
    _QWORD v35[2];
    int v36;
    char gap492_[4];
    __int64 v37;
    __int64 v38;
  } v35_;

  v7 = GameRoutine_17d70b0(a2);
  v24[12] = 0;
  v24[0] = 2;
  *(_QWORD*)&v24[4] = 0x200000000LL;
  if (a3 == nullptr) {
    goto LABEL_12;
  }
  *(_QWORD*)v24 = *a3;
  *(_QWORD*)&v24[5] = *(_QWORD*)((char*)a3 + 5);
  if (*(int*)&v24[4] <= 8) {
    if ((*(_DWORD*)&v24[4] & 0x80000000) == 0) {
      goto LABEL_7;
    }
    v8 = 0;
  }
  else {
    v8 = 8;
  }
  *(_DWORD*)&v24[4] = v8;
LABEL_7:
  if (*(int*)&v24[8] <= 8) {
    if (*(int*)&v24[8] > 0) {
      goto LABEL_12;
    }
    v9 = 1;
  }
  else {
    v9 = 8;
  }
  *(_DWORD*)&v24[8] = v9;
LABEL_12:
  if (a1 >= 0) {
    v10 = (unsigned int)a1;
  }
  else {
    v10 = (unsigned int)-a1;
  }
  if (a1 >= 0) {
    v11 = &GameData_1a9f09e;
  }
  else {
    v11 = "-";
  }
  GameRoutine_17d7840((void*)(v22_.v22), v10, v7, v24);
  v25[0] = &GameData_1a9f09e;
  v25[1] = 0;
  v26_.v29 = 0;
  v25[2] = v11;
  v35_.v36 = 0;
  v26_.v26[0] = v30_.v30;
  v26_.v26[1] = 256;
  v26_.v27 = 0;
  v26_.v28 = GameRoutine_64be60;
  v35_.v35[0] = "{}{}{}";
  v35_.v35[1] = "";
  v12 = v22_.v23;
  v13 = (unsigned __int64)LOBYTE(v22_.v22[0]) >> 1;
  v30_.v31 = v30_.v30;
  v33_.v33[0] = 0;
  v33_.v34 = 0;
  if ((v22_.v22[0] & 1) != 0) {
    v13 = v22_.v22[1];
  }
  else {
    v12 = (char*)v22_.v22 + 1;
  }
  v25[4] = v12;
  v25[5] = v13;
  v25[6] = 13709;
  v35_.v37 = 0;
  v35_.v38 = 3;
  v32[2] = v25;
  v32[3] = (_QWORD*)(&GameRoutine_358c + 1);
  v32[0] = v26_.v26;
  v32[1] = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
  GameRoutine_6380e0((__int64)v35_.v35, v32);
  if (v33_.v34 == 1) {
    std___1_locale_Destroy_locale((__int64)v33_.v33);
  }
  v14 = v26_.v27;
  if (v26_.v27 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v15 = (__int64)v30_.v31;
  if (v26_.v27 >= 0x17) {
    if ((v26_.v27 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v26_.v27 | 7) + 1;
    }
    v18 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17, 16, 0);
    a4[1] = v14;
    a4[2] = v18;
    *a4 = v17 | 1;
    v16 = (char*)v18;
  }
  else {
    *(_BYTE*)a4 = 2 * v26_.v27;
    v16 = (char*)a4 + 1;
    if (v14 == 0) {
      goto LABEL_32;
    }
  }
  memmove((__int64)v16, v15, v14);
LABEL_32:
  v19 = v30_.v31;
  v16[v14] = 0;
  if (v19 != v30_.v30 && v19 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  (__int64)v19);
  }
  if ((v22_.v22[0] & 1) != 0 && v22_.v23 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  (__int64)v22_.v23);
  }
}

#pragma GCC visibility pop
