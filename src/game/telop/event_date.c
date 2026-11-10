#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
extern __int64 (*GameData_20bcd80[])();
extern __int64 (*GameData_20bce40[])();
extern __int64 (*game_telop_EventDate_vtable[])();
extern __int64 GameData_2263c28;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 EventDate_Unknown33(__int64 a1);
__int64 EventDate_Unknown44(__int64 result);
__int64 EventDate_Destructor(__int64 a1);
__int64 EventDate_DeletingDestructor(__int64 a1);
__int64 TelopReliance_1386f80(_QWORD);
__int64 EventDate_Destructor_175f700(__int64 a1);
__int64 EventDate_DeletingDestructor_175f7a0(__int64 a1);

__int64 EventDate_Unknown33(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = ui_LayoutAccessor_SetPriority(a1 + 168, 1090);
  if ((*(_BYTE*)(a1 + 832) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 848);
  }
  else {
    v3 = a1 + 833;
  }
  if (v3 != 0) {
    result = ui_LayoutAccessor_FindTextBox(a1 + 168, "T_Date");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v3, 0);
    }
  }
  return result;
}

__int64 EventDate_Unknown44(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(_BYTE*)(result + 856) == 1) {
    v1 = *(unsigned __int8**)(result + 16);
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

__int64 EventDate_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_telop_EventDate_vtable;
  *(_QWORD*)(a1 + 824) = GameData_20bcd80;
  if ((*(_BYTE*)(a1 + 832) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 848);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      a1 = v2;
    }
  }
  *(_QWORD*)(a1 + 824) = GameData_20bce40;
  if (GameData_2263c28 == a1) {
    GameData_2263c28 = 0;
  }
  return GameRoutine_1386f80(a1);
}

__int64 EventDate_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_telop_EventDate_vtable;
  *(_QWORD*)(a1 + 824) = GameData_20bcd80;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 832) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 848);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  *(_QWORD*)(a1 + 824) = GameData_20bce40;
  if (GameData_2263c28 == a1) {
    GameData_2263c28 = 0;
  }
  GameRoutine_1386f80(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

__int64 EventDate_Destructor_175f700(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  v2 = (_QWORD*)(a1 - 824);
  *v2 = game_telop_EventDate_vtable;
  *(_QWORD*)a1 = GameData_20bcd80;
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 24);
    if (v3 != 0) {
      v4 = v2;
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v3);
      v2 = v4;
    }
  }
  *(_QWORD*)a1 = GameData_20bce40;
  if ((_QWORD*)GameData_2263c28 == v2) {
    GameData_2263c28 = 0;
  }
  return TelopReliance_1386f80(v2);
}

__int64 EventDate_DeletingDestructor_175f7a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1 - 824;
  *(_QWORD*)(a1 - 824) = game_telop_EventDate_vtable;
  *(_QWORD*)a1 = GameData_20bcd80;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 24);
    if (v3 != 0) {
      v4 = a1;
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v3);
      a1 = v4;
    }
  }
  *(_QWORD*)a1 = GameData_20bce40;
  if (GameData_2263c28 == v1) {
    GameData_2263c28 = 0;
  }
  TelopReliance_1386f80(v1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v1);
}

#pragma GCC visibility pop
