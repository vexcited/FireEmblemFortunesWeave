#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LegionStackController_Destructor(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fe3dd8[])();
extern __int64 (*game_combat_LegionActionManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 LegionActionManager_Destructor_alt1(__int64 a1) __asm__(
    "LegionActionManager_Destructor");
void LegionStackController_Destructor_alt1(_QWORD*) __asm__(
    "LegionStackController_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void LegionActionManager_Destructor(__int64 a1);

void LegionActionManager_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  *(_QWORD*)a1 = game_combat_LegionActionManager_vtable;
  if (*(_BYTE*)(a1 + 28) == 1) {
    v2 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 24));
    (*(void (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2);
    if (*(_BYTE*)(a1 + 28) == 1) {
      *(_BYTE*)(a1 + 28) = 0;
    }
  }
  v3 = *(_QWORD**)(a1 + 40);
  v4 = *(_QWORD**)(a1 + 48);
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
        *v3 = 0;
      }
      ++v3;
    } while (v3 != v4);
    v3 = *(_QWORD**)(a1 + 40);
  }
  v5 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 48) = v3;
  *(_QWORD*)(a1 + 184) = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  LegionStackController_Destructor_alt1((_QWORD*)(a1 + 128));
  *(_QWORD*)(a1 + 16) = GameData_1fe3dd8;
  if (*(_BYTE*)(a1 + 28) == 1) {
    v6 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 24));
    (*(void (**)(__int64))(*(_QWORD*)v6 + 40LL))(v6);
    if (*(_BYTE*)(a1 + 28) == 1) {
      *(_BYTE*)(a1 + 28) = 0;
    }
  }
  v7 = *(_QWORD**)(a1 + 40);
  v8 = *(_QWORD**)(a1 + 48);
  if (v7 != v8) {
    do {
      if (*v7 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v7 + 8LL))(*v7);
        *v7 = 0;
      }
      ++v7;
    } while (v7 != v8);
    v7 = *(_QWORD**)(a1 + 40);
  }
  v9 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 48) = v7;
  if (v9 == (_QWORD*)(a1 + 64)) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_26;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
  v7 = *(_QWORD**)(a1 + 40);
LABEL_26:
  if (v7 != nullptr) {
    *(_QWORD*)(a1 + 48) = v7;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v7);
  }
}

#pragma GCC visibility pop
