#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_66fe60(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_670240(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
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
__int64 Components_a5df80_alt1(__int64 a1, __int64 a2,
                               atomic_uint* a3) __asm__("Components_a5df80");
__int64* Components_a5e340_alt1(__int64* result,
                                __int64 a2) __asm__("Components_a5e340");
int** Components_a8a090(int** result, int** a2, int** a3, int** a4, int** a5);
__attribute__((swiftcall)) void
GameRoutine_66fe60_alt1(PSEUDO_X8, _QWORD*) __asm__("GameRoutine_66fe60");
__attribute__((swiftcall)) void game_670240(PSEUDO_X8, __int64 result, __int64,
                                            unsigned __int64);
__int64 GameRoutine_17d4db0_alt1(__int64,
                                 __int64) __asm__("GameRoutine_17d4db0");
__int64 GameRoutine_634d80_alt1(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_AcquireReadLock_alt1(__int64) __asm__("nn_os_AcquireReadLock");
__int64 nn_os_ReleaseReadLock_alt1(__int64) __asm__("nn_os_ReleaseReadLock");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
void GameRoutine_66e000_alt1(__int64, __int64,
                             int32x4_t*) __asm__("GameRoutine_66e000");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Components_a5df80(__int64 a1, __int64 a2, atomic_uint* a3);
void Components_a5e340(__int64* a1, __int64 a2);

void Components_a5df80(__int64 a1, __int64 a2, atomic_uint* a3)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  atomic_uint* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int32x4_t* v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int32x4_t* v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  struct {
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v37_;
  __int64 v40;

  v3 = *(_QWORD*)(a1 + 8);
  v40 = 0;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = (*(_QWORD*)(v3 + 88) - *(_QWORD*)(v3 + 80)) >> 7;
  if ((int)v5 >= 1) {
    v6 = a3;
    v35 = (*(_QWORD*)(v3 + 88) - *(_QWORD*)(v3 + 80)) >> 7;
    do {
      LODWORD(v7) = atomic_fetch_add(v6, 0x10u);
      if ((int)v7 + 16 >= (int)v5) {
        v8 = v5;
      }
      else {
        v8 = v7 + 16;
      }
      if (v40 != 0) {
        if ((int)v7 < (int)v5) {
          goto LABEL_11;
        }
      }
      else {
        v9 = fw_memory_HeapManager_Allocate_alt1(*v4, 1032, 16, 0);
        memset_alt1(v9, 0, 0x408u);
        v37_.v37 = 0;
        Components_a5e340(&v40, v9);
        Components_a5e340(&v37_.v37, 0);
        if ((int)v7 < (int)v5) {
        LABEL_11:
          v7 = (int)v7;
          do {
            v14 = (int32x4_t*)(*(_QWORD*)(v3 + 80) + (v7 << 7));
            v15 = LANES128(v14[1]).n128_u64[1];
            nn_os_AcquireReadLock_alt1(v15 + 696);
            v16 = *(_DWORD*)(v15 + 656);
            nn_os_ReleaseReadLock_alt1(v15 + 696);
            if ((v16 & 8) != 0) {
              v17 = v3;
              v18 = v40 + (*(_QWORD*)(v40 + 1024) << 6);
              v19 = *(_QWORD*)(LANES128(v14[1]).n128_u64[1] + 592);
              if (LANES128(v14[6]).n128_u8[0] != 0) {
                v20 = v14 + 2;
              }
              else {
                v20 = nullptr;
              }
              v21 =
                  (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v4, 320, 16, 0);
              v22 = v21 + 4;
              v23 = v21;
              v21[1] = 0;
              v21[2] = 0;
              *v21 = GameData_1fbfde8;
              GameRoutine_66e000_alt1((__int64)(v21 + 4), v19, v20);
              v24 = *(_QWORD*)(v18 + 8);
              *(_QWORD*)v18 = v22;
              *(_QWORD*)(v18 + 8) = v23;
              if (v24 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
                std___1___shared_weak_count___release_weak_alt1(v24);
              }
              v25 = LANES128(*(v14)).n128_u8[0];
              v26 = *(_QWORD**)v18;
              if ((v25 & 1) != 0) {
                v27 = LANES128(*(v14)).n128_u64[1];
              }
              else {
                v27 = v25 >> 1;
              }
              if ((v25 & 1) != 0) {
                v28 = LANES128(v14[1]).n128_i64[0];
              }
              else {
                v28 = (__int64)LANES128(*(v14)).n128_i64 + 1;
              }
              GameRoutine_60a060_alt1(*(char**)v18, v28, v27);
              v3 = v17;
              if ((LANES128(v14[7]).n128_u8[0] & 1) == 0) {
                GameRoutine_66fe60_alt1((void*)(&v37_.v37), v26);
                v29 = *(_QWORD*)(v18 + 16);
                if (v29 != 0) {
                  *(_QWORD*)(v18 + 24) = v29;
                  v30 = 56;
                  if (*(_QWORD*)(*v4 + 200) != 0) {
                    v30 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v4 + v30, v29);
                  *(_QWORD*)(v18 + 24) = 0;
                  *(_QWORD*)(v18 + 32) = 0;
                  *(_QWORD*)(v18 + 16) = 0;
                }
                *(_QWORD*)(v18 + 16) = v37_.v37;
                *(_QWORD*)(v18 + 24) = v37_.v38;
                *(_QWORD*)(v18 + 32) = v37_.v39;
                game_670240(
                    (void*)(&v37_.v37), (__int64)v26, *(_QWORD*)(v18 + 16),
                    (__int64)(*(_QWORD*)(v18 + 24) - *(_QWORD*)(v18 + 16)) >>
                        4);
                v11 = *(_QWORD*)(v18 + 40);
                if (v11 != 0) {
                  v31 = *(_QWORD*)(v18 + 48);
                  if (v11 == v31) {
                    goto LABEL_13;
                  }
                  do {
                    v32 = *(_QWORD*)(v31 - 48);
                    *(_QWORD*)(v31 - 48) = 0;
                    if (v32 != 0) {
                      v33 = 56;
                      if (*(_QWORD*)(*v4 + 200) != 0) {
                        v33 = 128;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v4 + v33, v32);
                    }
                    v31 -= 64;
                  } while (v31 != v11);
                  v10 = *(_QWORD*)(v18 + 40);
                  *(_QWORD*)(v18 + 48) = v11;
                  v11 = v10;
                  if (v10 != 0) {
                  LABEL_13:
                    v12 = 56;
                    if (*(_QWORD*)(*v4 + 200) != 0) {
                      v12 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v4 + v12, v11);
                  }
                  *(_QWORD*)(v18 + 48) = 0;
                  *(_QWORD*)(v18 + 56) = 0;
                  *(_QWORD*)(v18 + 40) = 0;
                }
                *(_QWORD*)(v18 + 40) = v37_.v37;
                *(_QWORD*)(v18 + 48) = v37_.v38;
                *(_QWORD*)(v18 + 56) = v37_.v39;
              }
              GameRoutine_634d80_alt1(
                  *(_QWORD*)(LANES128(v14[1]).n128_u64[1] + 8),
                  LANES128(v14[1]).n128_i64[1]);
              v13 = v40;
              LANES128(v14[1]).n128_u64[1] = 0;
              ++*(_QWORD*)(v13 + 1024);
            }
            ++v7;
          } while (v7 < v8);
          LODWORD(v5) = v35;
          v6 = a3;
        }
      }
      v34 = v40;
      if (*(_QWORD*)(v40 + 1024) != 0) {
        v40 = 0;
        GameRoutine_17d4db0_alt1(v3 + 104, v34);
      }
    } while ((int)v7 < (int)v5);
  }
  if (*(_QWORD*)(*v4 + 760) != 0) {
    nn_mem_StandardAllocator_ClearThreadCache(*v4 + 688);
  }
  Components_a5e340(&v40, 0);
}

void Components_a5e340(__int64* a1, __int64 a2)
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

  v2 = *a1;
  *a1 = a2;
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
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v8, v7);
          }
          v6 -= 64;
        } while (v6 != v5);
        v9 = *(_QWORD*)(v3 - 24);
        *(_QWORD*)(v3 - 16) = v5;
        v5 = v9;
        if (v9 != 0) {
        LABEL_14:
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v10, v5);
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
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v12, v11);
      }
      v13 = *(_QWORD*)(v3 - 56);
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v13);
      }
      v3 -= 64;
    } while (v3 != v2);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v14, v2);
  }
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
