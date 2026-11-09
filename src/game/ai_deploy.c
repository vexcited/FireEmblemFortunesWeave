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

#pragma GCC visibility pop
