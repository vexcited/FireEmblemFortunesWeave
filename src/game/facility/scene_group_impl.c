#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_2039b48[])();
extern __int64 (*GameData_2039c10[])();
extern __int64 GameData_2242798;
extern __int64 GameData_22427a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2242794;
extern int GameData_22427a0;
_QWORD* SceneGroup_14193a0(_QWORD* result);
__int64 SceneGroup_14193d0(__int64 a1);
_QWORD* SceneGroup_1419ab0(_QWORD* result);
__int64 SceneGroup_1419ae0(__int64 a1);

_QWORD* SceneGroup_14193a0(_QWORD* result)
{
  *result = GameData_2039b48;
  if ((_QWORD*)GameData_2242798 == result) {
    GameData_2242798 = 0;
    GameData_2242794 = 0;
  }
  return result;
}

__int64 SceneGroup_14193d0(__int64 a1)
{
  __int64 v1;

  if (GameData_2242798 == a1) {
    GameData_2242798 = 0;
    GameData_2242794 = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

_QWORD* SceneGroup_1419ab0(_QWORD* result)
{
  *result = GameData_2039c10;
  if ((_QWORD*)GameData_22427a8 == result) {
    GameData_22427a8 = 0;
    GameData_22427a0 = 0;
  }
  return result;
}

__int64 SceneGroup_1419ae0(__int64 a1)
{
  __int64 v1;

  if (GameData_22427a8 == a1) {
    GameData_22427a8 = 0;
    GameData_22427a0 = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

#pragma GCC visibility pop
