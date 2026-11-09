#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1f93bf8[])();
extern __int64 (*game_map_SightMapsImpl_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* SightMapsImpl_Destructor(_QWORD* result);
__int64 SightMapsImpl_DeletingDestructor(_QWORD* a1);

_QWORD* SightMapsImpl_Destructor(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;

  *result = game_map_SightMapsImpl_vtable;
  result[65] = GameData_1f93bf8;
  v1 = result[67];
  if (v1 ==
      **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                         8LL) +
                              40LL) +
                   376LL)) {
    *(_BYTE*)(*(_QWORD*)(v1 + 24) + 136LL) = 0;
    result[67] = 0;
    v3 = result[68];
    result[68] = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v4 = result;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
      result = v4;
    }
  }
  v2 = result[68];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 SightMapsImpl_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;

  *a1 = game_map_SightMapsImpl_vtable;
  a1[65] = GameData_1f93bf8;
  v2 = a1[67];
  if (v2 ==
      **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                         8LL) +
                              40LL) +
                   376LL)) {
    *(_BYTE*)(*(_QWORD*)(v2 + 24) + 136LL) = 0;
    a1[67] = 0;
    v6 = a1[68];
    a1[68] = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  v3 = a1[68];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

#pragma GCC visibility pop
