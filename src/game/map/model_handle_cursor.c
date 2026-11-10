#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_ModelHandleCursor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ModelHandleCursor_Destructor(_QWORD* a1);

__n128 ModelHandleCursor_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __n128 result;
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

  v1 = a1[11];
  v2 = a1[12];
  *a1 = game_map_ModelHandleCursor_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = v1;
  if (v1 != v2) {
    do {
      v6 = *(_QWORD*)(v2 - 8);
      v7 = v2;
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        result = std___1___shared_weak_count___release_weak(v6);
      }
      v2 -= 40;
      if ((*(_BYTE*)(v7 - 40) & 1) != 0 && *(_QWORD*)(v7 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9);
      }
    } while (v2 != v1);
    v5 = a1[11];
  }
  a1[12] = v1;
  if (v5 != 0) {
    if (v5 == v1) {
      a1[12] = v5;
    }
    else {
      do {
        v10 = v1;
        v11 = *(_QWORD*)(v1 - 8);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result = std___1___shared_weak_count___release_weak(v11);
        }
        v1 = v10 - 40;
        if ((*(_BYTE*)(v10 - 40) & 1) != 0 && *(_QWORD*)(v10 - 24) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12);
        }
      } while (v1 != v5);
      v13 = a1[11];
      a1[12] = v5;
      if (v13 == 0) {
        goto LABEL_33;
      }
    }
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14);
  }
LABEL_33:
  v15 = a1[10];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak(v15);
  }
  v16 = a1[8];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    result = std___1___shared_weak_count___release_weak(v16);
  }
  v17 = a1[6];
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    result = std___1___shared_weak_count___release_weak(v17);
    v18 = a1[4];
    if (v18 == 0) {
      return result;
    }
  }
  else {
    v18 = a1[4];
    if (v18 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    return std___1___shared_weak_count___release_weak(v18);
  }
  return result;
}

#pragma GCC visibility pop
