#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8234c0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_1fe8348[])();
extern __int64 (*gfx_render_Camera_vtable[])();
extern __int64 GameData_21c96a8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
CmdBtlCamera_Destructor_alt1(__int64 a1) __asm__("CmdBtlCamera_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*CmdBtlCamera_Destructor_ptr[])();
void GameRoutine_8234c0_alt1() __asm__("GameRoutine_8234c0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CmdBtlCamera_Destructor(__int64 a1);

void CmdBtlCamera_Destructor(__int64 a1)
{
  __int64 v2;
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
  __int64 v15;
  __int64 v16;

  *(_QWORD*)a1 = CmdBtlCamera_Destructor_ptr;
  GameRoutine_8234c0_alt1();
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
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 520);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = *(_QWORD*)(a1 + 496);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  v5 = *(_QWORD*)(a1 + 472);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = *(_QWORD*)(a1 + 456);
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = *(_QWORD*)(a1 + 416);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 424);
    if (v7 == v8) {
      goto LABEL_25;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt1(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = *(_QWORD*)(a1 + 416);
    *(_QWORD*)(a1 + 424) = v7;
    v7 = v10;
    if (v10 != 0) {
    LABEL_25:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v7);
    }
  }
  v12 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)(a1 + 16) = gfx_render_Camera_vtable;
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 392);
    if (v12 == v13) {
      goto LABEL_35;
    }
    do {
      v14 = *(_QWORD*)(v13 - 8);
      *(_QWORD*)(v13 - 8) = 0;
      if (v14 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
      }
      v13 -= 24;
    } while (v13 != v12);
    v15 = *(_QWORD*)(a1 + 384);
    *(_QWORD*)(a1 + 392) = v12;
    v12 = v15;
    if (v15 != 0) {
    LABEL_35:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v12);
    }
  }
}

#pragma GCC visibility pop
