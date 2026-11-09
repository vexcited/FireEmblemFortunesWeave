#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18e4620(_QWORD, _QWORD);
__int64 GameRoutine_18e5e60(_QWORD);
__int64 GameRoutine_9a58b0(_QWORD);
__int64 GameRoutine_bcb8e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bcb9e0(_QWORD);
__int64 GameRoutine_bcc1a0(_QWORD, _QWORD);
__int64 GameRoutine_bcd5c0(_QWORD);
__int64 eft_EmitterSetHandle_Get_5b6700(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Wait(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
extern _UNKNOWN GameData_21675d0;
extern __int64 GameData_226b928;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* eft_g_effectSystem_ptr[3];
extern char** GameData_212e998;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a250(_QWORD);
void __attribute__((noreturn)) GameRoutine_bc84c0(_QWORD);
__int64 Config_bc4f00(__int64 a1, unsigned int a2, unsigned int a3);
__int64 Config_bc5290(__int64 result);
__int64 Config_bc5620(__int64 a1, __int64 a2);
__int64 Config_bc56a0(__int64 a1, unsigned int a2, __int64* a3);
__int64 Config_bc5b80(__int64 result, __int64* a2, unsigned int a3);
__int64 Config_bc7060(__int64 result, int a2);
__int64 Config_bc72a0(__int64 result, unsigned int a2);
__int64 Config_bc7520(__int64 a1, _BYTE* a2);
__int64 Config_bc7660(__int64 a1, __int64 a2);
__int64 Config_bc7840(__int64 a1, __int64 a2);
__int64 Config_bc79a0(__int64 result, int a2);
unsigned __int64 Config_bc7c20(__int64 a1);

__int64 Config_bc4f00(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  unsigned int* v10;
  unsigned int* v11;
  int v12;
  __int64 result;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64* v23;
  __int64 v24;
  unsigned int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned int v30;

  v3 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 296) - 24LL) + 8LL * a2);
  if (v3 == nullptr) {
    return 0;
  }
  if (v3[4] == v3[3]) {
    return 0;
  }
  v4 = v3[2];
  if (v4 == 0) {
    return 0;
  }
  v5 = v3[1];
  v8 = v3[2];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v9 = std___1___shared_weak_count_lock(v8);
  std___1___shared_weak_count___release_weak(v4);
  if (v9 == 0) {
    return 0;
  }
  if (v5 == 0 ||
      (v10 = (unsigned int*)v3[3], v11 = (unsigned int*)v3[4], v10 == v11)) {
  LABEL_62:
    result = 0;
    goto LABEL_63;
  }
  v12 = a3;
  if (a2 >= 0x20) {
    if (a3 != -1) {
      while (1) {
        if (*v10 == v12 && (v12 & 0x80000000) == 0 && v12 < *(_DWORD*)v5) {
          v14 = (__int64*)(*(_QWORD*)(v5 + 112) + 48LL * a3);
          v15 = *v14;
          v16 = v14[1];
          if (v16 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                      memory_order_relaxed);
            if (v15 != 0) {
              goto LABEL_65;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
              std___1___shared_weak_count___release_weak(v16);
              v12 = a3;
            }
          }
          else if (v15 != 0) {
            goto LABEL_65;
          }
        }
        if (++v10 == v11) {
          goto LABEL_62;
        }
      }
    }
    do {
      v22 = *v10;
      if ((*v10 & 0x80000000) == 0 && (signed int)v22 < *(_DWORD*)v5) {
        v23 = (__int64*)(*(_QWORD*)(v5 + 112) + 48LL * v22);
        v15 = *v23;
        v24 = v23[1];
        if (v24 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                    memory_order_relaxed);
          if (v15 != 0) {
          LABEL_65:
            (*(void (**)(__int64))(*(_QWORD*)v15 + 96LL))(v15);
            GameRoutine_60a250("bitset test argument out of range");
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            std___1___shared_weak_count___release_weak(v24);
          }
        }
        else if (v15 != 0) {
          goto LABEL_65;
        }
      }
      ++v10;
    } while (v10 != v11);
    goto LABEL_62;
  }
  if (a3 != -1) {
    while (1) {
      if (*v10 != v12 || v12 < 0 || v12 >= *(_DWORD*)v5) {
        goto LABEL_23;
      }
      v17 = (__int64*)(*(_QWORD*)(v5 + 112) + 48LL * a3);
      v18 = *v17;
      v19 = v17[1];
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v18 != 0) {
        v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 96LL))(v18);
        v12 = a3;
        v21 = (v20 >> a2) & 1;
        if (v19 == 0) {
          goto LABEL_35;
        }
      }
      else {
        LODWORD(v21) = 3;
        if (v19 == 0) {
          goto LABEL_35;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
        v12 = a3;
      }
    LABEL_35:
      if ((_DWORD)v21 != 3 && (_DWORD)v21 != 0) {
        goto LABEL_61;
      }
    LABEL_23:
      if (++v10 == v11) {
        goto LABEL_62;
      }
    }
  }
  while (1) {
    v25 = *v10;
    if ((*v10 & 0x80000000) != 0 || (signed int)v25 >= *(_DWORD*)v5) {
      goto LABEL_48;
    }
    v26 = (__int64*)(*(_QWORD*)(v5 + 112) + 48LL * v25);
    v27 = *v26;
    v28 = v26[1];
    if (v28 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v27 != 0) {
      v29 = ((unsigned __int64)(*(__int64 (**)(__int64))(*(_QWORD*)v27 + 96LL))(
                 v27) >>
             a2) &
            1;
      if (v28 == 0) {
        goto LABEL_59;
      }
    }
    else {
      LODWORD(v29) = 3;
      if (v28 == 0) {
        goto LABEL_59;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      std___1___shared_weak_count___release_weak(v28);
    }
  LABEL_59:
    if ((_DWORD)v29 != 3 && (_DWORD)v29 != 0) {
      break;
    }
  LABEL_48:
    if (++v10 == v11) {
      goto LABEL_62;
    }
  }

LABEL_61:
  result = 1;

LABEL_63:
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v30 = result;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
    return v30;
  }
  return result;
}

__int64 Config_bc5290(__int64 result)
{
  __int64 v1;

  v1 = result;
  if (*(_DWORD*)(result + 424) != 0) {
    result = fw_world_JobContext_Wait(GameData_226b928);
    *(_DWORD*)(v1 + 424) = 0;
  }
  *(_QWORD*)(v1 + 384) = *(_QWORD*)(v1 + 376);
  *(_QWORD*)(v1 + 408) = *(_QWORD*)(v1 + 400);
  return result;
}

__int64 Config_bc5620(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;

  if (a2 + 136 != *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 296) - 24LL) +
                             8LL * *(unsigned int*)(a2 + 176)) +
                      64LL) {
    v3 = *(__int64**)(a2 + 144);
    v4 = *v3;
    *(_QWORD*)(*(_QWORD*)(a2 + 136) + 8LL) = v3;
    *v3 = *(_QWORD*)(a2 + 136);
    *(_QWORD*)(v4 + 8) = a2 + 136;
    *(_QWORD*)(a2 + 136) = v4;
  }
  GameRoutine_18e4620(*(_QWORD*)(a1 + 440), a2);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 8LL))(a2);
}

__int64 Config_bc56a0(__int64 a1, unsigned int a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];

  v6 = fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  v8 = *a3;
  v9 = a3[1];
  v10 = v7;
  v15[0] = v8;
  v15[1] = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_bcb8e0(v7, a2, v15, *(_QWORD*)(a1 + 136));
    result = std___1___shared_weak_count___release_weak(v9);
  }
  else {
    result = GameRoutine_bcb8e0(v7, a2, v15, *(_QWORD*)(a1 + 136));
  }
  v12 = *(_QWORD*)(*(_QWORD*)(a1 + 296) - 24LL);
  v13 = *(_QWORD*)(v12 + 8LL * (int)a2);
  *(_QWORD*)(v12 + 8LL * (int)a2) = v10;
  if (v13 != 0) {
    GameRoutine_bcb9e0(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v14 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v14);
  }
  return result;
}

__int64 Config_bc5b80(__int64 result, __int64* a2, unsigned int a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  unsigned int* i;
  unsigned int v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  a2[1] = *a2;
  v3 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(result + 296) - 24LL) + 8LL * a3);
  if (v3 != nullptr) {
    v5 = v3[3];
    v4 = v3[4];
    v6 = v4 - v5;
    if (v4 != v5) {
      v7 = v3[2];
      if (v7 != 0) {
        v8 = v3[1];
        v10 = v3[2];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                  memory_order_relaxed);
        v11 = std___1___shared_weak_count_lock(v10);
        result = std___1___shared_weak_count___release_weak(v7);
        if (v11 != 0) {
          v36 = v11;
          if (v8 != 0) {
            v12 = *a2;
            v13 = v6 >> 2;
            v37 = v8;
            if (v6 >> 2 > (unsigned __int64)((a2[2] - *a2) >> 3)) {
              if (v13 >> 61 != 0) {
              LABEL_44:
                GameRoutine_bc84c0(result);
              }
              v14 = a2[1] - v12;
              v15 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                   2 * v6, 16, 0);
              v16 = v15 + v14;
              result = memcpy(v15, v12, v14);
              v8 = v37;
              *a2 = v15;
              a2[1] = v16;
              a2[2] = v15 + 8 * v13;
              if (v12 != 0) {
                v17 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v17 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
              }
            }
            v18 = (unsigned int*)v3[3];
            for (i = (unsigned int*)v3[4]; v18 != i; ++v18) {
              v20 = *v18;
              if ((*v18 & 0x80000000) == 0 && (signed int)v20 < *(_DWORD*)v8) {
                v21 = (__int64*)(*(_QWORD*)(v8 + 112) + 48LL * v20);
                v23 = *v21;
                v22 = v21[1];
                if (v22 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8),
                                            1u, memory_order_relaxed);
                }
                if (v23 != 0) {
                  v25 = (_QWORD*)a2[1];
                  v24 = a2[2];
                  if ((unsigned __int64)v25 >= v24) {
                    v27 = *a2;
                    v28 = (__int64)v25 - *a2;
                    v29 = (v28 >> 3) + 1;
                    if (v29 >> 61 != 0) {
                      goto LABEL_44;
                    }
                    v30 = v24 - v27;
                    if (v30 >> 2 > v29) {
                      v29 = v30 >> 2;
                    }
                    if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v31 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v31 = v29;
                    }
                    if (v31 != 0) {
                      if (v31 >> 61 != 0) {
                        GameRoutine_60a210(result);
                      }
                      v32 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v31, 16,
                          0);
                    }
                    else {
                      v32 = 0;
                    }
                    v33 = v32 + 8 * v31;
                    v34 = v32 + v28 - 8 * (v28 >> 3);
                    *(_QWORD*)(v32 + v28) = v23;
                    v26 = v32 + v28 + 8;
                    result = memcpy(v34, v27, v28);
                    *a2 = v34;
                    a2[1] = v26;
                    a2[2] = v33;
                    if (v27 != 0) {
                      v35 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v35 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
                    }
                    v8 = v37;
                  }
                  else {
                    *v25 = v23;
                    v26 = (__int64)(v25 + 1);
                  }
                  a2[1] = v26;
                }
                if (v22 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                  result = std___1___shared_weak_count___release_weak(v22);
                }
              }
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
            return std___1___shared_weak_count___release_weak(v36);
          }
        }
      }
    }
  }
  return result;
}

__int64 Config_bc7060(__int64 result, int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  char v14;
  __int64 v15;

  v2 = *(_QWORD*)(result + 296);
  v4 = *(_QWORD*)(v2 - 48);
  v5 = *(_QWORD*)(v2 - 40);
  if (v4 != v5) {
    while (*(_DWORD*)(v4 + 8) != a2) {
      v4 += 48;
      if (v4 == v5) {
        v4 = *(_QWORD*)(v2 - 40);
        goto LABEL_11;
      }
    }
    result = GameRoutine_18e5e60(v4);
  }
  v6 = v4 + 48;
  if (v4 != v5 && v6 != v5) {
    v10 = fw_memory_g_heap_manager_ptr;
    do {
      if (*(_DWORD*)(v6 + 8) == a2) {
        result = GameRoutine_18e5e60(v6);
      }
      else {
        v13 = *(_DWORD*)(v6 + 8);
        *(_QWORD*)v4 = *(_QWORD*)v6;
        v14 = *(_BYTE*)(v4 + 16);
        *(_DWORD*)(v4 + 8) = v13;
        if ((v14 & 1) != 0 && *(_QWORD*)(v4 + 32) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v15);
        }
        v11 = *(_QWORD*)(v6 + 16);
        v12 = *(_QWORD*)(v6 + 32);
        *(_QWORD*)(v4 + 24) = *(_QWORD*)(v6 + 24);
        *(_QWORD*)(v4 + 32) = v12;
        *(_QWORD*)(v4 + 16) = v11;
        *(_WORD*)(v6 + 16) = 0;
        *(_BYTE*)(v4 + 40) = *(_BYTE*)(v6 + 40);
        v4 += 48;
      }
      v6 += 48;
    } while (v6 != v5);
  }

LABEL_11:
  v8 = *(_QWORD*)(v2 - 40);
  if (v4 != v8) {
    do {
      if ((*(_BYTE*)(v8 - 32) & 1) != 0 && *(_QWORD*)(v8 - 16) != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v9);
      }
      v8 -= 48;
    } while (v8 != v4);
    *(_QWORD*)(v2 - 40) = v4;
  }
  return result;
}

__int64 Config_bc72a0(__int64 result, unsigned int a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if ((a2 & 0x80000000) == 0) {
    v2 = *(_QWORD*)(result + 296);
    v4 = result;
    v5 = *(__int64**)(v2 - 24);
    v6 = *(__int64**)(v2 - 16);
    if (v5 != v6) {
      do {
        result = *v5;
        if (*v5 != 0) {
          result = GameRoutine_bcc1a0(result, a2);
        }
        ++v5;
      } while (v5 != v6);
      v2 = *(_QWORD*)(v4 + 296);
    }
    v7 = *(_QWORD*)(v2 - 48);
    v8 = *(_QWORD*)(v2 - 40);
    if (v7 != v8) {
      while (*(_DWORD*)(v7 + 8) != a2) {
        v7 += 48;
        if (v7 == v8) {
          v7 = *(_QWORD*)(v2 - 40);
          goto LABEL_26;
        }
      }
      result = GameRoutine_18e5e60(v7);
    }
    if (v7 != v8) {
      v9 = v7 + 48;
      if (v7 + 48 != v8) {
        v10 = fw_memory_g_heap_manager_ptr;
        do {
          if (*(_DWORD*)(v9 + 8) == a2) {
            result = GameRoutine_18e5e60(v9);
          }
          else {
            v13 = *(_DWORD*)(v9 + 8);
            *(_QWORD*)v7 = *(_QWORD*)v9;
            v14 = *(_BYTE*)(v7 + 16);
            *(_DWORD*)(v7 + 8) = v13;
            if ((v14 & 1) != 0 && *(_QWORD*)(v7 + 32) != 0) {
              if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
                v15 = 128;
              }
              else {
                v15 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v15);
            }
            v11 = *(_QWORD*)(v9 + 16);
            v12 = *(_QWORD*)(v9 + 32);
            *(_QWORD*)(v7 + 24) = *(_QWORD*)(v9 + 24);
            *(_QWORD*)(v7 + 32) = v12;
            *(_QWORD*)(v7 + 16) = v11;
            *(_WORD*)(v9 + 16) = 0;
            *(_BYTE*)(v7 + 40) = *(_BYTE*)(v9 + 40);
            v7 += 48;
          }
          v9 += 48;
        } while (v9 != v8);
      }
    }
  LABEL_26:
    v16 = *(_QWORD*)(v2 - 40);
    if (v7 != v16) {
      do {
        if ((*(_BYTE*)(v16 - 32) & 1) != 0 && *(_QWORD*)(v16 - 16) != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v17 = 128;
          }
          else {
            v17 = 56;
          }
          result =
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v17);
        }
        v16 -= 48;
      } while (v16 != v7);
      *(_QWORD*)(v2 - 40) = v7;
    }
  }
  return result;
}

__int64 Config_bc7520(__int64 a1, _BYTE* a2)
{
  __int64* v2;
  __int64 v3;
  char** v4;
  __int64 v5;
  __int64 v6;
  unsigned int v8;
  unsigned int v9;
  char** v10;
  unsigned int v11;
  int v12;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = eft_g_effectSystem_ptr[0];
  v3 = *eft_g_effectSystem_ptr[0];
  v4 = GameData_212e998;
  if (a2 != nullptr) {
    v5 = *(_QWORD*)(v3 + 112);
    v6 = *(_QWORD*)(v5 + 24);
    if (v6 != 0 && *a2 != 0) {
      v8 = *(_DWORD*)(v5 + 32);
      if (v8 != 0) {
        v9 = 0;
        v10 = GameData_212e998;
        while (1) {
          v11 = (v8 + v9) >> 1;
          v4 = (char**)(v6 + 336LL * v11);
          v12 = strcmp(*v4, a2);
          if (v12 == 0) {
            break;
          }
          if (v12 < 0) {
            v9 = v11 + 1;
          }
          else {
            v8 = (v8 + v9) >> 1;
          }
          if (v9 == v8) {
            v4 = v10;
            break;
          }
        }
      }
    }
  }
  if (v4[1] != nullptr || v4[3] == nullptr) {
    v14 = GameRoutine_9a58b0(v4);
    v15 = *(_QWORD*)(*v2 + 104);
    v16 = v15 + 8;
    v17 = *(_QWORD*)(v15 + 16);
    if (v17 != v16) {
      while (*(_DWORD*)(v17 + 16) != v14) {
        v17 = *(_QWORD*)(v17 + 8);
        if (v17 == v16) {
          return 0;
        }
      }
      if (*(_BYTE*)(v17 - 7) != 1) {
        return 1;
      }
    }
  }
  else if (GameRoutine_bcd5c0(*(_QWORD*)(v3 + 104)) != 0) {
    return 1;
  }
  return 0;
}

__int64 Config_bc7660(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  char v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;

  nn_os_LockMutex(&GameData_21675d0);
  if (a2 != 0) {
    if (*(_DWORD*)(a2 + 36) != 0) {
      v4 = a2 + 40;
      v5 = 0;
      v6 = 0;
      do {
        v8 = *(_QWORD*)(v4 + 8 * v5);
        if (v8 != 0) {
          if (((*(__int64 (**)(_QWORD))(*(_QWORD*)v8 + 32LL))(
                   *(_QWORD*)(v4 + 8 * v5)) &
               1) != 0) {
            v6 = 1;
            *(_QWORD*)(v8 + 152) = 0;
            *(_WORD*)(v8 + 184) = -1;
            *(_BYTE*)(v8 + 338) = 0;
            *(_BYTE*)(v8 + 336) = 1;
            *(_QWORD*)(v4 + 8 * v5) = 0;
          }
          else {
            v6 = 0;
          }
        }
        v7 = *(unsigned int*)(a2 + 36);
        ++v5;
      } while (v5 < v7);
      if ((v6 & 1 | (v7 == 0)) == 0) {
        v13 = 0;
        v14 = eft_g_effectSystem_ptr[0];
        do {
          v15 = *(_QWORD*)(v4 + 8 * v13);
          if (v15 != 0) {
            v16 = *v14;
            *(_QWORD*)(v15 + 152) = 0;
            *(_WORD*)(v15 + 184) = -1;
            if (v15 + 136 !=
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 296) - 24LL) +
                           8LL * *(unsigned int*)(v15 + 176)) +
                    64LL) {
              v17 = *(__int64**)(v15 + 144);
              v18 = *v17;
              *(_QWORD*)(*(_QWORD*)(v15 + 136) + 8LL) = v17;
              *v17 = *(_QWORD*)(v15 + 136);
              *(_QWORD*)(v18 + 8) = v15 + 136;
              *(_QWORD*)(v15 + 136) = v18;
            }
            GameRoutine_18e4620(*(_QWORD*)(v16 + 440), v15);
            (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
            *(_QWORD*)(v4 + 8 * v13) = 0;
            v7 = *(unsigned int*)(a2 + 36);
          }
          ++v13;
        } while (v13 < v7);
      }
    }
    if (a2 != *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 296) - 24LL) +
                         8LL * *(unsigned int*)(a2 + 20)) +
                  48LL) {
      v9 = *(__int64**)(a2 + 8);
      v10 = *v9;
      *(_QWORD*)(*(_QWORD*)a2 + 8LL) = v9;
      *v9 = *(_QWORD*)a2;
      *(_QWORD*)(v10 + 8) = a2;
      *(_QWORD*)a2 = v10;
    }
    v11 = *(_QWORD*)(a1 + 432);
    *(_DWORD*)(a2 + 16) = 0;
    *(_QWORD*)(a2 + 24) = 0;
    *(_DWORD*)(a2 + 36) = 0;
    *(_QWORD*)(a2 + 80) = *(_QWORD*)(v11 + 16);
    *(_QWORD*)(v11 + 16) = a2;
  }
  return nn_os_UnlockMutex(&GameData_21675d0);
}

__int64 Config_bc7840(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;

  nn_os_LockMutex(&GameData_21675d0);
  if (a2 != 0) {
    v4 = *(unsigned int*)(a2 + 36);
    if ((_DWORD)v4 != 0) {
      v5 = a2 + 40;
      v6 = 0;
      v7 = eft_g_effectSystem_ptr[0];
      do {
        v8 = *(_QWORD*)(v5 + 8 * v6);
        if (v8 != 0) {
          v9 = *v7;
          *(_QWORD*)(v8 + 152) = 0;
          *(_WORD*)(v8 + 184) = -1;
          if (v8 + 136 != *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 296) - 24LL) +
                                     8LL * *(unsigned int*)(v8 + 176)) +
                              64LL) {
            v10 = *(__int64**)(v8 + 144);
            v11 = *v10;
            *(_QWORD*)(*(_QWORD*)(v8 + 136) + 8LL) = v10;
            *v10 = *(_QWORD*)(v8 + 136);
            *(_QWORD*)(v11 + 8) = v8 + 136;
            *(_QWORD*)(v8 + 136) = v11;
          }
          GameRoutine_18e4620(*(_QWORD*)(v9 + 440), v8);
          (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
          *(_QWORD*)(v5 + 8 * v6) = 0;
          v4 = *(unsigned int*)(a2 + 36);
        }
        ++v6;
      } while (v6 < v4);
    }
    if (a2 != *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 296) - 24LL) +
                         8LL * *(unsigned int*)(a2 + 20)) +
                  48LL) {
      v12 = *(__int64**)(a2 + 8);
      v13 = *v12;
      *(_QWORD*)(*(_QWORD*)a2 + 8LL) = v12;
      *v12 = *(_QWORD*)a2;
      *(_QWORD*)(v13 + 8) = a2;
      *(_QWORD*)a2 = v13;
    }
    v14 = *(_QWORD*)(a1 + 432);
    *(_DWORD*)(a2 + 16) = 0;
    *(_QWORD*)(a2 + 24) = 0;
    *(_DWORD*)(a2 + 36) = 0;
    *(_QWORD*)(a2 + 80) = *(_QWORD*)(v14 + 16);
    *(_QWORD*)(v14 + 16) = a2;
  }
  return nn_os_UnlockMutex(&GameData_21675d0);
}

__int64 Config_bc79a0(__int64 result, int a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64** v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;

  v2 = *(_QWORD*)(result + 296);
  v3 = *(__int64**)(v2 - 24);
  v4 = *(__int64**)(v2 - 16);
  if (v3 != v4) {
    v6 = eft_g_effectSystem_ptr[0];
    do {
      v7 = *v3;
      if (*v3 != 0 && *(_DWORD*)(v7 + 4) == a2) {
        while (1) {
          v8 = *(_QWORD*)(v7 + 56);
          if (v8 == v7 + 48) {
            break;
          }
          result = Config_bc7840(*v6, v8);
        }
        while (1) {
          v10 = *(__int64***)(v7 + 72);
          if (v10 == (__int64**)(v7 + 64)) {
            break;
          }
          v11 = *v6;
          if (v10 !=
              (__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v6 + 296) - 24LL) +
                                     8LL * *((unsigned int*)v10 + 10)) +
                          64LL)) {
            v12 = v10[1];
            v13 = (__int64*)*v12;
            (*v10)[1] = (__int64)v12;
            *v12 = (__int64)*v10;
            v13[1] = (__int64)v10;
            *v10 = v13;
          }
          v9 = v10 - 17;
          GameRoutine_18e4620(*(_QWORD*)(v11 + 440), v10 - 17);
          result = ((__int64 (*)(__int64**))(*v9)[1])(v9);
        }
      }
      ++v3;
    } while (v3 != v4);
  }
  return result;
}

unsigned __int64 Config_bc7c20(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  unsigned __int8 v5;
  __int64 i;
  int v7;
  __int64 v9;
  unsigned int v10;

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  do {
    if ((Config_bc4f00(a1, v2, 0xFFFFFFFF) & 1) != 0) {
      for (i = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 8 * v2 + 176); i != 0;
           i = *(_QWORD*)(i + 464)) {
        if (*(int*)(i + 380) < 1 || *(_BYTE*)(i + 12) == 0) {
          continue;
        }
        if (*(_BYTE*)(i + 11) == 0) {
          continue;
        }
        v9 = *(_QWORD*)(i + 448);
        if (v9 == 0 || *(_BYTE*)(v9 + 446) != 1) {
          continue;
        }
        v10 = *(_DWORD*)(v9 + 408);
        if (*(_DWORD*)(v9 + 420) != 0) {
          if ((v5 & 1) != 0) {
            goto LABEL_6;
          }
        }
        else {
          if ((*(_BYTE*)(eft_EmitterSetHandle_Get_5b6700(v9 + 472) + 562) &
               4) != 0) {
            v10 = 0x80000000;
          }
          if ((v5 & 1) != 0) {
          LABEL_6:
            v7 = v4 | (v3 << 8);
            if (v7 <= (int)v10) {
              v7 = v10;
            }
            v4 = (unsigned __int8)v7;
            v3 = (unsigned int)v7 >> 8;
            goto LABEL_9;
          }
        }
        v4 = (unsigned __int8)v10;
        v3 = v10 >> 8;
      LABEL_9:
        v5 = 1;
      }
    }
    ++v2;
  } while (v2 != 63);
  return v4 | ((unsigned __int64)v3 << 8) | ((unsigned __int64)v5 << 32);
}

#pragma GCC visibility pop
