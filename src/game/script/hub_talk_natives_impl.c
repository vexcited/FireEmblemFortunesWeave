#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1647b80(_QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_1a89034;
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_1fe2b80[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 HubTalkNatives_e140f0(__int64 result);
__int64 HubTalkNatives_e14270(__int64 a1, __int64 a2);

__int64 HubTalkNatives_e140f0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  if ((*(_BYTE*)(result + 120) & 1) != 0 && *(_QWORD*)(result + 136) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if ((*(_BYTE*)(v1 + 96) & 1) != 0 && *(_QWORD*)(v1 + 112) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(v1 + 72) & 1) != 0 && *(_QWORD*)(v1 + 88) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  if ((*(_BYTE*)(v1 + 48) & 1) != 0 && *(_QWORD*)(v1 + 64) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  if ((*(_BYTE*)(v1 + 24) & 1) != 0 && *(_QWORD*)(v1 + 40) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  if ((*(_BYTE*)v1 & 1) != 0 && *(_QWORD*)(v1 + 16) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  return result;
}

__int64 HubTalkNatives_e14270(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  if (a1 != 0) {
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1504, 16, 0);
    GameRoutine_1647b80(v4, a2);
    GameRoutine_657850(v4, GameData_212c730, &GameData_1a89034, 1, a1);
    v8[0] = GameData_1fe2b80;
    v9 = v8;
    v11 = v10;
    v10[0] = GameData_1fe2b80;
    GameRoutine_654050(v10, v4 + 1200);
    if (v11 == v10) {
      v5 = 32;
    }
    else {
      if (v11 == nullptr) {
        goto LABEL_8;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
  LABEL_8:
    if (v9 == v8) {
      v6 = 32;
    }
    else {
      if (v9 == nullptr) {
      LABEL_13:
        *(_BYTE*)(v4 + 1080) = 1;
        return v4;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v9 + v6))((__int64)v9);
    goto LABEL_13;
  }
  return 0;
}

#pragma GCC visibility pop
