#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_747800(_QWORD*);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f95438[])();
extern __int64 GameData_21ca2f0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21cfa6c;
__int64 Deploy_Destructor(_QWORD* a1);
__int64 Deploy_74c240(_QWORD* a1);
__int64 Deploy_74c280(__int64 a1);
__int64 Deploy_DeletingDestructor(_QWORD* a1);

__int64 Deploy_Destructor(_QWORD* a1)
{
  a1[1609] = GameData_1f95438;
  if ((_QWORD*)GameData_21ca2f0 == a1) {
    GameData_21ca2f0 = 0;
    GameData_21cfa6c = 0;
  }
  return GameRoutine_747800(a1);
}

__int64 Deploy_74c240(_QWORD* a1)
{
  _QWORD* v2;

  v2 = a1 - 1609;
  *a1 = GameData_1f95438;
  if ((_QWORD*)GameData_21ca2f0 == v2) {
    GameData_21ca2f0 = 0;
    GameData_21cfa6c = 0;
  }
  return GameRoutine_747800(v2);
}

__int64 Deploy_74c280(__int64 a1)
{
  _QWORD* v2;

  v2 = (_QWORD*)(a1 - 12880);
  *(_QWORD*)(a1 - 8) = GameData_1f95438;
  if ((_QWORD*)GameData_21ca2f0 == v2) {
    GameData_21ca2f0 = 0;
    GameData_21cfa6c = 0;
  }
  return GameRoutine_747800(v2);
}

__int64 Deploy_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  a1[1609] = GameData_1f95438;
  if ((_QWORD*)GameData_21ca2f0 == a1) {
    GameData_21ca2f0 = 0;
    GameData_21cfa6c = 0;
  }
  GameRoutine_747800(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
