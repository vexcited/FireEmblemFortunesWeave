#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cutscene_anonymous_LateUpdateModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LateUpdateModule_Destructor(_QWORD* a1);
__int64 LateUpdateModule_DeletingDestructor(_QWORD* a1);
__int64 LateUpdateModule_Unknown7(__int64 a1);

__int64 LateUpdateModule_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_cutscene_anonymous_LateUpdateModule_vtable;
  result = a1[4];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 LateUpdateModule_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_cutscene_anonymous_LateUpdateModule_vtable;
  v2 = a1[4];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 LateUpdateModule_Unknown7(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* i;
  __int64 v7;

  result = *(_QWORD*)(a1 + 32);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 24);
      v4 = result;
      if (v3 != 0 && *(float*)(v3 + 204) >= 0.0) {
        v5 = *(_QWORD**)(v3 + 176);
        for (i = *(_QWORD**)(v3 + 184); v5 != i; v5 += 2) {
          v7 = std___1___shared_weak_count_lock(v5[1]);
          result = (*(__int64 (**)(_QWORD, float))(*(_QWORD*)*v5 + 40LL))(
              *v5, *(float*)(v3 + 204));
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            result = std___1___shared_weak_count___release_weak(v7);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
