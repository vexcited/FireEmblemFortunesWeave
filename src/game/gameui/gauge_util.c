#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_MasteryExpChange_vtable[])();
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GaugeUtil_174ffa0(__int64 a1);
unsigned __int64 GaugeUtil_1750620();
__int64 GaugeUtil_17530b0(__int64 a1);
__int64 GaugeUtil_17535a0(__int64 result);
__attribute__((swiftcall)) void GameRoutine_1114920(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_9d5180(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void game_80c770(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 Alignment_56b600(_QWORD);
__int64 BauquetHPChange_1752840(_QWORD);
__int64 BlnPopup_19f25b0(_QWORD, long double);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_157c220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1627860(_QWORD);
__int64 GameRoutine_174dd80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1841190(_QWORD, _QWORD);
__int64 GameRoutine_1841470(_QWORD, _QWORD);
__int64 GameRoutine_1841fc0(_QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_90c6c0(_QWORD, _QWORD);
__int64 GameRoutine_90c8d0(_QWORD, long double);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 StatusNum_1890220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 StatusNum_1890ac0(_QWORD, _QWORD);
__int64 Util_1580bf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                     _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FitPaneSizeToText(_QWORD, _QWORD);
__n128 ProcPopup_1736c50(int, __int64*, __int64, int*);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212d690;
extern __int64 GameData_21d99c8;
extern __int64 GameData_21d99d0;
extern __int64 as_g_base_frame_counter;
extern __int64 game_g_game_setting;
extern __int64 game_g_game_setting_ptr;
float GameRoutine_618640(_QWORD, float, float, float, float);
long double ui_LayoutAccessor_GetPaneSize(_QWORD, _QWORD);
__int64 GaugeUtil_174e4e0(__int64 a1, int a2);
__int64 GaugeUtil_174f600(__int64 a1, int a2);
__int64 GaugeUtil_1750310(__int64 a1, int a2);
bool GaugeUtil_MasteryExpChange_Unknown7(__int64 a1);
__int64 GaugeUtil_MasteryExpChangeSmall_Unknown7(__int64 a1);
__int64 GaugeUtil_17512a0(__int64 a1, int a2);
__int64 GaugeUtil_1752580(__int64 a1, int a2);

__int64 GaugeUtil_174e4e0(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v8;
  long double v9;
  char v10;
  char v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;
  float v20;
  float v21;
  float* v22;
  int v23;
  int v24;
  float v25;
  int v26;
  float v27;
  bool v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  int v55;
  unsigned int v56;
  int v57;
  int v58;
  signed int v59;
  unsigned int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  bool v65;
  int v66;
  int v67;
  unsigned int v68;
  unsigned int v69;
  __int64 v70;
  _QWORD v71[2];
  __int64 v72[2];
  int v73[4];
  _QWORD v74[29];

  if (*(_BYTE*)(a1 + 49) != 1) {
    return 0;
  }
  v74[25] = v5;
  v74[26] = v4;
  v74[27] = v2;
  v74[28] = v3;
  v8 = (**(__int64 (***)(__int64))a1)(a1);
  if (a2 == 0 || (v8 & 1) != 0) {
    if (*(_BYTE*)(a1 + 49) == 1) {
      v12 = (**(__int64 (***)(__int64))a1)(a1);
      v13 = 0.0;
      if ((v12 & 1) != 0) {
        if (a2 == 1) {
          v14 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                        0x1.0aef000000000p+4) /
                0x1.f400000000000p+9;
          if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) !=
              0) {
            v14 = v14 * 8.0;
          }
          v15 = *(float*)(a1 + 40);
          v16 = *(float*)(a1 + 44) + v14;
          if (v15 >= v16) {
            v17 = v16;
          }
          else {
            v17 = *(float*)(a1 + 40);
          }
          if (v16 >= 0.0) {
            v18 = v17;
          }
          else {
            v18 = 0.0;
          }
          v20 = *(float*)(a1 + 16);
          v19 = *(_DWORD*)(a1 + 20);
          *(float*)(a1 + 44) = v18;
          v13 = GameRoutine_618640(4, 0.0, (float)v19, v18, v15) -
                (float)((float)v19 - *(float*)(a1 + 16));
          if (v13 >= v20) {
            v21 = v13;
          }
          else {
            v21 = v20;
          }
          if (v20 < v13) {
            v13 = v20;
          }
          if (*(_BYTE*)(a1 + 48) != 0) {
            v13 = v21;
          }
        }
        else if (a2 == 2) {
          v13 = *(float*)(a1 + 16);
        }
      }
      v22 = (float*)(a1 + 16);
      v23 = *(_DWORD*)(a1 + 8);
      v24 = *(unsigned __int8*)(a1 + 48);
      v25 = *(float*)(a1 + 16) - v13;
      *(float*)(a1 + 16) = v25;
      if (v24 == 1) {
        LODWORD(v74[0]) = 0;
        if (v25 >= 0.0) {
          v22 = (float*)v74;
        }
      }
      else {
        LODWORD(v74[0]) = 0;
        if (v25 <= 0.0) {
          v22 = (float*)v74;
        }
      }
      v26 = *(_DWORD*)(a1 + 36);
      v27 = v13 + *(float*)(a1 + 32);
      v28 = *v22 == 0.0;
      *(float*)(a1 + 16) = *v22;
      v29 = (int)v27;
      *(float*)(a1 + 32) = v27;
      if (v28) {
        v29 = v26;
      }
      *(_DWORD*)(a1 + 8) = v29;
      if (v29 >= v26) {
        v30 = 8;
      }
      else {
        v30 = 36;
      }
      if (v26 >= v29) {
        v31 = 8;
      }
      else {
        v31 = 36;
      }
      if (v24 != 0) {
        v32 = v30;
      }
      else {
        v32 = v31;
      }
      v33 = *(_DWORD*)(a1 + v32);
      *(_BYTE*)(a1 + 30) = 0;
      *(_DWORD*)(a1 + 8) = v33;
      (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
      if (a2 != 0) {
        v34 = *(_DWORD*)(a1 + 8) - v23;
        if (v34 < 1) {
          if (v34 < 0) {
            v44 = *(unsigned __int8*)(a1 + 80);
            v45 = *(_QWORD*)(a1 + 88);
            if ((v44 & 1) == 0) {
              v45 = v44 >> 1;
            }
            if (v45 != 0) {
              if ((v44 & 1) != 0) {
                v46 = *(_QWORD*)(a1 + 96);
              }
              else {
                v46 = a1 + 81;
              }
              game_80c770((void*)(v74), v46);
            }
          }
        }
        else {
          v35 = *(unsigned __int8*)(a1 + 56);
          v36 = *(_QWORD*)(a1 + 64);
          if ((v35 & 1) == 0) {
            v36 = v35 >> 1;
          }
          if (v36 != 0) {
            if ((v35 & 1) != 0) {
              v37 = *(_QWORD*)(a1 + 72);
            }
            else {
              v37 = a1 + 57;
            }
            if (v37 != 0) {
              snd_Fade_Fade_10c830(v74, 0.0);
              snd_play_ff2d0((void*)(v73), v37, v37, v74, 0, 65537, 0, 0.0,
                             1.0);
              snd_Fade_Destroy_Fade(v74);
            }
            v38 = *(_QWORD*)(a1 + 168);
            if (v38 != 0) {
              v39 = std___1___shared_weak_count_lock(v38);
              if (v39 != 0) {
                if (*(_QWORD*)(a1 + 160) != 0) {
                  v40 = *(_BYTE*)(a1 + 176);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
                    *(__n128*)&v9 =
                        std___1___shared_weak_count___release_weak_alt1();
                  }
                  if ((v40 & 1) == 0) {
                    v41 = *(_QWORD*)(a1 + 168);
                    v72[0] = *(_QWORD*)(a1 + 160);
                    v72[1] = v41;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v41 + 16), 1u,
                        memory_order_relaxed);
                    v42 =
                        std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 168));
                    v74[0] = *(_QWORD*)(a1 + 160);
                    v74[1] = v42;
                    v43 = ui_LayoutAccessor_FindPane(v74[0], "N_Eff");
                    *(_QWORD*)v73 = 0;
                    ProcPopup_1736c50(0, v72, v43, v73);
                    GameRoutine_1627860(v74);
                    *(__n128*)&v9 =
                        std___1___shared_weak_count___release_weak_alt1();
                    *(_BYTE*)(a1 + 176) = 1;
                  }
                }
                else if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
                  *(__n128*)&v9 =
                      std___1___shared_weak_count___release_weak_alt1();
                }
              }
            }
          }
        }
      }
    }
    if (*(_BYTE*)(a1 + 30) == 1 && (*(_BYTE*)(a1 + 48) & 1) == 0) {
      v47 = *(unsigned __int8*)(a1 + 104);
      v48 = *(_QWORD*)(a1 + 112);
      if ((v47 & 1) == 0) {
        v48 = v47 >> 1;
      }
      if (v48 != 0) {
        v49 = (v47 & 1) != 0 ? *(_QWORD*)(a1 + 120) : a1 + 105;
        if (v49 != 0) {
          snd_Fade_Fade_10c830(v74, 0.0);
          snd_play_ff2d0((void*)(v73), v49, v49, v74, 0, 65537, 0, 0.0, 1.0);
          snd_Fade_Destroy_Fade(v74);
        }
      }
    }
    v50 = *(_QWORD*)(a1 + 152);
    if (v50 != 0) {
      v51 = std___1___shared_weak_count_lock(v50);
      if (v51 != 0) {
        v52 = *(_QWORD*)(a1 + 144);
        v53 = v51;
        if (v52 != 0) {
          v54 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
          if ((int)v54 < 1) {
            v56 = 0;
          }
          else {
            v55 = *(_DWORD*)(a1 + 8);
            v56 = 0;
            v57 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v54 - 1));
            if (v57 >= v55) {
              v57 = *(_DWORD*)(a1 + 8);
            }
            if (v55 >= *(_DWORD*)GameData_21d99c8) {
              v58 = v57;
            }
            else {
              v58 = *(_DWORD*)GameData_21d99c8;
            }
            v59 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
            while (1) {
              v60 = (v56 + v59) >> 1;
              v61 = *(_DWORD*)(GameData_21d99c8 + 4LL * v60);
              if (v58 == v61) {
                break;
              }
              if (v58 < v61) {
                v59 = (v56 + v59) >> 1;
              }
              else {
                v56 = v60 + 1;
              }
              if ((int)v56 >= v59) {
                goto LABEL_99;
              }
            }
            v56 = v60 + 1;
          }
        LABEL_99:
          v62 = *(_DWORD*)(a1 + 24);
          if (v62 >= (int)v54) {
            v63 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
          }
          else {
            v63 = *(_DWORD*)(a1 + 24);
          }
          if (v62 + 1 < (int)v54) {
            LODWORD(v54) = v62 + 1;
          }
          v64 = v63 - 1;
          v65 = v62 < 0;
          v66 = v54 - 1;
          if (v62 <= 0) {
            v67 = 0;
          }
          else {
            v67 = v64;
          }
          if (v65) {
            v66 = 0;
          }
          v68 = *(_DWORD*)(GameData_21d99c8 + 4LL * v67);
          v69 = *(_DWORD*)(GameData_21d99c8 + 4LL * v66);
          v70 = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 144), "Icon");
          if (v70 != 0) {
            v70 = __dynamic_cast(v70, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          GameRoutine_1841fc0(v70, v56);
          LayoutAccessor_1560070((void*)(v71), v52, "L_Gauge");
          GameRoutine_174dd80(a1, v71, v68, v69);
          if (v71[1] != 0) {
            *(__n128*)&v9 = std___1___shared_weak_count___release_weak_alt1();
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v53 + 16LL))(v53, v9);
          *(__n128*)&v9 = std___1___shared_weak_count___release_weak_alt1();
        }
      }
    }
    v10 = (**(__int64 (***)(__int64, long double))a1)(a1, v9);
  }
  else {
    v10 = 0;
  }
  return v10 & 1;
}

__int64 GaugeUtil_174f600(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v8;
  long double v9;
  char v10;
  char v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;
  float v20;
  float v21;
  float* v22;
  int v23;
  float v24;
  int v25;
  float v26;
  bool v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD v45[2];
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  if (*(_BYTE*)(a1 + 49) != 1) {
    return 0;
  }
  v48 = v5;
  v49 = v4;
  v50 = v2;
  v51 = v3;
  v8 = (**(__int64 (***)(__int64))a1)(a1);
  if (a2 == 0 || (v8 & 1) != 0) {
    if (*(_BYTE*)(a1 + 49) == 1) {
      v12 = (**(__int64 (***)(__int64))a1)(a1);
      v13 = 0.0;
      if ((v12 & 1) != 0) {
        if (a2 == 1) {
          v14 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                        0x1.0aef000000000p+4) /
                0x1.f400000000000p+9;
          if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
            v14 = v14 * 8.0;
          }
          v15 = *(float*)(a1 + 40);
          v16 = *(float*)(a1 + 44) + v14;
          if (v15 >= v16) {
            v17 = v16;
          }
          else {
            v17 = *(float*)(a1 + 40);
          }
          if (v16 >= 0.0) {
            v18 = v17;
          }
          else {
            v18 = 0.0;
          }
          v20 = *(float*)(a1 + 16);
          v19 = *(_DWORD*)(a1 + 20);
          *(float*)(a1 + 44) = v18;
          v13 = GameRoutine_618640(4, 0.0, (float)v19, v18, v15) -
                (float)((float)v19 - *(float*)(a1 + 16));
          if (v13 >= v20) {
            v21 = v13;
          }
          else {
            v21 = v20;
          }
          if (v20 < v13) {
            v13 = v20;
          }
          if (*(_BYTE*)(a1 + 48) != 0) {
            v13 = v21;
          }
        }
        else if (a2 == 2) {
          v13 = *(float*)(a1 + 16);
        }
      }
      v22 = (float*)(a1 + 16);
      v23 = *(unsigned __int8*)(a1 + 48);
      v24 = *(float*)(a1 + 16) - v13;
      *(float*)(a1 + 16) = v24;
      if (v23 == 1) {
        LODWORD(v46) = 0;
        if (v24 >= 0.0) {
          v22 = (float*)&v46;
        }
      }
      else {
        LODWORD(v46) = 0;
        if (v24 <= 0.0) {
          v22 = (float*)&v46;
        }
      }
      v25 = *(_DWORD*)(a1 + 36);
      v26 = v13 + *(float*)(a1 + 32);
      v27 = *v22 == 0.0;
      *(float*)(a1 + 16) = *v22;
      v28 = (int)v26;
      *(float*)(a1 + 32) = v26;
      if (v27) {
        v28 = v25;
      }
      *(_DWORD*)(a1 + 8) = v28;
      if (v28 >= v25) {
        v29 = 8;
      }
      else {
        v29 = 36;
      }
      if (v25 >= v28) {
        v30 = 8;
      }
      else {
        v30 = 36;
      }
      if (v23 != 0) {
        v31 = v29;
      }
      else {
        v31 = v30;
      }
      v32 = *(_DWORD*)(a1 + v31);
      *(_BYTE*)(a1 + 30) = 0;
      *(_DWORD*)(a1 + 8) = v32;
      (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
    }
    if (a2 != 0) {
      v33 = *(unsigned __int8*)(a1 + 56);
      v34 = *(_QWORD*)(a1 + 64);
      if ((v33 & 1) == 0) {
        v34 = v33 >> 1;
      }
      if (v34 != 0) {
        v35 = (v33 & 1) != 0 ? *(_QWORD*)(a1 + 72) : a1 + 57;
        if (v35 != 0) {
          snd_Fade_Fade_10c830(&v46, 0.0);
          snd_play_ff2d0((void*)(v45), v35, v35, &v46, 0, 65537, 0, 0.0, 1.0);
          snd_Fade_Destroy_Fade(&v46);
        }
      }
    }
    if (*(_BYTE*)(a1 + 30) == 1 && (*(_BYTE*)(a1 + 48) & 1) == 0) {
      v36 = *(unsigned __int8*)(a1 + 104);
      v37 = *(_QWORD*)(a1 + 112);
      if ((v36 & 1) == 0) {
        v37 = v36 >> 1;
      }
      if (v37 != 0) {
        v38 = (v36 & 1) != 0 ? *(_QWORD*)(a1 + 120) : a1 + 105;
        if (v38 != 0) {
          snd_Fade_Fade_10c830(&v46, 0.0);
          snd_play_ff2d0((void*)(v45), v38, v38, &v46, 0, 65537, 0, 0.0, 1.0);
          snd_Fade_Destroy_Fade(&v46);
        }
      }
    }
    v39 = *(_QWORD*)(a1 + 136);
    if (v39 == 0) {
      goto LABEL_79;
    }
    v40 = std___1___shared_weak_count_lock(v39);
    if (v40 == 0) {
      goto LABEL_79;
    }
    v41 = *(_QWORD*)(a1 + 128);
    v42 = v40;
    if (v41 != 0) {
      GameRoutine_157c220(*(_QWORD*)(a1 + 128), *(unsigned int*)(a1 + 12),
                          *(unsigned int*)(a1 + 8), a2 == 0, 0);
      if (*(_BYTE*)(a1 + 30) == 1) {
        v45[0] = "L_LvUP";
        v45[1] = 6;
        GameRoutine_1114920((void*)(&v46), v41, v45);
        if (v47 != 0) {
          v43 = std___1___shared_weak_count_lock(v47);
          v44 = v46;
          if (v47 != 0) {
            *(__n128*)&v9 = std___1___shared_weak_count___release_weak_alt1();
          }
          if (v43 != 0 && v44 != 0) {
            BlnPopup_19f25b0(v44, v9);
            goto LABEL_75;
          }
          if (v43 != 0) {
          LABEL_75:
            if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
              *(__n128*)&v9 = std___1___shared_weak_count___release_weak_alt1();
            }
          }
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v42 + 16LL))(v42, v9);
      *(__n128*)&v9 = std___1___shared_weak_count___release_weak_alt1();
    }
  LABEL_79:
    v10 = (**(__int64 (***)(__int64, long double))a1)(a1, v9);
    return v10 & 1;
  }
  v10 = 0;
  return v10 & 1;
}

__int64 GaugeUtil_174ffa0(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 128);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v3 != 0) {
          return *(float*)(a1 + 16) != 0.0;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        std___1___shared_weak_count___release_weak();
        if (v3 != 0) {
          return *(float*)(a1 + 16) != 0.0;
        }
      }
      return 0;
    }
  }
  return result;
}

__int64 GaugeUtil_1750310(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v8;
  char v9;
  char v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  int v18;
  float v19;
  float v20;
  float* v21;
  int v22;
  float v23;
  int v24;
  float v25;
  bool v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  _QWORD v38[2];
  _DWORD v39[50];
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;

  if (*(_BYTE*)(a1 + 49) != 1) {
    return 0;
  }
  v40 = v5;
  v41 = v4;
  v42 = v2;
  v43 = v3;
  v8 = (**(__int64 (***)(__int64))a1)(a1);
  if (a2 == 0 || (v8 & 1) != 0) {
    if (*(_BYTE*)(a1 + 49) == 1) {
      v11 = (**(__int64 (***)(__int64))a1)(a1);
      v12 = 0.0f;
      if ((v11 & 1) != 0) {
        if (a2 == 1) {
          v13 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f;
          if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
            v13 = v13 * 8.0f;
          }
          v14 = *(float*)(a1 + 40);
          v15 = *(float*)(a1 + 44) + v13;
          if (v14 >= v15) {
            v16 = v15;
          }
          else {
            v16 = *(float*)(a1 + 40);
          }
          if (v15 >= 0.0f) {
            v17 = v16;
          }
          else {
            v17 = 0.0f;
          }
          v19 = *(float*)(a1 + 16);
          v18 = *(_DWORD*)(a1 + 20);
          *(float*)(a1 + 44) = v17;
          v12 = GameRoutine_618640(4, 0.0f, (float)v18, v17, v14) -
                (float)((float)v18 - *(float*)(a1 + 16));
          if (v12 >= v19) {
            v20 = v12;
          }
          else {
            v20 = v19;
          }
          if (v19 < v12) {
            v12 = v19;
          }
          if (*(_BYTE*)(a1 + 48) != 0) {
            v12 = v20;
          }
        }
        else if (a2 == 2) {
          v12 = *(float*)(a1 + 16);
        }
      }
      v21 = (float*)(a1 + 16);
      v22 = *(unsigned __int8*)(a1 + 48);
      v23 = *(float*)(a1 + 16) - v12;
      *(float*)(a1 + 16) = v23;
      if (v22 == 1) {
        v39[0] = 0;
        if (v23 >= 0.0f) {
          v21 = (float*)v39;
        }
      }
      else {
        v39[0] = 0;
        if (v23 <= 0.0f) {
          v21 = (float*)v39;
        }
      }
      v24 = *(_DWORD*)(a1 + 36);
      v25 = v12 + *(float*)(a1 + 32);
      v26 = *v21 == 0.0f;
      *(float*)(a1 + 16) = *v21;
      v27 = (int)v25;
      *(float*)(a1 + 32) = v25;
      if (v26) {
        v27 = v24;
      }
      *(_DWORD*)(a1 + 8) = v27;
      if (v27 >= v24) {
        v28 = 8;
      }
      else {
        v28 = 36;
      }
      if (v24 >= v27) {
        v29 = 8;
      }
      else {
        v29 = 36;
      }
      if (v22 != 0) {
        v30 = v28;
      }
      else {
        v30 = v29;
      }
      v31 = *(_DWORD*)(a1 + v30);
      *(_BYTE*)(a1 + 30) = 0;
      *(_DWORD*)(a1 + 8) = v31;
      (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
    }
    if (a2 != 0) {
      v32 = *(unsigned __int8*)(a1 + 56);
      v33 = *(_QWORD*)(a1 + 64);
      if ((v32 & 1) == 0) {
        v33 = v32 >> 1;
      }
      if (v33 != 0) {
        v34 = (v32 & 1) != 0 ? *(_QWORD*)(a1 + 72) : a1 + 57;
        if (v34 != 0) {
          snd_Fade_Fade_10c830(v39, 0.0f);
          snd_play_ff2d0((void*)(v38), v34, v34, v39, 0, 65537, 0, 0.0f, 1.0f);
          snd_Fade_Destroy_Fade(v39);
        }
      }
    }
    if (*(_BYTE*)(a1 + 30) == 1 && (*(_BYTE*)(a1 + 48) & 1) == 0) {
      v35 = *(unsigned __int8*)(a1 + 104);
      v36 = *(_QWORD*)(a1 + 112);
      if ((v35 & 1) == 0) {
        v36 = v35 >> 1;
      }
      if (v36 != 0) {
        if ((v35 & 1) != 0) {
          v37 = *(_QWORD*)(a1 + 120);
        }
        else {
          v37 = a1 + 105;
        }
        if (v37 != 0) {
          snd_Fade_Fade_10c830(v39, 0.0f);
          snd_play_ff2d0((void*)(v38), v37, v37, v39, 0, 65537, 0, 0.0f, 1.0f);
          snd_Fade_Destroy_Fade(v39);
        }
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v9 = (**(__int64 (***)(__int64))a1)(a1);
  }
  else {
    v9 = 0;
  }
  return v9 & 1;
}

unsigned __int64 GaugeUtil_1750620()
{
  unsigned int v0;
  unsigned int v1;
  unsigned __int64 v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  signed int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;

  v0 = 0;
  v1 = 0;
  v2 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v2 >= 12) {
    v3 = 12;
  }
  else {
    v3 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  }
  while ((int)v2 >= 1) {
    v8 = *(_DWORD*)(GameData_21d99a8 - 4 + 4LL * v3);
    v9 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v2 - 1));
    v10 = 0;
    if (v9 >= v8) {
      v9 = *(_DWORD*)(GameData_21d99a8 - 4 + 4LL * v3);
    }
    if (v8 >= *(_DWORD*)GameData_21d99a8) {
      v11 = v9;
    }
    else {
      v11 = *(_DWORD*)GameData_21d99a8;
    }
    v12 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    while (1) {
      v13 = (unsigned int)(v10 + v12) >> 1;
      v14 = *(_DWORD*)(GameData_21d99a8 + 4LL * v13);
      if (v11 == v14) {
        break;
      }
      if (v11 < v14) {
        v12 = (unsigned int)(v10 + v12) >> 1;
      }
      else {
        v10 = v13 + 1;
      }
      if (v10 >= v12) {
        goto LABEL_23;
      }
    }
    if (v0 >= (unsigned __int8)(v13 + 1)) {
      return v1 / 0xAuLL;
    }
  LABEL_26:
    if ((int)v0 >= (int)v2) {
      v15 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    }
    else {
      v15 = v0;
    }
    if (v0 != 0) {
      v16 = v15;
    }
    else {
      v16 = 1;
    }
    if (v16 == (_DWORD)v2) {
      v4 = 0;
    }
    else {
      v4 = *(_DWORD*)(GameData_21d99a8 + 4LL * v16);
    }
    v5 = v15 - 1;
    if (v0++ == 0) {
      v5 = 0;
    }
    v7 = v4 - *(_DWORD*)(GameData_21d99a8 + 4LL * v5);
    if (v7 > (int)v1) {
      v1 = v7;
    }
  }
  LOBYTE(v10) = 0;
LABEL_23:
  if (v0 < (unsigned __int8)v10) {
    goto LABEL_26;
  }
  return v1 / 0xAuLL;
}

bool GaugeUtil_MasteryExpChange_Unknown7(__int64 a1)
{
  unsigned __int64 v2;
  int v3;
  unsigned int v4;
  int v5;
  int v6;
  signed int v7;
  unsigned int v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  bool v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  __int64 v22;
  _BOOL4 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  void (*v35)(__int64, __int64, long double);
  _QWORD v37[2];
  __int64 v38;
  __int64 v39;
  _QWORD v40[2];

  v2 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v2 < 1) {
    v4 = 0;
  }
  else {
    v3 = *(_DWORD*)(a1 + 8);
    v4 = 0;
    v5 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v2 - 1));
    if (v5 >= v3) {
      v5 = *(_DWORD*)(a1 + 8);
    }
    if (v3 >= *(_DWORD*)GameData_21d99a8) {
      v6 = v5;
    }
    else {
      v6 = *(_DWORD*)GameData_21d99a8;
    }
    v7 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    while (1) {
      v8 = (v4 + v7) >> 1;
      v9 = *(_DWORD*)(GameData_21d99a8 + 4LL * v8);
      if (v6 == v9) {
        break;
      }
      if (v6 < v9) {
        v7 = (v4 + v7) >> 1;
      }
      else {
        v4 = v8 + 1;
      }
      if ((int)v4 >= v7) {
        goto LABEL_16;
      }
    }
    v4 = v8 + 1;
  }
LABEL_16:
  v10 = *(unsigned __int8*)(a1 + 24);
  v11 = *(_QWORD*)(a1 + 136);
  if (v10 >= (int)v2) {
    v12 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  }
  else {
    v12 = v10;
  }
  v13 = v10 == 0;
  v14 = v10 + 1;
  v15 = v12 - 1;
  if (v13) {
    v15 = 0;
  }
  if ((unsigned __int8)v14 < (int)v2) {
    LODWORD(v2) = (unsigned __int8)v14;
  }
  v16 = (int)v2 - 1;
  if ((unsigned __int8)v14 != v14) {
    v16 = 0;
  }
  if (v11 == 0) {
    return false;
  }
  v17 = *(_DWORD*)(GameData_21d99a8 + 4 * v15);
  v18 = *(_DWORD*)(GameData_21d99a8 + 4 * v16);
  if ((v19 = std___1___shared_weak_count_lock(v11)) == 0) {
    return false;
  }
  v21 = *(_QWORD*)(a1 + 128);
  v22 = v19;
  v23 = v21 != 0;
  if (v21 != 0) {
    if ((*(unsigned __int8*)(a1 + 144) | 2) == 0xB) {
      v24 = *(_QWORD*)(a1 + 152) + 1744LL;
      LODWORD(v38) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                                game_g_shared_system_skills_ptr) &
                     0xFFF;
      v25 = game_HasSkill(v24, &v38) ^ 1;
    }
    else {
      v25 = 1;
    }
    v26 = ui_LayoutAccessor_FindPane(v21, "IconMastery");
    if (v26 != 0) {
      v26 = __dynamic_cast(v26, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841190(v26, *(unsigned __int8*)(a1 + 144));
    if ((v25 & 1) == 0) {
      v4 = 0;
    }
    v27 = ui_LayoutAccessor_FindPane(v21, "IconMasteryLv");
    if (v27 != 0) {
      v27 = __dynamic_cast(v27, GameData_212d670[0], GameData_212d678[0], 0);
      if (v27 != 0) {
        v28 = v27;
        v29 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
        v30 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v27 + 88LL))(v27, 0);
        if (v30 != 0) {
          *(_DWORD*)(v30 + 12) = v29;
        }
        v27 = v28;
      }
    }
    GameRoutine_1841470(v27, v4);
    ui_LayoutAccessor_SetPaneVisible(v21, "L_Gauge", v25 & 1);
    LayoutAccessor_1560070((void*)(v40), v21, "L_Gauge");
    GameRoutine_174dd80(a1, v40, v17, v18);
    if (v40[1] != 0) {
      std___1___shared_weak_count___release_weak_alt1();
    }
    if (*(_BYTE*)(a1 + 28) == 1) {
      ui_LayoutAccessor_SetPaneVisible(v21, "T_Next", 0);
      ui_LayoutAccessor_SetPaneVisible(v21, "T_NumNext", 0);
      ui_LayoutAccessor_SetPaneVisible(v21, "T_Max", 1);
    }
    else {
      ui_LayoutAccessor_SetPaneVisible(v21, "T_Next", 1);
      ui_LayoutAccessor_SetPaneVisible(v21, "T_NumNext", 1);
      ui_LayoutAccessor_SetPaneVisible(v21, "T_Max", 0);
      v31 = ui_LayoutAccessor_FindPane(v21, "T_NumNext");
      if (v31 != 0) {
        v32 = __dynamic_cast(v31, GameData_212d670[0], GameData_212d690, 0);
        if (v32 != 0) {
          GameRoutine_156c910(v32, "%d", 1);
        }
      }
    }
    if ((v25 & 1) == 0) {
      ui_LayoutAccessor_SetPaneVisible(v21, "T_Next", 0);
      ui_LayoutAccessor_SetPaneVisible(v21, "T_NumNext", 0);
      ui_LayoutAccessor_SetPaneVisible(v21, "T_Max", 0);
    }
    v37[0] = "L_LvUP";
    v37[1] = 6;
    GameRoutine_1114920((void*)(&v38), v21, v37);
    if (v39 != 0) {
      v33 = std___1___shared_weak_count_lock(v39);
      v34 = v38;
      if (v39 != 0) {
        *(__n128*)&v20 = std___1___shared_weak_count___release_weak_alt1();
      }
      if (v33 != 0 && v34 != 0) {
        v35 = *(void (**)(__int64, __int64, long double))(*(_QWORD*)v34 + 40LL);
        if (((unsigned __int8)v25 & *(_BYTE*)(a1 + 29) & 1) != 0) {
          v35(v34, 1, v20);
          if (*(_BYTE*)(a1 + 30) == 1) {
            BlnPopup_19f25b0(v34, v20);
          }
        }
        else {
          v35(v34, 0, v20);
        }
        goto LABEL_61;
      }
      if (v33 != 0) {
      LABEL_61:
        if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          *(__n128*)&v20 = std___1___shared_weak_count___release_weak_alt1();
        }
      }
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v22 + 16LL))(v22, v20);
    std___1___shared_weak_count___release_weak_alt1();
  }
  return v23;
}

__int64 GaugeUtil_MasteryExpChangeSmall_Unknown7(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  long double v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  char v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  unsigned __int64 v19;
  int v20;
  bool v21;
  int v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  _QWORD v29[2];
  int v30;

  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v5 = *(_QWORD*)(a1 + 128);
      v6 = v3;
      if (v5 != 0) {
        LayoutAccessor_155e830(*(_QWORD*)(a1 + 128), 1);
        v7 = *(unsigned __int8*)(a1 + 144);
        if (((unsigned int)v7 | 2) == 0xB) {
          v8 = *(_QWORD*)(a1 + 152) + 1744LL;
          v30 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                           game_g_shared_system_skills_ptr) &
                0xFFF;
          v9 = game_HasSkill(v8, &v30);
          v7 = *(unsigned __int8*)(a1 + 144);
          v10 = v9;
        }
        else {
          v10 = 0;
        }
        Util_1580bf0(v5, *(_QWORD*)(a1 + 152), v7, (v10 & 1) == 0, 0, 0,
                     v10 & 1, 0);
        v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
        if ((v10 & 1) != 0) {
          v12 = 0;
        }
        else {
          v12 = v11;
        }
        v13 = ui_LayoutAccessor_FindPane(v5, "IconMasteryLv");
        if (v13 != 0) {
          v13 =
              __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
          v14 = 36;
          if ((v10 & 1) != 0) {
            v14 = 72;
          }
          if (v13 != 0) {
            v15 = v13;
            v16 = *(_DWORD*)((char*)GameData_212da30 + v14);
            v17 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v13 + 88LL))(v13,
                                                                           0);
            if (v17 != 0) {
              *(_DWORD*)(v17 + 12) = v16;
            }
            v13 = v15;
          }
        }
        GameRoutine_1841470(v13, v12);
        v18 = *(unsigned __int8*)(a1 + 24);
        v19 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        if (v18 >= (int)v19) {
          v20 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        }
        else {
          v20 = *(unsigned __int8*)(a1 + 24);
        }
        v21 = v18 == 0;
        v22 = v18 + 1;
        v23 = v20 - 1;
        if (v21) {
          v23 = 0;
        }
        v24 = *(_DWORD*)(GameData_21d99a8 + 4 * v23);
        if ((unsigned __int8)v22 < (int)v19) {
          LODWORD(v19) = (unsigned __int8)v22;
        }
        v25 = (int)v19 - 1;
        if ((unsigned __int8)v22 == v22) {
          v26 = v25;
        }
        else {
          v26 = 0;
        }
        v27 = *(_DWORD*)(GameData_21d99a8 + 4 * v26);
        LayoutAccessor_1560070((void*)(v29), v5, "L_Gauge");
        GameRoutine_174dd80(a1, v29, v24, v27);
        if (v29[1] != 0) {
          *(__n128*)&v4 = std___1___shared_weak_count___release_weak_alt1();
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(v6, v4);
        std___1___shared_weak_count___release_weak_alt1();
      }
    }
  }
  return 0;
}

__int64 GaugeUtil_17512a0(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v9;
  char v10;
  char v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  int v25;
  float v26;
  float v27;
  float v28;
  int v29;
  int v30;
  float v31;
  float* v32;
  float v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  long double v41;
  char v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  int v49;
  float v50;
  float v51;
  int v52;
  float v53;
  float* v54;
  int v55;
  float v56;
  bool v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  char v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  long double v84;
  __int64 v85;
  __int64 v86;
  int v87;
  _DWORD* v88;
  int v89;
  unsigned int v90;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned int v97;
  __int64 v98;
  long double v99;
  __int64 v100;
  unsigned int v101;
  long double v102;
  unsigned int v103;
  __int64 v104;
  __int64 v105;
  long double v106;
  float v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  float v111;
  __int64 v112;
  _QWORD v113[2];
  const char* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  _BYTE v118[44];

  if (*(_BYTE*)(a1 + 49) != 1) {
    return 0;
  }
  *(_QWORD*)&v118[4] = v6;
  *(_QWORD*)&v118[12] = v5;
  *(_QWORD*)&v118[20] = v4;
  *(_QWORD*)&v118[28] = v2;
  *(_QWORD*)&v118[36] = v3;
  v9 = (**(__int64 (***)(__int64))a1)(a1);
  if (a2 == 0 || (v9 & 1) != 0) {
    v12 = (**(__int64 (***)(__int64))a1)(a1);
    v13 = 0.0;
    if ((v12 & 1) != 0) {
      if (a2 == 1) {
        v14 = *(float*)(a1 + 40);
        v15 = *(float*)(a1 + 44);
        v16 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                      0x1.0aef000000000p+4) /
              0x1.f400000000000p+9;
        if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) !=
            0) {
          v16 = v16 * 8.0;
        }
        v17 = v15 + v16;
        if (v14 >= v17) {
          v18 = v17;
        }
        else {
          v18 = *(float*)(a1 + 40);
        }
        if (v17 >= 0.0) {
          v19 = v18;
        }
        else {
          v19 = 0.0;
        }
        v21 = *(float*)(a1 + 16);
        v20 = *(_DWORD*)(a1 + 20);
        *(float*)(a1 + 44) = v19;
        v22 = (float)v20;
        v23 = GameRoutine_618640(4, 0.0, (float)v20, v19, v14);
        v24 = *(float*)(a1 + 16);
        v25 = *(unsigned __int8*)(a1 + 48);
        *(float*)(a1 + 44) = v15;
        v13 = v23 - (float)(v22 - v24);
        if (v13 >= v21) {
          v26 = v13;
        }
        else {
          v26 = v21;
        }
        if (v21 < v13) {
          v13 = v21;
        }
        if (v25 != 0) {
          v13 = v26;
        }
      }
      else if (a2 == 2) {
        v13 = *(float*)(a1 + 16);
      }
    }
    v27 = *(float*)(a1 + 16);
    v28 = *(float*)(a1 + 32);
    v29 = *(_DWORD*)(a1 + 8);
    v30 = *(unsigned __int8*)(a1 + 48);
    v31 = v27 - v13;
    *(float*)(a1 + 16) = v27 - v13;
    if (v30 == 1) {
      v32 = (float*)&v116;
      LODWORD(v116) = 0;
      if (v31 < 0.0) {
        v32 = (float*)(a1 + 16);
      }
    }
    else {
      v32 = (float*)&v116;
      LODWORD(v116) = 0;
      if (v31 > 0.0) {
        v32 = (float*)(a1 + 16);
      }
    }
    v33 = *v32;
    v34 = *(_DWORD*)(a1 + 36);
    v35 = *(_QWORD*)(a1 + 144);
    v36 = (int)(float)(v13 + v28);
    if (v33 == 0.0) {
      v36 = *(_DWORD*)(a1 + 36);
    }
    *(_DWORD*)(a1 + 8) = v36;
    if (v36 >= v34) {
      v37 = 8;
    }
    else {
      v37 = 36;
    }
    if (v34 >= v36) {
      v38 = 8;
    }
    else {
      v38 = 36;
    }
    if (v30 != 0) {
      v39 = v37;
    }
    else {
      v39 = v38;
    }
    v40 = *(_DWORD*)(a1 + v39);
    *(float*)(a1 + 16) = v27;
    *(_DWORD*)(a1 + 8) = v29;
    GameRoutine_90c6c0(v35, (unsigned int)(v40 - v29));
    if (*(_BYTE*)(a1 + 49) == 1) {
      v42 = (**(__int64 (***)(__int64))a1)(a1);
      v43 = 0.0;
      if ((v42 & 1) != 0) {
        if (a2 == 1) {
          v44 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                        0x1.0aef000000000p+4) /
                0x1.f400000000000p+9;
          if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) !=
              0) {
            v44 = v44 * 8.0;
          }
          v45 = *(float*)(a1 + 40);
          v46 = *(float*)(a1 + 44) + v44;
          if (v45 >= v46) {
            v47 = v46;
          }
          else {
            v47 = *(float*)(a1 + 40);
          }
          if (v46 >= 0.0) {
            v48 = v47;
          }
          else {
            v48 = 0.0;
          }
          v50 = *(float*)(a1 + 16);
          v49 = *(_DWORD*)(a1 + 20);
          *(float*)(a1 + 44) = v48;
          v43 = GameRoutine_618640(4, 0.0, (float)v49, v48, v45) -
                (float)((float)v49 - *(float*)(a1 + 16));
          if (v43 >= v50) {
            v51 = v43;
          }
          else {
            v51 = v50;
          }
          if (v50 < v43) {
            v43 = v50;
          }
          if (*(_BYTE*)(a1 + 48) != 0) {
            v43 = v51;
          }
        }
        else if (a2 == 2) {
          v43 = *(float*)(a1 + 16);
        }
      }
      v52 = *(unsigned __int8*)(a1 + 48);
      v53 = *(float*)(a1 + 16) - v43;
      *(float*)(a1 + 16) = v53;
      if (v52 == 1) {
        v54 = (float*)&v116;
        LODWORD(v116) = 0;
        if (v53 < 0.0) {
          v54 = (float*)(a1 + 16);
        }
      }
      else {
        v54 = (float*)&v116;
        LODWORD(v116) = 0;
        if (v53 > 0.0) {
          v54 = (float*)(a1 + 16);
        }
      }
      v55 = *(_DWORD*)(a1 + 36);
      v56 = v43 + *(float*)(a1 + 32);
      v57 = *v54 == 0.0;
      *(float*)(a1 + 16) = *v54;
      v58 = (int)v56;
      *(float*)(a1 + 32) = v56;
      if (v57) {
        v58 = v55;
      }
      *(_DWORD*)(a1 + 8) = v58;
      if (v58 >= v55) {
        v59 = 8;
      }
      else {
        v59 = 36;
      }
      if (v55 >= v58) {
        v60 = 8;
      }
      else {
        v60 = 36;
      }
      if (v52 != 0) {
        v61 = v59;
      }
      else {
        v61 = v60;
      }
      v62 = *(_DWORD*)(a1 + v61);
      *(_BYTE*)(a1 + 30) = 0;
      *(_DWORD*)(a1 + 8) = v62;
      (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
    }
    if (a2 != 0) {
      v63 = *(unsigned __int8*)(a1 + 56);
      v64 = *(_QWORD*)(a1 + 64);
      if ((v63 & 1) == 0) {
        v64 = v63 >> 1;
      }
      if (v64 != 0) {
        v65 = (v63 & 1) != 0 ? *(_QWORD*)(a1 + 72) : a1 + 57;
        if (v65 != 0) {
          snd_Fade_Fade_10c830(&v116, 0.0);
          snd_play_ff2d0((void*)(&v114), v65, v65, &v116, 0, 65537, 0, 0.0,
                         1.0);
          snd_Fade_Destroy_Fade(&v116);
        }
      }
      v66 = *(_QWORD*)(a1 + 136);
      if (v66 != 0) {
        v67 = std___1___shared_weak_count_lock(v66);
        if (v67 != 0) {
          v68 = *(_QWORD*)(a1 + 128);
          v69 = v67;
          if (v68 != 0) {
            v70 = ui_LayoutAccessor_FindTextBox(*(_QWORD*)(a1 + 128),
                                                "T_NumNext");
            if (v70 != 0) {
              v71 = v70;
              v72 = ui_LayoutAccessor_FindTextBox(v68, "T_NumNext");
              if (v72 != 0) {
                GameRoutine_190a0c0(&v116, &v114, v118, v72,
                                    *(_QWORD*)(v72 + 216));
                v73 = HIDWORD(v114);
                LODWORD(v41) = (_DWORD)v114;
              }
              else {
                *(_QWORD*)&v41 = 0;
                v73 = 0;
              }
              v74 = *(_BYTE*)(v71 + 88);
              *(_DWORD*)(v71 + 80) = LODWORD(v41);
              *(_DWORD*)(v71 + 84) = v73;
              *(_BYTE*)(v71 + 88) = v74 | 0x10;
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
            *(__n128*)&v41 = std___1___shared_weak_count___release_weak_alt1();
          }
        }
      }
    }
    if (*(_BYTE*)(a1 + 30) == 1 && (*(_BYTE*)(a1 + 48) & 1) == 0) {
      v75 = *(unsigned __int8*)(a1 + 104);
      v76 = *(_QWORD*)(a1 + 112);
      if ((v75 & 1) == 0) {
        v76 = v75 >> 1;
      }
      if (v76 != 0) {
        v77 = (v75 & 1) != 0 ? *(_QWORD*)(a1 + 120) : a1 + 105;
        if (v77 != 0) {
          snd_Fade_Fade_10c830(&v116, 0.0);
          snd_play_ff2d0((void*)(&v114), v77, v77, &v116, 0, 65537, 0, 0.0,
                         1.0);
          snd_Fade_Destroy_Fade(&v116);
        }
      }
    }
    v78 = *(_QWORD*)(a1 + 136);
    if (v78 == 0) {
      goto LABEL_173;
    }
    v79 = std___1___shared_weak_count_lock(v78);
    if (v79 == 0) {
      goto LABEL_173;
    }
    v80 = *(_QWORD*)(a1 + 128);
    v81 = v79;
    if (v80 == 0) {
    LABEL_171:
      if (atomic_fetch_add((atomic_ullong* volatile)(v81 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v81 + 16LL))(v81, v41);
        *(__n128*)&v41 = std___1___shared_weak_count___release_weak_alt1();
      }
    LABEL_173:
      v10 = (**(__int64 (***)(__int64, long double))a1)(a1, v41);
      return v10 & 1;
    }
    if (*(_BYTE*)(a1 + 30) == 1) {
      v82 = *(_QWORD*)(a1 + 128);
      v114 = "L_LvUP";
      v115 = 6;
      GameRoutine_1114920((void*)(&v116), v82, &v114);
      if (v117 != 0) {
        v83 = std___1___shared_weak_count_lock(v117);
        v85 = v116;
        if (v117 != 0) {
          *(__n128*)&v84 = std___1___shared_weak_count___release_weak_alt1();
        }
        if (v83 != 0 && v85 != 0) {
          BlnPopup_19f25b0(v85, v84);
        }
        else if (v83 == 0) {
          goto LABEL_123;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
          std___1___shared_weak_count___release_weak_alt1();
        }
      }
    }
  LABEL_123:
    v86 = *(_QWORD*)(a1 + 144);
    v87 = *(_DWORD*)(v86 + 4);
    v88 = *(_DWORD**)(*(_QWORD*)(v86 + 16) + 24LL);
    v89 = v88[105];
    v90 = v88[103];
    if (v89 > 2 && (int)v90 <= v87) {
      if ((unsigned int)v89 <= 3) {
        goto LABEL_148;
      }
      v95 = 4;
    }
    else {
      if (v89 <= 1 || v88[102] > v87) {
        if (v89 >= 1 && v88[101] <= v87) {
          v94 = 1;
        }
        else {
          v94 = (int)v88[104];
        }
        v90 = v88[v94 + 100];
        if (v89 < 1 || v88[101] > v87) {
          v96 = (int)v88[104];
          if ((int)v96 < v89) {
            v95 = v96 + 1;
            goto LABEL_147;
          }
        }
        else if ((unsigned int)v89 > 1) {
          v95 = 2;
          goto LABEL_147;
        }
      LABEL_148:
        v97 = 0;
      LABEL_149:
        v114 = "L_NumLv";
        v115 = 7;
        GameRoutine_9d5180((void*)(&v116), v80, &v114);
        if (v117 != 0) {
          v98 = std___1___shared_weak_count_lock(v117);
          v100 = v116;
          if (v117 != 0) {
            *(__n128*)&v99 = std___1___shared_weak_count___release_weak_alt1();
          }
          if (v98 != 0 && v100 != 0) {
            v101 = GameRoutine_90c8d0(*(_QWORD*)(a1 + 144), v99);
            v103 = GameRoutine_90c8d0(*(_QWORD*)(a1 + 144), v102);
            StatusNum_1890220(
                v100, v101, v103,
                *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 144) +
                                                       16LL) +
                                            24LL) +
                                 420LL),
                1, 0, 0xFFFFFFFFLL);
            StatusNum_1890ac0(v100, 1);
            goto LABEL_156;
          }
          if (v98 != 0) {
          LABEL_156:
            if (atomic_fetch_add((atomic_ullong* volatile)(v98 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98);
              std___1___shared_weak_count___release_weak_alt1();
            }
          }
        }
        if (*(_BYTE*)(a1 + 28) == 1) {
          ui_LayoutAccessor_SetPaneVisible(v80, "T_Next", 0);
          ui_LayoutAccessor_SetPaneVisible(v80, "T_NumNext", 0);
          ui_LayoutAccessor_SetPaneVisible(v80, "T_Max", 1);
          v104 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 144) + 16LL) + 24LL);
          v105 = v104 + 4LL * *(int*)(v104 + 420);
          v90 = *(_DWORD*)(v105 + 396);
          v97 = *(_DWORD*)(v105 + 400);
        }
        else {
          ui_LayoutAccessor_SetPaneVisible(v80, "T_Next", 1);
          ui_LayoutAccessor_SetPaneVisible(v80, "T_NumNext", 1);
          ui_LayoutAccessor_SetPaneVisible(v80, "T_Max", 0);
          v106 = ui_LayoutAccessor_GetPaneSize(v80, "T_NumNext");
          v107 = *(float*)&v106;
          v108 = ui_LayoutAccessor_FindPane(v80, "T_NumNext");
          if (v108 != 0) {
            v109 =
                __dynamic_cast(v108, GameData_212d670[0], GameData_212d690, 0);
            if (v109 != 0) {
              GameRoutine_156c910(v109, "%d", 1);
            }
          }
          v110 = ui_LayoutAccessor_FindTextBox(v80, "T_NumNext");
          if (v110 != 0) {
            GameRoutine_190a0c0(&v116, &v114, v118, v110,
                                *(_QWORD*)(v110 + 216));
            v111 = *(float*)&v114;
          }
          else {
            v111 = 0.0;
          }
          if (v111 > v107) {
            ui_LayoutAccessor_FitPaneSizeToText(v80, "T_NumNext");
            v112 = ui_LayoutAccessor_FindAlignment(v80, "A_Next");
            if (v112 != 0) {
              Alignment_56b600(v112);
            }
          }
        }
        LayoutAccessor_1560070((void*)(v113), v80, "L_Gauge");
        GameRoutine_174dd80(a1, v113, v90, v97);
        if (v113[1] != 0) {
          *(__n128*)&v41 = std___1___shared_weak_count___release_weak_alt1();
        }
        goto LABEL_171;
      }
      v90 = v88[102];
      if ((unsigned int)v89 <= 2) {
        goto LABEL_148;
      }
      v95 = 3;
    }
  LABEL_147:
    v97 = v88[v95 + 100];
    goto LABEL_149;
  }
  v10 = 0;
  return v10 & 1;
}

__int64 GaugeUtil_1752580(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v8;
  char v9;
  char v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  int v18;
  float v19;
  float v20;
  float* v21;
  int v22;
  float v23;
  int v24;
  float v25;
  bool v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  _DWORD v36[50];
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  if (*(_BYTE*)(a1 + 49) != 1) {
    return 0;
  }
  v37 = v5;
  v38 = v4;
  v39 = v2;
  v40 = v3;
  v8 = (**(__int64 (***)(__int64))a1)(a1);
  if (a2 == 0 || (v8 & 1) != 0) {
    if (*(_BYTE*)(a1 + 49) == 1) {
      v11 = (**(__int64 (***)(__int64))a1)(a1);
      v12 = 0.0f;
      if ((v11 & 1) != 0) {
        if (a2 == 1) {
          v13 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f;
          if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
            v13 = v13 * 8.0f;
          }
          v14 = *(float*)(a1 + 40);
          v15 = *(float*)(a1 + 44) + v13;
          if (v14 >= v15) {
            v16 = v15;
          }
          else {
            v16 = *(float*)(a1 + 40);
          }
          if (v15 >= 0.0f) {
            v17 = v16;
          }
          else {
            v17 = 0.0f;
          }
          v19 = *(float*)(a1 + 16);
          v18 = *(_DWORD*)(a1 + 20);
          *(float*)(a1 + 44) = v17;
          v12 = GameRoutine_618640(4, 0.0f, (float)v18, v17, v14) -
                (float)((float)v18 - *(float*)(a1 + 16));
          if (v12 >= v19) {
            v20 = v12;
          }
          else {
            v20 = v19;
          }
          if (v19 < v12) {
            v12 = v19;
          }
          if (*(_BYTE*)(a1 + 48) != 0) {
            v12 = v20;
          }
        }
        else if (a2 == 2) {
          v12 = *(float*)(a1 + 16);
        }
      }
      v21 = (float*)(a1 + 16);
      v22 = *(unsigned __int8*)(a1 + 48);
      v23 = *(float*)(a1 + 16) - v12;
      *(float*)(a1 + 16) = v23;
      if (v22 == 1) {
        v36[0] = 0;
        if (v23 >= 0.0f) {
          v21 = (float*)v36;
        }
      }
      else {
        v36[0] = 0;
        if (v23 <= 0.0f) {
          v21 = (float*)v36;
        }
      }
      v24 = *(_DWORD*)(a1 + 36);
      v25 = v12 + *(float*)(a1 + 32);
      v26 = *v21 == 0.0f;
      *(float*)(a1 + 16) = *v21;
      v27 = (int)v25;
      *(float*)(a1 + 32) = v25;
      if (v26) {
        v27 = v24;
      }
      *(_DWORD*)(a1 + 8) = v27;
      if (v27 >= v24) {
        v28 = 8;
      }
      else {
        v28 = 36;
      }
      if (v24 >= v27) {
        v29 = 8;
      }
      else {
        v29 = 36;
      }
      if (v22 != 0) {
        v30 = v28;
      }
      else {
        v30 = v29;
      }
      v31 = *(_DWORD*)(a1 + v30);
      *(_BYTE*)(a1 + 30) = 0;
      *(_DWORD*)(a1 + 8) = v31;
      (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
    }
    if (a2 != 0) {
      v32 = *(unsigned __int8*)(a1 + 56);
      v33 = *(_QWORD*)(a1 + 64);
      if ((v32 & 1) == 0) {
        v33 = v32 >> 1;
      }
      if (v33 != 0) {
        if ((v32 & 1) != 0) {
          v34 = *(_QWORD*)(a1 + 72);
        }
        else {
          v34 = a1 + 57;
        }
        if (v34 != 0) {
          snd_Fade_Fade_10c830(v36, 0.0f);
          snd_play_ff2d0((void*)(&v35), v34, v34, v36, 0, 65537, 0, 0.0f, 1.0f);
          snd_Fade_Destroy_Fade(v36);
        }
      }
    }
    BauquetHPChange_1752840(a1);
    v9 = (**(__int64 (***)(__int64))a1)(a1);
  }
  else {
    v9 = 0;
  }
  return v9 & 1;
}

__int64 GaugeUtil_17530b0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_MasteryExpChange_vtable;
  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
  return result;
}

__int64 GaugeUtil_17535a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  *(_QWORD*)result = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(result + 104) & 1) != 0) {
    v2 = *(_QWORD*)(result + 120);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(v1 + 80) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 96);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if ((*(_BYTE*)(v1 + 56) & 1) != 0) {
    v6 = *(_QWORD*)(v1 + 72);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
