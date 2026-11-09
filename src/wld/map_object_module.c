#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a5cb20(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a5aca0(_QWORD);
__int64 MapObjectModule_a7d120(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_212e358[2])();
extern __int64 (*wld_MapObjectModule_vtable[])();
extern __int64 GameData_21fdde0;
extern __int64 GameData_21fdde8;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_a5dcd0(_QWORD);
__int64 MapObjectModule_Destructor(__int64 result);
__int64 MapObjectModule_a7d220(__int64 result);
_QWORD* MapObjectModule_a7dcc0(__int64 a1);

__int64 MapObjectModule_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v1 = result;
  *(_QWORD*)result = wld_MapObjectModule_vtable;
  if (*(_BYTE*)(result + 152) == 1) {
    *(_BYTE*)(result + 152) = 0;
    result = MapObjectModule_a7d120(result);
  }
  if (*(_BYTE*)(v1 + 153) == 1) {
    *(_BYTE*)(v1 + 153) = 0;
    result = MapObjectModule_a7d220(v1);
  }
  if ((*(_BYTE*)(v1 + 248) & 1) != 0) {
    v2 = *(_QWORD*)(v1 + 264);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  v4 = *(_QWORD*)(v1 + 216);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v1 + 224);
    if (v4 == v5) {
      goto LABEL_18;
    }
    do {
      v6 = *(_QWORD*)(v5 - 8);
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        result = std___1___shared_weak_count___release_weak(v6);
      }
      v5 -= 16;
    } while (v5 != v4);
    v7 = *(_QWORD*)(v1 + 216);
    *(_QWORD*)(v1 + 224) = v4;
    v4 = v7;
    if (v7 != 0) {
    LABEL_18:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v4);
    }
  }
  v9 = *(_QWORD*)(v1 + 192);
  if (v9 != 0) {
    v10 = *(_QWORD*)(v1 + 200);
    if (v9 == v10) {
      goto LABEL_32;
    }
    v11 = *(_QWORD*)(v1 + 200);
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      v13 = *(_BYTE*)(v11 - 24);
      v11 -= 24;
      if ((v13 & 1) != 0) {
        v14 = *(_QWORD*)(v10 - 8);
        if (v14 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v15, v14);
        }
      }
      v10 = v11;
    } while (v11 != v9);
    v16 = *(_QWORD*)(v1 + 192);
    *(_QWORD*)(v1 + 200) = v9;
    v9 = v16;
    if (v16 != 0) {
    LABEL_32:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v9);
    }
  }
  v18 = *(_QWORD*)(v1 + 184);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    result = std___1___shared_weak_count___release_weak(v18);
  }
  v19 = *(_QWORD*)(v1 + 128);
  if (v19 != 0) {
    v20 = *(_QWORD*)(v1 + 136);
    if (v19 == v20) {
      goto LABEL_49;
    }
    v21 = *(_QWORD*)(v1 + 136);
    v22 = fw_memory_g_heap_manager_ptr;
    do {
      v23 = *(_BYTE*)(v21 - 24);
      v21 -= 24;
      if ((v23 & 1) != 0) {
        v24 = *(_QWORD*)(v20 - 8);
        if (v24 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
            v25 = 128;
          }
          else {
            v25 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v25, v24);
        }
      }
      v20 = v21;
    } while (v21 != v19);
    v26 = *(_QWORD*)(v1 + 128);
    *(_QWORD*)(v1 + 136) = v19;
    v19 = v26;
    if (v26 != 0) {
    LABEL_49:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v19);
    }
  }
  if ((*(_BYTE*)(v1 + 96) & 1) != 0) {
    v28 = *(_QWORD*)(v1 + 112);
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
    }
  }
  if ((*(_BYTE*)(v1 + 72) & 1) != 0) {
    v30 = *(_QWORD*)(v1 + 88);
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v30);
    }
  }
  if ((*(_BYTE*)(v1 + 48) & 1) != 0) {
    v32 = *(_QWORD*)(v1 + 64);
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v32);
    }
  }
  if ((*(_BYTE*)(v1 + 24) & 1) != 0) {
    v34 = *(_QWORD*)(v1 + 40);
    if (v34 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v34);
    }
  }
  return result;
}

__int64 MapObjectModule_a7d220(__int64 result)
{
  __int64 v1;
  int v2;
  unsigned __int8** v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int8* v6;
  unsigned __int8* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  unsigned __int8** v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int8* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int8* v22;

  if ((*(_BYTE*)(result + 168) & 1) == 0) {
    v1 = result;
    v2 =
        *(_BYTE*)(result + 153) & (unsigned __int8)~*(_BYTE*)(result + 157) & 1;
    if (*(unsigned __int8*)(result + 158) != v2) {
      v3 = *(unsigned __int8***)(result + 272);
      if (v3 != nullptr) {
        v4 = *(unsigned __int8*)(result + 72);
        if ((v4 & 1) != 0) {
          v5 = *(_QWORD*)(result + 80);
        }
        else {
          v5 = v4 >> 1;
        }
        if (v5 != 0) {
          v6 = *v3;
          v7 = v3[1];
          if (*v3 != v7) {
            if ((v4 & 1) != 0) {
              v8 = *(_QWORD*)(result + 88);
            }
            else {
              v8 = result + 73;
            }
            while (1) {
              v9 = *v6;
              v10 = *((_QWORD*)v6 + 1);
              if ((v9 & 1) == 0) {
                v10 = v9 >> 1;
              }
              if (v10 == v5) {
                v11 = (v9 & 1) != 0 ? *((unsigned __int8**)v6 + 2) : v6 + 1;
                result = memcmp(v11, v8, v5);
                if ((_DWORD)result == 0) {
                  break;
                }
              }
              v6 += 96;
              if (v6 == v7) {
                goto LABEL_22;
              }
            }
          }
          if (v6 != v7) {
            v6[24] = v2;
          }
        }
      LABEL_22:
        v12 = *(unsigned __int8**)(v1 + 192);
        v13 = *(unsigned __int8**)(v1 + 200);
        while (v12 != v13) {
          v14 = *(unsigned __int8***)(v1 + 272);
          v15 = *v14;
          v16 = v14[1];
          if (*v14 != v16) {
            v17 = *v12;
            if ((v17 & 1) != 0) {
              v18 = *((_QWORD*)v12 + 1);
            }
            else {
              v18 = v17 >> 1;
            }
            if ((v17 & 1) != 0) {
              v19 = *((unsigned __int8**)v12 + 2);
            }
            else {
              v19 = v12 + 1;
            }
            while (1) {
              v20 = *v15;
              v21 = *((_QWORD*)v15 + 1);
              if ((v20 & 1) == 0) {
                v21 = v20 >> 1;
              }
              if (v21 == v18) {
                v22 = (v20 & 1) != 0 ? *((unsigned __int8**)v15 + 2) : v15 + 1;
                result = memcmp(v22, v19, v18);
                if ((_DWORD)result == 0) {
                  break;
                }
              }
              v15 += 96;
              if (v15 == v16) {
                goto LABEL_23;
              }
            }
          }
          if (v15 != v16) {
            v15[24] = v2;
          }
        LABEL_23:
          v12 += 24;
        }
        *(_BYTE*)(v1 + 158) = v2;
      }
    }
  }
  return result;
}

_QWORD* MapObjectModule_a7dcc0(__int64 a1)
{
  _QWORD* v1;
  unsigned __int8* v3;
  unsigned __int8* v4;
  atomic_uchar* v5;
  void* v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  void* v24;
  atomic_uchar* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8* v35;
  __int64 v36;
  __int64 v37;

  v1 = (_QWORD*)(a1 + 216);
  if (*(_QWORD*)(a1 + 216) == *(_QWORD*)(a1 + 224) &&
      (*(_BYTE*)(a1 + 240) & 1) == 0) {
    v4 = *(unsigned __int8**)(a1 + 192);
    v3 = *(unsigned __int8**)(a1 + 200);
    if (v4 == v3) {
      goto LABEL_45;
    }
    v5 = (atomic_uchar*)&GameData_21fde98;
    v6 = &GameData_21fdd90;
    v35 = *(unsigned __int8**)(a1 + 200);
    do {
      if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(v5) != 0) {
        GameRoutine_a5aca0(v6);
        GameRoutine_2b0(GameData_212e358[0], v6, &GameData_1f50948);
        __cxa_guard_release(v5);
      }
      v7 = *v4;
      v8 = (v7 & 1) == 0;
      v9 = v7 >> 1;
      if (v8) {
        v10 = v4 + 1;
      }
      else {
        v10 = *((unsigned __int8**)v4 + 2);
      }
      if (v8) {
        v11 = v9;
      }
      else {
        v11 = *((_QWORD*)v4 + 1);
      }
      v12 = GameRoutine_a5cb20(&v36, v6, v10, v11);
      v13 = v36;
      if (v36 != 0) {
        v14 = *(_QWORD**)(a1 + 224);
        v15 = *(_QWORD*)(a1 + 232);
        if ((unsigned __int64)v14 >= v15) {
          v18 = *v1;
          v19 = v1;
          v20 = (__int64)v14 - *v1;
          v21 = v20 >> 4;
          v22 = (v20 >> 4) + 1;
          if (v22 >> 60 != 0) {
            GameRoutine_a5dcd0(v12);
          }
          v23 = v15 - v18;
          v24 = v6;
          v25 = v5;
          if (v23 >> 3 > v22) {
            v22 = v23 >> 3;
          }
          if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF0LL) {
            v26 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v26 = v22;
          }
          if (v26 >> 60 != 0) {
            GameRoutine_60a210(v12);
          }
          v27 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v26, 16, 0);
          v28 = v37;
          v29 = (_QWORD*)(v27 + v20);
          *v29 = v13;
          v29[1] = v28;
          if (v28 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                      memory_order_relaxed);
            v18 = *(_QWORD*)(a1 + 216);
            v20 = *(_QWORD*)(a1 + 224) - v18;
            v21 = v20 >> 4;
          }
          v30 = &v29[-2 * v21];
          v31 = v27 + 16 * v26;
          v17 = v29 + 2;
          memcpy(v30, v18, v20);
          *(_QWORD*)(a1 + 216) = v30;
          *(_QWORD*)(a1 + 224) = v17;
          *(_QWORD*)(a1 + 232) = v31;
          if (v18 != 0) {
            v32 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v32 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v18);
          }
          v5 = v25;
          v6 = v24;
          v3 = v35;
          v1 = v19;
        }
        else {
          *v14 = v36;
          v16 = v37;
          v14[1] = v37;
          if (v16 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                      memory_order_relaxed);
          }
          v17 = v14 + 2;
        }
        *(_QWORD*)(a1 + 224) = v17;
      }
      v33 = v37;
      if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
        std___1___shared_weak_count___release_weak(v33);
      }
      v4 += 24;
    } while (v4 != v3);
    if (*(_QWORD*)(a1 + 216) == *(_QWORD*)(a1 + 224)) {
    LABEL_45:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        GameRoutine_a5aca0(&GameData_21fdd90);
        GameRoutine_2b0(GameData_212e358[0], &GameData_21fdd90,
                        &GameData_1f50948);
        __cxa_guard_release(&GameData_21fde98);
      }
      if (GameData_21fdde0 == GameData_21fdde8) {
        *(_BYTE*)(a1 + 240) = 1;
      }
    }
  }
  return v1;
}

#pragma GCC visibility pop
