#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ffe140(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_FastTravelBase_vtable)();
extern __int64 (*game_hub_FastTravelFacilityData_vtable[])();
extern __int64 GameData_220d618;
extern __int64 fw_memory_g_heap_manager_ptr;
_BYTE* FastTravelFacilityData_Unknown2(__int64 a1);
__int64 FastTravelFacilityData_Destructor(__int64 result);
__int64 FastTravelFacilityData_DeletingDestructor(__int64 a1);

_BYTE* FastTravelFacilityData_Unknown2(__int64 a1)
{
  _DWORD* v1;
  _BYTE* result;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_DWORD**)(a1 + 8);
  if (v1 == nullptr) {
    return nullptr;
  }
  if (*v1 != 1 || (*(_BYTE*)(GameData_220d618 + 56) & 2) == 0) {
    return nullptr;
  }
  v3 = *(_BYTE*)(a1 + 40);
  v4 = *(_QWORD*)(a1 + 56);
  v5 = a1 + 41;
  v6 = *(unsigned int*)(a1 + 32);
  if ((v3 & 1) != 0) {
    v7 = v4;
  }
  else {
    v7 = v5;
  }
  result = (_BYTE*)GameRoutine_ffe140(v6, v7);
  if (result != nullptr) {
    return (_BYTE*)(*result != 0);
  }
  return result;
}

__int64 FastTravelFacilityData_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = result;
  *(_QWORD*)result = game_hub_FastTravelFacilityData_vtable;
  if ((*(_BYTE*)(result + 64) & 1) != 0) {
    v2 = *(_QWORD*)(result + 80);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(v1 + 40) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 56);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  *(_QWORD*)v1 = &game_hub_FastTravelBase_vtable;
  v6 = *(_QWORD*)(v1 + 16);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 FastTravelFacilityData_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_hub_FastTravelFacilityData_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 80);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 56);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)a1 = &game_hub_FastTravelBase_vtable;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, a1);
}

#pragma GCC visibility pop
