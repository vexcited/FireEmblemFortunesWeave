#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ffed80(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterCollisionObstacle_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterCollisionObstacle_Destructor_alt1(_QWORD* a1) __asm__(
    "CharacterCollisionObstacle_Destructor");
__n128 CharacterCollisionObstacle_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CharacterCollisionObstacle_DeletingDestructor");
__int64 GameRoutine_ffed80_alt1(__int64) __asm__("GameRoutine_ffed80");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
_QWORD* CharacterCollisionObstacle_Destructor(_QWORD* result);
__int64 game_zview_ffed80(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CharacterCollisionObstacle_DeletingDestructor(_QWORD* a1);

_QWORD* CharacterCollisionObstacle_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;

  v1 = result;
  *result = game_zview_CharacterCollisionObstacle_vtable;
  if (result[2] != 0 &&
      (result = (_QWORD*)GameRoutine_ffed80_alt1((__int64)result), v2 = v1[3],
       v1[2] = 0, v1[3] = 0, v2 != 0) &&
      atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v2);
    v3 = v1[3];
    if (v3 == 0) {
      return result;
    }
  }
  else {
    v3 = v1[3];
    if (v3 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v3);
  }
  return result;
}

void CharacterCollisionObstacle_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_zview_CharacterCollisionObstacle_vtable;
  if (a1[2] != 0) {
    game_zview_ffed80((__int64)a1);
    v2 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak_alt1(v2);
    }
  }
  v3 = a1[3];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)a1);
}

#pragma GCC visibility pop
