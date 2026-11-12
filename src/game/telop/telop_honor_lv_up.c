#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(__int64);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_telop_TelopHonorLvUP_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
extern __int64* game_g_frame_clock_ptr[3];
__int64 TelopHonorLvUP_Unknown36(__int64 a1);
__int64 TelopHonorLvUP_Unknown39(__int64 result);
__int64 TelopHonorLvUP_Unknown43(__int64 a1);
__int64 TelopHonorLvUP_Unknown34(__int64 result);
__int64 TelopHonorLvUP_Destructor(_QWORD* a1);
__int64 TelopHonorLvUP_DeletingDestructor(_QWORD* a1);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a3920(long double);
__int64 GameRoutine_155f760(_QWORD, _QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64 TelopHonorLvUP_Unknown35(_QWORD* a1);
const char* TelopHonorLvUP_Unknown51(__int64 a1);
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
__int64
ControlCreator_13633c0_alt1(__int64 result) __asm__("ControlCreator_13633c0");
__int64 GameRoutine_14a1520_alt1(__int64*, char) __asm__("GameRoutine_14a1520");
__int64 GameRoutine_155f760_alt1(__int64, __int64,
                                 const char*) __asm__("GameRoutine_155f760");
__int64 game_14a3920(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");

__int64 TelopHonorLvUP_Unknown35(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  unsigned int v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 i;
  __int64 v25;
  unsigned __int32 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BOOL4 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int32x4_t* v35;
  __int128 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  struct {
    __int64 v42;
    __int64 v43;
  } v42_;
  struct {
    _QWORD v44[3];
    int v45;
    char gap44_[4];
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v44_;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a1[22];
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v3),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v4 != 0) {
      v5 = v4;
      v6 = a1[21];
      if (v6 != 0) {
        ControlCreator_13633c0_alt1(v6),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v5),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  v44_.v44[0] = 0;
  v44_.v44[1] = 0;
  v7 = *((_QWORD*)GameData_212c540 + 1);
  v9 = *(_QWORD*)GameData_212c548;
  v8 = *((_QWORD*)GameData_212c548 + 1);
  v44_.v46 = *(_QWORD*)GameData_212c540;
  v44_.v47 = v7;
  v44_.v50 = v44_.v46;
  v44_.v51 = v7;
  v44_.v48 = v9;
  v44_.v49 = v8;
  v44_.v45 = 9;
  v44_.v44[2] = "UI_Deco_ShineB";
  v10 = Manager_bc6460_alt1(*(_QWORD**)eft_g_effectSystem_ptr[0],
                            (__int64)v44_.v44, 0),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = (__int64)GameHr_14a10d0(&v42_.v42, (__int64)v10, v11,
                                   (__int64)&GameData_1a9f09e),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = v42_.v42;
  v14 = v42_.v43;
  if (v42_.v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42_.v43 + 8), 1u,
                              memory_order_relaxed);
  }
  v15 = a1[109];
  a1[108] = v13;
  a1[109] = v14;
  if (v15 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt1(v15),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v14 = a1[109];
  }
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt1(v14),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v16 = v42_.v43;
  if (v42_.v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42_.v43 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak_alt1(v16),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v17 = (_DWORD*)a1[108];
  if (*(_QWORD*)v17 != 0 && *(_DWORD*)(*(_QWORD*)v17 + 16LL) == v17[2]) {
    v18 = a1[22];
    if (v18 != 0) {
      v19 = std___1___shared_weak_count_lock_alt1(v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v19 != 0) {
        v20 = a1[21];
        if (v20 != 0) {
          v1 = *(_DWORD*)(v20 + 2372);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v20 != 0) {
            goto LABEL_28;
          }
        }
        else {
          v22 = v19;
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v22),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v20 != 0) {
          LABEL_28:
            v21 = *(_QWORD*)v17;
            if (*(_QWORD*)v17 != 0) {
            LABEL_32:
              if (*(_DWORD*)(v21 + 16) == v17[2]) {
                v23 = *(unsigned int*)(v21 + 36);
                if ((_DWORD)v23 != 0) {
                  for (i = 0; i < v23; ++i) {
                    v25 = *(_QWORD*)(v21 + 40 + 8 * i);
                    if (v25 != 0) {
                      *(_DWORD*)(v25 + 408) = v1 + 1;
                      v23 = *(unsigned int*)(v21 + 36);
                    }
                  }
                }
              }
            }
          LABEL_38:
            v26 = 0;
            if (a1[23] == 0) {
              goto LABEL_56;
            }
            v27 = a1[22];
            if (v27 == 0) {
              goto LABEL_56;
            }
            v28 = std___1___shared_weak_count_lock_alt1(v27),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v28 == 0) {
              goto LABEL_49;
            }
            v29 = a1[21];
            if (v29 != 0) {
              LODWORD(v17) = *(unsigned __int8*)(v29 + 24);
              v30 = v29 + 152;
              if ((_DWORD)v17 == 0) {
                v30 = 0;
              }
              v31 = v30 != a1[23];
            }
            else {
              v31 = true;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v32 = v28;
              (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak_alt1(v32),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            if (!v31) {
              v26 = 0;
              if (((unsigned __int8)v17 & 1) == 0) {
                goto LABEL_56;
              }
            }
            else {
            LABEL_49:
              v33 = a1[22];
              v26 = 0;
              if (v33 == 0) {
                *(_QWORD*)&v36 = 0;
              LABEL_57:
                v37 = a1[108];
                v38 = *(_QWORD*)v37;
                if (*(_QWORD*)v37 != 0 &&
                    *(_DWORD*)(v38 + 16) == *(_DWORD*)(v37 + 8)) {
                  v39 = *(_DWORD*)(v38 + 36);
                  if (v39 != 0) {
                    v40 = 0;
                    *((_QWORD*)&v36 + 1) = v26;
                    do {
                      if ((int)v39 > (int)v40) {
                        v41 = *(_QWORD*)(v38 + 40 + 8LL * (int)v40);
                        if (v41 != 0) {
                          *(_OWORD*)(v41 + 16) = v36;
                          *(_BYTE*)(v41 + 128) = 1;
                          v39 = *(_DWORD*)(v38 + 36);
                        }
                      }
                      ++v40;
                    } while (v40 < v39);
                  }
                }
                return game_14a3920(v37);
              }
              if (*(_QWORD*)(v33 + 8) == -1) {
              LABEL_56:
                *(_QWORD*)&v36 = 0;
                goto LABEL_57;
              }
            }
            v34 = a1[23];
            if (v34 != 0) {
              v35 = (int32x4_t*)GameRoutine_155f760_alt1(
                  (__int64)(a1 + 21), v34, "Lct_Eff_TlpLvUp"),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *(_QWORD*)&v36 = 0;
              v26 = 0;
              if (v35 != nullptr) {
                v26 = LANES128(v35[9]).n128_u32[3];
                LODWORD(v36) =
                    LANES128_OF(vdupq_laneq_s32(v35[7], 3)).n128_u32[0];
                DWORD1(v36) = HIDWORD(LANES128(v35[8]).n128_u64[1]);
              }
              goto LABEL_57;
            }
            goto LABEL_56;
          }
        }
      }
    }
    v1 = 0;
    v21 = *(_QWORD*)v17;
    if (*(_QWORD*)v17 == 0) {
      goto LABEL_38;
    }
    goto LABEL_32;
  }
  return result;
}

__int64 TelopHonorLvUP_Unknown36(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;
  __int64 v5;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
  result = GameRoutine_1562680(a1 + 168, v2, 1.0);
  v4 = *(unsigned __int8*)(a1 + 824);
  *(_DWORD*)(a1 + 420) = 0;
  if (v4 == 1) {
    ui_LayoutAccessor_SetPaneVisible(a1 + 168, "L_Help", 1);
    v5 = GameRoutine_155fbe0(a1 + 168, "L_Help");
    return GameRoutine_1562680(v5, "HelpIn", 1.0);
  }
  return result;
}

__int64 TelopHonorLvUP_Unknown39(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 824) == 1) {
    v1 = GameRoutine_155fbe0(result + 168, "L_Help");
    return GameRoutine_1562680(v1, "HelpOut", 1.0);
  }
  return result;
}

__int64 TelopHonorLvUP_Unknown43(__int64 a1)
{
  float v1;
  float v2;
  char v4;
  float v5;
  float v6;
  __int64 v7;

  v1 = *(float*)(a1 + 328);
  v2 = *(float*)(a1 + 420);
  if (v2 < v1) {
    v4 = 0;
    v5 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v5 <= 0.0) {
      v5 = 1.0;
    }
    if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
      v5 = v5 * 8.0;
    }
    v6 = v2 + v5;
    if (v1 >= v6) {
      v1 = v6;
    }
    *(float*)(a1 + 420) = v1;
  }
  else if ((snd_fnd_WeakHandle_isValid(a1 + 424) & 1) != 0) {
    v4 = 0;
  }
  else {
    v7 = GameRoutine_155fbe0(a1 + 168, "L_Help");
    v4 = GameRoutine_1563280(v7, "HelpIn", 0) ^ 1;
  }
  return v4 & 1;
}

__int64 TelopHonorLvUP_Unknown34(__int64 result)
{
  _DWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _DWORD* v7;
    __int64 v8;
  } v7_;

  v3 = *(_DWORD**)(result + 864);
  if (*(_QWORD*)v3 != 0 && *(_DWORD*)(*(_QWORD*)v3 + 16LL) == v3[2]) {
    v4 = *(_QWORD*)(result + 872);
    v5 = result;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v7_.v8 = v4;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v7_.v8 = 0;
    }
    v7_.v7 = v3;
    result = GameRoutine_14a1520_alt1((__int64*)&v7_.v7, 1);
    v6 = v7_.v8;
    if (v7_.v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7_.v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak_alt1(v6);
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = std___1___shared_weak_count___release_weak_alt1(v4);
    }
    **(_QWORD**)(v5 + 864) = 0;
  }
  return result;
}

const char* TelopHonorLvUP_Unknown51(__int64 a1)
{
  if (*(_BYTE*)(a1 + 824) != 0) {
    return "L_Help/L_NextCursor";
  }
  else {
    return "L_NextCursor";
  }
}

__int64 TelopHonorLvUP_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1[109];
  *a1 = game_telop_TelopHonorLvUP_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[105];
  if (v3 != 0) {
    v4 = a1[106];
    v5 = fw_memory_g_heap_manager_ptr;
    if (v3 == v4) {
      goto LABEL_15;
    }
    v6 = a1[106];
    do {
      v7 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v7 & 1) != 0 && *(_QWORD*)(v4 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
      }
      v4 = v6;
    } while (v6 != v3);
    v9 = a1[105];
    a1[106] = v3;
    if (v9 != 0) {
    LABEL_15:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v10);
    }
  }
  return GameRoutine_1386f80((__int64)a1);
}

__int64 TelopHonorLvUP_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[109];
  *a1 = game_telop_TelopHonorLvUP_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[105];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = a1[106];
    if (v3 == v5) {
      goto LABEL_15;
    }
    v6 = a1[106];
    do {
      v7 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v7 & 1) != 0 && *(_QWORD*)(v5 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
      }
      v5 = v6;
    } while (v6 != v3);
    v9 = a1[105];
    a1[106] = v3;
    if (v9 != 0) {
    LABEL_15:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
    }
  }
  GameRoutine_1386f80((__int64)a1);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11);
}

#pragma GCC visibility pop
