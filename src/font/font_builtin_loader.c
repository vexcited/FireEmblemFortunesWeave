#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a46540(__int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_pl_GetBuiltInFontData(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);
__int64 FontBuiltinLoader_Destructor(__int64 result);
__int64 FontBuiltinLoader_DeletingDestructor(__int64 a1);
__int64 FontBuiltinLoader_Unknown2(__int64 result, __int64 a2, int a3);
__int64 FontBuiltinLoader_Unknown3(__int64 result);
__int64 FontBuiltinLoader_Unknown4(__int64 a1);

__int64 FontBuiltinLoader_Destructor(__int64 result)
{
  __int64 v1;

  if ((*(_BYTE*)(result + 40) & 1) != 0 && *(_QWORD*)(result + 56) != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1);
  }
  return result;
}

__int64 FontBuiltinLoader_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 40) & 1) != 0 && *(_QWORD*)(a1 + 56) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v3);
}

__int64 FontBuiltinLoader_Unknown2(__int64 result, __int64 a2, int a3)
{
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char v17;
  char v18;
  __int64 v19;
  _QWORD v20[2];
  char* v21;

  if (a2 == 0) {
    return result;
  }
  v4 = result + 40;
  v3 = *(_BYTE*)(result + 40);
  v5 = result;
  *(_BYTE*)(result + 65) = 0;
  *(_BYTE*)(result + 64) = a3 != 0;
  if ((v3 & 1) != 0) {
    **(_BYTE**)(result + 56) = 0;
    *(_QWORD*)(result + 48) = 0;
  }
  else {
    *(_WORD*)(result + 40) = 0;
  }
  v7 = strlen(a2);
  GameRoutine_1a09ce0(v4, a2, v7);
  if ((*(_BYTE*)(v5 + 40) & 1) != 0) {
    v8 = *(_QWORD*)(v5 + 56);
  }
  else {
    v8 = v5 + 41;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v9, v10, v11, v12, v13);
  }
  v14 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v9 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                16, 0);
    v20[1] = v14;
    v21 = v15;
    v20[0] = v16 | 1;
    goto LABEL_16;
  }
  LOBYTE(v20[0]) = 2 * v9;
  v15 = (char*)v20 + 1;
  if (v9 != 0) {
  LABEL_16:
    memcpy(v15, v8, v14);
  }
  v15[v14] = 0;
  v17 = GameRoutine_a46540((__int64)v20);
  if ((v20[0] & 1) != 0 && v21 != nullptr) {
    v18 = v17;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
    v17 = v18;
  }
  *(_BYTE*)(v5 + 32) = 0x30201040005uLL >> (8 * v17);
  do {
    *(_BYTE*)(v5 + 65) =
        (nn_pl_GetBuiltInFontData(v5 + 8, *(unsigned __int8*)(v5 + 32),
                                  *(unsigned __int8*)(v5 + 64)) &
         1) == 0;
    result = nn_os_SleepThread(8000000);
  } while (*(_BYTE*)(v5 + 65) != 1);
  *(_BYTE*)(v5 + 65) = 1;
  return result;
}

__int64 FontBuiltinLoader_Unknown3(__int64 result)
{
  *(_BYTE*)(result + 65) = 0;
  return result;
}

__int64 FontBuiltinLoader_Unknown4(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    return *(_QWORD*)(a1 + 56);
  }
  else {
    return a1 + 41;
  }
}

#pragma GCC visibility pop
