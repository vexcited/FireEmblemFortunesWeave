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
  __int64 v16;
  long double v17;
  float32x2_t v18;
  long double v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  char v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int128 v38;
  __int64 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  long double v46;
  __int128 v47;
  __int128 v48;

  v0 = GameData_212c7d8[0];
  if (*GameData_212d168 == 1 && *(_QWORD*)GameData_212c7d8[0] != 0) {
    LODWORD(v48) = 15;
    v2 = game_UnitPool_GetFirst(&v48);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v2 + 432);
      if (v3 == 0) {
        v3 = *(_QWORD*)(v2 + 440);
        if (v3 != 0) {
          v4 = *(unsigned __int8*)(v3 + 16);
          if (v4 <= 8) {
            v43 = 24LL * *(unsigned __int8*)(v3 + 16) + 556024;
            while (1) {
              if (v4 <= 2) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v43);
                if (v3 != 0) {
                  break;
                }
              }
              ++v4;
              v43 += 24;
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
        v13 = (float)((float)v12 * 2.5) * 0.5;
        v14 = (float)(unsigned int)(v12 - 1) * 2.5;
        if (v12 <= 0) {
          v14 = 0.0;
        }
        *(_QWORD*)&v15 = COERCE_UNSIGNED_INT(
            v14 +
            (float)((float)((float)((float)(unsigned int)(*(char*)(v2 + 584) +
                                                          256) *
                                    5.0) +
                            2.5) +
                    -0x1.4000000000000p+10));
        *(float*)&v44 =
            v14 +
            (float)((float)((float)((float)(unsigned int)(*(char*)(v2 + 584) +
                                                          256) *
                                    5.0) +
                            2.5) +
                    -0x1.4000000000000p+10);
        *(float*)&v45 =
            v14 +
            (float)((float)((float)((float)(unsigned int)(*(char*)(v2 + 585) +
                                                          256) *
                                    5.0) +
                            2.5) +
                    -0x1.4000000000000p+10);
        *((_QWORD*)&v15 + 1) = v45;
        v48 = v15;
        v17 = Unit_6c7fa0(v2, &v48);
        LANES64(v18).n64_u32[0] = 0;
        LANES64(v18).n64_f32[1] =
            *(float*)(*(_QWORD*)(v11 + 11792) + 32LL) *
            (float)(*(float*)(v11 + 32) *
                    (float)(*(float*)(v11 + 40) +
                            (float)((float)(1.0 - *(float*)(v11 + 40)) * 0.0)));
        *(float32x2_t*)&v19 = vadd_f32(
            COERCE_AS(float32x2_t, __PAIR64__(LODWORD(v17), v44)), v18);
        *((_QWORD*)&v19 + 1) = v45;
        if (v6 < v5) {
          break;
        }
        v20 = v6 - v7;
        v21 = (__int64)(v6 - v7) >> 5;
        v22 = v21 + 1;
        if ((unsigned __int64)(v21 + 1) >> 59 != 0) {
          GameRoutine_d28710(v16, v19);
        }
        v46 = v19;
        if ((__int64)(v5 - v7) >> 4 > v22) {
          v22 = (__int64)(v5 - v7) >> 4;
        }
        if (v5 - v7 >= 0x7FFFFFFFFFFFFFE0LL) {
          v22 = 0x7FFFFFFFFFFFFFFLL;
        }
        if (v22 >> 59 != 0) {
          GameRoutine_60a210(v16);
        }
        v23 = 32 * v22;
        v24 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v22, 16, 0);
        v25 = v24 + v20;
        v26 = v24 + v20 - 32 * v21;
        *(float*)(v25 + 16) = v13;
        *(_BYTE*)(v25 + 20) = 0;
        *(long double*)v25 = v46;
        if (v7 != v6) {
          v27 = v7;
          v28 = v26;
          do {
            *(_QWORD*)(v28 + 8) = *(_QWORD*)(v27 + 8);
            *(_QWORD*)v28 = *(_QWORD*)v27;
            v29 = *(_DWORD*)(v27 + 16);
            v30 = *(_BYTE*)(v27 + 20);
            v27 += 32;
            *(_BYTE*)(v28 + 20) = v30;
            *(_DWORD*)(v28 + 16) = v29;
            v28 += 32;
          } while (v27 != v6);
        }
        v5 = v24 + v23;
        v6 = v25 + 32;
        if (v7 != 0) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v31);
        }
        v7 = v26;
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
          v32 = *(_QWORD*)(v8 + 440);
          v2 = v8;
          if (v32 != 0) {
            v33 = *(unsigned __int8*)(v32 + 16);
            v3 = 0;
            v2 = v8;
            if (v33 <= 8) {
              v34 = 24LL * (unsigned int)v33 + 556024;
              while (1) {
                if (v33 <= 2) {
                  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v34);
                  if (v3 != 0) {
                    break;
                  }
                }
                ++v33;
                v34 += 24;
                if (v33 == 9) {
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
      *(long double*)v6 = v19;
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
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
      goto LABEL_38;
    }
    v5 = 0;
    v6 = 0;
    v7 = 0;
  LABEL_49:
    v35 = *(_QWORD**)v0;
    v36 = *(_QWORD*)(*(_QWORD*)v0 + 144LL);
    if (v36 != 0) {
      v35[19] = v36;
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v37);
    }
    v35[18] = v7;
    v35[19] = v6;
    v35[20] = v5;
    v47 = *(_OWORD*)(*(_QWORD*)GameData_212d038[0] + 48LL);
    (*(void (**)(__int64))(*(_QWORD*)(*GameData_212cfc8[0] + 16) + 40LL))(
        *GameData_212cfc8[0] + 16);
    v39 = *(_QWORD*)v0;
    if (*(_BYTE*)(*(_QWORD*)v0 + 80LL) == 1) {
      *(_QWORD*)(v39 + 48) = v38;
      *(_QWORD*)(v39 + 64) = v47;
      v40 = *(_OWORD*)(v39 + 48);
      v41 = *(_OWORD*)(v39 + 64);
      *((_QWORD*)&v40 + 1) = DWORD2(v38);
      *((_QWORD*)&v41 + 1) = DWORD2(v47);
      *(_OWORD*)(v39 + 48) = v40;
      *(_OWORD*)(v39 + 64) = v41;
    }
    else {
      v42 = v47;
      HIDWORD(v38) = 0;
      *(_BYTE*)(v39 + 80) = 1;
      HIDWORD(v42) = 0;
      *(_OWORD*)(v39 + 48) = v38;
      *(_OWORD*)(v39 + 64) = v42;
    }
  }
}

#pragma GCC visibility pop
