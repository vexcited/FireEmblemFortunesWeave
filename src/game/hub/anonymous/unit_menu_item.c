#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_anonymous_FastTravelMenuItem_vtable[])();
extern __int64 (*game_hub_anonymous_UnitMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 UnitMenuItem_Destructor(__int64 a1);

__int64 UnitMenuItem_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_hub_anonymous_UnitMenuItem_vtable;
  if (*(_QWORD*)(a1 + 120) != 0) {
    *(_QWORD*)(a1 + 120) = 0;
  }
  v2 = *(_QWORD*)(a1 + 144);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)a1 = game_hub_anonymous_FastTravelMenuItem_vtable;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  return result;
}

#pragma GCC visibility pop
