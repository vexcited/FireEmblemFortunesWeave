#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a70a20(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_a70ec0(__int64 result, unsigned __int64);
__int64 GameRoutine_b362c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b36540(_QWORD, _QWORD);
__int64 GameRoutine_b36980(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1fc0ff0[])();
extern __int64 (*wld_DecalModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_a932b0(void);
void __attribute__((noreturn)) GameRoutine_a932f0(void);
__int64 DecalModule_Destructor(_QWORD* a1);
__int64* DecalModule_a92840(__int64* result, _QWORD* a2);
__int64 DecalModule_a929a0(_QWORD* a1);
__int64 DecalModule_a93060(__int64* a1, __int64 a2);

__int64 DecalModule_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 j;
  __int64 v23;
  __int64 k;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 result;
  _QWORD* v53;

  v1 = a1[12];
  v2 = a1;
  a1[11] = 0;
  a1[12] = 0;
  *a1 = wld_DecalModule_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[4];
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3);
    if (v4 != 0) {
      v5 = v2[3];
      v6 = v4;
      if (v5 != 0) {
        v7 = v2[5];
        for (i = v2[6]; v7 != i; v7 += 96) {
          GameRoutine_a70ec0(v5, *(_QWORD*)(v7 + 24));
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  v9 = (__int64*)v2[5];
  v10 = (__int64*)v2[6];
  if (v9 != v10) {
    v53 = v2;
    v11 = game_g_frame_clock_ptr[0];
    v12 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v13 = *v11;
      v14 = *v11 + 16592;
      v15 = fw_memory_HeapManager_Allocate(*v12, 24, 16, 0);
      *(_DWORD*)(v15 + 8) = 2;
      *(_QWORD*)v15 = GameData_1fc0ff0;
      v16 = v15;
      v17 = *v9;
      *v9 = 0;
      v9 += 12;
      *(_QWORD*)(v15 + 16) = v17;
      v18 = (_QWORD*)fw_memory_HeapManager_Allocate(*v12, 24, 16, 0);
      v18[1] = v14;
      v18[2] = v16;
      v19 = *(_QWORD*)(v13 + 16592);
      *v18 = v19;
      *(_QWORD*)(v19 + 8) = v18;
      *(_QWORD*)(v13 + 16592) = v18;
      ++*(_QWORD*)(v13 + 16608);
    } while (v9 != v10);
    v2 = v53;
    v9 = (__int64*)v53[5];
    v10 = (__int64*)v53[6];
  }
  while (v10 != v9) {
    v30 = *(v10 - 12);
    v10 -= 12;
    v29 = v30;
    *v10 = 0;
    if (v30 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
    }
  }
  v2[6] = v9;
  v20 = v2[8];
  v21 = v2[9];
  for (j = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13424); v20 != v21;
       v20 += 56) {
    GameRoutine_b36540(j, v20 + 24);
  }
  v23 = v2[13];
  for (k = v2[14]; v23 != k; v23 += 24) {
    GameRoutine_b36540(j, v23);
  }
  v26 = v2[8];
  v25 = v2[9];
  if (v26 != v25) {
    v27 = v2[9];
    v28 = fw_memory_g_heap_manager_ptr;
    do {
      v31 = *(_BYTE*)(v27 - 56);
      v27 -= 56;
      if ((v31 & 1) != 0) {
        v32 = *(_QWORD*)(v25 - 40);
        if (v32 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
            v33 = 128;
          }
          else {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v28 + v33, v32);
        }
      }
      v25 = v27;
    } while (v27 != v26);
  }
  v34 = v2[13];
  v2[9] = v26;
  v2[14] = v34;
  if (v34 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                                  v34);
  }
  v36 = v2[12];
  if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    std___1___shared_weak_count___release_weak(v36);
  }
  v37 = v2[8];
  if (v37 != 0) {
    v38 = v2[9];
    if (v37 == v38) {
      goto LABEL_50;
    }
    v39 = v2[9];
    v40 = fw_memory_g_heap_manager_ptr;
    do {
      v41 = *(_BYTE*)(v39 - 56);
      v39 -= 56;
      if ((v41 & 1) != 0) {
        v42 = *(_QWORD*)(v38 - 40);
        if (v42 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) != 0) {
            v43 = 128;
          }
          else {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v40 + v43, v42);
        }
      }
      v38 = v39;
    } while (v39 != v37);
    v44 = v2[8];
    v2[9] = v37;
    v37 = v44;
    if (v44 != 0) {
    LABEL_50:
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v37);
    }
  }
  v46 = (_QWORD*)v2[5];
  if (v46 != nullptr) {
    v47 = (_QWORD*)v2[6];
    if (v46 == v47) {
      goto LABEL_60;
    }
    do {
      v49 = *(v47 - 12);
      v47 -= 12;
      v48 = v49;
      *v47 = 0;
      if (v49 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v48 + 8LL))(v48);
      }
    } while (v47 != v46);
    v50 = (_QWORD*)v2[5];
    v2[6] = v46;
    v46 = v50;
    if (v50 != nullptr) {
    LABEL_60:
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v46);
    }
  }
  result = v2[4];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64* DecalModule_a92840(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v4 = result;
  if ((unsigned __int64)v2 >= v3) {
    v8 = *result;
    v9 = (__int64)v2 - *result;
    v10 = 1 - 0x5555555555555555LL * (v9 >> 3);
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_a932b0();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x555555555555555LL) {
      v13 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v14 = a2;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v13, 16, 0);
      a2 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = (_QWORD*)(v15 + v9);
    v17 = v15 + 24 * v13;
    v18 = a2[1];
    v7 = v15 + v9 + 24;
    *v16 = *a2;
    v16[1] = v18;
    v16[2] = a2[2];
    result = (__int64*)memcpy(v15, v8, v9);
    *v4 = v15;
    v4[1] = v7;
    v4[2] = v17;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v19 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v19, v8);
    }
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
  }
  v4[1] = v7;
  return result;
}

__int64 DecalModule_a929a0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  _DWORD* v6;
  char v7;
  __int64 v8;
  _DWORD* v9;
  _DWORD* v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  char v39;
  __int64 v40;
  __int64 v41;

  result = a1[4];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[3];
      v4 = result;
      if (v3 != 0) {
        v5 = (_DWORD*)a1[8];
        v6 = (_DWORD*)a1[9];
        if (v5 != v6) {
          v7 = 0;
          v8 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13424);
          while (2) {
            v9 = v5 + 8;
            while (1) {
              result = GameRoutine_b36980(v8, v9 - 2);
              if ((_DWORD)result != 1) {
                v11 = *((unsigned __int8*)v9 - 32);
                v12 = (v11 & 1) == 0;
                v13 = v11 >> 1;
                v14 = v12 ? (__int64)v9 - 31 : *((_QWORD*)v9 - 2);
                v15 = v12 ? v13 : *((_QWORD*)v9 - 3);
                result = GameRoutine_b362c0(v8, v9 - 2, v14, v15);
                if (*((_QWORD*)v9 - 1) != 0 && *v9 != -1) {
                  break;
                }
              }
              v10 = v9 + 6;
              v9 += 14;
              if (v10 == v6) {
                if ((v7 & 1) == 0) {
                  goto LABEL_52;
                }
                goto LABEL_25;
              }
            }
            DecalModule_a92840(a1 + 13, (_QWORD*)v9 - 1);
            v21 = a1[5] + 96LL * (int)v9[4];
            v22 = *v9;
            *(_QWORD*)(v21 + 8) = *((_QWORD*)v9 - 1);
            v23 = *(_QWORD*)v21;
            *(_DWORD*)(v21 + 16) = v22;
            v24 = *((_QWORD*)v9 - 1);
            v25 = *(_QWORD*)v9;
            if (*(_BYTE*)(v23 + 264) == 1) {
              *(_DWORD*)(v23 + 256) = v25;
            }
            else {
              *(_QWORD*)(v23 + 256) = v25;
              *(_BYTE*)(v23 + 264) = 1;
            }
            *(_QWORD*)(v23 + 248) = v24;
            result = GameRoutine_a70a20(v3, *(_QWORD*)v21, v17, v18, v19, v20);
            v5 = v9 + 6;
            v7 = 1;
            *(_QWORD*)(v21 + 24) = result;
            v9[4] = -1;
            if (v9 + 6 != v6) {
              continue;
            }
            break;
          }
        LABEL_25:
          v26 = a1[8];
          v27 = (__int64*)a1[9];
          if ((__int64*)v26 != v27) {
            while (*(_DWORD*)(v26 + 48) != -1) {
              v26 += 56;
              if ((__int64*)v26 == v27) {
                goto LABEL_52;
              }
            }
          }
          if ((__int64*)v26 != v27) {
            v28 = (__int64*)(v26 + 56);
            if ((__int64*)(v26 + 56) != v27) {
              v29 = fw_memory_g_heap_manager_ptr;
              do {
                if (*((_DWORD*)v28 + 12) != -1) {
                  if ((*(_BYTE*)v26 & 1) != 0) {
                    v35 = *(_QWORD*)(v26 + 16);
                    if (v35 != 0) {
                      if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) != 0) {
                        v36 = 128;
                      }
                      else {
                        v36 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)v29 + v36, v35);
                    }
                  }
                  v30 = *v28;
                  v31 = v28[2];
                  *(_QWORD*)(v26 + 8) = v28[1];
                  *(_QWORD*)(v26 + 16) = v31;
                  *(_QWORD*)v26 = v30;
                  *(_WORD*)v28 = 0;
                  v32 = v28[3];
                  v33 = v28[4];
                  v34 = v28[5];
                  *(_DWORD*)(v26 + 48) = *((_DWORD*)v28 + 12);
                  *(_QWORD*)(v26 + 32) = v33;
                  *(_QWORD*)(v26 + 40) = v34;
                  *(_QWORD*)(v26 + 24) = v32;
                  v26 += 56;
                }
                v28 += 7;
              } while (v28 != v27);
              v27 = (__int64*)a1[9];
            }
          }
          if ((__int64*)v26 != v27) {
            v37 = v27;
            v38 = fw_memory_g_heap_manager_ptr;
            do {
              v39 = *((_BYTE*)v37 - 56);
              v37 -= 7;
              if ((v39 & 1) != 0) {
                v40 = *(v27 - 5);
                if (v40 != 0) {
                  if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) != 0) {
                    v41 = 128;
                  }
                  else {
                    v41 = 56;
                  }
                  result =
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v41, v40);
                }
              }
              v27 = v37;
            } while (v37 != (__int64*)v26);
            a1[9] = v26;
          }
        }
      }
    LABEL_52:
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 DecalModule_a93060(__int64* a1, __int64 a2)
{
  char* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if (*(_QWORD*)(a2 + 64) == *(_QWORD*)(a2 + 72)) {
    return 0;
  }
  v2 = (char*)*a1;
  v3 = (char*)a1[1];
  v4 = (char*)*a1;
  if ((char*)*a1 != v3) {
    v5 = v3 - v2 - 8;
    v4 = (char*)*a1;
    if ((~(_BYTE)v5 & 0x18) == 0) {
    LABEL_7:
      if (v5 >= 0x18) {
        v4 += 16;
        while (1) {
          if (*((_QWORD*)v4 - 2) == a2) {
            if (v4 - 16 != v3) {
              return 0;
            }
            goto LABEL_16;
          }
          if (*((_QWORD*)v4 - 1) == a2) {
            v4 -= 8;
            goto LABEL_34;
          }
          if (*(_QWORD*)v4 == a2) {
            goto LABEL_34;
          }
          if (*((_QWORD*)v4 + 1) == a2) {
            break;
          }
          v7 = v4 + 16;
          v4 += 32;
          if (v7 == v3) {
            goto LABEL_16;
          }
        }
        if (v4 + 8 != v3) {
          return 0;
        }
      }
      goto LABEL_16;
    }
    v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
    v4 = (char*)*a1;
    while (*(_QWORD*)v4 != a2) {
      v4 += 8;
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
  }

LABEL_34:
  if (v4 != v3) {
    return 0;
  }

LABEL_16:
  v8 = a1[2];
  if ((unsigned __int64)v3 >= v8) {
    v10 = (char*)(v3 - v2);
    v11 = (v3 - v2) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_a932f0();
    }
    v13 = v8 - (_QWORD)v2;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(a1);
      }
      v16 = a1;
      v17 = a2;
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
      a2 = v17;
    }
    else {
      v16 = a1;
      v18 = 0;
    }
    v19 = v18 + 8 * v15;
    v20 = (__int64)&v10[v18 + -8 * v11];
    *(_QWORD*)&v10[v18] = a2;
    v9 = (__int64)&v10[v18 + 8];
    memcpy(v20, v2, v10);
    a1 = v16;
    *v16 = v20;
    v16[1] = v9;
    v16[2] = v19;
    if (v2 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v21, v2);
      a1 = v16;
    }
  }
  else {
    *(_QWORD*)v3 = a2;
    v9 = (__int64)(v3 + 8);
  }
  a1[1] = v9;
  return 1;
}

#pragma GCC visibility pop
