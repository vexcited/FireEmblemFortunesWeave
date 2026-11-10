#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10b5f80(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterWeaponAnimator_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterWeaponAnimator_Destructor(__int64 a1);

__n128 CharacterWeaponAnimator_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_character_CharacterWeaponAnimator_vtable;
  GameRoutine_10b5f80(a1);
  if ((*(_BYTE*)(a1 + 280) & 1) != 0 && *(_QWORD*)(a1 + 296) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(a1 + 208) & 1) != 0 && *(_QWORD*)(a1 + 224) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  if ((*(_BYTE*)(a1 + 136) & 1) != 0 && *(_QWORD*)(a1 + 152) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0 && *(_QWORD*)(a1 + 80) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  v7 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v7 != 0) {
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

#pragma GCC visibility pop
