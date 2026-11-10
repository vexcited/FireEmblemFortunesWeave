#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e51940(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fe6640[])();
extern __int64 (*game_combat_GambitMotion_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_combat_GambitMotion_Run(__int64 a1);
__n128 GambitMotion_Destructor(__int64 a1);
__n128 GambitMotion_DeletingDestructor(__int64 a1);

__int64 game_combat_GambitMotion_Run(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fe6640;
  v3[1] = a1;
  v4 = v3;
  GameRoutine_e51940(a1, v3);
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
}

__n128 GambitMotion_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __n128 result;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_combat_GambitMotion_vtable;
  v2 = (_QWORD*)(a1 + 144);
  v3 = *(_QWORD**)(a1 + 176);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v6 = *(_QWORD**)(a1 + 128);
  if (v6 == (_QWORD*)(a1 + 96)) {
    v7 = 32;
    goto LABEL_10;
  }
  if (v6 != nullptr) {
    v7 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 40);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
  return result;
}

__n128 GambitMotion_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = game_combat_GambitMotion_vtable;
  v2 = (_QWORD*)(a1 + 144);
  v3 = *(_QWORD**)(a1 + 176);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = *(_QWORD**)(a1 + 128);
  if (v5 == (_QWORD*)(a1 + 96)) {
    v6 = 32;
    goto LABEL_10;
  }
  if (v5 != nullptr) {
    v6 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  v7 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 40);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v8);
    }
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v10 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v10, a1);
}

#pragma GCC visibility pop
