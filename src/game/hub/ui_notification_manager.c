#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_UINotificationManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* UINotificationManager_Destructor(_QWORD* result);
__int64 UINotificationManager_DeletingDestructor(_QWORD* a1);

_QWORD* UINotificationManager_Destructor(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = result[1];
  *result = game_hub_UINotificationManager_vtable;
  if (v1 != 0) {
    v2 = result[2];
    v3 = result;
    if (v1 == v2) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v2 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v4);
      }
      v2 -= 16;
    } while (v2 != v1);
    v5 = v3[1];
    v3[2] = v1;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
    }
  }
  return result;
}

__int64 UINotificationManager_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[1];
  *a1 = game_hub_UINotificationManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[2];
    if (v1 == v4) {
      goto LABEL_9;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = a1[1];
    a1[2] = v1;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
}

#pragma GCC visibility pop
