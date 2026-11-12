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
__attribute__((swiftcall)) void
GameRoutine_1114920_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_1114920");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void
game_80c770_alt1(PSEUDO_X8, __int64 result) __asm__("game_80c770");
__int64
BauquetHPChange_1752840_alt1(__int64) __asm__("BauquetHPChange_1752840");
__int64 BlnPopup_19f25b0_alt1(__int64*) __asm__("BlnPopup_19f25b0");
__int64 GameRoutine_157c220_alt1(__int64*, int, int, char,
                                 char) __asm__("GameRoutine_157c220");
__int64 GameRoutine_1627860_alt1(__int64 result) __asm__("GameRoutine_1627860");
__int64 GameRoutine_174dd80_alt1(__int64 result, __int64*, int,
                                 int) __asm__("GameRoutine_174dd80");
__int64 GameRoutine_174dd80_alt2(__int64 result, __int64, int,
                                 int) __asm__("GameRoutine_174dd80");
__int64
GameRoutine_1841190_alt1(__int64,
                         unsigned __int8) __asm__("GameRoutine_1841190");
__int64
GameRoutine_1841470_alt1(__int64,
                         unsigned __int8) __asm__("GameRoutine_1841470");
__int64 GameRoutine_1841fc0_alt1(__int64, int) __asm__("GameRoutine_1841fc0");
__int64 ProcPopup_1736c50_alt1(__int64 result, __int64*, __int64,
                               int*) __asm__("ProcPopup_1736c50");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
float GameRoutine_618640_alt1(int, float result, float, float,
                              float) __asm__("GameRoutine_618640");
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64* RelianceExpChange_174e380(__int64*, __int64*, __int64*, __int64*);
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 game_GameModeData_instance_;
extern int GameData_21f8110;
extern int GameData_21f8130;
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 GaugeUtil_RelianceExpChange_Unknown6(__int64 result);
__int64 GaugeUtil_RelianceExpChange_Unknown2(__int64 result);
__int64 GaugeUtil_AnimalExpChangeUtil_Unknown6(__int64 result);
__int64 GaugeUtil_AnimalExpChangeUtil_Unknown2(__int64 result);
__int64 GaugeUtil_174f240(__int64* a1, __int64* a2, signed int a3,
                          unsigned int a4);
__int64 GaugeUtil_1750b80(__int64 result);
__int64 GaugeUtil_1750d20(__int64 a1);
__int64 GaugeUtil_1751050(__int64* a1, __int64* a2, __int64 a3, unsigned int a4,
                          unsigned int a5);
__int64 GaugeUtil_MiracleExpChange_Unknown6(__int64 result);
__int64 GaugeUtil_MiracleExpChange_Unknown2(__int64 a1);
__int64 GaugeUtil_UnitExpChangeUtil_Unknown6(__int64 result);
__int64 GaugeUtil_ClassExpChangeUtil_Unknown5(__int64 a1);
__int64 GaugeUtil_ClassExpChangeUtil_Unknown6(__int64 result);

__int64 GaugeUtil_174e4e0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
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
  int v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  unsigned __int64 v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  unsigned int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  bool v66;
  int v67;
  int v68;
  int v69;
  int v70;
  __int64 v71;
  struct {
    __int64 v72;
    __int64 v73;
  } v72_;
  __int64 v74[2];
  int v75[4];
  __int64* v76[29];

  if (*(_BYTE*)(a1 + 49) != 1) {
    return 0;
  }
  v76[25] = v5;
  v76[26] = v4;
  v76[27] = v2;
  v76[28] = v3;
  v8 = (**(__int64 (***)(__int64))a1)(a1);
  if (a2 == 0 || (v8 & 1) != 0) {
    if (*(_BYTE*)(a1 + 49) == 1) {
      v11 = (**(__int64 (***)(__int64))a1)(a1);
      v12 = 0x0.0p+0f;
      if ((v11 & 1) != 0) {
        if (a2 == 1) {
          v13 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f;
          if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) !=
              0) {
            v13 = v13 * 0x1.0000000000000p+3f;
          }
          v14 = *(float*)(a1 + 40);
          v15 = *(float*)(a1 + 44) + v13;
          if (v14 >= v15) {
            v16 = v15;
          }
          else {
            v16 = *(float*)(a1 + 40);
          }
          if (v15 >= 0x0.0p+0f) {
            v17 = v16;
          }
          else {
            v17 = 0x0.0p+0f;
          }
          v19 = *(float*)(a1 + 16);
          v18 = *(_DWORD*)(a1 + 20);
          *(float*)(a1 + 44) = v17;
          v12 = GameRoutine_618640_alt1(4, 0x0.0p+0f, (float)v18, v17, v14) -
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
      v22 = *(_DWORD*)(a1 + 8);
      v23 = *(unsigned __int8*)(a1 + 48);
      v24 = *(float*)(a1 + 16) - v12;
      *(float*)(a1 + 16) = v24;
      if (v23 == 1) {
        LODWORD(v76[0]) = 0;
        if (v24 >= 0x0.0p+0f) {
          v21 = (float*)v76;
        }
      }
      else {
        LODWORD(v76[0]) = 0;
        if (v24 <= 0x0.0p+0f) {
          v21 = (float*)v76;
        }
      }
      v25 = *(_DWORD*)(a1 + 36);
      v26 = v12 + *(float*)(a1 + 32);
      v27 = *v21 == 0x0.0p+0f;
      *(float*)(a1 + 16) = *v21;
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
      if (a2 != 0) {
        v33 = *(_DWORD*)(a1 + 8) - v22;
        if (v33 < 1) {
          if (v33 < 0) {
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
              game_80c770_alt1((void*)((__int64)v76), v46);
            }
          }
        }
        else {
          v34 = *(unsigned __int8*)(a1 + 56);
          v35 = *(_QWORD*)(a1 + 64);
          if ((v34 & 1) == 0) {
            v35 = v34 >> 1;
          }
          if (v35 != 0) {
            if ((v34 & 1) != 0) {
              v36 = *(_QWORD*)(a1 + 72);
            }
            else {
              v36 = a1 + 57;
            }
            if (v36 != 0) {
              snd_Fade_Fade_10c830_alt1((__int64)v76, 0x0.0p+0f);
              snd_play_ff2d0_alt1(v36, v36, (__int64)v76, 0, 0x10001u, 0,
                                  0x0.0p+0f, 0x1.0000000000000p+0f);
              snd_Fade_Destroy_Fade_alt1(v76);
            }
            v37 = *(_QWORD*)(a1 + 168);
            if (v37 != 0) {
              v38 = std___1___shared_weak_count_lock_alt1(v37);
              if (v38 != 0) {
                if (*(_QWORD*)(a1 + 160) != 0) {
                  v39 = *(_BYTE*)(a1 + 176);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v40 = v38;
                    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
                    std___1___shared_weak_count___release_weak_alt2(v40);
                  }
                  if ((v39 & 1) == 0) {
                    v41 = *(_QWORD*)(a1 + 168);
                    v74[0] = *(_QWORD*)(a1 + 160);
                    v74[1] = v41;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v41 + 16), 1u,
                        memory_order_relaxed);
                    v42 = (__int64*)std___1___shared_weak_count_lock_alt1(
                        *(_QWORD*)(a1 + 168));
                    v76[0] = *(__int64**)(a1 + 160);
                    v76[1] = v42;
                    v43 = ui_LayoutAccessor_FindPane_alt1(v76[0],
                                                          (__int64)"N_Eff");
                    *(_QWORD*)v75 = 0;
                    ProcPopup_1736c50_alt1(0, v74, v43, v75);
                    GameRoutine_1627860_alt1((__int64)v76);
                    std___1___shared_weak_count___release_weak_alt2(v41);
                    *(_BYTE*)(a1 + 176) = 1;
                  }
                }
                else if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v47 = v38;
                  (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
                  std___1___shared_weak_count___release_weak_alt2(v47);
                }
              }
            }
          }
        }
      }
    }
    if (*(_BYTE*)(a1 + 30) == 1 && (*(_BYTE*)(a1 + 48) & 1) == 0) {
      v48 = *(unsigned __int8*)(a1 + 104);
      v49 = *(_QWORD*)(a1 + 112);
      if ((v48 & 1) == 0) {
        v49 = v48 >> 1;
      }
      if (v49 != 0) {
        v50 = (v48 & 1) != 0 ? *(_QWORD*)(a1 + 120) : a1 + 105;
        if (v50 != 0) {
          snd_Fade_Fade_10c830_alt1((__int64)v76, 0x0.0p+0f);
          snd_play_ff2d0_alt1(v50, v50, (__int64)v76, 0, 0x10001u, 0, 0x0.0p+0f,
                              0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(v76);
        }
      }
    }
    v51 = *(_QWORD*)(a1 + 152);
    if (v51 != 0) {
      v52 = std___1___shared_weak_count_lock_alt1(v51);
      if (v52 != 0) {
        v53 = *(__int64**)(a1 + 144);
        v54 = v52;
        if (v53 != nullptr) {
          v55 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
          if ((int)v55 < 1) {
            v57 = 0;
          }
          else {
            v56 = *(_DWORD*)(a1 + 8);
            v57 = 0;
            v58 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v55 - 1));
            if (v58 >= v56) {
              v58 = *(_DWORD*)(a1 + 8);
            }
            if (v56 >= (signed __int32)*(_DWORD*)GameData_21d99c8) {
              v59 = v58;
            }
            else {
              v59 = *(_DWORD*)GameData_21d99c8;
            }
            v60 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
            while (1) {
              v61 = (unsigned int)(v57 + v60) >> 1;
              v62 = *(_DWORD*)(GameData_21d99c8 + 4LL * v61);
              if (v59 == v62) {
                break;
              }
              if (v59 < v62) {
                v60 = (unsigned int)(v57 + v60) >> 1;
              }
              else {
                v57 = v61 + 1;
              }
              if (v57 >= v60) {
                goto LABEL_99;
              }
            }
            v57 = v61 + 1;
          }
        LABEL_99:
          v63 = *(_DWORD*)(a1 + 24);
          if (v63 >= (int)v55) {
            v64 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
          }
          else {
            v64 = *(_DWORD*)(a1 + 24);
          }
          if (v63 + 1 < (int)v55) {
            LODWORD(v55) = v63 + 1;
          }
          v65 = v64 - 1;
          v66 = v63 < 0;
          v67 = v55 - 1;
          if (v63 <= 0) {
            v68 = 0;
          }
          else {
            v68 = v65;
          }
          if (v66) {
            v67 = 0;
          }
          v69 = *(_DWORD*)(GameData_21d99c8 + 4LL * v68);
          v70 = *(_DWORD*)(GameData_21d99c8 + 4LL * v67);
          v71 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 144),
                                                (__int64)"Icon");
          if (v71 != 0) {
            v71 = __dynamic_cast(v71, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          GameRoutine_1841fc0_alt1(v71, v57);
          LayoutAccessor_1560070_alt1((void*)(&v72_.v72), v53, "L_Gauge");
          GameRoutine_174dd80_alt1(a1, &v72_.v72, v69, v70);
          if (v72_.v73 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v72_.v73);
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
          std___1___shared_weak_count___release_weak_alt2(v54);
        }
      }
    }
    v9 = (**(__int64 (***)(__int64))a1)(a1);
  }
  else {
    v9 = 0;
  }
  return v9 & 1;
}

__int64 GaugeUtil_RelianceExpChange_Unknown6(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;

  v1 = GameData_21d99c8;
  v2 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
  if ((int)v2 < 1) {
    v4 = 0;
  }
  else {
    v3 = *(_DWORD*)(result + 8);
    v4 = 0;
    v5 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v2 - 1));
    if (v5 >= v3) {
      v5 = *(_DWORD*)(result + 8);
    }
    if (v3 >= (signed __int32)*(_DWORD*)GameData_21d99c8) {
      v6 = v5;
    }
    else {
      v6 = *(_DWORD*)GameData_21d99c8;
    }
    v7 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
    while (1) {
      v8 = (unsigned int)(v4 + v7) >> 1;
      v9 = *(_DWORD*)(GameData_21d99c8 + 4LL * v8);
      if (v6 == v9) {
        break;
      }
      if (v6 < v9) {
        v7 = (unsigned int)(v4 + v7) >> 1;
      }
      else {
        v4 = v8 + 1;
      }
      if (v4 >= v7) {
        goto LABEL_16;
      }
    }
    v4 = v8 + 1;
  }
LABEL_16:
  v10 = v4 - *(_DWORD*)(result + 24);
  if (v10 != 0 && (*(_BYTE*)(result + 28) & 1) == 0) {
    *(_WORD*)(result + 29) = 257;
  }
  if (v4 >= (int)v2) {
    *(_DWORD*)(result + 16) = 0;
    *(_BYTE*)(result + 28) = 1;
    if (v10 >= 2) {
      if ((int)v2 <= 2) {
        v13 = 2;
      }
      else {
        v13 = v2;
      }
      *(_DWORD*)(result + 12) = *(_DWORD*)(v1 + 4LL * v13 - 8);
      if ((int)v2 <= 1) {
        v14 = 1;
      }
      else {
        v14 = v2;
      }
      *(_DWORD*)(result + 24) = v14 - 1;
    }
  }
  else {
    v11 = *(unsigned __int8*)(result + 30);
    *(_BYTE*)(result + 28) = 0;
    if (v11 == 1) {
      *(_DWORD*)(result + 24) = v4;
      if (v4 <= 1) {
        v12 = 1;
      }
      else {
        v12 = v4;
      }
      *(_DWORD*)(result + 12) = *(_DWORD*)(v1 + 4LL * v12 - 4);
    }
  }
  return result;
}

__int64 GaugeUtil_RelianceExpChange_Unknown2(__int64 result)
{
  unsigned __int64 v1;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;

  v1 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
  if ((int)v1 < 1) {
    return 0;
  }
  v2 = *(_DWORD*)(result + 8);
  LODWORD(result) = 0;
  v3 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v1 - 1));
  if (v3 >= v2) {
    v3 = v2;
  }
  if (v2 >= (signed __int32)*(_DWORD*)GameData_21d99c8) {
    v4 = v3;
  }
  else {
    v4 = *(_DWORD*)GameData_21d99c8;
  }
  while (1) {
    v5 = (unsigned int)(result + v1) >> 1;
    v6 = *(_DWORD*)(GameData_21d99c8 + 4LL * v5);
    if (v4 == v6) {
      break;
    }
    if (v4 >= v6) {
      result = v5 + 1;
    }
    else {
      result = (unsigned int)result;
    }
    if (v4 < v6) {
      LODWORD(v1) = v5;
    }
    if ((int)result >= (int)v1) {
      return result;
    }
  }
  return v5 + 1;
}

__int64 GaugeUtil_AnimalExpChangeUtil_Unknown6(__int64 result)
{
  int* v1;
  unsigned __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  signed int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v1 = (int*)GameData_21d9988;
  v2 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v2 < 1) {
    v4 = 0;
  }
  else {
    v3 = *(_DWORD*)(result + 8);
    v4 = 0;
    v5 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v2 - 1));
    if (v5 >= v3) {
      v5 = *(_DWORD*)(result + 8);
    }
    if (v3 >= (signed __int32)*(_DWORD*)GameData_21d9988) {
      v6 = v5;
    }
    else {
      v6 = *(_DWORD*)GameData_21d9988;
    }
    v7 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
    while (1) {
      v8 = (unsigned int)(v4 + v7) >> 1;
      v9 = *(_DWORD*)(GameData_21d9988 + 4LL * v8);
      if (v6 == v9) {
        break;
      }
      if (v6 < v9) {
        v7 = (unsigned int)(v4 + v7) >> 1;
      }
      else {
        v4 = v8 + 1;
      }
      if (v4 >= v7) {
        goto LABEL_16;
      }
    }
    v4 = v8 + 1;
  }
LABEL_16:
  v10 = v4 - *(_DWORD*)(result + 24);
  if (v10 != 0 && (*(_BYTE*)(result + 28) & 1) == 0) {
    *(_WORD*)(result + 29) = 257;
  }
  if ((int)v2 < 1) {
    v11 = 0;
    if (v4 < 0) {
    LABEL_35:
      v19 = *(unsigned __int8*)(result + 30);
      *(_BYTE*)(result + 28) = 0;
      if (v19 == 1) {
        *(_DWORD*)(result + 24) = v4;
        if (v4 < (int)v2) {
          LODWORD(v2) = v4;
        }
        v20 = v2 - 1;
        if (v4 <= 0) {
          v20 = 0;
        }
        *(_DWORD*)(result + 12) = v1[v20];
      }
      return result;
    }
  }
  else {
    v11 = 0;
    if ((unsigned int)v2 >= 5) {
      v12 = 5;
    }
    else {
      v12 = v2;
    }
    v13 = v1[(unsigned int)(v2 - 1)];
    v14 = v1[v12 - 1];
    if (v13 >= v14) {
      v13 = v14;
    }
    if (v14 >= *v1) {
      v15 = v13;
    }
    else {
      v15 = *v1;
    }
    v16 = v2;
    while (1) {
      v17 = (unsigned int)(v11 + v16) >> 1;
      v18 = v1[v17];
      if (v15 == v18) {
        break;
      }
      if (v15 < v18) {
        v16 = (unsigned int)(v11 + v16) >> 1;
      }
      else {
        v11 = v17 + 1;
      }
      if (v11 >= v16) {
        if (v4 >= v11) {
          goto LABEL_43;
        }
        goto LABEL_35;
      }
    }
    v11 = v17 + 1;
    if (v4 < (int)(v17 + 1)) {
      goto LABEL_35;
    }
  }
LABEL_43:
  *(_DWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 28) = 1;
  if (v10 >= 2) {
    if (v11 - 1 < (int)v2) {
      LODWORD(v2) = v11 - 1;
    }
    v21 = v2 - 1;
    if (v11 <= 1) {
      v21 = 0;
    }
    *(_DWORD*)(result + 12) = v1[v21];
    *(_DWORD*)(result + 24) = (v11 - 1) & ~((v11 - 1) >> 31);
  }
  return result;
}

__int64 GaugeUtil_AnimalExpChangeUtil_Unknown2(__int64 result)
{
  unsigned __int64 v1;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;

  v1 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v1 < 1) {
    return 0;
  }
  v2 = *(_DWORD*)(result + 8);
  LODWORD(result) = 0;
  v3 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v1 - 1));
  if (v3 >= v2) {
    v3 = v2;
  }
  if (v2 >= (signed __int32)*(_DWORD*)GameData_21d9988) {
    v4 = v3;
  }
  else {
    v4 = *(_DWORD*)GameData_21d9988;
  }
  while (1) {
    v5 = (unsigned int)(result + v1) >> 1;
    v6 = *(_DWORD*)(GameData_21d9988 + 4LL * v5);
    if (v4 == v6) {
      break;
    }
    if (v4 >= v6) {
      result = v5 + 1;
    }
    else {
      result = (unsigned int)result;
    }
    if (v4 < v6) {
      LODWORD(v1) = v5;
    }
    if ((int)result >= (int)v1) {
      return result;
    }
  }
  return v5 + 1;
}

__int64 GaugeUtil_174f240(__int64* a1, __int64* a2, signed int a3,
                          unsigned int a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  int* v15;
  int* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  int v22;
  int* v23;
  __int64 v24;
  int* v25;
  unsigned __int64 v26;
  int* v27;
  int* v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  int* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39[3];
  struct {
    __int64 v40;
    char gap40_[8];
    __int64 v41;
  } v40_;
  struct {
    __int64 v42[2];
    __int64 v43;
  } v42_;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v9 = *a2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak_alt2(v10);
      }
      if (v9 != 0) {
        v12 = *a2;
        v11 = a2[1];
        if (v11 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                    memory_order_relaxed);
        }
        v13 = a1[17];
        a1[16] = v12;
        a1[17] = v11;
        if (v13 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v13);
        }
        if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
            *(int*)(game_GameModeData_instance_ + 64) > 1) {
          v14 = &GameData_21f8130;
        }
        else {
          v14 = &GameData_21f8110;
        }
        v16 = v14 + 2;
        v15 = *((int**)v14 + 1);
        v17 = (*((_QWORD*)v16 + 1) - (_QWORD)v15) >> 2;
        if ((int)v17 < 1) {
          v19 = 0;
        LABEL_29:
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_35;
          }
        }
        else {
          v18 = *v15;
          LODWORD(v19) = 0;
          v20 = v15[(unsigned int)(v17 - 1)];
          if (v20 >= a3) {
            v20 = a3;
          }
          if (a3 >= v18) {
            v18 = v20;
          }
          while (1) {
            v21 = (unsigned int)(v19 + v17) >> 1;
            v22 = v15[v21];
            if (v18 == v22) {
              break;
            }
            if (v18 >= v22) {
              v19 = v21 + 1;
            }
            else {
              v19 = (unsigned int)v19;
            }
            if (v18 < v22) {
              LODWORD(v17) = v21;
            }
            if ((int)v19 >= (int)v17) {
              goto LABEL_29;
            }
          }
          v19 = v21 + 1;
          if (game_GameModeData_instance_ == 0) {
          LABEL_35:
            v23 = &GameData_21f8110;
            goto LABEL_36;
          }
        }
        v23 = &GameData_21f8110;
        if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
            *(int*)(game_GameModeData_instance_ + 64) > 1) {
          v23 = &GameData_21f8130;
        }
      LABEL_36:
        v25 = v23 + 2;
        v24 = *((_QWORD*)v23 + 1);
        v26 = (unsigned __int64)(*((_QWORD*)v25 + 1) - v24) >> 2;
        if ((int)v26 <= 1) {
          LODWORD(v26) = 1;
        }
        (*(void (**)(__int64*, _QWORD, _QWORD, __int64, _QWORD))(*a1 + 8))(
            a1, (unsigned int)a3, a4, v19,
            *(unsigned int*)(v24 + 4LL * (unsigned int)v26 - 4));
        if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
            *(int*)(game_GameModeData_instance_ + 64) > 1) {
          v27 = &GameData_21f8130;
        }
        else {
          v27 = &GameData_21f8110;
        }
        v28 = *((int**)v27 + 1);
        v29 = (*((_QWORD*)v27 + 2) - (_QWORD)v28) >> 2;
        if ((int)v29 < 1) {
          v31 = 0;
        LABEL_55:
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_61;
          }
        }
        else {
          v30 = *v28;
          v31 = 0;
          v32 = v28[(unsigned int)(v29 - 1)];
          if (v32 >= a3) {
            v32 = a3;
          }
          if (a3 >= v30) {
            v30 = v32;
          }
          while (1) {
            v33 = (unsigned int)(v31 + v29) >> 1;
            v34 = v28[v33];
            if (v30 == v34) {
              break;
            }
            if (v30 < v34) {
              LODWORD(v29) = (unsigned int)(v31 + v29) >> 1;
            }
            else {
              v31 = v33 + 1;
            }
            if (v31 >= (int)v29) {
              goto LABEL_55;
            }
          }
          v31 = v33 + 1;
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_61;
          }
        }
        if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
            *(int*)(game_GameModeData_instance_ + 64) > 1) {
          v35 = &GameData_21f8130;
        LABEL_62:
          if (v31 >= (int)((*((_QWORD*)v35 + 2) - *((_QWORD*)v35 + 1)) >> 2)) {
            a1[2] = 0;
          }
          LOWORD(v40_.v40) = 0;
          LOBYTE(v42_.v42[0]) = 24;
          strcpy((char*)v42_.v42 + 1, "SE_SYS_Honor");
          strcpy((char*)v39, "(SE_SYS_HonorLevel_Up");
          RelianceExpChange_174e380(a1, v42_.v42, &v40_.v40, v39);
          if ((v39[0] & 1) != 0 && v39[2] != 0) {
            v36 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v36 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v39[2]);
          }
          if ((v40_.v40 & 1) != 0 && v40_.v41 != 0) {
            v37 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v37 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v40_.v41);
          }
          if ((v42_.v42[0] & 1) != 0 && v42_.v43 != 0) {
            v38 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v42_.v43);
          }
          return GaugeUtil_174f600((__int64)a1, 0);
        }
      LABEL_61:
        v35 = &GameData_21f8110;
        goto LABEL_62;
      }
    }
  }
  return result;
}

__int64 GaugeUtil_174f600(__int64 a1, int a2)
{

#pragma clang fp contract(off)
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
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44[2];
  struct {
    __int64* v45;
    __int64 v46;
  } v45_;

  if (*(_BYTE*)(a1 + 49) != 1) {
    return 0;
  }
  v8 = (**(__int64 (***)(__int64))a1)(a1);
  if (a2 == 0 || (v8 & 1) != 0) {
    if (*(_BYTE*)(a1 + 49) == 1) {
      v11 = (**(__int64 (***)(__int64))a1)(a1);
      v12 = 0x0.0p+0f;
      if ((v11 & 1) != 0) {
        if (a2 == 1) {
          v13 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f;
          if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
            v13 = v13 * 0x1.0000000000000p+3f;
          }
          v14 = *(float*)(a1 + 40);
          v15 = *(float*)(a1 + 44) + v13;
          if (v14 >= v15) {
            v16 = v15;
          }
          else {
            v16 = *(float*)(a1 + 40);
          }
          if (v15 >= 0x0.0p+0f) {
            v17 = v16;
          }
          else {
            v17 = 0x0.0p+0f;
          }
          v19 = *(float*)(a1 + 16);
          v18 = *(_DWORD*)(a1 + 20);
          *(float*)(a1 + 44) = v17;
          v12 = GameRoutine_618640_alt1(4, 0x0.0p+0f, (float)v18, v17, v14) -
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
        LODWORD(v45_.v45) = 0;
        if (v23 >= 0x0.0p+0f) {
          v21 = (float*)&v45_.v45;
        }
      }
      else {
        LODWORD(v45_.v45) = 0;
        if (v23 <= 0x0.0p+0f) {
          v21 = (float*)&v45_.v45;
        }
      }
      v24 = *(_DWORD*)(a1 + 36);
      v25 = v12 + *(float*)(a1 + 32);
      v26 = *v21 == 0x0.0p+0f;
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
          snd_Fade_Fade_10c830_alt1((__int64)&v45_.v45, 0x0.0p+0f);
          snd_play_ff2d0_alt1(v34, v34, (__int64)&v45_.v45, 0, 0x10001u, 0,
                              0x0.0p+0f, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(&v45_.v45);
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
        v37 = (v35 & 1) != 0 ? *(_QWORD*)(a1 + 120) : a1 + 105;
        if (v37 != 0) {
          snd_Fade_Fade_10c830_alt1((__int64)&v45_.v45, 0x0.0p+0f);
          snd_play_ff2d0_alt1(v37, v37, (__int64)&v45_.v45, 0, 0x10001u, 0,
                              0x0.0p+0f, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(&v45_.v45);
        }
      }
    }
    v38 = *(_QWORD*)(a1 + 136);
    if (v38 == 0) {
      goto LABEL_79;
    }
    v39 = std___1___shared_weak_count_lock_alt1(v38);
    if (v39 == 0) {
      goto LABEL_79;
    }
    v40 = *(__int64**)(a1 + 128);
    v41 = v39;
    if (v40 != nullptr) {
      GameRoutine_157c220_alt1(*(__int64**)(a1 + 128), *(_DWORD*)(a1 + 12),
                               *(_DWORD*)(a1 + 8), a2 == 0, 0);
      if (*(_BYTE*)(a1 + 30) == 1) {
        v44[0] = (__int64)"L_LvUP";
        v44[1] = 6;
        GameRoutine_1114920_alt1((void*)(&v45_.v45), v40, v44);
        if (v45_.v46 != 0) {
          v42 = std___1___shared_weak_count_lock_alt1(v45_.v46);
          v43 = v45_.v45;
          if (v45_.v46 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v45_.v46);
          }
          if (v42 != 0 && v43 != nullptr) {
            BlnPopup_19f25b0_alt1(v43);
            goto LABEL_75;
          }
          if (v42 != 0) {
          LABEL_75:
            if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
              std___1___shared_weak_count___release_weak_alt2(v42);
            }
          }
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
      std___1___shared_weak_count___release_weak_alt2(v41);
    }
  LABEL_79:
    v9 = (**(__int64 (***)(__int64))a1)(a1);
    return v9 & 1;
  }
  v9 = 0;
  return v9 & 1;
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
  signed int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  bool v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  _BOOL4 v22;
  _QWORD* v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  void (*v35)(__int64*, __int64);
  __int64 v37[2];
  struct {
    __int64* v38;
    __int64 v39;
  } v38_;
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;

  v2 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v2 < 1) {
    LOBYTE(v4) = 0;
  }
  else {
    v3 = *(_DWORD*)(a1 + 8);
    v4 = 0;
    v5 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v2 - 1));
    if (v5 >= v3) {
      v5 = *(_DWORD*)(a1 + 8);
    }
    if (v3 >= (signed __int32)*(_DWORD*)GameData_21d99a8) {
      v6 = v5;
    }
    else {
      v6 = *(_DWORD*)GameData_21d99a8;
    }
    v7 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    while (1) {
      v8 = (unsigned int)(v4 + v7) >> 1;
      v9 = *(_DWORD*)(GameData_21d99a8 + 4LL * v8);
      if (v6 == v9) {
        break;
      }
      if (v6 < v9) {
        v7 = (unsigned int)(v4 + v7) >> 1;
      }
      else {
        v4 = v8 + 1;
      }
      if (v4 >= v7) {
        goto LABEL_16;
      }
    }
    LOBYTE(v4) = v8 + 1;
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
  if ((v19 = std___1___shared_weak_count_lock_alt1(v11)) == 0) {
    return false;
  }
  v20 = *(__int64**)(a1 + 128);
  v21 = v19;
  v22 = v20 != nullptr;
  if (v20 != nullptr) {
    if ((*(unsigned __int8*)(a1 + 144) | 2) == 0xB) {
      v23 = (_QWORD*)(*(_QWORD*)(a1 + 152) + 1744LL);
      LODWORD(v38_.v38) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                                     game_g_shared_system_skills_ptr) &
                          0xFFF;
      v24 = game_HasSkill_alt1(v23, (unsigned int*)&v38_.v38) ^ 1;
    }
    else {
      v24 = 1;
    }
    v25 = ui_LayoutAccessor_FindPane_alt1(v20, (__int64)"IconMastery");
    if (v25 != 0) {
      v25 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841190_alt1(v25, *(_BYTE*)(a1 + 144));
    if ((v24 & 1) == 0) {
      LOBYTE(v4) = 0;
    }
    v26 = ui_LayoutAccessor_FindPane_alt1(v20, (__int64)"IconMasteryLv");
    if (v26 != 0) {
      v26 = __dynamic_cast(v26, GameData_212d670[0], GameData_212d678[0], 0);
      if (v26 != 0) {
        v27 = v26;
        v28 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
        v29 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v26 + 88LL))(v26, 0);
        if (v29 != 0) {
          *(_DWORD*)(v29 + 12) = v28;
        }
        v26 = v27;
      }
    }
    GameRoutine_1841470_alt1(v26, v4);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v20, (__int64)"L_Gauge",
                                          v24 & 1);
    LayoutAccessor_1560070_alt1((void*)(&v40_.v40), v20, "L_Gauge");
    GameRoutine_174dd80_alt2(a1, (__int64)&v40_.v40, v17, v18);
    if (v40_.v41 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v40_.v41);
    }
    if (*(_BYTE*)(a1 + 28) == 1) {
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v20, (__int64)"T_Next", 0);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v20, (__int64)"T_NumNext",
                                            0);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v20, (__int64)"T_Max", 1);
    }
    else {
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v20, (__int64)"T_Next", 1);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v20, (__int64)"T_NumNext",
                                            1);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v20, (__int64)"T_Max", 0);
      v30 = *(_DWORD*)(a1 + 8);
      v31 = ui_LayoutAccessor_FindPane_alt1(v20, (__int64)"T_NumNext");
      if (v31 != 0) {
        v32 = __dynamic_cast(v31, GameData_212d670[0], GameData_212d690, 0);
        if (v32 != 0) {
          GameRoutine_156c910_alt1(v32, "%d", 1, (unsigned int)(v18 - v30));
        }
      }
    }
    if ((v24 & 1) == 0) {
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v20, (__int64)"T_Next", 0);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v20, (__int64)"T_NumNext",
                                            0);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v20, (__int64)"T_Max", 0);
    }
    v37[0] = (__int64)"L_LvUP";
    v37[1] = 6;
    GameRoutine_1114920_alt1((void*)(&v38_.v38), v20, v37);
    if (v38_.v39 != 0) {
      v33 = std___1___shared_weak_count_lock_alt1(v38_.v39);
      v34 = v38_.v38;
      if (v38_.v39 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v38_.v39);
      }
      if (v33 != 0 && v34 != nullptr) {
        v35 = *(void (**)(__int64*, __int64))(*v34 + 40);
        if (((unsigned __int8)v24 & *(_BYTE*)(a1 + 29) & 1) != 0) {
          v35(v34, 1);
          if (*(_BYTE*)(a1 + 30) == 1) {
            BlnPopup_19f25b0_alt1(v34);
          }
        }
        else {
          v35(v34, 0);
        }
        goto LABEL_61;
      }
      if (v33 != 0) {
      LABEL_61:
        if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          std___1___shared_weak_count___release_weak_alt2(v33);
        }
      }
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt2(v21);
  }
  return v22;
}

__int64 GaugeUtil_1750b80(__int64 result)
{
  int* v1;
  unsigned __int64 v2;
  int v3;
  signed int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  signed int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  signed int v16;
  unsigned int v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;

  v1 = (int*)GameData_21d99a8;
  v2 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v2 < 1) {
    LOBYTE(v4) = 0;
  }
  else {
    v3 = *(_DWORD*)(result + 8);
    v4 = 0;
    v5 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v2 - 1));
    if (v5 >= v3) {
      v5 = *(_DWORD*)(result + 8);
    }
    if (v3 >= (signed __int32)*(_DWORD*)GameData_21d99a8) {
      v6 = v5;
    }
    else {
      v6 = *(_DWORD*)GameData_21d99a8;
    }
    v7 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
    while (1) {
      v8 = (unsigned int)(v4 + v7) >> 1;
      v9 = *(_DWORD*)(GameData_21d99a8 + 4LL * v8);
      if (v6 == v9) {
        break;
      }
      if (v6 < v9) {
        v7 = (unsigned int)(v4 + v7) >> 1;
      }
      else {
        v4 = v8 + 1;
      }
      if (v4 >= v7) {
        goto LABEL_16;
      }
    }
    LOBYTE(v4) = v8 + 1;
  }
LABEL_16:
  v10 = (unsigned __int8)v4 - *(_DWORD*)(result + 24);
  if (v10 != 0 && (*(_BYTE*)(result + 28) & 1) == 0) {
    *(_WORD*)(result + 29) = 257;
  }
  if ((int)v2 < 1) {
    LOBYTE(v11) = 0;
  }
  else {
    v11 = 0;
    if ((unsigned int)v2 >= 0xC) {
      v12 = 12;
    }
    else {
      v12 = v2;
    }
    v13 = v1[(unsigned int)(v2 - 1)];
    v14 = v1[v12 - 1];
    if (v13 >= v14) {
      v13 = v14;
    }
    if (v14 >= *v1) {
      v15 = v13;
    }
    else {
      v15 = *v1;
    }
    v16 = v2;
    while (1) {
      v17 = (unsigned int)(v11 + v16) >> 1;
      v18 = v1[v17];
      if (v15 == v18) {
        break;
      }
      if (v15 < v18) {
        v16 = (unsigned int)(v11 + v16) >> 1;
      }
      else {
        v11 = v17 + 1;
      }
      if (v11 >= v16) {
        goto LABEL_37;
      }
    }
    LOBYTE(v11) = v17 + 1;
  }
LABEL_37:
  if ((unsigned __int8)v4 >= (unsigned int)(unsigned __int8)v11) {
    *(_DWORD*)(result + 16) = 0;
    *(_BYTE*)(result + 28) = 1;
    if (v10 >= 2) {
      if ((unsigned __int8)(v11 - 1) < (int)v2) {
        LODWORD(v2) = (unsigned __int8)(v11 - 1);
      }
      v21 = v2 - 1;
      if ((_BYTE)v11 == 1) {
        v21 = 0;
      }
      *(_DWORD*)(result + 12) = v1[v21];
      *(_DWORD*)(result + 24) =
          ((unsigned __int8)v11 - 1) & ~(((unsigned __int8)v11 - 1) >> 31);
    }
  }
  else {
    v19 = *(unsigned __int8*)(result + 30);
    *(_BYTE*)(result + 28) = 0;
    if (v19 == 1) {
      *(_DWORD*)(result + 24) = (unsigned __int8)v4;
      if ((unsigned __int8)v4 < (int)v2) {
        LODWORD(v2) = (unsigned __int8)v4;
      }
      v20 = (int)v2 - 1;
      if ((_BYTE)v4 == 0) {
        v20 = 0;
      }
      *(_DWORD*)(result + 12) = v1[v20];
    }
  }
  return result;
}

__int64 GaugeUtil_1750d20(__int64 a1)
{
  unsigned __int64 v1;
  int v2;
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;

  v1 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v1 < 1) {
    return 0;
  }
  v2 = *(_DWORD*)(a1 + 8);
  v3 = 0;
  v4 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v1 - 1));
  if (v4 >= v2) {
    v4 = *(_DWORD*)(a1 + 8);
  }
  if (v2 >= (signed __int32)*(_DWORD*)GameData_21d99a8) {
    v5 = v4;
  }
  else {
    v5 = *(_DWORD*)GameData_21d99a8;
  }
  while (1) {
    v6 = (unsigned int)(v3 + v1) >> 1;
    v7 = *(_DWORD*)(GameData_21d99a8 + 4LL * v6);
    if (v5 == v7) {
      break;
    }
    if (v5 < v7) {
      LODWORD(v1) = (unsigned int)(v3 + v1) >> 1;
    }
    else {
      v3 = v6 + 1;
    }
    if (v3 >= (int)v1) {
      return (unsigned __int8)v3;
    }
  }
  return (unsigned __int8)(v6 + 1);
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

__int64 GaugeUtil_1751050(__int64* a1, __int64* a2, __int64 a3, unsigned int a4,
                          unsigned int a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _DWORD* v17;
  int v18;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  _BYTE v27[23];
  struct {
    __int64 v28;
    char gap40_[8];
    __int64 v29;
  } v28_;
  __int64 v30[3];

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v11 = *a2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v12 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak_alt2(v12);
      }
      if (v11 != 0) {
        v14 = *a2;
        v13 = a2[1];
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
        }
        v15 = a1[17];
        a1[16] = v14;
        a1[17] = v13;
        if (v15 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v15);
        }
        a1[18] = a3;
        v16 = *(_DWORD*)(a3 + 4);
        v17 = *(_DWORD**)(*(_QWORD*)(a3 + 16) + 24LL);
        v18 = v17[105];
        if (v18 > 2 && (signed __int32)v17[103] <= v16) {
          v22 = 3;
        }
        else if (v18 > 1 && (signed __int32)v17[102] <= v16) {
          v22 = 2;
        }
        else if (v18 >= 1 && (signed __int32)v17[101] <= v16) {
          v22 = 1;
        }
        else {
          v22 = (unsigned int)v17[104];
        }
        (*(void (**)(__int64*, _QWORD, _QWORD, __int64, _QWORD))(*a1 + 8))(
            a1, a4, a5, v22, (unsigned int)v17[107]);
        LOWORD(v28_.v28) = 0;
        strcpy((char*)v30, "&SE_SYS_Contribution");
        v26 = 30;
        strcpy(v27, "SE_SYS_Level_Up");
        RelianceExpChange_174e380(a1, v30, &v28_.v28, (__int64*)&v26);
        if ((v26 & 1) != 0 && *(_QWORD*)&v27[15] != 0) {
          v23 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
              *(__int64*)&v27[15]);
        }
        if ((v28_.v28 & 1) != 0 && v28_.v29 != 0) {
          v24 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v28_.v29);
        }
        if ((v30[0] & 1) != 0 && v30[2] != 0) {
          v25 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v30[2]);
        }
        return GaugeUtil_17512a0((__int64)a1, 0);
      }
    }
  }
  return result;
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

__int64 GaugeUtil_MiracleExpChange_Unknown6(__int64 result)
{
  __int64 v1;
  int v2;
  _DWORD* v3;
  int v4;
  int v8;
  int v9;
  int v10;
  int v11;
  _DWORD* v12;
  int v13;
  __int64 v17;
  int v18;

  v1 = *(_QWORD*)(result + 144);
  if (v1 != 0) {
    v2 = *(_DWORD*)(v1 + 4);
    v3 = *(_DWORD**)(*(_QWORD*)(v1 + 16) + 24LL);
    v4 = v3[105];
    if (v4 > 2 && (signed __int32)v3[103] <= v2) {
      v8 = 3;
    }
    else if (v4 > 1 && (signed __int32)v3[102] <= v2) {
      v8 = 2;
    }
    else if (v4 >= 1 && (signed __int32)v3[101] <= v2) {
      v8 = 1;
    }
    else {
      v8 = v3[104];
    }
    v9 = v8 - *(_DWORD*)(result + 24);
    if (v9 != 0 && (*(_BYTE*)(result + 28) & 1) == 0) {
      *(_WORD*)(result + 29) = 257;
      v4 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 16) + 24LL) + 420LL);
    }
    if (v8 >= v4) {
      *(_DWORD*)(result + 16) = 0;
      *(_BYTE*)(result + 28) = 1;
      if (v9 < 2) {
        return result;
      }
      *(_DWORD*)(result + 12) =
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 16) + 24LL) +
                     4LL * *(int*)(*(_QWORD*)(*(_QWORD*)(v1 + 16) + 24LL) +
                                   420LL) +
                     396);
      v18 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 16) + 24LL) + 420LL);
      if (v18 <= 1) {
        v18 = 1;
      }
      v8 = v18 - 1;
    }
    else {
      v10 = *(unsigned __int8*)(result + 30);
      *(_BYTE*)(result + 28) = 0;
      if (v10 != 1) {
        return result;
      }
      v11 = *(_DWORD*)(v1 + 4);
      v12 = *(_DWORD**)(*(_QWORD*)(v1 + 16) + 24LL);
      v13 = v12[105];
      if (v13 > 2 && (signed __int32)v12[103] <= v11) {
        v17 = 3;
      }
      else if (v13 > 1 && (signed __int32)v12[102] <= v11) {
        v17 = 2;
      }
      else if (v13 >= 1 && (signed __int32)v12[101] <= v11) {
        v17 = 1;
      }
      else {
        v17 = (int)v12[104];
      }
      *(_DWORD*)(result + 12) = v12[v17 + 100];
    }
    *(_DWORD*)(result + 24) = v8;
  }
  return result;
}

__int64 GaugeUtil_MiracleExpChange_Unknown2(__int64 a1)
{
  __int64 v1;
  int v2;
  _DWORD* v3;
  int v4;

  v1 = *(_QWORD*)(a1 + 144);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_DWORD*)(v1 + 4);
  v3 = *(_DWORD**)(*(_QWORD*)(v1 + 16) + 24LL);
  v4 = v3[105];
  if (v4 > 2 && (signed __int32)v3[103] <= v2) {
    return 3;
  }
  if (v4 > 1 && (signed __int32)v3[102] <= v2) {
    return 2;
  }
  if (v4 >= 1 && (signed __int32)v3[101] <= v2) {
    return 1;
  }
  else {
    return (unsigned int)v3[104];
  }
}

__int64 GaugeUtil_UnitExpChangeUtil_Unknown6(__int64 result)
{
  int* v1;
  unsigned __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  signed int v16;
  unsigned int v17;
  int v18;
  bool v19;
  int v20;

  v1 = (int*)GameData_21d9968;
  v2 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((int)v2 < 1) {
    v4 = 0;
  }
  else {
    v3 = *(_DWORD*)(result + 8);
    v4 = 0;
    v5 = *(_DWORD*)(GameData_21d9968 + 4LL * (unsigned int)(v2 - 1));
    if (v5 >= v3) {
      v5 = *(_DWORD*)(result + 8);
    }
    if (v3 >= (signed __int32)*(_DWORD*)GameData_21d9968) {
      v6 = v5;
    }
    else {
      v6 = *(_DWORD*)GameData_21d9968;
    }
    v7 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    while (1) {
      v8 = (unsigned int)(v4 + v7) >> 1;
      v9 = *(_DWORD*)(GameData_21d9968 + 4LL * v8);
      if (v6 == v9) {
        break;
      }
      if (v6 < v9) {
        v7 = (unsigned int)(v4 + v7) >> 1;
      }
      else {
        v4 = v8 + 1;
      }
      if (v4 >= v7) {
        goto LABEL_16;
      }
    }
    v4 = v8 + 1;
  }
LABEL_16:
  v10 = v4 - *(_DWORD*)(result + 24);
  if (v10 != 0 && (*(_BYTE*)(result + 28) & 1) == 0) {
    *(_WORD*)(result + 29) = 257;
    if ((int)v2 < 1) {
      v11 = 0;
      if (v4 < 0) {
      LABEL_34:
        if (v4 < (int)v2) {
          LODWORD(v2) = v4;
        }
        v19 = v4 <= 0;
        v20 = v2 - 1;
      LABEL_42:
        if (v19) {
          v20 = 0;
        }
        *(_DWORD*)(result + 12) = v1[v20];
        *(_DWORD*)(result + 24) = v4;
        return result;
      }
    }
    else {
      v11 = 0;
      if ((unsigned int)v2 >= 0x63) {
        v12 = 99;
      }
      else {
        v12 = v2;
      }
      v13 = v1[(unsigned int)(v2 - 1)];
      v14 = v1[v12 - 1];
      if (v13 >= v14) {
        v13 = v14;
      }
      if (v14 >= *v1) {
        v15 = v13;
      }
      else {
        v15 = *v1;
      }
      v16 = v2;
      while (1) {
        v17 = (unsigned int)(v11 + v16) >> 1;
        v18 = v1[v17];
        if (v15 == v18) {
          break;
        }
        if (v15 < v18) {
          v16 = (unsigned int)(v11 + v16) >> 1;
        }
        else {
          v11 = v17 + 1;
        }
        if (v11 >= v16) {
          if (v4 >= v11) {
            goto LABEL_38;
          }
          goto LABEL_34;
        }
      }
      v11 = v17 + 1;
      if (v4 < (int)(v17 + 1)) {
        goto LABEL_34;
      }
    }
  LABEL_38:
    *(_DWORD*)(result + 16) = 0;
    *(_BYTE*)(result + 28) = 1;
    if (v10 < 2) {
      return result;
    }
    if (v11 - 1 < (int)v2) {
      LODWORD(v2) = v11 - 1;
    }
    v19 = v11 <= 1;
    v20 = v2 - 1;
    v4 = (v11 - 1) & ~((v11 - 1) >> 31);
    goto LABEL_42;
  }
  return result;
}

__int64 GaugeUtil_ClassExpChangeUtil_Unknown5(__int64 a1)
{
  return (unsigned int)((signed __int32)*(_DWORD*)(a1 + 128) / 2);
}

__int64 GaugeUtil_ClassExpChangeUtil_Unknown6(__int64 result)
{
  if ((signed __int32)*(_DWORD*)(result + 8) >=
      (signed __int32)*(_DWORD*)(result + 128)) {
    *(_DWORD*)(result + 16) = 0;
    *(_BYTE*)(result + 30) = 1;
    *(_WORD*)(result + 28) = 257;
  }
  return result;
}

__int64 GaugeUtil_1752580(__int64 a1, int a2)
{

#pragma clang fp contract(off)
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
  _QWORD v35[29];

  if (*(_BYTE*)(a1 + 49) != 1) {
    return 0;
  }
  v35[25] = v5;
  v35[26] = v4;
  v35[27] = v2;
  v35[28] = v3;
  v8 = (**(__int64 (***)(__int64))a1)(a1);
  if (a2 == 0 || (v8 & 1) != 0) {
    if (*(_BYTE*)(a1 + 49) == 1) {
      v11 = (**(__int64 (***)(__int64))a1)(a1);
      v12 = 0x0.0p+0f;
      if ((v11 & 1) != 0) {
        if (a2 == 1) {
          v13 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f;
          if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
            v13 = v13 * 0x1.0000000000000p+3f;
          }
          v14 = *(float*)(a1 + 40);
          v15 = *(float*)(a1 + 44) + v13;
          if (v14 >= v15) {
            v16 = v15;
          }
          else {
            v16 = *(float*)(a1 + 40);
          }
          if (v15 >= 0x0.0p+0f) {
            v17 = v16;
          }
          else {
            v17 = 0x0.0p+0f;
          }
          v19 = *(float*)(a1 + 16);
          v18 = *(_DWORD*)(a1 + 20);
          *(float*)(a1 + 44) = v17;
          v12 = GameRoutine_618640_alt1(4, 0x0.0p+0f, (float)v18, v17, v14) -
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
        LODWORD(v35[0]) = 0;
        if (v23 >= 0x0.0p+0f) {
          v21 = (float*)v35;
        }
      }
      else {
        LODWORD(v35[0]) = 0;
        if (v23 <= 0x0.0p+0f) {
          v21 = (float*)v35;
        }
      }
      v24 = *(_DWORD*)(a1 + 36);
      v25 = v12 + *(float*)(a1 + 32);
      v26 = *v21 == 0x0.0p+0f;
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
          snd_Fade_Fade_10c830_alt1((__int64)v35, 0x0.0p+0f);
          snd_play_ff2d0_alt1(v34, v34, (__int64)v35, 0, 0x10001u, 0, 0x0.0p+0f,
                              0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(v35);
        }
      }
    }
    BauquetHPChange_1752840_alt1(a1);
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
