#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_747800(_QWORD);
__int64 GameRoutine_74c480(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201f148[])();
extern __int64 GameData_2240090;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22407a0;
__int64 AIDeploy_Destructor(_QWORD* a1);
__int64 AiDeploy_1274c20(__int64 a1);
__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_749500(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74b3c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74cd60(_QWORD);
__int64 AIDeploy_1274c80(__int64 result, __int64 a2, unsigned int a3,
                         _DWORD* a4);
__int64 AIDeploy_1274e10(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, _DWORD* a6);
__int64 AIDeploy_1274f90(_QWORD* a1, __int64 a2, unsigned int a3, _DWORD* a4);
__int64 AIDeploy_1275160(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, _DWORD* a6);

__int64 AIDeploy_Destructor(_QWORD* a1)
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

  GameRoutine_74c480(a1 + 2616);
  v2 = a1[2611];
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[2612] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[2284];
  if (v6 != 0) {
    v7 = *v3;
    a1[2285] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = a1[2276];
  if (v9 != 0) {
    v10 = *v3;
    a1[2277] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = a1[1949];
  if (v12 != 0) {
    v13 = *v3;
    a1[1950] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14);
  }
  v15 = a1[1941];
  if (v15 != 0) {
    v16 = *v3;
    a1[1942] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17);
  }
  v18 = a1[1614];
  if (v18 != 0) {
    v19 = *v3;
    a1[1615] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(v19 + v20);
  }
  a1[1609] = GameData_201f148;
  if ((_QWORD*)GameData_2240090 == a1) {
    GameData_2240090 = 0;
    GameData_22407a0 = 0;
  }
  return GameRoutine_747800(a1);
}

__int64 AiDeploy_1274c20(__int64 a1)
{
  __int64 v1;

  AIDeploy_Destructor((_QWORD*)(a1 - 12872));
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

__int64 AIDeploy_1274c80(__int64 result, __int64 a2, unsigned int a3,
                         _DWORD* a4)
{
  _QWORD* v7;
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
  int v28;

  v7 = (_QWORD*)result;
  if (a2 != 0) {
    result = GameRoutine_748f80(result, a2, (unsigned int)*(char*)(a2 + 584),
                                (unsigned int)*(char*)(a2 + 585), a3, a4);
  }
  v8 = v7[1344];
  v9 = v7[1343];
  v10 = v7[1610];
  v11 = ((v8 - v9) << 6) - 1;
  if (v8 == v9) {
    v11 = 0;
  }
  v12 = v7[1347] + v7[1346];
  if (v11 == v12) {
    result = GameRoutine_74cd60(v7 + 1342);
    v9 = v7[1343];
    v12 = v7[1347] + v7[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v12 >> 9)) + 8 * (v12 & 0x1FF)) = v7[1];
  v7[1] = v10;
  v13 = v7[1347] + 1LL;
  v7[1347] = v13;
  v28 = *a4 | 0x8000;
  if (a2 != 0) {
    result = GameRoutine_748f80(v7, a2, (unsigned int)*(char*)(a2 + 584),
                                (unsigned int)*(char*)(a2 + 585), a3, &v28);
    v13 = v7[1347];
  }
  v14 = v7[1346];
  v15 = v7[1343];
  v16 = v7[1344];
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
  v7[1347] = v17;
  v7[1] = v26;
  if ((unsigned __int64)(v25 - v20 + 1) >= 0x400) {
    if (*(_QWORD*)(v16 - 8) != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
      v16 = v7[1344];
    }
    v7[1344] = v16 - 8;
  }
  return result;
}

__int64 AIDeploy_1274e10(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, _DWORD* a6)
{
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 result;
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
  int v30;

  v7 = a5;
  v8 = a4;
  v9 = a3;
  GameRoutine_748f80(a1, a2, a3, a4, a5, a6);
  v12 = a1[1344];
  v13 = a1[1343];
  v14 = a1[1610];
  v15 = ((v12 - v13) << 6) - 1;
  if (v12 == v13) {
    v15 = 0;
  }
  v16 = a1[1347] + a1[1346];
  if (v15 == v16) {
    GameRoutine_74cd60(a1 + 1342);
    v13 = a1[1343];
    v16 = a1[1347] + a1[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v13 + 8 * (v16 >> 9)) + 8 * (v16 & 0x1FF)) = a1[1];
  a1[1] = v14;
  ++a1[1347];
  v30 = *a6 | 0x8000;
  result = GameRoutine_748f80(a1, a2, v9, v8, v7, &v30);
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
    if (*(_QWORD*)(v21 - 8) != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
      v21 = a1[1344];
    }
    a1[1344] = v21 - 8;
  }
  return result;
}

__int64 AIDeploy_1274f90(_QWORD* a1, __int64 a2, unsigned int a3, _DWORD* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
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
  int v30;

  if ((*(_DWORD*)(a2 + 1976) & 0x40) != 0) {
    v8 = 0;
  }
  else {
    v8 = a3;
  }
  GameRoutine_748f80(a1, a2, (unsigned int)*(char*)(a2 + 584),
                     (unsigned int)*(char*)(a2 + 585), v8, a4);
  GameRoutine_74b3c0(a1, a2, a4);
  GameRoutine_749500(a1, a2, a4);
  v9 = a1[1344];
  v10 = a1[1343];
  v11 = a1[1610];
  v12 = ((v9 - v10) << 6) - 1;
  if (v9 == v10) {
    v12 = 0;
  }
  v13 = a1[1347] + a1[1346];
  if (v12 == v13) {
    GameRoutine_74cd60(a1 + 1342);
    v10 = a1[1343];
    v13 = a1[1347] + a1[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v10 + 8 * (v13 >> 9)) + 8 * (v13 & 0x1FF)) = a1[1];
  a1[1] = v11;
  ++a1[1347];
  v14 = (unsigned int)*(char*)(a2 + 584);
  v15 = (unsigned int)*(char*)(a2 + 585);
  v30 = *a4 | 0x8000;
  if ((*(_DWORD*)(a2 + 1976) & 0x40) != 0) {
    v16 = 0;
  }
  else {
    v16 = a3;
  }
  GameRoutine_748f80(a1, a2, v14, v15, v16, &v30);
  GameRoutine_74b3c0(a1, a2, &v30);
  result = GameRoutine_749500(a1, a2, &v30);
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
    if (*(_QWORD*)(v21 - 8) != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
      v21 = a1[1344];
    }
    a1[1344] = v21 - 8;
  }
  return result;
}

__int64 AIDeploy_1275160(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, _DWORD* a6)
{
  unsigned int v6;
  unsigned int v8;
  unsigned int v9;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;

  v6 = a5;
  v8 = a4;
  v9 = a3;
  if ((*(_DWORD*)(a2 + 1976) & 0x40) != 0) {
    a5 = 0;
  }
  else {
    a5 = (unsigned int)a5;
  }
  GameRoutine_748f80(a1, a2, a3, a4, a5, a6);
  GameRoutine_74b3c0(a1, a2, a6);
  GameRoutine_749500(a1, a2, a6);
  v12 = a1[1344];
  v13 = a1[1343];
  v14 = a1[1610];
  v15 = ((v12 - v13) << 6) - 1;
  if (v12 == v13) {
    v15 = 0;
  }
  v16 = a1[1347] + a1[1346];
  if (v15 == v16) {
    GameRoutine_74cd60(a1 + 1342);
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
  GameRoutine_748f80(a1, a2, v9, v8, v17, &v31);
  GameRoutine_74b3c0(a1, a2, &v31);
  result = GameRoutine_749500(a1, a2, &v31);
  v19 = a1[1347];
  v20 = a1[1346];
  v21 = a1[1343];
  v22 = a1[1344];
  v23 = v22 == v21;
  v24 = v19 - 1 + v20;
  v25 = v24 >> 9;
  v26 = v24 & 0x1FF;
  v27 = ((v22 - v21) << 6) - 1;
  v28 = *(_QWORD*)(v21 + 8 * v25);
  if (v23) {
    v27 = 0;
  }
  v29 = *(_QWORD*)(v28 + 8 * v26);
  a1[1347] = v19 - 1;
  a1[1] = v29;
  if ((unsigned __int64)(v27 - (v19 + v20) + 1) >= 0x400) {
    if (*(_QWORD*)(v22 - 8) != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
      v22 = a1[1344];
    }
    a1[1344] = v22 - 8;
  }
  return result;
}

#pragma GCC visibility pop
