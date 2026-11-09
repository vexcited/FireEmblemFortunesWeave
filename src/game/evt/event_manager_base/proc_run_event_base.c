#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_evt_EventManagerBase_ProcRunEventBase_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcRunEventBase_Destructor(__int64 a1);

__int64 ProcRunEventBase_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  *(_QWORD*)a1 = &game_evt_EventManagerBase_ProcRunEventBase_vtable;
  if (*(_QWORD*)(a1 + 168) != 0) {
    v2 = *(_QWORD**)(a1 + 160);
    v3 = (_QWORD*)(a1 + 152);
    v4 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 8LL);
    *(_QWORD*)(*v2 + 8LL) = v4;
    *v4 = *v2;
    *(_QWORD*)(a1 + 168) = 0;
    if (v2 != (_QWORD*)(a1 + 152)) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)v2[1];
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7, v2);
        v2 = v6;
      } while (v6 != v3);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
