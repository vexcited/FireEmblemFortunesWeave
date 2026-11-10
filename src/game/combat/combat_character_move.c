#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_CombatCharacterMove_vtable[])();
extern __int64 (*game_combat_CombatCharacterSubsystem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CombatCharacterMove_Destructor(_QWORD* a1);
__int64 CombatCharacterMove_DeletingDestructor(_QWORD* a1);

__n128 CombatCharacterMove_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __n128 result;
  __int64 v6;

  *a1 = game_combat_CombatCharacterMove_vtable;
  v2 = a1 + 10;
  v3 = (_QWORD*)a1[14];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v6 = a1[3];
  *a1 = game_combat_CombatCharacterSubsystem_vtable;
  if (v6 != 0) {
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 CombatCharacterMove_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *a1 = game_combat_CombatCharacterMove_vtable;
  v2 = a1 + 10;
  v3 = (_QWORD*)a1[14];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = a1[3];
  *a1 = game_combat_CombatCharacterSubsystem_vtable;
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v6);
}

#pragma GCC visibility pop
