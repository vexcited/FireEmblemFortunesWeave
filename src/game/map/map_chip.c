#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_19fc190(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 fw_memory_g_heap_manager;
__int64 MapChip_19fc0b0(__int64 a1, __int64* a2);
__int64* MapChip_19fc2e0_alt1(__int64* result,
                              __int64* a2) __asm__("MapChip_19fc2e0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapChip_19fc2e0(__int64* a1, __int64 a2);

__int64 MapChip_19fc0b0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = a2[1];
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    return result;
  }
  v5 = *a2;
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v5 != 0) {
      goto LABEL_5;
    }
    return 0;
  }
  v8 = result;
  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  std___1___shared_weak_count___release_weak(v8);
  if (v5 == 0) {
    return 0;
  }
LABEL_5:
  v6 = a2[1];
  v9 = 0;
  v10 = 0;
  if (v6 != 0) {
    v10 = std___1___shared_weak_count_lock(v6);
    if (v10 != 0) {
      v9 = *a2;
    }
  }
  GameRoutine_19fc190(a1, &v9);
  v7 = v10;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return 1;
}

void MapChip_19fc2e0(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17[2];
    const char* v18;
  } v17_;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v2 = *a1;
  v3 = a1[1];
  if (*a1 != v3) {
    while (1) {
      if (*(_QWORD*)v2 != 0) {
        v6 = *(_QWORD*)(a2 + 8);
        if (v6 != 0) {
          v7 = std___1___shared_weak_count_lock_alt1(v6);
          if (v7 != 0) {
            break;
          }
        }
      }
    LABEL_5:
      v2 += 16;
      if (v2 == v3) {
        v2 = *a1;
        v3 = a1[1];
        goto LABEL_35;
      }
    }
    v8 = *(__int64**)a2;
    v9 = v7;
    if (*(_QWORD*)a2 == 0) {
    LABEL_3:
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt1(v9);
      }
      goto LABEL_5;
    }
    if ((*(_BYTE*)(*(_QWORD*)v2 + 8LL) & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v17_.v17,
                                         *(_QWORD*)(*(_QWORD*)v2 + 24LL),
                                         *(_QWORD*)(*(_QWORD*)v2 + 16LL));
    }
    else {
      v10 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
      v11 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
      v17_.v17[0] = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
      v17_.v17[1] = v10;
      v17_.v18 = (const char*)v11;
    }
    if ((v17_.v17[0] & 1) != 0) {
      v12 = v17_.v18;
    }
    else {
      v12 = (char*)v17_.v17 + 1;
    }
    LayoutAccessor_1560070((void*)(&v19_.v19), v8, v12);
    if (v19_.v20 != 0) {
      v13 = std___1___shared_weak_count_lock_alt1(v19_.v20);
      if (v13 != 0) {
        v14 = v19_.v19;
      }
      else {
        v14 = 0;
      }
      if (v19_.v20 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v19_.v20);
      }
      if ((v17_.v17[0] & 1) == 0) {
        goto LABEL_29;
      }
    }
    else {
      v13 = 0;
      v14 = 0;
      if ((v17_.v17[0] & 1) == 0) {
      LABEL_29:
        if (v14 != 0) {
          LayoutAccessor_155e830_alt1(v14, 0);
        }
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_alt1(v13);
        }
        goto LABEL_3;
      }
    }
    if (v17_.v18 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v15,
                                         (__int64)v17_.v18);
    }
    goto LABEL_29;
  }
LABEL_35:
  while (v3 != v2) {
    v16 = *(_QWORD*)(v3 - 8);
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak_alt1(v16);
    }
    v3 -= 16;
  }
  a1[1] = v2;
}

#pragma GCC visibility pop
