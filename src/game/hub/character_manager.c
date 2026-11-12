#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd4658[])();
extern __int64 (*GameData_1fd46c8[])();
extern __int64 GameData_21ec7c0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CharacterManager_Destructor_cb6f60_alt1(__int64 a1) __asm__(
    "CharacterManager_Destructor_cb6f60");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*CharacterManager_Destructor_cb6f60_ptr[])();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CharacterManager_Destructor_cb6f60(__int64 a1);

void CharacterManager_Destructor_cb6f60(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v1 = *(_QWORD*)(a1 + 48);
  v2 = *(_QWORD*)(a1 + 56);
  for (*(_QWORD*)a1 = CharacterManager_Destructor_cb6f60_ptr; v2 != v1;
       v2 -= 16) {
    v6 = *(_QWORD*)(v2 - 8);
    if (v6 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  v4 = *(_QWORD*)(a1 + 24);
  v5 = *(_QWORD*)(a1 + 32);
  for (*(_QWORD*)(a1 + 56) = v1; v5 != v4; v5 -= 16) {
    v7 = *(_QWORD*)(v5 - 8);
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
    }
  }
  v8 = *(unsigned __int8*)(a1 + 208);
  *(_QWORD*)(a1 + 32) = v4;
  if (v8 == 1) {
    v9 = *(_QWORD*)(a1 + 200);
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
    v10 = *(_QWORD*)(a1 + 184);
    if (v10 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
    v11 = *(_QWORD*)(a1 + 168);
    if (v11 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v11);
    }
  }
  v12 = *(_QWORD*)(a1 + 136);
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 144);
    if (v12 == v13) {
      goto LABEL_25;
    }
    do {
      v14 = *(_QWORD*)(v13 - 8);
      if (v14 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v14);
      }
      v13 -= 16;
    } while (v13 != v12);
    v15 = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(a1 + 144) = v12;
    v12 = v15;
    if (v15 != 0) {
    LABEL_25:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v12);
    }
  }
  v17 = *(_QWORD*)(a1 + 128);
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
  }
  v18 = *(_QWORD*)(a1 + 112);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak_alt1(v18);
  }
  v19 = *(_QWORD*)(a1 + 96);
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  v20 = *(_QWORD*)(a1 + 80);
  if (v20 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v20);
  }
  v21 = *(_QWORD*)(a1 + 48);
  if (v21 != 0) {
    v22 = *(_QWORD*)(a1 + 56);
    if (v21 == v22) {
      goto LABEL_46;
    }
    do {
      v23 = *(_QWORD*)(v22 - 8);
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v23);
      }
      v22 -= 16;
    } while (v22 != v21);
    v24 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 56) = v21;
    v21 = v24;
    if (v24 != 0) {
    LABEL_46:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v21);
    }
  }
  v26 = *(_QWORD*)(a1 + 24);
  if (v26 != 0) {
    v27 = *(_QWORD*)(a1 + 32);
    if (v26 == v27) {
      goto LABEL_57;
    }
    do {
      v28 = *(_QWORD*)(v27 - 8);
      if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        std___1___shared_weak_count___release_weak_alt1(v28);
      }
      v27 -= 16;
    } while (v27 != v26);
    v29 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 32) = v26;
    v26 = v29;
    if (v29 != 0) {
    LABEL_57:
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v26);
    }
  }
  v31 = *(_QWORD*)(a1 + 16);
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak_alt1(v31);
  }
  *(_QWORD*)a1 = GameData_1fd46c8;
  if (GameData_21ec7c0 == a1) {
    GameData_21ec7c0 = 0;
  }
}

#pragma GCC visibility pop
