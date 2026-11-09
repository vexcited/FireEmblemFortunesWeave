#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_cutscene_Signal_Dissolve_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Signal_Dissolve_DeletingDestructor(__int64 a1);

__int64 Signal_Dissolve_DeletingDestructor(__int64 a1)
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

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_cutscene_Signal_Dissolve_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 192) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 152);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 160) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 120);
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v9);
    }
  }
  v11 = *(_QWORD*)(a1 + 72);
  if (v11 != 0) {
    v12 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 80) = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v14 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14, a1);
}

#pragma GCC visibility pop
