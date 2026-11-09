#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcGameSkip_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
__int64 ProcGameSkip_Destructor(__int64 a1);

__int64 ProcGameSkip_Destructor(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = *(_QWORD**)(a1 + 184);
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)a1 = game_anonymous_ProcGameSkip_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = v2 - v1;
  if (v5 >= 3) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, *v1);
        v1 = *(_QWORD**)(a1 + 184);
        v2 = *(_QWORD**)(a1 + 192);
      }
      *(_QWORD*)(a1 + 184) = ++v1;
      v5 = v2 - v1;
    } while (v5 > 2);
  }
  if (v5 == 1) {
    v7 = 64;
  }
  else {
    if (v5 != 2) {
      goto LABEL_14;
    }
    v7 = 128;
  }
  *(_QWORD*)(a1 + 208) = v7;

LABEL_14:
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, *v1);
      }
      ++v1;
    } while (v1 != v2);
    v9 = *(_QWORD*)(a1 + 192);
    v10 = *(_QWORD*)(a1 + 184) - v9;
    if (v10 != 0) {
      *(_QWORD*)(a1 + 192) = v9 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v11 = *(_QWORD*)(a1 + 176);
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v11);
  }
  game_ProcGameSkipView_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
