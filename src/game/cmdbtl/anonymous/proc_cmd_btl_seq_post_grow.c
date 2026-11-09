#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);

extern __int64 (
    *game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_PostGrowArgs_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ddc0[3];
__int64 ProcCmdBtlSeqPostGrow_Destructor(__int64 a1);
__int64 ProcCmdBtlSeqPostGrow_DeletingDestructor(__int64 a1);

__int64 ProcCmdBtlSeqPostGrow_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 208);
  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_vtable;
  *(_QWORD*)(a1 + 152) =
      game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_PostGrowArgs_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 216) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD**)(a1 + 184);
  v7 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = GameData_212ddc0[0] + 2;
  *(_QWORD*)(a1 + 168) = *(_QWORD*)(a1 + 160);
  if (v6 == v7) {
    *(_QWORD*)(a1 + 192) = v6;
    if (v6 == nullptr) {
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  do {
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    ++v6;
  } while (v6 != v7);
  v13 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 192) = v13;
  if (v13 != 0) {
  LABEL_7:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
  }

LABEL_10:
  v9 = *(_QWORD*)(a1 + 160);
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 168) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcCmdBtlSeqPostGrow_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v1 = *(_QWORD*)(a1 + 208);
  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_vtable;
  *(_QWORD*)(a1 + 152) =
      game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_PostGrowArgs_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 216) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD**)(a1 + 184);
  v7 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = GameData_212ddc0[0] + 2;
  *(_QWORD*)(a1 + 168) = *(_QWORD*)(a1 + 160);
  if (v6 == v7) {
    *(_QWORD*)(a1 + 192) = v6;
    if (v6 == nullptr) {
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  do {
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    ++v6;
  } while (v6 != v7);
  v14 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 192) = v14;
  if (v14 != 0) {
  LABEL_7:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
  }

LABEL_10:
  v9 = *(_QWORD*)(a1 + 160);
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 168) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v12 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
}

#pragma GCC visibility pop
