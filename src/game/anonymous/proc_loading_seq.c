#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_9b8890(_QWORD*);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fb3bd8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcLoadingSeq_vtable[])();
extern __int64 GameData_21f8018;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
__int64 ProcLoadingSeq_Destructor(__int64 a1);
__int64 ProcLoadingSeq_DeletingDestructor(__int64 a1);
_QWORD* ProcLoadingSeq_Unknown2(_QWORD* a1);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 ui_Manager_instance_;
__int64
game_anonymous_ProcLoadingSeq_UpdateByCurrentTips_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64

game_anonymous_ProcLoadingSeq_UpdateByCurrentTips_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *a2;
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 24);
  }
  else {
    v3 = a1 + 9;
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 7, v3);
}

__int64 ProcLoadingSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;

  *(_QWORD*)a1 = game_anonymous_ProcLoadingSeq_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1fb3bd8;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0 && *(_QWORD*)(a1 + 240) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if ((*(_BYTE*)(a1 + 200) & 1) != 0 && *(_QWORD*)(a1 + 216) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if (*(_QWORD*)(a1 + 184) != 0) {
    v4 = *(_QWORD**)(a1 + 176);
    v5 = *(_QWORD**)(*(_QWORD*)(a1 + 168) + 8LL);
    *(_QWORD*)(*v4 + 8LL) = v5;
    *v5 = *v4;
    *(_QWORD*)(a1 + 184) = 0;
    if (v4 != (_QWORD*)(a1 + 168)) {
      v6 = fw_memory_g_heap_manager_ptr;
      do {
        v7 = (_QWORD*)v4[1];
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8);
        v4 = v7;
      } while (v7 != (_QWORD*)(a1 + 168));
    }
  }
  GameData_21f8018 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcLoadingSeq_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_anonymous_ProcLoadingSeq_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1fb3bd8;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0 && *(_QWORD*)(a1 + 240) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(a1 + 200) & 1) != 0 && *(_QWORD*)(a1 + 216) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
  }
  if (*(_QWORD*)(a1 + 184) != 0) {
    v5 = *(_QWORD**)(a1 + 176);
    v6 = *(_QWORD**)(*(_QWORD*)(a1 + 168) + 8LL);
    *(_QWORD*)(*v5 + 8LL) = v6;
    *v6 = *v5;
    *(_QWORD*)(a1 + 184) = 0;
    if (v5 != (_QWORD*)(a1 + 168)) {
      do {
        v7 = (_QWORD*)v5[1];
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8);
        v5 = v7;
      } while (v7 != (_QWORD*)(a1 + 168));
    }
  }
  GameData_21f8018 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9);
}

_QWORD* ProcLoadingSeq_Unknown2(_QWORD* a1)
{
  _QWORD* v1;

  if (*((_BYTE*)a1 + 264) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 952) & 1) != 0) {
    v1 = *(_QWORD**)(a1[24] + 8LL);
    a1[24] = v1;
    if (v1 == a1 + 21) {
      a1[24] = a1[22];
    }
    return (_QWORD*)GameRoutine_9b8890(a1);
  }
  return a1;
}

#pragma GCC visibility pop
