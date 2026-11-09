#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_CombatCharacterLookAt_vtable[])();
extern __int64 (*game_combat_CombatCharacterSubsystem_vtable[])();
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CombatCharacterLookAt_Destructor(_QWORD* a1);
__int64 CombatCharacterLookAt_DeletingDestructor(_QWORD* a1);

__int64 CombatCharacterLookAt_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  *a1 = game_combat_CombatCharacterLookAt_vtable;
  if (GameData_21ec7b0 == 0 || (v1 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
      (*(_BYTE*)(v1 + 112) & 0x40) == 0) {
    v2 = a1[1];
    v3 = *(_QWORD*)(v2 + 80);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v2 + 88);
      if (*(_QWORD*)(v3 + 8) != -1 && v4 != 0) {
        *(_DWORD*)(*(_QWORD*)(v4 + 112) + 160LL) = 0;
      }
    }
  }
  *a1 = game_combat_CombatCharacterSubsystem_vtable;
  result = a1[3];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 CombatCharacterLookAt_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;

  *a1 = game_combat_CombatCharacterLookAt_vtable;
  if (GameData_21ec7b0 == 0 || (v2 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
      (*(_BYTE*)(v2 + 112) & 0x40) == 0) {
    v3 = a1[1];
    v4 = *(_QWORD*)(v3 + 80);
    if (v4 != 0) {
      v5 = *(_QWORD*)(v3 + 88);
      if (*(_QWORD*)(v4 + 8) != -1 && v5 != 0) {
        *(_DWORD*)(*(_QWORD*)(v5 + 112) + 160LL) = 0;
      }
    }
  }
  v7 = a1[3];
  *a1 = game_combat_CombatCharacterSubsystem_vtable;
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, a1);
}

#pragma GCC visibility pop
