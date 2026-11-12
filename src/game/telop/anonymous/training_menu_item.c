#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_155ca60(_QWORD);
__int64 GameRoutine_1745960(__int64*, __int64);
__int64 GameRoutine_1750020(_QWORD*, __int64*, __int64, char, signed int,
                            unsigned int);
__int64 GameRoutine_1750310(__int64, int);
__int64 GameRoutine_6704c0(_QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_MasteryExpChangeSmall_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_MasteryExpChange_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_telop_anonymous_TrainingMenuItem_vtable[])();
extern __int64 GameData_2131cf0[28];
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_6706a0(_QWORD);
__int64 TrainingMenuItem_Destructor(__int64 a1);
__int64 TrainingMenuItem_Unknown17_alt1(_QWORD* a1) __asm__(
    "TrainingMenuItem_Unknown17");
__int64 TrainingMenuItem_Unknown73_175adc0(__int64 a1);
__int64 TrainingMenuItem_Unknown75(__int64 result);
__attribute__((swiftcall)) void GameRoutine_15883c0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_18b3670(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 game_telop_anonymous_TrainingMenuItem_OnUpdateContent_closure_Invoke(
    __int64 result, __int64* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1745960(__int64*, __int64);
__int64 GameRoutine_1750020_alt1(__int64, __int64*, __int64, char, signed int,
                                 unsigned int) __asm__("GameRoutine_1750020");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void __attribute__((noreturn))
GameRoutine_6706a0_alt1() __asm__("GameRoutine_6706a0");
void collision_6704c0(__int64*, unsigned __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TrainingMenuItem_Unknown17(_QWORD* a1);

__int64 TrainingMenuItem_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  bool v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;

  *(_QWORD*)a1 = game_telop_anonymous_TrainingMenuItem_vtable;
  GameRoutine_155ca60(a1 + 360);
  GameRoutine_155ca60(a1 + 184);
  v2 = *(_QWORD*)(a1 + 160);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v2);
  }
  v5 = *(_QWORD**)(a1 + 136);
  if (v5 != nullptr) {
    v6 = *(_QWORD**)(a1 + 144);
    if (v5 == v6) {
      goto LABEL_11;
    }
    v7 = v6 - 20;
    v8 = v6 - 20;
    do {
      v9 = *v8;
      v8 -= 20;
      (*(void (**)(_QWORD*))(v9 + 24))(v7);
      v10 = v7 == v5;
      v7 = v8;
    } while (!v10);
    v11 = *(_QWORD**)(a1 + 136);
    *(_QWORD*)(a1 + 144) = v5;
    v5 = v11;
    if (v11 != nullptr) {
    LABEL_11:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v5);
    }
  }
  v13 = *(_QWORD*)(a1 + 112);
  if (v13 != 0) {
    v14 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 120) = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(v14 + v15, v13);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 32);
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v18 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18, v17);
    }
  }
  return result;
}

void TrainingMenuItem_Unknown17(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  char* v10;
  __int64 v11;
  signed int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;
  __int64 (**v40)();
  __int64 v41;
  __int128 v42;
  __int64 v43;
  __int64 v44;
  __int16 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59[3];

  v2 = a1[7];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    if (v3 != 0) {
      v4 = (__int64*)a1[6];
      v37 = v3;
      if (v4 != nullptr) {
        v5 = a1[14];
        if (a1[15] != v5) {
          v6 = 0;
          v7 = GameData_2131cf0[0] + 16;
          while (1) {
            v8 = *(unsigned __int8*)(v5 + v6);
            v9 = *(_DWORD*)(a1[12] + 4 * v8 + 20);
            v41 = 0;
            *(_QWORD*)&v42 = 0;
            *(_QWORD*)((char*)&v42 + 7) = 0;
            v45 = 0;
            LOWORD(v46) = 0;
            LOWORD(v49) = 0;
            LOWORD(v52) = 0;
            v55 = 0;
            v56 = 0;
            v40 = (__int64 (**)(void))v7;
            v43 = 0;
            v44 = 1065353216;
            v10 = game_util_Format_alt1("L_Mastery%02d", v6);
            LayoutAccessor_1560070((void*)(&v38_.v38), v4, v10);
            v11 = *(_QWORD*)a1[12];
            v12 = *(unsigned __int16*)(a1[13] + 2 * v8 + 514);
            v13 = v38_.v39;
            v59[0] = v38_.v38;
            v59[1] = v38_.v39;
            if (v38_.v39 != 0) {
              break;
            }
            GameRoutine_1750020_alt1((__int64)&v40, v59, v11, v8, v12, v9);
            v14 = v38_.v39;
            if (v38_.v39 != 0) {
              goto LABEL_9;
            }
          LABEL_10:
            v15 = a1[18];
            if (v15 < a1[19]) {
              *(_QWORD*)v15 = game_gameui_GaugeUtil_ExpChange_vtable;
              v16 = v42;
              *(_QWORD*)(v15 + 8) = v41;
              *(_QWORD*)(v15 + 16) = v16;
              v17 = *((_QWORD*)&v42 + 1);
              v18 = v43;
              v19 = v44;
              *(_WORD*)(v15 + 48) = v45;
              *(_QWORD*)(v15 + 32) = v18;
              *(_QWORD*)(v15 + 40) = v19;
              *(_QWORD*)(v15 + 24) = v17;
              if ((v46 & 1) != 0) {
                fw_text_String_CopyTerminated_alt1((__int64*)(v15 + 56), v48,
                                                   v47);
                if ((v49 & 1) == 0) {
                  goto LABEL_19;
                }
              LABEL_13:
                fw_text_String_CopyTerminated_alt1((__int64*)(v15 + 80), v51,
                                                   v50);
                if ((v52 & 1) != 0) {
                  goto LABEL_14;
                }
              LABEL_20:
                v25 = v52;
                v26 = v54;
                *(_QWORD*)(v15 + 112) = v53;
                *(_QWORD*)(v15 + 120) = v26;
                *(_QWORD*)(v15 + 104) = v25;
              }
              else {
                v20 = v46;
                v21 = v48;
                *(_QWORD*)(v15 + 64) = v47;
                *(_QWORD*)(v15 + 72) = v21;
                *(_QWORD*)(v15 + 56) = v20;
                if ((v49 & 1) != 0) {
                  goto LABEL_13;
                }
              LABEL_19:
                v23 = v49;
                v24 = v51;
                *(_QWORD*)(v15 + 88) = v50;
                *(_QWORD*)(v15 + 96) = v24;
                *(_QWORD*)(v15 + 80) = v23;
                if ((v52 & 1) == 0) {
                  goto LABEL_20;
                }
              LABEL_14:
                fw_text_String_CopyTerminated_alt1((__int64*)(v15 + 104), v54,
                                                   v53);
              }
              *(_QWORD*)v15 = game_gameui_GaugeUtil_MasteryExpChange_vtable;
              *(_QWORD*)(v15 + 128) = v55;
              v27 = v56;
              *(_QWORD*)(v15 + 136) = v56;
              if (v27 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16),
                                          1u, memory_order_relaxed);
              }
              v28 = v58;
              v22 = v15 + 160;
              *(_QWORD*)(v15 + 144) = v57;
              *(_QWORD*)(v15 + 152) = v28;
              *(_QWORD*)v15 =
                  game_gameui_GaugeUtil_MasteryExpChangeSmall_vtable;
              goto LABEL_24;
            }
            v22 = GameHr_1745960(a1 + 17, (__int64)&v40);
          LABEL_24:
            v29 = a1[21];
            v30 = a1[22];
            a1[18] = v22;
            if (v29 == v30 << 6) {
              if ((__int64)(v29 + 1) < 0) {
                GameRoutine_6706a0_alt1();
              }
              if (v29 > 0x3FFFFFFFFFFFFFFELL) {
                v33 = 0x7FFFFFFFFFFFFFFFLL;
              }
              else {
                v31 = v30 << 7;
                v32 = (v29 & 0x3FFFFFFFFFFFFFC0LL) + 64;
                if (v31 <= v32) {
                  v33 = v32;
                }
                else {
                  v33 = v31;
                }
              }
              collision_6704c0(a1 + 20, v33);
              v29 = a1[21];
            }
            a1[21] = v29 + 1;
            *(_QWORD*)(a1[20] + ((v29 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) &=
                ~(1LL << v29);
            v40 = game_gameui_GaugeUtil_MasteryExpChange_vtable;
            if (v56 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v56);
            }
            v40 = game_gameui_GaugeUtil_ExpChange_vtable;
            if ((v52 & 1) != 0 && v54 != 0) {
              v34 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v34 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v54);
            }
            if ((v49 & 1) != 0 && v51 != 0) {
              v35 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v35 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v51);
            }
            if ((v46 & 1) != 0 && v48 != 0) {
              v36 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v36 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v48);
            }
            v5 = a1[14];
            if (a1[15] - v5 <= (unsigned __int64)++v6) {
              goto LABEL_49;
            }
          }
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v38_.v39 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1750020_alt1((__int64)&v40, v59, v11, v8, v12, v9);
          std___1___shared_weak_count___release_weak_alt1(v13);
          v14 = v38_.v39;
          if (v38_.v39 == 0) {
            goto LABEL_10;
          }
        LABEL_9:
          std___1___shared_weak_count___release_weak_alt1(v14);
          goto LABEL_10;
        }
      }
    LABEL_49:
      if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak_alt1(v37);
      }
    }
  }
}

__int64 TrainingMenuItem_Unknown73_175adc0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  unsigned __int64 v4;
  int v5;

  v1 = *(_QWORD*)(a1 + 136);
  if (*(_QWORD*)(a1 + 144) == v1) {
    return 1;
  }
  v3 = 0;
  v4 = 0;
  do {
    v5 = (**(__int64 (***)(__int64))(v1 + v3))(v1 + v3);
    if ((v5 & 1) != 0) {
      break;
    }
    v1 = *(_QWORD*)(a1 + 136);
    ++v4;
    v3 += 160;
  } while (v4 < 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD*)(a1 + 144) - v1) >> 5));
  return (v5 ^ 1) & 1;
}

__int64 TrainingMenuItem_Unknown75(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;

  v1 = *(_QWORD*)(result + 136);
  if (*(_QWORD*)(result + 144) != v1) {
    v2 = result;
    v3 = 0;
    v4 = 0;
    do {
      result = GameRoutine_1750310(v1 + v3, 2);
      v1 = *(_QWORD*)(v2 + 136);
      ++v4;
      v3 += 160;
    } while (v4 < 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD*)(v2 + 144) - v1) >> 5));
  }
  return result;
}

__int64 game_telop_anonymous_TrainingMenuItem_OnUpdateContent_closure_Invoke(
    __int64 result, __int64* a2)
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
  _QWORD v14[2];
  __int64 v15;
  __int64 v16;

  v2 = *a2;
  v3 = result;
  v4 = *(_QWORD*)(*a2 + 48);
  if (v4 != 0) {
    LODWORD(v4) = *(unsigned __int16*)(v4 + 16);
  }
  if (((**(_DWORD**)(result + 8) ^ (unsigned int)v4) & 0xFFF) == 0) {
    v5 = *(_QWORD*)(result + 16);
    v6 = *(_QWORD*)(v5 + 112);
    if (*(_QWORD*)(v5 + 120) != v6) {
      v7 = 0;
      while (1) {
        if (*(unsigned __int8*)(v6 + v7) != *(unsigned __int8*)(v2 + 33)) {
          goto LABEL_7;
        }
        v8 = **(_QWORD**)(v3 + 24);
        v9 = game_util_Format("N_Skill%02d", v7);
        v10 = ui_LayoutAccessor_FindPane(v8, v9);
        if (v10 != 0) {
          *(_BYTE*)(v10 + 88) |= 1u;
        }
        v11 = **(_QWORD**)(v3 + 24);
        v14[0] = game_util_Format("L_Skill%02d", v7);
        v14[1] = strlen(v14[0]);
        GameRoutine_15883c0((void*)&v15, v11, v14);
        result = v16;
        if (v16 != 0) {
          v12 = std___1___shared_weak_count_lock(v16);
          v13 = v15;
          result = v16;
          if (v16 != 0) {
            result = std___1___shared_weak_count___release_weak();
          }
          if (v12 != 0 && v13 != 0) {
            break;
          }
          if (v12 != 0) {
            goto LABEL_18;
          }
        }
      LABEL_7:
        v6 = *(_QWORD*)(v5 + 112);
        if (*(_QWORD*)(v5 + 120) - v6 <= (unsigned __int64)++v7) {
          return result;
        }
      }
      result = GameRoutine_18b3670(v13, *(_QWORD*)(v3 + 8),
                                   **(_QWORD**)(v5 + 96), 1);
    LABEL_18:
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        result = std___1___shared_weak_count___release_weak();
      }
      goto LABEL_7;
    }
  }
  return result;
}

#pragma GCC visibility pop
