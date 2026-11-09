#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_prepo_PlayReport_Destroy_PlayReport(_QWORD);
extern __int64 (*GameData_2025948[])();
extern __int64 (*game_playreport_Manager_vtable[])();
extern __int64 GameData_2240f10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2240f20;
__int64 Manager_Destructor_130d940(_QWORD* a1);

__int64 Manager_Destructor_130d940(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v1 = a1[35];
  a1[35] = 0;
  *a1 = game_playreport_Manager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = a1[30];
  a1[30] = 0;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
  }
  v7 = a1[25];
  a1[25] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
  }
  v9 = a1[20];
  a1[20] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
  }
  v11 = a1[12];
  a1[12] = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
  }
  result = nn_prepo_PlayReport_Destroy_PlayReport(a1 + 4);
  *a1 = GameData_2025948;
  if ((_QWORD*)GameData_2240f10 == a1) {
    GameData_2240f10 = 0;
    GameData_2240f20 = 0;
  }
  return result;
}

#pragma GCC visibility pop
