#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f93690[])();
extern __int64 GameData_21cd0e0;
_QWORD* Route_Destructor(_QWORD* result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cfd8[7];
__int64 Route_Destructor_727b20(__int64 a1);
__int64 Route_DeletingDestructor_727b50(__int64 a1);
__int64 Route_Destructor_727ba0(__int64 a1);
__int64 Route_DeletingDestructor_727bd0(__int64 a1);

_QWORD* Route_Destructor(_QWORD* result)
{
  *result = GameData_1f93690;
  if ((_QWORD*)GameData_21cd0e0 == result) {
    GameData_21cd0e0 = 0;
  }
  return result;
}

__int64 Route_Destructor_727b20(__int64 a1)
{
  __int64 result;

  *(_QWORD*)(a1 - 8) = GameData_1f93690;
  result = a1 - 8;
  if (GameData_21cd0e0 == result) {
    GameData_21cd0e0 = 0;
  }
  return result;
}

__int64 Route_DeletingDestructor_727b50(__int64 a1)
{
  __int64 v1;

  if (*GameData_212cfd8[0] == a1 - 8) {
    *GameData_212cfd8[0] = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, a1 - 8);
}

__int64 Route_Destructor_727ba0(__int64 a1)
{
  __int64 result;

  *(_QWORD*)(a1 - 24) = GameData_1f93690;
  result = a1 - 24;
  if (GameData_21cd0e0 == result) {
    GameData_21cd0e0 = 0;
  }
  return result;
}

__int64 Route_DeletingDestructor_727bd0(__int64 a1)
{
  __int64 v1;

  if (*GameData_212cfd8[0] == a1 - 24) {
    *GameData_212cfd8[0] = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, a1 - 24);
}

#pragma GCC visibility pop
