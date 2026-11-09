#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f89400(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_MapSetup_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapSetup_Destructor(_QWORD* a1);

__int64 MapSetup_Destructor(_QWORD* a1)
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

  v1 = a1[8];
  *a1 = game_hub_MapSetup_vtable;
  if (v1 != 0) {
    v3 = a1[9];
    if (v1 == v3) {
      goto LABEL_8;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0) {
        std___1___shared_weak_count___release_weak(v4);
      }
      v3 -= 16;
    } while (v3 != v1);
    v5 = a1[8];
    a1[9] = v1;
    if (v5 != 0) {
    LABEL_8:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v6);
    }
  }
  v7 = a1[5];
  if (v7 != 0) {
    v8 = a1[6];
    if (v7 == v8) {
      goto LABEL_18;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0) {
        std___1___shared_weak_count___release_weak(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = a1[5];
    a1[6] = v7;
    if (v10 != 0) {
    LABEL_18:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v11);
    }
  }
  return GameRoutine_f89400(a1 + 2, a1[3]);
}

#pragma GCC visibility pop
