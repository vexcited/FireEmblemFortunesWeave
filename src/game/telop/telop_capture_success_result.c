#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_telop_TelopCaptureSuccessResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopCaptureSuccessResult_Destructor_alt1(_QWORD* a1) __asm__(
    "TelopCaptureSuccessResult_Destructor");
__int64 TelopCaptureSuccessResult_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "TelopCaptureSuccessResult_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void game_telop_TelopResult_Destroy_TelopResult_alt1(__int64) __asm__(
    "game_telop_TelopResult_Destroy_TelopResult");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TelopCaptureSuccessResult_Destructor(_QWORD* a1);
void TelopCaptureSuccessResult_DeletingDestructor(_QWORD* a1);

void TelopCaptureSuccessResult_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;

  v1 = a1[147];
  *a1 = game_telop_TelopCaptureSuccessResult_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
    a1 = v2;
  }
  game_telop_TelopResult_Destroy_TelopResult_alt1((__int64)a1);
}

void TelopCaptureSuccessResult_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[147];
  *a1 = game_telop_TelopCaptureSuccessResult_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  game_telop_TelopResult_Destroy_TelopResult_alt1((__int64)a1);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

#pragma GCC visibility pop
