#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_MapIconList_vtable)();
extern __int64 GameData_212dc38[7];
extern __int64 fw_memory_g_heap_manager_ptr;
float fmodf(_QWORD, float, float);
void GameRoutine_1035650(__int64, __int64, __int64, float*);
__int64 CondTalkIconList_Unknown3(__int64 result, __int64 a2);
void CondTalkIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                               __int64 a5);
__int64 CondTalkIconList_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CondTalkIconList_DeletingDestructor");
_QWORD* LayoutAccessor_1560520(__int64*, __int64, __int64, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
char* GameRoutine_1038880(char**, _QWORD*);
void LayoutAccessor_1562680(__int64*, __int64, float);
void CondTalkIconList_Unknown2(__int64 a1, __int64 a2);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
float fmodf_alt1(float, float) __asm__("fmodf");
void game_hub_1035650(__int64, __int64, __int64, float*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CondTalkIconList_DeletingDestructor(_QWORD* a1);

void CondTalkIconList_Unknown2(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 i;
  int v13;
  int j;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __n128 v24;
  __int64** v25;
  unsigned __int64 v26;
  __int64* v27;
  char* v28;
  __int64 v29;
  struct {
    __int64* v30;
    __int64* v31;
    __int64* v32;
    __int64 v33;
    __int64 v34;
    char gap40_[8];
    __int64* v35;
    __int64* v36;
  } v30_;
  _BYTE v37[264];

  v3 = *(_QWORD*)(a2 + 8);
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = *(__int64**)a2;
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v7);
      }
      if (v6 != nullptr) {
        v9 = *(__int64**)a2;
        v8 = *(_QWORD*)(a2 + 8);
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
        }
        v10 = *(_QWORD*)(a1 + 16);
        *(_QWORD*)(a1 + 8) = v9;
        *(_QWORD*)(a1 + 16) = v8;
        if (v10 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v10);
        }
        v11 = *(_QWORD*)(a1 + 24);
        for (i = *(_QWORD*)(a1 + 32); i != v11; i -= 64) {
          v15 = *(_QWORD*)(i - 40);
          if (v15 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v15);
          }
        }
        v13 = *(_DWORD*)(a1 + 48);
        *(_QWORD*)(a1 + 32) = v11;
        if (v13 >= 1) {
          for (j = 0; j < *(_DWORD*)(a1 + 48); ++j) {
            sprintf(v37, "L_CondTalk%d", j);
            if (j != 0) {
              v16 = *(_QWORD*)(a2 + 8);
              if (v16 != 0 &&
                  (v17 = std___1___shared_weak_count_lock(v16)) != 0) {
                v18 = v17;
                LayoutAccessor_1560520(*(__int64**)a2, (__int64)"L_CondTalk0",
                                       (__int64)"N_CondTalk", (__int64)v37);
                if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
                  std___1___shared_weak_count___release_weak_alt1(v18);
                }
              }
              else {
                LayoutAccessor_1560520(nullptr, (__int64)"L_CondTalk0",
                                       (__int64)"N_CondTalk", (__int64)v37);
              }
            }
            v19 = std___1___shared_weak_count_lock(*(_QWORD*)(a2 + 8));
            LayoutAccessor_1560070((void*)(&v30_.v30), *(__int64**)a2,
                                   (__int64)v37);
            if (v30_.v31 != nullptr) {
              v20 = std___1___shared_weak_count_lock(v30_.v31);
              if (v20 != 0) {
                v21 = v30_.v30;
              }
              else {
                v21 = nullptr;
              }
              if (v30_.v31 != nullptr) {
                std___1___shared_weak_count___release_weak_alt1(v30_.v31);
              }
            }
            else {
              v20 = 0;
              v21 = nullptr;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (v21 != nullptr) {
                goto LABEL_35;
              }
            }
            else {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              std___1___shared_weak_count___release_weak_alt1(v19);
              if (v21 != nullptr) {
              LABEL_35:
                v22 = std___1___shared_weak_count_lock(*(_QWORD*)(a2 + 8));
                v23 = ui_LayoutAccessor_FindPane(*(__int64**)a2, (__int64)v37);
                if (v20 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16),
                                            1u, memory_order_relaxed);
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16),
                                            1u, memory_order_relaxed);
                }
                v25 = *(__int64***)(a1 + 32);
                v26 = *(_QWORD*)(a1 + 40);
                v30_.v30 = (__int64*)v23;
                v30_.v31 = nullptr;
                v30_.v32 = v21;
                v30_.v33 = v20;
                v30_.v34 = 0;
                v30_.v35 = nullptr;
                v30_.v36 = nullptr;
                if ((unsigned __int64)v25 >= v26) {
                  v28 = GameRoutine_1038880((char**)(a1 + 24), &v30_.v30);
                  v29 = v30_.v33;
                  *(_QWORD*)(a1 + 32) = v28;
                  if (v29 != 0) {
                    v24 = std___1___shared_weak_count___release_weak_alt1(v29);
                  }
                }
                else {
                  v27 = v30_.v30;
                  v25[3] = (__int64*)v20;
                  v25[4] = nullptr;
                  *v25 = v27;
                  v25[1] = v30_.v31;
                  v25[2] = v21;
                  v30_.v32 = nullptr;
                  v30_.v33 = 0;
                  v25[6] = v30_.v35;
                  v25[7] = v30_.v36;
                  *(_QWORD*)(a1 + 32) = v25 + 8;
                }
                if (v20 != 0) {
                  v24 = std___1___shared_weak_count___release_weak_alt1(v20);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64, long double))(*(_QWORD*)v22 + 16LL))(
                      v22, *(long double*)&v24);
                  std___1___shared_weak_count___release_weak_alt1(v22);
                }
                *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) - 64LL) + 88LL) |= 1u;
                LayoutAccessor_1562680(v21, (__int64)"Loop_Eff",
                                       0x1.0000000000000p+0f);
                if (v20 == 0) {
                  continue;
                }
              LABEL_46:
                if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
                  std___1___shared_weak_count___release_weak_alt1(v20);
                }
                continue;
              }
            }
            if (v20 != 0) {
              goto LABEL_46;
            }
          }
        }
      }
    }
  }
}

__int64 CondTalkIconList_Unknown3(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;

  v2 = *(_QWORD*)(a2 + 136);
  v3 = *(_QWORD*)(a2 + 144);
  if (v2 == v3) {
    v5 = 0;
  }
  else {
    v4 = 0;
    v5 = 0;
    do {
      ++v5;
      v2 += 96;
      v6 = *(_QWORD*)(*(_QWORD*)(result + 24) + v4);
      v4 += 64;
      *(_BYTE*)(v6 + 88) |= 1u;
    } while (v2 != v3);
  }
  v7 = *(_QWORD*)(result + 24);
  if (v5 < (*(_QWORD*)(result + 32) - v7) >> 6) {
    v8 = v5 << 6;
    do {
      v9 = *(_QWORD*)(v7 + v8);
      ++v5;
      v8 += 64LL;
      *(_BYTE*)(v9 + 88) &= ~1u;
      v7 = *(_QWORD*)(result + 24);
    } while (v5 < (*(_QWORD*)(result + 32) - v7) >> 6);
  }
  return result;
}

void CondTalkIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                               __int64 a5)
{

#pragma clang fp contract(off)
  __int128* v5;
  __int128* v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int128 v20;
  char v21;

  v5 = *(__int128**)(a2 + 136);
  v6 = *(__int128**)(a2 + 144);
  if (v5 != v6) {
    v11 = 0;
    v12 = GameData_212dc38[0];
    do {
      v13 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + v11);
      v14 = *a3;
      if (*a3 == 1) {
        game_hub_1035650(a1, *(_QWORD*)(*(_QWORD*)(a1 + 24) + v11), (__int64)v5,
                         a4);
        v14 = *a3;
      }
      if (v14 == 0 && (*(_BYTE*)(v13 + 88) & 1) != 0) {
        v16 = *(float*)(a5 + 8);
        v15 = *(float*)(a5 + 12);
        v17 = *(float*)a5;
        if (*(_BYTE*)(a5 + 16) == 1) {
          v18 = *(float*)(*(_QWORD*)v12 + 100LL);
          v19 = fmodf_alt1(v18, 0x1.6800000000000p+8f);
          if (v18 < 0x0.0p+0f) {
            v19 = v19 + 0x1.6800000000000p+8f;
          }
        }
        else {
          v19 = *(float*)(a5 + 4);
        }
        v20 = *v5;
        v21 = *(_BYTE*)(v13 + 88);
        *(_DWORD*)(v13 + 56) = 0;
        *(_QWORD*)(v13 + 60) = 0;
        *(float*)(v13 + 68) = v19;
        *(_BYTE*)(v13 + 88) = v21 | 0x10;
        *(float*)(v13 + 48) = v17 * (float)(*(float*)&v20 - v16);
        *(float*)(v13 + 52) =
            -(float)(v17 * (float)(*((float*)&v20 + 2) - v15));
      }
      v5 += 6;
      v11 += 64;
    } while (v5 != v6);
  }
}

void CondTalkIconList_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[3];
  *a1 = &game_hub_MapIconList_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[4];
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      v5 = *(_QWORD*)(v4 - 40);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v5);
      }
      v4 -= 64;
    } while (v4 != v1);
    v6 = a1[3];
    a1[4] = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v1);
    }
  }
  v8 = a1[2];
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, (__int64)a1);
}

#pragma GCC visibility pop
