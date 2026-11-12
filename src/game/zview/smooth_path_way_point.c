#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_WayPointBase_vtable[])();
extern __int64* GameData_212f038[3];
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 SmoothPathWayPoint_Destructor(_QWORD* a1);
__int64 SmoothPathWayPoint_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "SmoothPathWayPoint_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SmoothPathWayPoint_DeletingDestructor(_QWORD* a1);

__n128 SmoothPathWayPoint_Destructor(_QWORD* a1)
{
  __int64 v1;
  __n128 result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = a1[7];
  *a1 = game_zview_WayPointBase_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v1);
  }
  return result;
}

void SmoothPathWayPoint_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  v2 = a1[7];
  *a1 = GameData_212f038[0] + 2;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

#pragma GCC visibility pop
