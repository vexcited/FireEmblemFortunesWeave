#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10f5f80(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_AuraModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 AuraModule_Destructor(_QWORD* a1);

__int64 AuraModule_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[14];
  *a1 = game_character_AuraModule_vtable;
  if (v1 != 0) {
    v3 = a1[15];
    if (v1 == v3) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
      v3 -= 16;
    } while (v3 != v1);
    v5 = a1[14];
    a1[15] = v1;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v6);
    }
  }
  GameRoutine_10f5f80(a1 + 9);
  return GameRoutine_10f5f80(a1 + 4);
}

#pragma GCC visibility pop
