#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 HubCharacterNatives_cea6b0(_QWORD);
__int64 HubCharacterNatives_ceca80(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_CharacterControllerBase_vtable)();
extern __int64 (*game_hub_CharacterControllerMob_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterControllerMob_Destructor(_QWORD* a1);
__int64 CharacterControllerMob_DeletingDestructor(_QWORD* a1);

__n128 CharacterControllerMob_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;

  *a1 = game_hub_CharacterControllerMob_vtable;
  HubCharacterNatives_ceca80(*(_QWORD*)(a1[1] + 24LL), 128, 0);
  v2 = *(_QWORD*)(a1[1] + 24LL);
  v3 = *(_QWORD*)(v2 + 352);
  if (v3 != *(_QWORD*)(v2 + 344)) {
    *(_QWORD*)(v2 + 352) = v3 - 4;
  }
  HubCharacterNatives_cea6b0(v2);
  v5 = a1[3];
  *a1 = &game_hub_CharacterControllerBase_vtable;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 CharacterControllerMob_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_hub_CharacterControllerMob_vtable;
  HubCharacterNatives_ceca80(*(_QWORD*)(a1[1] + 24LL), 128, 0);
  v2 = *(_QWORD*)(a1[1] + 24LL);
  v3 = *(_QWORD*)(v2 + 352);
  if (v3 != *(_QWORD*)(v2 + 344)) {
    *(_QWORD*)(v2 + 352) = v3 - 4;
  }
  HubCharacterNatives_cea6b0(v2);
  v4 = a1[3];
  *a1 = &game_hub_CharacterControllerBase_vtable;
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
}

#pragma GCC visibility pop
