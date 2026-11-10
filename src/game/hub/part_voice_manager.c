#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_PartVoiceManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 PartVoiceManager_Destructor(_QWORD* a1);

__n128 PartVoiceManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
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

  v1 = a1[8];
  *a1 = game_hub_PartVoiceManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[9] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v7 = a1[4];
  if (v7 != 0) {
    v8 = a1[5];
    if (v7 == v8) {
      goto LABEL_12;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0) {
        result = std___1___shared_weak_count___release_weak(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = a1[4];
    a1[5] = v7;
    if (v10 != 0) {
    LABEL_12:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v11 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
    }
  }
  v12 = a1[1];
  if (v12 != 0) {
    v13 = a1[2];
    if (v12 == v13) {
      goto LABEL_22;
    }
    do {
      v14 = *(_QWORD*)(v13 - 8);
      if (v14 != 0) {
        result = std___1___shared_weak_count___release_weak(v14);
      }
      v13 -= 16;
    } while (v13 != v12);
    v15 = a1[1];
    a1[2] = v12;
    if (v15 != 0) {
    LABEL_22:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
    }
  }
  return result;
}

#pragma GCC visibility pop
