#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1403f60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_facility_SceneCharacterBehaviorStack_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* SceneCharacterBehaviorStack_Destructor_alt1(_QWORD* result) __asm__(
    "SceneCharacterBehaviorStack_Destructor");
__int64 SceneCharacterBehaviorStack_Unknown3_alt1(__int64 result) __asm__(
    "SceneCharacterBehaviorStack_Unknown3");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SceneCharacterBehaviorStack_Destructor(_QWORD* a1);
void GameRoutine_1403f60_alt1(__int64*) __asm__("GameRoutine_1403f60");
void SceneCharacterBehaviorStack_Unknown3(__int64 a1);

void SceneCharacterBehaviorStack_Destructor(_QWORD* a1)
{
  __int64* v1;
  __int64* v2;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = (__int64*)a1[3];
  v2 = (__int64*)a1[4];
  *a1 = game_facility_SceneCharacterBehaviorStack_vtable;
  if (v2 == v1) {
    v4 = a1 + 7;
    v2 = v1;
  }
  else {
    v4 = a1 + 7;
    v5 = a1[6];
    v6 = &v1[v5 >> 8];
    v7 = *v6 + 16LL * (unsigned __int8)v5;
    v8 = v1[(a1[7] + v5) >> 8] +
         16LL * (unsigned __int8)(*((_BYTE*)a1 + 56) + v5);
    if (v7 != v8) {
      do {
        v9 = *(_QWORD*)(v7 + 8);
        if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak_alt1(v9);
        }
        v7 += 16;
        if (v7 - *v6 == 4096) {
          v10 = v6[1];
          ++v6;
          v7 = v10;
        }
      } while (v7 != v8);
      v1 = (__int64*)a1[3];
      v2 = (__int64*)a1[4];
    }
  }
  *v4 = 0;
  v11 = v2 - v1;
  if (v11 >= 3) {
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v13, *v1);
        v1 = (__int64*)a1[3];
        v2 = (__int64*)a1[4];
      }
      a1[3] = ++v1;
      v11 = v2 - v1;
    } while (v11 > 2);
  }
  if (v11 == 1) {
    v14 = 128;
  }
  else {
    if (v11 != 2) {
      goto LABEL_25;
    }
    v14 = 256;
  }
  a1[6] = v14;
LABEL_25:
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v15, *v1);
      }
      ++v1;
    } while (v1 != v2);
    v16 = a1[4];
    v17 = a1[3] - v16;
    if (v17 != 0) {
      a1[4] = v16 + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v18 = a1[2];
  if (v18 != 0) {
    v19 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v19, v18);
  }
}

void SceneCharacterBehaviorStack_Unknown3(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  if (*(_QWORD*)(a1 + 56) != 0) {
    if (*(_BYTE*)(a1 + 64) != 0) {
      v2 = *(_QWORD*)(a1 + 56);
    }
    else {
      v2 = -1;
    }
    v3 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * (*(_QWORD*)(a1 + 48) >> 8)) +
         16LL * (unsigned __int8)*(_QWORD*)(a1 + 48);
    v5 = *(_BYTE**)v3;
    v4 = *(_QWORD*)(v3 + 8);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v2 != 0 && v5 != nullptr) {
      v6 = fw_memory_g_heap_manager_ptr;
      while (1) {
        if ((v5[24] & 1) == 0) {
          v7 = *(_QWORD*)v5;
          v5[24] = 1;
          (*(void (**)(_BYTE*))(v7 + 24))(v5);
        }
        if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 48LL))(v5) & 1) == 0) {
          (*(void (**)(_BYTE*))(*(_QWORD*)v5 + 32LL))(v5);
        }
        if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 48LL))(v5) & 1) == 0) {
          break;
        }
        if (v5[24] == 1) {
          (*(void (**)(_BYTE*))(*(_QWORD*)v5 + 40LL))(v5);
        }
        v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) +
                                   8LL * (*(_QWORD*)(a1 + 48) >> 8)) +
                        16LL * (unsigned __int8)*(_QWORD*)(a1 + 48) + 8);
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak_alt1(v8);
        }
        v9 = *(_QWORD*)(a1 + 56) - 1LL;
        v10 = *(_QWORD*)(a1 + 48) + 1LL;
        *(_QWORD*)(a1 + 48) = v10;
        *(_QWORD*)(a1 + 56) = v9;
        if (v10 >= 0x200) {
          v11 = *(__int64**)(a1 + 24);
          v12 = *v11;
          if (*v11 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
              v13 = 128;
            }
            else {
              v13 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v13, v12);
            v11 = *(__int64**)(a1 + 24);
            v10 = *(_QWORD*)(a1 + 48);
          }
          *(_QWORD*)(a1 + 24) = v11 + 1;
          *(_QWORD*)(a1 + 48) = v10 - 256;
        }
        if (*(_BYTE*)(a1 + 64) == 1) {
          (*(void (**)(_BYTE*))(*(_QWORD*)v5 + 56LL))(v5);
          v14 = *(_QWORD*)(a1 + 24);
          v15 = *(_QWORD*)(a1 + 32);
          v16 = 32 * (v15 - v14) - 1;
          if (v15 == v14) {
            v16 = 0;
          }
          v17 = *(_QWORD*)(a1 + 56) + *(_QWORD*)(a1 + 48);
          if (v16 == v17) {
            GameRoutine_1403f60_alt1((__int64*)(a1 + 16));
            v14 = *(_QWORD*)(a1 + 24);
            v17 = *(_QWORD*)(a1 + 56) + *(_QWORD*)(a1 + 48);
          }
          v18 = (_QWORD*)(*(_QWORD*)(v14 + 8 * (v17 >> 8)) +
                          16LL * (unsigned __int8)v17);
          *v18 = v5;
          v18[1] = v4;
          if (v4 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                      memory_order_relaxed);
          }
          --v2;
          v19 = *(_QWORD*)(a1 + 56) + 1LL;
          *(_QWORD*)(a1 + 56) = v19;
          if (v19 == 0) {
            goto LABEL_46;
          }
        }
        else if (*(_QWORD*)(a1 + 56) == 0) {
          goto LABEL_46;
        }
        v20 =
            *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * (*(_QWORD*)(a1 + 48) >> 8)) +
            16LL * (unsigned __int8)*(_QWORD*)(a1 + 48);
        v5 = *(_BYTE**)v20;
        v21 = *(_QWORD*)(v20 + 8);
        if (v21 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak_alt1(v4);
        }
        if (v2 != 0) {
          v4 = v21;
          if (v5 != nullptr) {
            continue;
          }
        }
        if (v21 != 0) {
          goto LABEL_49;
        }
        return;
      }
      v21 = v4;
      if (v4 == 0) {
        return;
      }
    }
    else {
    LABEL_46:
      v21 = v4;
      if (v4 == 0) {
        return;
      }
    }
  LABEL_49:
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak_alt1(v21);
    }
  }
}

#pragma GCC visibility pop
