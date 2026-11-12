#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_PartVoiceManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 PartVoiceManager_Destructor_alt1(_QWORD* a1) __asm__(
    "PartVoiceManager_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void PartVoiceManager_Destructor(_QWORD* a1);

void PartVoiceManager_Destructor(_QWORD* a1)
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

  v1 = a1[8];
  *a1 = game_hub_PartVoiceManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[9] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = a1[4];
  if (v6 != 0) {
    v7 = a1[5];
    if (v6 == v7) {
      goto LABEL_12;
    }
    do {
      v8 = *(_QWORD*)(v7 - 8);
      if (v8 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
      v7 -= 16;
    } while (v7 != v6);
    v9 = a1[4];
    a1[5] = v6;
    v6 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v6);
    }
  }
  v11 = a1[1];
  if (v11 != 0) {
    v12 = a1[2];
    if (v11 == v12) {
      goto LABEL_22;
    }
    do {
      v13 = *(_QWORD*)(v12 - 8);
      if (v13 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v13);
      }
      v12 -= 16;
    } while (v12 != v11);
    v14 = a1[1];
    a1[2] = v11;
    v11 = v14;
    if (v14 != 0) {
    LABEL_22:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v15, v11);
    }
  }
}

#pragma GCC visibility pop
