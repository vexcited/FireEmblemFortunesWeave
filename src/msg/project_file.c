#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6315e0(_QWORD);
__int64 GameRoutine_a4a6a0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_21fdd18)(__int64);
extern __int64 (*msg_ProjectFile_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProjectFile_DeletingDestructor(_QWORD* a1);
__int64 ProjectFile_Unknown2(__int64 a1);

__int64 ProjectFile_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = a1[100];
  *a1 = msg_ProjectFile_vtable;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    GameData_21fdd18(v3);
  }
  GameData_21fdd18(v1);
  GameRoutine_6315e0(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

__int64 ProjectFile_Unknown2(__int64 a1)
{
  __int64 result;

  result = GameRoutine_a4a6a0(*(_QWORD*)(a1 + 592));
  *(_QWORD*)(a1 + 800) = result;
  return result;
}

#pragma GCC visibility pop
