#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1403f60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_facility_SceneCharacterBehaviorStack_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* SceneCharacterBehaviorStack_Destructor(_QWORD* result);
__int64 SceneCharacterBehaviorStack_Unknown3(__int64 result);

_QWORD* SceneCharacterBehaviorStack_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
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

  v1 = (_QWORD*)result[3];
  v2 = (_QWORD*)result[4];
  v3 = result;
  *result = game_facility_SceneCharacterBehaviorStack_vtable;
  if (v2 == v1) {
    v4 = result + 7;
    v2 = v1;
  }
  else {
    v4 = result + 7;
    v5 = result[6];
    v6 = &v1[v5 >> 8];
    v7 = *v6 + 16LL * (unsigned __int8)v5;
    v8 = v1[(result[7] + v5) >> 8] +
         16LL * (unsigned __int8)(*((_BYTE*)result + 56) + v5);
    if (v7 != v8) {
      do {
        v9 = *(_QWORD*)(v7 + 8);
        if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v9);
        }
        v7 += 16;
        if (v7 - *v6 == 4096) {
          v10 = v6[1];
          ++v6;
          v7 = v10;
        }
      } while (v7 != v8);
      v1 = (_QWORD*)v3[3];
      v2 = (_QWORD*)v3[4];
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
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v13);
        v1 = (_QWORD*)v3[3];
        v2 = (_QWORD*)v3[4];
      }
      v3[3] = ++v1;
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
  v3[6] = v14;

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
        result = (_QWORD*)nn_mem_StandardAllocator_Free(
            fw_memory_g_heap_manager + v15);
      }
      ++v1;
    } while (v1 != v2);
    v16 = v3[4];
    v17 = v3[3] - v16;
    if (v17 != 0) {
      v3[4] = v16 + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (v3[2] != 0) {
    v18 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v18 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager +
                                                  v18);
  }
  return result;
}

__int64 SceneCharacterBehaviorStack_Unknown3(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if (*(_QWORD*)(result + 56) != 0) {
    v1 = result;
    if (*(_BYTE*)(result + 64) != 0) {
      v2 = *(_QWORD*)(result + 56);
    }
    else {
      v2 = -1;
    }
    v3 = *(_QWORD*)(*(_QWORD*)(result + 24) +
                    8LL * (*(_QWORD*)(result + 48) >> 8)) +
         16LL * (unsigned __int8)*(_QWORD*)(result + 48);
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
        result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 48LL))(v5);
        if ((result & 1) == 0) {
          break;
        }
        if (v5[24] == 1) {
          result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 40LL))(v5);
        }
        v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 24) +
                                   8LL * (*(_QWORD*)(v1 + 48) >> 8)) +
                        16LL * (unsigned __int8)*(_QWORD*)(v1 + 48) + 8);
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          result = std___1___shared_weak_count___release_weak(v8);
        }
        v9 = *(_QWORD*)(v1 + 56) - 1LL;
        v10 = *(_QWORD*)(v1 + 48) + 1LL;
        *(_QWORD*)(v1 + 48) = v10;
        *(_QWORD*)(v1 + 56) = v9;
        if (v10 >= 0x200) {
          v11 = *(_QWORD**)(v1 + 24);
          if (*v11 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v12);
            v11 = *(_QWORD**)(v1 + 24);
            v10 = *(_QWORD*)(v1 + 48);
          }
          *(_QWORD*)(v1 + 24) = v11 + 1;
          *(_QWORD*)(v1 + 48) = v10 - 256;
        }
        if (*(_BYTE*)(v1 + 64) == 1) {
          result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 56LL))(v5);
          v13 = *(_QWORD*)(v1 + 24);
          v14 = *(_QWORD*)(v1 + 32);
          v15 = 32 * (v14 - v13) - 1;
          if (v14 == v13) {
            v15 = 0;
          }
          v16 = *(_QWORD*)(v1 + 56) + *(_QWORD*)(v1 + 48);
          if (v15 == v16) {
            result = GameRoutine_1403f60(v1 + 16);
            v13 = *(_QWORD*)(v1 + 24);
            v16 = *(_QWORD*)(v1 + 56) + *(_QWORD*)(v1 + 48);
          }
          v17 = (_QWORD*)(*(_QWORD*)(v13 + 8 * (v16 >> 8)) +
                          16LL * (unsigned __int8)v16);
          *v17 = v5;
          v17[1] = v4;
          if (v4 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                      memory_order_relaxed);
          }
          --v2;
          v18 = *(_QWORD*)(v1 + 56) + 1LL;
          *(_QWORD*)(v1 + 56) = v18;
          if (v18 == 0) {
            goto LABEL_46;
          }
        }
        else if (*(_QWORD*)(v1 + 56) == 0) {
          goto LABEL_46;
        }
        v19 =
            *(_QWORD*)(*(_QWORD*)(v1 + 24) + 8LL * (*(_QWORD*)(v1 + 48) >> 8)) +
            16LL * (unsigned __int8)*(_QWORD*)(v1 + 48);
        v5 = *(_BYTE**)v19;
        v20 = *(_QWORD*)(v19 + 8);
        if (v20 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          result = std___1___shared_weak_count___release_weak(v4);
        }
        if (v2 != 0) {
          v4 = v20;
          if (v5 != nullptr) {
            continue;
          }
        }
        if (v20 != 0) {
          goto LABEL_49;
        }
        return result;
      }
      v20 = v4;
      if (v4 == 0) {
        return result;
      }
    }
    else {
    LABEL_46:
      v20 = v4;
      if (v4 == 0) {
        return result;
      }
    }
  LABEL_49:
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      return std___1___shared_weak_count___release_weak(v20);
    }
  }
  return result;
}

#pragma GCC visibility pop
