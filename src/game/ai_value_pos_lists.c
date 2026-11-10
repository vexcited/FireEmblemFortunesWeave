#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201ee38[])();
extern __int64 GameData_2240078;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2240788;
__int64 AIValuePosLists_Destructor(__int64 result);
__int64 AIValuePosLists_DeletingDestructor(_QWORD* a1);

__int64 AIValuePosLists_Destructor(__int64 result)
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

  v1 = *(_QWORD*)(result + 8);
  v2 = (_QWORD*)result;
  if (v1 != 0) {
    v3 = *(_QWORD*)(result + 16);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_11;
    }
    v5 = *(_QWORD*)(result + 16);
    do {
      v7 = *(_QWORD*)(v5 - 24);
      v5 -= 24;
      v6 = v7;
      if (v7 != 0) {
        *(_QWORD*)(v3 - 16) = v6;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
      }
      v3 = v5;
    } while (v5 != v1);
    v9 = v2[1];
    v2[2] = v1;
    if (v9 != 0) {
    LABEL_11:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
    }
  }
  *v2 = GameData_201ee38;
  if ((_QWORD*)GameData_2240078 == v2) {
    GameData_2240078 = 0;
    GameData_2240788 = 0;
  }
  return result;
}

__int64 AIValuePosLists_DeletingDestructor(_QWORD* a1)
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

  v1 = a1[1];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[2];
    if (v1 == v4) {
      goto LABEL_11;
    }
    v5 = a1[2];
    do {
      v7 = *(_QWORD*)(v5 - 24);
      v5 -= 24;
      v6 = v7;
      if (v7 != 0) {
        *(_QWORD*)(v4 - 16) = v6;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
      }
      v4 = v5;
    } while (v5 != v1);
    v9 = a1[1];
    a1[2] = v1;
    if (v9 != 0) {
    LABEL_11:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
    }
  }
  *a1 = GameData_201ee38;
  if ((_QWORD*)GameData_2240078 == a1) {
    GameData_2240078 = 0;
    GameData_2240788 = 0;
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
}

#pragma GCC visibility pop
