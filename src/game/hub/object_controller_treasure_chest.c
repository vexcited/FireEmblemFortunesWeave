#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_ObjectControllerTreasureChest_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ObjectControllerTreasureChest_Destructor(_QWORD* result);
__int64 ObjectControllerTreasureChest_DeletingDestructor(_QWORD* a1);

_QWORD* ObjectControllerTreasureChest_Destructor(_QWORD* result)
{
  _DWORD* v1;
  _QWORD* v2;
  __int64 v3;

  *result = game_hub_ObjectControllerTreasureChest_vtable;
  v1 = (_DWORD*)result[3];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    v2 = result;
    GameRoutine_14a1520(result + 3, 1);
    result = v2;
  }
  v3 = result[4];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 ObjectControllerTreasureChest_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_hub_ObjectControllerTreasureChest_vtable;
  v4 = (_QWORD*)a1[3];
  v2 = a1 + 3;
  v3 = v4;
  v5 = *v4;
  if (*v4 != 0 && *(_DWORD*)(v5 + 16) == *((_DWORD*)v3 + 2)) {
    GameRoutine_14a1520(v2, 1);
  }
  v6 = a1[4];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v7);
}

#pragma GCC visibility pop
