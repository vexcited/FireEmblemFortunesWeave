#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqEscape_vtable[])();
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcCmdBtlSeqEscape_Destructor(__int64 a1);
__int64 ProcCmdBtlSeqEscape_DeletingDestructor(__int64 a1);

__int64 ProcCmdBtlSeqEscape_Destructor(__int64 a1)
{
  __int64 v2;
  int v3;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqEscape_vtable;
  v2 = GameData_225ca88;
  if (GameData_225ca88 != 0 && (*(_BYTE*)(GameData_225ca88 + 1977) & 1) == 0) {
    v3 = *(_DWORD*)(GameData_225ca88 + 1984);
    if (v3 >= 1) {
      *(_DWORD*)(GameData_225ca88 + 1984) = 0;
    LABEL_5:
      *(_BYTE*)(v2 + 1977) = 1;
      *(_DWORD*)(v2 + 1980) = 2;
      goto LABEL_7;
    }
    if (v3 == 0) {
      goto LABEL_5;
    }
  }

LABEL_7:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcCmdBtlSeqEscape_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqEscape_vtable;
  v2 = GameData_225ca88;
  if (GameData_225ca88 != 0 && (*(_BYTE*)(GameData_225ca88 + 1977) & 1) == 0) {
    v3 = *(_DWORD*)(GameData_225ca88 + 1984);
    if (v3 >= 1) {
      *(_DWORD*)(GameData_225ca88 + 1984) = 0;
    LABEL_5:
      *(_BYTE*)(v2 + 1977) = 1;
      *(_DWORD*)(v2 + 1980) = 2;
      goto LABEL_7;
    }
    if (v3 == 0) {
      goto LABEL_5;
    }
  }

LABEL_7:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

#pragma GCC visibility pop
