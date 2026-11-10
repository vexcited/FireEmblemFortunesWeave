#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_2021e38[])();
extern __int64 GameData_2240798;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22408e4;
__int64 AIRoute_Destructor(__int64 result);
_QWORD* AIRoute_12ad9b0(_QWORD* a1);
__int64 AIRoute_DeletingDestructor(__int64 a1);
__int64 AIRoute_DeletingDestructor_12ada50(_QWORD* a1);

__int64 AIRoute_Destructor(__int64 result)
{
  *(_QWORD*)(result + 192) = GameData_2021e38;
  if (GameData_2240798 == result) {
    GameData_2240798 = 0;
    GameData_22408e4 = 0;
  }
  return result;
}

_QWORD* AIRoute_12ad9b0(_QWORD* a1)
{
  _QWORD* result;

  *a1 = GameData_2021e38;
  result = a1 - 24;
  if ((_QWORD*)GameData_2240798 == result) {
    GameData_2240798 = 0;
    GameData_22408e4 = 0;
  }
  return result;
}

__int64 AIRoute_DeletingDestructor(__int64 a1)
{
  __int64 v1;

  *(_QWORD*)(a1 + 192) = GameData_2021e38;
  if (GameData_2240798 == a1) {
    GameData_2240798 = 0;
    GameData_22408e4 = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

__int64 AIRoute_DeletingDestructor_12ada50(_QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_2021e38;
  if ((_QWORD*)GameData_2240798 == a1 - 24) {
    GameData_2240798 = 0;
    GameData_22408e4 = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

#pragma GCC visibility pop
