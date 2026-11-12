#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_zv_CrowdManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD*
CrowdManager_Destructor_alt1(_QWORD* result) __asm__("CrowdManager_Destructor");
__int64 CrowdManager_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CrowdManager_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CrowdManager_Destructor(_QWORD* a1);
void CrowdManager_DeletingDestructor(_QWORD* a1);

void CrowdManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[1];
  *a1 = game_map_zv_CrowdManager_vtable;
  if (v1 != 0) {
    v2 = a1[2];
    if (v1 == v2) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v2 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
      v2 -= 16;
    } while (v2 != v1);
    v5 = a1[1];
    a1[2] = v1;
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
}

void CrowdManager_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[1];
  *a1 = game_map_zv_CrowdManager_vtable;
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
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = a1[1];
    a1[2] = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_9:
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
