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
__int64 GaugeUtil_17530b0_alt1(__int64 a1) __asm__("GaugeUtil_17530b0");
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
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
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
__attribute__((swiftcall)) void
GameRoutine_1114920_alt2(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_1114920");
__attribute__((swiftcall)) void
GameRoutine_9d5180_alt1(PSEUDO_X8, __int64*,
                        _QWORD*) __asm__("GameRoutine_9d5180");
__int64* Util_1580bf0_alt1(__int64* result, __int64, unsigned int, char, char,
                           char, char, char) __asm__("Util_1580bf0");
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 GameHr_174dd80(__int64 result, __int64, int, int);
__int64 GameRoutine_90c6c0_alt1(__int64 result,
                                int) __asm__("GameRoutine_90c6c0");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 StatusNum_1890220_alt1(__int64, unsigned int, unsigned int,
                               unsigned int, char, char,
                               int) __asm__("StatusNum_1890220");
__int64 game_90c8d0(__int64);
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_FindPane_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt2(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
float ui_LayoutAccessor_GetPaneSize_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_GetPaneSize");
unsigned __int64 BlnPopup_19f25b0_alt2(__int64*) __asm__("BlnPopup_19f25b0");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void StatusNum_1890ac0_alt1(__int64, int) __asm__("StatusNum_1890ac0");
void ui_LayoutAccessor_FitPaneSizeToText_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FitPaneSizeToText");
void GaugeUtil_17530b0(__int64 a1);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 (***GameData_212dae8)();
__int64 GaugeUtil_174e040(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                          unsigned int a5);
__int64 GaugeUtil_1750020(__int64* a1, __int64* a2, __int64 a3, char a4,
                          signed int a5, unsigned int a6);
__int64 GaugeUtil_UnitExpChangeUtil_Unknown5();

__int64 GaugeUtil_174e040(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                          unsigned int a5)
{
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 (***v12)();
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 v32[2];
    char* v33;
  } v32_;
  __int64 v34[3];
  __int64 v35[3];
  _QWORD v36[3];
  _QWORD v37[3];

  v9 = (__int64*)result;
  v37[0] = 0;
  v37[1] = a3;
  if (a3 != 0) {
    v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 24) + 1784LL) + 272LL);
  }
  else {
    v10 = 0;
  }
  v37[2] = v10;
  v36[0] = 0;
  v36[1] = a4;
  if (a4 != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 24) + 1784LL) + 272LL);
    v36[2] = v11;
    v12 = GameData_212dae8;
    if (v10 != 0 && v11 != 0) {
      v13 = *(_QWORD**)(game_GameModeData_instance_ + 128);
      result = GameReliance_8e17a0(v13, (__int64)v37, (__int64)v36);
      if ((result & 0x80000000) == 0) {
        v12 = (__int64 (***)(void))(v13[1] + 56LL * (unsigned int)result);
      }
    }
  }
  else {
    v12 = GameData_212dae8;
  }
  if (*((_BYTE*)v12 + 10) != 0) {
    result = a2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result != 0) {
        v14 = *a2;
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v15 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak_alt2(v15);
        }
        if (v14 != 0) {
          v9[16] = a3;
          v9[17] = a4;
          v17 = *a2;
          v16 = a2[1];
          if (v16 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                      memory_order_relaxed);
          }
          v18 = v9[19];
          v9[18] = v17;
          v9[19] = v16;
          if (v18 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v18);
          }
          *((_BYTE*)v9 + 176) = 0;
          v19 = (*((unsigned __int16*)v12 + 6) - a5) &
                ~((int)(*((unsigned __int16*)v12 + 6) - a5) >> 31);
          v20 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
          if ((int)v20 < 1) {
            v22 = 0;
          }
          else {
            v21 = *(_DWORD*)GameData_21d99c8;
            LODWORD(v22) = 0;
            v23 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v20 - 1));
            if (v23 >= (int)v19) {
              v23 = (*((unsigned __int16*)v12 + 6) - a5) &
                    ~((int)(*((unsigned __int16*)v12 + 6) - a5) >> 31);
            }
            if ((int)v19 >= v21) {
              v21 = v23;
            }
            v24 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
            while (1) {
              v25 = (unsigned int)(v22 + v24) >> 1;
              v26 = *(_DWORD*)(GameData_21d99c8 + 4LL * v25);
              if (v21 == v26) {
                break;
              }
              if (v21 >= v26) {
                v22 = v25 + 1;
              }
              else {
                v22 = (unsigned int)v22;
              }
              if (v21 < v26) {
                v24 = v25;
              }
              if ((int)v22 >= v24) {
                goto LABEL_36;
              }
            }
            v22 = v25 + 1;
          }
        LABEL_36:
          if ((int)v20 <= 1) {
            LODWORD(v20) = 1;
          }
          (*(void (**)(__int64*, __int64, _QWORD, __int64, _QWORD))(*v9 + 8))(
              v9, v19, a5, v22,
              *(unsigned int*)(GameData_21d99c8 + 4LL * (unsigned int)v20 - 4));
          strcpy((char*)v35, "$SE_SYS_Reliance_Up");
          strcpy((char*)v34, "(SE_SYS_Reliance_Down");
          v27 = fw_memory_g_heap_manager_ptr;
          v28 = (char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 26, 16, 0);
          v32_.v32[0] = 27;
          v32_.v32[1] = 23;
          v32_.v33 = v28;
          strcpy(v28, "SE_SYS_Reliance_Levelup");
          RelianceExpChange_174e380(v9, v35, v34, v32_.v32);
          if ((v32_.v32[0] & 1) != 0 && v32_.v33 != nullptr) {
            v29 = 128;
            if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
              v29 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v27 + v29,
                                               (__int64)v32_.v33);
          }
          if ((v34[0] & 1) != 0 && v34[2] != 0) {
            v30 = 128;
            if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v27 + v30, v34[2]);
          }
          if ((v35[0] & 1) != 0 && v35[2] != 0) {
            v31 = 128;
            if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v27 + v31, v35[2]);
          }
          return GaugeUtil_174e4e0((__int64)v9, 0);
        }
      }
    }
  }
  return result;
}

__int64 GaugeUtil_174e4e0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
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
              snd_play_ff2d0_alt1((void*)(handle), v36, v36, (__int64)v76, 0,
                                  0x10001u, 0, 0x0.0p+0f,
                                  0x1.0000000000000p+0f);
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
          snd_play_ff2d0_alt1((void*)(handle), v50, v50, (__int64)v76, 0,
                              0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
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
  _QWORD handle[2];
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
  _QWORD v44[2];
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
          snd_play_ff2d0_alt1((void*)(handle), v34, v34, (__int64)&v45_.v45, 0,
                              0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
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
          snd_play_ff2d0_alt1((void*)(handle), v37, v37, (__int64)&v45_.v45, 0,
                              0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
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
        v44[0] = "L_LvUP";
        v44[1] = 6;
        GameRoutine_1114920_alt2((void*)(&v45_.v45), v40, v44);
        if (v45_.v46 != 0) {
          v42 = std___1___shared_weak_count_lock_alt1(v45_.v46);
          v43 = v45_.v45;
          if (v45_.v46 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v45_.v46);
          }
          if (v42 != 0 && v43 != nullptr) {
            BlnPopup_19f25b0_alt2(v43);
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

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 128);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v3 != 0) {
          return *(float*)(a1 + 16) != 0x0.0p+0f;
        }
      }
      else {
        v4 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        std___1___shared_weak_count___release_weak_alt2(v4);
        if (v3 != 0) {
          return *(float*)(a1 + 16) != 0x0.0p+0f;
        }
      }
      return 0;
    }
  }
  return result;
}

__int64 GaugeUtil_1750020(__int64* a1, __int64* a2, __int64 a3, char a4,
                          signed int a5, unsigned int a6)
{
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  signed int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30[3];
  struct {
    __int64 v31;
    char gap32_[8];
    __int64 v32;
  } v31_;
  struct {
    __int64 v33[2];
    __int64 v34;
  } v33_;
  int v35;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v13 = *a2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v14 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak_alt2(v14);
      }
      if (v13 != 0) {
        v16 = *a2;
        v15 = a2[1];
        if (v15 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                    memory_order_relaxed);
        }
        v17 = a1[17];
        a1[16] = v16;
        a1[17] = v15;
        if (v17 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v17);
        }
        a1[19] = a3;
        *((_BYTE*)a1 + 144) = a4;
        v18 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        if ((int)v18 < 1) {
          LOBYTE(v20) = 0;
        }
        else {
          v19 = *(_DWORD*)GameData_21d99a8;
          v20 = 0;
          v21 = *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v18 - 1));
          if (v21 >= a5) {
            v21 = a5;
          }
          if (a5 >= v19) {
            v19 = v21;
          }
          v22 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
          while (1) {
            v23 = (unsigned int)(v20 + v22) >> 1;
            v24 = *(_DWORD*)(GameData_21d99a8 + 4LL * v23);
            if (v19 == v24) {
              break;
            }
            if (v19 < v24) {
              v22 = (unsigned int)(v20 + v22) >> 1;
            }
            else {
              v20 = v23 + 1;
            }
            if (v20 >= v22) {
              goto LABEL_24;
            }
          }
          LOBYTE(v20) = v23 + 1;
        }
      LABEL_24:
        if ((int)v18 >= 12) {
          LODWORD(v18) = 12;
        }
        (*(void (**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD))(*a1 + 8))(
            a1, (unsigned int)a5, a6, (unsigned __int8)v20,
            *(unsigned int*)(GameData_21d99a8 + 4LL * (int)v18 - 4));
        v25 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        if ((int)v25 >= 12) {
          LODWORD(v25) = 12;
        }
        if (a5 >=
            (signed __int32)*(_DWORD*)(GameData_21d99a8 + 4LL * (int)v25 - 4)) {
          a1[2] = 0;
          *((_BYTE*)a1 + 28) = 1;
        }
        if ((*((unsigned __int8*)a1 + 144) | 2) == 0xB) {
          v26 = (_QWORD*)(a1[19] + 1744);
          v35 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                           game_g_shared_system_skills_ptr) &
                0xFFF;
          if ((game_HasSkill_alt1(v26, (unsigned int*)&v35) & 1) != 0) {
            a1[2] = 0;
          }
        }
        LOWORD(v31_.v31) = 0;
        LOBYTE(v33_.v33[0]) = 20;
        strcpy((char*)v33_.v33 + 1, "SE_SYS_EXP");
        strcpy((char*)v30, "(SE_SYS_SkillLevel_Up");
        RelianceExpChange_174e380(a1, v33_.v33, &v31_.v31, v30);
        if ((v30[0] & 1) != 0 && v30[2] != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v30[2]);
        }
        if ((v31_.v31 & 1) != 0 && v31_.v32 != 0) {
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v31_.v32);
        }
        if ((v33_.v33[0] & 1) != 0 && v33_.v34 != 0) {
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v33_.v34);
        }
        return GaugeUtil_1750310((__int64)a1, 0);
      }
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
  _QWORD v37[2];
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
    v25 = ui_LayoutAccessor_FindPane_alt2(v20, "IconMastery");
    if (v25 != 0) {
      v25 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841190_alt1(v25, *(_BYTE*)(a1 + 144));
    if ((v24 & 1) == 0) {
      LOBYTE(v4) = 0;
    }
    v26 = ui_LayoutAccessor_FindPane_alt2(v20, "IconMasteryLv");
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
    ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v20, "L_Gauge", v24 & 1);
    LayoutAccessor_1560070_alt1((void*)(&v40_.v40), v20, "L_Gauge");
    GameHr_174dd80(a1, (__int64)&v40_.v40, v17, v18);
    if (v40_.v41 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v40_.v41);
    }
    if (*(_BYTE*)(a1 + 28) == 1) {
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v20, "T_Next", 0);
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v20, "T_NumNext", 0);
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v20, "T_Max", 1);
    }
    else {
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v20, "T_Next", 1);
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v20, "T_NumNext", 1);
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v20, "T_Max", 0);
      v30 = *(_DWORD*)(a1 + 8);
      v31 = ui_LayoutAccessor_FindPane_alt2(v20, "T_NumNext");
      if (v31 != 0) {
        v32 = __dynamic_cast(v31, GameData_212d670[0], GameData_212d690, 0);
        if (v32 != 0) {
          GameRoutine_156c910_alt1(v32, "%d", 1, (unsigned int)(v18 - v30));
        }
      }
    }
    if ((v24 & 1) == 0) {
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v20, "T_Next", 0);
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v20, "T_NumNext", 0);
      ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v20, "T_Max", 0);
    }
    v37[0] = "L_LvUP";
    v37[1] = 6;
    GameRoutine_1114920_alt2((void*)(&v38_.v38), v20, v37);
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
            BlnPopup_19f25b0_alt2(v34);
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
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  _QWORD* v7;
  char v8;
  char v9;
  unsigned __int8 v10;
  unsigned __int8 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  unsigned __int64 v18;
  int v19;
  bool v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;
  int v30;

  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    if (v3 != 0) {
      v4 = *(__int64**)(a1 + 128);
      v5 = v3;
      if (v4 != nullptr) {
        LayoutAccessor_155e830_alt1(*(_QWORD*)(a1 + 128), 1);
        v6 = *(unsigned __int8*)(a1 + 144);
        if ((v6 | 2) == 0xB) {
          v7 = (_QWORD*)(*(_QWORD*)(a1 + 152) + 1744LL);
          v30 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1B4LL) +
                           game_g_shared_system_skills_ptr) &
                0xFFF;
          v8 = game_HasSkill_alt1(v7, (unsigned int*)&v30);
          v6 = *(unsigned __int8*)(a1 + 144);
          v9 = v8;
        }
        else {
          v9 = 0;
        }
        Util_1580bf0_alt1(v4, *(_QWORD*)(a1 + 152), v6, (v9 & 1) == 0, 0, 0,
                          v9 & 1, 0);
        v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
        if ((v9 & 1) != 0) {
          v11 = 0;
        }
        else {
          v11 = v10;
        }
        v12 = ui_LayoutAccessor_FindPane_alt2(v4, "IconMasteryLv");
        if (v12 != 0) {
          v12 =
              __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
          v13 = 36;
          if ((v9 & 1) != 0) {
            v13 = 72;
          }
          if (v12 != 0) {
            v14 = v12;
            v15 = *(_DWORD*)((char*)GameData_212da30 + v13);
            v16 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v12 + 88LL))(v12,
                                                                           0);
            if (v16 != 0) {
              *(_DWORD*)(v16 + 12) = v15;
            }
            v12 = v14;
          }
        }
        GameRoutine_1841470_alt1(v12, v11);
        v17 = *(unsigned __int8*)(a1 + 24);
        v18 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        if (v17 >= (int)v18) {
          v19 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        }
        else {
          v19 = *(unsigned __int8*)(a1 + 24);
        }
        v20 = v17 == 0;
        v21 = v17 + 1;
        v22 = v19 - 1;
        if (v20) {
          v22 = 0;
        }
        v23 = *(_DWORD*)(GameData_21d99a8 + 4 * v22);
        if ((unsigned __int8)v21 < (int)v18) {
          LODWORD(v18) = (unsigned __int8)v21;
        }
        v24 = (int)v18 - 1;
        if ((unsigned __int8)v21 == v21) {
          v25 = v24;
        }
        else {
          v25 = 0;
        }
        v26 = *(_DWORD*)(GameData_21d99a8 + 4 * v25);
        LayoutAccessor_1560070_alt1((void*)(&v28_.v28), v4, "L_Gauge");
        GameHr_174dd80(a1, (__int64)&v28_.v28, v23, v26);
        if (v28_.v29 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v28_.v29);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt2(v5);
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

#pragma clang fp contract(off)
  _QWORD handle[2];
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
  char v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  int v48;
  float v49;
  float v50;
  int v51;
  float v52;
  float* v53;
  int v54;
  float v55;
  bool v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  const char* v72;
  char v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  int v85;
  _DWORD* v86;
  int v87;
  int v88;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  __int64 v97;
  unsigned int v98;
  unsigned int v99;
  __int64 v100;
  __int64 v101;
  float v102;
  int v103;
  float v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  float v108;
  __int64 v109;
  struct {
    __int64 v110;
    __int64 v111;
  } v110_;
  struct {
    const char* v112;
    __int64 v113;
  } v112_;
  struct {
    __int64* v114;
    __int64 v115;
  } v114_;
  float v116;

  if (*(_BYTE*)(a1 + 49) != 1) {
    return 0;
  }
  v9 = (**(__int64 (***)(__int64))a1)(a1);
  if (a2 == 0 || (v9 & 1) != 0) {
    v12 = (**(__int64 (***)(__int64))a1)(a1);
    v13 = 0x0.0p+0f;
    if ((v12 & 1) != 0) {
      if (a2 == 1) {
        v14 = *(float*)(a1 + 40);
        v15 = *(float*)(a1 + 44);
        v16 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f;
        if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) !=
            0) {
          v16 = v16 * 0x1.0000000000000p+3f;
        }
        v17 = v15 + v16;
        if (v14 >= v17) {
          v18 = v17;
        }
        else {
          v18 = *(float*)(a1 + 40);
        }
        if (v17 >= 0x0.0p+0f) {
          v19 = v18;
        }
        else {
          v19 = 0x0.0p+0f;
        }
        v21 = *(float*)(a1 + 16);
        v20 = *(_DWORD*)(a1 + 20);
        *(float*)(a1 + 44) = v19;
        v22 = (float)v20;
        v23 = GameRoutine_618640_alt1(4, 0x0.0p+0f, (float)v20, v19, v14);
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
      v32 = (float*)&v114_.v114;
      LODWORD(v114_.v114) = 0;
      if (v31 < 0x0.0p+0f) {
        v32 = (float*)(a1 + 16);
      }
    }
    else {
      v32 = (float*)&v114_.v114;
      LODWORD(v114_.v114) = 0;
      if (v31 > 0x0.0p+0f) {
        v32 = (float*)(a1 + 16);
      }
    }
    v33 = *v32;
    v34 = *(_DWORD*)(a1 + 36);
    v35 = *(_QWORD*)(a1 + 144);
    v36 = (int)(float)(v13 + v28);
    if (v33 == 0x0.0p+0f) {
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
    GameRoutine_90c6c0_alt1(v35, v40 - v29);
    if (*(_BYTE*)(a1 + 49) == 1) {
      v41 = (**(__int64 (***)(__int64))a1)(a1);
      v42 = 0x0.0p+0f;
      if ((v41 & 1) != 0) {
        if (a2 == 1) {
          v43 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f;
          if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) !=
              0) {
            v43 = v43 * 0x1.0000000000000p+3f;
          }
          v44 = *(float*)(a1 + 40);
          v45 = *(float*)(a1 + 44) + v43;
          if (v44 >= v45) {
            v46 = v45;
          }
          else {
            v46 = *(float*)(a1 + 40);
          }
          if (v45 >= 0x0.0p+0f) {
            v47 = v46;
          }
          else {
            v47 = 0x0.0p+0f;
          }
          v49 = *(float*)(a1 + 16);
          v48 = *(_DWORD*)(a1 + 20);
          *(float*)(a1 + 44) = v47;
          v42 = GameRoutine_618640_alt1(4, 0x0.0p+0f, (float)v48, v47, v44) -
                (float)((float)v48 - *(float*)(a1 + 16));
          if (v42 >= v49) {
            v50 = v42;
          }
          else {
            v50 = v49;
          }
          if (v49 < v42) {
            v42 = v49;
          }
          if (*(_BYTE*)(a1 + 48) != 0) {
            v42 = v50;
          }
        }
        else if (a2 == 2) {
          v42 = *(float*)(a1 + 16);
        }
      }
      v51 = *(unsigned __int8*)(a1 + 48);
      v52 = *(float*)(a1 + 16) - v42;
      *(float*)(a1 + 16) = v52;
      if (v51 == 1) {
        v53 = (float*)&v114_.v114;
        LODWORD(v114_.v114) = 0;
        if (v52 < 0x0.0p+0f) {
          v53 = (float*)(a1 + 16);
        }
      }
      else {
        v53 = (float*)&v114_.v114;
        LODWORD(v114_.v114) = 0;
        if (v52 > 0x0.0p+0f) {
          v53 = (float*)(a1 + 16);
        }
      }
      v54 = *(_DWORD*)(a1 + 36);
      v55 = v42 + *(float*)(a1 + 32);
      v56 = *v53 == 0x0.0p+0f;
      *(float*)(a1 + 16) = *v53;
      v57 = (int)v55;
      *(float*)(a1 + 32) = v55;
      if (v56) {
        v57 = v54;
      }
      *(_DWORD*)(a1 + 8) = v57;
      if (v57 >= v54) {
        v58 = 8;
      }
      else {
        v58 = 36;
      }
      if (v54 >= v57) {
        v59 = 8;
      }
      else {
        v59 = 36;
      }
      if (v51 != 0) {
        v60 = v58;
      }
      else {
        v60 = v59;
      }
      v61 = *(_DWORD*)(a1 + v60);
      *(_BYTE*)(a1 + 30) = 0;
      *(_DWORD*)(a1 + 8) = v61;
      (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
    }
    if (a2 != 0) {
      v62 = *(unsigned __int8*)(a1 + 56);
      v63 = *(_QWORD*)(a1 + 64);
      if ((v62 & 1) == 0) {
        v63 = v62 >> 1;
      }
      if (v63 != 0) {
        v64 = (v62 & 1) != 0 ? *(_QWORD*)(a1 + 72) : a1 + 57;
        if (v64 != 0) {
          snd_Fade_Fade_10c830_alt1((__int64)&v114_.v114, 0x0.0p+0f);
          snd_play_ff2d0_alt1((void*)(handle), v64, v64, (__int64)&v114_.v114,
                              0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(&v114_.v114);
        }
      }
      v65 = *(_QWORD*)(a1 + 136);
      if (v65 != 0) {
        v66 = std___1___shared_weak_count_lock_alt1(v65);
        if (v66 != 0) {
          v67 = *(__int64**)(a1 + 128);
          v68 = v66;
          if (v67 != nullptr) {
            v69 = ui_LayoutAccessor_FindTextBox_alt1(*(__int64**)(a1 + 128),
                                                     "T_NumNext");
            if (v69 != 0) {
              v70 = v69;
              v71 =
                  (_QWORD*)ui_LayoutAccessor_FindTextBox_alt1(v67, "T_NumNext");
              if (v71 != nullptr) {
                GameRoutine_190a0c0_alt1((float*)&v114_.v114,
                                         (__int64)&v112_.v112, &v116, v71,
                                         v71[27]);
                v72 = v112_.v112;
              }
              else {
                v72 = nullptr;
              }
              v73 = *(_BYTE*)(v70 + 88);
              *(_QWORD*)(v70 + 80) = v72;
              *(_BYTE*)(v70 + 88) = v73 | 0x10;
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
            std___1___shared_weak_count___release_weak_alt2(v68);
          }
        }
      }
    }
    if (*(_BYTE*)(a1 + 30) == 1 && (*(_BYTE*)(a1 + 48) & 1) == 0) {
      v74 = *(unsigned __int8*)(a1 + 104);
      v75 = *(_QWORD*)(a1 + 112);
      if ((v74 & 1) == 0) {
        v75 = v74 >> 1;
      }
      if (v75 != 0) {
        v76 = (v74 & 1) != 0 ? *(_QWORD*)(a1 + 120) : a1 + 105;
        if (v76 != 0) {
          snd_Fade_Fade_10c830_alt1((__int64)&v114_.v114, 0x0.0p+0f);
          snd_play_ff2d0_alt1((void*)(handle), v76, v76, (__int64)&v114_.v114,
                              0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(&v114_.v114);
        }
      }
    }
    v77 = *(_QWORD*)(a1 + 136);
    if (v77 == 0) {
      goto LABEL_173;
    }
    v78 = std___1___shared_weak_count_lock_alt1(v77);
    if (v78 == 0) {
      goto LABEL_173;
    }
    v79 = *(__int64**)(a1 + 128);
    v80 = v78;
    if (v79 == nullptr) {
    LABEL_171:
      if (atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
        std___1___shared_weak_count___release_weak_alt2(v80);
      }
    LABEL_173:
      v10 = (**(__int64 (***)(__int64))a1)(a1);
      return v10 & 1;
    }
    if (*(_BYTE*)(a1 + 30) == 1) {
      v81 = *(__int64**)(a1 + 128);
      v112_.v112 = "L_LvUP";
      v112_.v113 = 6;
      GameRoutine_1114920_alt2((void*)(&v114_.v114), v81, &v112_.v112);
      if (v114_.v115 != 0) {
        v82 = std___1___shared_weak_count_lock_alt1(v114_.v115);
        v83 = v114_.v114;
        if (v114_.v115 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v114_.v115);
        }
        if (v82 != 0 && v83 != nullptr) {
          BlnPopup_19f25b0_alt2(v83);
        }
        else if (v82 == 0) {
          goto LABEL_123;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
          std___1___shared_weak_count___release_weak_alt2(v82);
        }
      }
    }
  LABEL_123:
    v84 = *(_QWORD*)(a1 + 144);
    v85 = *(_DWORD*)(v84 + 4);
    v86 = *(_DWORD**)(*(_QWORD*)(v84 + 16) + 24LL);
    v87 = v86[105];
    v88 = v86[103];
    if (v87 > 2 && v88 <= v85) {
      if ((unsigned int)v87 <= 3) {
        goto LABEL_148;
      }
      v93 = 4;
    }
    else {
      if (v87 <= 1 || (signed __int32)v86[102] > v85) {
        if (v87 >= 1 && (signed __int32)v86[101] <= v85) {
          v92 = 1;
        }
        else {
          v92 = (int)v86[104];
        }
        v88 = v86[v92 + 100];
        if (v87 < 1 || (signed __int32)v86[101] > v85) {
          v94 = (int)v86[104];
          if ((int)v94 < v87) {
            v93 = v94 + 1;
            goto LABEL_147;
          }
        }
        else if ((unsigned int)v87 > 1) {
          v93 = 2;
          goto LABEL_147;
        }
      LABEL_148:
        v95 = 0;
      LABEL_149:
        v112_.v112 = "L_NumLv";
        v112_.v113 = 7;
        GameRoutine_9d5180_alt1((void*)(&v114_.v114), v79, &v112_.v112);
        if (v114_.v115 != 0) {
          v96 = std___1___shared_weak_count_lock_alt1(v114_.v115);
          v97 = (__int64)v114_.v114;
          if (v114_.v115 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v114_.v115);
          }
          if (v96 != 0 && v97 != 0) {
            v98 = game_90c8d0(*(_QWORD*)(a1 + 144));
            v99 = game_90c8d0(*(_QWORD*)(a1 + 144));
            StatusNum_1890220_alt1(
                v97, v98, v99,
                *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 144) + 16LL) +
                                      24LL) +
                           420LL),
                1, 0, -1);
            StatusNum_1890ac0_alt1(v97, 1);
            goto LABEL_156;
          }
          if (v96 != 0) {
          LABEL_156:
            if (atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
              std___1___shared_weak_count___release_weak_alt2(v96);
            }
          }
        }
        if (*(_BYTE*)(a1 + 28) == 1) {
          ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v79, "T_Next", 0);
          ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v79, "T_NumNext", 0);
          ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v79, "T_Max", 1);
          v100 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 144) + 16LL) + 24LL);
          v101 = v100 + 4LL * *(int*)(v100 + 420);
          v88 = *(_DWORD*)(v101 + 396);
          v95 = *(_DWORD*)(v101 + 400);
        }
        else {
          ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v79, "T_Next", 1);
          ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v79, "T_NumNext", 1);
          ui_LayoutAccessor_SetPaneVisible_alt2((__int64)v79, "T_Max", 0);
          v102 = ui_LayoutAccessor_GetPaneSize_alt1(v79, "T_NumNext");
          v103 = *(_DWORD*)(a1 + 8);
          v104 = v102;
          v105 = ui_LayoutAccessor_FindPane_alt2(v79, "T_NumNext");
          if (v105 != 0) {
            v106 =
                __dynamic_cast(v105, GameData_212d670[0], GameData_212d690, 0);
            if (v106 != 0) {
              GameRoutine_156c910_alt1(v106, "%d", 1,
                                       (unsigned int)(v95 - v103));
            }
          }
          v107 = (_QWORD*)ui_LayoutAccessor_FindTextBox_alt1(v79, "T_NumNext");
          if (v107 != nullptr) {
            GameRoutine_190a0c0_alt1((float*)&v114_.v114, (__int64)&v112_.v112,
                                     &v116, v107, v107[27]);
            v108 = *(float*)&v112_.v112;
          }
          else {
            v108 = 0x0.0p+0f;
          }
          if (v108 > v104) {
            ui_LayoutAccessor_FitPaneSizeToText_alt1(v79, "T_NumNext");
            v109 = ui_LayoutAccessor_FindAlignment_alt1(v79, "A_Next");
            if (v109 != 0) {
              Alignment_56b600_alt1(v109);
            }
          }
        }
        LayoutAccessor_1560070_alt1((void*)(&v110_.v110), v79, "L_Gauge");
        GameHr_174dd80(a1, (__int64)&v110_.v110, v88, v95);
        if (v110_.v111 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v110_.v111);
        }
        goto LABEL_171;
      }
      v88 = v86[102];
      if ((unsigned int)v87 <= 2) {
        goto LABEL_148;
      }
      v93 = 3;
    }
  LABEL_147:
    v95 = v86[v93 + 100];
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

__int64 GaugeUtil_UnitExpChangeUtil_Unknown5()
{
  unsigned __int64 v0;
  int v1;
  __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v0 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((_DWORD)v0 == 1) {
    v1 = 0;
  }
  else {
    v1 = *(_DWORD*)(GameData_21d9968 + 4);
  }
  v2 = GameData_21d9968 - 4;
  v3 = 1;
  v4 = (v1 - *(int*)GameData_21d9968) & ~((v1 - *(int*)GameData_21d9968) >> 31);
  do {
    if (v3 >= (int)v0) {
      v7 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    else {
      v7 = v3;
    }
    if (v3 < (int)v0) {
      v8 = *(_DWORD*)(GameData_21d9968 + 4LL * v7);
    }
    else {
      v8 = 0;
    }
    v9 = v8 - *(int*)(v2 + 4LL * v7);
    if (v9 > v4) {
      v4 = v9;
    }
    v10 = v3 + 1;
    if (v3 + 1 < (int)v0) {
      v11 = v3 + 1;
    }
    else {
      v11 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    if (v10 < (int)v0) {
      v5 = *(_DWORD*)(GameData_21d9968 + 4LL * v11);
    }
    else {
      v5 = 0;
    }
    v6 = v5 - *(int*)(v2 + 4LL * v11);
    if (v6 > v4) {
      v4 = v6;
    }
    v3 = v10 + 1;
  } while (v10 != 98);
  return (unsigned int)v4 >> 1;
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
  _QWORD handle[2];
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
          snd_play_ff2d0_alt1((void*)(handle), v34, v34, (__int64)v35, 0,
                              0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
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

void GaugeUtil_17530b0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_MasteryExpChange_vtable;
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v2);
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
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
      nn_mem_StandardAllocator_Free_alt1(
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
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
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
