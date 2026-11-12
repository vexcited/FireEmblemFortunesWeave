#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_ProcInst_Unregister(__int64 result);
__n128 GameRoutine_658c00(_QWORD*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_204ae20[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcGmapDisposTroop_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ProcGmapDisposTroop_Destructor_alt1(__int64 a1) __asm__(
    "ProcGmapDisposTroop_Destructor");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcGmapDisposTroop_Destructor(__int64 a1);

void ProcGmapDisposTroop_Destructor(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;

  v1 = *(_QWORD**)(a1 + 264);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcGmapDisposTroop_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v5 = (_QWORD*)*v1;
      v6 = v1[3];
      if (v6 != 0) {
        v7 = *(_QWORD*)v3;
        v1[4] = v6;
        if (*(_QWORD*)(v7 + 200) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, (__int64)v1);
      v1 = v5;
    } while (v5 != nullptr);
  }
  v9 = *(_QWORD*)(a1 + 248);
  *(_QWORD*)(a1 + 248) = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v9);
  }
  v11 = *(_QWORD**)(a1 + 224);
  if (v11 != nullptr) {
    do {
      v13 = (_QWORD*)*v11;
      v14 = v11[3];
      if (v14 != 0) {
        v15 = *(_QWORD*)v3;
        v11[4] = v14;
        if (*(_QWORD*)(v15 + 200) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v15 + v16, v14);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v12 = 128;
      }
      else {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12, (__int64)v11);
      v11 = v13;
    } while (v13 != nullptr);
  }
  v17 = *(_QWORD*)(a1 + 208);
  *(_QWORD*)(a1 + 208) = 0;
  if (v17 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v18, v17);
  }
  v19 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_204ae20;
  if (v19 == (_QWORD*)(a1 + 160)) {
    v20 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_36;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
LABEL_36:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
