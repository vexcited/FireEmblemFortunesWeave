#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_gmap_TroopMgr_Impl_vtable[])();
extern __int64 GameData_21eea40;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
__int64 Impl_Destructor_13505f0(_QWORD* a1);
__int64 Impl_DeletingDestructor_13506b0(_QWORD* a1);

__int64 Impl_Destructor_13505f0(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v10;

  v1 = a1[4];
  *a1 = game_gmap_TroopMgr_Impl_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[5] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[1];
  if (v6 != 0) {
    v7 = *v3;
    a1[2] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v10 = a1;
  *a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40(&GameData_21eea40, &v10);
}

__int64 Impl_DeletingDestructor_13506b0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v11;

  v1 = a1[4];
  *a1 = game_gmap_TroopMgr_Impl_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[5] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[1];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[2] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v11 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v11);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

#pragma GCC visibility pop
