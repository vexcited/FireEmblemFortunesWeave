#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_cutscene_Signal_Bloom_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Signal_Bloom_DeletingDestructor(_QWORD* a1);

__int64 Signal_Bloom_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
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

  v1 = a1[19];
  *a1 = game_cutscene_Signal_Bloom_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[20] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[15];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[16] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = a1[11];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[12] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = a1[7];
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    a1[8] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v15 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15, a1);
}

#pragma GCC visibility pop
