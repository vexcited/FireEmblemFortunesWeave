#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_evt_demo_SwitchMapSituationProc_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SwitchMapSituationProc_Destructor(__int64 a1);
__int64 SwitchMapSituationProc_DeletingDestructor(__int64 a1);

__int64 SwitchMapSituationProc_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_evt_demo_SwitchMapSituationProc_vtable;
  v2 = (_QWORD*)(a1 + 176);
  v3 = *(_QWORD**)(a1 + 208);
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  if ((*(_BYTE*)(a1 + 152) & 1) != 0 && *(_QWORD*)(a1 + 168) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 SwitchMapSituationProc_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_evt_demo_SwitchMapSituationProc_vtable;
  v2 = (_QWORD*)(a1 + 176);
  v3 = *(_QWORD**)(a1 + 208);
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  v5 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 152) & 1) != 0 && *(_QWORD*)(a1 + 168) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
}

#pragma GCC visibility pop
