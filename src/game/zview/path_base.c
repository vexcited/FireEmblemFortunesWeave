#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) PathBase_DeletingDestructor();
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_PathBase_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* PathBase_Destructor(_QWORD* result);

_QWORD* PathBase_Destructor(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;

  v1 = result[6];
  *result = &game_zview_PathBase_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v4 = result;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
    result = v4;
    v2 = v4[2];
    if (v2 == 0) {
      return result;
    }
  }
  else {
    v2 = result[2];
    if (v2 == 0) {
      return result;
    }
  }
  result[3] = v2;
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return (_QWORD*)nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
}

void __attribute__((noreturn)) PathBase_DeletingDestructor() { __udf(0x8002u); }

#pragma GCC visibility pop
