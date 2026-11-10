#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1083bf0(_QWORD);
__int64 GameRoutine_10bc1a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterDie_Body_vtable)();
extern __int64 (*game_character_ChariotCrew_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ChariotCrew_Destructor(__int64 a1);
__int64 ChariotCrew_DeletingDestructor(__int64 a1);

__int64 ChariotCrew_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  *(_QWORD*)a1 = game_character_ChariotCrew_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 136));
  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 104));
  v3 = *(_QWORD*)(a1 + 128);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  *(_QWORD*)a1 = &game_character_CharacterDie_Body_vtable;
  result = GameRoutine_10bc1a0(a1);
  if (result != 0) {
    return CharacterBuilder_1083bf0(result);
  }
  return result;
}

__int64 ChariotCrew_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_character_ChariotCrew_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 136));
  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 104));
  v3 = *(_QWORD*)(a1 + 128);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  *(_QWORD*)a1 = &game_character_CharacterDie_Body_vtable;
  v4 = GameRoutine_10bc1a0(a1);
  if (v4 != 0) {
    CharacterBuilder_1083bf0(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
}

#pragma GCC visibility pop
