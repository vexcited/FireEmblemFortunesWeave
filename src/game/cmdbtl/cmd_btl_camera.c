#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8234c0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_1fe8348[])();
extern __int64 (*gfx_render_Camera_vtable[])();
extern __int64 GameData_21c96a8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlCamera_Destructor(__int64 a1);

__int64 CmdBtlCamera_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  *(_QWORD*)a1 = GameData_1fe8348;
  GameRoutine_8234c0();
  if (*(_BYTE*)(a1 + 504) == 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21c96a8 + 24LL))(
        GameData_21c96a8);
    if (GameData_21c96a8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21c96a8 + 8LL))(
          GameData_21c96a8);
    }
    GameData_21c96a8 = 0;
    *(_BYTE*)(a1 + 504) = 0;
  }
  v2 = *(_QWORD*)(a1 + 536);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak();
  }
  if (*(_QWORD*)(a1 + 520) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  v3 = *(_QWORD*)(a1 + 496);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak();
  }
  if (*(_QWORD*)(a1 + 472) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  result = *(_QWORD*)(a1 + 456);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  v5 = *(_QWORD*)(a1 + 416);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 424);
    if (v5 == v6) {
      goto LABEL_25;
    }
    do {
      v7 = *(_QWORD*)(v6 - 8);
      if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        result = std___1___shared_weak_count___release_weak();
      }
      v6 -= 16;
    } while (v6 != v5);
    v8 = *(_QWORD*)(a1 + 416);
    *(_QWORD*)(a1 + 424) = v5;
    if (v8 != 0) {
    LABEL_25:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
    }
  }
  v10 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)(a1 + 16) = gfx_render_Camera_vtable;
  if (v10 != 0) {
    v11 = *(_QWORD*)(a1 + 392);
    if (v10 == v11) {
      goto LABEL_35;
    }
    do {
      result = *(_QWORD*)(v11 - 8);
      *(_QWORD*)(v11 - 8) = 0;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
      v11 -= 24;
    } while (v11 != v10);
    v12 = *(_QWORD*)(a1 + 384);
    *(_QWORD*)(a1 + 392) = v10;
    if (v12 != 0) {
    LABEL_35:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
    }
  }
  return result;
}

#pragma GCC visibility pop
