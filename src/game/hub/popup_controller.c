#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d7e7a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_PopupController_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 PopupController_Destructor(__int64 a1);

__int64 PopupController_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 280);
  *(_QWORD*)a1 = game_hub_PopupController_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 288);
    if (v1 == v3) {
      goto LABEL_5;
    }
    do {
      v3 -= 80;
      GameRoutine_d7e7a0(v3);
    } while (v3 != v1);
    v4 = *(_QWORD*)(a1 + 280);
    *(_QWORD*)(a1 + 288) = v1;
    v1 = v4;
    if (v4 != 0) {
    LABEL_5:
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v1);
    }
  }
  if ((*(_BYTE*)(a1 + 256) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 272);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  if ((*(_BYTE*)(a1 + 232) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 248);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v8);
    }
  }
  if (*(_BYTE*)(a1 + 192) == 1 && (*(_BYTE*)(a1 + 168) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 184);
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
    }
  }
  if (*(_BYTE*)(a1 + 160) == 1 && (*(_BYTE*)(a1 + 136) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 152);
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
    }
  }
  v14 = *(_QWORD*)(a1 + 112);
  if (v14 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = *(_QWORD*)(a1 + 24);
    if (result == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  std___1___shared_weak_count___release_weak(v14);
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

#pragma GCC visibility pop
