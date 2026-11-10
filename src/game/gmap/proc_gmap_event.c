#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_ProcInst_Unregister(__int64 result);
__n128 GameRoutine_658c00(_QWORD*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_204abe0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_ProcGmapEvent_vtable[])();
extern __int64 GameData_22549a8;
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ProcGmapEvent_Destructor(__int64 a1);

__n128 ProcGmapEvent_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 296);
  *(_QWORD*)a1 = game_gmap_ProcGmapEvent_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
    if ((*(_BYTE*)(a1 + 240) & 1) == 0) {
      goto LABEL_9;
    }
  }
  else if ((*(_BYTE*)(a1 + 240) & 1) == 0) {
    goto LABEL_9;
  }
  if (*(_QWORD*)(a1 + 256) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
LABEL_9:
  v4 = *(_QWORD*)(a1 + 216);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 224);
    if (v4 == v5) {
      goto LABEL_20;
    }
    v6 = *(_QWORD*)(a1 + 224);
    v7 = fw_memory_g_heap_manager_ptr;
    do {
      v8 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v8 & 1) != 0 && *(_QWORD*)(v5 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9);
      }
      v5 = v6;
    } while (v6 != v4);
    v10 = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(a1 + 224) = v4;
    if (v10 != 0) {
    LABEL_20:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v11);
    }
  }
  v12 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_204abe0;
  if (v12 == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_28;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_28:
  GameData_22549a8 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

#pragma GCC visibility pop
