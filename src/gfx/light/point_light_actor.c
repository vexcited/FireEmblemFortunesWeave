#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*gfx_light_Actor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
long double PointLightActor_Unknown3(_QWORD* a1, __int64 a2);
__int64 PointLightActor_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "PointLightActor_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void PointLightActor_DeletingDestructor(_QWORD* a1);

long double PointLightActor_Unknown3(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  long double result;
  __int64 v7;
  __int64 v8;

  v3 = a1[2];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v7 = a1[1];
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v8);
      }
      if (v7 != 0) {
        result = *(long double*)(a2 + 48);
        *(long double*)(a1[4] + 16LL) = result;
      }
    }
  }
  return result;
}

void PointLightActor_DeletingDestructor(_QWORD* a1)
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
