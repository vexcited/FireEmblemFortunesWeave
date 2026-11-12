#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2000748[])();
extern __int64 (*game_cmdbtl_CmdBtlGrow_vtable[])();
extern __int64 GameData_2219080;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22330f8;
void CmdBtlGrow_Destructor(_QWORD* a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void CmdBtlGrow_Destructor(_QWORD* a1)
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
  __int64 v15;
  __int64 v16;

  v1 = a1[7];
  *a1 = game_cmdbtl_CmdBtlGrow_vtable;
  if (v1 != 0) {
    v3 = a1[8];
    if (v1 == v3) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
      v3 -= 16;
    } while (v3 != v1);
    v5 = a1[7];
    a1[8] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  v7 = a1[4];
  if (v7 != 0) {
    v8 = a1[5];
    if (v7 == v8) {
      goto LABEL_20;
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
    v10 = a1[4];
    a1[5] = v7;
    v7 = v10;
    if (v10 != 0) {
    LABEL_20:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v7);
    }
  }
  v12 = a1[1];
  if (v12 != 0) {
    v13 = a1[2];
    if (v12 == v13) {
      goto LABEL_30;
    }
    do {
      v14 = *(_QWORD*)(v13 - 8);
      if (v14 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v14);
      }
      v13 -= 16;
    } while (v13 != v12);
    v15 = a1[1];
    a1[2] = v12;
    v12 = v15;
    if (v15 != 0) {
    LABEL_30:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v12);
    }
  }
  *a1 = GameData_2000748;
  if ((_QWORD*)GameData_2219080 == a1) {
    GameData_2219080 = 0;
    GameData_22330f8 = 0;
  }
}

#pragma GCC visibility pop
