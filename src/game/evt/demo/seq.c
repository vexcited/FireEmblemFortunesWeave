#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1147f80(__int64);
__int64 GameRoutine_114f000(void);
__int64 GameRoutine_1152360(_QWORD, _QWORD);
__int64 GameRoutine_1155100(long double);
__int64 GameRoutine_11c6f00(void);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD, long double);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_80a2a0(float);
__int64 GameRoutine_80a410(_QWORD, float);
__int64 GameRoutine_869280(void);
__int64 GameRoutine_869540(_QWORD);
__int64 GameRoutine_8697c0(_QWORD, _QWORD, double);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 GameRoutine_9a4300(_QWORD);
__int64 GameRoutine_9b86d0(_QWORD, _QWORD);
__int64 GameRoutine_a2e7c0(void);
__int64 GameRoutine_a85ad0(_QWORD, long double);
__int64 GameRoutine_bc6460(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _DWORD GameData_1b01468[8];
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212c960;
extern __int64 (*GameData_2012c80[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_evt_demo_Seq_vtable[])();
extern __int64 GameData_212c638;
extern __int64 GameData_21c9d98;
extern __int64 GameData_21c9db0;
extern __int64 GameData_21f61c0;
extern __int64 GameData_22336e0;
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime;
extern __int64 game_sound_g_game_sound;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_g_frame_clock_ptr[3];
extern char GameData_1a9f09e;
extern int GameData_21f61c8;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 Seq_Destructor(__int64 a1);
__int64 Seq_1149de0(__int64 a1, __int64 a2);
__int64 Seq_1149f10(__int64 a1, __int64 a2);
__int64 Seq_114a7d0(__int64 a1, unsigned __int8* a2);
bool Seq_114ab50(__int64 a1, _QWORD* a2);
bool Seq_114af10(__int64 a1, _QWORD* a2);
__int64 Seq_114cda0_alt2(__int64 a1, __int64 a2, __int16* a3,
                         char a4) __asm__("Seq_114cda0");
__int64 Seq_114d0d0_alt1(__int64 a1, char a2,
                         long double a3) __asm__("Seq_114d0d0");
__int64 Seq_114d340(__int64 a1, __int64 a2);
__int64 Seq_114d520(__int64 a1, __int64 a2);
__int64 Seq_114d680(__int64 a1);
__int64 Seq_114d7c0(float a1, float a2, float a3, __int64 a4, char a5);
__int64 Seq_114d960(float a1, float a2, __int64 a3, char a4);
__int64 Seq_114da80(__int64 result, char a2, __int128* a3, float a4, float a5,
                    float a6, float a7, float a8, float a9, float a10);
__int64 Seq_114dc80(float a1, float a2, float a3, __int64 a4, char a5);
__int64 Seq_114dda0(float a1, float a2, float a3, __int64 a4, char a5,
                    __int128* a6);
__int64 Seq_114df40(float a1, float a2, float a3, float a4, float a5, float a6,
                    __int64 a7, char a8, __int128* a9);
__int64 GameHr_1155280();
__int64 Seq_Unknown5_114efc0();
unsigned __int64 Seq_11504c0(__int64 a1);
_QWORD* GameRoutine_114a9c0(__int64);
__int64 GameRoutine_114a040(__int64, char*, _QWORD*);
__int64 GameRoutine_f41c80(_QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20133a0[])();
extern __int64 (*GameData_2013420[])();
__int64 game_evt_demo_Seq_ChangeMap_lambda0_Destructor(__int64 result);
__int64 game_evt_demo_Seq_ChangeMap_lambda0_DeletingDestructor(__int64 a1);
_QWORD* game_evt_demo_Seq_ChangeMap_lambda0_Clone(__int64 a1);
_QWORD* game_evt_demo_Seq_ChangeMap_lambda0_CloneInto(_QWORD* result,
                                                      __int64 a2);
__int64 game_evt_demo_Seq_ChangeMap_lambda0_Destroy(__int64 result);
_QWORD* game_evt_demo_Seq_ChangeMap_lambda0_Invoke(__int64 a1);
__int64 game_evt_demo_Seq_ChangeMap_lambda1_Destructor(__int64 result);
__int64 game_evt_demo_Seq_ChangeMap_lambda1_DeletingDestructor(__int64 a1);
_QWORD* game_evt_demo_Seq_ChangeMap_lambda1_Clone(__int64 a1);
_QWORD* game_evt_demo_Seq_ChangeMap_lambda1_CloneInto(_QWORD* result,
                                                      __int64 a2);
__int64 game_evt_demo_Seq_ChangeMap_lambda1_Destroy(__int64 result);
__int64 GameRoutine_110b3e0(_QWORD);
__int64 GameRoutine_11c4460(_QWORD);
__int64 GameRoutine_11c71e0(_QWORD);
__int64 GameRoutine_11caf60(_QWORD);
__int64 GameRoutine_14a1390_alt1(_QWORD, _QWORD) __asm__("GameRoutine_14a1390");
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_716420(void);
__int64 GameRoutine_8697c0_alt1(long double) __asm__("GameRoutine_8697c0");
__int64 GameRoutine_a2e0c0(_QWORD, _QWORD, long double);
__int64 GameRoutine_a2e7c0_alt1(_QWORD) __asm__("GameRoutine_a2e7c0");
__int64 ProcRegistry_65a640(_QWORD);
__int64 Seq_a85600(_QWORD);
__int64 Shape_f64760(_QWORD);
__int64 game_GameView_Update(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _DWORD GameData_21d925c[32];
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64* GameData_212fed0;
extern __int64* game_sound_g_game_sound_ptr[5];
extern int GameData_21d92dc;
__int64 Seq_114f000_alt1(__int64 result) __asm__("Seq_114f000");
__int64* game_9a28e0(int);
__int64 CharacterWork_11c5ae0(void);
__int64 CharacterWork_11c8190(void);
__int64 GameRoutine_11ca3a0(void);
__int64 GameRoutine_14a3920(void);
__int64 GameRoutine_1937a70(void);
__int64 GameRoutine_60a020_alt1(__int64, __int64) __asm__("GameRoutine_60a020");
__int64 GameRoutine_f41c80_alt1() __asm__("GameRoutine_f41c80");
__int64 Manager_c44560(__int64 result, int);
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
__int64 wld_map_c218a0(_QWORD*, __int64);
__n128 GameRoutine_114a040_alt1(__int64, char*,
                                __int64) __asm__("GameRoutine_114a040");
__n128 GameRoutine_114a9c0_alt1(__int64) __asm__("GameRoutine_114a9c0");
__n128 WindLoader_c72b30(int8x16_t*, char, __n128 result);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt2() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c190;
extern __int64 GameData_21c6978;
extern __int64 game_script_hub_g_frame_counter;
void GameRoutine_b86fb0(__int64, int, float);
void Seq_114cda0_alt1(__int64, __int64, __int16*, char) __asm__("Seq_114cda0");
void __attribute__((noreturn)) String_60a1d0(_QWORD);
float Seq_Unknown3_1150de0_alt1(__int64 a1,
                                __n128 a2) __asm__("Seq_Unknown3_1150de0");
__n128 game_evt_demo_Seq_ChangeMap_lambda1_Invoke_alt1(__int64 a1) __asm__(
    "game_evt_demo_Seq_ChangeMap_lambda1_Invoke");
__attribute__((swiftcall)) void Seq_11536d0(PSEUDO_X8 x8_, __int64 a1,
                                            __int64* a2, _DWORD* a3);
__int64 std___1___next_prime(_QWORD);
void GameRoutine_68cb20(__int64*, unsigned __int64);
__int64* Seq_1153800(__int64 a1, __int64 a2);
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int16* game_8697c0(__int16* result, char, float);
__int64* Manager_bc6460(_QWORD*, __int64, char);
unsigned __int128 Manager_bc6460_pair(_QWORD*, __int64,
                                      char) __asm__("Manager_bc6460");
__int64 GameHr_f41c80();
__int64 GameRoutine_14a1390_alt2(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 GameRoutine_60a020_alt2(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_b86fb0_alt1(__int64, int,
                                float) __asm__("GameRoutine_b86fb0");
__int64 ScheduleNatives_869280(__int64 result, __int16*);
__int64 Seq_a85ad0(__int64 result, float);
__int64 WindLoader_c72b30_alt1(__int64 result,
                               char) __asm__("WindLoader_c72b30");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt3(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
int strncmp_alt1(const char*, const char*, unsigned __int64) __asm__("strncmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_114a040_alt2(__int64, char*,
                              __int64) __asm__("GameRoutine_114a040");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Seq_114cda0(__int64 a1, __int64 a2, __int16* a3, char a4);
__int64 Seq_114d0d0(__int64 a1, char a2);
void game_evt_demo_Seq_ChangeMap_lambda1_Invoke(__int64 a1);
__int64 GameHr_14a1390(__int64*, char);
__int64 GameRoutine_17b8e80_alt1(__int64, char) __asm__("GameRoutine_17b8e80");
__int64 GameRoutine_17b8f40_alt1(__int64, char) __asm__("GameRoutine_17b8f40");
__int64 ProcRegistry_65a640_alt1(_QWORD*) __asm__("ProcRegistry_65a640");
__int64 Shape_f64760_alt1(_QWORD*) __asm__("Shape_f64760");
__int64 game_14a3920(__int64 result);
__int64 game_GameView_Update_alt1() __asm__("game_GameView_Update");
__int64 game_evt_demo_11c8190(__int64);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_a2e0c0(__int64, __int64);
__int64 snd_a2e7c0(__int64 result);
void CharacterWork_11c5ae0_alt1(__int64) __asm__("CharacterWork_11c5ae0");
void GameRoutine_110b3e0_alt1(_QWORD*) __asm__("GameRoutine_110b3e0");
void GameRoutine_11c4460_alt1(__int64) __asm__("GameRoutine_11c4460");
void GameRoutine_11c71e0_alt1(__int64*) __asm__("GameRoutine_11c71e0");
void GameRoutine_11caf60_alt1(__int64) __asm__("GameRoutine_11caf60");
void GameRoutine_1937a70_alt1(__int64) __asm__("GameRoutine_1937a70");
void GameRoutine_716420_alt1(__int64,
                             unsigned __int8) __asm__("GameRoutine_716420");
void SceneObjectWork_11ca3a0(__int64);
void Seq_a85600_alt1(__int64) __asm__("Seq_a85600");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void Seq_114f000(__int64 a1);
float Seq_Unknown3_1150de0(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_a51060(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_1142cc0(PSEUDO_X8, __int64,
                                             unsigned __int8*, char);
__int64* GameRoutine_a542c0(_QWORD*, const char**);
__int64* Registration_a4f800(_QWORD*, const char*, int);
__int64 GameRoutine_a51280(__int64, __int64);
__int64 Registration_a4fa80(__int64, const char*, __int64);
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21c96b8;
extern __int64 msg_MessageManager_instance_;
void game_112d580(char*, __int64, __int64);
void Seq_1150700(__int64 a1);

__int64 Seq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
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
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;

  *(_QWORD*)a1 = game_evt_demo_Seq_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2012c80;
  v2 = *(_QWORD*)(game_g_frame_clock + 13224);
  v3 = *(_QWORD*)(v2 + 48);
  v4 = *(_QWORD*)(v2 + 56);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 120LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 120LL);
  }
  v6 = *(__int64**)(v5 + 32);
  v7 = *(__int64**)(v5 + 40);
  while (v6 != v7) {
    v8 = *v6++;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
  }
  GameRoutine_9a4300(5);
  if (game_sound_g_game_sound != 0) {
    *(_BYTE*)(game_sound_g_game_sound + 600) = 1;
  }
  v9 = GameRoutine_a2e7c0();
  GameRoutine_869540(v9);
  v10 = GameData_2241720;
  if (GameData_2241720 != 0) {
    v11 = *(_DWORD*)(GameData_2241720 + 1736) - 1;
    *(_DWORD*)(GameData_2241720 + 1736) = v11;
    if (v11 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v10 + 1728) + 8LL))(v10 + 1728);
    }
  }
  if (--GameData_21f61c8 == 0) {
    (*(void (**)(void))(GameData_21f61c0 + 8))();
  }
  v12 = *(_QWORD**)(a1 + 752);
  v13 = fw_memory_g_heap_manager_ptr;
  while (v12 != nullptr) {
    v15 = v12;
    v12 = (_QWORD*)*v12;
    if ((v15[2] & 1) != 0 && v15[4] != 0) {
      v16 = v15;
      v17 = v15[4];
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18, v17);
      v15 = v16;
    }
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
      v14 = 128;
    }
    else {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v14, v15);
  }
  v19 = *(_QWORD*)(a1 + 736);
  *(_QWORD*)(a1 + 736) = 0;
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v20, v19);
  }
  v21 = *(_QWORD*)(a1 + 704);
  if (v21 != 0) {
    v22 = *(_QWORD*)v13;
    *(_QWORD*)(a1 + 712) = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  v24 = *(_QWORD**)(a1 + 664);
  while (v24 != nullptr) {
    v26 = v24;
    v24 = (_QWORD*)*v24;
    if ((v26[2] & 1) != 0 && v26[4] != 0) {
      v27 = v26;
      v28 = v26[4];
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
        v29 = 128;
      }
      else {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v29, v28);
      v26 = v27;
    }
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
      v25 = 128;
    }
    else {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v25, v26);
  }
  v30 = *(_QWORD*)(a1 + 648);
  *(_QWORD*)(a1 + 648) = 0;
  if (v30 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v31, v30);
  }
  v32 = *(_QWORD**)(a1 + 624);
  while (v32 != nullptr) {
    v34 = v32;
    v32 = (_QWORD*)*v32;
    if ((v34[2] & 1) != 0 && v34[4] != 0) {
      v35 = v34;
      v36 = v34[4];
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
        v37 = 128;
      }
      else {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v37, v36);
      v34 = v35;
    }
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
      v33 = 128;
    }
    else {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v33, v34);
  }
  v38 = *(_QWORD*)(a1 + 608);
  *(_QWORD*)(a1 + 608) = 0;
  if (v38 != 0) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v39, v38);
  }
  v40 = *(_QWORD**)(a1 + 576);
  while (v40 != nullptr) {
    v42 = v40;
    v40 = (_QWORD*)*v40;
    if ((v42[2] & 1) != 0 && v42[4] != 0) {
      v43 = v42;
      v44 = v42[4];
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
        v45 = 128;
      }
      else {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v45, v44);
      v42 = v43;
    }
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
      v41 = 128;
    }
    else {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v41, v42);
  }
  v46 = *(_QWORD*)(a1 + 560);
  *(_QWORD*)(a1 + 560) = 0;
  if (v46 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v47, v46);
  }
  if ((*(_BYTE*)(a1 + 528) & 1) != 0) {
    v48 = *(_QWORD*)(a1 + 544);
    if (v48 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v49, v48);
    }
  }
  if ((*(_BYTE*)(a1 + 504) & 1) != 0) {
    v50 = *(_QWORD*)(a1 + 520);
    if (v50 != 0) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v51, v50);
    }
  }
  v52 = *(_QWORD*)(a1 + 464);
  if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak(v52);
  }
  v53 = *(_QWORD*)(a1 + 408);
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak(v53);
    if ((*(_BYTE*)(a1 + 376) & 1) == 0) {
      goto LABEL_103;
    }
  }
  else if ((*(_BYTE*)(a1 + 376) & 1) == 0) {
    goto LABEL_103;
  }
  v54 = *(_QWORD*)(a1 + 392);
  if (v54 != 0) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v55, v54);
  }

LABEL_103:
  if ((*(_BYTE*)(a1 + 352) & 1) != 0) {
    v56 = *(_QWORD*)(a1 + 368);
    if (v56 != 0) {
      v57 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v57, v56);
    }
  }
  if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
    v58 = *(_QWORD*)(a1 + 344);
    if (v58 != 0) {
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v59, v58);
    }
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v60 = *(_QWORD*)(a1 + 320);
    if (v60 != 0) {
      v61 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v61, v60);
    }
  }
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v62 = *(_QWORD*)(a1 + 296);
    if (v62 != 0) {
      v63 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v63 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v63, v62);
    }
  }
  v64 = *(_QWORD*)(a1 + 240);
  if (v64 != 0) {
    v65 = *(_QWORD*)(a1 + 248);
    if (v64 == v65) {
      goto LABEL_127;
    }
    do {
      v65 -= 160;
      GameRoutine_1147f80(v65);
    } while (v65 != v64);
    v66 = *(_QWORD*)(a1 + 240);
    *(_QWORD*)(a1 + 248) = v64;
    v64 = v66;
    if (v66 != 0) {
    LABEL_127:
      v67 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v67 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v67, v64);
    }
  }
  v68 = *(_QWORD*)(a1 + 216);
  if (v68 != 0) {
    v69 = *(_QWORD*)(a1 + 224);
    if (v68 == v69) {
      goto LABEL_134;
    }
    do {
      v69 -= 160;
      GameRoutine_1147f80(v69);
    } while (v69 != v68);
    v70 = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(a1 + 224) = v68;
    v68 = v70;
    if (v70 != 0) {
    LABEL_134:
      v71 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v71 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v71, v68);
    }
  }
  if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
    v72 = *(_QWORD*)(a1 + 200);
    if (v72 != 0) {
      v73 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v73 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v73, v72);
    }
  }
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v74 = *(_QWORD*)(a1 + 176);
    if (v74 != 0) {
      v75 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v75 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v75, v74);
    }
  }
  GameData_22336e0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 Seq_1149de0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[2];
  char* v13;

  v4 = strlen(a2);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v12[1] = v5;
    v13 = v6;
    v12[0] = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v12[0]) = 2 * v4;
  v6 = (char*)v12 + 1;
  if (v4 != 0) {
  LABEL_9:
    memcpy(v6, a2, v5);
  }
  v6[v5] = 0;
  v8 = GameRoutine_1152360(a1 + 560, v12);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 40);
    if ((v12[0] & 1) == 0) {
      goto LABEL_18;
    }
  }
  else {
    v9 = 0;
    if ((v12[0] & 1) == 0) {
      goto LABEL_18;
    }
  }
  if (v13 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v13);
  }

LABEL_18:
  if (v9 != 0) {
    return *(unsigned int*)(v9 + 232);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 Seq_1149f10(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[2];
  char* v13;

  v4 = strlen(a2);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v12[1] = v5;
    v13 = v6;
    v12[0] = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v12[0]) = 2 * v4;
  v6 = (char*)v12 + 1;
  if (v4 != 0) {
  LABEL_9:
    memcpy(v6, a2, v5);
  }
  v6[v5] = 0;
  v8 = GameRoutine_1152360(a1 + 560, v12);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 40);
    if ((v12[0] & 1) == 0) {
      goto LABEL_18;
    }
  }
  else {
    v9 = 0;
    if ((v12[0] & 1) == 0) {
      goto LABEL_18;
    }
  }
  if (v13 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v13);
  }

LABEL_18:
  if (v9 != 0) {
    return v9 + 72;
  }
  else {
    return 0;
  }
}

__int64 Seq_114a7d0(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v3;
  _BOOL4 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v9;
  _BOOL4 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v19;
  __int64 v20;
  _BOOL4 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v30;
  _QWORD v32[2];

  qmemcpy(v32, "Map/Hub/Hub_000/", sizeof(v32));
  v3 = *a2 >> 1;
  if ((*a2 & 1) != 0) {
    v3 = *((_QWORD*)a2 + 1);
  }
  if (v3 >= 0x10) {
    v5 = *((__int64**)a2 + 2);
    if ((*a2 & 1) == 0) {
      v5 = (__int64*)(a2 + 1);
    }
    v7 = *v5;
    v6 = v5[1];
    v4 = v7 == v32[0] && v6 == v32[1];
  }
  else {
    v4 = false;
  }
  v9 = false;
  v10 = false;
  if ((*a2 & 1) != 0 && *((_QWORD*)a2 + 1) == 23) {
    v11 = *((__int64**)a2 + 2);
    v12 = *v11;
    v13 = v11[1];
    v14 = *(__int64*)((char*)v11 + 15);
    v9 = v12 == 0x2F6C74422F70614DLL && v13 == 0x2F3033325F6C7442LL &&
         v14 == 0x3033325F6C74422FLL;
    v10 = v12 == 0x2F6474502F70614DLL && v13 == 0x2F3630305F647450LL &&
          v14 == 0x3630305F6474502FLL;
  }
  v19 = fw_memory_g_heap_manager_ptr;
  v20 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       26, 16, 0);
  v21 = false;
  strcpy((char*)v20, "Map/Btl/Btl_239/Btl_239");
  v22 = *a2;
  v23 = *((_QWORD*)a2 + 1);
  if ((v22 & 1) == 0) {
    v23 = v22 >> 1;
  }
  if (v23 >= 0x17) {
    if ((v22 & 1) != 0) {
      v24 = *((__int64**)a2 + 2);
    }
    else {
      v24 = (__int64*)(a2 + 1);
    }
    v25 = *v24;
    v26 = v24[1];
    v27 = *(__int64*)((char*)v24 + 15);
    v21 = v25 == *(_QWORD*)v20 && v26 == *(_QWORD*)(v20 + 8) &&
          v27 == *(_QWORD*)(v20 + 15);
  }
  v30 = 128;
  if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
    v30 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v30, v20);
  return (v4 || v9) | v10 | (unsigned int)v21;
}

bool Seq_114ab50(__int64 a1, _QWORD* a2)
{
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  char* v32;
  _BOOL4 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64* v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64* v46;

  if (a2[4] != 0) {
    v4 = (char*)a2[4];
  }
  else {
    v4 = &GameData_1a9f09e;
  }
  v5 = strlen(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_93;
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v45 = v6;
    v46 = (__int64*)v7;
    v44 = v8 | 1;
    goto LABEL_12;
  }
  LOBYTE(v44) = 2 * v5;
  v7 = (char*)&v44 + 1;
  if (v5 != 0) {
  LABEL_12:
    memmove(v7, v4, v6);
  }
  v7[v6] = 0;
  if (a2[5] != 0) {
    v9 = (char*)a2[5];
  }
  else {
    v9 = &GameData_1a9f09e;
  }
  v5 = strlen(v9);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_93:
    GameRoutine_60a1d0(v5);
  }
  v10 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v5 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12,
                                                16, 0);
    v42 = v10;
    v43 = (__int64*)v11;
    v41 = v12 | 1;
    goto LABEL_24;
  }
  LOBYTE(v41) = 2 * v5;
  v11 = (char*)&v41 + 1;
  if (v5 != 0) {
  LABEL_24:
    memmove(v11, v9, v10);
  }
  v11[v10] = 0;
  if (a2[6] != 0) {
    v13 = (char*)a2[6];
  }
  else {
    v13 = &GameData_1a9f09e;
  }
  v5 = strlen(v13);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_93;
  }
  v14 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v5 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                16, 0);
    v39 = v14;
    v40 = v15;
    v38 = v16 | 1;
    goto LABEL_36;
  }
  LOBYTE(v38) = 2 * v5;
  v15 = (char*)&v38 + 1;
  if (v5 != 0) {
  LABEL_36:
    memmove(v15, v13, v14);
  }
  v15[v14] = 0;
  v17 = v44;
  v18 = *(unsigned __int8*)(a1 + 304);
  if ((v18 & 1) != 0) {
    v19 = *(_QWORD*)(a1 + 312);
  }
  else {
    v19 = v18 >> 1;
  }
  v20 = v45;
  if ((v44 & 1) == 0) {
    v20 = (unsigned __int64)(unsigned __int8)v44 >> 1;
  }
  if (v19 != v20) {
    goto LABEL_76;
  }
  v21 = (v18 & 1) != 0 ? *(_QWORD*)(a1 + 320) : a1 + 305;
  v22 = (v44 & 1) != 0 ? v46 : (__int64*)((char*)&v44 + 1);
  if ((unsigned int)memcmp(v21, v22, v19) != 0) {
    goto LABEL_76;
  }
  v23 = *(unsigned __int8*)(a1 + 328);
  if ((v23 & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 336);
  }
  else {
    v24 = v23 >> 1;
  }
  v25 = v42;
  if ((v41 & 1) == 0) {
    v25 = (unsigned __int64)(unsigned __int8)v41 >> 1;
  }
  if (v24 != v25) {
    goto LABEL_76;
  }
  v26 = (v23 & 1) != 0 ? *(_QWORD*)(a1 + 344) : a1 + 329;
  v27 = (v41 & 1) != 0 ? v43 : (__int64*)((char*)&v41 + 1);
  if ((unsigned int)memcmp(v26, v27, v24) != 0) {
    goto LABEL_76;
  }
  v28 = *(unsigned __int8*)(a1 + 352);
  if ((v28 & 1) != 0) {
    v29 = *(_QWORD*)(a1 + 360);
  }
  else {
    v29 = v28 >> 1;
  }
  v30 = v39;
  if ((v38 & 1) == 0) {
    v30 = (unsigned __int64)(unsigned __int8)v38 >> 1;
  }
  if (v29 == v30) {
    if ((v28 & 1) != 0) {
      v31 = *(_QWORD*)(a1 + 368);
    }
    else {
      v31 = a1 + 353;
    }
    if ((v38 & 1) != 0) {
      v32 = v40;
    }
    else {
      v32 = (char*)&v38 + 1;
    }
    v33 = memcmp(v31, v32, v29) == 0;
  }
  else {
  LABEL_76:
    v33 = false;
  }
  if ((v38 & 1) != 0 && v40 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v34,
                                  v40);
  }
  if ((v41 & 1) != 0 && v43 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                                  v43);
  }
  if ((v17 & 1) != 0 && v46 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36,
                                  v46);
  }
  return v33;
}

bool Seq_114af10(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v5;

  v3 = a2[1];
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 296);
  }
  else {
    v5 = a1 + 281;
  }
  return (unsigned int)strcmp(v5, v3) != 0 && !Seq_114ab50(a1, a2);
}

void Seq_114cda0(__int64 a1, __int64 a2, __int16* a3, char a4)
{
  unsigned __int64 v5;
  __int16* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int16* v11;
  __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  struct {
    __int64 v28;
    unsigned __int64 v29;
    char* v30;
  } v28_;

  if ((a4 & 1) != 0) {
    *(_BYTE*)(*(_QWORD*)(game_GameModeData_instance_ + 48) + 3932768LL) |=
        0x40u;
    v5 = 1374389535LL * (a3[4] + 100 * a3[3]);
    LODWORD(v5) = (v5 >> 63) + (SHIDWORD(v5) >> 5);
    *(_DWORD*)(a1 + 484) = v5;
    v6 = (__int16*)&game_gmap_GmapClock_kDefaultTime;
    v7 = game_gmap_GmapClock_instance_;
    *(_DWORD*)(a1 + 488) = a3[4] + 100 * (a3[3] - (_DWORD)v5);
    if (v7 != 0) {
      v6 = (__int16*)(v7 + 8);
    }
    v8 = ((__int64)a3[1] << 24) + ((__int64)*a3 << 32) +
         ((__int64)a3[2] << 18) + ((__int64)a3[3] << 12) +
         ((__int64)a3[4] << 6) + a3[5];
    v9 = ((__int64)v6[1] << 24) + ((__int64)*v6 << 32) +
         ((__int64)v6[2] << 18) + ((__int64)v6[3] << 12) +
         ((__int64)v6[4] << 6) + v6[5];
    if (v7 != 0 && v8 != v9) {
      v10 = a2;
      v11 = a3;
      ScheduleNatives_869280(v7, a3);
      a3 = v11;
      a2 = v10;
    }
    if (v8 != v9) {
      v12 = *(_QWORD*)a3;
      *(_DWORD*)(a1 + 480) = *((_DWORD*)a3 + 2);
      *(_QWORD*)(a1 + 472) = v12;
    }
    *(_BYTE*)(*(_QWORD*)(game_GameModeData_instance_ + 48) + 3932768LL) &=
        ~0x40u;
  }
  if (a2 == 0) {
    goto LABEL_44;
  }
  if (*(_QWORD*)(a2 + 32) != 0) {
    v13 = *(const char**)(a2 + 32);
  }
  else {
    v13 = &GameData_1a9f09e;
  }
  v14 = strlen_alt1(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v15 = v14;
  v16 = fw_memory_g_heap_manager_ptr;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v14 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
    v28_.v29 = v15;
    v28_.v30 = v17;
    v28_.v28 = v18 | 1;
  }
  else {
    LOBYTE(v28_.v28) = 2 * v14;
    v17 = (char*)&v28_.v28 + 1;
    if (v14 == 0) {
      goto LABEL_23;
    }
  }
  memmove_alt1((__int64)v17, (__int64)v13, v15);
LABEL_23:
  v17[v15] = 0;
  if ((v28_.v28 & 1) == 0 || v28_.v29 != 26) {
    if ((v28_.v28 & 1) == 0 || (v19 = (__int64)v28_.v30, v28_.v30 == nullptr)) {
    LABEL_44:
      game_8697c0((__int16*)(a1 + 472), 0, 0x0.0p+0f);
      return;
    }
  LABEL_41:
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v16 + v25, v19);
    goto LABEL_44;
  }
  v19 = (__int64)v28_.v30;
  if (*(_QWORD*)v28_.v30 != 0x2F6275482F70614DLL ||
      *((_QWORD*)v28_.v30 + 1) != 0x2F3030315F627548LL ||
      *((_QWORD*)v28_.v30 + 2) != 0x5F3030315F627548LL ||
      *((_WORD*)v28_.v30 + 12) != 12609) {
    goto LABEL_41;
  }
  v23 = (__int64)v28_.v30;
  v26 = 0xB0014000C05ADLL;
  v27 = 55;
  game_8697c0((__int16*)&v26, 0, 0x0.0p+0f);
  v24 = 128;
  if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
    v24 = 56;
  }
  nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v16 + v24, v23);
}

__int64 Seq_114d0d0(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  _DWORD* v2;
  int v4;
  int v5;
  float v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v21;
    __int64 v22;
  } v21_;
  struct {
    _DWORD* v23;
    __int64 v24;
    const char* v25;
    int v26;
    char gap44_[4];
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v23_;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_DWORD**)(a1 + 456);
  if (*(_QWORD*)v2 == 0) {
    v6 = 0x0.0p+0f;
    if ((a2 & 1) == 0) {
      return Seq_a85ad0(*(_QWORD*)GameData_212c638, v6);
    }
    goto LABEL_6;
  }
  v4 = *(_DWORD*)(*(_QWORD*)v2 + 16LL);
  v5 = v2[2];
  if ((a2 & 1) != 0) {
    v6 = 0x1.0000000000000p+0f;
    if (v4 == v5) {
      return Seq_a85ad0(*(_QWORD*)GameData_212c638, v6);
    }
  LABEL_6:
    v7 = (unsigned int)*GameData_212d168;
    if ((unsigned int)v7 > 7) {
      v8 = 6;
    }
    else {
      v8 = GameData_1b01468[v7];
    }
    v23_.v26 = v8;
    v23_.v23 = nullptr;
    v23_.v24 = 0;
    v23_.v25 = "Eff_Gim_Rain";
    v10 = *((_QWORD*)GameData_212c540 + 1);
    v12 = *(_QWORD*)GameData_212c548;
    v11 = *((_QWORD*)GameData_212c548 + 1);
    v23_.v27 = *(_QWORD*)GameData_212c540;
    v23_.v28 = v10;
    v23_.v29 = v12;
    v23_.v30 = v11;
    v23_.v31 = v23_.v27;
    v23_.v32 = v10;
    v13 = ({
      unsigned __int128 r_ = Manager_bc6460_pair(
          *(_QWORD**)eft_g_effectSystem_ptr[0], (__int64)&v23_.v23, 0);
      v14 = COERCE_AS(__typeof__(v14), (unsigned long long)(r_ >> 64));
      (__int64*)(unsigned long long)r_;
    });
    GameHr_14a10d0(&v21_.v21, (__int64)v13, v14, (__int64)&GameData_1a9f09e),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v15 = v21_.v21;
    v16 = v21_.v22;
    if (v21_.v22 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21_.v22 + 8), 1u,
                                memory_order_relaxed);
    }
    v17 = *(_QWORD*)(a1 + 464);
    *(_QWORD*)(a1 + 456) = v15;
    *(_QWORD*)(a1 + 464) = v16;
    if (v17 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt3(v17),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v16 = *(_QWORD*)(a1 + 464);
    }
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt3(v16),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v18 = v21_.v22;
    if (v21_.v22 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v21_.v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt3(v18),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v6 = 0x1.0000000000000p+0f;
    return Seq_a85ad0(*(_QWORD*)GameData_212c638, v6);
  }
  v6 = 0x0.0p+0f;
  if (v4 == v5) {
    v9 = *(_QWORD*)(a1 + 464);
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      v23_.v24 = v9;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v23_.v24 = 0;
    }
    v23_.v23 = v2;
    GameRoutine_14a1390_alt2((__int64*)&v23_.v23, 1),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19 = v23_.v24;
    if (v23_.v24 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt3(v19),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt3(v9),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v6 = 0x0.0p+0f;
    **(_QWORD**)(a1 + 456) = 0;
  }
  return Seq_a85ad0(*(_QWORD*)GameData_212c638, v6);
}

__int64 Seq_114d340(__int64 a1, __int64 a2)
{
  int v2;
  __int64 result;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  _QWORD v16[2];
  char* v17;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(unsigned __int8*)(a2 + 104);
  if (v2 == 1) {
    return 1;
  }
  if (v2 == 2) {
    return 0;
  }
  v4 = *(_QWORD*)(a2 + 32);
  v5 = strlen(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v5);
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v16[1] = v6;
    v17 = v7;
    v16[0] = v8 | 1;
    goto LABEL_14;
  }
  LOBYTE(v16[0]) = 2 * v5;
  v7 = (char*)v16 + 1;
  if (v5 != 0) {
  LABEL_14:
    memmove(v7, v4, v6);
  }
  v7[v6] = 0;
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 0) {
    result = 1;
    if ((v16[0] & 1) == 0) {
      return result;
    }
    goto LABEL_27;
  }
  v9 = GameRoutine_9a28e0(67);
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v9);
    if (result == 0) {
      goto LABEL_26;
    }
    if (*(_DWORD*)(result + 32) != 0) {
      v10 = Seq_114a7d0(result, (unsigned __int8*)v16);
      v11 = GameRoutine_9a28e0(68);
      v12 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v13 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v11);
        v12 = v13 != 0 && *(_DWORD*)(v13 + 32) != 0;
      }
      result = v10 & v12 ^ 1u;
      if ((v16[0] & 1) != 0) {
      LABEL_27:
        if (v17 != nullptr) {
          v14 = result;
          v15 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v17);
          return v14;
        }
      }
      return result;
    }
  }
  result = 0;

LABEL_26:
  if ((v16[0] & 1) == 0) {
    return result;
  }
  goto LABEL_27;
}

__int64 Seq_114d520(__int64 a1, __int64 a2)
{
  _DWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = *(_DWORD**)(a1 + 456);
  if (*(_QWORD*)v2 != 0 && *(_DWORD*)(*(_QWORD*)v2 + 16LL) == v2[2]) {
    LODWORD(v3) = 1;
    return (unsigned int)v3;
  }
  v4 = game_HashString(a2);
  if (v4 == 0) {
    goto LABEL_10;
  }
  v5 = *(_QWORD*)(GameData_21c9d98 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21c9d98 + 112) == 0) {
    goto LABEL_10;
  }
  v8 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v9 = v4;
    if (v4 >= v5) {
      v9 = v4 % v5;
    }
  }
  else {
    v9 = v8 & v4;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21c9d98 + 88) + 8 * v9);
  if (v3 != 0) {
    v10 = *(_QWORD**)v3;
    if (*(_QWORD*)v3 == 0) {
      goto LABEL_10;
    }
    if ((v5 & v8) == 0) {
      while (1) {
        v12 = v10[1];
        if (v12 == v4) {
          if (v10[2] == v4) {
            goto LABEL_32;
          }
        }
        else if ((v12 & v8) != v9) {
          goto LABEL_10;
        }
        v10 = (_QWORD*)*v10;
        LODWORD(v3) = 0;
        if (v10 == nullptr) {
          return (unsigned int)v3;
        }
      }
    }
    do {
      v11 = v10[1];
      if (v11 == v4) {
        if (v10[2] == v4) {
        LABEL_32:
          v3 = v10[3];
          if (v3 != 0) {
            v13 = *(_QWORD*)(v3 + 56);
            if (v13 != 0) {
              LODWORD(v3) = strcmp(v13, "Rain") == 0;
              return (unsigned int)v3;
            }
          LABEL_10:
            LODWORD(v3) = 0;
          }
          return (unsigned int)v3;
        }
      }
      else {
        if (v11 >= v5) {
          v11 %= v5;
        }
        if (v11 != v9) {
          goto LABEL_10;
        }
      }
      v10 = (_QWORD*)*v10;
      LODWORD(v3) = 0;
    } while (v10 != nullptr);
  }
  return (unsigned int)v3;
}

__int64 Seq_114d680(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 296);
  }
  else {
    v1 = a1 + 281;
  }
  v2 = game_HashString(v1);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(GameData_21c9d98 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c9d98 + 112) == 0) {
    return 0;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = v2;
    if (v2 >= v3) {
      v6 = v2 % v3;
    }
  }
  else {
    v6 = v5 & v2;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d98 + 88) + 8 * v6);
  if (v7 == nullptr) {
    return 0;
  }
  v8 = (_QWORD*)*v7;
  if (v8 == nullptr) {
    return 0;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == v2) {
        if (v8[2] == v2) {
          goto LABEL_29;
        }
      }
      else if ((v10 & v5) != v6) {
        return 0;
      }
      v8 = (_QWORD*)*v8;
      if (v8 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v2) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      return 0;
    }
  LABEL_18:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      return 0;
    }
  }
  if (v8[2] != v2) {
    goto LABEL_18;
  }

LABEL_29:
  v11 = v8[3];
  if (v11 != 0) {
    return Seq_114d340(v2, v11);
  }
  return 0;
}

__int64 Seq_114d7c0(float a1, float a2, float a3, __int64 a4, char a5)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64* v14;
  __int64* i;
  __int64 v16;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v11 = *(_QWORD*)(v9 + 48);
  v10 = *(_QWORD*)(v9 + 56);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = std___1___shared_weak_count___release_weak_alt3(v10);
    }
    v13 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 224LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = std___1___shared_weak_count___release_weak_alt3(v10);
    }
    if ((a5 & 1) != 0) {
      goto LABEL_7;
    }
  }
  else {
    v13 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 224LL);
    if ((a5 & 1) != 0) {
    LABEL_7:
      v14 = *(__int64**)(v13 + 32);
      for (i = *(__int64**)(v13 + 40); v14 != i;
           result = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 72LL))(v16)) {
        v16 = *v14++;
      }
      *(float*)(v13 + 172) = a1;
      *(float*)(v13 + 460) = a2;
      *(float*)(v13 + 540) = a3;
      *(_DWORD*)(v13 + 92) = 1;
      *(_BYTE*)(v13 + 96) = 1;
      *(_BYTE*)(v13 + 176) = 1;
      *(_WORD*)(v13 + 385) = 257;
      *(_BYTE*)(v13 + 464) = 1;
      *(_BYTE*)(v13 + 544) = 1;
      return result;
    }
  }
  if (*(_BYTE*)(v13 + 96) == 1) {
    *(_BYTE*)(v13 + 96) = 0;
  }
  if (*(_BYTE*)(v13 + 176) == 1) {
    *(_BYTE*)(v13 + 176) = 0;
  }
  if (*(_BYTE*)(v13 + 386) == 1) {
    *(_BYTE*)(v13 + 386) = 0;
  }
  if (*(_BYTE*)(v13 + 464) == 1) {
    *(_BYTE*)(v13 + 464) = 0;
  }
  if (*(_BYTE*)(v13 + 544) == 1) {
    *(_BYTE*)(v13 + 544) = 0;
  }
  return result;
}

__int64 Seq_114d960(float a1, float a2, __int64 a3, char a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64* v12;
  __int64* i;
  __int64 v14;

  v7 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v9 = *(_QWORD*)(v7 + 48);
  v8 = *(_QWORD*)(v7 + 56);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak(v8);
    }
    v11 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 136LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak(v8);
    }
    if ((a4 & 1) != 0) {
      goto LABEL_7;
    }
  }
  else {
    v11 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 136LL);
    if ((a4 & 1) != 0) {
    LABEL_7:
      v12 = *(__int64**)(v11 + 32);
      for (i = *(__int64**)(v11 + 40); v12 != i;
           result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 72LL))(v14)) {
        v14 = *v12++;
      }
      *(float*)(v11 + 172) = a1;
      *(float*)(v11 + 92) = a2;
      *(_BYTE*)(v11 + 176) = 1;
      *(_BYTE*)(v11 + 96) = 1;
      return result;
    }
  }
  if (*(_BYTE*)(v11 + 176) == 1) {
    *(_BYTE*)(v11 + 176) = 0;
  }
  if (*(_BYTE*)(v11 + 96) == 1) {
    *(_BYTE*)(v11 + 96) = 0;
  }
  return result;
}

__int64 Seq_114da80(__int64 result, char a2, __int128* a3, float a4, float a5,
                    float a6, float a7, float a8, float a9, float a10)
{
  __int64 v14;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* i;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int128 v30;
  __int64* v31;
  __int64* j;
  __int64 v33;

  v14 = result;
  v20 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v22 = *(_QWORD*)(v20 + 48);
  v21 = *(_QWORD*)(v20 + 56);
  if (v21 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      result = std___1___shared_weak_count___release_weak(v21);
    }
    v23 = *(_QWORD*)(*(_QWORD*)(v22 + 8) + 192LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      result = std___1___shared_weak_count___release_weak(v21);
    }
    if ((a2 & 1) != 0) {
      goto LABEL_7;
    }
  }
  else {
    v23 = *(_QWORD*)(*(_QWORD*)(v22 + 8) + 192LL);
    if ((a2 & 1) != 0) {
    LABEL_7:
      v24 = *(__int64**)(v23 + 32);
      for (i = *(__int64**)(v23 + 40); v24 != i;
           result = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 72LL))(v26)) {
        v26 = *v24++;
      }
      v27 = *(_QWORD*)(v23 + 320);
      v28 = *(_QWORD*)(v23 + 328);
      *(_WORD*)(v23 + 89) = 257;
      v29 = *(_BYTE*)(v23 + 272);
      *(_QWORD*)(v23 + 256) = v27;
      *(_QWORD*)(v23 + 264) = v28;
      if ((v29 & 1) == 0) {
        *(_BYTE*)(v23 + 272) = 1;
      }
      v30 = *a3;
      *(float*)(v23 + 452) = a4;
      *(float*)(v23 + 532) = a5;
      *(float*)(v23 + 612) = a6;
      *(float*)(v23 + 692) = a7;
      *(float*)(v23 + 772) = a8;
      *(_BYTE*)(v23 + 456) = 1;
      *(_BYTE*)(v23 + 536) = 1;
      *(_BYTE*)(v23 + 616) = 1;
      *(_BYTE*)(v23 + 696) = 1;
      *(_BYTE*)(v23 + 776) = 1;
      *(_OWORD*)(v23 + 256) = v30;
      *(_BYTE*)(v23 + 376) = 1;
      if (a9 <= 0.0) {
        *(float*)(v23 + 372) = a10;
        *(float*)(v14 + 700) = a9;
        *(_DWORD*)(v14 + 696) = -1082130432;
      }
      else {
        *(_DWORD*)(v23 + 372) = 1065353216;
        *(float*)(v14 + 700) = a9;
        *(_DWORD*)(v14 + 696) = 0;
      }
      return result;
    }
  }
  if (*(_BYTE*)(v23 + 90) == 1) {
    *(_WORD*)(v23 + 89) = 256;
  }
  v31 = *(__int64**)(v23 + 32);
  for (j = *(__int64**)(v23 + 40); v31 != j;
       result = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 72LL))(v33)) {
    v33 = *v31++;
  }
  *(_QWORD*)(v14 + 696) = 3212836864LL;
  return result;
}

__int64 Seq_114dc80(float a1, float a2, float a3, __int64 a4, char a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64* v14;
  __int64* i;
  __int64 v16;

  v9 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v11 = *(_QWORD*)(v9 + 48);
  v10 = *(_QWORD*)(v9 + 56);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
    v13 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 96LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
  }
  else {
    v13 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 96LL);
  }
  v14 = *(__int64**)(v13 + 32);
  for (i = *(__int64**)(v13 + 40); v14 != i;
       result = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 72LL))(v16)) {
    v16 = *v14++;
  }
  if ((a5 & 1) != 0) {
    *(float*)(v13 + 92) = a1;
    *(float*)(v13 + 172) = a2;
    *(float*)(v13 + 252) = a3;
    *(_BYTE*)(v13 + 96) = 1;
    *(_BYTE*)(v13 + 176) = 1;
    *(_BYTE*)(v13 + 256) = 1;
  }
  return result;
}

__int64 Seq_114dda0(float a1, float a2, float a3, __int64 a4, char a5,
                    __int128* a6)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64* v16;
  __int64* i;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int128 v22;
  __int64* v23;
  __int64* j;
  __int64 v25;

  v11 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v13 = *(_QWORD*)(v11 + 48);
  v12 = *(_QWORD*)(v11 + 56);
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      result = std___1___shared_weak_count___release_weak(v12);
    }
    v15 = *(_QWORD*)(*(_QWORD*)(v13 + 8) + 104LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      result = std___1___shared_weak_count___release_weak(v12);
    }
    if ((a5 & 1) != 0) {
      goto LABEL_7;
    }
  }
  else {
    v15 = *(_QWORD*)(*(_QWORD*)(v13 + 8) + 104LL);
    if ((a5 & 1) != 0) {
    LABEL_7:
      v16 = *(__int64**)(v15 + 32);
      for (i = *(__int64**)(v15 + 40); v16 != i;
           result = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 72LL))(v18)) {
        v18 = *v16++;
      }
      v19 = *(_BYTE*)(v15 + 432);
      v20 = *(_QWORD*)(v15 + 480);
      v21 = *(_QWORD*)(v15 + 488);
      *(float*)(v15 + 164) = a1;
      *(float*)(v15 + 244) = a2;
      *(_WORD*)(v15 + 89) = 257;
      *(_BYTE*)(v15 + 168) = 1;
      *(_BYTE*)(v15 + 248) = 1;
      *(_DWORD*)(v15 + 764) = 1;
      *(_BYTE*)(v15 + 768) = 1;
      *(_QWORD*)(v15 + 416) = v20;
      *(_QWORD*)(v15 + 424) = v21;
      if ((v19 & 1) == 0) {
        *(_BYTE*)(v15 + 432) = 1;
      }
      v22 = *a6;
      *(float*)(v15 + 532) = a3;
      *(_BYTE*)(v15 + 536) = 1;
      *(_OWORD*)(v15 + 416) = v22;
      return result;
    }
  }
  if (*(_BYTE*)(v15 + 90) == 1) {
    *(_WORD*)(v15 + 89) = 256;
  }
  v23 = *(__int64**)(v15 + 32);
  for (j = *(__int64**)(v15 + 40); v23 != j;
       result = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 72LL))(v25)) {
    v25 = *v23++;
  }
  return result;
}

__int64 Seq_114df40(float a1, float a2, float a3, float a4, float a5, float a6,
                    __int64 a7, char a8, __int128* a9)
{
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64* v22;
  __int64* i;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int128 v28;
  __int64* v29;
  __int64* j;
  __int64 v31;

  v17 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v19 = *(_QWORD*)(v17 + 48);
  v18 = *(_QWORD*)(v17 + 56);
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      result = std___1___shared_weak_count___release_weak(v18);
    }
    v21 = *(_QWORD*)(*(_QWORD*)(v19 + 8) + 184LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      result = std___1___shared_weak_count___release_weak(v18);
    }
    if ((a8 & 1) != 0) {
      goto LABEL_7;
    }
  }
  else {
    v21 = *(_QWORD*)(*(_QWORD*)(v19 + 8) + 184LL);
    if ((a8 & 1) != 0) {
    LABEL_7:
      v22 = *(__int64**)(v21 + 32);
      for (i = *(__int64**)(v21 + 40); v22 != i;
           result = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 72LL))(v24)) {
        v24 = *v22++;
      }
      v25 = *(_QWORD*)(v21 + 240);
      v26 = *(_QWORD*)(v21 + 248);
      *(_WORD*)(v21 + 89) = 257;
      v27 = *(_BYTE*)(v21 + 192);
      *(_QWORD*)(v21 + 176) = v25;
      *(_QWORD*)(v21 + 184) = v26;
      if ((v27 & 1) == 0) {
        *(_BYTE*)(v21 + 192) = 1;
      }
      v28 = *a9;
      *(float*)(v21 + 292) = a1;
      *(float*)(v21 + 372) = a2;
      *(float*)(v21 + 452) = a3;
      *(float*)(v21 + 532) = a4;
      *(float*)(v21 + 612) = a5;
      *(float*)(v21 + 692) = a6;
      *(_BYTE*)(v21 + 296) = 1;
      *(_BYTE*)(v21 + 376) = 1;
      *(_BYTE*)(v21 + 456) = 1;
      *(_BYTE*)(v21 + 536) = 1;
      *(_BYTE*)(v21 + 616) = 1;
      *(_BYTE*)(v21 + 696) = 1;
      *(_OWORD*)(v21 + 176) = v28;
      return result;
    }
  }
  if (*(_BYTE*)(v21 + 90) == 1) {
    *(_WORD*)(v21 + 89) = 256;
  }
  v29 = *(__int64**)(v21 + 32);
  for (j = *(__int64**)(v21 + 40); v29 != j;
       result = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 72LL))(v31)) {
    v31 = *v29++;
  }
  return result;
}

__int64 Seq_Unknown4_114efb0() { return GameRoutine_80a2a0(0.5); }

__int64 Seq_Unknown5_114efc0()
{
  if (game_ProcFadeView_instance_ != 0) {
    GameRoutine_80a410(game_ProcFadeView_instance_, 0.5);
  }
  return GameRoutine_114f000();
}

void Seq_114f000(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  char v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64* v80;
  __int64 v81;
  __int64 v82;
  _DWORD* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _BYTE* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64* v106;
  __int64* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64* v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64* v120;
  __int64* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64* v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int16* v132;
  float v133;
  _QWORD* v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  bool v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  unsigned __int8 v159;
  __int64 v160;
  unsigned __int8 v161;
  __int64 v162;
  __int64 v163;
  struct {
    __int64 v164;
    __int64 v165;
    __int64 v166;
    __int64 v167;
  } v164_;
  _QWORD v168[2];

  v2 = game_sound_g_game_sound_ptr[0];
  if (*(_BYTE*)(a1 + 269) == 1) {
    v3 = *(_BYTE*)(a1 + 270);
    *(_BYTE*)(a1 + 269) = 0;
    if ((v3 & 1) == 0) {
      v4 = *(_QWORD**)(a1 + 576);
      *(_BYTE*)(a1 + 270) = 1;
      if (v4 != nullptr) {
        v5 = fw_memory_g_heap_manager_ptr;
        do {
          if ((v4[2] & 1) != 0) {
            fw_text_String_CopyTerminated_alt1(&v164_.v164, v4[4], v4[3]);
          }
          else {
            v6 = v4[3];
            v7 = v4[4];
            v164_.v164 = v4[2];
            v164_.v165 = v6;
            v164_.v166 = v7;
          }
          v8 = v4[5];
          v164_.v167 = v8;
          if (v8 != 0) {
            GameRoutine_11c4460_alt1(v8);
            if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
              v9 = 128;
            }
            else {
              v9 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v5 + v9, v8);
          }
          if ((v164_.v164 & 1) != 0 && v164_.v166 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
              v10 = 128;
            }
            else {
              v10 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v5 + v10, v164_.v166);
          }
          v4 = (_QWORD*)*v4;
        } while (v4 != nullptr);
      }
      if (*(_QWORD*)(a1 + 584) != 0) {
        v11 = *(_QWORD**)(a1 + 576);
        if (v11 != nullptr) {
          v12 = fw_memory_g_heap_manager_ptr;
          do {
            v14 = (__int64)v11;
            v11 = (_QWORD*)*v11;
            if ((*(_BYTE*)(v14 + 16) & 1) != 0 && *(_QWORD*)(v14 + 32) != 0) {
              v15 = v14;
              v16 = *(_QWORD*)(v14 + 32);
              if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
                v17 = 128;
              }
              else {
                v17 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v12 + v17, v16);
              v14 = v15;
            }
            if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
              v13 = 128;
            }
            else {
              v13 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v12 + v13, v14);
          } while (v11 != nullptr);
        }
        v18 = *(_QWORD*)(a1 + 568);
        *(_QWORD*)(a1 + 576) = 0;
        if (v18 != 0) {
          v19 = v18 & 7;
          if (v18 >= 8) {
            v21 = v18 & 0xFFFFFFFFFFFFFFF8LL;
            v20 = 0;
            do {
              *(_QWORD*)(*(_QWORD*)(a1 + 560) + 8 * v20) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 560) + 8 * v20 + 8) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 560) + 8 * v20 + 16) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 560) + 8 * v20 + 24) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 560) + 8 * v20 + 32) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 560) + 8 * v20 + 40) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 560) + 8 * v20 + 48) = 0;
              v22 = *(_QWORD*)(a1 + 560) + 8 * v20;
              v20 += 8;
              *(_QWORD*)(v22 + 56) = 0;
            } while (v21 != v20);
          }
          else {
            v20 = 0;
          }
          if (v19 != 0) {
            v23 = 8 * v20;
            do {
              --v19;
              *(_QWORD*)(*(_QWORD*)(a1 + 560) + v23) = 0;
              v23 += 8;
            } while (v19 != 0);
          }
        }
        *(_QWORD*)(a1 + 584) = 0;
      }
      v24 = *(_QWORD**)(a1 + 624);
      if (v24 != nullptr) {
        v25 = fw_memory_g_heap_manager_ptr;
        do {
          if ((v24[2] & 1) != 0) {
            fw_text_String_CopyTerminated_alt1(&v164_.v164, v24[4], v24[3]);
          }
          else {
            v26 = v24[3];
            v27 = v24[4];
            v164_.v164 = v24[2];
            v164_.v165 = v26;
            v164_.v166 = v27;
          }
          v28 = v24[5];
          v164_.v167 = v28;
          if (v28 != 0) {
            v29 = *(_QWORD*)(v28 + 32);
            if (v29 != 0) {
              v30 = *(_QWORD*)v25;
              *(_QWORD*)(v28 + 40) = v29;
              if (*(_QWORD*)(v30 + 200) != 0) {
                v31 = 128;
              }
              else {
                v31 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(v30 + v31, v29);
            }
            if ((*(_BYTE*)v28 & 1) != 0) {
              v32 = *(_QWORD*)(v28 + 16);
              if (v32 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
                  v33 = 128;
                }
                else {
                  v33 = 56;
                }
                nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v25 + v33, v32);
              }
            }
            if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
              v34 = 128;
            }
            else {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v25 + v34, v28);
          }
          if ((v164_.v164 & 1) != 0 && v164_.v166 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
              v35 = 128;
            }
            else {
              v35 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v25 + v35, v164_.v166);
          }
          v24 = (_QWORD*)*v24;
        } while (v24 != nullptr);
      }
      if (*(_QWORD*)(a1 + 632) != 0) {
        v36 = *(_QWORD**)(a1 + 624);
        if (v36 != nullptr) {
          v37 = fw_memory_g_heap_manager_ptr;
          do {
            v39 = (__int64)v36;
            v36 = (_QWORD*)*v36;
            if ((*(_BYTE*)(v39 + 16) & 1) != 0 && *(_QWORD*)(v39 + 32) != 0) {
              v40 = v39;
              v41 = *(_QWORD*)(v39 + 32);
              if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) != 0) {
                v42 = 128;
              }
              else {
                v42 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v37 + v42, v41);
              v39 = v40;
            }
            if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) != 0) {
              v38 = 128;
            }
            else {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v37 + v38, v39);
          } while (v36 != nullptr);
        }
        v43 = *(_QWORD*)(a1 + 616);
        *(_QWORD*)(a1 + 624) = 0;
        if (v43 != 0) {
          v44 = v43 & 7;
          if (v43 >= 8) {
            v46 = v43 & 0xFFFFFFFFFFFFFFF8LL;
            v45 = 0;
            do {
              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v45) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v45 + 8) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v45 + 16) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v45 + 24) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v45 + 32) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v45 + 40) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * v45 + 48) = 0;
              v47 = *(_QWORD*)(a1 + 608) + 8 * v45;
              v45 += 8;
              *(_QWORD*)(v47 + 56) = 0;
            } while (v46 != v45);
          }
          else {
            v45 = 0;
          }
          if (v44 != 0) {
            v48 = 8 * v45;
            do {
              --v44;
              *(_QWORD*)(*(_QWORD*)(a1 + 608) + v48) = 0;
              v48 += 8;
            } while (v44 != 0);
          }
        }
        *(_QWORD*)(a1 + 632) = 0;
      }
      v49 = *(_QWORD**)(a1 + 664);
      if (v49 != nullptr) {
        v50 = fw_memory_g_heap_manager_ptr;
        do {
          if ((v49[2] & 1) != 0) {
            fw_text_String_CopyTerminated_alt1(&v164_.v164, v49[4], v49[3]);
          }
          else {
            v51 = v49[3];
            v52 = v49[4];
            v164_.v164 = v49[2];
            v164_.v165 = v51;
            v164_.v166 = v52;
          }
          v53 = v49[5];
          v164_.v167 = v53;
          if (v53 != 0) {
            GameRoutine_11caf60_alt1(v53);
            if (*(_QWORD*)(*(_QWORD*)v50 + 200LL) != 0) {
              v54 = 128;
            }
            else {
              v54 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v50 + v54, v53);
          }
          if ((v164_.v164 & 1) != 0 && v164_.v166 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v50 + 200LL) != 0) {
              v55 = 128;
            }
            else {
              v55 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v50 + v55, v164_.v166);
          }
          v49 = (_QWORD*)*v49;
        } while (v49 != nullptr);
      }
      if (*(_QWORD*)(a1 + 672) != 0) {
        v56 = *(_QWORD**)(a1 + 664);
        if (v56 != nullptr) {
          v57 = fw_memory_g_heap_manager_ptr;
          do {
            v59 = (__int64)v56;
            v56 = (_QWORD*)*v56;
            if ((*(_BYTE*)(v59 + 16) & 1) != 0 && *(_QWORD*)(v59 + 32) != 0) {
              v60 = v59;
              v61 = *(_QWORD*)(v59 + 32);
              if (*(_QWORD*)(*(_QWORD*)v57 + 200LL) != 0) {
                v62 = 128;
              }
              else {
                v62 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v57 + v62, v61);
              v59 = v60;
            }
            if (*(_QWORD*)(*(_QWORD*)v57 + 200LL) != 0) {
              v58 = 128;
            }
            else {
              v58 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v57 + v58, v59);
          } while (v56 != nullptr);
        }
        v63 = *(_QWORD*)(a1 + 656);
        *(_QWORD*)(a1 + 664) = 0;
        if (v63 != 0) {
          v64 = v63 & 7;
          if (v63 >= 8) {
            v66 = v63 & 0xFFFFFFFFFFFFFFF8LL;
            v65 = 0;
            do {
              *(_QWORD*)(*(_QWORD*)(a1 + 648) + 8 * v65) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 648) + 8 * v65 + 8) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 648) + 8 * v65 + 16) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 648) + 8 * v65 + 24) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 648) + 8 * v65 + 32) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 648) + 8 * v65 + 40) = 0;
              *(_QWORD*)(*(_QWORD*)(a1 + 648) + 8 * v65 + 48) = 0;
              v67 = *(_QWORD*)(a1 + 648) + 8 * v65;
              v65 += 8;
              *(_QWORD*)(v67 + 56) = 0;
            } while (v66 != v65);
          }
          else {
            v65 = 0;
          }
          if (v64 != 0) {
            v68 = 8 * v65;
            do {
              --v64;
              *(_QWORD*)(*(_QWORD*)(a1 + 648) + v68) = 0;
              v68 += 8;
            } while (v64 != 0);
          }
        }
        *(_QWORD*)(a1 + 672) = 0;
      }
      v69 = *(_QWORD*)(a1 + 600);
      if (v69 != 0) {
        GameRoutine_11c71e0_alt1(*(__int64**)(a1 + 600));
        v70 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v70 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v69);
        *(_QWORD*)(a1 + 600) = 0;
      }
      if (*(_QWORD*)(a1 + 400) != 0) {
        v71 = *(_QWORD*)(a1 + 408);
        v168[0] = *(_QWORD*)(a1 + 400);
        v168[1] = v71;
        if (v71 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 8), 1u,
                                    memory_order_relaxed);
          Shape_f64760_alt1(v168);
          if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
            std___1___shared_weak_count___release_weak_alt3(v71);
          }
        }
        else {
          Shape_f64760_alt1(v168);
        }
        v72 = *(_QWORD*)(a1 + 408);
        *(_QWORD*)(a1 + 400) = 0;
        *(_QWORD*)(a1 + 408) = 0;
        if (v72 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
          std___1___shared_weak_count___release_weak_alt3(v72);
        }
      }
      v73 = *(_QWORD*)(a1 + 688);
      v74 = game_g_frame_clock_ptr[0];
      if (v73 != 0) {
        v75 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
        v77 = *(_QWORD*)(v75 + 48);
        v76 = *(_QWORD*)(v75 + 56);
        if (v76 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v76 + 8), 1u,
                                    memory_order_relaxed);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v76 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
            std___1___shared_weak_count___release_weak_alt3(v76);
          }
          v78 = *(_QWORD*)(*(_QWORD*)(v77 + 8) + 128LL);
          if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
            std___1___shared_weak_count___release_weak_alt3(v76);
          }
        }
        else {
          v78 = *(_QWORD*)(*(_QWORD*)(v77 + 8) + 128LL);
        }
        v79 = *(__int64**)(v78 + 32);
        v80 = *(__int64**)(v78 + 40);
        while (v79 != v80) {
          v81 = *v79++;
          (*(void (**)(__int64))(*(_QWORD*)v81 + 72LL))(v81);
        }
        v82 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v82 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, v73);
        *(_QWORD*)(a1 + 688) = 0;
      }
      v83 = *(_DWORD**)(a1 + 456);
      if (*(_QWORD*)v83 != 0 && *(_DWORD*)(*(_QWORD*)v83 + 16LL) == v83[2]) {
        v84 = *(_QWORD*)(a1 + 464);
        if (v84 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 8), 1u,
                                    memory_order_relaxed);
          v164_.v165 = v84;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 8), 1u,
                                    memory_order_relaxed);
        }
        else {
          v164_.v165 = 0;
        }
        v164_.v164 = (__int64)v83;
        GameHr_14a1390(&v164_.v164, 1);
        v85 = v164_.v165;
        if (v164_.v165 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v164_.v165 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85);
          std___1___shared_weak_count___release_weak_alt3(v85);
        }
        if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
          std___1___shared_weak_count___release_weak_alt3(v84);
        }
        **(_QWORD**)(a1 + 456) = 0;
      }
      v86 = *(_QWORD*)(*v74 + 13224);
      v87 = *(_QWORD*)(v86 + 48);
      v88 = *(_QWORD*)(v86 + 56);
      if (v88 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v88 + 8), 1u,
                                  memory_order_relaxed);
        v89 = *(_QWORD*)(*(_QWORD*)(v87 + 8) + 280LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
          std___1___shared_weak_count___release_weak_alt3(v88);
        }
      }
      else {
        v89 = *(_QWORD*)(*(_QWORD*)(v87 + 8) + 280LL);
      }
      if (*(_BYTE*)(v89 + 90) == 1) {
        *(_BYTE*)(v89 + 90) = 0;
      }
      v90 = *(_QWORD*)(*v74 + 13224);
      v92 = *(_QWORD*)(v90 + 48);
      v91 = *(_QWORD*)(v90 + 56);
      if (v91 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v91 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v91 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v91 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v91 + 16LL))(v91);
          std___1___shared_weak_count___release_weak_alt3(v91);
        }
        v93 = *(_QWORD*)(*(_QWORD*)(v92 + 8) + 304LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v91 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v91 + 16LL))(v91);
          std___1___shared_weak_count___release_weak_alt3(v91);
        }
      }
      else {
        v93 = *(_QWORD*)(*(_QWORD*)(v92 + 8) + 304LL);
      }
      *(_DWORD*)(v93 + 172) = 0;
      *(_BYTE*)(v93 + 176) = 1;
      v94 = *(_QWORD*)(*v74 + 13224);
      v96 = *(_QWORD*)(v94 + 48);
      v95 = *(_QWORD*)(v94 + 56);
      if (v95 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v95 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v95 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v95 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95);
          std___1___shared_weak_count___release_weak_alt3(v95);
        }
        v97 = *(_BYTE**)(*(_QWORD*)(v96 + 8) + 224LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v95 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95);
          std___1___shared_weak_count___release_weak_alt3(v95);
        }
      }
      else {
        v97 = *(_BYTE**)(*(_QWORD*)(v96 + 8) + 224LL);
      }
      if (v97[96] == 1) {
        v97[96] = 0;
      }
      if (v97[176] == 1) {
        v97[176] = 0;
      }
      if (v97[386] == 1) {
        v97[386] = 0;
      }
      if (v97[464] == 1) {
        v97[464] = 0;
      }
      if (v97[544] == 1) {
        v97[544] = 0;
      }
      v98 = *(_QWORD*)(*v74 + 13224);
      v100 = *(_QWORD*)(v98 + 48);
      v99 = *(_QWORD*)(v98 + 56);
      if (v99 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v99 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v99 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
          std___1___shared_weak_count___release_weak_alt3(v99);
        }
        v101 = *(_QWORD*)(*(_QWORD*)(v100 + 8) + 136LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
          std___1___shared_weak_count___release_weak_alt3(v99);
        }
      }
      else {
        v101 = *(_QWORD*)(*(_QWORD*)(v100 + 8) + 136LL);
      }
      if (*(_BYTE*)(v101 + 176) == 1) {
        *(_BYTE*)(v101 + 176) = 0;
      }
      if (*(_BYTE*)(v101 + 96) == 1) {
        *(_BYTE*)(v101 + 96) = 0;
      }
      v102 = *(_QWORD*)(*v74 + 13224);
      v104 = *(_QWORD*)(v102 + 48);
      v103 = *(_QWORD*)(v102 + 56);
      if (v103 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v103 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v103 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v103 + 16LL))(v103);
          std___1___shared_weak_count___release_weak_alt3(v103);
        }
        v105 = *(_QWORD*)(*(_QWORD*)(v104 + 8) + 192LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v103 + 16LL))(v103);
          std___1___shared_weak_count___release_weak_alt3(v103);
        }
      }
      else {
        v105 = *(_QWORD*)(*(_QWORD*)(v104 + 8) + 192LL);
      }
      if (*(_BYTE*)(v105 + 90) == 1) {
        *(_WORD*)(v105 + 89) = 256;
      }
      v106 = *(__int64**)(v105 + 32);
      v107 = *(__int64**)(v105 + 40);
      while (v106 != v107) {
        v108 = *v106++;
        (*(void (**)(__int64))(*(_QWORD*)v108 + 72LL))(v108);
      }
      *(_QWORD*)(a1 + 696) = 3212836864LL;
      v109 = *(_QWORD*)(*v74 + 13224);
      v111 = *(_QWORD*)(v109 + 48);
      v110 = *(_QWORD*)(v109 + 56);
      if (v110 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v110 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v110 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
          std___1___shared_weak_count___release_weak_alt3(v110);
        }
        v112 = *(_QWORD*)(*(_QWORD*)(v111 + 8) + 96LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
          std___1___shared_weak_count___release_weak_alt3(v110);
        }
      }
      else {
        v112 = *(_QWORD*)(*(_QWORD*)(v111 + 8) + 96LL);
      }
      v113 = *(__int64**)(v112 + 32);
      v114 = *(__int64**)(v112 + 40);
      while (v113 != v114) {
        v115 = *v113++;
        (*(void (**)(__int64))(*(_QWORD*)v115 + 72LL))(v115);
      }
      v116 = *(_QWORD*)(*v74 + 13224);
      v118 = *(_QWORD*)(v116 + 48);
      v117 = *(_QWORD*)(v116 + 56);
      if (v117 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v117 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v117 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v117 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v117 + 16LL))(v117);
          std___1___shared_weak_count___release_weak_alt3(v117);
        }
        v119 = *(_QWORD*)(*(_QWORD*)(v118 + 8) + 104LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v117 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v117 + 16LL))(v117);
          std___1___shared_weak_count___release_weak_alt3(v117);
        }
      }
      else {
        v119 = *(_QWORD*)(*(_QWORD*)(v118 + 8) + 104LL);
      }
      if (*(_BYTE*)(v119 + 90) == 1) {
        *(_WORD*)(v119 + 89) = 256;
      }
      v120 = *(__int64**)(v119 + 32);
      v121 = *(__int64**)(v119 + 40);
      while (v120 != v121) {
        v122 = *v120++;
        (*(void (**)(__int64))(*(_QWORD*)v122 + 72LL))(v122);
      }
      v123 = *(_QWORD*)(*v74 + 13224);
      v125 = *(_QWORD*)(v123 + 48);
      v124 = *(_QWORD*)(v123 + 56);
      if (v124 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v124 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v124 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v124 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124);
          std___1___shared_weak_count___release_weak_alt3(v124);
        }
        v126 = *(_QWORD*)(*(_QWORD*)(v125 + 8) + 184LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v124 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124);
          std___1___shared_weak_count___release_weak_alt3(v124);
        }
      }
      else {
        v126 = *(_QWORD*)(*(_QWORD*)(v125 + 8) + 184LL);
      }
      if (*(_BYTE*)(v126 + 90) == 1) {
        *(_WORD*)(v126 + 89) = 256;
      }
      v127 = *(__int64**)(v126 + 32);
      v128 = *(__int64**)(v126 + 40);
      while (v127 != v128) {
        v129 = *v127++;
        (*(void (**)(__int64))(*(_QWORD*)v129 + 72LL))(v129);
      }
      Seq_a85600_alt1(*(_QWORD*)GameData_212c638);
    }
    v130 = --GameData_21d92dc;
    *GameData_212d168 = GameData_21d925c[v130];
    game_GameView_Update_alt1();
    ProcRegistry_65a640_alt1((_QWORD*)a1);
    if (*GameData_212fed0 != 0) {
      GameRoutine_110b3e0_alt1((_QWORD*)(*GameData_212fed0 + 8));
    }
    v131 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
    if (*(_BYTE*)(a1 + 271) == 1) {
      if (v131 != 0) {
        GameRoutine_17b8e80_alt1(v131, 1);
      }
    }
    else if (v131 != 0) {
      GameRoutine_17b8f40_alt1(v131, 1);
    }
    if (game_gmap_GmapClock_instance_ != 0) {
      v132 = (__int16*)(game_gmap_GmapClock_instance_ + 32);
    }
    else {
      v132 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    if (v132[1] * *v132 * v132[2] != 0 ||
        (game_gmap_GmapClock_instance_ != 0
             ? (v132 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
             : (v132 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
         game_gmap_GmapClock_instance_ == 0)) {
      v133 = 0x0.0p+0f;
    }
    else {
      v133 = *(float*)(game_gmap_GmapClock_instance_ + 44);
    }
    game_8697c0(v132, 0, v133);
    v134 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v136 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v135 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v138 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v137 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v139 = v137 == v138;
      v140 = v135 - 1 + v136;
      v141 = v140 >> 7;
      v142 = v140 & 0x7F;
      v143 = 16 * (v137 - v138) - 1;
      v144 = *(_QWORD*)(v138 + 8 * v141);
      if (v139) {
        v143 = 0;
      }
      v145 = v144 + 32 * v142;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v145 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v134[21] = *(_QWORD*)(v145 + 24);
      v146 = *(_QWORD*)(v145 + 16);
      v134[27] = v135 - 1;
      v134[20] = v146;
      if ((unsigned __int64)(v143 - (v135 + v136) - 255) <=
          0xFFFFFFFFFFFFFEFFLL) {
        v147 = *(_QWORD*)(v137 - 8);
        if (v147 != 0) {
          v148 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v148 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v148, v147);
          v137 = v134[24];
        }
        v134[24] = v137 - 8;
      }
    }
    snd_a2e7c0(*v2);
    v149 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v150 = *(_QWORD*)(game_GameModeData_instance_ + 2696);
      v151 = *(_QWORD*)(game_GameModeData_instance_ + 2688);
      v152 = *(_QWORD*)(game_GameModeData_instance_ + 2664);
      v153 = *(_QWORD*)(game_GameModeData_instance_ + 2672);
      v139 = v153 == v152;
      v154 = v150 - 1 + v151;
      v155 = v154 >> 12;
      v156 = v154 & 0xFFF;
      v157 = ((v153 - v152) << 9) - 1;
      v158 = *(_QWORD*)(v152 + 8 * v155);
      if (v139) {
        v157 = 0;
      }
      v159 = *(_BYTE*)(v158 + v156);
      *(_QWORD*)(game_GameModeData_instance_ + 2696) = v150 - 1;
      if ((unsigned __int64)(v157 - (v150 + v151) + 1) >= 0x2000) {
        if (*(_QWORD*)(v153 - 8) != 0) {
          v160 = v149;
          v161 = v159;
          v162 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v162 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v162,
              *(_QWORD*)(v153 - 8));
          v153 = *(_QWORD*)(v160 + 2672);
          v159 = v161;
          v149 = v160;
        }
        *(_QWORD*)(v149 + 2672) = v153 - 8;
      }
      GameRoutine_716420_alt1(v149, v159);
    }
  }
  if (*(_BYTE*)(a1 + 777) == 1) {
    v163 = *v2;
    snd_Fade_Fade_10c830_alt1((__int64)&v164_.v164, 0x0.0p+0f);
    snd_a2e0c0(v163, (__int64)&v164_.v164);
    snd_Fade_Destroy_Fade_alt1(&v164_.v164);
    *(_BYTE*)(a1 + 777) = 0;
  }
}

unsigned __int64 Seq_11504c0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 result;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  _BYTE* v19;
  int v20;
  int v21;
  bool v22;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      400, 16, 0);
  GameRoutine_11c6f00();
  v4 = *v2;
  *(_QWORD*)(a1 + 600) = v3;
  v5 = fw_memory_HeapManager_Allocate(v4, 56, 16, 0);
  v6 = *(_QWORD*)(a1 + 176);
  *(_BYTE*)v5 = 0;
  *(_QWORD*)(v5 + 4) = 0;
  *(_QWORD*)(v5 + 24) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_DWORD*)(v5 + 48) = 0;
  *(_BYTE*)(v5 + 52) = 0;
  *(_QWORD*)(a1 + 688) = v5;
  *(_QWORD*)(v5 + 12) = 0x3F80000000000000LL;
  *(_DWORD*)(v5 + 20) = 1065353216;
  *(_QWORD*)(v5 + 40) = 0x3F8000003F800000LL;
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v7 = v6;
  }
  else {
    v7 = a1 + 161;
  }
  result = game_HashString(v7);
  if (result != 0) {
    v9 = *(_QWORD*)(GameData_21c9db0 + 96);
    if (v9 != 0 && *(_QWORD*)(GameData_21c9db0 + 112) != 0) {
      v11 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v12 = result;
        if (result >= v9) {
          v12 = result % v9;
        }
      }
      else {
        v12 = v11 & result;
      }
      v13 = *(_QWORD**)(*(_QWORD*)(GameData_21c9db0 + 88) + 8 * v12);
      if (v13 != nullptr) {
        v14 = (_QWORD*)*v13;
        if (v14 != nullptr) {
          if ((v9 & v11) == 0) {
            while (1) {
              v16 = v14[1];
              if (v16 == result) {
                if (v14[2] == result) {
                  goto LABEL_29;
                }
              }
              else if ((v16 & v11) != v12) {
                goto LABEL_37;
              }
              v14 = (_QWORD*)*v14;
              if (v14 == nullptr) {
                goto LABEL_37;
              }
            }
          }
          do {
            v15 = v14[1];
            if (v15 == result) {
              if (v14[2] == result) {
              LABEL_29:
                v17 = v14[3];
                if (v17 != 0) {
                  v18 = *(_BYTE**)(v17 + 32);
                  if (v18 != nullptr && *v18 != 0) {
                    result = GameRoutine_60a020(a1 + 504, v18);
                  }
                  v19 = *(_BYTE**)(v17 + 40);
                  if (v19 != nullptr && *v19 != 0) {
                    result = GameRoutine_60a020(a1 + 528, v19);
                  }
                  *(_BYTE*)(a1 + 552) = 1;
                  *(_BYTE*)(a1 + 553) = *(_BYTE*)(v17 + 48) ^ 1;
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

LABEL_37:
  if (game_ProcGameSkipView_instance_ == 0 ||
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 >
          2 ||
      (((v20 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v21 = 2)
           : (v21 = 3),
       (v21 & v20) == 0
           ? (v22 =
                  (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 9) == 8)
           : (v22 = false),
       !v22)) {
    if ((*(_BYTE*)(a1 + 268) & 1) == 0) {
      result = GameRoutine_9b86d0(a1, 0);
      *(_BYTE*)(a1 + 268) = 1;
    }
  }
  return result;
}

void Seq_1150700(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  const char* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  char* v14;
  __int64* v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  const char* v72;
  struct {
    __int64 v73[2];
    __int64 v74;
  } v73_;
  struct {
    __int64 v75;
    __int64 v76;
  } v75_;
  struct {
    __int64 v77[2];
    __int64 v78;
  } v77_;
  struct {
    __int64 v79;
    __int64 v80;
  } v79_;
  struct {
    __int64 v81;
    unsigned __int64 v82;
    __int64 v83;
  } v81_;
  struct {
    __int64 v84;
    unsigned __int64 v85;
    __int64 v86;
  } v84_;
  struct {
    _QWORD v87[2];
    __int64 v88;
  } v87_;
  struct {
    const char* v89[2];
    __int64 v90;
  } v89_;

  v2 = msg_MessageManager_instance__ptr[0];
  v3 = *msg_MessageManager_instance__ptr[0];
  if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
    v4 = *(const char**)(a1 + 200);
  }
  else {
    v4 = (const char*)(a1 + 185);
  }
  v89_.v89[0] = v4;
  v5 = GameRoutine_a542c0((_QWORD*)(v3 + 14608), v89_.v89);
  if (v5 == nullptr || (v6 = v5[5]) == 0 ||
      (v7 = *(_QWORD*)(v6 + 800), (v8 = *(_DWORD*)(v7 + 36)) == -1) ||
      (v9 = **(_DWORD**)(*(_QWORD*)(v7 + 24) + 24LL * v8)) == -1) {
    v9 = -1;
  }
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 176);
  }
  else {
    v10 = a1 + 161;
  }
  v11 = Registration_a4fa80(*v2, v4, v10);
  if ((v11 & 0x80000000) == 0) {
    v12 = v11 + 1;
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = (char*)v89_.v89 + 1;
    v71 = v9;
    v72 = v4;
    do {
      if (v9 >= 1 && v12 >= v9) {
        return;
      }
      v15 = Registration_a4f800((_QWORD*)*v2, v4, v12);
      if ((*(_BYTE*)v15 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1((__int64*)v89_.v89, v15[2], v15[1]);
      }
      else {
        v16 = (const char*)*v15;
        v17 = v15[2];
        v89_.v89[1] = (const char*)v15[1];
        v89_.v90 = v17;
        v89_.v89[0] = v16;
      }
      if (((__int64)v89_.v89[0] & 1) != 0) {
        v18 = v89_.v90;
      }
      else {
        v18 = (__int64)v14;
      }
      v19 = GameRoutine_a51280(*v2, v18) - 5;
      if (v19 > 0xFFFFFFFB) {
        goto LABEL_155;
      }
      if (((__int64)v89_.v89[0] & 1) != 0) {
        v20 = v89_.v90;
      }
      else {
        v20 = (__int64)v14;
      }
      GameRoutine_a51060((void*)(v87_.v87), *v2, v20);
      v84_.v85 = 0;
      v84_.v86 = 0;
      v81_.v83 = 0;
      v84_.v84 = 0;
      v81_.v81 = 0;
      v81_.v82 = 0;
      game_112d580((char*)v87_.v87, (__int64)&v84_.v84, (__int64)&v81_.v81);
      v21 = GameData_21c96b8;
      if ((v84_.v84 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(v77_.v77, v84_.v86, v84_.v85);
      }
      else {
        v77_.v77[0] = v84_.v84;
        v77_.v77[1] = v84_.v85;
        v77_.v78 = v84_.v86;
      }
      game_1142cc0((void*)(&v79_.v79), v21, (unsigned __int8*)v77_.v77, 1);
      if ((v77_.v77[0] & 1) != 0 && v77_.v78 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v22, v77_.v78);
      }
      v23 = GameData_21c96b8;
      if ((v81_.v81 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(v73_.v73, v81_.v83, v81_.v82);
      }
      else {
        v73_.v73[0] = v81_.v81;
        v73_.v73[1] = v81_.v82;
        v73_.v74 = v81_.v83;
      }
      v24 = v14;
      game_1142cc0((void*)(&v75_.v75), v23, (unsigned __int8*)v73_.v73, 0);
      if ((v73_.v73[0] & 1) != 0 && v73_.v74 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v25, v73_.v74);
      }
      v26 = v79_.v79;
      v27 = v79_.v80;
      while (v26 != v27) {
        v28 = *(_QWORD*)(v26 + 32);
        if (v28 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v28 + 48LL))(v28, v26);
        }
        v26 += 160;
      }
      v29 = v75_.v75;
      v30 = v75_.v76;
      if (v75_.v75 == v75_.v76) {
        v14 = v24;
        if (v75_.v75 == 0) {
          goto LABEL_96;
        }
      }
      else {
        do {
          v31 = *(_QWORD*)(v29 + 32);
          if (v31 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v31 + 48LL))(v31, v29);
          }
          v29 += 160;
        } while (v29 != v30);
        v29 = v75_.v75;
        v14 = v24;
        if (v75_.v75 == 0) {
          goto LABEL_96;
        }
      }
      v32 = v75_.v76;
      if (v29 == v75_.v76) {
        v2 = &msg_MessageManager_instance_;
        goto LABEL_92;
      }
      do {
        v34 = *(_QWORD*)(v32 - 40);
        if (v34 != 0) {
          v35 = *(_QWORD*)(v32 - 32);
          if (v34 == v35) {
            goto LABEL_73;
          }
          v36 = *(_QWORD*)(v32 - 32);
          do {
            v37 = *(_BYTE*)(v36 - 24);
            v36 -= 24;
            if ((v37 & 1) != 0) {
              v38 = *(_QWORD*)(v35 - 8);
              if (v38 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
                  v39 = 128;
                }
                else {
                  v39 = 56;
                }
                nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v39, v38);
              }
            }
            v35 = v36;
          } while (v36 != v34);
          v40 = *(_QWORD*)(v32 - 40);
          *(_QWORD*)(v32 - 32) = v34;
          v34 = v40;
          if (v40 != 0) {
          LABEL_73:
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
              v41 = 128;
            }
            else {
              v41 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v41, v34);
          }
        }
        if ((*(_BYTE*)(v32 - 64) & 1) != 0) {
          v42 = *(_QWORD*)(v32 - 48);
          if (v42 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
              v43 = 128;
            }
            else {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v43, v42);
          }
        }
        v44 = *(_QWORD**)(v32 - 80);
        if (v44 == (_QWORD*)(v32 - 112)) {
          v45 = 32;
        }
        else {
          if (v44 == nullptr) {
            goto LABEL_88;
          }
          v45 = 40;
        }
        (*(void (**)(__int64))(*v44 + v45))((__int64)v44);
      LABEL_88:
        v46 = *(_QWORD**)(v32 - 128);
        v47 = v32 - 160;
        if (v46 == (_QWORD*)(v32 - 160)) {
          v33 = 32;
        LABEL_60:
          (*(void (**)(__int64))(*v46 + v33))((__int64)v46);
          goto LABEL_61;
        }
        if (v46 != nullptr) {
          v33 = 40;
          goto LABEL_60;
        }
      LABEL_61:
        v32 -= 160;
      } while (v29 != v47);
      v75_.v76 = v29;
      v14 = v24;
      v2 = msg_MessageManager_instance__ptr[0];
      v29 = v75_.v75;
      if (v75_.v75 != 0) {
      LABEL_92:
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v48 = 128;
        }
        else {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v48, v29);
      }
    LABEL_96:
      v49 = v79_.v79;
      if (v79_.v79 == 0) {
        goto LABEL_136;
      }
      v50 = v79_.v80;
      if (v79_.v79 == v79_.v80) {
        v2 = &msg_MessageManager_instance_;
        goto LABEL_132;
      }
      while (2) {
        v52 = *(_QWORD*)(v50 - 40);
        if (v52 != 0) {
          v53 = *(_QWORD*)(v50 - 32);
          if (v52 == v53) {
            goto LABEL_113;
          }
          v54 = *(_QWORD*)(v50 - 32);
          do {
            v55 = *(_BYTE*)(v54 - 24);
            v54 -= 24;
            if ((v55 & 1) != 0) {
              v56 = *(_QWORD*)(v53 - 8);
              if (v56 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
                  v57 = 128;
                }
                else {
                  v57 = 56;
                }
                nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v57, v56);
              }
            }
            v53 = v54;
          } while (v54 != v52);
          v58 = *(_QWORD*)(v50 - 40);
          *(_QWORD*)(v50 - 32) = v52;
          v52 = v58;
          if (v58 != 0) {
          LABEL_113:
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
              v59 = 128;
            }
            else {
              v59 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v59, v52);
          }
        }
        if ((*(_BYTE*)(v50 - 64) & 1) != 0) {
          v60 = *(_QWORD*)(v50 - 48);
          if (v60 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
              v61 = 128;
            }
            else {
              v61 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v61, v60);
          }
        }
        v62 = *(_QWORD**)(v50 - 80);
        if (v62 == (_QWORD*)(v50 - 112)) {
          v63 = 32;
        LABEL_127:
          (*(void (**)(__int64))(*v62 + v63))((__int64)v62);
        }
        else if (v62 != nullptr) {
          v63 = 40;
          goto LABEL_127;
        }
        v64 = *(_QWORD**)(v50 - 128);
        v65 = v50 - 160;
        if (v64 == (_QWORD*)(v50 - 160)) {
          v51 = 32;
          goto LABEL_100;
        }
        if (v64 != nullptr) {
          v51 = 40;
        LABEL_100:
          (*(void (**)(__int64))(*v64 + v51))((__int64)v64);
        }
        v50 -= 160;
        if (v49 != v65) {
          continue;
        }
        break;
      }
      v79_.v80 = v49;
      v14 = v24;
      v2 = msg_MessageManager_instance__ptr[0];
      v49 = v79_.v79;
      if (v79_.v79 != 0) {
      LABEL_132:
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v66 = 128;
        }
        else {
          v66 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v66, v49);
      }
    LABEL_136:
      if ((v81_.v81 & 1) != 0 && v81_.v83 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v67 = 128;
        }
        else {
          v67 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v67, v81_.v83);
      }
      v4 = v72;
      v9 = v71;
      if ((v84_.v84 & 1) != 0 && v84_.v86 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v68 = 128;
        }
        else {
          v68 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v68, v84_.v86);
      }
      if ((v87_.v87[0] & 1) != 0 && v87_.v88 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v69 = 128;
        }
        else {
          v69 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v69, v87_.v88);
      }
      ++v12;
    LABEL_155:
      if (((__int64)v89_.v89[0] & 1) != 0 && v89_.v90 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v70 = 128;
        }
        else {
          v70 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v70, v89_.v90);
      }
    } while (v19 < 0xFFFFFFFC);
  }
}

float Seq_Unknown3_1150de0(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int128 v20;
  unsigned int i;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float result;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  struct {
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v36_;

  v1 = *(_QWORD**)(a1 + 576);
  if (v1 != nullptr) {
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      if ((v1[2] & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v36_.v36, v1[4], v1[3]);
      }
      else {
        v4 = v1[3];
        v5 = v1[4];
        v36_.v36 = v1[2];
        v36_.v37 = v4;
        v36_.v38 = v5;
      }
      v36_.v39 = v1[5];
      CharacterWork_11c5ae0_alt1(v36_.v39);
      if ((v36_.v36 & 1) != 0 && v36_.v38 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v6, v36_.v38);
      }
      v1 = (_QWORD*)*v1;
    } while (v1 != nullptr);
  }
  v7 = *(_QWORD**)(a1 + 624);
  if (v7 != nullptr) {
    v8 = fw_memory_g_heap_manager_ptr;
    do {
      if ((v7[2] & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v36_.v36, v7[4], v7[3]);
      }
      else {
        v9 = v7[3];
        v10 = v7[4];
        v36_.v36 = v7[2];
        v36_.v37 = v9;
        v36_.v38 = v10;
      }
      v36_.v39 = v7[5];
      SceneObjectWork_11ca3a0(v36_.v39);
      if ((v36_.v36 & 1) != 0 && v36_.v38 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v8 + v11, v36_.v38);
      }
      v7 = (_QWORD*)*v7;
    } while (v7 != nullptr);
  }
  v12 = *(_QWORD**)(a1 + 664);
  if (v12 != nullptr) {
    v13 = fw_memory_g_heap_manager_ptr;
    do {
      if ((v12[2] & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v36_.v36, v12[4], v12[3]);
      }
      else {
        v14 = v12[3];
        v15 = v12[4];
        v36_.v36 = v12[2];
        v36_.v37 = v14;
        v36_.v38 = v15;
      }
      v36_.v39 = v12[5];
      if ((v36_.v36 & 1) != 0 && v36_.v38 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v13 + v16, v36_.v38);
      }
      v12 = (_QWORD*)*v12;
    } while (v12 != nullptr);
  }
  v17 = *(_QWORD*)(a1 + 456);
  v18 = *(_QWORD*)v17;
  if (*(_QWORD*)v17 != 0 && *(_DWORD*)(v18 + 16) == *(_DWORD*)(v17 + 8)) {
    v19 = *(_DWORD*)(v18 + 36);
    if (v19 != 0) {
      v20 = *(_OWORD*)(a1 + 432);
      for (i = 0; i < v19; ++i) {
        if ((int)v19 > (int)i) {
          v22 = *(_QWORD*)(v18 + 40 + 8LL * (int)i);
          if (v22 != 0) {
            *(_OWORD*)(v22 + 16) = v20;
            *(_BYTE*)(v22 + 128) = 1;
            v19 = *(_DWORD*)(v18 + 36);
          }
        }
      }
    }
    game_14a3920(v17);
  }
  v23 = *(_QWORD*)(a1 + 600);
  if (v23 != 0) {
    game_evt_demo_11c8190(v23);
  }
  v24 = *(_QWORD*)(a1 + 688);
  if (v24 != 0) {
    GameRoutine_1937a70_alt1(v24);
  }
  result = *(float*)(a1 + 696);
  if (result >= 0x0.0p+0f) {
    result = *(float*)(a1 + 700);
    if (result >= 0x0.0p+0f) {
      v26 = game_script_hub_g_frame_counter;
      v27 = *(_QWORD*)(game_g_frame_clock + 13224);
      v29 = *(_QWORD*)(v27 + 48);
      v28 = *(_QWORD*)(v27 + 56);
      if (v28 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak_alt3(v28);
        }
        v30 = *(_QWORD*)(*(_QWORD*)(v29 + 8) + 192LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak_alt3(v28);
        }
      }
      else {
        v30 = *(_QWORD*)(*(_QWORD*)(v29 + 8) + 192LL);
      }
      v31 =
          *(float*)(a1 + 696) +
          (float)((float)((float)(0x1.6800000000000p+8f / *(float*)(a1 + 700)) *
                          *(float*)(v26 + 160)) *
                  0x1.0000000000000p-1f);
      if (v31 >= 0x1.6800000000000p+8f) {
        v31 = v31 + -0x1.6800000000000p+8f;
      }
      *(float*)(a1 + 696) = v31;
      result = (float)(PSEUDO_UNFUSED(v31 * 0x1.1df46a0000000p-6f)) +
               (float)(roundf((float)(v31 * 0x1.1df46a0000000p-6f) *
                              0x1.45f3060000000p-3f) *
                       -0x1.921fb60000000p+2f);
      if (result <= 0x1.921fb60000000p+0f) {
        if (result >= -0x1.921fb60000000p+0f) {
          goto LABEL_65;
        }
        v32 = -0x1.921fb60000000p+1f;
      }
      else {
        v32 = 0x1.921fb60000000p+1f;
      }
      result = v32 - result;
    LABEL_65:
      if (*(_BYTE*)(v30 + 376) == 1) {
        v33 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 +
                        4);
        v34 = -(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                 (_QWORD)GameData_212c190) -
                       (float)((float)(*((float*)GameData_212c190 + 1) -
                                       (float)(*(float*)GameData_212c190 *
                                               (float)(result * result))) *
                               (float)(result * result)));
        v35 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
        *(_BYTE*)(v30 + 376) = 1;
        result =
            (float)((float)(result *
                            (float)((float)((float)-(
                                                float)(v35 -
                                                       (float)((float)(v33 +
                                                                       (float)(v34 *
                                                                               (float)(result *
                                                                                       result))) *
                                                               (float)(result *
                                                                       result))) *
                                            (float)(result * result)) +
                                    0x1.0000000000000p+0f)) *
                    0x1.0000000000000p-1f) +
            0x1.0000000000000p-1f;
        *(float*)(v30 + 372) = result;
      }
    }
  }
  return result;
}

__int64 game_evt_demo_Seq_ChangeMap_lambda0_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)result = GameData_20133a0;
  if ((*(_BYTE*)(result + 40) & 1) != 0) {
    v1 = *(_QWORD*)(result + 56);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      result = v2;
    }
  }
  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    v4 = *(_QWORD*)(result + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64 game_evt_demo_Seq_ChangeMap_lambda0_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = GameData_20133a0;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7, a1);
}

_QWORD* game_evt_demo_Seq_ChangeMap_lambda0_Clone(__int64 a1)
{
  _QWORD* v2;
  char v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  v3 = *(_BYTE*)(a1 + 16);
  v4 = v2;
  v5 = *(_QWORD*)(a1 + 8);
  *v2 = GameData_20133a0;
  v2[1] = v5;
  if ((v3 & 1) != 0) {
    fw_text_String_CopyTerminated(v2 + 2, *(_QWORD*)(a1 + 32),
                                  *(_QWORD*)(a1 + 24));
  }
  else {
    v6 = *(_QWORD*)(a1 + 24);
    v7 = *(_QWORD*)(a1 + 32);
    v2[2] = *(_QWORD*)(a1 + 16);
    v2[3] = v6;
    v2[4] = v7;
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(v4 + 5, *(_QWORD*)(a1 + 56),
                                  *(_QWORD*)(a1 + 48));
  }
  else {
    v8 = *(_QWORD*)(a1 + 48);
    v9 = *(_QWORD*)(a1 + 56);
    v4[5] = *(_QWORD*)(a1 + 40);
    v4[6] = v8;
    v4[7] = v9;
  }
  v4[8] = *(_QWORD*)(a1 + 64);
  *((_DWORD*)v4 + 18) = *(_DWORD*)(a1 + 72);
  v4[10] = *(_QWORD*)(a1 + 80);
  *((_BYTE*)v4 + 88) = *(_BYTE*)(a1 + 88);
  return v4;
}

_QWORD* game_evt_demo_Seq_ChangeMap_lambda0_CloneInto(_QWORD* result,
                                                      __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v3 = result;
  *(_QWORD*)a2 = GameData_20133a0;
  *(_QWORD*)(a2 + 8) = result[1];
  if ((result[2] & 1) != 0) {
    result =
        (_QWORD*)fw_text_String_CopyTerminated(a2 + 16, result[4], result[3]);
  }
  else {
    v4 = result[2];
    v5 = result[4];
    *(_QWORD*)(a2 + 24) = result[3];
    *(_QWORD*)(a2 + 32) = v5;
    *(_QWORD*)(a2 + 16) = v4;
  }
  if ((v3[5] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(a2 + 40, v3[7], v3[6]);
  }
  else {
    v6 = v3[5];
    v7 = v3[7];
    *(_QWORD*)(a2 + 48) = v3[6];
    *(_QWORD*)(a2 + 56) = v7;
    *(_QWORD*)(a2 + 40) = v6;
  }
  *(_WORD*)(a2 + 64) = *((_WORD*)v3 + 32);
  *(_WORD*)(a2 + 66) = *((_WORD*)v3 + 33);
  *(_WORD*)(a2 + 68) = *((_WORD*)v3 + 34);
  *(_WORD*)(a2 + 70) = *((_WORD*)v3 + 35);
  *(_WORD*)(a2 + 72) = *((_WORD*)v3 + 36);
  *(_WORD*)(a2 + 74) = *((_WORD*)v3 + 37);
  v8 = v3[10];
  *(_BYTE*)(a2 + 88) = *((_BYTE*)v3 + 88);
  *(_QWORD*)(a2 + 80) = v8;
  return result;
}

__int64 game_evt_demo_Seq_ChangeMap_lambda0_Destroy(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((*(_BYTE*)(result + 40) & 1) != 0) {
    v1 = *(_QWORD*)(result + 56);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      result = v2;
    }
  }
  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    v4 = *(_QWORD*)(result + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

_QWORD* game_evt_demo_Seq_ChangeMap_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  _QWORD* result;
  _QWORD v13[3];
  _QWORD v15[3];

  v1 = *(_QWORD*)(a1 + 8);
  v3 = Seq_114cda0_alt2(v1, *(_QWORD*)(a1 + 80), (__int16*)(a1 + 64),
                        *(_BYTE*)(a1 + 88));
  GameRoutine_f41c80(v3);
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    fw_text_String_CopyTerminated(v15, *(_QWORD*)(a1 + 32),
                                  *(_QWORD*)(a1 + 24));
  }
  else {
    v4 = *(_QWORD*)(a1 + 24);
    v5 = *(_QWORD*)(a1 + 32);
    v15[0] = *(_QWORD*)(a1 + 16);
    v15[1] = v4;
    v15[2] = v5;
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(v13, *(_QWORD*)(a1 + 56),
                                  *(_QWORD*)(a1 + 48));
  }
  else {
    v6 = *(_QWORD*)(a1 + 48);
    v7 = *(_QWORD*)(a1 + 56);
    v13[0] = *(_QWORD*)(a1 + 40);
    v13[1] = v6;
    v13[2] = v7;
  }
  GameRoutine_114a040(v1, (char*)v15, v13);
  if ((v13[0] & 1) != 0 && v13[2] != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  v13[2]);
  }
  if ((v15[0] & 1) != 0 && v15[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v15[2]);
  }
  Seq_114d0d0_alt1(v1, 0, v8);
  if (*(_QWORD*)(*(_QWORD*)(a1 + 80) + 96LL) != 0) {
    v11 = *(char**)(*(_QWORD*)(a1 + 80) + 96LL);
  }
  else {
    v11 = &GameData_1a9f09e;
  }
  GameRoutine_60a020(v1 + 376, v11);
  result = GameRoutine_114a9c0(v1);
  *(_DWORD*)(v1 + 416) = *(unsigned __int8*)(*(_QWORD*)(a1 + 80) + 104LL);
  return result;
}

__int64 game_evt_demo_Seq_ChangeMap_lambda1_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)result = GameData_2013420;
  if ((*(_BYTE*)(result + 40) & 1) != 0) {
    v1 = *(_QWORD*)(result + 56);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      result = v2;
    }
  }
  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    v4 = *(_QWORD*)(result + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64 game_evt_demo_Seq_ChangeMap_lambda1_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = GameData_2013420;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7, a1);
}

_QWORD* game_evt_demo_Seq_ChangeMap_lambda1_Clone(__int64 a1)
{
  _QWORD* v2;
  char v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  v3 = *(_BYTE*)(a1 + 16);
  v4 = v2;
  v5 = *(_QWORD*)(a1 + 8);
  *v2 = GameData_2013420;
  v2[1] = v5;
  if ((v3 & 1) != 0) {
    fw_text_String_CopyTerminated(v2 + 2, *(_QWORD*)(a1 + 32),
                                  *(_QWORD*)(a1 + 24));
  }
  else {
    v6 = *(_QWORD*)(a1 + 24);
    v7 = *(_QWORD*)(a1 + 32);
    v2[2] = *(_QWORD*)(a1 + 16);
    v2[3] = v6;
    v2[4] = v7;
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(v4 + 5, *(_QWORD*)(a1 + 56),
                                  *(_QWORD*)(a1 + 48));
  }
  else {
    v8 = *(_QWORD*)(a1 + 48);
    v9 = *(_QWORD*)(a1 + 56);
    v4[5] = *(_QWORD*)(a1 + 40);
    v4[6] = v8;
    v4[7] = v9;
  }
  v4[8] = *(_QWORD*)(a1 + 64);
  *((_DWORD*)v4 + 18) = *(_DWORD*)(a1 + 72);
  v4[10] = *(_QWORD*)(a1 + 80);
  *((_BYTE*)v4 + 88) = *(_BYTE*)(a1 + 88);
  return v4;
}

_QWORD* game_evt_demo_Seq_ChangeMap_lambda1_CloneInto(_QWORD* result,
                                                      __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v3 = result;
  *(_QWORD*)a2 = GameData_2013420;
  *(_QWORD*)(a2 + 8) = result[1];
  if ((result[2] & 1) != 0) {
    result =
        (_QWORD*)fw_text_String_CopyTerminated(a2 + 16, result[4], result[3]);
  }
  else {
    v4 = result[2];
    v5 = result[4];
    *(_QWORD*)(a2 + 24) = result[3];
    *(_QWORD*)(a2 + 32) = v5;
    *(_QWORD*)(a2 + 16) = v4;
  }
  if ((v3[5] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(a2 + 40, v3[7], v3[6]);
  }
  else {
    v6 = v3[5];
    v7 = v3[7];
    *(_QWORD*)(a2 + 48) = v3[6];
    *(_QWORD*)(a2 + 56) = v7;
    *(_QWORD*)(a2 + 40) = v6;
  }
  *(_WORD*)(a2 + 64) = *((_WORD*)v3 + 32);
  *(_WORD*)(a2 + 66) = *((_WORD*)v3 + 33);
  *(_WORD*)(a2 + 68) = *((_WORD*)v3 + 34);
  *(_WORD*)(a2 + 70) = *((_WORD*)v3 + 35);
  *(_WORD*)(a2 + 72) = *((_WORD*)v3 + 36);
  *(_WORD*)(a2 + 74) = *((_WORD*)v3 + 37);
  v8 = v3[10];
  *(_BYTE*)(a2 + 88) = *((_BYTE*)v3 + 88);
  *(_QWORD*)(a2 + 80) = v8;
  return result;
}

__int64 game_evt_demo_Seq_ChangeMap_lambda1_Destroy(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((*(_BYTE*)(result + 40) & 1) != 0) {
    v1 = *(_QWORD*)(result + 56);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      result = v2;
    }
  }
  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    v4 = *(_QWORD*)(result + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

void game_evt_demo_Seq_ChangeMap_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  const char* v11;
  _QWORD* v12;
  __int64 v13;
  const char* v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  const char* v25;
  const char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  const char* v38;
  _QWORD* v39;
  __int64 v40;
  int v41;
  const char* v42;
  _QWORD* v43;
  __int64 v44;
  const char* v45;
  __int64 v46;
  int v47;
  struct {
    _WORD v48[8];
    __int64 v49;
    int v50;
  } v48_;
  int v51;
  struct {
    _WORD v52[8];
    __int64 v53;
    int v54;
  } v52_;
  struct {
    __int64 v55[2];
    __int64 v56;
  } v55_;
  struct {
    __int64 v57[2];
    __int64 v58;
  } v57_;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 272) = 1;
  Seq_114cda0(v1, *(_QWORD*)(a1 + 80), (__int16*)(a1 + 64), *(_BYTE*)(a1 + 88));
  GameHr_f41c80();
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v57_.v57, *(_QWORD*)(a1 + 32),
                                       *(_QWORD*)(a1 + 24));
  }
  else {
    v3 = *(_QWORD*)(a1 + 24);
    v4 = *(_QWORD*)(a1 + 32);
    v57_.v57[0] = *(_QWORD*)(a1 + 16);
    v57_.v57[1] = v3;
    v57_.v58 = v4;
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v55_.v55, *(_QWORD*)(a1 + 56),
                                       *(_QWORD*)(a1 + 48));
  }
  else {
    v5 = *(_QWORD*)(a1 + 48);
    v6 = *(_QWORD*)(a1 + 56);
    v55_.v55[0] = *(_QWORD*)(a1 + 40);
    v55_.v55[1] = v5;
    v55_.v56 = v6;
  }
  GameRoutine_114a040_alt2(v1, (char*)v57_.v57, (__int64)v55_.v55);
  if ((v55_.v55[0] & 1) != 0 && v55_.v56 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v55_.v56);
  }
  if ((v57_.v57[0] & 1) != 0 && v57_.v58 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v57_.v58);
  }
  Seq_114d0d0(v1, 0);
  v10 = *(_BYTE**)(*(_QWORD*)(a1 + 80) + 56LL);
  if (v10 != nullptr) {
    if (*v10 != 0) {
      v11 = *(const char**)(*(_QWORD*)(a1 + 80) + 56LL);
    }
    else {
      v11 = "Normal";
    }
  }
  else {
    v11 = "Normal";
  }
  v52_.v52[0] = 0;
  v52_.v54 = 1114636288;
  v51 = 2;
  GameRoutine_60a020_alt2((__int64)v52_.v52, v11);
  v52_.v54 = 0;
  v12 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
  if (v12 != nullptr) {
    wld_map_c218a0(v12, (__int64)&v51);
  }
  v13 = *(_QWORD*)(a1 + 80);
  v14 = *(const char**)(v13 + 56);
  if (v14 != nullptr) {
    v15 = strcmp_alt1(*(const char**)(v13 + 56), "Rain");
    if (v15 != 0) {
      if (strcmp_alt1(v14, "Fog") != 0) {
        if (strcmp_alt1(v14, "Sandstorm") != 0) {
          goto LABEL_37;
        }
        v16 = 3;
      }
      else {
        v16 = 2;
      }
    }
    else {
      v16 = 1;
    }
    v17 = GameData_21c6978;
    v18 = *(_QWORD*)(GameData_21c6978 + 32);
    if (v18 != *(_QWORD*)(GameData_21c6978 + 24)) {
      v19 = *(_QWORD*)(v18 - 8);
      if (v19 != 0) {
        v20 = *(_QWORD*)(v19 + 40);
        if (v20 != 0) {
          GameRoutine_b86fb0_alt1(v20, v16, 0x1.0000000000000p+0f);
          Manager_c44560(
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v17 + 32) - 8LL) + 56LL), v16);
          v21 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v17 + 32) - 8LL) + 64LL);
          if (v21 != 0) {
            v22 = *(_QWORD*)(*(_QWORD*)(v21 + 96) + 296LL);
            if (v22 != 0) {
              WindLoader_c72b30_alt1(v22, v15 != 0);
            }
          }
        }
      }
    }
  }
LABEL_37:
  v23 = game_9a28e0(66);
  if (game_GameModeData_instance_ != 0) {
    v24 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v23);
    if (v24 != 0 && *(_DWORD*)(v24 + 32) != 0) {
      v25 = *(const char**)(*(_QWORD*)(a1 + 80) + 32LL);
      if (v25 == nullptr ||
          strcmp_alt1(v25, "Map/Hub/Hub_200/Hub_200_A1") != 0) {
        v26 = (*(_BYTE*)(v1 + 160) & 1) != 0 ? *(const char**)(v1 + 176)
                                             : (const char*)(v1 + 161);
        if (strncmp_alt1(v26, "MID_SE_", 7u) != 0) {
          v27 = GameData_21c6978;
          v28 = *(_QWORD*)(GameData_21c6978 + 32);
          if (v28 != *(_QWORD*)(GameData_21c6978 + 24)) {
            v29 = *(_QWORD*)(v28 - 8);
            if (v29 != 0) {
              v30 = *(_QWORD*)(v29 + 40);
              if (v30 != 0) {
                GameRoutine_b86fb0_alt1(v30, 4, 0x1.0000000000000p+0f);
                Manager_c44560(
                    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v27 + 32) - 8LL) + 56LL),
                    4);
                v31 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v27 + 32) - 8LL) + 64LL);
                if (v31 != 0) {
                  v32 = *(_QWORD*)(*(_QWORD*)(v31 + 96) + 296LL);
                  if (v32 != 0) {
                    WindLoader_c72b30_alt1(v32, 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v33 = *(_QWORD*)(game_g_frame_clock + 13224);
  v34 = *(_QWORD*)(v33 + 48);
  v35 = *(_QWORD*)(v33 + 56);
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                              memory_order_relaxed);
    v36 = *(_QWORD*)(*(_QWORD*)(v34 + 8) + 120LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak_alt3(v35);
    }
  }
  else {
    v36 = *(_QWORD*)(*(_QWORD*)(v34 + 8) + 120LL);
  }
  *(_DWORD*)(v36 + 1756) = 0;
  *(_BYTE*)(v36 + 1760) = 1;
  v37 = *(_QWORD*)(a1 + 80);
  v38 = *(const char**)(v37 + 40);
  if (v38 != nullptr && *v38 != 0) {
    v48_.v48[0] = 0;
    v48_.v50 = 1114636288;
    v47 = 3;
    GameRoutine_60a020_alt2((__int64)v48_.v48, v38);
    v48_.v50 = 0;
    v39 =
        *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
    if (v39 != nullptr) {
      wld_map_c218a0(v39, (__int64)&v47);
    }
    if ((v48_.v48[0] & 1) != 0 && v48_.v49 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v48_.v49);
    }
    v37 = *(_QWORD*)(a1 + 80);
  }
  v41 = *(unsigned __int8*)(v37 + 105);
  v48_.v48[0] = 0;
  v48_.v50 = 1114636288;
  v47 = 4;
  if (v41 != 0) {
    v42 = "Sight";
  }
  else {
    v42 = "Normal";
  }
  GameRoutine_60a020_alt2((__int64)v48_.v48, v42);
  v48_.v50 = 0;
  v43 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
  if (v43 != nullptr) {
    wld_map_c218a0(v43, (__int64)&v47);
  }
  if ((v48_.v48[0] & 1) != 0 && v48_.v49 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v48_.v49);
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 80) + 96LL) != 0) {
    v45 = *(const char**)(*(_QWORD*)(a1 + 80) + 96LL);
  }
  else {
    v45 = &GameData_1a9f09e;
  }
  GameRoutine_60a020_alt2(v1 + 376, v45);
  GameRoutine_114a9c0(v1);
  *(_DWORD*)(v1 + 416) = *(unsigned __int8*)(*(_QWORD*)(a1 + 80) + 104LL);
  if ((v52_.v52[0] & 1) != 0 && v52_.v53 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v52_.v53);
  }
}

__attribute__((swiftcall)) void Seq_11536d0(PSEUDO_X8 x8_, __int64 a1,
                                            __int64* a2, _DWORD* a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 result;

  v4 = a1 + 16;
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *a4 = v9;
  a4[1] = v4;
  v10 = *a2;
  v11 = v9;
  a4[2] = 0;
  *v9 = 0;
  v9[1] = 0;
  v12 = strlen(v10);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v12);
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = fw_memory_HeapManager_Allocate(*v8, v15, 16, 0);
    v11[3] = v13;
    v11[4] = v14;
    v11[2] = v15 | 1;
    goto LABEL_9;
  }
  v14 = (__int64)v11 + 17;
  *((_BYTE*)v11 + 16) = 2 * v12;
  if (v12 != 0) {
  LABEL_9:
    memmove(v14, v10, v13);
  }
  *(_BYTE*)(v14 + v13) = 0;
  *((_DWORD*)v11 + 10) = *a3;
  *((_BYTE*)a4 + 16) = 1;
  v16 = *a4;
  v17 = *(unsigned __int8*)(v16 + 16);
  v18 = (v17 & 1) == 0;
  v19 = v17 >> 1;
  if (v18) {
    v20 = v16 + 17;
  }
  else {
    v20 = *(_QWORD*)(v16 + 32);
  }
  if (v18) {
    v21 = v19;
  }
  else {
    v21 = *(_QWORD*)(v16 + 24);
  }
  result = std___1___hash_memory(v20, v21);
  *(_QWORD*)(v16 + 8) = result;
  {
    result;
    return;
  }
}

__int64* Seq_1153800(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  _QWORD* v3;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  float v24;
  float v25;
  float v26;
  _BOOL8 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 primeEm;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;

  v2 = *(unsigned __int8*)(a2 + 16);
  v3 = (_QWORD*)a2;
  v5 = (v2 & 1) == 0;
  v6 = v2 >> 1;
  if (v5) {
    v7 = a2 + 17;
  }
  else {
    v7 = *(_QWORD*)(a2 + 32);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *(_QWORD*)(a2 + 24);
  }
  v9 = std___1___hash_memory(v7, v8);
  v3[1] = v9;
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    v11 = v10 - 1;
    v12 = v9;
    if ((v10 & (v10 - 1)) != 0) {
      v13 = v9;
      if (v9 >= v10) {
        v13 = v9 % v10;
      }
    }
    else {
      v13 = v11 & v9;
    }
    v14 = *(__int64***)(*(_QWORD*)a1 + 8 * v13);
    if (v14 != nullptr) {
      v15 = *v14;
      if (*v14 != nullptr) {
        if ((v10 & v11) == 0) {
          while (1) {
            v20 = v15[1];
            if (v20 == v12) {
              v21 = *((unsigned __int8*)v15 + 16);
              v22 = v15[3];
              if ((v21 & 1) == 0) {
                v22 = v21 >> 1;
              }
              if (v22 == v8) {
                v23 = (v21 & 1) != 0 ? (__int64*)v15[4]
                                     : (__int64*)((char*)v15 + 17);
                if ((unsigned int)memcmp(v23, v7, v8) == 0) {
                  return v15;
                }
              }
            }
            else if ((v20 & v11) != v13) {
              goto LABEL_40;
            }
            v15 = (__int64*)*v15;
            if (v15 == nullptr) {
              goto LABEL_40;
            }
          }
        }
        do {
          v16 = v15[1];
          if (v16 == v12) {
            v17 = *((unsigned __int8*)v15 + 16);
            v18 = v15[3];
            if ((v17 & 1) == 0) {
              v18 = v17 >> 1;
            }
            if (v18 == v8) {
              v19 = (v17 & 1) != 0 ? (__int64*)v15[4]
                                   : (__int64*)((char*)v15 + 17);
              if ((unsigned int)memcmp(v19, v7, v8) == 0) {
                return v15;
              }
            }
          }
          else {
            if (v16 >= v10) {
              v16 %= v10;
            }
            if (v16 != v13) {
              break;
            }
          }
          v15 = (__int64*)*v15;
        } while (v15 != nullptr);
      }
    }
  }
LABEL_40:
  v24 = *(float*)(a1 + 32);
  v25 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v10 == 0 || (float)(v24 * (float)v10) < v25) {
    v26 = v25 / v24;
    v27 = true;
    if (v10 >= 3) {
      v27 = (v10 & (v10 - 1)) != 0;
    }
    v28 = v27 | (2 * v10);
    v29 = vcvtps_u64_f32(v26);
    if (v28 <= v29) {
      v30 = v29;
    }
    else {
      v30 = v28;
    }
    if (v30 == 1) {
      v30 = 2;
    }
    else if ((v30 & (v30 - 1)) != 0) {
      primeEm = std___1___next_prime(v30);
      v10 = *(_QWORD*)(a1 + 8);
      v30 = primeEm;
    }
    if (v30 > v10) {
      goto LABEL_52;
    }
    if (v30 < v10) {
      v32 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
        v32 = std___1___next_prime(v32);
      }
      else {
        v33 = 1LL << (-(char)__clz(v32 - 1) & 63);
        if (v32 >= 2) {
          v32 = v33;
        }
      }
      if (v30 <= v32) {
        v30 = v32;
      }
      if (v30 < v10) {
      LABEL_52:
        GameRoutine_68cb20((__int64*)a1, v30);
      }
    }
  }
  v34 = *(_QWORD*)(a1 + 8);
  v35 = v3[1];
  v36 = v34 - 1;
  if ((v34 & (v34 - 1)) != 0) {
    if (v35 >= v34) {
      v35 %= v34;
    }
  }
  else {
    v35 &= v36;
  }
  v37 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v35);
  if (v37 != nullptr) {
    *v3 = *v37;
    *v37 = v3;
  }
  else {
    *v3 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v3;
    *(_QWORD*)(*(_QWORD*)a1 + 8 * v35) = a1 + 16;
    if (*v3 != 0) {
      v38 = *(_QWORD*)(*v3 + 8LL);
      if ((v34 & v36) != 0) {
        if (v38 >= v34) {
          v38 %= v34;
        }
      }
      else {
        v38 &= v36;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v3;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v3;
}

#pragma GCC visibility pop
