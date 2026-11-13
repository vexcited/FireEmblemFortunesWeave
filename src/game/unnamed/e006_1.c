#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern char GameData_1ad767c[6];
extern __int64 GameData_212bf68;
extern __int64* GameData_212d460[6];
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212fc38[2];
extern __int64 GameData_21c9da8;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21ee240;
extern __int64 GameData_22336e0;
extern __int64 GameData_2236800;
extern __int64 GameData_2258cf8;
__int64 GameRoutine_102e240(__int64, __int128*, __int64*);
__int64 GameRoutine_102f560(_QWORD, _QWORD);
__int64 GameRoutine_102f7e0(_QWORD, _QWORD);
__int64 GameRoutine_1152360(_QWORD, _QWORD);
__int64 GameRoutine_11c7ec0(_QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_15635a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            long double);
__n128 GameRoutine_1a09bf0(_QWORD, const char*, ...);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_9a3bc0(_QWORD, _QWORD);
struct PseudoSret GameRoutine_db1f30(_QWORD);
__int64 GameRoutine_f71cb0(_QWORD, _QWORD);
__int64 GameRoutine_f71d40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f71fc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_fb6e10(void);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_15635a0(__int64*, __int64, char);
__int64 ProcTransitionAnim_156af20(__int64, int, int, __int64*, const char*,
                                   const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64 game_talk_g_window_layout;
int sprintf(__int64, const char*, ...);
__int64 GameHr_113da20(__int64 result, char a2, char a3);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8, __int64*);
__int64*
GameRoutine_1152360_alt1(_QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_1152360");
__int64 GameHr_102f560(__int64*, __int64);
__int64 GameRoutine_11c7ec0_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_11c7ec0");
__int64 GameRoutine_f71cb0_alt1(__int64, int) __asm__("GameRoutine_f71cb0");
__int64 GameRoutine_f71d40_alt1(__int64, __int64,
                                __int64) __asm__("GameRoutine_f71d40");
__int64 GameRoutine_fb6e10_alt1(__int64) __asm__("GameRoutine_fb6e10");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 game_hub_102e240(__int64, __int128*, unsigned __int8*);
__int64 game_hub_f71fc0(__int64, __int64, __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
int memcmp(__int64, __int64, unsigned __int64);
void GameRoutine_9a3bc0_alt1(int, const char*) __asm__("GameRoutine_9a3bc0");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_102fb00(__int64 a1, __int64 a2);
__int64* GameHr_11566f0(__int64 a1);
__int64 GameHr_115a890(__int64 a1);
__int64 GameHr_115c040(__int64 a1);

void GameHr_102fb00(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v6;
  unsigned int* v7;
  __int128 v8;
  unsigned __int64 v9;
  char v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    __int64 v35;
    unsigned __int64 v36;
    char* v37;
  } v35_;
  struct {
    __int64 v38;
    unsigned __int64 v39;
    char* v40;
  } v38_;
  struct {
    __int128 v41;
    int v42;
    char gap68_[4];
    __int64 v43;
    unsigned __int64 v44;
    __int64 v45;
    __int64 v46;
    unsigned __int64 v47;
    __int64 v48;
    int v49;
    char v50;
    char gap125_[3];
    char v51;
    char gap129_[7];
    __int64 v52;
    __int64 v53;
  } v41_;

  v3 = *(_QWORD*)(*(_QWORD*)a2 + 1688LL);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 8);
    LOBYTE(v41_.v43) = 0;
    v41_.v51 = 0;
    v41_.v41 = (__typeof__(v41_.v41)){0};
    v41_.v42 = 0;
    v41_.v53 = 0;
    LODWORD(v41_.v52) = GameRoutine_fb6e10_alt1(v3);
    if ((_DWORD)v41_.v52 != 0) {
      v6 = (__int64*)(*(_QWORD*)a2 + 856LL);
      v7 = (unsigned int*)(*(_QWORD*)a2 + 268LL);
      *(_QWORD*)&v41_.v41 = *(_QWORD*)(*(_QWORD*)a2 + 260LL);
      *(_QWORD*)&v8 = v41_.v41;
      *((_QWORD*)&v8 + 1) = *v7;
      v41_.v41 = v8;
      LocatorDispos_db1f30((void*)(&v38_.v38), v6);
      v9 = *(unsigned __int8*)(v4 + 8);
      v10 = v38_.v38;
      v11 = v38_.v39;
      if ((v9 & 1) != 0) {
        v12 = *(_QWORD*)(v4 + 16);
      }
      else {
        v12 = v9 >> 1;
      }
      v13 = (unsigned __int64)(unsigned __int8)v38_.v38 >> 1;
      if ((v38_.v38 & 1) != 0) {
        v13 = v38_.v39;
      }
      if (v12 == v13 &&
          ((v9 & 1) != 0 ? (v14 = *(_QWORD*)(v4 + 24)) : (v14 = v4 + 9),
           (v38_.v38 & 1) == 0 ? (v15 = (char*)&v38_.v38 + 1)
                               : (v15 = v38_.v40),
           memcmp(v14, (__int64)v15, v12) == 0)) {
        LOWORD(v35_.v35) = 0;
      }
      else if ((v10 & 1) != 0) {
        fw_text_String_CopyTerminated(&v35_.v35, (__int64)v38_.v40, v11);
      }
      else {
        v35_.v35 = v38_.v38;
        v35_.v36 = v38_.v39;
        v35_.v37 = v38_.v40;
      }
      if (*(_BYTE*)(v4 + 32) != 1 ||
          ((v35_.v35 & 1) != 0
               ? (v16 = v35_.v36)
               : (v16 = (unsigned __int64)(unsigned __int8)v35_.v35 >> 1),
           v16 == 0)) {
        if ((game_hub_102e240(v4, &v41_.v41, (unsigned __int8*)&v35_.v35) &
             1) != 0) {
          v17 = GameData_212ebb0[0];
          v18 = *GameData_212ebb0[0];
          v19 = GameRoutine_f71d40_alt1(*GameData_212ebb0[0],
                                        (__int64)&v41_.v41, v4 + 40);
          if ((GameRoutine_f71cb0_alt1(v19, v19) & 1) != 0 &&
              ((unsigned int)game_hub_f71fc0(v18, (__int64)&v41_.v41,
                                             v4 + 40) == 0 ||
               (*(_BYTE*)(v18 + 32) & 2) != 0)) {
            v20 = GameRoutine_f71d40_alt1(*v17, (__int64)&v41_.v41, v4 + 40);
            v22 = *(_QWORD*)(v4 + 120);
            v21 = *(_QWORD*)(v4 + 128);
            v41_.v42 = v20;
            if (v22 >= v21) {
              v27 = GameHr_102f560((__int64*)(v4 + 112), (__int64)&v41_.v41);
            }
            else {
              v23 = *((_QWORD*)&v41_.v41 + 1);
              *(_BYTE*)(v22 + 24) = 0;
              v24 = (__int64*)(v22 + 24);
              *(_BYTE*)(v22 + 80) = 0;
              *(_QWORD*)(v22 + 8) = v23;
              *(_QWORD*)v22 = v41_.v41;
              *(_DWORD*)(v22 + 16) = v41_.v42;
              if (v41_.v51 == 1) {
                if ((v41_.v43 & 1) != 0) {
                  fw_text_String_CopyTerminated(v24, v41_.v45, v41_.v44);
                }
                else {
                  v25 = v41_.v43;
                  v26 = v41_.v45;
                  *(_QWORD*)(v22 + 32) = v41_.v44;
                  *(_QWORD*)(v22 + 40) = v26;
                  *v24 = v25;
                }
                if ((v41_.v46 & 1) != 0) {
                  fw_text_String_CopyTerminated((__int64*)(v22 + 48), v41_.v48,
                                                v41_.v47);
                }
                else {
                  *(_QWORD*)(v22 + 56) = v41_.v47;
                  v28 = v41_.v46;
                  *(_QWORD*)(v22 + 64) = v41_.v48;
                  *(_QWORD*)(v22 + 48) = v28;
                }
                v29 = v41_.v50;
                *(_DWORD*)(v22 + 72) = v41_.v49;
                *(_BYTE*)(v22 + 76) = v29;
                *(_BYTE*)(v22 + 80) = 1;
              }
              v30 = v41_.v53;
              v27 = v22 + 112;
              *(_QWORD*)(v22 + 88) = v41_.v52;
              *(_QWORD*)(v22 + 96) = v30;
            }
            *(_QWORD*)(v4 + 120) = v27;
          }
        }
      }
      if ((v35_.v35 & 1) != 0 && v35_.v37 != nullptr) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v35_.v37);
      }
      if ((v38_.v38 & 1) != 0 && v38_.v40 != nullptr) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v38_.v40);
      }
      if (v41_.v51 == 1) {
        if ((v41_.v46 & 1) != 0 && v41_.v48 != 0) {
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v41_.v48);
        }
        if ((v41_.v43 & 1) != 0 && v41_.v45 != 0) {
          v34 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v41_.v45);
        }
      }
    }
  }
}

__int64 GameHr_102ff60(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int* v7;
  __int128 v8;
  unsigned __int64 v9;
  char v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int128 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  char v48;
  char v49;
  __int64 v50;

  v2 = *a2;
  if (*(_QWORD*)(*a2 + 1688) != 0) {
    v3 = *(_QWORD*)(result + 8);
    v4 = *(_QWORD*)(v2 + 840);
    v5 = *(_QWORD*)(v2 + 848);
    LOBYTE(v41) = 0;
    v49 = 0;
    v39 = 0u;
    v40 = 0;
    v50 = 0;
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v4 != 0 && *(_BYTE*)(v4 + 100) == 1 && (*(_BYTE*)(v4 + 97) & 8) != 0) {
      v6 = *a2 + 856;
      v7 = (unsigned int*)(*a2 + 268);
      *(_QWORD*)&v39 = *(_QWORD*)(*a2 + 260);
      *(_QWORD*)&v8 = v39;
      *((_QWORD*)&v8 + 1) = *v7;
      v39 = v8;
      result = (__int64)(*(struct PseudoSret*)(&v36) = GameRoutine_db1f30(v6),
                         (void*)(&v36));
      v9 = *(unsigned __int8*)(v3 + 8);
      v10 = v36;
      v11 = v37;
      if ((v9 & 1) != 0) {
        v12 = *(_QWORD*)(v3 + 16);
      }
      else {
        v12 = v9 >> 1;
      }
      v13 = (unsigned __int64)(unsigned __int8)v36 >> 1;
      if ((v36 & 1) != 0) {
        v13 = v37;
      }
      if (v12 == v13 &&
          ((v9 & 1) != 0 ? (v14 = *(_QWORD*)(v3 + 24)) : (v14 = v3 + 9),
           (v36 & 1) == 0 ? (v15 = (char*)&v36 + 1) : (v15 = v38),
           (_DWORD)(result = GameRoutine_1a09cf0(v14, v15)) == 0)) {
        LOWORD(v33) = 0;
      }
      else if ((v10 & 1) != 0) {
        result = GameRoutine_60a270(&v33, v38, v11);
      }
      else {
        v33 = v36;
        v34 = v37;
        v35 = v38;
      }
      if (*(_BYTE*)(v3 + 32) != 1 ||
          ((v33 & 1) != 0 ? (v16 = v34)
                          : (v16 = (unsigned __int64)(unsigned __int8)v33 >> 1),
           v16 == 0)) {
        result = GameRoutine_102e240(v3, &v39, &v33);
        if ((result & 1) != 0) {
          v17 = GameData_212ebb0[0];
          v18 = *GameData_212ebb0[0];
          v19 = GameRoutine_f71d40(*GameData_212ebb0[0], &v39, v3 + 40);
          result = GameRoutine_f71cb0(v19, (unsigned int)v19);
          if ((result & 1) != 0) {
            result = GameRoutine_f71fc0(v18, &v39, v3 + 40);
            if ((_DWORD)result == 0 || (*(_BYTE*)(v18 + 32) & 2) != 0) {
              v20 = GameRoutine_f71d40(*v17, &v39, v3 + 40);
              v22 = *(_QWORD*)(v3 + 144);
              v21 = *(_QWORD*)(v3 + 152);
              v40 = v20;
              if (v22 >= v21) {
                result = GameRoutine_102f7e0(v3 + 136, &v39);
              }
              else {
                v23 = *((_QWORD*)&v39 + 1);
                *(_BYTE*)(v22 + 24) = 0;
                v24 = (_QWORD*)(v22 + 24);
                *(_BYTE*)(v22 + 80) = 0;
                *(_QWORD*)(v22 + 8) = v23;
                *(_QWORD*)v22 = v39;
                *(_DWORD*)(v22 + 16) = v40;
                if (v49 == 1) {
                  if ((v41 & 1) != 0) {
                    GameRoutine_60a270(v24, v43, v42);
                  }
                  else {
                    v25 = v41;
                    v26 = v43;
                    *(_QWORD*)(v22 + 32) = v42;
                    *(_QWORD*)(v22 + 40) = v26;
                    *v24 = v25;
                  }
                  if ((v44 & 1) != 0) {
                    GameRoutine_60a270(v22 + 48, v46, v45);
                  }
                  else {
                    *(_QWORD*)(v22 + 56) = v45;
                    v27 = v44;
                    *(_QWORD*)(v22 + 64) = v46;
                    *(_QWORD*)(v22 + 48) = v27;
                  }
                  v28 = v48;
                  *(_DWORD*)(v22 + 72) = v47;
                  *(_BYTE*)(v22 + 76) = v28;
                  *(_BYTE*)(v22 + 80) = 1;
                }
                result = v22 + 96;
                *(_QWORD*)(v22 + 88) = v50;
              }
              *(_QWORD*)(v3 + 144) = result;
            }
          }
        }
      }
      if ((v33 & 1) != 0 && v35 != nullptr) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v29 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v29,
                                     (_QWORD)(v35));
      }
      if ((v36 & 1) != 0 && v38 != nullptr) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v30 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v30,
                                     (_QWORD)(v38));
      }
    }
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = GameRoutine_1a09c50(v5);
    }
    if (v49 == 1) {
      if ((v44 & 1) != 0 && v46 != 0) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v31 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v31,
                                     (_QWORD)(v46));
      }
      if ((v41 & 1) != 0 && v43 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v32 = 56;
        }
        return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v32,
                                   (_QWORD)(v43));
      }
    }
  }
  return result;
}

__int64 GameHr_113da20(__int64 result, char a2, char a3)
{
  __int64 v3;
  const char* v4;
  __int64 v5;
  char v6[32];

  if (*(_BYTE*)(result + 75) == (a2 & 1)) {
    return result;
  }
  v3 = result;
  *(_BYTE*)(result + 75) = a2 & 1;
  if ((a2 & 1) != 0) {
    if ((a3 & 1) != 0) {
      GameHr_1562680((__int64)&game_talk_g_window_layout, "SoundSelect",
                     0x1.0000000000000p+0f);
    }
    LayoutAccessor_155e830((__int64)&game_talk_g_window_layout, 1);
    ui_LayoutAccessor_SetPaneVisible((__int64)&game_talk_g_window_layout,
                                     (__int64)"N_Auto", 0);
    ui_LayoutAccessor_SetPaneVisible((__int64)&game_talk_g_window_layout,
                                     (__int64)"N_Next", 0);
    if (*(_BYTE*)(v3 + 74) != 1) {
      result =
          LayoutAccessor_15635a0(&game_talk_g_window_layout, (__int64)"Out", 0);
      if ((result & 1) == 0) {
        return result;
      }
      v4 = "In";
      return GameHr_1562680((__int64)&game_talk_g_window_layout, v4,
                            0x1.0000000000000p+0f);
    }
    goto LABEL_10;
  }
  if (*(_BYTE*)(result + 72) == 1) {
    GameHr_1562680((__int64)&game_talk_g_window_layout, "SoundDisable",
                   0x1.0000000000000p+0f);
    ui_LayoutAccessor_SetPaneVisible((__int64)&game_talk_g_window_layout,
                                     (__int64)"N_Auto", *(_BYTE*)(v3 + 73));
    ui_LayoutAccessor_SetPaneVisible((__int64)&game_talk_g_window_layout,
                                     (__int64)"N_Next",
                                     (*(_BYTE*)(v3 + 73) & 1) == 0);
    result = GameHr_1562680((__int64)&game_talk_g_window_layout, "Default",
                            0x1.0000000000000p+0f);
    if (*(_BYTE*)(v3 + 74) != 1) {
      return result;
    }
  LABEL_10:
    v5 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf((__int64)v6, "%s%s", "Down", "Out");
      result = ProcTransitionAnim_156af20(v5, 1, 1, &game_talk_g_window_layout,
                                          nullptr, v6);
    }
    else {
      result = -1;
    }
    *(_QWORD*)(v3 + 80) = result;
    *(_BYTE*)(v3 + 76) = 1;
    return result;
  }
  if (*(_BYTE*)(result + 89) != 1 || (*(_BYTE*)(result + 88) & 1) == 0) {
    v4 = "Out";
    return GameHr_1562680((__int64)&game_talk_g_window_layout, v4,
                          0x1.0000000000000p+0f);
  }
  return result;
}

__int64* GameHr_11566f0(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8 v7;
  __int64 v8;
  _DWORD* v9;
  _DWORD* v10;
  char v11;
  int* v12;
  int* v13;
  int v14;
  int v15;
  __int64* result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  struct {
    __int64 v23[2];
    __int64 v24;
  } v23_;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return nullptr;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v23_.v23, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v23_.v23[1] = *(_QWORD*)(v4 + 8);
    v23_.v24 = v6;
    v23_.v23[0] = v5;
  }
  v7 = *(_BYTE*)(v4 + 24);
  v8 = *(_QWORD*)(v4 + 32);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 == 5) {
    v12 = *(int**)(v4 + 40);
    v13 = (int*)(v4 + 25);
    if ((v7 & 1) != 0) {
      v13 = v12;
    }
    v14 = *v13;
    v15 = *((unsigned __int8*)v13 + 4);
    if (v14 != *(_DWORD*)"False" ||
        v15 != (unsigned __int8)GameData_1ad767c[4]) {
      goto LABEL_40;
    }
    v11 = 0;
  }
  else {
    if (v8 != 4) {
      goto LABEL_40;
    }
    v9 = *(_DWORD**)(v4 + 40);
    v10 = (_DWORD*)(v4 + 25);
    if ((v7 & 1) != 0) {
      v10 = v9;
    }
    if (*v10 != *(_DWORD*)"True") {
      goto LABEL_40;
    }
    v11 = 1;
  }
  if (GameData_22336e0 == 0) {
    goto LABEL_40;
  }
  result = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                    (unsigned __int8*)v23_.v23);
  if (result == nullptr) {
    goto LABEL_41;
  }
  v18 = result[5];
  if (v18 == 0 || *(_QWORD*)(v18 + 136) == 0 || GameData_22336e0 == 0) {
    goto LABEL_40;
  }
  result = GameRoutine_1152360_alt1((_QWORD*)(GameData_22336e0 + 560),
                                    (unsigned __int8*)v23_.v23);
  if (result == nullptr) {
    goto LABEL_41;
  }
  v19 = result[5];
  if (v19 == 0 || *(_BYTE*)(v19 + 128) != 1) {
    goto LABEL_40;
  }
  if (*(_BYTE*)(v19 + 129) != 1) {
    result = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
    if ((v23_.v23[0] & 1) == 0) {
      return result;
    }
    goto LABEL_42;
  }
  v20 = *(_QWORD*)(v19 + 152);
  if (v20 == 0) {
  LABEL_40:
    result = nullptr;
  LABEL_41:
    if ((v23_.v23[0] & 1) == 0) {
      return result;
    }
    goto LABEL_42;
  }
  result = nullptr;
  *(_BYTE*)(v20 + 289) = v11;
  if ((v23_.v23[0] & 1) == 0) {
    return result;
  }
LABEL_42:
  if (v23_.v24 != 0) {
    v21 = (unsigned int)result;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v23_.v24);
    return (__int64*)v21;
  }
  return result;
}

__int64 GameHr_115a890(__int64 a1)
{
  int v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v11[2];
    __int64 v12;
  } v11_;

  if (GameData_21ec7b8 != 0 && (*(_BYTE*)(GameData_21ec7b8 + 206) & 1) != 0 ||
      game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v4 = 2)
           : (v4 = 3),
       (v4 & v3) != 0)) {
    v5 = *(__int64**)(a1 + 120);
    if ((*(_BYTE*)v5 & 1) != 0) {
      fw_text_String_CopyTerminated(v11_.v11, v5[2], v5[1]);
    }
    else {
      v6 = *v5;
      v7 = v5[1];
      v8 = v5[2];
      v11_.v11[1] = v7;
      v11_.v12 = v8;
      v11_.v11[0] = v6;
    }
    GameRoutine_11c7ec0_alt1(*(_QWORD*)(*GameData_212fc38[0] + 600),
                             (__int64)v11_.v11);
    if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v11_.v12);
    }
  }
  return 0;
}

__int64 GameHr_115c040(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v20[2];
    char* v21;
  } v20_;

  v1 = *(_QWORD*)(a1 + 120);
  v3 = *(_BYTE*)(v1 + 24);
  v2 = (__int64*)(v1 + 24);
  if ((v3 & 1) != 0) {
    fw_text_String_CopyTerminated(v20_.v20,
                                  *(_QWORD*)(*(_QWORD*)(a1 + 120) + 40LL),
                                  *(_QWORD*)(*(_QWORD*)(a1 + 120) + 32LL));
  }
  else {
    v4 = *v2;
    v5 = v2[1];
    v6 = v2[2];
    v20_.v20[0] = v4;
    v20_.v20[1] = v5;
    v20_.v21 = (char*)v6;
  }
  if ((v20_.v20[0] & 1) != 0) {
    v7 = v20_.v21;
  }
  else {
    v7 = (char*)v20_.v20 + 1;
  }
  v8 = game_HashString((__int64)v7);
  if (v8 != 0) {
    v9 = *(_QWORD*)(GameData_21c9da8 + 96);
    if (v9 != 0 && *(_QWORD*)(GameData_21c9da8 + 112) != 0) {
      v11 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v12 = v8;
        if (v8 >= v9) {
          v12 = v8 % v9;
        }
      }
      else {
        v12 = v11 & v8;
      }
      v13 = *(_QWORD**)(*(_QWORD*)(GameData_21c9da8 + 88) + 8 * v12);
      if (v13 != nullptr) {
        v14 = (_QWORD*)*v13;
        if (v14 != nullptr) {
          if ((v9 & v11) == 0) {
            while (1) {
              v16 = v14[1];
              if (v16 == v8) {
                if (v14[2] == v8) {
                  goto LABEL_32;
                }
              }
              else if ((v16 & v11) != v12) {
                goto LABEL_34;
              }
              v14 = (_QWORD*)*v14;
              if (v14 == nullptr) {
                goto LABEL_34;
              }
            }
          }
          do {
            v15 = v14[1];
            if (v15 == v8) {
              if (v14[2] == v8) {
              LABEL_32:
                v17 = v14[3];
                if (v17 != 0) {
                  GameRoutine_9a3bc0_alt1(5, *(const char**)(v17 + 32));
                }
                break;
              }
            }
            else {
              if (v15 >= v9) {
                v15 %= v9;
              }
              if (v15 != v12) {
                break;
              }
            }
            v14 = (_QWORD*)*v14;
          } while (v14 != nullptr);
        }
      }
    }
  }
LABEL_34:
  if ((v20_.v20[0] & 1) != 0 && v20_.v21 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  (__int64)v20_.v21);
  }
  return 0;
}

#pragma GCC visibility pop
