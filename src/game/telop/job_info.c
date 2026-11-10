#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20bc808[])();
extern __int64 (*GameData_20bc8c8[])();
extern __int64 (*game_telop_JobInfo_vtable[])();
extern __int64 GameData_2263be8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
char* JobInfo_Unknown26(__int64 a1);
char* JobInfo_Unknown27(__int64 a1);
__int64 JobInfo_Unknown44(__int64 result);
__int64 JobInfo_Destructor(__int64 a1);
__int64 JobInfo_DeletingDestructor(__int64 a1);
__int64 TelopReliance_1386f80(_QWORD);
__int64 JobInfo_Destructor_175e660(__int64 a1);
__int64 JobInfo_DeletingDestructor_175e700(__int64 a1);

char* JobInfo_Unknown26(__int64 a1)
{
  if (*(_DWORD*)(a1 + 848) == 1) {
    return &GameData_1a9f09e;
  }
  else {
    return "In";
  }
}

char* JobInfo_Unknown27(__int64 a1)
{
  if (*(_DWORD*)(a1 + 848) == 1) {
    return &GameData_1a9f09e;
  }
  else {
    return "Out";
  }
}

__int64 JobInfo_Unknown44(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(_BYTE*)(result + 880) == 1) {
    v1 = *(unsigned __int8**)(result + 16);
    *(_BYTE*)(result + 880) = 0;
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

__int64 JobInfo_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_telop_JobInfo_vtable;
  *(_QWORD*)(a1 + 824) = GameData_20bc808;
  if ((*(_BYTE*)(a1 + 856) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 872);
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
  *(_QWORD*)(a1 + 824) = GameData_20bc8c8;
  if (GameData_2263be8 == a1) {
    GameData_2263be8 = 0;
  }
  return GameRoutine_1386f80(a1);
}

__int64 JobInfo_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_telop_JobInfo_vtable;
  *(_QWORD*)(a1 + 824) = GameData_20bc808;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 856) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 872);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  *(_QWORD*)(a1 + 824) = GameData_20bc8c8;
  if (GameData_2263be8 == a1) {
    GameData_2263be8 = 0;
  }
  GameRoutine_1386f80(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

__int64 JobInfo_Destructor_175e660(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  v2 = (_QWORD*)(a1 - 824);
  *v2 = game_telop_JobInfo_vtable;
  *(_QWORD*)a1 = GameData_20bc808;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 48);
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
  *(_QWORD*)a1 = GameData_20bc8c8;
  if ((_QWORD*)GameData_2263be8 == v2) {
    GameData_2263be8 = 0;
  }
  return TelopReliance_1386f80(v2);
}

__int64 JobInfo_DeletingDestructor_175e700(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1 - 824;
  *(_QWORD*)(a1 - 824) = game_telop_JobInfo_vtable;
  *(_QWORD*)a1 = GameData_20bc808;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 48);
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
  *(_QWORD*)a1 = GameData_20bc8c8;
  if (GameData_2263be8 == v1) {
    GameData_2263be8 = 0;
  }
  TelopReliance_1386f80(v1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v1);
}

#pragma GCC visibility pop
