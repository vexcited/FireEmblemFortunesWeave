#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfx_light_Actor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RectangleLightActor_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "RectangleLightActor_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RectangleLightActor_DeletingDestructor(_QWORD* a1);

void RectangleLightActor_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = gfx_light_Actor_vtable;
  a1[1] = 0;
  v2 = a1[2];
  a1[2] = 0;
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
    v3 = a1[2];
    a1[3] = 0;
    if (v3 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)a1);
}

#pragma GCC visibility pop
