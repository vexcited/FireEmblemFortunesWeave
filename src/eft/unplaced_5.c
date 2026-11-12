#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Config_bc7840(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_18e4620(__int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 eft_bcb9e0(_QWORD* a1);

__int64 eft_bcb9e0(_QWORD* a1)
{
  __int64 v1;
  _QWORD* i;
  __int64* j;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;

  v1 = a1[7];
  for (i = a1 + 6; (_QWORD*)v1 != i; v1 = a1[7]) {
    Config_bc7840(eft_g_effectSystem, v1);
  }
  for (j = (__int64*)a1[9]; j != a1 + 8; j = (__int64*)a1[9]) {
    v6 = eft_g_effectSystem;
    if (j !=
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 296) -
                                         24LL) +
                              8LL * *((unsigned int*)j + 10)) +
                   64LL)) {
      v7 = (__int64*)j[1];
      v8 = *v7;
      *(_QWORD*)(*j + 8) = v7;
      *v7 = *j;
      *(_QWORD*)(v8 + 8) = j;
      *j = v8;
    }
    v5 = j - 17;
    GameRoutine_18e4620(*(_QWORD*)(v6 + 440), (__int64)(j - 17));
    (*(void (**)(__int64*))(*v5 + 8))(v5);
  }
  v9 = a1[11];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = a1[3];
  if (v10 != 0) {
    a1[4] = v10;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v10);
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

#pragma GCC visibility pop
