#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* DisposFile_6bc220(__int64);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* Image_72b6c0(_QWORD*);
_WORD* GameRoutine_6d7b80(__int64);
__attribute__((swiftcall)) void GameRoutine_1140e80(PSEUDO_X8, _DWORD*);
__attribute__((swiftcall)) void GameRoutine_134b980(PSEUDO_X8,
                                                    __int64(__fastcall*)());
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void Layout_c147c0(PSEUDO_X8, unsigned __int8*,
                                              const char*);
__attribute__((swiftcall)) void MapBattleHUD_18c4640(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void MapBattleHUD_18c6be0(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void game_103bcc0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_d74a00(PSEUDO_X8, float*);
__int64** GameHr_14a1e70(__int64** result, float);
__int64* CharacterModel_1070c00(__int64, __int64);
__int64* GameRoutine_1141380(__int64* result, __int64*);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64 AsyncLoadThumbImage_18c0070(__int64 result, unsigned __int8);
__int64 BattlePopupBlaze_18c2620(__int64);
__int64 GameHr_11e8ca0(__int64, __int64);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_18c6e70(__int64, __int64, __int64*, char, char);
__int64 GameHr_6c47b0(__int64, _BYTE*, char, char);
__int64 GameHr_740080(__int64 result, __int64*, __int64, __int64*, __int64);
__int64 GameRoutine_10a09d0(__int64);
__int64 GameRoutine_11e9180(__int64, __int64);
__int64 GameRoutine_12e2b00(__int64*);
__int64 GameRoutine_14a17c0(__int64*, long double);
__int64 GameRoutine_1a09d20(unsigned __int64, __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_5b6900(__int64 result, int);
__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_74e220(__int64 result, int*, char*, unsigned __int64);
__int64 GameRoutine_eaec10(__int64*, __int64);
__int64 GameRoutine_f0e580(__int64, __int64);
__int64 GameVariable_82f5a0(float*, unsigned __int16*, __int64, _WORD**);
__int64 HubCharacterNatives_cf7940(__int64);
__int64 Image_72b4a0(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 Pane_58dee0(__int64 result, __int64);
__int64 Pane_58df60(__int64 result, _QWORD*);
__int64 Trick_7d2180(__int64, unsigned int, unsigned int, __int64);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 UnitActor_81ab40(__int64, float, float);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 eft_EmitterSetHandle_Get_5b6700(_DWORD*);
__int64 fs_609260(__int64, const char*, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_14a1b00(__int64*, float);
__int64 game_14a3920(__int64 result);
__int64 game_159e7c0(__int64*, char);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_6d69a0(__int64);
__int64 game_7408a0(__int64 result, __int64*, __int64, __int64*, __int64);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_Unit_GetJob(__int64);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_ResetMount(__int64);
__int64 game_zview_cf22c0(__int64, __int64, char);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
bool EffectConst_964040(__int64);
bool game_Unit_IsImmobile(__int64);
extern _DWORD GameData_1a83bd0[2];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a837f0;
extern __int64 (***GameData_212c3c8)();
extern __int64 (*GameData_1f949a8[])();
extern __int64 (*GameData_1f94a28[])();
extern __int64 (*GameData_1f9b0a8[])();
extern __int64 (*GameData_1f9b128[])();
extern __int64 (*GameData_1f9b1a8[])();
extern __int64 (*GameData_1f9b2a8[])();
extern __int64 (*GameData_2011fa8[3])();
extern __int64 (*GameData_20196c8[])();
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*game_map_MapContactEventBase_vtable[])();
extern __int64 (*game_map_MapTreasureboxEvent_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212d570[7];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ed08[13];
extern __int64* GameData_212ee38[3];
extern __int64* GameData_21309c8[5];
extern __int64* GameData_21320c0[4];
extern __int64* GameData_21320d0[2];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_2107c00;
extern __int64 GameData_212c060;
extern __int64 GameData_212c610;
extern __int64 GameData_212d028[4];
extern __int64 GameData_212d310;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21c96d8;
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd138;
extern __int64 GameData_220f870;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_script_map_effect_g_effect_manager;
extern char* GameData_1ff1938;
extern char GameData_1a9f09e;
extern unsigned __int8 GameData_1b41aa9[22];
extern unsigned __int8 GameData_1b41abf[17];
float CharacterAnimator_1079580(__int64, int, float, float, float);
float Height_7c4d10(__int64, float, float);
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
int __cxa_guard_acquire(__int64);
int snprintf(__int64, unsigned __int64, const char*, ...);
int sscanf(const char*, const char*, ...);
long double GameRoutine_a5cfa0(__int64, __int128*, float32x4_t*, float32x4_t*,
                               __int64);
unsigned __int64 GameRoutine_11e94c0(__int64, __int64, __int64);
unsigned __int64 GameRoutine_11e96a0(__int64, __int64);
unsigned __int64 strlen(const char*);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void* GameHr_a5dbb0();
void EffectConst_964320(const char**, const char**, const char**, __int64);
void GameHr_a5aca0(__int64);
void GameHr_f0e0b0(__int64, unsigned int);
void GameRoutine_6c1760(__int64, __int64);
void GameRoutine_9693c0(__int64*, unsigned __int64);
void ProcMapSeqZoomViewer_fb0fc0();
void __attribute__((noreturn)) GameRoutine_18c7090();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6bddd0();
void __attribute__((noreturn)) GameRoutine_7d18f0();
void __attribute__((noreturn)) GameRoutine_9692a0();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_741260(_QWORD*, const char*, int);
void game_map_1141200(_QWORD*, unsigned int, __int64*);
void game_map_anonymous_73e2a0(_QWORD*, _QWORD*, unsigned __int16, int, int,
                               __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void ui_ILayoutControl_UpdatePath(__int64);
_QWORD* game_map_73aac0();
__int64 game_map_7d1920(__int64 a1, char** a2);
void game_map_965220(__int64 a1, unsigned int a2, unsigned int a3,
                     unsigned int a4, _QWORD* a5, float a6);
void game_map_f0da60(__int64 a1);
__int64 game_map_faf4a0(__int64 a1);
__int64 game_map_fb01c0(__int64 a1);
__int64 game_map_1125a60(__int64 a1, __int64* a2, float a3, float a4, float a5,
                         __int64 a6, _DWORD* a7);
void game_map_11404a0(__int64 a1, int a2, __int64* a3);
void game_map_1141940(__int64 a1, __int64 a2);
__int64 game_map_1832df0(__int64 a1, char a2, char a3);
__int64 game_map_18c51a0(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 game_map_18c5620(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 game_map_18c57d0(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 game_map_18c5980(__int64 a1, int* a2, char a3, int a4, int a5, char a6,
                         char a7);
__int64 game_map_18c5f30(__int64 a1, __int64 a2, char a3, int a4, int a5,
                         char a6);
void game_map_18c7220(__int64 a1);
__int64 game_map_19f4d00(__int64 a1, int* a2, _DWORD** a3);
__attribute__((swiftcall)) void game_map_1a01550(PSEUDO_X8 x8_,
                                                 __int64 unused_int0,
                                                 __int64 a1, char a2, char a3);

_QWORD* game_map_73aac0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v13;
  int v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned int* v22;
  __int64 v23;
  __int64 v24;
  __int64 (*v25)();
  __int64* v26;
  unsigned __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64* v63;
  __int64 v64;
  bool v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  char v83;
  unsigned int v84;
  float v85;
  __int64 v86;
  int v87;
  __int64 v88;
  __int64 v89;
  char v90;
  int v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  struct {
    __int64 (*v111)();
    __int64 (*v112)();
  } v111_;
  struct {
    __int64 v113;
    __int64 v114;
    __int64 v115;
  } v113_;
  struct {
    __int64* v116;
    __int64* v117;
    __int64 v118;
  } v116_;
  struct {
    __int64 v119[4];
    __int64* v120;
  } v119_;
  __int64 v121;

  LODWORD(v119_.v119[0]) = 511;
  v0 = game_UnitPool_GetFirst((int*)v119_.v119);
  if (v0 != 0) {
    v1 = *(_QWORD*)(v0 + 432);
    if (v1 == 0) {
      v19 = *(_QWORD*)(v0 + 440);
      if (v19 == 0 || (v20 = *(unsigned __int8*)(v19 + 16)) > 8) {
      LABEL_12:
        game_Unit_ResetMount(v0);
        goto LABEL_13;
      }
      v21 = 24LL * (unsigned int)v20 + 556024;
      while (1) {
        if (v20 <= 7) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v21);
          if (v1 != 0) {
            break;
          }
        }
        ++v20;
        v21 += 24;
        if (v20 == 9) {
          goto LABEL_12;
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        game_Unit_ResetMount(v0);
        v1 = *(_QWORD*)(v2 + 432);
        v0 = v2;
      } while (v1 != 0);
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 == 0) {
        break;
      }
      v4 = *(unsigned __int8*)(v3 + 16);
      if (v4 > 8) {
        break;
      }
      v5 = 24LL * (unsigned int)v4 + 556024;
      while (1) {
        if (v4 <= 7) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v5);
          if (v1 != 0) {
            break;
          }
        }
        ++v4;
        v5 += 24;
        if (v4 == 9) {
          goto LABEL_11;
        }
      }
      v0 = v2;
    }
  LABEL_11:
    v0 = v2;
    goto LABEL_12;
  }
LABEL_13:
  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0) {
    v119_.v120 = nullptr;
    v6 = DisposFile_6bc220((__int64)"Player");
    game_map_anonymous_73e2a0((_QWORD*)*v6, (_QWORD*)v6[1], 0, -1, -1,
                              (__int64)v119_.v119);
    v119_.v120 = nullptr;
    v7 = DisposFile_6bc220((__int64)"Enemy");
    game_map_anonymous_73e2a0((_QWORD*)*v7, (_QWORD*)v7[1], 0, -1, -1,
                              (__int64)v119_.v119);
    v119_.v120 = nullptr;
    v8 = DisposFile_6bc220((__int64)"Third");
    game_map_anonymous_73e2a0((_QWORD*)*v8, (_QWORD*)v8[1], 0, -1, -1,
                              (__int64)v119_.v119);
    v119_.v120 = nullptr;
    v9 = DisposFile_6bc220((__int64)"Ally");
    game_map_anonymous_73e2a0((_QWORD*)*v9, (_QWORD*)v9[1], 0, -1, -1,
                              (__int64)v119_.v119);
    goto LABEL_16;
  }
  v13 = *(_QWORD*)(*GameData_212c790 + 8);
  v14 = *(_DWORD*)(v13 + 56);
  v15 = *(__int64**)(v13 + 8);
  v16 = *(__int64**)(v13 + 16);
  if ((v14 & 0x80000000) == 0) {
    while (v15 != v16) {
      v18 = *v15++;
      v17 = v18;
      if (*(_DWORD*)(v18 + 84) == v14) {
        goto LABEL_35;
      }
    }
  LABEL_30:
    v22 = game_gmap_SpotMgr_GetCurrentSpot();
    if (v22 == nullptr) {
      goto LABEL_16;
    }
    goto LABEL_36;
  }
  if (v15 == v16) {
    goto LABEL_30;
  }
  while (1) {
    v17 = *v15;
    if (*(_QWORD*)(*v15 + 96) == 0 && *(_QWORD*)(v17 + 552) == 0) {
      break;
    }
    if (++v15 == v16) {
      goto LABEL_30;
    }
  }
LABEL_35:
  v22 = *(unsigned int**)v17;
  if (*(_QWORD*)v17 == 0) {
    goto LABEL_16;
  }
LABEL_36:
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    v23 = *(_QWORD*)(GameData_21ca310 + 56);
    v119_.v119[0] = (__int64)GameData_20196c8;
    v119_.v120 = v119_.v119;
    GameRoutine_6c1760(v23 + 556096, (__int64)v119_.v119);
    if (v119_.v120 == v119_.v119) {
      v24 = 32;
    }
    else {
      if (v119_.v120 == nullptr) {
        goto LABEL_43;
      }
      v24 = 40;
    }
    (*(void (**)(__int64))(*v119_.v120 + v24))((__int64)v119_.v120);
  }
LABEL_43:
  v119_.v120 = nullptr;
  game_map_anonymous_73e2a0((_QWORD*)GameData_21ca240,
                            (_QWORD*)GameData_21ca248, 0, -1, -1,
                            (__int64)v119_.v119);
  GameRoutine_134b980((void*)(&v111_.v111), (__int64 (*)())v22);
  v25 = v111_.v111;
  v26 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v111_.v112 != v111_.v111) {
    v27 = 0;
    v28 = game_map_MapRandom_instance__ptr[0];
    do {
      v30 = *((_QWORD*)v25 + v27);
      if (v30 != 0) {
        v29 = v27 + 1;
        snprintf((__int64)v119_.v119, 0x20u, "%s%d", "Enemy", v27 + 1);
        v31 = DisposFile_6bc220((__int64)v119_.v119);
        v33 = *v31;
        v32 = v31[1];
        v34 = v32 - *v31;
        if (v32 != *v31) {
          v110 = v27;
          v108 = v27 + 1;
          if ((v34 & 0x8000000000000000LL) != 0) {
          LABEL_184:
            GameRoutine_6bddd0();
          }
          v109 = v30;
          v35 = fw_memory_HeapManager_Allocate(*v26, v34, 16, 0);
          memcpy(v35, v33, v34);
          v36 = v34 >> 3;
          if ((int)(v34 >> 3) >= 2) {
            v37 = v36 - 1;
            v38 = v35 + 8;
            v39 = (__int64*)(v35 + 8);
            v40 = (unsigned int)(v36 - 1);
            do {
              nn_os_LockMutex((__int64)&game_g_random_mutex);
              v41 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 8);
              v42 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 12);
              v43 =
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28) ^
                  (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28) << 11);
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28) =
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 4);
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 4) = v41;
              v44 = (v43 >> 8) ^ (v42 >> 19) ^ v43 ^ v42;
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 8) = v42;
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28 + 12) = v44;
              v45 = v44 & 0x7FFFFFFF;
              nn_os_UnlockMutex((__int64)&game_g_random_mutex);
              v46 = *v39;
              --v40;
              *v39++ = *(_QWORD*)(v38 + 8LL * (v45 % v37));
              *(_QWORD*)(v38 + 8LL * (v45 % v37)) = v46;
            } while (v40 != 0);
          }
          v47 = 0;
          v48 = 0;
          v49 = 0;
          v50 = nullptr;
          v116_.v117 = nullptr;
          v116_.v118 = 0;
          v116_.v116 = nullptr;
          do {
            v51 = *(_QWORD*)(v35 + v47);
            if ((unsigned __int64)v50 < v49) {
              *v50++ = v51;
            }
            else {
              v52 = (char*)v50 - v48;
              v53 = ((__int64)v50 - v48) >> 3;
              v54 = v53 + 1;
              if ((unsigned __int64)(v53 + 1) >> 61 != 0) {
                goto LABEL_184;
              }
              if ((__int64)(v49 - v48) >> 2 > v54) {
                v54 = (__int64)(v49 - v48) >> 2;
              }
              if (v49 - v48 >= 0x7FFFFFFFFFFFFFF8LL) {
                v55 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v55 = v54;
              }
              if (v55 != 0) {
                if (v55 >> 61 != 0) {
                  GameRoutine_60a210();
                }
                v56 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v55, 16, 0);
              }
              else {
                v56 = 0;
              }
              v49 = v56 + 8 * v55;
              v57 = (unsigned __int64)v50 - v48;
              v58 = (__int64)&v52[v56 + -8 * v53];
              *(_QWORD*)&v52[v56] = v51;
              v50 = (__int64*)&v52[v56 + 8];
              memcpy(v58, v48, v57);
              if (v48 != 0) {
                v59 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v59 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v48);
              }
              v48 = v58;
            }
            v47 += 8;
          } while (v34 != v47);
          v119_.v119[0] = (__int64)GameData_1f949a8;
          v119_.v119[1] = (__int64)&v116_.v116;
          v119_.v120 = v119_.v119;
          Troop_133ed80(v109, (__int64)v119_.v119);
          if (v119_.v120 == v119_.v119) {
            v60 = 32;
          LABEL_76:
            (*(void (**)(__int64))(*v119_.v120 + v60))((__int64)v119_.v120);
          }
          else if (v119_.v120 != nullptr) {
            v60 = 40;
            goto LABEL_76;
          }
          v61 = ((__int64)v50 - v48) >> 3;
          if (v61 < 129) {
            v64 = 0;
          LABEL_83:
            GameHr_740080(v48, v50, ((__int64)v50 - v48) >> 3, nullptr, v64);
          }
          else {
            v62 = ((__int64)v50 - v48) >> 3;
            while (1) {
              v63 = (__int64*)GameRoutine_1a09d20(8 * v62, GameData_212c060);
              if (v63 != nullptr) {
                break;
              }
              v64 = v62 >> 1;
              v65 = v62 > 1;
              v62 >>= 1;
              if (!v65) {
                goto LABEL_83;
              }
            }
            v66 = (__int64)v63;
            GameHr_740080(v48, v50, ((__int64)v50 - v48) >> 3, v63, v62);
            v67 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v67 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v66);
          }
          v68 = (__int64)v116_.v116;
          v69 = v116_.v117;
          v70 = v116_.v117 - v116_.v116;
          if (v70 < 129) {
            v73 = 0;
          LABEL_93:
            game_7408a0(v68, v69, v70, nullptr, v73);
          }
          else {
            v71 = v116_.v117 - v116_.v116;
            while (1) {
              v72 = (__int64*)GameRoutine_1a09d20(8 * v71, GameData_212c060);
              if (v72 != nullptr) {
                break;
              }
              v73 = v71 >> 1;
              v65 = v71 > 1;
              v71 >>= 1;
              if (!v65) {
                goto LABEL_93;
              }
            }
            v74 = (__int64)v72;
            game_7408a0(v68, v69, v70, v72, v71);
            v75 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v75 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v75, v74);
          }
          v76 = (__int64)v116_.v116;
          if (v116_.v117 - v116_.v116 >= (unsigned __int64)v61) {
            v77 = v61;
          }
          else {
            v77 = v116_.v117 - v116_.v116;
          }
          if (v77 != 0) {
            v78 = 0;
            while (1) {
              v79 = v116_.v116[v78];
              if (v79 != 0) {
                v80 = *(_QWORD*)(v48 + 8 * v78);
                if ((signed __int32)*(_DWORD*)(v79 + 592) <=
                    (int)*(unsigned __int8*)(v80 + 56)) {
                  v81 = *(_QWORD*)(GameData_21ca310 + 56);
                  v82 = *(_QWORD*)(v81 + 556216);
                  if (v82 != 0) {
                    break;
                  }
                }
              }
            LABEL_102:
              if (v77 == ++v78) {
                goto LABEL_144;
              }
            }
            GameRoutine_6c3980(*(_QWORD*)(v81 + 556216), v79);
            v83 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v83 = *(_BYTE*)(game_GameModeData_instance_ + 13);
            }
            *(_BYTE*)(v82 + 624) = v83;
            game_6d69a0(v82);
            if ((*(_BYTE*)(v82 + 418) & 0x20) != 0) {
              *(_BYTE*)(v82 + 501) = *(_BYTE*)(v82 + 501) & 0x1F | (32 * v110);
            }
            *(_WORD*)(v82 + 584) = *(_WORD*)(v80 + 54);
            v84 = *(unsigned __int8*)(v80 + 57);
            if (v84 > 5) {
              if (*(unsigned __int8*)(v80 + 57) > 8u) {
                if (v84 == 9) {
                  v85 = 0x1.0e00000000000p+7f;
                  goto LABEL_128;
                }
                if (v84 == 12) {
                  v85 = 0x1.6800000000000p+5f;
                  goto LABEL_128;
                }
              }
              else {
                if (v84 == 6) {
                  v85 = 0x1.3b00000000000p+8f;
                  goto LABEL_128;
                }
                if (v84 == 8) {
                  v85 = 0x1.6800000000000p+6f;
                LABEL_128:
                  UnitActor_81ab40(v82, v85, 0x0.0p+0f);
                  goto LABEL_129;
                }
              }
            }
            else {
              if (*(unsigned __int8*)(v80 + 57) <= 1u) {
                if (*(_BYTE*)(v80 + 57) != 0) {
                  v85 = 0x1.6800000000000p+7f;
                  goto LABEL_128;
                }
              LABEL_129:
                v119_.v119[0] = game_Unit_GetJob(v82);
                v86 = GameRoutine_12e2b00(v119_.v119);
                if (v86 != 0) {
                  GameRoutine_11e9180(v82 + 1968, v86);
                }
                else {
                  GameHr_11e8ca0(v82 + 1968, v80 + 224);
                  GameRoutine_11e96a0(v82 + 1968, v82);
                }
                GameRoutine_11e94c0(v82 + 1968, v80, v82);
                v87 = *(unsigned __int8*)(v80 + 48);
                v88 = *(_QWORD*)(v82 + 392);
                v89 = game_GameModeData_instance_;
                LOBYTE(v113_.v113) = *(_BYTE*)(v80 + 48);
                if (game_GameModeData_instance_ != 0) {
                  v89 = *(_QWORD*)(game_GameModeData_instance_ + 96);
                }
                if (v88 == v89 || (*(_BYTE*)(v82 + 418) & 8) != 0) {
                  if (v87 != 9) {
                    goto LABEL_138;
                  }
                }
                else {
                  LODWORD(v119_.v119[0]) =
                      *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
                  if ((game_HasSkill((_QWORD*)(v82 + 1744),
                                     (unsigned int*)v119_.v119) &
                       1) != 0 &&
                      (unsigned __int8)v113_.v113 != 9) {
                  LABEL_138:
                    v90 = 0;
                    goto LABEL_141;
                  }
                }
                v90 = 1;
              LABEL_141:
                GameHr_6c47b0(v82, &v113_.v113, v90, 0);
                v91 = *(_DWORD*)(v82 + 416);
                if ((v91 & 0x10000000) == 0) {
                  *(_DWORD*)(v82 + 416) = v91 | 0x10000000;
                  game_6c51e0(v82);
                  GameRoutine_6c6da0(v82);
                  game_6c6ec0(v82);
                  *(_DWORD*)(v82 + 416) &= ~0x10000000u;
                }
                goto LABEL_102;
              }
              if (v84 == 2) {
                v85 = 0x1.0e00000000000p+8f;
                goto LABEL_128;
              }
              if (v84 == 3) {
                v85 = 0x1.c200000000000p+7f;
                goto LABEL_128;
              }
            }
            v85 = 0x0.0p+0f;
            goto LABEL_128;
          }
          if (v48 != 0) {
          LABEL_144:
            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v92 = 128;
            }
            else {
              v92 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, v48);
            v76 = (__int64)v116_.v116;
          }
          else {
            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          if (v76 != 0) {
            v93 = *v26;
            v116_.v117 = (__int64*)v76;
            if (*(_QWORD*)(v93 + 200) != 0) {
              v94 = 128;
            }
            else {
              v94 = 56;
            }
            nn_mem_StandardAllocator_Free(v93 + v94, v76);
          }
          if (*(_QWORD*)(*v26 + 200) != 0) {
            v95 = 128;
          }
          else {
            v95 = 56;
          }
          nn_mem_StandardAllocator_Free(*v26 + v95, v35);
          v96 = *((_QWORD*)v111_.v111 + v110);
          if (v96 != 0) {
            v97 = *(_QWORD*)(v96 + 608);
            v98 = *(_QWORD*)(v96 + 616);
            v99 = v119_.v119;
            v116_.v117 = nullptr;
            v116_.v118 = 0;
            v113_.v115 = 0;
            v116_.v116 = nullptr;
            v113_.v113 = 0;
            v113_.v114 = 0;
            v119_.v119[0] = (__int64)GameData_1f94a28;
            v119_.v119[1] = (__int64)&v116_.v116;
            v119_.v120 = v119_.v119;
            v119_.v119[2] = (__int64)&v113_.v113;
            if (v97 == v98) {
              goto LABEL_163;
            }
            do {
              v121 = v97;
              if (v119_.v120 == nullptr) {
                GameRoutine_60a310();
              }
              (*(void (**)(__int64*, __int64*))(*v119_.v120 + 48))(v119_.v120,
                                                                   &v121);
              v97 += 2224;
            } while (v97 != v98);
            v99 = v119_.v120;
            if (v119_.v120 == v119_.v119) {
            LABEL_163:
              v100 = 32;
            LABEL_164:
              (*(void (**)(__int64))(*v99 + v100))((__int64)v99);
            }
            else if (v119_.v120 != nullptr) {
              v100 = 40;
              goto LABEL_164;
            }
            if (v116_.v117 == v116_.v116 ||
                (v101 = v113_.v113, v113_.v114 == v113_.v113)) {
              game_741260(&v116_.v116, "Animal", v110);
              game_741260(&v113_.v113, "Mummy", v110);
              v101 = v113_.v113;
            }
            if (v101 != 0) {
              v102 = *v26;
              v113_.v114 = v101;
              if (*(_QWORD*)(v102 + 200) != 0) {
                v103 = 128;
              }
              else {
                v103 = 56;
              }
              nn_mem_StandardAllocator_Free(v102 + v103, v101);
            }
            if (v116_.v116 != nullptr) {
              v104 = *v26;
              v116_.v117 = v116_.v116;
              if (*(_QWORD*)(v104 + 200) != 0) {
                v105 = 128;
              }
              else {
                v105 = 56;
              }
              nn_mem_StandardAllocator_Free(v104 + v105, (__int64)v116_.v116);
            }
          }
          v29 = v108;
        }
      }
      else {
        v29 = v27 + 1;
      }
      v25 = v111_.v111;
      v27 = v29;
    } while (v29 < ((char*)v111_.v112 - (char*)v111_.v111) >> 3);
  }
  if (v25 != nullptr) {
    v106 = *v26;
    v111_.v112 = v25;
    v107 = 128;
    if (*(_QWORD*)(v106 + 200) == 0) {
      v107 = 56;
    }
    nn_mem_StandardAllocator_Free(v106 + v107, (__int64)v25);
  }
LABEL_16:
  v10 = GameData_212ce98[0];
  Image_72b4a0(*(_QWORD*)(*GameData_212ce98[0] + 96));
  v11 = *(_QWORD**)(*v10 + 96);
  Image_72b4a0((__int64)v11);
  return Image_72b6c0(v11);
}

__int64 game_map_7d1920(__int64 a1, char** a2)
{
  int v4;
  int* v5;
  int* v6;
  int v7;
  __int64 v8;
  char* v9;
  unsigned int v10;
  int v11;
  char* v12;
  char* v13;
  int v14;
  char v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  _WORD* v19;
  __int64 v20;
  int v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  unsigned __int8* v30;
  int v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 (***v35)();
  __int64 v36;
  __int64 v38;
  __int64 (***v39)();
  _QWORD* v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  char* v47;
  unsigned __int64 v48;
  _QWORD* v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int8 v62;
  _BYTE v63[4];
  int v64;
  struct {
    __int64 (**v65)();
    _BYTE* v66;
    __int64 v67;
    _BYTE* v68;
    __int64 (***v69)();
  } v65_;
  __int64 v70;

  v63[0] = 1;
  v65_.v65 = GameData_1f9b0a8;
  v65_.v66 = (_BYTE*)a1;
  v65_.v67 = (__int64)a2;
  v65_.v68 = v63;
  v65_.v69 = &v65_.v65;
  v4 = *((_DWORD*)a2 + 9) * *((_DWORD*)a2 + 8);
  if (v4 < 2) {
    if (v4 == 1 && (Trick_7d2180(a1, *((_DWORD*)a2 + 6), *((_DWORD*)a2 + 7),
                                 (__int64)a2[7]) &
                    1) == 0) {
      *v65_.v68 = 0;
    }
  }
  else {
    v5 = (int*)*a2;
    v6 = (int*)a2[1];
    if (*a2 != (char*)v6) {
      while (1) {
        v7 = *((char*)v5 + 1);
        LODWORD(v70) = *(char*)v5;
        v64 = v7;
        if (v65_.v69 == nullptr) {
          break;
        }
        ((void (*)(__int64 (***)(void), __int64*, int*))(*v65_.v69)[6])(
            v65_.v69, &v70, &v64);
        if (++v5 == v6) {
          goto LABEL_9;
        }
      }
    LABEL_66:
      GameRoutine_60a310();
    }
  }
LABEL_9:
  if (v65_.v69 == &v65_.v65) {
    v8 = 4;
  }
  else {
    if (v65_.v69 == nullptr) {
      goto LABEL_14;
    }
    v8 = 5;
  }
  ((__int64 (*)(__int64))(*v65_.v69)[v8])((__int64)v65_.v69);
LABEL_14:
  if (v63[0] != 1) {
    return 0;
  }
  v9 = a2[7];
  if (v9 != nullptr) {
    v10 = GameData_1b41aa9[(unsigned __int8)v9[57]];
  }
  else {
    v10 = 0;
  }
  v63[0] = v10;
  v62 = 0;
  v65_.v65 = GameData_1f9b128;
  v65_.v66 = &v62;
  v65_.v67 = a1;
  v65_.v68 = v63;
  v65_.v69 = &v65_.v65;
  v11 = *((_DWORD*)a2 + 9) * *((_DWORD*)a2 + 8);
  if (v11 < 2) {
    if (v11 == 1) {
      v15 = 0;
      v16 = *((_DWORD*)a2 + 6) + 32 * *((_DWORD*)a2 + 7);
      if (v16 >= 0x400) {
        v16 = 0;
      }
      v17 = *(__int16*)(a1 + ((unsigned __int64)GameData_1b41abf[v10] << 11) +
                        2LL * v16 + 104);
      if ((v17 & 0x8000000000000000LL) == 0) {
        v18 = *(_QWORD*)(a1 + 8);
        if (v18 != 0) {
          v19 = (_WORD*)(v18 + 144LL * (int)v17);
          if (v10 ==
              (*(unsigned __int8 (**)(_WORD*))(*(_QWORD*)v19 + 40LL))(v19)) {
            if (((*(__int64 (**)(_WORD*))(*(_QWORD*)v19 + 480LL))(v19) & 1) !=
                0) {
              v19[10] |= 2u;
            }
            else {
              (*(void (**)(_WORD*))(*(_QWORD*)v19 + 416LL))(v19);
            }
            v15 = 1;
            *(_BYTE*)(a1 + 92848) = 1;
          }
          else {
            v15 = 0;
          }
        }
      }
      *v65_.v66 |= v15;
    }
  }
  else {
    v12 = *a2;
    v13 = a2[1];
    if (*a2 != v13) {
      do {
        v14 = v12[1];
        LODWORD(v70) = *v12;
        v64 = v14;
        if (v65_.v69 == nullptr) {
          goto LABEL_66;
        }
        ((void (*)(__int64 (***)(void), __int64*, int*))(*v65_.v69)[6])(
            v65_.v69, &v70, &v64);
        v12 += 4;
      } while (v12 != v13);
    }
  }
  if (v65_.v69 == &v65_.v65) {
    v20 = 4;
  }
  else {
    if (v65_.v69 == nullptr) {
      goto LABEL_40;
    }
    v20 = 5;
  }
  ((__int64 (*)(__int64))(*v65_.v69)[v20])((__int64)v65_.v69);
LABEL_40:
  v21 = v62;
  v22 = a2[7];
  if (v22 != nullptr && v22[57] != 19) {
    v23 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(a1 + 16) != v23) {
      v24 = 0;
      v25 = 0;
      while (
          ((*(__int64 (**)(__int64))(*(_QWORD*)(v23 + v24) + 8LL))(v23 + v24) &
           1) == 0) {
        v23 = *(_QWORD*)(a1 + 8);
        ++v25;
        v24 += 144;
        if (0x8E38E38E38E38E39LL * ((*(_QWORD*)(a1 + 16) - v23) >> 4) <= v25) {
          goto LABEL_58;
        }
      }
      v26 = *(_QWORD*)(a1 + 8);
      if (v26 != 0) {
        v27 = v26 + v24;
        (*(void (**)(__int64))(*(_QWORD*)(v26 + v24) + 720LL))(v26 + v24);
        v28 = a2[7];
        if (v28 != nullptr) {
          LOBYTE(v28) = GameData_1b41aa9[(unsigned __int8)v28[57]];
        }
        v29 = v26 + v24;
        *(_BYTE*)(v29 + 10) = (_BYTE)v28;
        *(_QWORD*)(v29 + 32) = a2[8];
        *(_QWORD*)(v29 + 40) = a2[9];
        *(_QWORD*)(v29 + 48) = a2[7];
        *(_WORD*)(v29 + 20) = *((_WORD*)a2 + 40);
        *(_BYTE*)(v29 + 14) = *((_BYTE*)a2 + 48);
        v30 = (unsigned __int8*)a2[7];
        if (v30 == nullptr || (unsigned int)v30[57] - 4 > 2) {
          if (v30[63] != 0) {
            v44 = (__int64)a2[5];
            if (v44 != 0) {
              LOBYTE(v65_.v65) = 0;
              LODWORD(v30) =
                  (int)(game_Unit_GetParam(v44) * (unsigned __int8)a2[7][63]) /
                  100;
              if ((int)v30 <= 1) {
                LOBYTE(v30) = 1;
              }
            }
            else {
              LOBYTE(v30) = 1;
            }
          }
          else {
            LOBYTE(v30) = v30[62];
          }
          goto LABEL_92;
        }
        if (GameData_21c96d8 == 0) {
          goto LABEL_91;
        }
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_57;
        }
        v31 = *(unsigned __int8*)(game_GameModeData_instance_ + 13);
        if (v31 == 2) {
          LOBYTE(v30) = v30[116];
          goto LABEL_92;
        }
        if (v31 == 1) {
          LOBYTE(v30) = v30[115];
          goto LABEL_92;
        }
        if (*(_BYTE*)(game_GameModeData_instance_ + 13) != 0) {
        LABEL_91:
          LOBYTE(v30) = 0;
        }
        else {
        LABEL_57:
          LOBYTE(v30) = v30[114];
        }
      LABEL_92:
        v45 = v26 + v24;
        *(_BYTE*)(v45 + 12) = (_BYTE)v30;
        *(_BYTE*)(v45 + 11) = (_BYTE)v30;
        *(_BYTE*)(v45 + 16) = *((_DWORD*)a2 + 21);
        *(_BYTE*)(v45 + 17) = *((_DWORD*)a2 + 22);
        *(_WORD*)(v45 + 18) = *((_DWORD*)a2 + 23);
        if ((char**)(v45 + 56) != a2) {
          GameRoutine_74e220(v45 + 56, (int*)*a2, a2[1], (a2[1] - *a2) >> 2);
        }
        v46 = a2[4];
        *(_QWORD*)(v45 + 80) = a2[3];
        *(_QWORD*)(v45 + 88) = v46;
        v47 = a2[5];
        if (v47 != nullptr) {
          LOBYTE(v47) = v47[2088];
        }
        *(_BYTE*)(v45 + 96) = (_BYTE)v47;
        v49 = *(_QWORD**)(a1 + 40);
        v48 = *(_QWORD*)(a1 + 48);
        if ((unsigned __int64)v49 >= v48) {
          v50 = *(_QWORD*)(a1 + 32);
          v51 = (char*)v49 - v50;
          v52 = ((__int64)v49 - v50) >> 3;
          v53 = v52 + 1;
          if ((unsigned __int64)(v52 + 1) >> 61 != 0) {
            GameRoutine_7d18f0();
          }
          v54 = v48 - v50;
          v55 = fw_memory_g_heap_manager_ptr;
          if (v54 >> 2 > v53) {
            v53 = v54 >> 2;
          }
          if ((unsigned __int64)v54 >= 0x7FFFFFFFFFFFFFF8LL) {
            v56 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v56 = v53;
          }
          if (v56 != 0) {
            if (v56 >> 61 != 0) {
              GameRoutine_60a210();
            }
            v57 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v56, 16, 0);
          }
          else {
            v57 = 0;
          }
          v58 = v57 + 8 * v56;
          v59 = (unsigned __int64)v49 - v50;
          v60 = (__int64)&v51[v57 + -8 * v52];
          *(_QWORD*)&v51[v57] = v27;
          v32 = (__int64)&v51[v57 + 8];
          memcpy(v60, v50, v59);
          *(_QWORD*)(a1 + 32) = v60;
          *(_QWORD*)(a1 + 40) = v32;
          *(_QWORD*)(a1 + 48) = v58;
          if (v50 != 0) {
            v61 = 128;
            if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) == 0) {
              v61 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v61, v50);
          }
          *(_QWORD*)(a1 + 40) = v32;
        }
        else {
          *v49 = v27;
          v32 = (__int64)(v49 + 1);
          *(_QWORD*)(a1 + 40) = v32;
        }
        goto LABEL_60;
      }
    }
  }
LABEL_58:
  if (v21 == 0) {
    return 0;
  }
  v32 = *(_QWORD*)(a1 + 40);
LABEL_60:
  v33 = GameData_1b41abf[v10];
  memset(a1 + (v33 << 11) + 104, 255, 0x800u);
  v34 = *(_QWORD**)(a1 + 32);
  v35 = &v65_.v65;
  v65_.v67 = v33;
  v65_.v65 = GameData_1f9b1a8;
  v65_.v66 = (_BYTE*)a1;
  v65_.v69 = &v65_.v65;
  if (v34 != (_QWORD*)v32) {
    do {
      v36 = *v34;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v34 + 504LL))(*v34) & 1) == 0) {
        v70 = v36;
        if (v65_.v69 == nullptr) {
          goto LABEL_66;
        }
        ((void (*)(__int64 (***)(void), __int64*))(*v65_.v69)[6])(v65_.v69,
                                                                  &v70);
      }
      ++v34;
    } while (v34 != (_QWORD*)v32);
    v35 = v65_.v69;
    if (v65_.v69 != &v65_.v65) {
      if (v65_.v69 != nullptr) {
        v38 = 5;
      LABEL_72:
        ((__int64 (*)(__int64))(*v35)[v38])((__int64)v35);
      }
      v65_.v67 = v10;
      v39 = &v65_.v65;
      v40 = *(_QWORD**)(a1 + 32);
      v41 = *(_QWORD**)(a1 + 40);
      v65_.v69 = &v65_.v65;
      *(_QWORD*)(a1 + 24LL * v10 + 18544) = *(_QWORD*)(a1 + 24LL * v10 + 18536);
      v65_.v65 = GameData_1f9b2a8;
      v65_.v66 = (_BYTE*)a1;
      if (v40 != v41) {
        do {
          v42 = *v40;
          if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v40 + 504LL))(*v40) & 1) ==
              0) {
            v70 = v42;
            if (v65_.v69 == nullptr) {
              goto LABEL_66;
            }
            ((void (*)(__int64 (***)(void), __int64*))(*v65_.v69)[6])(v65_.v69,
                                                                      &v70);
          }
          ++v40;
        } while (v40 != v41);
        v39 = v65_.v69;
        if (v65_.v69 != &v65_.v65) {
          if (v65_.v69 != nullptr) {
            v43 = 5;
          LABEL_83:
            ((__int64 (*)(__int64))(*v39)[v43])((__int64)v39);
          }
          *(_BYTE*)(a1 + 92848) = 1;
          return 1;
        }
      }
      v43 = 4;
      goto LABEL_83;
    }
  }
  v38 = 4;
  goto LABEL_72;
}

void game_map_965220(__int64 a1, unsigned int a2, unsigned int a3,
                     unsigned int a4, _QWORD* a5, float a6)
{
  __int64 v6;
  unsigned int v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  int v23;
  __int64* v24;
  __int64 v25;
  unsigned int v26;
  unsigned __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  float v43;
  __int64* v44;
  float32x4_t v45;
  float v46;
  float v47;
  __int128 v48;
  float32x4_t v49;
  __int128 v50;
  __int64 v51;
  int v52;
  _QWORD* v53;
  __int64 v54;
  __int64* v55;
  unsigned int v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  float v69;
  float32x4_t v70;
  int v71;
  int v72;
  unsigned __int64 v73;
  __int128 v74;
  float32x4_t v75;
  float32x4_t v76;
  int16x4_t v77;
  __int64 v78;
  unsigned __int32 v79;
  __int64 v80;
  unsigned int v81;
  unsigned int i;
  float32x4_t* v83;
  __int128 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  _QWORD* v87;
  _QWORD* v88;
  unsigned __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  float v93;
  _QWORD* v94;
  float v95;
  float v96;
  _BOOL8 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  __int64 primeEm;
  unsigned __int64 v102;
  __int64 v103;
  float32x4_t* v104;
  float32x4_t v105;
  float v106;
  float v107;
  __int64 v108;
  float32x4_t v110;
  float32x4_t v111;
  void* v112;
  int8x16_t v113;
  char v114;
  unsigned int v115;
  int16x4_t v116;
  float32x4_t v117;
  __int64 v118;
  _QWORD* v119;
  __int64 v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  unsigned int v123;
  float v124;
  unsigned int v125;
  unsigned __int64 v126;
  float v127;
  float32x4_t v128;
  float32x4_t v129;
  int8x16_t v130;
  float32x4_t v131;
  __int128 v132;
  float32x4_t v133;
  float32x4_t v134;
  struct {
    int8x16_t v135;
    __int64 v136;
    __int64 v137;
    __int128 v138;
    __int128 v139;
    __int64 v140;
    __int64 v141;
    char v142;
  } v135_;

  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = a1 + 73728;
  if (*(int*)(a1 + 73888) < 1 || *a5 == 0) {
    return;
  }
  v8 = a3;
  v9 = a2;
  v10 = (unsigned __int8)a2;
  v11 = a4;
  v14 = *(_QWORD*)(a1 + 73832);
  v15 = ((unsigned __int64)a3 << 40) |
        ((unsigned __int64)(unsigned __int8)a2 << 48) |
        ((unsigned __int64)a4 << 32) | (unsigned int)*a5;
  if (v14 != 0 && *(_QWORD*)(a1 + 73848) != 0) {
    v17 = v14 - 1;
    if ((v14 & (v14 - 1)) != 0) {
      v18 = ((unsigned __int64)a3 << 40) |
            ((unsigned __int64)(unsigned __int8)a2 << 48) |
            ((unsigned __int64)a4 << 32) | (unsigned int)*a5;
      if (v15 >= v14) {
        v18 = v15 % v14;
      }
    }
    else {
      v18 = v17 & v15;
    }
    v19 = *(_QWORD**)(*(_QWORD*)(a1 + 73824) + 8 * v18);
    if (v19 != nullptr) {
      v20 = (_QWORD*)*v19;
      if (v20 != nullptr) {
        if ((v14 & v17) == 0) {
          while (1) {
            v22 = v20[1];
            if (v22 == v15) {
              if (v20[2] == v15) {
                goto LABEL_149;
              }
            }
            else if ((v22 & v17) != v18) {
              goto LABEL_28;
            }
            v20 = (_QWORD*)*v20;
            if (v20 == nullptr) {
              goto LABEL_28;
            }
          }
        }
        do {
          v21 = v20[1];
          if (v21 == v15) {
            if (v20[2] == v15) {
            LABEL_149:
              v104 = (float32x4_t*)v20[3];
              LANES128(v105).n128_f32[0] =
                  (float)((float)((float)(int)(a3 + 256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f;
              v106 = (float)((float)((float)(int)(a4 + 256) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              if (*GameData_212ce80[0] != 0) {
                v107 = Height_7c4d10(*(_QWORD*)(*GameData_212ce80[0] + 61456),
                                     (float)((float)((float)(int)(a3 + 256) *
                                                     0x1.4000000000000p+2f) +
                                             0x1.4000000000000p+1f) +
                                         -0x1.4000000000000p+10f,
                                     v106),
                v114 =
                    COERCE_AS(__typeof__(v114),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v56 =
                    COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v106 = (float)((float)((float)(int)(v11 + 256) *
                                       0x1.4000000000000p+2f) +
                               0x1.4000000000000p+1f) +
                       -0x1.4000000000000p+10f;
                LANES128(v105).n128_f32[0] =
                    (float)((float)((float)(int)(v8 + 256) *
                                    0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f;
              }
              else {
                v107 = 0x0.0p+0f;
              }
              LANES128(v110).n128_u64[0] =
                  __PAIR64__(LODWORD(v107), LANES128(v105).n128_u32[0]);
              LANES128(v110).n128_u64[1] = LODWORD(v106);
              if ((unsigned __int8)v9 == 1) {
                v130 = v110;
                LANES128(v111).n128_u32[0] = LANES128(v105).n128_u32[0];
                v135_.v136 = 0;
                v135_.v137 = 0;
                v135_.v135 = (__typeof__(v135_.v135)){0};
                LANES128(v111).n128_f32[1] = v107 + 0x1.4000000000000p+2f;
                LANES128(v105).n128_f32[1] = v107 + -0x1.4000000000000p+2f;
                LANES128(v111).n128_u64[1] = LODWORD(v106);
                LANES128(v105).n128_u64[1] = LODWORD(v106);
                v133 = v105;
                v134 = v111;
                v112 = GameHr_a5dbb0(),
                v114 =
                    COERCE_AS(__typeof__(v114),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v56 =
                    COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                GameRoutine_a5cfa0((__int64)v112, (__int128*)&v135_.v135, &v134,
                                   &v133, 3),
                    v114 = COERCE_AS(
                        __typeof__(v114),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v56 = COERCE_AS(
                        __typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v113 = v135_.v135;
                if ((v114 & 1) != 0) {
                  v115 = -1;
                }
                else {
                  v115 = 0;
                }
                LANES128(v113).n128_u32[3] = 0;
                v110 = vbslq_s8(vdupq_n_s32(v115), v113, v130);
              }
              LANES64(v116).n64_u64[0] =
                  LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v104[2], v110))))
                      .n64_u64[0];
              if ((LANES64(v116).n64_u8[0] & 1) != 0 ||
                  (LANES64(v116).n64_u8[2] & 1) != 0 ||
                  (LANES64(v116).n64_u8[4] & 1) != 0) {
                v131 = v110;
                GameRoutine_14a17c0(&LANES128(*(v104)).n128_i64[1],
                                    *(long double*)&v110),
                    v114 = COERCE_AS(
                        __typeof__(v114),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v56 = COERCE_AS(
                        __typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                LANES128(v104[2]).n128_u64[0] = LANES128(v131).n128_u64[0];
                v117 = v104[2];
                LANES128(v117).n128_u64[1] = LANES128(v131).n128_u32[2];
                v104[2] = v117;
              }
              if (LANES128(v104[3]).n128_f32[0] != a6) {
                game_14a1b00((__int64*)LANES128(*(v104)).n128_u64[1], a6),
                    v114 = COERCE_AS(
                        __typeof__(v114),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v56 = COERCE_AS(
                        __typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                LANES128(v104[3]).n128_f32[0] = a6;
              }
              LANES128(*(v104)).n128_u8[0] = 1;
              return;
            }
          }
          else {
            if (v21 >= v14) {
              v21 %= v14;
            }
            if (v21 != v18) {
              break;
            }
          }
          v20 = (_QWORD*)*v20;
        } while (v20 != nullptr);
      }
    }
  }
LABEL_28:
  v23 = *(_DWORD*)(a1 + 73752);
  if (v23 > 1023) {
    return;
  }
  v24 = *(__int64**)(a1 + 73744);
  v25 = *v24;
  *(_DWORD*)(a1 + 73752) = v23 + 1;
  *(_QWORD*)(a1 + 73744) = v24 + 1;
  LODWORD(v24) = *(_DWORD*)(a1 + 73760);
  LANES128(v134).n128_u16[0] = (unsigned int)(v25 - a1 - 16) >> 6;
  v26 = (unsigned int)(*(_DWORD*)(a1 + 73768) - (_DWORD)v24) >> 3;
  LANES128(v135_.v135).n128_u64[0] = (unsigned __int64)&v134;
  *(_WORD*)(GameVariable_82f5a0((float*)(a1 + 73784), (unsigned __int16*)&v134,
                                (__int64)std___1_piecewise_construct_ptr,
                                &v135_.v135) +
            18) = v26,
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = *(__int64**)(v6 + 40);
  v27 = *(_QWORD*)(v6 + 48);
  v29 = (__int64*)fw_memory_g_heap_manager_ptr;
  v125 = v8;
  if ((unsigned __int64)v28 >= v27) {
    v123 = v11;
    v30 = *(_QWORD*)(v6 + 32);
    v126 = v9;
    v31 = (char*)v28 - v30;
    v32 = ((__int64)v28 - v30) >> 3;
    v33 = v32 + 1;
    if ((unsigned __int64)(v32 + 1) >> 61 != 0) {
      GameRoutine_9692a0(),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v34 = v27 - v30;
    if (v34 >> 2 > v33) {
      v33 = v34 >> 2;
    }
    if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
      v35 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v35 = v33;
    }
    if (v35 != 0) {
      if (v35 >> 61 != 0) {
        GameRoutine_60a210(),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v36 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35, 16, 0),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v36 = 0;
    }
    v37 = v36 + 8 * v35;
    v38 = (unsigned __int64)v28 - v30;
    v39 = (__int64)&v31[v36 + -8 * v32];
    *(_QWORD*)&v31[v36] = v25;
    v40 = (__int64)&v31[v36 + 8];
    memcpy(v39, v30, v38),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v6 + 32) = v39;
    *(_QWORD*)(v6 + 40) = v40;
    *(_QWORD*)(v6 + 48) = v37;
    v29 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v30 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v30),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v9 = v126;
    v11 = v123;
    v8 = v125;
    *(_QWORD*)(v6 + 40) = v40;
    if (v25 == 0) {
      return;
    }
  }
  else {
    *v28 = v25;
    *(_QWORD*)(v6 + 40) = v28 + 1;
    if (v25 == 0) {
      return;
    }
  }
  v42 = v11;
  v43 = (float)(int)(v8 + 256);
  v44 = GameData_212ce80[0];
  LANES128(v45).n128_f32[0] =
      (float)((float)(v43 * 0x1.4000000000000p+2f) + 0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  v127 = LANES128(v45).n128_f32[0];
  v46 = (float)((float)((float)(int)(v11 + 256) * 0x1.4000000000000p+2f) +
                0x1.4000000000000p+1f) +
        -0x1.4000000000000p+10f;
  v124 = v46;
  if (*GameData_212ce80[0] != 0) {
    v47 = Height_7c4d10(*(_QWORD*)(*GameData_212ce80[0] + 61456),
                        LANES128(v45).n128_f32[0], v46),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v46 = (float)((float)((float)(int)(v11 + 256) * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    LANES128(v45).n128_f32[0] = v127;
  }
  else {
    v47 = 0x0.0p+0f;
  }
  *(_QWORD*)&v48 = __PAIR64__(LODWORD(v47), LANES128(v45).n128_u32[0]);
  *((_QWORD*)&v48 + 1) = LODWORD(v46);
  v122 = LODWORD(v46);
  v132 = v48;
  if ((unsigned __int8)v9 == 1) {
    LANES128(v49).n128_u32[0] = LANES128(v45).n128_u32[0];
    LANES128(v49).n128_f32[1] = v47 + 0x1.4000000000000p+2f;
    LANES128(v45).n128_f32[1] = v47 + -0x1.4000000000000p+2f;
    LANES128(v49).n128_u64[1] = LODWORD(v46);
    LANES128(v45).n128_u64[1] = LODWORD(v46);
    v133 = v45;
    v134 = v49;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21fde98) != 0) {
      GameHr_a5aca0((__int64)&GameData_21fdd90),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_2b0(),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      __cxa_guard_release((__int64)&GameData_21fde98),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    collision_670c60((void*)((__int64)&v135_.v135), &v134, &v133, 3),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v135_.v142 & 1) != 0) {
      *(_QWORD*)&v50 = LANES128(v135_.v135).n128_u64[0];
      *((_QWORD*)&v50 + 1) = LANES128(v135_.v135).n128_u32[2];
      v132 = v50;
    }
  }
  EffectConst_964040(v25),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v25 + 24) = v15;
  *(_BYTE*)(v25 + 1) = v9;
  *(float*)(v25 + 48) = a6;
  if ((_BYTE)v9 == 0) {
    LANES128(v135_.v135).n128_u64[0] = a5[1];
    LANES128(v134).n128_u64[0] = (unsigned __int64)"_Loop";
    LANES128(v133).n128_u64[0] = (unsigned __int64)"_Done";
    EffectConst_964320((const char**)&v135_.v135, (const char**)&v134,
                       (const char**)&v133, (__int64)&v132),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = *(unsigned __int8*)(v25 + 1);
  }
  v51 = a5[1];
  v52 = GameData_1a83bd0[v10];
  v135_.v135 = (__typeof__(v135_.v135)){0};
  v53 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  LODWORD(v135_.v137) = v52;
  v135_.v138 = v132;
  v135_.v139 = GameData_1a837f0;
  v135_.v136 = v51;
  v54 = *((_QWORD*)GameData_212c540 + 1);
  v135_.v140 = *(_QWORD*)GameData_212c540;
  v135_.v141 = v54;
  v55 = Manager_bc6460(v53, (__int64)&v135_.v135, 1),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0(&v135_.v135, (__int64)v55, v56, (__int64)&GameData_1a9f09e),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58 = LANES128(v135_.v135).n128_i64[1];
  v57 = LANES128(v135_.v135).n128_u64[0];
  if (LANES128(v135_.v135).n128_u64[1] != 0) {
    atomic_fetch_add_explicit(
        (atomic_ullong* volatile)(LANES128(v135_.v135).n128_u64[1] + 8), 1u,
        memory_order_relaxed);
  }
  v59 = *(_QWORD*)(v25 + 16);
  *(_QWORD*)(v25 + 8) = v57;
  *(_QWORD*)(v25 + 16) = v58;
  if (v59 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v59),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v58 = *(_QWORD*)(v25 + 16);
  }
  if (v58 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v58),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v60 = LANES128(v135_.v135).n128_i64[1];
  v61 = v9;
  if (LANES128(v135_.v135).n128_u64[1] != 0 &&
      atomic_fetch_add(
          (atomic_ullong* volatile)(LANES128(v135_.v135).n128_u64[1] + 8),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v60),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  game_14a1b00(*(__int64**)(v25 + 8), a6),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v62 = *(__int64**)(v25 + 8);
  v63 = *v62;
  if (*v62 != 0 && *(_DWORD*)(v63 + 16) == *((_DWORD*)v62 + 2)) {
    LODWORD(v64) = *(_DWORD*)(v63 + 36);
    if ((int)v64 >= 1) {
      v9 = v63 + 40;
      v65 = 0;
      v66 = v125 + (v42 << 16);
      do {
        if (v65 < (int)v64) {
          v67 = *(_QWORD*)(v9 + 8 * v65);
          if (*(_DWORD*)(v67 + 420) == 0) {
            v68 = eft_EmitterSetHandle_Get_5b6700((_DWORD*)(v67 + 472)),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v68 != 0) {
              GameRoutine_5b6900(v68, v66),
                  v114 = COERCE_AS(
                      __typeof__(v114),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v56 = COERCE_AS(
                      __typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        }
        v64 = *(int*)(v63 + 36);
        ++v65;
      } while (v65 < v64);
    }
  }
  if (*(_BYTE*)(v25 + 1) == 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v71 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v72 = 2)
             : (v72 = 3),
         (v72 & v71) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_154;
      }
      v73 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v73 + 172) == *(float*)(v73 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v73 + 160) + 16LL))(v73 +
                                                                       160),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v74 = *(_OWORD*)(v73 + 208);
      }
      if (*((float*)&v74 + 3) != 0x1.0000000000000p+0f ||
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v73 + 160) + 16LL))(
                          v73 + 160, *((float*)&v74 + 3)))
                  .n128_f32[3] != 0x1.0000000000000p+0f) {
      LABEL_154:
        v108 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          LOBYTE(v108) = *(_BYTE*)(v108 + 8) == 2;
        }
        if ((v108 & 1) == 0 && *GameData_212ce98[0] != 0 &&
            game_script_map_effect_g_effect_manager != 0) {
          GameHr_14a1e70((__int64**)(v25 + 8), 0x1.4000000000000p+4f),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
  }
  if (*v44 != 0) {
    v69 = Height_7c4d10(*(_QWORD*)(*v44 + 61456), v127, v124),
    v114 = COERCE_AS(__typeof__(v114),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LANES128(v70).n128_f32[0] = v127;
  }
  else {
    LANES128(v70).n128_f32[0] = v127;
    v69 = 0x0.0p+0f;
  }
  LANES128(v75).n128_u64[0] =
      __PAIR64__(LODWORD(v69), LANES128(v70).n128_u32[0]);
  LANES128(v75).n128_u64[1] = v122;
  if (v61 == 1) {
    v128 = v75;
    LANES128(v76).n128_u32[0] = LANES128(v70).n128_u32[0];
    LANES128(v76).n128_f32[1] = v69 + 0x1.4000000000000p+2f;
    LANES128(v70).n128_f32[1] = v69 + -0x1.4000000000000p+2f;
    LANES128(v76).n128_u64[1] = v122;
    LANES128(v70).n128_u64[1] = v122;
    v133 = v70;
    v134 = v76;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21fde98) != 0) {
      GameHr_a5aca0((__int64)&GameData_21fdd90),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_2b0(),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      __cxa_guard_release((__int64)&GameData_21fde98),
          v114 = COERCE_AS(__typeof__(v114),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    collision_670c60((void*)((__int64)&v135_.v135), &v134, &v133, 3),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v135_.v142 & 1) != 0) {
      v75 = v135_.v135;
      LANES128(v75).n128_u32[3] = 0;
    }
    else {
      v75 = v128;
    }
  }
  LANES64(v77).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(*(float32x4_t*)(v25 + 32), v75))))
          .n64_u64[0];
  if ((LANES64(v77).n64_u8[0] & 1) != 0 || (LANES64(v77).n64_u8[2] & 1) != 0 ||
      (LANES64(v77).n64_u8[4] & 1) != 0) {
    v78 = *(_QWORD*)(v25 + 8);
    v79 = LANES128(v75).n128_u32[1];
    v80 = *(_QWORD*)v78;
    if (*(_QWORD*)v78 != 0 && *(_DWORD*)(v80 + 16) == *(_DWORD*)(v78 + 8)) {
      v81 = *(_DWORD*)(v80 + 36);
      if (v81 != 0) {
        for (i = 0; i < v81; ++i) {
          if ((int)v81 > (int)i) {
            v83 = *(float32x4_t**)(v80 + 40 + 8LL * (int)i);
            if (v83 != nullptr) {
              v83[1] = v75;
              LANES128(v83[8]).n128_u8[0] = 1;
              v81 = *(_DWORD*)(v80 + 36);
            }
          }
        }
      }
    }
    v129 = v75;
    game_14a3920(v78),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_DWORD*)(v25 + 32) = LANES128(v129).n128_u32[0];
    *(_DWORD*)(v25 + 36) = v79;
    v84 = *(_OWORD*)(v25 + 32);
    *((_QWORD*)&v84 + 1) = LANES128(v129).n128_u32[2];
    *(_OWORD*)(v25 + 32) = v84;
  }
  if (*(float*)(v25 + 48) != a6) {
    game_14a1b00(*(__int64**)(v25 + 8), a6),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(float*)(v25 + 48) = a6;
  }
  *(_BYTE*)v25 = 1;
  v85 = *(_QWORD*)(v6 + 104);
  if (v85 != 0) {
    v86 = v85 - 1;
    if ((v85 & (v85 - 1)) != 0) {
      v9 = v15;
      if (v15 >= v85) {
        v9 = v15 % v85;
      }
    }
    else {
      v9 = v86 & v15;
    }
    v87 = *(_QWORD**)(*(_QWORD*)(v6 + 96) + 8 * v9);
    if (v87 != nullptr) {
      v88 = (_QWORD*)*v87;
      if (v88 != nullptr) {
        if ((v85 & v86) == 0) {
          while (1) {
            v90 = v88[1];
            if (v90 == v15) {
              if (v88[2] == v15) {
                return;
              }
            }
            else if ((v90 & v86) != v9) {
              goto LABEL_130;
            }
            v88 = (_QWORD*)*v88;
            if (v88 == nullptr) {
              goto LABEL_130;
            }
          }
        }
        do {
          v89 = v88[1];
          if (v89 == v15) {
            if (v88[2] == v15) {
              return;
            }
          }
          else {
            if (v89 >= v85) {
              v89 %= v85;
            }
            if (v89 != v9) {
              break;
            }
          }
          v88 = (_QWORD*)*v88;
        } while (v88 != nullptr);
      }
    }
  }
LABEL_130:
  v91 = (_QWORD*)fw_memory_HeapManager_Allocate(*v29, 32, 16, 0),
  v114 = COERCE_AS(__typeof__(v114),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v92 = *(_QWORD*)(v6 + 120);
  v93 = *(float*)(v6 + 128);
  v94 = v91;
  v91[1] = v15;
  v91[2] = v15;
  v91[3] = v25;
  v95 = (float)(unsigned __int64)(v92 + 1);
  if (v85 == 0 || (float)(v93 * (float)v85) < v95) {
    v96 = v95 / v93;
    v97 = true;
    if (v85 >= 3) {
      v97 = (v85 & (v85 - 1)) != 0;
    }
    v98 = v97 | (2 * v85);
    v99 = vcvtps_u64_f32(v96);
    if (v98 <= v99) {
      v100 = v99;
    }
    else {
      v100 = v98;
    }
    if (v100 == 1) {
      v100 = 2;
    }
    else if ((v100 & (v100 - 1)) != 0) {
      primeEm = std___1___next_prime(v100),
      v114 = COERCE_AS(__typeof__(v114),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v85 = *(_QWORD*)(v6 + 104);
      v100 = primeEm;
    }
    if (v100 > v85) {
      goto LABEL_142;
    }
    if (v100 < v85) {
      v102 = vcvtps_u64_f32((float)*(unsigned __int64*)(v6 + 120) /
                            *(float*)(v6 + 128));
      if (v85 < 3 || (v85 & (v85 - 1)) != 0) {
        v102 = std___1___next_prime(v102),
        v114 = COERCE_AS(__typeof__(v114),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v103 = 1LL << (-(char)__clz(v102 - 1) & 63);
        if (v102 >= 2) {
          v102 = v103;
        }
      }
      if (v100 <= v102) {
        v100 = v102;
      }
      if (v100 < v85) {
      LABEL_142:
        GameRoutine_9693c0((__int64*)(v6 + 96), v100),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v85 = *(_QWORD*)(v6 + 104);
    if ((v85 & (v85 - 1)) != 0) {
      if (v15 >= v85) {
        v9 = v15 % v85;
      }
      else {
        v9 = v15;
      }
    }
    else {
      v9 = (v85 - 1) & v15;
    }
  }
  v118 = *(_QWORD*)(v6 + 96);
  v119 = *(_QWORD**)(v118 + 8 * v9);
  if (v119 != nullptr) {
    *v94 = *v119;
    *v119 = v94;
  }
  else {
    v120 = *(_QWORD*)(v6 + 112);
    *(_QWORD*)(v6 + 112) = v94;
    *v94 = v120;
    *(_QWORD*)(v118 + 8 * v9) = v6 + 112;
    if (v120 != 0) {
      v121 = *(_QWORD*)(v120 + 8);
      if ((v85 & (v85 - 1)) != 0) {
        if (v121 >= v85) {
          v121 %= v85;
        }
      }
      else {
        v121 &= v85 - 1;
      }
      *(_QWORD*)(*(_QWORD*)(v6 + 96) + 8 * v121) = v94;
    }
  }
  ++*(_QWORD*)(v6 + 120);
}

void game_map_f0da60(__int64 a1)
{
  __int64 v2;
  const char** v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  const char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 (***v10)();
  __int64 v11;
  const char* v12;
  __int64 v13;
  char v14;
  __int64 v15;
  struct {
    __int64 v16;
    __int64 v17;
    __int64 (***v18)();
    int v19;
  } v16_;
  int v20;

  if (*(_QWORD*)(a1 + 8) == 0) {
    v2 = *snd_g_fileIndex_ptr[0];
    v16_.v16 = (__int64)"GameData/MapDrawer/DrawProperty.prop";
    v16_.v17 = 36;
    v16_.v19 = 0;
    v16_.v18 = GameData_212c3c8;
    *(_QWORD*)(a1 + 8) = GameRoutine_f0e580(v2, (__int64)&v16_.v16);
  }
  GameHr_f0e0b0(a1, 0);
  GameHr_f0e0b0(a1, 1u);
  GameHr_f0e0b0(a1, 2u);
  GameHr_f0e0b0(a1, 3u);
  GameHr_f0e0b0(a1, 4u);
  GameHr_f0e0b0(a1, 5u);
  GameHr_f0e0b0(a1, 6u);
  GameHr_f0e0b0(a1, 7u);
  GameHr_f0e0b0(a1, 8u);
  GameHr_f0e0b0(a1, 9u);
  GameHr_f0e0b0(a1, 0xAu);
  GameHr_f0e0b0(a1, 0xBu);
  GameHr_f0e0b0(a1, 0xCu);
  GameHr_f0e0b0(a1, 0xDu);
  GameHr_f0e0b0(a1, 0xEu);
  GameHr_f0e0b0(a1, 0xFu);
  GameHr_f0e0b0(a1, 0x10u);
  GameHr_f0e0b0(a1, 0x11u);
  GameHr_f0e0b0(a1, 0x12u);
  GameHr_f0e0b0(a1, 0x13u);
  GameHr_f0e0b0(a1, 0x14u);
  GameHr_f0e0b0(a1, 0x15u);
  GameHr_f0e0b0(a1, 0x16u);
  GameHr_f0e0b0(a1, 0x17u);
  GameHr_f0e0b0(a1, 0x18u);
  GameHr_f0e0b0(a1, 0x19u);
  GameHr_f0e0b0(a1, 0x1Au);
  GameHr_f0e0b0(a1, 0x1Bu);
  GameHr_f0e0b0(a1, 0x1Cu);
  GameHr_f0e0b0(a1, 0x1Du);
  GameHr_f0e0b0(a1, 0x1Eu);
  GameHr_f0e0b0(a1, 0x1Fu);
  GameHr_f0e0b0(a1, 0x20u);
  GameHr_f0e0b0(a1, 0x21u);
  GameHr_f0e0b0(a1, 0x22u);
  GameHr_f0e0b0(a1, 0x23u);
  GameHr_f0e0b0(a1, 0x24u);
  GameHr_f0e0b0(a1, 0x25u);
  GameHr_f0e0b0(a1, 0x26u);
  GameHr_f0e0b0(a1, 0x27u);
  GameHr_f0e0b0(a1, 0x28u);
  GameHr_f0e0b0(a1, 0x29u);
  GameHr_f0e0b0(a1, 0x2Au);
  GameHr_f0e0b0(a1, 0x2Bu);
  v3 = (const char**)&GameData_1ff1938;
  v4 = 0;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  do {
    v7 = *v3;
    v3 += 2;
    v6 = (__int64)v7;
    v8 = strlen(v7);
    if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v9 = v8;
    if (v8 >= 0x17) {
      if ((v8 | 7) == 0x17) {
        v11 = 26;
      }
      else {
        v11 = (v8 | 7) + 1;
      }
      v10 =
          (__int64 (***)(void))fw_memory_HeapManager_Allocate(*v5, v11, 16, 0);
      v16_.v17 = v9;
      v16_.v18 = v10;
      v16_.v16 = v11 | 1;
    LABEL_13:
      memmove((__int64)v10, v6, v9);
      goto LABEL_14;
    }
    v10 = (__int64 (***)(void))((char*)&v16_.v16 + 1);
    LOBYTE(v16_.v16) = 2 * v8;
    if (v8 != 0) {
      goto LABEL_13;
    }
  LABEL_14:
    *((_BYTE*)v10 + v9) = 0;
    if ((v16_.v16 & 1) != 0) {
      v12 = (const char*)v16_.v18;
    }
    else {
      v12 = (char*)&v16_.v16 + 1;
    }
    v13 = *(_QWORD*)(fs_609260(*(_QWORD*)(a1 + 8) + 800LL, v12, 1) + 24);
    if (v13 != 0) {
      if (*(_BYTE*)v13 == 48 && *(_BYTE*)(v13 + 1) == 120) {
        sscanf((const char*)v13, "%x", &v20);
      }
      else {
        sscanf((const char*)v13, "%f", &v20);
      }
    }
    else {
      v20 = 0;
    }
    v14 = v16_.v16;
    *(_DWORD*)(a1 + 1424 + v4) = v20;
    if ((v14 & 1) != 0 && v16_.v18 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v15, (__int64)v16_.v18);
    }
    v4 += 4;
  } while (v4 != 100);
}

__int64 game_map_faf4a0(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8[3];
  _QWORD v9[25];

  if ((*(_BYTE*)(game_g_game_setting + 952) & 2) != 0) {
    v3 = 0;
    *(_DWORD*)(a1 + 152) = 4;
  }
  else {
    v2 = *GameData_212eba8[0];
    v8[0] = *(_QWORD*)(*(_QWORD*)(GameData_220f870 + 8) + 280LL);
    game_d74a00((void*)((__int64)v9), (float*)v8);
    v3 = 1;
    v4 = game_zview_cf22c0(v2, (__int64)v9, 1);
    if (v4 != 0 && (*(_BYTE*)(game_g_game_setting + 952) & 0x81) != 0) {
      v5 = v4;
      strcpy((char*)v8, ",SE_SYS_Decide_ZoomView");
      snd_Fade_Fade_10c830((__int64)v9, 0x0.0p+0f);
      snd_play_ff2d0((void*)(handle), (__int64)v8 + 1, (__int64)v8 + 1,
                     (__int64)v9, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v9);
      if ((v8[0] & 1) != 0 && v8[2] != 0) {
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v8[2]);
      }
      v3 = 0;
      *(_QWORD*)(a1 + 216) = v5;
      *(_DWORD*)(a1 + 152) = 2;
    }
    else {
      ProcMapSeqZoomViewer_fb0fc0();
      *(_BYTE*)(GameData_21cd138 + 23) = 1;
    }
  }
  return v3;
}

__int64 game_map_fb01c0(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  __int64 v2;
  float v3;
  float v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int128 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  float v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  float v44;
  long double v45;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _WORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62[3];
  struct {
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    char v70;
  } v63_;

  // The original branches on b.ls, a NaN takes the second path.
  if (!(*(float*)(a1 + 276) <= 0x0.0p+0f)) {
    goto LABEL_2;
  }
  v5 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
  if ((v5 & 2) != 0) {
    strcpy((char*)v62, ",SE_SYS_Cancel_ZoomView");
    snd_Fade_Fade_10c830((__int64)&v63_.v63, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)v62 + 1, (__int64)v62 + 1,
                   (__int64)&v63_.v63, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(&v63_.v63);
    if ((v62[0] & 1) != 0 && v62[2] != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v62[2]);
    }
    *(_DWORD*)(a1 + 152) = 1;
    return 0;
  }
  else {
    if ((v5 & 0x80) == 0) {
      goto LABEL_2;
    }
    v6 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 168LL);
    if (v6 == 0) {
      goto LABEL_2;
    }
    v7 = *(_QWORD*)(v6 + 440);
    if (v7 == 0 || *(_BYTE*)(v7 + 16) != 0 || *(_DWORD*)(v6 + 592) != 1) {
      goto LABEL_2;
    }
    v8 = *(_QWORD*)(v6 + 264);
    v9 = *(_QWORD*)(v8 + 392);
    v10 = *(_QWORD*)(v8 + 400);
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    v11 = *(_DWORD*)(v9 + 11784) != 7 && (*(_BYTE*)(v6 + 416) & 1) == 0 &&
          !game_Unit_IsImmobile(v6);
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
    if (!v11) {
    LABEL_2:
      v2 = *(_QWORD*)(a1 + 240);
      if (v2 == 0) {
        goto LABEL_108;
      }
      v3 = *(float*)(a1 + 276);
      v4 = fabsf(*(float*)(*(_QWORD*)(v2 + 8) + 228LL));
      if (v3 <= 0x0.0p+0f) {
        if (v3 >= 0x0.0p+0f || (v3 = v3 + v4) <= 0x0.0p+0f) {
        LABEL_26:
          *(float*)(a1 + 276) = v3;
          if (v3 <= 0x0.0p+0f) {
            goto LABEL_27;
          }
        LABEL_108:
          ProcMapSeqZoomViewer_fb0fc0();
          *(_BYTE*)(*(_QWORD*)GameData_212d028[0] + 23LL) = 1;
          return 1;
        }
      }
      else {
        v3 = v3 - v4;
        if (v3 >= 0x0.0p+0f) {
          goto LABEL_26;
        }
      }
      *(_DWORD*)(a1 + 276) = 0;
    LABEL_27:
      v14 = GameData_212ed08[0];
      v15 = *GameData_212ed08[0];
      if (*(_QWORD*)GameData_212d310 == 0 ||
          *(_BYTE*)(*(_QWORD*)GameData_212d310 + 14LL) == 1) {
        if (game_ProcFadeView_instance_ == 0) {
          goto LABEL_37;
        }
        v16 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v16 + 172) == *(float*)(v16 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v16 + 160) + 16LL))(v16 +
                                                                         160);
        }
        else {
          v17 = *(_OWORD*)(v16 + 208);
        }
        if ((*((float*)&v17 + 3) != 0x1.0000000000000p+0f ||
             LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                          (_QWORD*)(*(_QWORD*)(v16 + 160) + 16LL))(
                             v16 + 160, *((float*)&v17 + 3)))
                     .n128_f32[3] != 0x1.0000000000000p+0f) &&
            (game_ProcFadeView_instance_ == 0 ||
             *(float*)((v18 =
                            game_ProcFadeView_instance_ +
                            ((unsigned __int64)*(
                                 unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
                             << 6)) +
                       172) == *(float*)(v18 + 168))) {
        LABEL_37:
          v19 = *(_QWORD*)GameData_212dc38[0];
          if (*(_QWORD*)GameData_212dc38[0] == 0 || *(_BYTE*)(v19 + 816) != 1 ||
              (*(_BYTE*)(v19 + 936) & 1) == 0) {
            v20 = *(_QWORD*)(v15 + 184);
            v21 = *(_QWORD*)(v15 + 192);
            if (v20 != v21) {
              while (1) {
                if (*(float*)(v20 + 4) <
                    (float)(*(float*)(v15 + 8) + -0x1.6666660000000p-2f)) {
                  goto LABEL_108;
                }
                if (*(_BYTE*)(v20 + 9) == 1) {
                  break;
                }
                v20 += 12;
                if (v20 == v21) {
                  goto LABEL_108;
                }
              }
              v22 = *(_QWORD*)(a1 + 248);
              v23 = *(_QWORD*)(a1 + 256);
              v24 = v23 - v22;
              if (v23 == v22) {
                goto LABEL_108;
              }
              v25 = *(_QWORD*)(a1 + 240);
              if (v25 != 0) {
                v26 = *(_DWORD*)(v22 + 4 * (*(int*)(a1 + 272) %
                                            (unsigned __int64)(v24 >> 2)));
                v27 = *(_QWORD**)(*(_QWORD*)(v25 + 8) + 232LL);
                v28 = v27[9];
                v29 = v27[49];
                v30 = v27[50];
                if (v30 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8),
                                            1u, memory_order_relaxed);
                  v31 = CharacterModel_1070c00(*(_QWORD*)(v29 + 11608), v26);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v32 = v31;
                    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
                    std___1___shared_weak_count___release_weak(v30);
                    v31 = v32;
                  }
                }
                else {
                  v31 = CharacterModel_1070c00(*(_QWORD*)(v29 + 11608), v26);
                }
                v37 = *((float*)v31 + 6);
                v38 = *(_QWORD*)(a1 + 240);
                if (v38 != 0) {
                  v39 = *(_QWORD*)(*(_QWORD*)(v38 + 8) + 232LL);
                  v40 = *(_QWORD*)(v39 + 392);
                  v41 = *(_QWORD*)(v39 + 400);
                  if (v41 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v41 + 8), 1u,
                        memory_order_relaxed);
                    v42 = CharacterModel_1070c00(*(_QWORD*)(v40 + 11608), v26);
                    if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v43 = v42;
                      (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
                      std___1___shared_weak_count___release_weak(v41);
                      v42 = v43;
                    }
                  }
                  else {
                    v42 = CharacterModel_1070c00(*(_QWORD*)(v40 + 11608), v26);
                  }
                  v44 = *((float*)v42 + 8);
                  if (*((float*)v42 + 3) < v44) {
                    v44 = *((float*)v42 + 3);
                  }
                }
                else {
                  v44 = 0x0.0p+0f;
                }
                *(float*)(a1 + 276) = v44 - v37;
                *(float*)&v45 =
                    CharacterAnimator_1079580(v28, v26, -0x1.0000000000000p+0f,
                                              v37, 0x1.0000000000000p+0f);
                if ((int)v26 > 603384299) {
                  if ((v26 - 603384300 > 0x12 ||
                       ((1 << (v26 + 20)) & 0x40007) == 0) &&
                      (v26 - 603384486 > 0x12 ||
                       ((1 << ((v26 + 90) & 31)) & 0x40007) == 0)) {
                    goto LABEL_107;
                  }
                }
                else if (v26 != 309207023 && v26 != 309207191 &&
                         v26 != 309207209) {
                  goto LABEL_107;
                }
                v50 =
                    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 240) + 8LL) + 232LL);
                v51 = *(_QWORD*)(v50 + 392);
                v52 = *(_QWORD*)(v50 + 400);
                if (v52 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 8),
                                            1u, memory_order_relaxed);
                  v53 = *(_QWORD*)(v51 + 11616);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64, long double))(*(_QWORD*)v52 + 16LL))(
                        v52, v45);
                    std___1___shared_weak_count___release_weak(v52);
                  }
                  if (v53 == 0) {
                    goto LABEL_107;
                  }
                  goto LABEL_94;
                }
                if (*(_QWORD*)(v51 + 11616) != 0) {
                LABEL_94:
                  v54 = *(_QWORD*)(a1 + 240);
                  v63_.v70 = 0;
                  v63_.v68 = 0;
                  v63_.v69 = 0;
                  v63_.v66 = 0;
                  v63_.v67 = 0;
                  v55 = *(_QWORD*)(v54 + 8);
                  if (*(_BYTE*)(v55 + 145) == 1) {
                    v56 = HubCharacterNatives_cf7940(v55);
                    v54 = *(_QWORD*)(a1 + 240);
                  }
                  else {
                    v56 = 0;
                  }
                  v57 = *(_QWORD*)(a1 + 232);
                  v63_.v64 = v56;
                  v63_.v65 = v57;
                  v58 = *(_QWORD*)(v54 + 168);
                  LODWORD(v63_.v63) = 2;
                  if ((*GameRoutine_6d7b80(v58) & 0xFFF) != 0) {
                    v59 = GameRoutine_6d7b80(
                        *(_QWORD*)(*(_QWORD*)(a1 + 240) + 168LL));
                    if ((*(_DWORD*)v59 & 0xFFF) != 0) {
                      v60 = *(
                          _QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] +
                                                         64) +
                                              8LL * (*(_DWORD*)v59 & 0xFFF)) +
                                   792LL);
                    }
                    else {
                      v60 = 0;
                    }
                    v63_.v69 = v60;
                  }
                  GameRoutine_10a09d0((__int64)&v63_.v63);
                  if ((v63_.v66 & 1) != 0 && v63_.v68 != 0) {
                    v61 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v61 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v63_.v68);
                  }
                }
              }
            LABEL_107:
              ++*(_DWORD*)(a1 + 272);
              *(_QWORD*)(*v14 + 192) = *(_QWORD*)(*v14 + 184);
              goto LABEL_108;
            }
          }
        }
      }
      goto LABEL_108;
    }
    v33 = *GameData_212ee38[0];
    v34 = fw_memory_g_heap_manager_ptr;
    v35 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v63_.v63 = 33;
    v63_.v64 = 27;
    v63_.v65 = (__int64)v35;
    strcpy(v35, "SE_SYS_Decide_Move_ZoomView");
    game_103bcc0((void*)(v62), v33, &v63_.v63);
    if ((v63_.v63 & 1) != 0 && v63_.v65 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v34 + v36, v63_.v65);
    }
    *(_QWORD*)(a1 + 216) = *(_QWORD*)(a1 + 240);
    *(_DWORD*)(a1 + 152) = 3;
    return 0;
  }
}

__int64 game_map_1125a60(__int64 a1, __int64* a2, float a3, float a4, float a5,
                         __int64 a6, _DWORD* a7)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v14;
  const char* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  struct {
    unsigned __int64 v23;
    __int64 v24;
  } v23_;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v14 = result;
      result = *a2;
      if (*a2 == 0) {
        goto LABEL_21;
      }
      if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
        v15 = *(const char**)(a1 + 24);
      }
      else {
        v15 = (const char*)(a1 + 9);
      }
      LayoutAccessor_1560070((void*)(&v23_.v23), (__int64*)result, v15);
      result = v23_.v24;
      if (v23_.v24 != 0) {
        v16 = std___1___shared_weak_count_lock(v23_.v24);
        v17 = (__int64*)v23_.v23;
        result = v23_.v24;
        if (v23_.v24 != 0) {
          result = std___1___shared_weak_count___release_weak(v23_.v24);
        }
        if (v16 != 0 && v17 != nullptr) {
          v23_.v23 = __PAIR64__(LODWORD(a4), LODWORD(a3));
          LODWORD(v23_.v24) = 0;
          ui_LayoutAccessor_SetTranslate(v17, (__int64)&v23_.v23);
          LayoutAccessor_155e830((__int64)v17, 1);
          v18 = ui_LayoutAccessor_FindPane(v17, (__int64)"MapChip_Object");
          if (v18 != 0) {
            v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0],
                                 0);
            if (v19 != 0) {
              v20 = v19;
              (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 32LL))(a1, v19);
              (*(void (**)(__int64, __int64, float))(*(_QWORD*)a1 + 40LL))(
                  a1, v20, a5);
              v21 = *(_DWORD*)(a1 + 32);
              *(_DWORD*)(v20 + 80) = v21;
              *(_DWORD*)(v20 + 84) = v21;
              *(_BYTE*)(v20 + 88) |= 0x10u;
            }
          }
          result = ui_LayoutAccessor_FindPane(v17, (__int64)"N_Top");
          if (result != 0) {
            v22 = *(_DWORD*)(a1 + 32);
            *(_DWORD*)(result + 80) = v22;
            *(_DWORD*)(result + 84) = v22;
            *(_BYTE*)(result + 88) |= 0x10u;
          }
          goto LABEL_18;
        }
        if (v16 != 0) {
        LABEL_18:
          if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            result = std___1___shared_weak_count___release_weak(v16);
          }
        }
      }
      ++*a7;
    LABEL_21:
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        return std___1___shared_weak_count___release_weak(v14);
      }
    }
  }
  return result;
}

void game_map_11404a0(__int64 a1, int a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 (*v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15[2];
    __int64 v16;
  } v15_;
  struct {
    _BYTE v17[24];
    int v18;
  } v17_;
  _BYTE* v19;

  *(_WORD*)(a1 + 8) = 0;
  v4 = (__int64*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 56) = a2;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)a1 = game_map_MapContactEventBase_vtable;
  if (v4 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20(v4, a3[2], a3[1]);
    }
    else {
      v6 = *a3;
      v7 = a3[2];
      v4[1] = a3[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  v8 = a3[3];
  for (i = a3[4]; v8 != i; v8 += 32) {
    v17_.v17[0] = 0;
    v17_.v18 = -1;
    v10 = *(_DWORD*)(v8 + 24);
    if (v10 != -1) {
      v11 = GameData_2011fa8[(unsigned int)v10];
      v19 = v17_.v17;
      ((void (*)(_BYTE**, __int64))v11)(&v19, v8);
      v17_.v18 = v10;
    }
    GameRoutine_eaec10((__int64*)(a1 + 64), (__int64)v17_.v17);
    if (v17_.v18 != -1) {
      ((void (*)(_BYTE**, _BYTE*))decltype_c81af0_ptr[v17_.v18])(&v19,
                                                                 v17_.v17);
    }
  }
  *(_DWORD*)(a1 + 104) = *((_DWORD*)a3 + 12);
  *(_DWORD*)(a1 + 108) = *((_DWORD*)a3 + 13);
  *(_DWORD*)(a1 + 112) = *((_DWORD*)a3 + 14);
  *(_DWORD*)(a1 + 116) = *((_DWORD*)a3 + 15);
  *(_BYTE*)(a1 + 120) = *((_BYTE*)a3 + 64);
  if ((a3[9] & 1) != 0) {
    fw_text_String_CopyTerminated(v15_.v15, a3[11], a3[10]);
  }
  else {
    v12 = a3[10];
    v13 = a3[11];
    v15_.v15[0] = a3[9];
    v15_.v15[1] = v12;
    v15_.v16 = v13;
  }
  (*(void (**)(__int64, __int64*))(*(_QWORD*)a1 + 120LL))(a1, v15_.v15);
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v15_.v16);
  }
}

void game_map_1141940(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[2];
    __int64 v13;
  } v12_;
  struct {
    __int64 v14[2];
    __int64 v15;
    __int64 v16;
    __int64 v17;
    char gap72_[32];
    char v18;
    char gap105_[15];
    __int64 v19;
  } v14_;
  char v20;

  GameRoutine_1141380(v14_.v14, (__int64*)a2);
  game_map_1141200((_QWORD*)a1, 5u, v14_.v14);
  if ((v14_.v18 & 1) != 0 && v14_.v19 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v14_.v19);
  }
  v5 = v14_.v16;
  if (v14_.v16 != 0) {
    v6 = v14_.v17;
    if (v14_.v16 == v14_.v17) {
      goto LABEL_13;
    }
    do {
      v7 = *(unsigned int*)(v6 - 8);
      v8 = v6 - 32;
      if ((_DWORD)v7 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v7])(&v20, v6 - 32);
      }
      *(_DWORD*)(v6 - 8) = -1;
      v6 -= 32;
    } while (v8 != v5);
    v14_.v17 = v5;
    v5 = v14_.v16;
    if (v14_.v16 != 0) {
    LABEL_13:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v5);
    }
  }
  if ((v14_.v14[0] & 1) != 0 && v14_.v15 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v14_.v15);
  }
  *(_QWORD*)a1 = game_map_MapTreasureboxEvent_vtable;
  GameRoutine_1140e80((void*)(v12_.v12), (_DWORD*)a1);
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 120LL))(a1, v12_.v12);
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v12_.v13);
  }
  *(_DWORD*)(a1 + 108) = *(_DWORD*)(a2 + 64);
}

__int64 game_map_1832df0(__int64 a1, char a2, char a3)
{
  __int64* v4;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  struct {
    __int64* v12;
    __int64 v13;
  } v12_;

  v4 = (__int64*)(a1 + 24);
  if ((a2 & 1) != 0) {
    v5 = "L_Player_Equip01";
  }
  else {
    v5 = "L_Player_Equip00";
  }
  LayoutAccessor_1560070((void*)(&v12_.v12), v4, v5);
  result = v12_.v13;
  if (v12_.v13 != 0) {
    v7 = std___1___shared_weak_count_lock(v12_.v13);
    v8 = v12_.v12;
    result = v12_.v13;
    if (v12_.v13 != 0) {
      result = std___1___shared_weak_count___release_weak(v12_.v13);
    }
    if (v7 == 0 || v8 == nullptr) {
      if (v7 == 0) {
        return result;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock(v7);
      if (v10 != 0) {
        v11 = v10;
        game_159e7c0(v8, a3 & 1);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
      result = std___1___shared_weak_count___release_weak(v7);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      return std___1___shared_weak_count___release_weak(v7);
    }
  }
  return result;
}

__int64 game_map_18c51a0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  unsigned __int8 v12;
  __int64 v13;
  struct {
    __int64 v14;
    char v15;
  } v14_;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;

  result = X8CALL_X0(__int64, MapBattleHUD_18c6be0((void*)(&v18_.v18), a1));
  v8 = v18_.v18;
  if (v18_.v18 != 0) {
    v9 = *(_DWORD*)(v18_.v18 + 232);
    v10 = (a4 & 1) == 0;
    *(_DWORD*)(v18_.v18 + 232) = v10;
    if (v9 != v10) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 184LL))(v8);
      v8 = v18_.v18;
    }
    v11 = game_g_shared_system_skills_ptr;
    LODWORD(v16_.v16) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
    if ((game_HasSkill((_QWORD*)(a3 + 1744), (unsigned int*)&v16_.v16) & 1) !=
        0) {
      v12 = 3;
    }
    else {
      LODWORD(v16_.v16) =
          *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v11) & 0xFFF;
      if ((game_HasSkill((_QWORD*)(a3 + 1744), (unsigned int*)&v16_.v16) & 1) !=
          0) {
        v12 = 2;
      }
      else {
        LODWORD(v16_.v16) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v11) & 0xFFF;
        v12 = game_HasSkill((_QWORD*)(a3 + 1744), (unsigned int*)&v16_.v16) & 1;
      }
    }
    AsyncLoadThumbImage_18c0070(v8, v12);
    v16_.v16 = v18_.v18;
    v16_.v17 = v18_.v19;
    if (v18_.v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18_.v19 + 16), 1u,
                                memory_order_relaxed);
    }
    LOBYTE(v14_.v14) = 0;
    v14_.v15 = 0;
    GameHr_18c6e70((__int64)&v16_.v16, a2, &v14_.v14, 0, 1);
    result = v16_.v17;
    if (v16_.v17 != 0) {
      result = std___1___shared_weak_count___release_weak(v16_.v17);
    }
  }
  v13 = v18_.v19;
  if (v18_.v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return std___1___shared_weak_count___release_weak(v13);
  }
  return result;
}

__int64 game_map_18c5620(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v21;
    char v22;
  } v21_;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;

  MapBattleHUD_18c4640((void*)(&v25_.v25), a1);
  v8 = v25_.v25;
  if (v25_.v25 == 0) {
    v11 = 0;
    v19 = v25_.v26;
    if (v25_.v26 == 0) {
      return v11;
    }
    goto LABEL_22;
  }
  v9 = *(_DWORD*)(v25_.v25 + 232);
  if ((a4 & 1) != 0) {
    v10 = 2;
  }
  else {
    v10 = 1;
  }
  *(_DWORD*)(v25_.v25 + 232) = v10;
  if (v9 != v10) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 184LL))(v8);
  }
  *(_BYTE*)(v8 + 280) = 1;
  *(_DWORD*)(v8 + 336) = 0;
  *(_QWORD*)(v8 + 320) = a3;
  *(_QWORD*)(v8 + 328) = 12;
  *(_DWORD*)(v8 + 344) = 65537;
  BattlePopupBlaze_18c2620(v8);
  v23_.v23 = v8;
  v23_.v24 = v25_.v26;
  if (v25_.v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25_.v26 + 16), 1u,
                              memory_order_relaxed);
  }
  LOBYTE(v21_.v21) = 0;
  v21_.v22 = 0;
  v11 = GameHr_18c6e70((__int64)&v23_.v23, a2, &v21_.v21, 0, 1);
  if (v23_.v24 != 0) {
    std___1___shared_weak_count___release_weak(v23_.v24);
  }
  v12 = *(_QWORD*)(a1 + 144);
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212c610, &GameData_2107c00, 0);
    if (v13 != 0) {
      v14 = v13;
      v15 = *(_QWORD*)(v13 + 160);
      if (v15 != 0) {
        v16 = std___1___shared_weak_count_lock(v15);
        if (v16 != 0) {
          v17 = v16;
          v18 = *(_QWORD*)(v14 + 152);
          if (v18 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 152LL))(v18);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            std___1___shared_weak_count___release_weak(v17);
          }
        }
      }
    }
  }
  *(_QWORD*)(a1 + 144) = v11;
  v19 = v25_.v26;
  if (v25_.v26 != 0) {
  LABEL_22:
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
  }
  return v11;
}

__int64 game_map_18c57d0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v21;
    char v22;
  } v21_;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;

  MapBattleHUD_18c4640((void*)(&v25_.v25), a1);
  v8 = v25_.v25;
  if (v25_.v25 == 0) {
    v11 = 0;
    v19 = v25_.v26;
    if (v25_.v26 == 0) {
      return v11;
    }
    goto LABEL_22;
  }
  v9 = *(_DWORD*)(v25_.v25 + 232);
  if ((a4 & 1) != 0) {
    v10 = 2;
  }
  else {
    v10 = 1;
  }
  *(_DWORD*)(v25_.v25 + 232) = v10;
  if (v9 != v10) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 184LL))(v8);
  }
  *(_BYTE*)(v8 + 280) = 1;
  *(_DWORD*)(v8 + 336) = 0;
  *(_QWORD*)(v8 + 320) = a3;
  *(_QWORD*)(v8 + 328) = 12;
  *(_DWORD*)(v8 + 344) = 16777217;
  BattlePopupBlaze_18c2620(v8);
  v23_.v23 = v8;
  v23_.v24 = v25_.v26;
  if (v25_.v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25_.v26 + 16), 1u,
                              memory_order_relaxed);
  }
  LOBYTE(v21_.v21) = 0;
  v21_.v22 = 0;
  v11 = GameHr_18c6e70((__int64)&v23_.v23, a2, &v21_.v21, 0, 1);
  if (v23_.v24 != 0) {
    std___1___shared_weak_count___release_weak(v23_.v24);
  }
  v12 = *(_QWORD*)(a1 + 144);
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212c610, &GameData_2107c00, 0);
    if (v13 != 0) {
      v14 = v13;
      v15 = *(_QWORD*)(v13 + 160);
      if (v15 != 0) {
        v16 = std___1___shared_weak_count_lock(v15);
        if (v16 != 0) {
          v17 = v16;
          v18 = *(_QWORD*)(v14 + 152);
          if (v18 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 152LL))(v18);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            std___1___shared_weak_count___release_weak(v17);
          }
        }
      }
    }
  }
  *(_QWORD*)(a1 + 144) = v11;
  v19 = v25_.v26;
  if (v25_.v26 != 0) {
  LABEL_22:
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
  }
  return v11;
}

__int64 game_map_18c5980(__int64 a1, int* a2, char a3, int a4, int a5, char a6,
                         char a7)
{
  __int64 v7;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  __int128 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 v32;
    char v33;
  } v32_;
  struct {
    __int64 v34;
    __int64 v35;
  } v34_;
  struct {
    __int64 v36;
    __int64 v37;
  } v36_;

  if (a4 == a5) {
    return 0;
  }
  MapBattleHUD_18c4640((void*)(&v34_.v34), a1);
  v15 = v34_.v34;
  if (v34_.v34 == 0) {
    v7 = 0;
    v30 = v34_.v35;
    if (v34_.v35 == 0) {
      return v7;
    }
    goto LABEL_30;
  }
  v16 = *(_DWORD*)(v34_.v34 + 232);
  if ((a7 & 1) != 0) {
    v17 = 2;
  }
  else {
    v17 = 1;
  }
  *(_DWORD*)(v34_.v34 + 232) = v17;
  if (v16 != v17) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 184LL))(v15);
  }
  *(_BYTE*)(v15 + 280) = a3;
  LOBYTE(v36_.v36) = 0;
  v18 = *a2;
  LOBYTE(v36_.v37) = 0;
  *(_DWORD*)(v15 + 192) = v18;
  *(_DWORD*)(v15 + 196) = a2[1];
  v19 = *(_OWORD*)(v15 + 192);
  v20 = *(_QWORD*)v15;
  *((_QWORD*)&v19 + 1) = (unsigned int)a2[2];
  *(_OWORD*)(v15 + 192) = v19;
  (*(void (**)(__int64, __int64*, _QWORD, _QWORD))(v20 + 192))(v15, &v36_.v36,
                                                               0, 0);
  v21 = a4 & ~(a4 >> 31);
  *(_DWORD*)(v15 + 336) = 0;
  *(_BYTE*)(v15 + 344) = 1;
  *(_WORD*)(v15 + 346) = 0;
  if (v21 >= 12) {
    v21 = 12;
  }
  *(_DWORD*)(v15 + 328) = v21;
  v22 = a5 & ~(a5 >> 31);
  if (v22 >= 12) {
    v22 = 12;
  }
  if ((a6 & 1) != 0) {
    v22 = 0;
  }
  *(_BYTE*)(v15 + 345) = a6 & 1;
  *(_DWORD*)(v15 + 332) = v22;
  BattlePopupBlaze_18c2620(v15);
  v36_.v36 = v15;
  v36_.v37 = v34_.v35;
  if (v34_.v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34_.v35 + 16), 1u,
                              memory_order_relaxed);
  }
  LOBYTE(v32_.v32) = 0;
  v32_.v33 = 0;
  v7 = GameHr_18c6e70((__int64)&v36_.v36, (__int64)a2, &v32_.v32, 0, 1);
  if (v36_.v37 != 0) {
    std___1___shared_weak_count___release_weak(v36_.v37);
  }
  v23 = *(_QWORD*)(a1 + 144);
  if (v23 != 0) {
    v24 = __dynamic_cast(v23, GameData_212c610, &GameData_2107c00, 0);
    if (v24 != 0) {
      v25 = v24;
      v26 = *(_QWORD*)(v24 + 160);
      if (v26 != 0) {
        v27 = std___1___shared_weak_count_lock(v26);
        if (v27 != 0) {
          v28 = v27;
          v29 = *(_QWORD*)(v25 + 152);
          if (v29 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v29 + 152LL))(v29);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            std___1___shared_weak_count___release_weak(v28);
          }
        }
      }
    }
  }
  *(_QWORD*)(a1 + 144) = v7;
  v30 = v34_.v35;
  if (v34_.v35 != 0) {
  LABEL_30:
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak(v30);
    }
  }
  return v7;
}

__int64 game_map_18c5f30(__int64 a1, __int64 a2, char a3, int a4, int a5,
                         char a6)
{
  __int64 v6;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v27;
    char v28;
  } v27_;
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  struct {
    __int64 v31;
    __int64 v32;
  } v31_;

  if (a4 == a5) {
    return 0;
  }
  MapBattleHUD_18c4640((void*)(&v31_.v31), a1);
  v13 = v31_.v31;
  if (v31_.v31 == 0) {
    v6 = 0;
    v25 = v31_.v32;
    if (v31_.v32 == 0) {
      return v6;
    }
    goto LABEL_28;
  }
  v14 = *(_DWORD*)(v31_.v31 + 232);
  if ((a6 & 1) != 0) {
    v15 = 2;
  }
  else {
    v15 = 1;
  }
  *(_DWORD*)(v31_.v31 + 232) = v15;
  if (v14 != v15) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 184LL))(v13);
  }
  v16 = a4 & ~(a4 >> 31);
  *(_BYTE*)(v13 + 280) = a3;
  *(_DWORD*)(v13 + 336) = 0;
  *(_DWORD*)(v13 + 344) = 0;
  if (v16 >= 12) {
    v16 = 12;
  }
  *(_DWORD*)(v13 + 328) = v16;
  v17 = a5 & ~(a5 >> 31);
  if (v17 >= 12) {
    v17 = 12;
  }
  *(_DWORD*)(v13 + 332) = v17;
  BattlePopupBlaze_18c2620(v13);
  v29_.v29 = v13;
  v29_.v30 = v31_.v32;
  if (v31_.v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v31_.v32 + 16), 1u,
                              memory_order_relaxed);
  }
  LOBYTE(v27_.v27) = 0;
  v27_.v28 = 0;
  v6 = GameHr_18c6e70((__int64)&v29_.v29, a2, &v27_.v27, 0, 1);
  if (v29_.v30 != 0) {
    std___1___shared_weak_count___release_weak(v29_.v30);
  }
  v18 = *(_QWORD*)(a1 + 144);
  if (v18 != 0) {
    v19 = __dynamic_cast(v18, GameData_212c610, &GameData_2107c00, 0);
    if (v19 != 0) {
      v20 = v19;
      v21 = *(_QWORD*)(v19 + 160);
      if (v21 != 0) {
        v22 = std___1___shared_weak_count_lock(v21);
        if (v22 != 0) {
          v23 = v22;
          v24 = *(_QWORD*)(v20 + 152);
          if (v24 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 152LL))(v24);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
            std___1___shared_weak_count___release_weak(v23);
          }
        }
      }
    }
  }
  *(_QWORD*)(a1 + 144) = v6;
  v25 = v31_.v32;
  if (v31_.v32 != 0) {
  LABEL_28:
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
  }
  return v6;
}

void game_map_18c7220(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  const char* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  signed __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  _QWORD* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64* v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  signed __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  struct {
    __int64 v94;
    __int64 v95;
  } v94_;
  struct {
    __int64 v96;
    __int64 v97;
  } v96_;
  struct {
    __int64 v98;
    __int64 v99;
  } v98_;

  v1 = *(_QWORD*)(a1 + 160);
  v2 = a1;
  if (v1 == 0) {
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 160) = 0;
    goto LABEL_114;
  }
  if (*(_QWORD*)(v1 + 8) == -1) {
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 160) = 0;
    goto LABEL_113;
  }
  v3 = *(_QWORD*)(a1 + 152);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                            memory_order_relaxed);
  v4 = GameData_212d570[0];
  v5 = *GameData_212d570[0];
  if (*GameData_212d570[0] != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v7 = *(__int64**)(v5 + 352);
    v6 = *(__int64**)(v5 + 360);
    if (v7 != v6) {
      while (1) {
        v8 = v7[1];
        if (v8 != 0) {
          v9 = *v7;
          v10 = v7[1];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
          v11 = std___1___shared_weak_count_lock(v10);
          if (v11 == 0) {
            v9 = 0;
          }
        }
        else {
          v9 = 0;
          v11 = 0;
        }
        v12 = std___1___shared_weak_count_lock(v1);
        if (v12 != 0) {
          v13 = v3;
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v14 = v12;
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak(v14);
            v13 = v3;
          }
        }
        else {
          v13 = 0;
        }
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
        v17 = v9 != 0 && v13 != 0 && v9 == v13;
        if (v8 != 0) {
          std___1___shared_weak_count___release_weak(v8);
        }
        if (v17) {
          break;
        }
        v7 += 2;
        if (v7 == v6) {
          v7 = v6;
          break;
        }
      }
      v6 = *(__int64**)(v5 + 360);
      v4 = GameData_212d570[0];
    }
    if (v7 == v6) {
      goto LABEL_43;
    }
    v18 = v7 + 2;
    if (v7 + 2 == v6) {
      if (v7 == v6) {
      LABEL_42:
        *(_QWORD*)(v5 + 360) = v7;
      LABEL_43:
        std___1___shared_weak_count___release_weak(v1);
        v2 = a1;
        goto LABEL_44;
      }
    }
    else {
      do {
        v20 = *v18;
        v19 = v18[1];
        v21 = *(v18 - 1);
        *v18 = 0;
        v18[1] = 0;
        *(v18 - 2) = v20;
        *(v18 - 1) = v19;
        if (v21 != 0) {
          std___1___shared_weak_count___release_weak(v21);
        }
        v18 += 2;
      } while (v18 != v6);
      v6 = *(__int64**)(v5 + 360);
      v7 = v18 - 2;
      if (v18 - 2 == v6) {
        goto LABEL_42;
      }
    }
    do {
      v27 = *(v6 - 1);
      if (v27 != 0) {
        std___1___shared_weak_count___release_weak(v27);
      }
      v6 -= 2;
    } while (v6 != v7);
    goto LABEL_42;
  }
LABEL_44:
  std___1___shared_weak_count___release_weak(v1);
  v22 = *(_QWORD*)(v2 + 160);
  if (v22 != 0) {
    v23 = std___1___shared_weak_count_lock(v22);
    v24 = v23;
    if (v23 == 0) {
      v25 = 0;
      v26 = (__int64*)*v4;
      if (*v4 == 0) {
        goto LABEL_110;
      }
      goto LABEL_54;
    }
    v25 = *(_QWORD*)(v2 + 152);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v24);
      v26 = (__int64*)*v4;
      if (*v4 == 0) {
        goto LABEL_110;
      }
      goto LABEL_54;
    }
  }
  else {
    v25 = 0;
    v24 = 0;
  }
  v26 = (__int64*)*v4;
  if (*v4 == 0) {
    goto LABEL_110;
  }
LABEL_54:
  v96_.v96 = 0;
  v96_.v97 = 0;
  if (v24 != 0 &&
      (v28 = std___1___shared_weak_count_lock(v24), v96_.v97 = v28, v28 != 0) &&
      (v96_.v96 = v25, v25 != 0) &&
      (v29 = v28, (v30 = __dynamic_cast(v25, GameData_212dfc0[0],
                                        GameData_21320c0[0], 0)) != 0)) {
    v31 = &v96_.v96;
    v98_.v98 = v30;
    v98_.v99 = v29;
  }
  else {
    v31 = &v98_.v98;
  }
  *v31 = 0;
  v31[1] = 0;
  v32 = v96_.v97;
  if (v96_.v97 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v96_.v97 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    std___1___shared_weak_count___release_weak(v32);
    v33 = v98_.v98;
    if (v98_.v98 == 0) {
      goto LABEL_107;
    }
  }
  else {
    v33 = v98_.v98;
    if (v98_.v98 == 0) {
      goto LABEL_107;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v33 + 40LL))(v33, 0);
  v34 = *(_QWORD*)v33;
  *(_DWORD*)(v33 + 232) = 0;
  (*(void (**)(__int64))(v34 + 184))(v33);
  (*(void (**)(__int64))(*(_QWORD*)v33 + 176LL))(v33);
  v35 = v26[17];
  if (v35 == 0) {
    goto LABEL_107;
  }
  v36 = *(_QWORD*)(*(_QWORD*)(v33 + 8) + 24LL);
  v37 = *(_QWORD*)(v36 + 24);
  if (v37 == v35) {
    goto LABEL_107;
  }
  Pane_58df60(v37, *(_QWORD**)(*(_QWORD*)(v33 + 8) + 24LL));
  Pane_58dee0(v26[17], v36);
  v38 = *(_QWORD*)(v33 + 8);
  if (v38 != 0) {
    v39 = (const char*)(*(_QWORD*)(v38 + 24) + 176LL);
    v40 = strlen(v39);
    *(_QWORD*)(v33 + 16) = v39;
    *(_QWORD*)(v33 + 24) = v40;
    ui_ILayoutControl_UpdatePath(v33);
  }
  v94_.v94 = 0;
  v94_.v95 = 0;
  if (v24 != 0 &&
      (v41 = std___1___shared_weak_count_lock(v24), v94_.v95 = v41, v41 != 0) &&
      (v94_.v94 = v25, v25 != 0) &&
      (v42 = v41, (v43 = __dynamic_cast(v25, GameData_212dfc0[0],
                                        GameData_21320d0[0], 0)) != 0)) {
    v44 = &v94_.v94;
    v96_.v96 = v43;
    v96_.v97 = v42;
  }
  else {
    v44 = &v96_.v96;
  }
  *v44 = 0;
  v44[1] = 0;
  v45 = v94_.v95;
  if (v94_.v95 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v94_.v95 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    std___1___shared_weak_count___release_weak(v45);
  }
  v46 = v96_.v96;
  if (v96_.v96 != 0) {
    v47 = (__int64*)v26[30];
    v48 = v26[31];
    if ((unsigned __int64)v47 < v48) {
      v49 = v96_.v97;
      *v47 = v96_.v96;
      v47[1] = v49;
      if (v49 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16), 1u,
                                  memory_order_relaxed);
      }
      v50 = v47 + 2;
    LABEL_103:
      v26[30] = (__int64)v50;
      goto LABEL_104;
    }
    v56 = v26[29];
    v57 = (signed __int64)v47 - v56;
    v58 = ((__int64)v47 - v56) >> 4;
    v59 = v58 + 1;
    if ((unsigned __int64)(v58 + 1) >> 60 == 0) {
      v60 = v48 - v56;
      if (v60 >> 3 > v59) {
        v59 = v60 >> 3;
      }
      if ((unsigned __int64)v60 >= 0x7FFFFFFFFFFFFFF0LL) {
        v61 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v61 = v59;
      }
      if (v61 >> 60 == 0) {
        v62 = fw_memory_g_heap_manager_ptr;
        v63 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v61, 16, 0);
        v64 = v96_.v97;
        v65 = (__int64*)(v63 + v57);
        v66 = v63 + 16 * v61;
        *v65 = v46;
        v65[1] = v64;
        if (v64 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 16), 1u,
                                    memory_order_relaxed);
          v56 = v26[29];
          v57 = v26[30] - v56;
          v58 = v57 >> 4;
        }
        v67 = (__int64)&v65[-2 * v58];
        v50 = v65 + 2;
        memcpy(v67, v56, v57);
        v26[29] = v67;
        v26[30] = (__int64)v50;
        v26[31] = v66;
        if (v56 != 0) {
          v68 = 128;
          if (*(_QWORD*)(*(_QWORD*)v62 + 200LL) == 0) {
            v68 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v62 + v68, v56);
        }
        goto LABEL_103;
      }
    LABEL_154:
      GameRoutine_60a210();
    }
  LABEL_153:
    GameRoutine_18c7090();
  }
  v51 = v98_.v98;
  v52 = (*(__int64 (**)(__int64))(*(_QWORD*)v98_.v98 + 168LL))(v98_.v98);
  v53 = v26[25];
  if (v53 == 0 || v26[27] == 0) {
    goto LABEL_104;
  }
  v54 = v53 - 1;
  if ((v53 & (v53 - 1)) != 0) {
    v55 = v52;
    if (v52 >= v53) {
      v55 = v52 % v53;
    }
  }
  else {
    v55 = v54 & v52;
  }
  v71 = *(_QWORD**)(v26[24] + 8 * v55);
  if (v71 == nullptr) {
    goto LABEL_104;
  }
  v72 = (_QWORD*)*v71;
  if (*v71 == 0) {
    goto LABEL_104;
  }
  if ((v53 & v54) == 0) {
    while (1) {
      v74 = v72[1];
      if (v74 == v52) {
        if (v72[2] == v52) {
          goto LABEL_135;
        }
      }
      else if ((v74 & v54) != v55) {
        goto LABEL_104;
      }
      v72 = (_QWORD*)*v72;
      if (v72 == nullptr) {
        goto LABEL_104;
      }
    }
  }
  while (1) {
    v73 = v72[1];
    if (v73 == v52) {
      break;
    }
    if (v73 >= v53) {
      v73 %= v53;
    }
    if (v73 != v55) {
      goto LABEL_104;
    }
  LABEL_124:
    v72 = (_QWORD*)*v72;
    if (v72 == nullptr) {
      goto LABEL_104;
    }
  }
  if (v72[2] != v52) {
    goto LABEL_124;
  }
LABEL_135:
  v75 = (__int64*)v72[4];
  v76 = v72[5];
  if ((unsigned __int64)v75 < v76) {
    v77 = v98_.v99;
    v78 = v2;
    *v75 = v51;
    v75[1] = v77;
    if (v77 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v77 + 16), 1u,
                                memory_order_relaxed);
    }
    v79 = v75 + 2;
    goto LABEL_152;
  }
  v80 = v72[3];
  v81 = (signed __int64)v75 - v80;
  v82 = ((__int64)v75 - v80) >> 4;
  v83 = v82 + 1;
  if ((unsigned __int64)(v82 + 1) >> 60 != 0) {
    goto LABEL_153;
  }
  v84 = v76 - v80;
  if (v84 >> 3 > v83) {
    v83 = v84 >> 3;
  }
  if ((unsigned __int64)v84 >= 0x7FFFFFFFFFFFFFF0LL) {
    v85 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v85 = v83;
  }
  if (v85 >> 60 != 0) {
    goto LABEL_154;
  }
  v86 = fw_memory_g_heap_manager_ptr;
  v87 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v85, 16, 0);
  v88 = v98_.v99;
  v89 = (__int64*)(v87 + v81);
  v90 = v87 + 16 * v85;
  v78 = v2;
  *v89 = v51;
  v89[1] = v88;
  if (v88 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v88 + 16), 1u,
                              memory_order_relaxed);
    v80 = v72[3];
    v81 = v72[4] - v80;
    v82 = v81 >> 4;
  }
  v91 = (__int64)&v89[-2 * v82];
  v79 = v89 + 2;
  memcpy(v91, v80, v81);
  v72[3] = v91;
  v72[4] = v79;
  v72[5] = v90;
  if (v80 != 0) {
    v92 = 128;
    if (*(_QWORD*)(*(_QWORD*)v86 + 200LL) == 0) {
      v92 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v86 + v92, v80);
  }
LABEL_152:
  v72[4] = v79;
  v2 = v78;
LABEL_104:
  v69 = v96_.v97;
  if (v96_.v97 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v96_.v97 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
    std___1___shared_weak_count___release_weak(v69);
  }
LABEL_107:
  v70 = v98_.v99;
  if (v98_.v99 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v98_.v99 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
    std___1___shared_weak_count___release_weak(v70);
  }
LABEL_110:
  if (v24 != 0) {
    std___1___shared_weak_count___release_weak(v24);
  }
  v1 = *(_QWORD*)(v2 + 160);
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 160) = 0;
  if (v1 != 0) {
  LABEL_113:
    std___1___shared_weak_count___release_weak(v1);
  }
LABEL_114:
  if (*(_BYTE*)(v2 + 209) == 1 && *GameData_212d570[0] != 0) {
    *(_QWORD*)(*GameData_212d570[0] + 144) = 0;
  }
}

__int64 game_map_19f4d00(__int64 a1, int* a2, _DWORD** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  __int64* v9;
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  _DWORD* v14;
  float v15;
  float v16;
  float v17;
  _BOOL8 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 primeEm;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  unsigned __int64 v49;

  v4 = *a2;
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    v8 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v3 = *a2;
      if (v5 <= v4) {
        v3 = v4 % v5;
      }
    }
    else {
      v3 = v8 & v4;
    }
    v9 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v9 != nullptr) {
      result = *v9;
      if (*v9 != 0) {
        if ((v5 & v8) == 0) {
          while (1) {
            v12 = *(_QWORD*)(result + 8);
            if (v12 == v4) {
              if (*(_DWORD*)(result + 16) == (_DWORD)v4) {
                return result;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_22;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_22;
            }
          }
        }
        do {
          v11 = *(_QWORD*)(result + 8);
          if (v11 == v4) {
            if (*(_DWORD*)(result + 16) == (_DWORD)v4) {
              return result;
            }
          }
          else {
            if (v11 >= v5) {
              v11 %= v5;
            }
            if (v11 != v3) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_22:
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v14 = *a3;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v4;
  v15 = *(float*)(a1 + 32);
  LODWORD(v14) = *v14;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_DWORD*)(result + 16) = (_DWORD)v14;
  v16 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v5 == 0 || (float)(v15 * (float)v5) < v16) {
    v17 = v16 / v15;
    v18 = true;
    if (v5 >= 3) {
      v18 = (v5 & (v5 - 1)) != 0;
    }
    v19 = v18 | (2 * v5);
    v20 = vcvtps_u64_f32(v17);
    if (v19 <= v20) {
      primeEm = v20;
    }
    else {
      primeEm = v19;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v22 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v22;
      v5 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm <= v5) {
      if (primeEm >= v5) {
        goto LABEL_83;
      }
      v29 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v5 < 3 || (v5 & (v5 - 1)) != 0) {
        v42 = result;
        v29 = std___1___next_prime(v29);
        result = v42;
      }
      else {
        v30 = 1LL << (-(char)__clz(v29 - 1) & 63);
        if (v29 >= 2) {
          v29 = v30;
        }
      }
      if (primeEm <= v29) {
        primeEm = v29;
      }
      if (primeEm >= v5) {
        goto LABEL_83;
      }
      if (primeEm == 0) {
        v43 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v43 != 0) {
          v44 = result;
          v45 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(*v13 + v45, v43);
          result = v44;
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_83;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v23 = result;
    v24 = fw_memory_HeapManager_Allocate(*v13, 8 * primeEm, 16, 0);
    v25 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v24;
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v26, v25);
    }
    v27 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v28 = 0;
      result = v23;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 48) = 0;
        v31 = *(_QWORD*)a1 + 8 * v28;
        v28 += 8;
        *(_QWORD*)(v31 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v28);
    }
    else {
      v28 = 0;
      result = v23;
    }
    if ((primeEm & 7) != 0) {
      v32 = 8 * v28;
      do {
        --v27;
        *(_QWORD*)(*(_QWORD*)a1 + v32) = 0;
        v32 += 8;
      } while (v27 != 0);
    }
    v34 = a1 + 16;
    v33 = *(_QWORD**)(a1 + 16);
    if (v33 != nullptr) {
      v35 = v33[1];
      v36 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v35 >= primeEm) {
          v35 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v35) = v34;
        v37 = (_QWORD*)*v33;
        if (*v33 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v38 = v37[1];
          if (v38 >= primeEm) {
            v38 %= primeEm;
          }
          if (v38 != v35) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v38) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v33;
              goto LABEL_60;
            }
            *v33 = *v37;
            *v37 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v38);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v38) = v37;
            v37 = v33;
          }
          v38 = v35;
        LABEL_60:
          v33 = v37;
          v37 = (_QWORD*)*v37;
          v35 = v38;
          if (v37 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v39 = v35 & v36;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v39) = v34;
      while (1) {
        v40 = (_QWORD*)*v33;
        if (*v33 == 0) {
          break;
        }
        v41 = v40[1] & v36;
        if (v41 == v39) {
          v33 = (_QWORD*)*v33;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v41) != 0) {
          *v33 = *v40;
          *v40 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v41);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v41) = v40;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v33;
          v33 = v40;
          v39 = v41;
        }
      }
    }
  LABEL_83:
    v5 = *(_QWORD*)(a1 + 8);
    if ((v5 & (v5 - 1)) != 0) {
      if (v5 <= v4) {
        v3 = v4 % v5;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = (v5 - 1) & v4;
    }
  }
  v46 = *(_QWORD*)a1;
  v47 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
  if (v47 != nullptr) {
    *(_QWORD*)result = *v47;
    *v47 = result;
  }
  else {
    v48 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v48;
    *(_QWORD*)(v46 + 8 * v3) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v49 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v5 & (v5 - 1)) != 0) {
        if (v49 >= v5) {
          v49 %= v5;
        }
      }
      else {
        v49 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v49) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

__attribute__((swiftcall)) void game_map_1a01550(PSEUDO_X8 x8_,
                                                 __int64 unused_int0,
                                                 __int64 a1, char a2, char a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  char* v9;
  int v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;
  __int64 v16;
  struct {
    _QWORD v17[2];
    char* v18;
  } v17_;

  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v17_.v17[0] = 33;
  v17_.v17[1] = 27;
  v17_.v18 = v9;
  v10 = *(unsigned __int8*)(a1 + 57);
  strcpy(v9, "Battle_MiniMapLarge_Object_");
  if ((unsigned int)(v10 - 4) >= 3) {
    if (v10 == 3) {
      if ((a2 & 1) != 0) {
        v14 = (char*)fw_memory_HeapManager_Allocate(*v8, 40, 16, 0);
        strcpy(v14, "Battle_MiniMapLarge_Object_Treasure");
        *a4 = 41;
        a4[1] = 35;
      }
      else {
        v14 = (char*)fw_memory_HeapManager_Allocate(*v8, 48, 16, 0);
        strcpy(v14, "Battle_MiniMapLarge_Object_TreasureOpened");
        *a4 = 49;
        a4[1] = 41;
      }
      a4[2] = (__int64)v14;
      goto LABEL_25;
    }
    if (v10 == 7) {
      if ((a2 & 1) == 0) {
        goto LABEL_24;
      }
      v12 = fw_memory_HeapManager_Allocate(*v8, 32, 16, 0);
      *a4 = 33;
      a4[1] = 31;
      a4[2] = v12;
      v13 = 0x707261575F746365LL;
    }
    else {
      if ((a3 & 1) != 0 && v10 == 10) {
        v15 = (char*)fw_memory_HeapManager_Allocate(*v8, 40, 16, 0);
        strcpy(v15, "Battle_MiniMapLarge_Object_Destructible");
        *a4 = 41;
        a4[1] = 39;
        a4[2] = (__int64)v15;
        goto LABEL_25;
      }
      if (v10 == 2) {
        if ((a2 & 1) != 0 && *(_BYTE*)(a1 + 59) != 0) {
          Layout_c147c0((void*)(a4), (unsigned __int8*)v17_.v17, "Device");
          if ((v17_.v17[0] & 1) == 0) {
            return;
          }
          v9 = v17_.v18;
          if (v17_.v18 == nullptr) {
            return;
          }
          goto LABEL_25;
        }
        goto LABEL_24;
      }
      if (v10 != 1) {
      LABEL_24:
        *(_WORD*)a4 = 0;
        goto LABEL_25;
      }
      v12 = fw_memory_HeapManager_Allocate(*v8, 32, 16, 0);
      *a4 = 33;
      a4[1] = 31;
      a4[2] = v12;
      v13 = 0x726F6F445F746365LL;
    }
    *(_QWORD*)(v12 + 23) = v13;
    qmemcpy((void*)v12, "Battle_MiniMapLarge_Obj", 23);
    *(_BYTE*)(v12 + 31) = 0;
    goto LABEL_25;
  }
  if ((a2 & 1) == 0) {
    goto LABEL_24;
  }
  v11 = (char*)fw_memory_HeapManager_Allocate(*v8, 40, 16, 0);
  strcpy(v11, "Battle_MiniMapLarge_Object_Cannon");
  *a4 = 41;
  a4[1] = 33;
  a4[2] = (__int64)v11;
LABEL_25:
  v16 = 128;
  if (*(_QWORD*)(*v8 + 200) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free(*v8 + v16, (__int64)v9);
}

#pragma GCC visibility pop
