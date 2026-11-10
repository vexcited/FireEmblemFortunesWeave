#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21f3cb0;
__int64 game_Unit_Destroy_Unit(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_facility_anonymous_ObeliskClearMergeMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ObeliskClearMergeMenuItem_Destructor(__int64 a1);
__n128 ObeliskClearMergeMenuItem_DeletingDestructor(__int64 a1);

__n128 ObeliskClearMergeMenuItem_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_facility_anonymous_ObeliskClearMergeMenuItem_vtable;
  game_Unit_Destroy_Unit(a1 + 2320);
  game_Unit_Destroy_Unit(a1 + 96);
  v3 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v3 != 0) {
    result = std___1___shared_weak_count___release_weak(v3);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return result;
}

__n128 ObeliskClearMergeMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_facility_anonymous_ObeliskClearMergeMenuItem_vtable;
  game_Unit_Destroy_Unit(a1 + 2320);
  game_Unit_Destroy_Unit(a1 + 96);
  v2 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
}

__int64 ObeliskClearMergeMenuItem_Unknown78(__int64 a1)
{
  return *(unsigned __int8*)(a1 + 4544);
}

#pragma GCC visibility pop
