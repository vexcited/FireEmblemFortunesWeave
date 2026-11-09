#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9baec0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_anonymous_Impl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Impl_Destructor_9ba4a0(_QWORD* a1);

__int64 Impl_Destructor_9ba4a0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
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
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v2 = a1[2];
  v1 = a1[3];
  v4 = v1 - v2;
  v5 = v1 == v2;
  *a1 = game_map_anonymous_Impl_vtable;
  v7 = a1[5];
  v6 = a1[6];
  v8 = (v4 << 9) - 1;
  if (v5) {
    v8 = 0;
  }
  a1[6] = v6 - 1;
  if ((unsigned __int64)(v8 - (v6 + v7) + 1) >= 0x2000) {
    if (*(_QWORD*)(v1 - 8) != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v9);
      v1 = a1[3];
    }
    a1[3] = v1 - 8;
  }
  GameRoutine_9baec0(a1, 0);
  result = GameRoutine_9baec0(a1, 1);
  v11 = a1[10];
  if (v11 != 0) {
    v12 = a1[11];
    if (v11 == v12) {
      goto LABEL_17;
    }
    do {
      v13 = *(_QWORD*)(v12 - 8);
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        result = std___1___shared_weak_count___release_weak(v13);
      }
      v12 -= 16;
    } while (v12 != v11);
    v14 = a1[10];
    a1[11] = v11;
    if (v14 != 0) {
    LABEL_17:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
    }
  }
  v16 = a1[7];
  if (v16 != 0) {
    v17 = a1[8];
    if (v16 == v17) {
      goto LABEL_28;
    }
    do {
      v18 = *(_QWORD*)(v17 - 8);
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        result = std___1___shared_weak_count___release_weak(v18);
      }
      v17 -= 16;
    } while (v17 != v16);
    v19 = a1[7];
    a1[8] = v16;
    if (v19 != 0) {
    LABEL_28:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    }
  }
  v21 = (_QWORD*)a1[2];
  v22 = (_QWORD*)a1[3];
  a1[6] = 0;
  v23 = v22 - v21;
  if (v23 >= 3) {
    v24 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v25);
        v21 = (_QWORD*)a1[2];
        v22 = (_QWORD*)a1[3];
      }
      a1[2] = ++v21;
      v23 = v22 - v21;
    } while (v23 > 2);
  }
  if (v23 == 1) {
    v26 = 2048;
  }
  else {
    if (v23 != 2) {
      goto LABEL_44;
    }
    v26 = 4096;
  }
  a1[5] = v26;

LABEL_44:
  if (v21 != v22) {
    v27 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v28);
      }
      ++v21;
    } while (v21 != v22);
    v29 = a1[3];
    v30 = a1[2] - v29;
    if (v30 != 0) {
      a1[3] = v29 + ((v30 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (a1[1] != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
  }
  return result;
}

#pragma GCC visibility pop
