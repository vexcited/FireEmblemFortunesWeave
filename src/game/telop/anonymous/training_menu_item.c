#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
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
__int64 TrainingMenuItem_Unknown17(_QWORD* a1);
__int64 TrainingMenuItem_Unknown73_175adc0(__int64 a1);
__int64 TrainingMenuItem_Unknown75(__int64 result);
_QWORD* GameRoutine_15883c0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_18b3670(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 game_telop_anonymous_TrainingMenuItem_OnUpdateContent_closure_Invoke(
    __int64 result, __int64* a2);

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

__int64 TrainingMenuItem_Unknown17(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  signed int v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
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
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 (**v37)();
  __int64 v38;
  __int128 v39;
  __int64 v40;
  __int64 v41;
  __int16 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56[3];

  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[6];
      v34 = result;
      if (v3 != 0) {
        v4 = a1[14];
        if (a1[15] != v4) {
          v5 = 0;
          v6 = GameData_2131cf0[0] + 16;
          while (1) {
            v7 = *(unsigned __int8*)(v4 + v5);
            v8 = *(_DWORD*)(a1[12] + 4 * v7 + 20);
            v38 = 0;
            *(_QWORD*)&v39 = 0;
            *(_QWORD*)((char*)&v39 + 7) = 0;
            v42 = 0;
            LOWORD(v43) = 0;
            LOWORD(v46) = 0;
            LOWORD(v49) = 0;
            v52 = 0;
            v53 = 0;
            v37 = (__int64 (**)())v6;
            v40 = 0;
            v41 = 1065353216;
            v9 = game_util_Format("L_Mastery%02d", v5);
            GameRoutine_1560070(&v35, v3, v9);
            v10 = *(_QWORD*)a1[12];
            v11 = *(unsigned __int16*)(a1[13] + 2 * v7 + 514);
            v56[0] = v35;
            v56[1] = v36;
            if (v36 != 0) {
              break;
            }
            GameRoutine_1750020(&v37, v56, v10, v7, v11, v8);
            if (v36 != 0) {
              goto LABEL_9;
            }
          LABEL_10:
            v12 = a1[18];
            if (v12 < a1[19]) {
              *(_QWORD*)v12 = game_gameui_GaugeUtil_ExpChange_vtable;
              v13 = v39;
              *(_QWORD*)(v12 + 8) = v38;
              *(_QWORD*)(v12 + 16) = v13;
              v14 = *((_QWORD*)&v39 + 1);
              v15 = v40;
              v16 = v41;
              *(_WORD*)(v12 + 48) = v42;
              *(_QWORD*)(v12 + 32) = v15;
              *(_QWORD*)(v12 + 40) = v16;
              *(_QWORD*)(v12 + 24) = v14;
              if ((v43 & 1) != 0) {
                fw_text_String_CopyTerminated(v12 + 56, v45, v44);
                if ((v46 & 1) == 0) {
                  goto LABEL_19;
                }
              LABEL_13:
                fw_text_String_CopyTerminated(v12 + 80, v48, v47);
                if ((v49 & 1) != 0) {
                  goto LABEL_14;
                }
              LABEL_20:
                v22 = v49;
                v23 = v51;
                *(_QWORD*)(v12 + 112) = v50;
                *(_QWORD*)(v12 + 120) = v23;
                *(_QWORD*)(v12 + 104) = v22;
              }
              else {
                v17 = v43;
                v18 = v45;
                *(_QWORD*)(v12 + 64) = v44;
                *(_QWORD*)(v12 + 72) = v18;
                *(_QWORD*)(v12 + 56) = v17;
                if ((v46 & 1) != 0) {
                  goto LABEL_13;
                }
              LABEL_19:
                v20 = v46;
                v21 = v48;
                *(_QWORD*)(v12 + 88) = v47;
                *(_QWORD*)(v12 + 96) = v21;
                *(_QWORD*)(v12 + 80) = v20;
                if ((v49 & 1) == 0) {
                  goto LABEL_20;
                }
              LABEL_14:
                fw_text_String_CopyTerminated(v12 + 104, v51, v50);
              }
              *(_QWORD*)v12 = game_gameui_GaugeUtil_MasteryExpChange_vtable;
              *(_QWORD*)(v12 + 128) = v52;
              v24 = v53;
              *(_QWORD*)(v12 + 136) = v53;
              if (v24 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16),
                                          1u, memory_order_relaxed);
              }
              v25 = v55;
              v19 = v12 + 160;
              *(_QWORD*)(v12 + 144) = v54;
              *(_QWORD*)(v12 + 152) = v25;
              *(_QWORD*)v12 =
                  game_gameui_GaugeUtil_MasteryExpChangeSmall_vtable;
              goto LABEL_24;
            }
            v19 = GameRoutine_1745960(a1 + 17, (__int64)&v37);
          LABEL_24:
            v26 = a1[21];
            v27 = a1[22];
            a1[18] = v19;
            if (v26 == v27 << 6) {
              if ((__int64)(v26 + 1) < 0) {
                GameRoutine_6706a0(v19);
              }
              if (v26 > 0x3FFFFFFFFFFFFFFELL) {
                v30 = 0x7FFFFFFFFFFFFFFFLL;
              }
              else {
                v28 = v27 << 7;
                v29 = (v26 & 0x3FFFFFFFFFFFFFC0LL) + 64;
                if (v28 <= v29) {
                  v30 = v29;
                }
                else {
                  v30 = v28;
                }
              }
              GameRoutine_6704c0(a1 + 20, v30);
              v26 = a1[21];
            }
            a1[21] = v26 + 1;
            *(_QWORD*)(a1[20] + ((v26 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) &=
                ~(1LL << v26);
            result = v53;
            v37 = game_gameui_GaugeUtil_MasteryExpChange_vtable;
            if (v53 != 0) {
              result = std___1___shared_weak_count___release_weak();
            }
            v37 = game_gameui_GaugeUtil_ExpChange_vtable;
            if ((v49 & 1) != 0 && v51 != 0) {
              v31 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v31 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v51);
            }
            if ((v46 & 1) != 0 && v48 != 0) {
              v32 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v32 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v48);
            }
            if ((v43 & 1) != 0 && v45 != 0) {
              v33 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v33 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v45);
            }
            v4 = a1[14];
            if (a1[15] - v4 <= (unsigned __int64)++v5) {
              goto LABEL_49;
            }
          }
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                    memory_order_relaxed);
          GameRoutine_1750020(&v37, v56, v10, v7, v11, v8);
          std___1___shared_weak_count___release_weak();
          if (v36 == 0) {
            goto LABEL_10;
          }
        LABEL_9:
          std___1___shared_weak_count___release_weak();
          goto LABEL_10;
        }
      }
    LABEL_49:
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        return std___1___shared_weak_count___release_weak();
      }
    }
  }
  return result;
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
        GameRoutine_15883c0(&v15, v11, v14);
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
