#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 UnitExpChangeUtil_Unknown2(__int64 result);
__int64 UnitExpChangeUtil_Unknown4(__int64 a1);

__int64 UnitExpChangeUtil_Unknown2(__int64 result)
{
  unsigned __int64 v1;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;

  v1 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((int)v1 < 1) {
    return 0;
  }
  v2 = *(_DWORD*)(result + 8);
  LODWORD(result) = 0;
  v3 = *(_DWORD*)(GameData_21d9968 + 4LL * (unsigned int)(v1 - 1));
  if (v3 >= v2) {
    v3 = v2;
  }
  if (v2 >= *(_DWORD*)GameData_21d9968) {
    v4 = v3;
  }
  else {
    v4 = *(_DWORD*)GameData_21d9968;
  }
  while (1) {
    v5 = (unsigned int)(result + v1) >> 1;
    v6 = *(_DWORD*)(GameData_21d9968 + 4LL * v5);
    if (v4 == v6) {
      break;
    }
    if (v4 >= v6) {
      result = v5 + 1;
    }
    else {
      result = (unsigned int)result;
    }
    if (v4 < v6) {
      LODWORD(v1) = v5;
    }
    if ((int)result >= (int)v1) {
      return result;
    }
  }
  return v5 + 1;
}

__int64 UnitExpChangeUtil_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, a1);
}

#pragma GCC visibility pop
