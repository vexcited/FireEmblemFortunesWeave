#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_cmdbtl_FieldUnitManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 FieldUnitManager_Destructor(_QWORD* a1);

__n128 FieldUnitManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = a1[1];
  v1 = a1[2];
  *a1 = game_cmdbtl_FieldUnitManager_vtable;
  v4 = v2;
  if (v2 != v1) {
    do {
      v5 = *(_QWORD*)(v1 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak(v5);
      }
      v1 -= 16;
    } while (v1 != v2);
    v4 = a1[1];
  }
  a1[2] = v2;
  if (v4 != 0) {
    if (v4 == v2) {
      a1[2] = v4;
    }
    else {
      do {
        v7 = *(_QWORD*)(v2 - 8);
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          result = std___1___shared_weak_count___release_weak(v7);
        }
        v2 -= 16;
      } while (v2 != v4);
      v8 = a1[1];
      a1[2] = v4;
      if (v8 == 0) {
        return result;
      }
    }
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  return result;
}

#pragma GCC visibility pop
