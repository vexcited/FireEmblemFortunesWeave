#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6315e0(_QWORD);
__int64 GameRoutine_a4a0e0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_21fdd18)(__int64);
extern __int64 (*msg_MessageFile_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MessageFile_Destructor(__int64 a1);
__int64 MessageFile_DeletingDestructor(__int64 a1);
__int64 MessageFile_Unknown2(__int64 a1);

__int64 MessageFile_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 800);
  *(_QWORD*)a1 = msg_MessageFile_vtable;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    GameData_21fdd18(v3);
  }
  GameData_21fdd18(v1);
  if ((*(_BYTE*)(a1 + 808) & 1) != 0 && *(_QWORD*)(a1 + 824) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return GameRoutine_6315e0(a1);
}

__int64 MessageFile_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 800);
  *(_QWORD*)a1 = msg_MessageFile_vtable;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    GameData_21fdd18(v3);
  }
  GameData_21fdd18(v1);
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 808) & 1) != 0 && *(_QWORD*)(a1 + 824) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  GameRoutine_6315e0(a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
}

__int64 MessageFile_Unknown2(__int64 a1)
{
  __int64 result;

  result = GameRoutine_a4a0e0(*(_QWORD*)(a1 + 592));
  *(_QWORD*)(a1 + 800) = result;
  return result;
}

#pragma GCC visibility pop
