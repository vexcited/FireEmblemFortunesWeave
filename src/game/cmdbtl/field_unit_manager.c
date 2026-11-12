#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_cmdbtl_FieldUnitManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 FieldUnitManager_Destructor_alt1(_QWORD* a1) __asm__(
    "FieldUnitManager_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void FieldUnitManager_Destructor(_QWORD* a1);

void FieldUnitManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = a1[1];
  v1 = a1[2];
  *a1 = game_cmdbtl_FieldUnitManager_vtable;
  v4 = v2;
  if (v2 != v1) {
    do {
      v5 = *(_QWORD*)(v1 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      v1 -= 16;
    } while (v1 != v2);
    v4 = a1[1];
  }
  a1[2] = v2;
  if (v4 != 0) {
    if (v4 == v2) {
      a1[2] = v4;
    }
    else {
      do {
        v6 = *(_QWORD*)(v2 - 8);
        if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak_alt1(v6);
        }
        v2 -= 16;
      } while (v2 != v4);
      v7 = a1[1];
      a1[2] = v4;
      v4 = v7;
      if (v7 == 0) {
        return;
      }
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v4);
  }
}

#pragma GCC visibility pop
