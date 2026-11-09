#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcGrowSeq_vtable[])();
extern __int64 GameData_21ca2f8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcGrowSeq_Destructor(__int64 a1);

__int64 ProcGrowSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  *(_QWORD*)a1 = game_anonymous_ProcGrowSeq_vtable;
  if (*(_BYTE*)(a1 + 475) == 1 && GameData_21ca2f8 != 0) {
    *(_DWORD*)(GameData_21ca2f8 + 20) &= ~0x10000000u;
  }
  v2 = *(_QWORD*)(a1 + 448);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 456) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v2);
  }
  v6 = *(_QWORD*)(a1 + 392);
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 400) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = *(_QWORD*)(a1 + 368);
  if (v9 != 0) {
    v10 = *v3;
    *(_QWORD*)(a1 + 376) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = *(_QWORD*)(a1 + 336);
  if (v12 != 0) {
    v13 = *v3;
    *(_QWORD*)(a1 + 344) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = *(_QWORD*)(a1 + 312);
  if (v15 != 0) {
    v16 = *v3;
    *(_QWORD*)(a1 + 320) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
