#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a867a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_combat_CombatLegionGroup_vtable[])();
extern __int64 fw_memory_g_heap_manager;
_QWORD* CombatLegionGroup_Destructor(_QWORD* result);

_QWORD* CombatLegionGroup_Destructor(_QWORD* result)
{
  __int64* v1;
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v1 = (__int64*)result[8];
  v2 = (__int64*)result[9];
  v3 = result;
  *result = game_combat_CombatLegionGroup_vtable;
  if (v1 != v2) {
    do {
      v5 = *v1;
      v6 = *(_QWORD*)(*v1 + 48);
      if (v6 == 0 || (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v5 + 56) == 0)
                                               : (v7 = true),
                      v7)) {
        v4 = 0;
      }
      else {
        v4 = *(_QWORD*)(v5 + 8);
      }
      v25 = v4;
      result = (_QWORD*)GameRoutine_a867a0(&v25);
      ++v1;
    } while (v1 != v2);
    v1 = (__int64*)v3[8];
  }
  v8 = v3[11];
  v9 = v3[2];
  v10 = v3[3];
  v3[9] = v1;
  v3[12] = v8;
  if (v9 != v10) {
    do {
      v11 = *(_QWORD*)(v10 - 8);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = (_QWORD*)std___1___shared_weak_count___release_weak();
      }
      v10 -= 16;
    } while (v10 != v9);
    v8 = v3[11];
  }
  v3[3] = v9;
  if (v8 != 0) {
    v12 = fw_memory_g_heap_manager;
    v3[12] = v8;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v12 + v13);
  }
  v14 = v3[8];
  if (v14 != 0) {
    v15 = fw_memory_g_heap_manager;
    v3[9] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v15 + v16);
  }
  v17 = v3[5];
  if (v17 != 0) {
    v18 = fw_memory_g_heap_manager;
    v3[6] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v18 + v19);
  }
  v20 = v3[2];
  if (v20 != 0) {
    v21 = v3[3];
    if (v20 == v21) {
      goto LABEL_39;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        result = (_QWORD*)std___1___shared_weak_count___release_weak();
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = v3[2];
    v3[3] = v20;
    if (v23 != 0) {
    LABEL_39:
      v24 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v24 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager +
                                                    v24);
    }
  }
  return result;
}

#pragma GCC visibility pop
