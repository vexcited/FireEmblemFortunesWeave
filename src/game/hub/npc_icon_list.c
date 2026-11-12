#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1038880(_QWORD, _QWORD);
__int64 GameRoutine_1560520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18438a0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*game_hub_MapIconList_vtable)();
extern __int64 (*game_hub_NpcIconList_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 NpcIconList_Unknown2_alt1(__int64 a1,
                                  _QWORD* a2) __asm__("NpcIconList_Unknown2");
__int64 NpcIconList_Unknown3(__int64 result, __int64 a2);
__int64 NpcIconList_Destructor(_QWORD* a1);
__n128 game_hub_1035650(__int64, __int64, __int64, float*, __n128 result);
extern __int64 GameData_212dc38[7];
float fmodf(float, float);
void NpcIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                          __int64 a5);
_QWORD* GameRoutine_1038880_alt1(__int64*,
                                 _QWORD*) __asm__("GameRoutine_1038880");
_QWORD* LayoutAccessor_1560520(__int64*, __int64, __int64, _BYTE*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 NpcIconList_Unknown2(__int64 a1, __int64 a2);

__int64 NpcIconList_Unknown2(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 i;
  int v11;
  int j;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64** v21;
  unsigned __int64 v22;
  __int64* v23;
  _QWORD* v24;
  struct {
    __int64* v25;
    __int64* v26;
    __int64* v27;
    __int64 v28;
    __int64 v29;
    char gap56_[8];
    __int64* v30;
    __int64* v31;
  } v25_;
  char v32[264];

  result = *(_QWORD*)(a2 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v5 = *(__int64**)a2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v6 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak_alt1(v6);
      }
      if (v5 != nullptr) {
        v8 = *(__int64**)a2;
        v7 = *(_QWORD*)(a2 + 8);
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
        }
        result = *(_QWORD*)(a1 + 16);
        *(_QWORD*)(a1 + 8) = v8;
        *(_QWORD*)(a1 + 16) = v7;
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(result);
        }
        v9 = *(_QWORD*)(a1 + 24);
        for (i = *(_QWORD*)(a1 + 32); i != v9; i -= 64) {
          result = *(_QWORD*)(i - 40);
          if (result != 0) {
            result = std___1___shared_weak_count___release_weak_alt1(result);
          }
        }
        v11 = *(_DWORD*)(a1 + 48);
        *(_QWORD*)(a1 + 32) = v9;
        if (v11 >= 1) {
          for (j = 0; j < (signed __int32)*(_DWORD*)(a1 + 48); ++j) {
            sprintf_alt1((__int64)v32, "L_NPC%d", j);
            if (j != 0) {
              v13 = *(_QWORD*)(a2 + 8);
              if (v13 != 0 &&
                  (v14 = std___1___shared_weak_count_lock_alt1(v13)) != 0) {
                v15 = v14;
                LayoutAccessor_1560520(*(__int64**)a2, (__int64)"L_NPC0",
                                       (__int64)"N_NPC", v32);
                if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
                  std___1___shared_weak_count___release_weak_alt1(v15);
                }
              }
              else {
                LayoutAccessor_1560520(nullptr, (__int64)"L_NPC0",
                                       (__int64)"N_NPC", v32);
              }
            }
            v16 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a2 + 8));
            LayoutAccessor_1560070((void*)(&v25_.v25), *(__int64**)a2, v32);
            result = (__int64)v25_.v26;
            if (v25_.v26 != nullptr) {
              v17 = std___1___shared_weak_count_lock_alt1((__int64)v25_.v26);
              result = (__int64)v25_.v26;
              if (v17 != 0) {
                v18 = v25_.v25;
              }
              else {
                v18 = nullptr;
              }
              if (v25_.v26 != nullptr) {
                result = std___1___shared_weak_count___release_weak_alt1(
                    (__int64)v25_.v26);
              }
            }
            else {
              v17 = 0;
              v18 = nullptr;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (v18 == nullptr) {
                goto LABEL_45;
              }
            }
            else {
              (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
              result = std___1___shared_weak_count___release_weak_alt1(v16);
              if (v18 == nullptr) {
                goto LABEL_45;
              }
            }
            v19 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a2 + 8));
            v20 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)a2, (__int64)v32);
            result = ui_LayoutAccessor_FindPane_alt1(v18, (__int64)"NPC");
            if (result != 0) {
              result = __dynamic_cast(result, GameData_212d670[0],
                                      GameData_212d678[0], 0);
            }
            if (v17 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                        memory_order_relaxed);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                        memory_order_relaxed);
            }
            v21 = *(__int64***)(a1 + 32);
            v22 = *(_QWORD*)(a1 + 40);
            v25_.v25 = (__int64*)v20;
            v25_.v26 = (__int64*)result;
            v25_.v27 = v18;
            v25_.v28 = v17;
            v25_.v29 = 0;
            v25_.v30 = nullptr;
            v25_.v31 = nullptr;
            if ((unsigned __int64)v21 >= v22) {
              v24 = GameRoutine_1038880_alt1((__int64*)(a1 + 24), &v25_.v25);
              result = v25_.v28;
              *(_QWORD*)(a1 + 32) = v24;
              if (result != 0) {
                result =
                    std___1___shared_weak_count___release_weak_alt1(result);
              }
            }
            else {
              v23 = v25_.v25;
              v21[3] = (__int64*)v17;
              v21[4] = nullptr;
              *v21 = v23;
              v21[1] = v25_.v26;
              v21[2] = v18;
              v25_.v27 = nullptr;
              v25_.v28 = 0;
              v21[6] = v25_.v30;
              v21[7] = v25_.v31;
              *(_QWORD*)(a1 + 32) = v21 + 8;
            }
            if (v17 != 0) {
              result = std___1___shared_weak_count___release_weak_alt1(v17);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
            LABEL_45:
              if (v17 != 0) {
                goto LABEL_46;
              }
              continue;
            }
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            result = std___1___shared_weak_count___release_weak_alt1(v19);
            if (v17 != 0) {
            LABEL_46:
              if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
                result = std___1___shared_weak_count___release_weak_alt1(v17);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 NpcIconList_Unknown3(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;

  v2 = *(_QWORD*)(a2 + 112);
  v3 = *(_QWORD*)(a2 + 120);
  v4 = result;
  if (v2 == v3) {
    v6 = 0;
  }
  else {
    v5 = 0;
    v6 = 0;
    do {
      v7 = (__int64*)(*(_QWORD*)(v4 + 24) + v5);
      v7[4] = *(_QWORD*)(v2 + 96);
      v9 = *v7;
      v8 = v7[1];
      v10 = *(_QWORD*)(v4 + 24) + v5;
      *(_QWORD*)(v10 + 48) = 0;
      *(_OWORD*)(v10 + 48) = *(unsigned __int64*)(v10 + 48);
      result = GameRoutine_18438a0(v8, *(unsigned int*)(v2 + 88));
      ++v6;
      v2 += 112;
      v5 += 64;
      *(_BYTE*)(v9 + 88) |= 1u;
    } while (v2 != v3);
  }
  v11 = *(_QWORD*)(v4 + 24);
  if (v6 < (*(_QWORD*)(v4 + 32) - v11) >> 6) {
    v12 = v6 << 6;
    do {
      v13 = *(_QWORD*)(v11 + v12);
      ++v6;
      v12 += 64LL;
      *(_BYTE*)(v13 + 88) &= ~1u;
      v11 = *(_QWORD*)(v4 + 24);
    } while (v6 < (*(_QWORD*)(v4 + 32) - v11) >> 6);
  }
  return result;
}

void NpcIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                          __int64 a5)
{

#pragma clang fp contract(off)
  _QWORD* v5;
  _QWORD* v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __n128* v14;
  __n128 v15;
  __int64 v16;
  int8x16_t v17;
  __int128 v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int128 v25;
  char v26;
  __int128 v27;

  v5 = *(_QWORD**)(a2 + 112);
  v6 = *(_QWORD**)(a2 + 120);
  if (v5 != v6) {
    v11 = 0;
    v12 = GameData_212dc38[0];
    do {
      v13 = v5[1];
      v14 = (__n128*)(*(_QWORD*)(a1 + 24) + v11);
      *(_QWORD*)&v27 = *v5;
      *((_QWORD*)&v27 + 1) = v13;
      v15 = v14[3];
      v16 = LANES128(*(v14)).n128_u64[0];
      v17 = vmulq_f32(v15, v15);
      LANES128(v17).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)&v18 = LANES128(v14[3]).n128_u64[0];
        *((_QWORD*)&v18 + 1) = LANES128(v15).n128_u32[2];
        v27 = v18;
      }
      v19 = *a3;
      if (*a3 == 1) {
        game_hub_1035650(a1, v16, (__int64)&v27, a4, v15);
        v19 = *a3;
      }
      if (v19 == 0 && (*(_BYTE*)(v16 + 88) & 1) != 0) {
        v21 = *(float*)(a5 + 8);
        v20 = *(float*)(a5 + 12);
        v22 = *(float*)a5;
        if (*(_BYTE*)(a5 + 16) == 1) {
          v23 = *(float*)(*(_QWORD*)v12 + 100LL);
          v24 = fmodf(v23, 0x1.6800000000000p+8f);
          if (v23 < 0x0.0p+0f) {
            v24 = v24 + 0x1.6800000000000p+8f;
          }
        }
        else {
          v24 = *(float*)(a5 + 4);
        }
        v25 = v27;
        v26 = *(_BYTE*)(v16 + 88);
        *(_DWORD*)(v16 + 56) = 0;
        *(_QWORD*)(v16 + 60) = 0;
        *(float*)(v16 + 68) = v24;
        *(_BYTE*)(v16 + 88) = v26 | 0x10;
        *(float*)(v16 + 48) = v22 * (float)(*(float*)&v25 - v21);
        *(float*)(v16 + 52) =
            -(float)(v22 * (float)(*((float*)&v25 + 2) - v20));
      }
      v5 += 14;
      v11 += 64;
    } while (v5 != v6);
  }
}

__int64 NpcIconList_Destructor(_QWORD* a1)
{
  __int64 v1;
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
  __int64 v15;
  __int64 result;

  v1 = a1[7];
  *a1 = game_hub_NpcIconList_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[8];
    if (v1 == v4) {
      goto LABEL_19;
    }
    do {
      if (*(_BYTE*)(v4 - 16) == 1) {
        if ((*(_BYTE*)(v4 - 64) & 1) != 0) {
          v5 = *(_QWORD*)(v4 - 48);
          if (v5 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v6 = 128;
            }
            else {
              v6 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, v5);
          }
        }
        if ((*(_BYTE*)(v4 - 88) & 1) != 0) {
          v7 = *(_QWORD*)(v4 - 72);
          if (v7 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v7);
          }
        }
      }
      v4 -= 128;
    } while (v4 != v1);
    v9 = a1[7];
    a1[8] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_19:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v1);
    }
  }
  v11 = a1[3];
  *a1 = &game_hub_MapIconList_vtable;
  if (v11 != 0) {
    v12 = a1[4];
    if (v11 == v12) {
      goto LABEL_29;
    }
    do {
      v13 = *(_QWORD*)(v12 - 40);
      if (v13 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v13);
      }
      v12 -= 64;
    } while (v12 != v11);
    v14 = a1[3];
    a1[4] = v11;
    v11 = v14;
    if (v14 != 0) {
    LABEL_29:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v15, v11);
    }
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

#pragma GCC visibility pop
