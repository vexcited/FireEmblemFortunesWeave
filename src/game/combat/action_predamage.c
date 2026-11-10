#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_200be00[])();
extern __int64 (*game_combat_ActionPredamage_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ActionPredamage_DeletingDestructor_10e03c0(_QWORD* a1);
__int64 ActionPredamage_Unknown2(_QWORD* a1);
__n128 ActionPredamage_Destructor(_QWORD* a1);
__int64 ActionPredamage_DeletingDestructor_10e0620(_QWORD* a1);

__n128 ActionPredamage_DeletingDestructor_10e03c0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;

  v1 = a1[9];
  *a1 = game_combat_ActionPredamage_vtable;
  a1[4] = GameData_200be00;
  if (v1 != 0) {
    a1[10] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v5 = a1[8];
  a1[4] = kaneko_WPHolder_vtable;
  if (v5 != 0) {
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[6];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 ActionPredamage_Unknown2(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[9];
  *a1 = game_combat_ActionPredamage_vtable;
  a1[4] = GameData_200be00;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[10] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[8];
  a1[4] = kaneko_WPHolder_vtable;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[6];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
}

__n128 ActionPredamage_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;

  v1 = a1[5];
  *(a1 - 4) = game_combat_ActionPredamage_vtable;
  *a1 = GameData_200be00;
  if (v1 != 0) {
    a1[6] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v5 = a1[4];
  *a1 = kaneko_WPHolder_vtable;
  if (v5 != 0) {
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[2];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 ActionPredamage_DeletingDestructor_10e0620(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[5];
  *(a1 - 4) = game_combat_ActionPredamage_vtable;
  *a1 = GameData_200be00;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[6] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[4];
  *a1 = kaneko_WPHolder_vtable;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[2];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
}

#pragma GCC visibility pop
