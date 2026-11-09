#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_combat_LegionStack_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f360[10];
extern __int64* GameData_212f3c0[7];
__int64 LegionStackLookBind_Destructor(__int64 result);
__int64 LegionStackLookBind_DeletingDestructor(__int64 a1);

__int64 LegionStackLookBind_Destructor(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  __int64 (**v5)(__int64);
  int v6;
  __int64 v7;

  v1 = result;
  v2 = *(unsigned __int8*)(result + 52);
  *(_QWORD*)result = GameData_212f360[0] + 2;
  v3 = *(_QWORD*)(*(_QWORD*)(result + 40) + 128LL);
  v4 = *(_DWORD*)(v3 + 128);
  if (v2 == 1) {
    *(_DWORD*)(v3 + 128) = v4 + 1;
    if (v4 == 0) {
      v5 = *(__int64 (***)(__int64))(v3 + 120);
    LABEL_6:
      result = (*v5)(v3 + 120);
    }
  }
  else {
    v6 = v4 - 1;
    *(_DWORD*)(v3 + 128) = v6;
    if (v6 == 0) {
      v5 = (__int64 (**)(__int64))(*(_QWORD*)(v3 + 120) + 8LL);
      goto LABEL_6;
    }
  }
  *(_QWORD*)v1 = game_combat_LegionStack_vtable;
  if ((*(_BYTE*)(v1 + 16) & 1) != 0 && *(_QWORD*)(v1 + 32) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  return result;
}

__int64 LegionStackLookBind_DeletingDestructor(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  void (**v5)(__int64);
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *(unsigned __int8*)(a1 + 52);
  *(_QWORD*)a1 = GameData_212f360[0] + 2;
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 128LL);
  v4 = *(_DWORD*)(v3 + 128);
  if (v2 == 1) {
    *(_DWORD*)(v3 + 128) = v4 + 1;
    if (v4 == 0) {
      v5 = *(void (***)(__int64))(v3 + 120);
    LABEL_6:
      (*v5)(v3 + 120);
    }
  }
  else {
    v6 = v4 - 1;
    *(_DWORD*)(v3 + 128) = v6;
    if (v6 == 0) {
      v5 = (void (**)(__int64))(*(_QWORD*)(v3 + 120) + 8LL);
      goto LABEL_6;
    }
  }
  *(_QWORD*)a1 = GameData_212f3c0[0] + 2;
  v7 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9);
}

#pragma GCC visibility pop
