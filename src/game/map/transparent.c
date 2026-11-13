#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD* GameData_212d168;
extern __int64* GameData_212cfc8[9];
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
long double Unit_6c7fa0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_d28710(_QWORD, long double);
void Transparent_fe8fa0();
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
float Unit_6c7fa0_alt1(__int64, __int64) __asm__("Unit_6c7fa0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_d28710_alt1() __asm__("GameRoutine_d28710");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void Transparent_fe8fa0()
{
  __int64 v0;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  float v13;
  float v14;
  __int128 v15;
  float v16;
  float32x2_t v17;
  __int128 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  char v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int128 v37;
  __int64 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int64 v42;
  unsigned int v43;
  unsigned int v44;
  __int128 v45;
  __int128 v46;
  __int128 v47;

  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = GameData_212c7d8[0];
  if (*GameData_212d168 == 1 && *(_QWORD*)GameData_212c7d8[0] != 0) {
    LODWORD(v47) = 15;
    v2 = game_UnitPool_GetFirst_alt1((int*)&v47),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v2 != 0) {
      v3 = *(_QWORD*)(v2 + 432);
      if (v3 == 0) {
        v3 = *(_QWORD*)(v2 + 440);
        if (v3 != 0) {
          v4 = *(unsigned __int8*)(v3 + 16);
          if (v4 <= 8) {
            v42 = 24LL * *(unsigned __int8*)(v3 + 16) + 556024;
            while (1) {
              if (v4 <= 2) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v42);
                if (v3 != 0) {
                  break;
                }
              }
              ++v4;
              v42 += 24;
              if (v4 == 9) {
                goto LABEL_9;
              }
            }
          }
          else {
          LABEL_9:
            v3 = 0;
          }
        }
      }
      v5 = 0;
      v6 = 0;
      v7 = 0;
      while (1) {
      LABEL_12:
        v8 = v3;
        v9 = *(_QWORD*)(v2 + 264);
        if (v9 == 0) {
          goto LABEL_38;
        }
        v11 = *(_QWORD*)(v9 + 392);
        v10 = *(_QWORD*)(v9 + 400);
        if (v10 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v11 == 0) {
          goto LABEL_20;
        }
        v12 = *(_DWORD*)(v2 + 592);
        v13 =
            (float)((float)v12 * 0x1.4000000000000p+1f) * 0x1.0000000000000p-1f;
        v14 = (float)(unsigned int)(v12 - 1) * 0x1.4000000000000p+1f;
        if (v12 <= 0) {
          v14 = 0x0.0p+0f;
        }
        *(_QWORD*)&v15 = COERCE_UNSIGNED_INT(
            v14 +
            (float)((float)((float)((float)(unsigned int)(*(char*)(v2 + 584) +
                                                          256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f));
        *(float*)&v43 =
            v14 +
            (float)((float)((float)((float)(unsigned int)(*(char*)(v2 + 584) +
                                                          256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f);
        *(float*)&v44 =
            v14 +
            (float)((float)((float)((float)(unsigned int)(*(char*)(v2 + 585) +
                                                          256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f);
        *((_QWORD*)&v15 + 1) = v44;
        v47 = v15;
        v16 = Unit_6c7fa0_alt1(v2, (__int64)&v47),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
        LANES64(v17).n64_u32[0] = 0;
        LANES64(v17).n64_f32[1] =
            *(float*)(*(_QWORD*)(v11 + 11792) + 32LL) *
            (float)(*(float*)(v11 + 32) *
                    (float)(*(float*)(v11 + 40) +
                            (float)((float)(0x1.0000000000000p+0f -
                                            *(float*)(v11 + 40)) *
                                    0x0.0p+0f)));
        *(float32x2_t*)&v18 = vadd_f32(
            COERCE_AS(float32x2_t, __PAIR64__(LODWORD(v16), v43)), v17);
        *((_QWORD*)&v18 + 1) = v44;
        if (v6 < v5) {
          break;
        }
        v19 = v6 - v7;
        v20 = (__int64)(v6 - v7) >> 5;
        v21 = v20 + 1;
        if ((unsigned __int64)(v20 + 1) >> 59 != 0) {
          GameRoutine_d28710_alt1(),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v45 = v18;
        if ((__int64)(v5 - v7) >> 4 > v21) {
          v21 = (__int64)(v5 - v7) >> 4;
        }
        if (v5 - v7 >= 0x7FFFFFFFFFFFFFE0LL) {
          v21 = 0x7FFFFFFFFFFFFFFLL;
        }
        if (v21 >> 59 != 0) {
          GameRoutine_60a210_alt1(),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v22 = 32 * v21;
        v23 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v21, 16, 0),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v24 = v23 + v19;
        v25 = v23 + v19 - 32 * v20;
        *(float*)(v24 + 16) = v13;
        *(_BYTE*)(v24 + 20) = 0;
        *(_OWORD*)v24 = v45;
        if (v7 != v6) {
          v26 = v7;
          v27 = v25;
          do {
            *(_QWORD*)(v27 + 8) = *(_QWORD*)(v26 + 8);
            *(_QWORD*)v27 = *(_QWORD*)v26;
            v28 = *(_DWORD*)(v26 + 16);
            v29 = *(_BYTE*)(v26 + 20);
            v26 += 32;
            *(_BYTE*)(v27 + 20) = v29;
            *(_DWORD*)(v27 + 16) = v28;
            v27 += 32;
          } while (v26 != v6);
        }
        v5 = v23 + v22;
        v6 = v24 + 32;
        if (v7 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v7),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v7 = v25;
        if (v10 != 0) {
          goto LABEL_36;
        }
      LABEL_38:
        if (v8 == 0) {
          v0 = GameData_212c7d8[0];
          goto LABEL_49;
        }
        v3 = *(_QWORD*)(v8 + 432);
        v2 = v8;
        if (v3 == 0) {
          v31 = *(_QWORD*)(v8 + 440);
          v2 = v8;
          if (v31 != 0) {
            v32 = *(unsigned __int8*)(v31 + 16);
            v3 = 0;
            v2 = v8;
            if (v32 <= 8) {
              v33 = 24LL * (unsigned int)v32 + 556024;
              while (1) {
                if (v32 <= 2) {
                  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v33);
                  if (v3 != 0) {
                    break;
                  }
                }
                ++v32;
                v33 += 24;
                if (v32 == 9) {
                  v3 = 0;
                  v2 = v8;
                  goto LABEL_12;
                }
              }
              v2 = v8;
            }
          }
        }
      }
      *(_OWORD*)v6 = v18;
      *(float*)(v6 + 16) = v13;
      *(_BYTE*)(v6 + 20) = 0;
      v6 += 32LL;
    LABEL_20:
      if (v10 == 0) {
        goto LABEL_38;
      }
    LABEL_36:
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v10),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      goto LABEL_38;
    }
    v5 = 0;
    v6 = 0;
    v7 = 0;
  LABEL_49:
    v34 = *(_QWORD**)v0;
    v35 = *(_QWORD*)(*(_QWORD*)v0 + 144LL);
    if (v35 != 0) {
      v34[19] = v35;
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v35),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v34[18] = v7;
    v34[19] = v6;
    v34[20] = v5;
    v46 = *(_OWORD*)(*(_QWORD*)GameData_212d038[0] + 48LL);
    (*(void (**)(__int64))(*(_QWORD*)(*GameData_212cfc8[0] + 16) + 40LL))(
        *GameData_212cfc8[0] + 16),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v38 = *(_QWORD*)v0;
    if (*(_BYTE*)(*(_QWORD*)v0 + 80LL) == 1) {
      *(_QWORD*)(v38 + 48) = v37;
      *(_QWORD*)(v38 + 64) = v46;
      v39 = *(_OWORD*)(v38 + 48);
      v40 = *(_OWORD*)(v38 + 64);
      *((_QWORD*)&v39 + 1) = DWORD2(v37);
      *((_QWORD*)&v40 + 1) = DWORD2(v46);
      *(_OWORD*)(v38 + 48) = v39;
      *(_OWORD*)(v38 + 64) = v40;
    }
    else {
      v41 = v46;
      DWORD3(v37) = 0;
      *(_BYTE*)(v38 + 80) = 1;
      DWORD3(v41) = 0;
      *(_OWORD*)(v38 + 48) = v37;
      *(_OWORD*)(v38 + 64) = v41;
    }
  }
}

#pragma GCC visibility pop
