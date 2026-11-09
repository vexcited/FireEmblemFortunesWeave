#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_telop_TelopCaptureSuccessResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopCaptureSuccessResult_Destructor(_QWORD* a1);
__int64 TelopCaptureSuccessResult_DeletingDestructor(_QWORD* a1);

__int64 TelopCaptureSuccessResult_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;

  v1 = a1[147];
  *a1 = game_telop_TelopCaptureSuccessResult_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
    a1 = v2;
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopCaptureSuccessResult_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[147];
  *a1 = game_telop_TelopCaptureSuccessResult_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
