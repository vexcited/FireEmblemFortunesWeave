#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_HubDisposSimulation_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void HubDisposSimulation_Destructor(_QWORD* a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void HubDisposSimulation_Destructor(_QWORD* a1)
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

  v1 = a1[5];
  *a1 = game_hub_HubDisposSimulation_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
    v3 = a1[1];
    if (v3 == 0) {
      return;
    }
  }
  else {
    v3 = a1[1];
    if (v3 == 0) {
      return;
    }
  }
  v4 = a1[2];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v3 == v4) {
    goto LABEL_18;
  }
  do {
    v6 = *(_QWORD*)(v4 - 24);
    if (v6 != 0) {
      *(_QWORD*)(v4 - 16) = v6;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v7 = 128;
      }
      else {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v7, v6);
    }
    v8 = *(_QWORD*)(v4 - 48);
    if (v8 != 0) {
      *(_QWORD*)(v4 - 40) = v8;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v9, v8);
    }
    v4 -= 72;
  } while (v4 != v3);
  v10 = a1[1];
  a1[2] = v3;
  v3 = v10;
  if (v10 != 0) {
  LABEL_18:
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v11, v3);
  }
}

#pragma GCC visibility pop
