#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11ef240(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_2017b38[])();
extern __int64 GameData_21d9188;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2240080;
__int64 AI_Destructor(__int64 result);
__int64 AI_DeletingDestructor(_QWORD* a1);

__int64 AI_Destructor(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_11ef240(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
  }
  v5 = v2[1];
  v2[1] = 0;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
  }
  *v2 = GameData_2017b38;
  if ((_QWORD*)GameData_21d9188 == v2) {
    GameData_21d9188 = 0;
    GameData_2240080 = 0;
  }
  return result;
}

__int64 AI_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = a1[2];
  a1[2] = 0;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_11ef240(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
  }
  v5 = a1[1];
  a1[1] = 0;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
  }
  *a1 = GameData_2017b38;
  if ((_QWORD*)GameData_21d9188 == a1) {
    GameData_21d9188 = 0;
    GameData_2240080 = 0;
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, a1);
}

#pragma GCC visibility pop
