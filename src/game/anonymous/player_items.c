#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_2025428[])();
extern __int64 (*game_TransporterConst_List_vtable[])();
extern __int64 (*game_anonymous_PlayerItems_vtable[])();
extern __int64 GameData_2240f00;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 PlayerItems_Destructor(_QWORD* a1);
__int64 PlayerItems_DeletingDestructor(_QWORD* a1);

__int64 PlayerItems_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  *a1 = game_anonymous_PlayerItems_vtable;
  a1[4] = game_TransporterConst_List_vtable;
  result = a1[5];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[5] = 0;
  }
  v3 = a1[1];
  if (v3 != 0) {
    a1[2] = v3;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  *a1 = GameData_2025428;
  if ((_QWORD*)GameData_2240f00 == a1) {
    GameData_2240f00 = 0;
  }
  return result;
}

__int64 PlayerItems_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_anonymous_PlayerItems_vtable;
  a1[4] = game_TransporterConst_List_vtable;
  v2 = a1[5];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[5] = 0;
  }
  v3 = a1[1];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[2] = v3;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6);
  }
  if ((_QWORD*)GameData_2240f00 == a1) {
    GameData_2240f00 = 0;
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7);
}

#pragma GCC visibility pop
