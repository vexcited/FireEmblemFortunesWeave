#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_AreaBarrierBase_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212fb18[3];
__n128 CursorAreaBarrier_Destructor_alt1(_QWORD* a1) __asm__(
    "CursorAreaBarrier_Destructor");
__n128 CursorAreaBarrier_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CursorAreaBarrier_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
_QWORD* CursorAreaBarrier_Destructor(_QWORD* result);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CursorAreaBarrier_DeletingDestructor(_QWORD* a1);

_QWORD* CursorAreaBarrier_Destructor(_QWORD* result)
{
  __int64 v1;

  v1 = result[2];
  *result = game_zview_AreaBarrierBase_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v1);
  }
  return result;
}

void CursorAreaBarrier_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  v2 = a1[2];
  *a1 = GameData_212fb18[0] + 2;
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
