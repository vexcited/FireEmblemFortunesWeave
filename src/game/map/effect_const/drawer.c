#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9647c0(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_EffectConst_Drawer_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Drawer_Destructor(_QWORD* a1);

__int64 Drawer_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  __int64 v20;

  v2 = a1 + 9216;
  *a1 = game_map_EffectConst_Drawer_vtable;
  result = GameRoutine_9647c0((__int64)a1);
  v4 = v2[17];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v2[18] = v4;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v6);
  }
  v7 = (_QWORD*)v2[14];
  if (v7 != nullptr) {
    do {
      v8 = (_QWORD*)*v7;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v9);
      v7 = v8;
    } while (v8 != nullptr);
  }
  v10 = v2[12];
  v2[12] = 0;
  if (v10 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v11);
  }
  v12 = (_QWORD*)v2[9];
  if (v12 != nullptr) {
    do {
      v13 = (_QWORD*)*v12;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v14);
      v12 = v13;
    } while (v13 != nullptr);
  }
  v15 = v2[7];
  v2[7] = 0;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16);
  }
  v17 = v2[4];
  if (v17 != 0) {
    v2[5] = v17;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v18 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v18);
  }
  for (i = 8188; i != -4; i -= 8) {
    v20 = a1[i];
    if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      result = std___1___shared_weak_count___release_weak(v20);
    }
  }
  return result;
}

#pragma GCC visibility pop
