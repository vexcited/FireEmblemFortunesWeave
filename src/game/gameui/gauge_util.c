#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_MasteryExpChange_vtable[])();
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GaugeUtil_174ffa0(__int64 a1);
unsigned __int64 GaugeUtil_1750620();
__int64 GaugeUtil_17530b0(__int64 a1);
__int64 GaugeUtil_17535a0(__int64 result);

__int64 GaugeUtil_174ffa0(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 128);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v3 != 0) {
          return *(float*)(a1 + 16) != 0.0;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        std___1___shared_weak_count___release_weak();
        if (v3 != 0) {
          return *(float*)(a1 + 16) != 0.0;
        }
      }
      return 0;
    }
  }
  return result;
}

unsigned __int64 GaugeUtil_1750620()
{
  unsigned int v0;
  unsigned int v1;
  unsigned __int64 v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  signed int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;

  v0 = 0;
  v1 = 0;
  v2 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v2 >= 12) {
    v3 = 12;
  }
  else {
    v3 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  }
  while ((int)v2 >= 1) {
    v8 = *(_DWORD*)(GameData_21d99a8 - 4 + 4LL * v3);
    v9 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v2 - 1));
    v10 = 0;
    if (v9 >= v8) {
      v9 = *(_DWORD*)(GameData_21d99a8 - 4 + 4LL * v3);
    }
    if (v8 >= *(_DWORD*)GameData_21d99a8) {
      v11 = v9;
    }
    else {
      v11 = *(_DWORD*)GameData_21d99a8;
    }
    v12 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    while (1) {
      v13 = (unsigned int)(v10 + v12) >> 1;
      v14 = *(_DWORD*)(GameData_21d99a8 + 4LL * v13);
      if (v11 == v14) {
        break;
      }
      if (v11 < v14) {
        v12 = (unsigned int)(v10 + v12) >> 1;
      }
      else {
        v10 = v13 + 1;
      }
      if (v10 >= v12) {
        goto LABEL_23;
      }
    }
    if (v0 >= (unsigned __int8)(v13 + 1)) {
      return v1 / 0xAuLL;
    }
  LABEL_26:
    if ((int)v0 >= (int)v2) {
      v15 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v15 = v0;
    }
    if (v0 != 0) {
      v16 = v15;
    }
    else {
      v16 = 1;
    }
    if (v16 == (_DWORD)v2) {
      v4 = 0;
    }
    else {
      v4 = *(_DWORD*)(GameData_21d99a8 + 4LL * v16);
    }
    v5 = v15 - 1;
    if (v0++ == 0) {
      v5 = 0;
    }
    v7 = v4 - *(_DWORD*)(GameData_21d99a8 + 4LL * v5);
    if (v7 > (int)v1) {
      v1 = v7;
    }
  }
  LOBYTE(v10) = 0;
LABEL_23:
  if (v0 < (unsigned __int8)v10) {
    goto LABEL_26;
  }
  return v1 / 0xAuLL;
}

__int64 GaugeUtil_17530b0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_MasteryExpChange_vtable;
  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
  return result;
}

__int64 GaugeUtil_17535a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  *(_QWORD*)result = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(result + 104) & 1) != 0) {
    v2 = *(_QWORD*)(result + 120);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(v1 + 80) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 96);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if ((*(_BYTE*)(v1 + 56) & 1) != 0) {
    v6 = *(_QWORD*)(v1 + 72);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
