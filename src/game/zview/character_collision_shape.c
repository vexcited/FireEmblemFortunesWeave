#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_fffa20(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterCollisionShape_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterCollisionShape_Destructor(_QWORD* a1);
__n128 CharacterCollisionShape_DeletingDestructor(_QWORD* a1);

__n128 CharacterCollisionShape_Destructor(_QWORD* a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;

  *a1 = game_zview_CharacterCollisionShape_vtable;
  if (a1[2] != 0 &&
      (GameRoutine_fffa20(a1), v3 = a1[3], a1[2] = 0, a1[3] = 0, v3 != 0) &&
      atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
    v4 = a1[3];
    if (v4 == 0) {
      return result;
    }
  }
  else {
    v4 = a1[3];
    if (v4 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__n128 CharacterCollisionShape_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_zview_CharacterCollisionShape_vtable;
  if (a1[2] != 0) {
    GameRoutine_fffa20(a1);
    v2 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
  v3 = a1[3];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

#pragma GCC visibility pop
