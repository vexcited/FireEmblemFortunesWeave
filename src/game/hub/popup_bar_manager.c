#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_PopupBarManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 PopupBarManager_Destructor_alt1(_QWORD* a1) __asm__(
    "PopupBarManager_Destructor");
__n128 PopupBarManager_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "PopupBarManager_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void PopupBarManager_Destructor(_QWORD* a1);
void PopupBarManager_DeletingDestructor(_QWORD* a1);

void PopupBarManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[1];
  *a1 = game_hub_PopupBarManager_vtable;
  if (v1 != 0) {
    v2 = a1[2];
    if (v1 == v2) {
      goto LABEL_8;
    }
    do {
      v4 = *(_QWORD*)(v2 - 56);
      if (v4 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
      v2 -= 64;
    } while (v2 != v1);
    v5 = a1[1];
    a1[2] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_8:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
}

void PopupBarManager_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[1];
  *a1 = game_hub_PopupBarManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[2];
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      v5 = *(_QWORD*)(v4 - 56);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      v4 -= 64;
    } while (v4 != v1);
    v6 = a1[1];
    a1[2] = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v1);
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, (__int64)a1);
}

#pragma GCC visibility pop
