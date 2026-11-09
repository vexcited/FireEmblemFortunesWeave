#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201e128[])();
extern __int64 GameData_2240088;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22401a4;
__int64 AIHistory_Destructor(__int64 result);

__int64 AIHistory_Destructor(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = 0;
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = v2[4];
  v2[4] = 0;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
  }
  v7 = v2[3];
  v2[3] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
  }
  v9 = v2[2];
  v2[2] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
  }
  *v2 = GameData_201e128;
  if ((_QWORD*)GameData_2240088 == v2) {
    GameData_2240088 = 0;
    GameData_22401a4 = 0;
  }
  return result;
}

#pragma GCC visibility pop
