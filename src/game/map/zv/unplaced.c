#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_d74a00(PSEUDO_X8, float*);
__int64 IDeploy_7480e0(__int64, int, int, int*);
extern __int64* GameData_212eda8[10];
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_map_zv_f56340(__int64 a1, int a2);

void game_map_zv_f56340(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
    int v14;
    char gap20_[4];
    __int64 v15;
    __int64 v16;
    __int64 v17;
    int v18;
  } v12_;
  struct {
    _BYTE v19[24];
    int v20;
    int v21;
  } v19_;

  v12_.v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212eda8[0] + 8) + 280LL);
  game_d74a00((void*)((__int64)v19_.v19), (float*)&v12_.v12);
  v4 = v19_.v20;
  v5 = v19_.v21;
  v12_.v16 = 0;
  v12_.v17 = 0;
  v12_.v15 = 0;
  v12_.v14 = 0;
  v12_.v18 = 0;
  WORD2(v12_.v12) = 2048;
  LODWORD(v12_.v12) = 171020288;
  v12_.v13 = 0x1000000FFLL;
  if (a2 == 1) {
    v6 = 0;
    v7 = 255;
    v8 = 8;
    v9 = 1;
  }
  else {
    IDeploy_7480e0(*(_QWORD*)(a1 + 32), v19_.v20, v19_.v21, (int*)&v12_.v12);
    v6 = BYTE4(v12_.v12);
    v8 = BYTE5(v12_.v12);
    v7 = v12_.v13;
    v9 = HIDWORD(v12_.v13);
  }
  if (v4 != *(_DWORD*)(a1 + 8) || v5 != *(_DWORD*)(a1 + 12) ||
      v7 != *(_DWORD*)(a1 + 16) || v6 != *(unsigned __int8*)(a1 + 20) ||
      v8 != *(unsigned __int8*)(a1 + 21) || v9 != *(_DWORD*)(a1 + 24)) {
    v10 = *(_QWORD*)(a1 + 48);
    *(_DWORD*)(a1 + 8) = v4;
    *(_DWORD*)(a1 + 12) = v5;
    *(_DWORD*)(a1 + 16) = v7;
    *(_BYTE*)(a1 + 20) = v6;
    *(_BYTE*)(a1 + 21) = v8;
    *(_DWORD*)(a1 + 24) = v9;
    IDeploy_7480e0(v10, v4, v5, (int*)&v12_.v12);
    *(_QWORD*)(a1 + 64) = 0;
  }
  if (v12_.v15 != 0) {
    v12_.v16 = v12_.v15;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v12_.v15);
  }
}

#pragma GCC visibility pop
