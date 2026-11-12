#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_747800(_QWORD);
__int64 GameRoutine_74c480(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201f148[])();
extern __int64 GameData_2240090;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22407a0;
__int64 AIDeploy_Destructor_alt1(_QWORD* a1) __asm__("AIDeploy_Destructor");
__int64 AiDeploy_1274c20_alt1(__int64 a1) __asm__("AiDeploy_1274c20");
__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_749500(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74b3c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74cd60(_QWORD);
__int64 AIDeploy_1274c80_alt1(__int64 result, __int64 a2, unsigned int a3,
                              _DWORD* a4) __asm__("AIDeploy_1274c80");
__int64 AIDeploy_1274e10_alt1(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5,
                              _DWORD* a6) __asm__("AIDeploy_1274e10");
__int64 AIDeploy_1274f90_alt1(_QWORD* a1, __int64 a2, unsigned int a3,
                              _DWORD* a4) __asm__("AIDeploy_1274f90");
__int64 AIDeploy_1275160_alt1(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5,
                              _DWORD* a6) __asm__("AIDeploy_1275160");
__int64 IDeploy_748f80(__int64, __int64, unsigned int, unsigned int, int,
                       unsigned int*);
void Deploy_747800(_QWORD*);
void GameHr_749500(__int64, __int64, int*);
void GameRoutine_74b3c0_alt1(_QWORD*, __int64,
                             _DWORD*) __asm__("GameRoutine_74b3c0");
void GameRoutine_74c480_alt1(__int64*) __asm__("GameRoutine_74c480");
void GameRoutine_74cd60_alt1(__int64*) __asm__("GameRoutine_74cd60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AIDeploy_Destructor(_QWORD* a1);
void AiDeploy_1274c20(__int64 a1);
void AIDeploy_1274c80(_QWORD* a1, __int64 a2, int a3, unsigned int* a4);
void AIDeploy_1274e10(_QWORD* a1, __int64 a2, unsigned int a3, unsigned int a4,
                      int a5, unsigned int* a6);
void AIDeploy_1274f90(_QWORD* a1, __int64 a2, int a3, unsigned int* a4);
void AIDeploy_1275160(_QWORD* a1, __int64 a2, unsigned int a3, unsigned int a4,
                      int a5, unsigned int* a6);

void AIDeploy_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  GameRoutine_74c480_alt1(a1 + 2616);
  v2 = a1[2611];
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[2612] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v2);
  }
  v6 = a1[2284];
  if (v6 != 0) {
    v7 = *v3;
    a1[2285] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  v9 = a1[2276];
  if (v9 != 0) {
    v10 = *v3;
    a1[2277] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v10 + v11, v9);
  }
  v12 = a1[1949];
  if (v12 != 0) {
    v13 = *v3;
    a1[1950] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v13 + v14, v12);
  }
  v15 = a1[1941];
  if (v15 != 0) {
    v16 = *v3;
    a1[1942] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v16 + v17, v15);
  }
  v18 = a1[1614];
  if (v18 != 0) {
    v19 = *v3;
    a1[1615] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v19 + v20, v18);
  }
  a1[1609] = GameData_201f148;
  if ((_QWORD*)GameData_2240090 == a1) {
    GameData_2240090 = 0;
    GameData_22407a0 = 0;
  }
  Deploy_747800(a1);
}

void AiDeploy_1274c20(__int64 a1)
{
  __int64 v2;

  AIDeploy_Destructor((_QWORD*)(a1 - 12872));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1 - 12872);
}

void AIDeploy_1274c80(_QWORD* a1, __int64 a2, int a3, unsigned int* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;

  if (a2 != 0) {
    IDeploy_748f80((__int64)a1, a2, *(char*)(a2 + 584), *(char*)(a2 + 585), a3,
                   a4);
  }
  v8 = a1[1344];
  v9 = a1[1343];
  v10 = a1[1610];
  v11 = ((v8 - v9) << 6) - 1;
  if (v8 == v9) {
    v11 = 0;
  }
  v12 = a1[1347] + a1[1346];
  if (v11 == v12) {
    GameRoutine_74cd60_alt1(a1 + 1342);
    v9 = a1[1343];
    v12 = a1[1347] + a1[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v12 >> 9)) + 8 * (v12 & 0x1FF)) = a1[1];
  a1[1] = v10;
  v13 = a1[1347] + 1LL;
  a1[1347] = v13;
  v29 = *a4 | 0x8000;
  if (a2 != 0) {
    IDeploy_748f80((__int64)a1, a2, *(char*)(a2 + 584), *(char*)(a2 + 585), a3,
                   (unsigned int*)&v29);
    v13 = a1[1347];
  }
  v14 = a1[1346];
  v15 = a1[1343];
  v16 = a1[1344];
  v17 = v13 - 1;
  v18 = v13 - 1 + v14;
  v19 = v16 == v15;
  v20 = v13 + v14;
  v21 = v18 >> 9;
  v22 = (v16 - v15) << 6;
  v23 = v18 & 0x1FF;
  v24 = *(_QWORD*)(v15 + 8 * v21);
  v25 = v22 - 1;
  if (v19) {
    v25 = 0;
  }
  v26 = *(_QWORD*)(v24 + 8 * v23);
  a1[1347] = v17;
  a1[1] = v26;
  if ((unsigned __int64)(v25 - v20 + 1) >= 0x400) {
    v27 = *(_QWORD*)(v16 - 8);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v27);
      v16 = a1[1344];
    }
    a1[1344] = v16 - 8;
  }
}

void AIDeploy_1274e10(_QWORD* a1, __int64 a2, unsigned int a3, unsigned int a4,
                      int a5, unsigned int* a6)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;

  IDeploy_748f80((__int64)a1, a2, a3, a4, a5, a6);
  v12 = a1[1344];
  v13 = a1[1343];
  v14 = a1[1610];
  v15 = ((v12 - v13) << 6) - 1;
  if (v12 == v13) {
    v15 = 0;
  }
  v16 = a1[1347] + a1[1346];
  if (v15 == v16) {
    GameRoutine_74cd60_alt1(a1 + 1342);
    v13 = a1[1343];
    v16 = a1[1347] + a1[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v13 + 8 * (v16 >> 9)) + 8 * (v16 & 0x1FF)) = a1[1];
  a1[1] = v14;
  ++a1[1347];
  v30 = *a6 | 0x8000;
  IDeploy_748f80((__int64)a1, a2, a3, a4, a5, (unsigned int*)&v30);
  v17 = a1[1347];
  v18 = a1[1346];
  v19 = a1[1343];
  v20 = a1[1344];
  v21 = v20 == v19;
  v22 = v17 - 1 + v18;
  v23 = v22 >> 9;
  v24 = v22 & 0x1FF;
  v25 = ((v20 - v19) << 6) - 1;
  v26 = *(_QWORD*)(v19 + 8 * v23);
  if (v21) {
    v25 = 0;
  }
  v27 = *(_QWORD*)(v26 + 8 * v24);
  a1[1347] = v17 - 1;
  a1[1] = v27;
  if ((unsigned __int64)(v25 - (v17 + v18) + 1) >= 0x400) {
    v28 = *(_QWORD*)(v20 - 8);
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
      v20 = a1[1344];
    }
    a1[1344] = v20 - 8;
  }
}

void AIDeploy_1274f90(_QWORD* a1, __int64 a2, int a3, unsigned int* a4)
{
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;

  if ((*(_DWORD*)(a2 + 1976) & 0x40) != 0) {
    v8 = 0;
  }
  else {
    v8 = a3;
  }
  IDeploy_748f80((__int64)a1, a2, *(char*)(a2 + 584), *(char*)(a2 + 585), v8,
                 a4);
  GameRoutine_74b3c0_alt1(a1, a2, a4);
  GameHr_749500((__int64)a1, a2, (int*)a4);
  v9 = a1[1344];
  v10 = a1[1343];
  v11 = a1[1610];
  v12 = ((v9 - v10) << 6) - 1;
  if (v9 == v10) {
    v12 = 0;
  }
  v13 = a1[1347] + a1[1346];
  if (v12 == v13) {
    GameRoutine_74cd60_alt1(a1 + 1342);
    v10 = a1[1343];
    v13 = a1[1347] + a1[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v10 + 8 * (v13 >> 9)) + 8 * (v13 & 0x1FF)) = a1[1];
  a1[1] = v11;
  ++a1[1347];
  v14 = *(char*)(a2 + 584);
  v15 = *(char*)(a2 + 585);
  v30 = *a4 | 0x8000;
  if ((*(_DWORD*)(a2 + 1976) & 0x40) != 0) {
    v16 = 0;
  }
  else {
    v16 = a3;
  }
  IDeploy_748f80((__int64)a1, a2, v14, v15, v16, &v30);
  GameRoutine_74b3c0_alt1(a1, a2, &v30);
  GameHr_749500((__int64)a1, a2, (int*)&v30);
  v17 = a1[1347];
  v18 = a1[1346];
  v19 = a1[1343];
  v20 = a1[1344];
  v21 = v20 == v19;
  v22 = v17 - 1 + v18;
  v23 = v22 >> 9;
  v24 = v22 & 0x1FF;
  v25 = ((v20 - v19) << 6) - 1;
  v26 = *(_QWORD*)(v19 + 8 * v23);
  if (v21) {
    v25 = 0;
  }
  v27 = *(_QWORD*)(v26 + 8 * v24);
  a1[1347] = v17 - 1;
  a1[1] = v27;
  if ((unsigned __int64)(v25 - (v17 + v18) + 1) >= 0x400) {
    v28 = *(_QWORD*)(v20 - 8);
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
      v20 = a1[1344];
    }
    a1[1344] = v20 - 8;
  }
}

void AIDeploy_1275160(_QWORD* a1, __int64 a2, unsigned int a3, unsigned int a4,
                      int a5, unsigned int* a6)
{
  int v6;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;

  v6 = a5;
  if ((*(_DWORD*)(a2 + 1976) & 0x40) != 0) {
    a5 = 0;
  }
  IDeploy_748f80((__int64)a1, a2, a3, a4, a5, a6);
  GameRoutine_74b3c0_alt1(a1, a2, a6);
  GameHr_749500((__int64)a1, a2, (int*)a6);
  v12 = a1[1344];
  v13 = a1[1343];
  v14 = a1[1610];
  v15 = ((v12 - v13) << 6) - 1;
  if (v12 == v13) {
    v15 = 0;
  }
  v16 = a1[1347] + a1[1346];
  if (v15 == v16) {
    GameRoutine_74cd60_alt1(a1 + 1342);
    v13 = a1[1343];
    v16 = a1[1347] + a1[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v13 + 8 * (v16 >> 9)) + 8 * (v16 & 0x1FF)) = a1[1];
  a1[1] = v14;
  ++a1[1347];
  v31 = *a6 | 0x8000;
  if ((*(_DWORD*)(a2 + 1976) & 0x40) != 0) {
    v17 = 0;
  }
  else {
    v17 = v6;
  }
  IDeploy_748f80((__int64)a1, a2, a3, a4, v17, &v31);
  GameRoutine_74b3c0_alt1(a1, a2, &v31);
  GameHr_749500((__int64)a1, a2, (int*)&v31);
  v18 = a1[1347];
  v19 = a1[1346];
  v20 = a1[1343];
  v21 = a1[1344];
  v22 = v21 == v20;
  v23 = v18 - 1 + v19;
  v24 = v23 >> 9;
  v25 = v23 & 0x1FF;
  v26 = ((v21 - v20) << 6) - 1;
  v27 = *(_QWORD*)(v20 + 8 * v24);
  if (v22) {
    v26 = 0;
  }
  v28 = *(_QWORD*)(v27 + 8 * v25);
  a1[1347] = v18 - 1;
  a1[1] = v28;
  if ((unsigned __int64)(v26 - (v18 + v19) + 1) >= 0x400) {
    v29 = *(_QWORD*)(v21 - 8);
    if (v29 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v29);
      v21 = a1[1344];
    }
    a1[1344] = v21 - 8;
  }
}

#pragma GCC visibility pop
