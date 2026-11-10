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
__int64* MapChip_19fc2e0(__int64* result, __int64* a2);

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

__int64* MapChip_19fc2e0(__int64* result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  char* v16;
  __int64 v17;
  __int64* v18;

  v2 = *result;
  v3 = result[1];
  v4 = result;
  if (*result != v3) {
    while (1) {
      if (*(_QWORD*)v2 != 0) {
        result = (__int64*)a2[1];
        if (result != nullptr) {
          result = (__int64*)std___1___shared_weak_count_lock(result);
          if (result != nullptr) {
            break;
          }
        }
      }
    LABEL_5:
      v2 += 16;
      if (v2 == v3) {
        v2 = *v4;
        v3 = v4[1];
        goto LABEL_35;
      }
    }
    v6 = *a2;
    v7 = result;
    if (*a2 == 0) {
    LABEL_3:
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64*))(*v7 + 16))(v7);
        result = (__int64*)std___1___shared_weak_count___release_weak(v7);
      }
      goto LABEL_5;
    }
    if ((*(_BYTE*)(*(_QWORD*)v2 + 8LL) & 1) != 0) {
      fw_text_String_CopyTerminated(v15, *(_QWORD*)(*(_QWORD*)v2 + 24LL),
                                    *(_QWORD*)(*(_QWORD*)v2 + 16LL));
    }
    else {
      v8 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
      v9 = *(char**)(*(_QWORD*)v2 + 24LL);
      v15[0] = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
      v15[1] = v8;
      v16 = v9;
    }
    if ((v15[0] & 1) != 0) {
      v10 = v16;
    }
    else {
      v10 = (char*)v15 + 1;
    }
    GameRoutine_1560070((void*)&v17, v6, v10);
    result = v18;
    if (v18 != nullptr) {
      v11 = std___1___shared_weak_count_lock(v18);
      result = v18;
      if (v11 != 0) {
        v12 = v17;
      }
      else {
        v12 = 0;
      }
      if (v18 != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak(v18);
      }
      if ((v15[0] & 1) == 0) {
        goto LABEL_29;
      }
    }
    else {
      v11 = 0;
      v12 = 0;
      if ((v15[0] & 1) == 0) {
      LABEL_29:
        if (v12 != 0) {
          result = (__int64*)LayoutAccessor_155e830(v12, 0);
        }
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result = (__int64*)std___1___shared_weak_count___release_weak(v11);
        }
        goto LABEL_3;
      }
    }
    if (v16 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v13 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v13);
    }
    goto LABEL_29;
  }
LABEL_35:
  while (v3 != v2) {
    v14 = *(_QWORD*)(v3 - 8);
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = (__int64*)std___1___shared_weak_count___release_weak(v14);
    }
    v3 -= 16;
  }
  v4[1] = v2;
  return result;
}

#pragma GCC visibility pop
