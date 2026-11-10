#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ProcHotelPart3Seq_Unknown18(__int64 result);
_QWORD* GameRoutine_658c00(_QWORD* result);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_208b2f0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_anonymous_ProcMainQuestSeq_vtable[])();
extern __int64 (*game_menu_anonymous_ProcNextSeq_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHotelPart3Seq_DeletingDestructor(__int64 a1);

__int64 ProcHotelPart3Seq_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_menu_anonymous_ProcMainQuestSeq_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 256) & 1) != 0 && *(_QWORD*)(a1 + 272) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  *(_QWORD*)a1 = &game_menu_anonymous_ProcNextSeq_vtable;
  if ((*(_BYTE*)(a1 + 208) & 1) != 0 && *(_QWORD*)(a1 + 224) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
  }
  v5 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_208b2f0;
  if (v5 == (_QWORD*)(a1 + 160)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_16;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_16:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((_QWORD*)(a1 + 88));
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7);
}

__int64 ProcHotelPart3Seq_Unknown18(__int64 result)
{
  *(_DWORD*)(result + 152) = 6;
  return result;
}

#pragma GCC visibility pop
