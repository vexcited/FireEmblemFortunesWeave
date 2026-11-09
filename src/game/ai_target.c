#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201efc8[])();
extern __int64 GameData_22400e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2240790;
__int64 AITarget_Destructor(__int64 result);
__int64 AITarget_DeletingDestructor(_QWORD* a1);

__int64 AITarget_Destructor(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = *(_QWORD**)(result + 24720);
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = v2[3088];
  v2[3088] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = (_QWORD*)v2[1547];
  if (v8 != nullptr) {
    do {
      v9 = (_QWORD*)*v8;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
      v8 = v9;
    } while (v9 != nullptr);
  }
  v11 = v2[1545];
  v2[1545] = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
  }
  v2[7] = GameData_201efc8;
  if ((_QWORD*)GameData_22400e8 == v2) {
    GameData_22400e8 = 0;
    GameData_2240790 = 0;
  }
  return result;
}

__int64 AITarget_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = (_QWORD*)a1[3090];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[3088];
  a1[3088] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = (_QWORD*)a1[1547];
  if (v8 != nullptr) {
    do {
      v9 = (_QWORD*)*v8;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
      v8 = v9;
    } while (v9 != nullptr);
  }
  v11 = a1[1545];
  a1[1545] = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
  }
  a1[7] = GameData_201efc8;
  if ((_QWORD*)GameData_22400e8 == a1) {
    GameData_22400e8 = 0;
    GameData_2240790 = 0;
  }
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
}

#pragma GCC visibility pop
