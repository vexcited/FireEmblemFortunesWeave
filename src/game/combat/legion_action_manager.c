#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LegionStackController_Destructor(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fe3dd8[])();
extern __int64 (*game_combat_LegionActionManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 LegionActionManager_Destructor(__int64 a1);

__n128 LegionActionManager_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

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
  LegionStackController_Destructor(a1 + 128);
  *(_QWORD*)(a1 + 16) = GameData_1fe3dd8;
  if (*(_BYTE*)(a1 + 28) == 1) {
    v7 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 24));
    (*(void (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7);
    if (*(_BYTE*)(a1 + 28) == 1) {
      *(_BYTE*)(a1 + 28) = 0;
    }
  }
  v8 = *(_QWORD**)(a1 + 40);
  v9 = *(_QWORD**)(a1 + 48);
  if (v8 != v9) {
    do {
      if (*v8 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v8 + 8LL))(*v8);
        *v8 = 0;
      }
      ++v8;
    } while (v8 != v9);
    v8 = *(_QWORD**)(a1 + 40);
  }
  v10 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 48) = v8;
  if (v10 == (_QWORD*)(a1 + 64)) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_26;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
  v8 = *(_QWORD**)(a1 + 40);
LABEL_26:
  if (v8 != nullptr) {
    *(_QWORD*)(a1 + 48) = v8;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v8);
  }
  return result;
}

#pragma GCC visibility pop
