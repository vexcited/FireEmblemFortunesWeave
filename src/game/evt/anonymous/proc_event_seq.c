#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_evt_anonymous_ProcEventSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcEventSeq_Destructor_eabbc0(__int64 a1);
__int64 ProcEventSeq_DeletingDestructor(__int64 a1);

__int64 ProcEventSeq_Destructor_eabbc0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v9;

  v1 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)a1 = game_evt_anonymous_ProcEventSeq_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 168);
    if (v1 == v3) {
      goto LABEL_8;
    }
    do {
      v4 = *(unsigned int*)(v3 - 8);
      v5 = v3 - 32;
      if ((_DWORD)v4 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v4])(&v9, v3 - 32);
      }
      *(_DWORD*)(v3 - 8) = -1;
      v3 -= 32;
    } while (v5 != v1);
    v6 = *(_QWORD*)(a1 + 160);
    *(_QWORD*)(a1 + 168) = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v1);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcEventSeq_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v11;

  v1 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)a1 = game_evt_anonymous_ProcEventSeq_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(a1 + 168);
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      v5 = *(unsigned int*)(v4 - 8);
      v6 = v4 - 32;
      if ((_DWORD)v5 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v5])(&v11, v4 - 32);
      }
      *(_DWORD*)(v4 - 8) = -1;
      v4 -= 32;
    } while (v6 != v1);
    v7 = *(_QWORD*)(a1 + 160);
    *(_QWORD*)(a1 + 168) = v1;
    v1 = v7;
    if (v7 != 0) {
    LABEL_8:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v1);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

#pragma GCC visibility pop
