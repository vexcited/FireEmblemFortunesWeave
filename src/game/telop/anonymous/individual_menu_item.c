#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1750310(__int64, int);
__int64 GameRoutine_1758480(_QWORD, _QWORD);
__int64 GameRoutine_1758970(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_telop_anonymous_IndividualMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 IndividualMenuItem_Destructor_1756c80(__int64 a1);
__int64 IndividualMenuItem_Unknown73_1758340(__int64 a1, __int64 a2);
__int64 IndividualMenuItem_Unknown75(__int64 result);
__attribute__((swiftcall)) void GameRoutine_1114920(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_9d5180(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 BlnPopup_19f25b0(_QWORD, long double);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_174d800(__int64, float, float);
__int64 GameRoutine_174dbb0(__int64, int);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 StatusNum_1890220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64* GameData_212d670[3];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212d690;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
__int64 IndividualMenuItem_1758480(__int64 a1, int a2);

__int64 IndividualMenuItem_Destructor_1756c80(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  bool v11;
  _QWORD* v12;
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
  __int64 result;
  __int64 v27;
  __int64 v28;

  v1 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)a1 = game_telop_anonymous_IndividualMenuItem_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 392);
    if (v1 == v3) {
      goto LABEL_8;
    }
    do {
      if (*(_QWORD*)(v3 - 8) != 0) {
        std___1___shared_weak_count___release_weak();
      }
      v3 -= 16;
    } while (v3 != v1);
    v4 = *(_QWORD*)(a1 + 384);
    *(_QWORD*)(a1 + 392) = v1;
    v1 = v4;
    if (v4 != 0) {
    LABEL_8:
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v1);
    }
  }
  v6 = *(_QWORD**)(a1 + 360);
  if (v6 != nullptr) {
    v7 = *(_QWORD**)(a1 + 368);
    if (v6 == v7) {
      goto LABEL_17;
    }
    v8 = v7 - 20;
    v9 = v7 - 20;
    do {
      v10 = *v9;
      v9 -= 20;
      (*(void (**)(_QWORD*))(v10 + 24))(v8);
      v11 = v8 == v6;
      v8 = v9;
    } while (!v11);
    v12 = *(_QWORD**)(a1 + 360);
    *(_QWORD*)(a1 + 368) = v6;
    v6 = v12;
    if (v12 != nullptr) {
    LABEL_17:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v6);
    }
  }
  *(_QWORD*)(a1 + 224) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 344);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
    }
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 320);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 296);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
    }
  }
  *(_QWORD*)(a1 + 96) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v20 = *(_QWORD*)(a1 + 216);
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
    }
  }
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v22 = *(_QWORD*)(a1 + 192);
    if (v22 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
    }
  }
  if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 168);
    if (v24 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
    }
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 32);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v27);
    }
  }
  return result;
}

__int64 IndividualMenuItem_Unknown73_1758340(__int64 a1, __int64 a2)
{
  char v2;
  __int64 (***v4)(_QWORD, _QWORD);
  __int64 (***v5)(_QWORD, _QWORD);
  __int64 (***v6)(_QWORD, _QWORD);
  __int64 (**v7)(_QWORD, __int64);
  char v8;

  v2 = 0;
  if (*(float*)(a1 + 112) == 0.0 && *(float*)(a1 + 240) == 0.0) {
    v4 = *(__int64 (****)(_QWORD, _QWORD))(a1 + 360);
    v5 = *(__int64 (****)(_QWORD, _QWORD))(a1 + 368);
    if (v4 == v5) {
      v2 = 1;
    }
    else {
      v6 = v4;
      do {
        v7 = *v6;
        v6 += 20;
        v8 = (*v7)(v4, a2);
        if ((v8 & 1) != 0) {
          break;
        }
        v4 = v6;
      } while (v6 != v5);
      v2 = v8 ^ 1;
    }
  }
  return v2 & 1;
}

__int64 IndividualMenuItem_Unknown75(__int64 result)
{
  __int64 v1;
  __int64 i;
  __int64 v3;

  v1 = result;
  if (*(float*)(result + 112) != 0.0) {
    result = GameRoutine_1758480(result, 2);
  }
  if (*(float*)(v1 + 240) != 0.0) {
    result = GameRoutine_1758970(v1, 2);
  }
  v3 = *(_QWORD*)(v1 + 360);
  for (i = *(_QWORD*)(v1 + 368); v3 != i; v3 += 160) {
    result = GameRoutine_1750310(v3, 2);
  }
  return result;
}

__int64 IndividualMenuItem_1758480(__int64 a1, int a2)
{
  __int64 v3;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  atomic_ullong* v24;
  __int64* v25;
  __int64 v26;
  long double v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  atomic_ullong* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  unsigned __int64 v40;
  int v41;
  int v42;
  int v43;
  int v44;
  __int64 v45;
  float v46;
  float v47;
  int v48;
  int v49;
  int v50;
  float v51;
  float v52;
  float v53;
  float v54;
  __int64* v56;
  __int64* v57;
  _QWORD v58[2];
  __int64 v59;
  __int64 v60;

  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v3);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak_alt1();
  if (v6 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v7 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((int)v7 < 1) {
    v9 = 0;
  }
  else {
    v8 = *(_DWORD*)(a1 + 104);
    v9 = 0;
    v10 = *(_DWORD*)(GameData_21d9968 + 4LL * (unsigned int)(v7 - 1));
    if (v10 >= v8) {
      v10 = *(_DWORD*)(a1 + 104);
    }
    if (v8 >= *(_DWORD*)GameData_21d9968) {
      v11 = v10;
    }
    else {
      v11 = *(_DWORD*)GameData_21d9968;
    }
    while (1) {
      v12 = (unsigned int)(v9 + v7) >> 1;
      v13 = *(_DWORD*)(GameData_21d9968 + 4LL * v12);
      if (v11 == v13) {
        break;
      }
      if (v11 < v13) {
        LODWORD(v7) = (unsigned int)(v9 + v7) >> 1;
      }
      else {
        v9 = v12 + 1;
      }
      if (v9 >= (int)v7) {
        goto LABEL_20;
      }
    }
    v9 = v12 + 1;
  }
LABEL_20:
  GameRoutine_174dbb0(a1 + 96, a2);
  v14 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((int)v14 < 1) {
    v16 = 0;
  }
  else {
    v15 = *(_DWORD*)(a1 + 104);
    v16 = 0;
    v17 = *(_DWORD*)(GameData_21d9968 + 4LL * (unsigned int)(v14 - 1));
    if (v17 >= v15) {
      v17 = *(_DWORD*)(a1 + 104);
    }
    if (v15 >= *(_DWORD*)GameData_21d9968) {
      v18 = v17;
    }
    else {
      v18 = *(_DWORD*)GameData_21d9968;
    }
    while (1) {
      v19 = (unsigned int)(v16 + v14) >> 1;
      v20 = *(_DWORD*)(GameData_21d9968 + 4LL * v19);
      if (v18 == v20) {
        break;
      }
      if (v18 < v20) {
        LODWORD(v14) = (unsigned int)(v16 + v14) >> 1;
      }
      else {
        v16 = v19 + 1;
      }
      if (v16 >= (int)v14) {
        goto LABEL_34;
      }
    }
    v16 = v19 + 1;
  }
LABEL_34:
  snd_Fade_Fade_10c830(&v59, 0.0);
  snd_play_ff2d0((void*)(v58), "SE_SYS_EXP", "SE_SYS_EXP", &v59, 0, 65537, 0,
                 0.0, 1.0);
  snd_Fade_Destroy_Fade(&v59);
  if (v9 < v16) {
    v21 = *(_QWORD*)(a1 + 56);
    if (v21 != 0) {
      v22 = std___1___shared_weak_count_lock(v21);
      if (v22 != 0) {
        v23 = v22;
        v24 = (atomic_ullong*)(v22 + 8);
        v25 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v24, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v25 != nullptr) {
            goto LABEL_40;
          }
        }
        else {
          v56 = v25;
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          std___1___shared_weak_count___release_weak_alt1();
          v25 = v56;
          if (v56 != nullptr) {
          LABEL_40:
            v58[0] = "L_LvUP";
            v58[1] = 6;
            GameRoutine_1114920((void*)(&v59), v25, v58);
            if (v60 != 0) {
              v26 = std___1___shared_weak_count_lock(v60);
              v28 = v59;
              if (v60 != 0) {
                *(__n128*)&v27 =
                    std___1___shared_weak_count___release_weak_alt1();
              }
              if (v26 != 0 && v28 != 0) {
                BlnPopup_19f25b0(v28, v27);
              }
              else if (v26 == 0) {
                goto LABEL_49;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
                std___1___shared_weak_count___release_weak_alt1();
              }
            }
          LABEL_49:
            v58[0] = "L_Lv/L_Num";
            v58[1] = 10;
            GameRoutine_9d5180((void*)(&v59), v6, v58);
            if (v60 != 0) {
              v29 = std___1___shared_weak_count_lock(v60);
              v30 = v59;
              if (v60 != 0) {
                std___1___shared_weak_count___release_weak_alt1();
              }
              if (v29 != 0 && v30 != 0) {
                StatusNum_1890220(v30, (unsigned int)v16, (unsigned int)v16, 99,
                                  1, 0, 0xFFFFFFFFLL);
              }
              else if (v29 == 0) {
                goto LABEL_58;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
                std___1___shared_weak_count___release_weak_alt1();
              }
            }
          LABEL_58:
            *(_BYTE*)(a1 + 92) = 1;
            snd_Fade_Fade_10c830(&v59, 0.0);
            snd_play_ff2d0((void*)(v58), "SE_SYS_Level_Up", "SE_SYS_Level_Up",
                           &v59, 0, 65537, 0, 0.0, 1.0);
            snd_Fade_Destroy_Fade(&v59);
            v31 = *(_QWORD*)(a1 + 56);
            if (v31 != 0) {
              v32 = std___1___shared_weak_count_lock(v31);
              if (v32 != 0) {
                v33 = v32;
                v34 = (atomic_ullong*)(v32 + 8);
                v35 = *(__int64**)(a1 + 48);
                if (atomic_fetch_add(v34, 0xFFFFFFFFFFFFFFFFLL) != 0) {
                  if (v35 != nullptr) {
                  LABEL_63:
                    v36 = ui_LayoutAccessor_FindPane(v35, "T_Lv_Num");
                    if (v36 != 0) {
                      v37 = __dynamic_cast(v36, GameData_212d670[0],
                                           GameData_212d690, 0);
                      if (v37 != 0) {
                        GameRoutine_156c910(v37, "%d", 1);
                      }
                    }
                    goto LABEL_66;
                  }
                }
                else {
                  v57 = v35;
                  (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
                  std___1___shared_weak_count___release_weak_alt1();
                  v35 = v57;
                  if (v57 != nullptr) {
                    goto LABEL_63;
                  }
                }
              }
            }
            v35 = ui_LayoutAccessor_empty__ptr[0];
            goto LABEL_63;
          }
        }
      }
    }
    v25 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_40;
  }
LABEL_66:
  v38 = *(_DWORD*)(a1 + 120);
  v39 = 0;
  v40 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if (v38 >= (int)v40) {
    v41 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  }
  else {
    v41 = *(_DWORD*)(a1 + 120);
  }
  v42 = v41 - 1;
  if (v38 <= 0) {
    v42 = 0;
  }
  if (v38 < 1) {
    v43 = 1;
  }
  else {
    v43 = v41;
  }
  if (v43 != (_DWORD)v40) {
    v39 = *(_DWORD*)(GameData_21d9968 + 4LL * v43);
  }
  v44 = *(_DWORD*)(GameData_21d9968 + 4LL * v42);
  v45 = LayoutAccessor_155fbe0(v6, "L_Lv/L_Gauge");
  v46 = 1.0;
  v47 = 1.0;
  if (v39 >= 1) {
    v48 = v39 - v44;
    if (v39 != v44) {
      v49 = *(_DWORD*)(a1 + 108);
      if (v49 <= v44) {
        v49 = v44;
      }
      v50 = v49 - v44;
      if (v48 < v50) {
        v50 = v39 - v44;
      }
      v47 = (float)v50 / (float)v48;
    }
  }
  if (v39 >= 1) {
    v51 = (float)v44;
    if ((float)v44 != (float)v39) {
      v52 = *(float*)(a1 + 128);
      v53 = (float)v39 - v51;
      if (v52 < v51) {
        v52 = (float)v44;
      }
      v54 = v52 - v51;
      if (v53 < v54) {
        v54 = (float)v39 - v51;
      }
      v46 = v54 / v53;
    }
  }
  return GameRoutine_174d800(v45, v47, v46);
}

#pragma GCC visibility pop
