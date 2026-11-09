#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_ObjectControllerDestroyBase_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ObjectControllerDestroy_DeletingDestructor(__int64 a1);

__int64 ObjectControllerDestroy_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_hub_ObjectControllerDestroyBase_vtable;
  v4 = *(_QWORD**)(a1 + 56);
  v2 = a1 + 56;
  v3 = v4;
  v5 = *v4;
  if (*v4 != 0 && *(_DWORD*)(v5 + 16) == *((_DWORD*)v3 + 2)) {
    GameRoutine_14a1520(v2, 1);
  }
  v6 = *(_QWORD*)(a1 + 64);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9);
}

#pragma GCC visibility pop
