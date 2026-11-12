#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212fee8;
__n128 CharacterEffect_Destructor_alt1(_QWORD* a1) __asm__(
    "CharacterEffect_Destructor");
__int64 CharacterEffect_DeletingDestructor(_QWORD* a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 CharacterEffect_Destructor(_QWORD* a1);

__int64 CharacterEffect_Destructor(_QWORD* a1)
{
  __int64 result;

  a1[7] = 0;
  *a1 = &game_character_CharacterBaseModule_vtable;
  result = a1[4];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

__int64 CharacterEffect_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;

  a1[7] = 0;
  *a1 = GameData_212fee8 + 2;
  v1 = a1[4];
  if (v1 != 0) {
    std___1___shared_weak_count___release_weak(v1);
  }
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
