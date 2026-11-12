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
__n128
ProcGmapEvent_Destructor_alt1(__int64 a1) __asm__("ProcGmapEvent_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcGmapEvent_Destructor(__int64 a1);

void ProcGmapEvent_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;

  v1 = *(_QWORD*)(a1 + 296);
  *(_QWORD*)a1 = game_gmap_ProcGmapEvent_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
    if ((*(_BYTE*)(a1 + 240) & 1) == 0) {
      goto LABEL_9;
    }
  }
  else if ((*(_BYTE*)(a1 + 240) & 1) == 0) {
    goto LABEL_9;
  }
  v3 = *(_QWORD*)(a1 + 256);
  if (v3 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
  }
LABEL_9:
  v5 = *(_QWORD*)(a1 + 216);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 224);
    if (v5 == v6) {
      goto LABEL_20;
    }
    v7 = *(_QWORD*)(a1 + 224);
    v8 = fw_memory_g_heap_manager_ptr;
    do {
      v9 = *(_BYTE*)(v7 - 24);
      v7 -= 24;
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v6 - 8);
        if (v10 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v11, v10);
        }
      }
      v6 = v7;
    } while (v7 != v5);
    v12 = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(a1 + 224) = v5;
    v5 = v12;
    if (v12 != 0) {
    LABEL_20:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v5);
    }
  }
  v14 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_204abe0;
  if (v14 == (_QWORD*)(a1 + 160)) {
    v15 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_28;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v14 + v15))((__int64)v14);
LABEL_28:
  GameData_22549a8 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
