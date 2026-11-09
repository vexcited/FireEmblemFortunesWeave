#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_66fe60(_QWORD* __return_ptr, _QWORD);
_QWORD* GameRoutine_670240(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17d4db0(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_66e000(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_ClearThreadCache(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fbfde8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Components_a5df80(__int64 a1, __int64 a2, atomic_uint* a3);
__int64* Components_a5e340(__int64* result, __int64 a2);
int** Components_a8a090(int** result, int** a2, int** a3, int** a4, int** a5);

__int64 Components_a5df80(__int64 a1, __int64 a2, atomic_uint* a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  atomic_uint* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int8* v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int8* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v39;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  v3 = *(_QWORD*)(a1 + 8);
  v44 = 0;
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = (*(_QWORD*)(v3 + 88) - *(_QWORD*)(v3 + 80)) >> 7;
  if ((int)v5 >= 1) {
    v6 = a3;
    v39 = (*(_QWORD*)(v3 + 88) - *(_QWORD*)(v3 + 80)) >> 7;
    do {
      LODWORD(v7) = atomic_fetch_add(v6, 0x10u);
      if ((int)v7 + 16 >= (int)v5) {
        v8 = v5;
      }
      else {
        v8 = v7 + 16;
      }
      if (v44 != 0) {
        if ((int)v7 < (int)v5) {
          goto LABEL_11;
        }
      }
      else {
        v9 = fw_memory_HeapManager_Allocate(*v4, 1032, 16, 0);
        memset(v9, 0, 1032, v10, v11, v12);
        v41 = 0;
        Components_a5e340(&v44, v9);
        Components_a5e340(&v41, 0);
        if ((int)v7 < (int)v5) {
        LABEL_11:
          v7 = (int)v7;
          do {
            v16 = (unsigned __int8*)(*(_QWORD*)(v3 + 80) + (v7 << 7));
            v17 = *((_QWORD*)v16 + 3);
            nn_os_AcquireReadLock(v17 + 696);
            v18 = *(_DWORD*)(v17 + 656);
            nn_os_ReleaseReadLock(v17 + 696);
            if ((v18 & 8) != 0) {
              v19 = v3;
              v20 = (_QWORD*)(v44 + (*(_QWORD*)(v44 + 1024) << 6));
              v21 = *(_QWORD*)(*((_QWORD*)v16 + 3) + 592LL);
              if (v16[96] != 0) {
                v22 = v16 + 32;
              }
              else {
                v22 = nullptr;
              }
              v23 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 320, 16, 0);
              v24 = v23 + 4;
              v25 = v23;
              v23[1] = 0;
              v23[2] = 0;
              *v23 = GameData_1fbfde8;
              GameRoutine_66e000(v23 + 4, v21, v22);
              v26 = v20[1];
              *v20 = v24;
              v20[1] = v25;
              if (v26 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
                std___1___shared_weak_count___release_weak(v26);
              }
              v27 = *v16;
              v28 = *v20;
              if ((v27 & 1) != 0) {
                v29 = *((_QWORD*)v16 + 1);
              }
              else {
                v29 = v27 >> 1;
              }
              if ((v27 & 1) != 0) {
                v30 = *((unsigned __int8**)v16 + 2);
              }
              else {
                v30 = v16 + 1;
              }
              GameRoutine_60a060(*v20, v30, v29);
              v3 = v19;
              if ((v16[112] & 1) == 0) {
                GameRoutine_66fe60(&v41, v28);
                v31 = v20[2];
                if (v31 != 0) {
                  v20[3] = v31;
                  v32 = 56;
                  if (*(_QWORD*)(*v4 + 200LL) != 0) {
                    v32 = 128;
                  }
                  nn_mem_StandardAllocator_Free(*v4 + v32);
                  v20[3] = 0;
                  v20[4] = 0;
                  v20[2] = 0;
                }
                v20[2] = v41;
                v20[3] = v42;
                v20[4] = v43;
                GameRoutine_670240(&v41, v28, v20[2],
                                   (__int64)(v20[3] - v20[2]) >> 4);
                v33 = v20[5];
                if (v33 != 0) {
                  v34 = v20[6];
                  if (v33 == v34) {
                    goto LABEL_13;
                  }
                  do {
                    v35 = *(_QWORD*)(v34 - 48);
                    *(_QWORD*)(v34 - 48) = 0;
                    if (v35 != 0) {
                      v36 = 56;
                      if (*(_QWORD*)(*v4 + 200LL) != 0) {
                        v36 = 128;
                      }
                      nn_mem_StandardAllocator_Free(*v4 + v36);
                    }
                    v34 -= 64;
                  } while (v34 != v33);
                  v13 = v20[5];
                  v20[6] = v33;
                  if (v13 != 0) {
                  LABEL_13:
                    v14 = 56;
                    if (*(_QWORD*)(*v4 + 200LL) != 0) {
                      v14 = 128;
                    }
                    nn_mem_StandardAllocator_Free(*v4 + v14);
                  }
                  v20[6] = 0;
                  v20[7] = 0;
                  v20[5] = 0;
                }
                v20[5] = v41;
                v20[6] = v42;
                v20[7] = v43;
              }
              GameRoutine_634d80(*(_QWORD*)(*((_QWORD*)v16 + 3) + 8LL));
              v15 = v44;
              *((_QWORD*)v16 + 3) = 0;
              ++*(_QWORD*)(v15 + 1024);
            }
            ++v7;
          } while (v7 < v8);
          LODWORD(v5) = v39;
          v6 = a3;
        }
      }
      v37 = v44;
      if (*(_QWORD*)(v44 + 1024) != 0) {
        v44 = 0;
        GameRoutine_17d4db0(v3 + 104, v37);
      }
    } while ((int)v7 < (int)v5);
  }
  if (*(_QWORD*)(*v4 + 760LL) != 0) {
    nn_mem_StandardAllocator_ClearThreadCache(*v4 + 688LL);
  }
  return Components_a5e340(&v44, 0);
}

__int64* Components_a5e340(__int64* result, __int64 a2)
{
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
  __int64 v13;
  __int64 v14;

  v2 = *result;
  *result = a2;
  if (v2 != 0) {
    v3 = v2 + 1024;
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v5 = *(_QWORD*)(v3 - 24);
      if (v5 != 0) {
        v6 = *(_QWORD*)(v3 - 16);
        if (v5 == v6) {
          goto LABEL_14;
        }
        do {
          v7 = *(_QWORD*)(v6 - 48);
          *(_QWORD*)(v6 - 48) = 0;
          if (v7 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
          }
          v6 -= 64;
        } while (v6 != v5);
        v9 = *(_QWORD*)(v3 - 24);
        *(_QWORD*)(v3 - 16) = v5;
        if (v9 != 0) {
        LABEL_14:
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
        }
      }
      v11 = *(_QWORD*)(v3 - 48);
      if (v11 != 0) {
        *(_QWORD*)(v3 - 40) = v11;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12);
      }
      v13 = *(_QWORD*)(v3 - 56);
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
      v3 -= 64;
    } while (v3 != v2);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v14 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14);
  }
  return result;
}

int** Components_a8a090(int** result, int** a2, int** a3, int** a4, int** a5)
{
  int* v5;
  int* v6;
  int* v7;
  int v8;
  int v9;
  int* v10;
  int* v11;
  int* v12;
  int* v13;
  int* v14;
  int* v15;
  int* v16;

  v5 = *a2;
  v6 = *result;
  v7 = *a3;
  v8 = **a2;
  v9 = **a3;
  if (v8 >= **result) {
    if (v9 >= v8) {
      v5 = *a3;
    }
    else {
      *a2 = v7;
      *a3 = v5;
      v10 = *result;
      if (**a2 < **result) {
        *result = *a2;
        *a2 = v10;
        v5 = *a3;
      }
    }
  }
  else {
    if (v9 < v8) {
      *result = v7;
    LABEL_9:
      *a3 = v6;
      v5 = v6;
      goto LABEL_11;
    }
    *result = v5;
    *a2 = v6;
    v5 = *a3;
    if (**a3 < *v6) {
      *a2 = v5;
      goto LABEL_9;
    }
  }

LABEL_11:
  if (**a4 < *v5) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if (**a3 < **a2) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if (**a2 < **result) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if (**a5 < **a4) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if (**a4 < **a3) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if (**a3 < **a2) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if (**a2 < **result) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
