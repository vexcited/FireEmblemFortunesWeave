#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_144e120(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SceneCamera_DeletingDestructor(__int64 a1);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak();
extern __int64 (*game_facility_SceneCamera_vtable[])();
__n128
SceneCamera_Destructor_alt1(__int64 a1) __asm__("SceneCamera_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* SceneCamera_Destructor(__int64 a1);

_QWORD* SceneCamera_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 432);
  *(_QWORD*)a1 = game_facility_SceneCamera_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v3 = *(_QWORD*)(a1 + 416);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = *(_QWORD*)(a1 + 400);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
    if ((*(_BYTE*)(a1 + 368) & 1) == 0) {
      goto LABEL_15;
    }
  }
  else if ((*(_BYTE*)(a1 + 368) & 1) == 0) {
    goto LABEL_15;
  }
  v5 = *(_QWORD*)(a1 + 384);
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
  }
LABEL_15:
  v7 = *(_QWORD**)(a1 + 352);
  if (v7 == (_QWORD*)(a1 + 320)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_20;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_20:
  result = *(_QWORD**)(a1 + 304);
  if (result == (_QWORD*)(a1 + 272)) {
    v10 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_25;
    }
    v10 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
LABEL_25:
  v11 = *(_QWORD*)(a1 + 16);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v11);
  }
  return result;
}

__int64 SceneCamera_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  GameRoutine_144e120(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
