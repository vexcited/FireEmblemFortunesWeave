#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_192f90(_QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_212bfd8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Variable_DeletingDestructor(__int64 a1);

__int64 Variable_DeletingDestructor(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = GameData_212bfd8 + 16;
  v2 = *(_DWORD*)(a1 + 32);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 == 7) {
    GameRoutine_192f90(*(_QWORD*)(a1 + 8));
  }
  else {
    if (v2 != 4) {
      goto LABEL_10;
    }
    v4 = *(_QWORD**)(a1 + 8);
    if ((*(_BYTE*)v4 & 1) != 0) {
      GameRoutine_25ec90(v4[2], *v4 & 0xFFFFFFFFFFFFFFFELL);
    }
    v5 = 368;
    if (*(_QWORD*)(*(_QWORD*)v3 + 440LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, v4);
  }
  *(_QWORD*)(a1 + 8) = 0;
  *(_DWORD*)(a1 + 32) = 0;

LABEL_10:
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

#pragma GCC visibility pop
