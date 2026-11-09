#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_659c60();
__int64 GameRoutine_a83620(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
bool GameRoutine_66ad10();
extern _UNKNOWN GameData_1af4e96;
extern __int64 (*scene_scenes_D_Game_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_66a180();
void D_Game_Destructor(_QWORD* a1);
__int64 D_Game_DeletingDestructor(_QWORD* a1);
bool D_Game_Unknown2(__int64 a1);

void D_Game_Destructor(_QWORD* a1)
{
  *a1 = scene_scenes_D_Game_vtable;
  GameRoutine_659c60();
  GameRoutine_a83620(GameData_21c6978);
  GameRoutine_66a180();
}

__int64 D_Game_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = scene_scenes_D_Game_vtable;
  GameRoutine_659c60();
  GameRoutine_a83620(GameData_21c6978);
  GameRoutine_66a180();
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

bool D_Game_Unknown2(__int64 a1)
{
  bool v2;

  v2 = GameRoutine_66ad10();
  if (!v2) {
    *(_QWORD*)(*(_QWORD*)(a1 + 88) + 136LL) = &GameData_1af4e96;
    *(_BYTE*)(*(_QWORD*)(a1 + 88) + 96LL) = 1;
  }
  return v2;
}

#pragma GCC visibility pop
