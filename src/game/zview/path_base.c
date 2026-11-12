#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) PathBase_DeletingDestructor();
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_PathBase_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* PathBase_Destructor_alt1(_QWORD* result) __asm__("PathBase_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void PathBase_Destructor(_QWORD* a1);

void PathBase_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;

  v1 = a1[6];
  *a1 = &game_zview_PathBase_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v4 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
    a1 = v4;
    v2 = v4[2];
    if (v2 == 0) {
      return;
    }
  }
  else {
    v2 = a1[2];
    if (v2 == 0) {
      return;
    }
  }
  a1[3] = v2;
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
}

void __attribute__((noreturn)) PathBase_DeletingDestructor() { __udf(0x8002u); }

#pragma GCC visibility pop
