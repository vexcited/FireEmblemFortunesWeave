#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a71220(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*wld_MultiJointAOVModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MultiJointAOVModule_Destructor(__int64 a1);
__int64 MultiJointAovModule_a71220(__int64 result, _QWORD* a2);

__int64 MultiJointAovModule_a71220(__int64 result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(__int64**)(result + 264);
  v3 = *(__int64**)(result + 272);
  v5 = result;
  if (v2 != v3) {
    while (*v2 != *a2) {
      v2 += 2;
      if (v2 == v3) {
        return result;
      }
    }
  }
  v6 = v2 + 2;
  if (v2 != v3 && v6 != v3) {
    do {
      v8 = *v6;
      if (*v6 != *a2) {
        v9 = v6[1];
        *v6 = 0;
        v6[1] = 0;
        v10 = v2[1];
        *v2 = v8;
        v2[1] = v9;
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak(v10);
        }
        v2 += 2;
      }
      v6 += 2;
    } while (v6 != v3);
    v3 = *(__int64**)(v5 + 272);
  }
  if (v2 != v3) {
    do {
      v11 = *(v3 - 1);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = std___1___shared_weak_count___release_weak(v11);
      }
      v3 -= 2;
    } while (v3 != v2);
    *(_QWORD*)(v5 + 272) = v2;
  }
  return result;
}

__int64 MultiJointAOVModule_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  *(_QWORD*)a1 = wld_MultiJointAOVModule_vtable;
  v2 = *(_QWORD*)(a1 + 64);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(a1 + 56);
      if (v5 != 0) {
        GameRoutine_a71220(v5, a1 + 72);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  v6 = *(_QWORD*)(a1 + 32);
  for (i = *(_QWORD*)(a1 + 40); i != v6; i -= 112) {
    v8 = *(_QWORD*)(i - 104);
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
  v9 = *(_BYTE*)(a1 + 112);
  *(_QWORD*)(a1 + 40) = v6;
  if ((v9 & 1) != 0 && *(_QWORD*)(a1 + 128) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  v11 = *(_QWORD*)(a1 + 80);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  result = *(_QWORD*)(a1 + 64);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v13 = *(_QWORD*)(a1 + 32);
  if (v13 != 0) {
    v14 = *(_QWORD*)(a1 + 40);
    if (v13 == v14) {
      goto LABEL_31;
    }
    do {
      v15 = *(_QWORD*)(v14 - 104);
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        result = std___1___shared_weak_count___release_weak(v15);
      }
      v14 -= 112;
    } while (v14 != v13);
    v16 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v13;
    if (v16 != 0) {
    LABEL_31:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
    }
  }
  return result;
}

#pragma GCC visibility pop
