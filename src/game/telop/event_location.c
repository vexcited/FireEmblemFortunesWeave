#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
extern __int64 (*GameData_20bce10[])();
extern __int64 GameData_2263bf0;
extern __int64 GameData_2263c00;
extern __int64 GameData_2263c08;
extern __int64 GameData_2263c18;
extern __int64 GameData_2263c20;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 EventLocation_Unknown33(__int64 a1);
__int64 EventLocation_Destructor(__int64 a1);
__int64 EventLocation_DeletingDestructor(__int64 a1);
__int64 TelopReliance_1386f80(_QWORD);
__int64 EventLocation_Destructor_175f4d0(_QWORD* a1);
__int64 EventLocation_DeletingDestructor_175f500(_QWORD* a1);

__int64 EventLocation_Unknown33(__int64 a1)
{
  __int64 result;
  char* v3;
  char* v4;

  result = ui_LayoutAccessor_SetPriority(a1 + 168, 80);
  if ((GameData_2263bf0 & 1) != 0) {
    v3 = (char*)GameData_2263c00;
  }
  else {
    v3 = (char*)&GameData_2263bf0 + 1;
  }
  if (v3 != nullptr) {
    result = ui_LayoutAccessor_FindTextBox(a1 + 168, "T_Title");
    if (result != 0) {
      result = GameRoutine_156c5d0(result, v3, 0);
    }
  }
  if ((GameData_2263c08 & 1) != 0) {
    v4 = (char*)GameData_2263c18;
  }
  else {
    v4 = (char*)&GameData_2263c08 + 1;
  }
  if (v4 != nullptr) {
    result = ui_LayoutAccessor_FindTextBox(a1 + 168, "T_Time");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v4, 0);
    }
  }
  return result;
}

__int64 EventLocation_Destructor(__int64 a1)
{
  *(_QWORD*)(a1 + 824) = GameData_20bce10;
  if (GameData_2263c20 == a1) {
    GameData_2263c20 = 0;
  }
  return GameRoutine_1386f80(a1);
}

__int64 EventLocation_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)(a1 + 824) = GameData_20bce10;
  if (GameData_2263c20 == a1) {
    GameData_2263c20 = 0;
  }
  GameRoutine_1386f80(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 EventLocation_Destructor_175f4d0(_QWORD* a1)
{
  _QWORD* v2;

  v2 = a1 - 103;
  *a1 = GameData_20bce10;
  if ((_QWORD*)GameData_2263c20 == v2) {
    GameData_2263c20 = 0;
  }
  return TelopReliance_1386f80(v2);
}

__int64 EventLocation_DeletingDestructor_175f500(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = a1 - 103;
  *a1 = GameData_20bce10;
  if ((_QWORD*)GameData_2263c20 == a1 - 103) {
    GameData_2263c20 = 0;
  }
  TelopReliance_1386f80(a1 - 103);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
}

#pragma GCC visibility pop
