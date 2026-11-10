#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_149b160(_QWORD);
__int64 GameRoutine_149b740(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20441f8[])();
extern __int64 (*GameData_2044228[])();
extern __int64 (*GameData_20442c8[])();
extern __int64 GameData_21c9f90;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_224b480;
__int64 PersonOrderFile_DeletingDestructor_149a520(_QWORD* a1);
__int64 PersonOrderFile_Destructor(_QWORD* a1);
__int64 PersonOrderFile_DeletingDestructor_149a650(_QWORD* a1);

__int64 PersonOrderFile_DeletingDestructor_149a520(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *a1 = GameData_20441f8;
  a1[1] = GameData_2044228;
  v2 = a1 + 1;
  GameRoutine_149b160(a1 + 1);
  GameRoutine_149b740(v2);
  if ((_QWORD*)GameData_21c9f90 == a1) {
    GameData_21c9f90 = 0;
    GameData_224b480 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 PersonOrderFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *(a1 - 1) = GameData_20441f8;
  v2 = a1 - 1;
  *a1 = GameData_2044228;
  GameRoutine_149b160(a1);
  result = GameRoutine_149b740(a1);
  *v2 = GameData_20442c8;
  if ((_QWORD*)GameData_21c9f90 == v2) {
    GameData_21c9f90 = 0;
    GameData_224b480 = 0;
  }
  return result;
}

__int64 PersonOrderFile_DeletingDestructor_149a650(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *(a1 - 1) = GameData_20441f8;
  v2 = a1 - 1;
  *a1 = GameData_2044228;
  GameRoutine_149b160(a1);
  GameRoutine_149b740(a1);
  if ((_QWORD*)GameData_21c9f90 == v2) {
    GameData_21c9f90 = 0;
    GameData_224b480 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
}

#pragma GCC visibility pop
