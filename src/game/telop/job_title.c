#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_675980(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
extern __int64 (*GameData_20bc898[])();
extern __int64 GameData_2263be0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 JobTitle_Unknown33(__int64 a1);
__int64 JobTitle_Unknown44(__int64 result);
__int64 JobTitle_Destructor(__int64 a1);
__int64 JobTitle_DeletingDestructor(__int64 a1);

__int64 JobTitle_Unknown33(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;

  ui_LayoutAccessor_SetPriority(a1 + 168, 1090);
  v2 = *(_QWORD*)(a1 + 832);
  v5 = *(_QWORD*)(a1 + 840);
  result = GameRoutine_675980(v2, &v5);
  if (result != 0) {
    v4 = result;
    result = ui_LayoutAccessor_FindTextBox(a1 + 168, "T_Txt");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v4, 0);
    }
  }
  return result;
}

__int64 JobTitle_Unknown44(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(_BYTE*)(result + 848) == 1) {
    v1 = *(unsigned __int8**)(result + 16);
    *(_BYTE*)(result + 848) = 0;
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 JobTitle_Destructor(__int64 a1)
{
  *(_QWORD*)(a1 + 824) = GameData_20bc898;
  if (GameData_2263be0 == a1) {
    GameData_2263be0 = 0;
  }
  return GameRoutine_1386f80(a1);
}

__int64 JobTitle_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)(a1 + 824) = GameData_20bc898;
  if (GameData_2263be0 == a1) {
    GameData_2263be0 = 0;
  }
  GameRoutine_1386f80(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
