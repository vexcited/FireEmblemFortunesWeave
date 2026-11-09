#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_cutscene_Signal_DOF2_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Signal_DOF2_DeletingDestructor(__int64 a1);

__int64 Signal_DOF2_DeletingDestructor(__int64 a1)
{
  __int64 v2;
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

  *(_QWORD*)a1 = game_cutscene_Signal_DOF2_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 160);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  v5 = *(_QWORD*)(a1 + 120);
  if (v5 != 0) {
    v6 = *(_QWORD*)v2;
    *(_QWORD*)(a1 + 128) = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v5);
  }
  v8 = *(_QWORD*)(a1 + 88);
  if (v8 != 0) {
    v9 = *(_QWORD*)v2;
    *(_QWORD*)(a1 + 96) = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  v11 = *(_QWORD*)(a1 + 56);
  if (v11 != 0) {
    v12 = *(_QWORD*)v2;
    *(_QWORD*)(a1 + 64) = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v14 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v14, a1);
}

#pragma GCC visibility pop
