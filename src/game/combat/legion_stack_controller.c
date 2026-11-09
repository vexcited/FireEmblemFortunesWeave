#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_LegionStackController_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* LegionStackController_Destructor(_QWORD* result);

_QWORD* LegionStackController_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result[5];
  v2 = result;
  *result = game_combat_LegionStackController_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v1);
    v3 = v2[1];
    if (v3 == 0) {
      return result;
    }
  }
  else {
    v3 = result[1];
    if (v3 == 0) {
      return result;
    }
  }
  v4 = v2[2];
  if (v3 == v4) {
    goto LABEL_11;
  }
  do {
    v5 = *(_QWORD*)(v4 - 8);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v5);
    }
    v4 -= 16;
  } while (v4 != v3);
  v6 = v2[1];
  v2[2] = v3;
  if (v6 != 0) {
  LABEL_11:
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  return result;
}

#pragma GCC visibility pop
