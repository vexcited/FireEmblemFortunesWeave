#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1888840(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132080[6];
__int64 InfoItemSkill_DeletingDestructor(__int64 a1);
__int64 Element_1888840(__int64);
__int64 GameRoutine_18a7ae0(__int64, unsigned int*, __int64, char, int, __int64,
                            char);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
bool InfoItemSkill_18b3800(_QWORD* a1);
__int64 InfoItemSkill_18b3910(__int64 result, __int64* a2);
__int64 InfoItemSkill_Destructor(__int64 a1);
__int64 InfoItemSkill_DeletingDestructor_18b3b00(__int64 a1);

bool InfoItemSkill_18b3800(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(a1[1] + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = a1[40];
  if (v4 == 0) {
    return a1[135] != 0;
  }
  v5 = a1[39];
  v6 = a1[40];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0) {
    return a1[135] != 0;
  }
  v8 = v5 != 0 ? (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) : 1;
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return (v8 & 1) != 0 && a1[135] != 0;
}

__int64 InfoItemSkill_18b3910(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;

  if (*(_QWORD*)(result + 1080) != 0) {
    v2 = result;
    result = a2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v4 = result;
        result = *a2;
        if (*a2 != 0) {
          v5 = *(_QWORD*)(v2 + 1080);
          if (v5 != 0) {
            LODWORD(v5) = *(_WORD*)(v5 + 16) & 0xFFF;
          }
          v6 = *(_QWORD*)(v2 + 1088);
          v7 = v5;
          result = GameRoutine_18a7ae0(result, &v7, v6, 0, 0, 0, 0);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
      }
    }
  }
  return result;
}

__int64 InfoItemSkill_DeletingDestructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_2132080[0];
  *(_QWORD*)a1 = GameData_2132080[0] + 2;
  *(_QWORD*)(a1 + 72) = v2 + 51;
  *(_QWORD*)(a1 + 1032) = v2 + 56;
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1048) & 1) != 0 && *(_QWORD*)(a1 + 1064) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  GameRoutine_1888840(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
}

__int64 InfoItemSkill_Destructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;

  v2 = GameData_2132080[0];
  *(_QWORD*)(a1 - 72) = GameData_2132080[0] + 2;
  v3 = a1 - 72;
  v4 = v2 + 51;
  *(_QWORD*)(a1 + 960) = v2 + 56;
  LOBYTE(v2) = *(_BYTE*)(a1 + 976);
  *(_QWORD*)a1 = v4;
  if (((unsigned __int8)v2 & 1) != 0 && *(_QWORD*)(a1 + 992) != 0) {
    v5 = v3;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
    v3 = v5;
  }
  return Element_1888840(v3);
}

__int64 InfoItemSkill_DeletingDestructor_18b3b00(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = GameData_2132080[0];
  *(_QWORD*)(a1 - 72) = GameData_2132080[0] + 2;
  v2 = a1 - 72;
  *(_QWORD*)a1 = v1 + 51;
  *(_QWORD*)(a1 + 960) = v1 + 56;
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 976) & 1) != 0 && *(_QWORD*)(a1 + 992) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  Element_1888840(v2);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
}

#pragma GCC visibility pop
