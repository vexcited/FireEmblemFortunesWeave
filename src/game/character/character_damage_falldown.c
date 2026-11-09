#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109d5e0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterDamageFalldown_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CharacterDamageFalldown_Destructor(_QWORD* a1);
__int64 CharacterDamageFalldown_DeletingDestructor(_QWORD* a1);

__int64 CharacterDamageFalldown_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 result;

  *a1 = game_character_CharacterDamageFalldown_vtable;
  GameRoutine_109d5e0(a1 + 11);
  v2 = a1[14];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  result = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 CharacterDamageFalldown_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_character_CharacterDamageFalldown_vtable;
  GameRoutine_109d5e0(a1 + 11);
  v2 = a1[14];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

#pragma GCC visibility pop
