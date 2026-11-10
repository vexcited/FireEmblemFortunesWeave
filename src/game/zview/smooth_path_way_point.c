#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_WayPointBase_vtable[])();
extern __int64* GameData_212f038[3];
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 SmoothPathWayPoint_Destructor(_QWORD* a1);
__int64 SmoothPathWayPoint_DeletingDestructor(_QWORD* a1);

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

__int64 SmoothPathWayPoint_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;

  v1 = a1[7];
  *a1 = GameData_212f038[0] + 2;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
