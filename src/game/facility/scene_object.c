#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13fc760(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_facility_SceneObjectHolder_vtable)();
extern __int64 (*game_facility_SceneObject_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SceneObject_Destructor(__int64 a1);

__int64 SceneObject_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  *(_QWORD*)a1 = game_facility_SceneObject_vtable;
  if (*(_QWORD*)(a1 + 8) != 0) {
    GameRoutine_13fc760(a1);
  }
  v2 = *(_QWORD*)(a1 + 144);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
      goto LABEL_11;
    }
  }
  else if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
    goto LABEL_11;
  }
  if (*(_QWORD*)(a1 + 64) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }

LABEL_11:
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  result = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = &game_facility_SceneObjectHolder_vtable;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
