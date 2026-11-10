#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_combat_GambitRunFunc_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 GambitRunFunc_Destructor(__int64 a1);
__n128 GambitRunFunc_DeletingDestructor(__int64 a1);

__n128 GambitRunFunc_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __n128 result;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_combat_GambitRunFunc_vtable;
  v2 = (_QWORD*)(a1 + 64);
  v3 = *(_QWORD**)(a1 + 96);
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

__n128 GambitRunFunc_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_combat_GambitRunFunc_vtable;
  v2 = (_QWORD*)(a1 + 64);
  v3 = *(_QWORD**)(a1 + 96);
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  v5 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8, a1);
}

#pragma GCC visibility pop
