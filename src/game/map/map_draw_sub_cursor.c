#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_MapDrawSubCursor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void MapDrawSubCursor_Destructor(_QWORD* a1);
__n128 MapDrawSubCursor_DeletingDestructor(_QWORD* a1);

void MapDrawSubCursor_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = 129;
  *a1 = game_map_MapDrawSubCursor_vtable;
  do {
    v3 = a1[v1];
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
    v1 -= 2;
  } while (v1 != 1);
}

__n128 MapDrawSubCursor_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = 129;
  *a1 = game_map_MapDrawSubCursor_vtable;
  do {
    v3 = a1[v1];
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
    v1 -= 2;
  } while (v1 != 1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

#pragma GCC visibility pop
