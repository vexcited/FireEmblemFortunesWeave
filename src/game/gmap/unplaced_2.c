#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_152dfa0(_QWORD*, __int64*);
_QWORD* Situation_767300(_QWORD*, _QWORD*);
_QWORD* Troop_133e4e0(__int64);
__attribute__((swiftcall)) void GameRoutine_134b980(PSEUDO_X8,
                                                    __int64(__fastcall*)());
__attribute__((swiftcall)) void HonorFile_9c7620(PSEUDO_X8, unsigned __int16*);
__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_gmap_Spot_GetCaravans(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_gmap_Spot_GetEnemies(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
snd_playAt_ff5f0_alt1(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                      _QWORD, double, float) __asm__("snd_playAt_ff5f0");
__int64** game_8af240(__int64** result, __int64**);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
__int64* game_821090(int);
__int64 GameRoutine_1010220(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a10d0_alt1(_QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("GameRoutine_14a10d0");
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_1656a50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1656a90(_QWORD);
__int64 GameRoutine_176b120(__int64, __int64);
__int64 GameRoutine_ae0560();
__int64 Impl_13261c0(__int64);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562ea0(_QWORD, _QWORD);
__int64 LayoutAccessor_1563380(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
__int64 Manager_bc6460_alt1(_QWORD, _QWORD, _QWORD) __asm__("Manager_bc6460");
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             unsigned __int8);
__int64 SpotAttachmentFort_151c7c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 TroopMgr_13463f0(__int64 result, long double);
__int64 TroopMgr_134d2e0(__int64);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_809dc0(_QWORD, _QWORD, float);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GameVariableTable_Find_alt1(_QWORD, _QWORD) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(__int64 result);
__int64 game_HashString32(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_gmap_133de90(__int64 result, char, __n128, long double);
__int64 game_gmap_1340560(_QWORD, _QWORD);
__int64 game_gmap_1655e80(__int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_playAt_ff5f0(__int64, __int64, __int64, __int64, unsigned int,
                         unsigned int, int, float, float);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__n128 GameRoutine_17b8f40(__int64, char);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__n128 snd_Fade_Fade_10c830_alt1(_QWORD,
                                 double) __asm__("snd_Fade_Fade_10c830");
__n128 std___1___shared_weak_count___release_weak();
bool GameRoutine_995200(__int64);
bool game_8ae640(__int64*, __int64, char);
bool game_gmap_SpotMgr_CalcExcludedDisposSpot(__int64 (***)());
bool game_gmap_Spot_CanPopTroop(__int64, char);
char** GameRoutine_888970(char** result, __int64, __int64, unsigned __int64);
extern _UNKNOWN* GameData_1adf7b0;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1a86fe3;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1ac4a2b;
extern _UNKNOWN GameData_1ad44ee;
extern _UNKNOWN GameData_1ade186;
extern _UNKNOWN GameData_1aeb41e;
extern _UNKNOWN GameData_1aeefcb;
extern _UNKNOWN GameData_1af2c37;
extern _UNKNOWN GameData_1af6cc1;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_21ca3e8;
extern _UNKNOWN GameData_21ca3ec;
extern _UNKNOWN GameData_2255da0;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a83390;
extern __int128 GameData_1a83910;
extern __int64 (*GameData_202c598[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d728[2];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d750;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c96f8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9ef0;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21f1668;
extern __int64 GameData_2255d30[];
extern __int64 GameData_2255d38;
extern __int64 GameData_2255d40;
extern __int64 GameData_2255d48;
extern __int64 GameData_2255d50;
extern __int64 GameData_2255d58;
extern __int64 GameData_2255d60;
extern __int64 GameData_2255d68;
extern __int64 GameData_2255d70;
extern __int64 GameData_2255d78;
extern __int64 GameData_2255d80;
extern __int64 GameData_2255d88;
extern __int64 GameData_2255d90;
extern __int64 GameData_2255d98;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_random;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern char GameData_1a9f09e;
extern unsigned int GameData_1bdb634[7];
float LayoutAccessor_15637c0(_QWORD, _QWORD, _QWORD);
unsigned int* TroopMgr_134c680();
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void GameRoutine_152dd00(__int64*, unsigned __int64);
void LayoutAccessor_155e830(__int64*, char);
void LayoutAccessor_1567000(__int64, char);
void __attribute__((noreturn)) GameRoutine_14bec90();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_8875e0();
void game_19a0e60(__int64);
void snd_Fade_Fade_10c830(__int64, float);
void game_gmap_152c5a0(__int64 a1);
__int64 game_gmap_152cb00(__int64 a1);
void game_gmap_152cc00(__int64 a1, __n128 a2);
_QWORD* game_gmap_152d9e0(float* a1, __int64* a2, __int64** a3);
_QWORD* game_gmap_152e0e0(float* a1, __int64* a2, __int64** a3);
__int64 game_gmap_1535b50(__int64 result);
__int64 game_gmap_1536480(__int64 result);
__int64 game_gmap_1536600(__int64 result);
__int64 game_gmap_1536730(__int64 a1);
__int64 game_gmap_1536e70(int a1);
__n64 game_gmap_1540e50(__int64** a1, __int128* a2, __int64* a3, __int128* a4,
                        float a5, float a6, float a7);
void game_gmap_1541de0(_QWORD* a1);
void game_gmap_15420c0(__int64 a1);
__int64 game_gmap_1544280(__int64** a1);
void game_gmap_154e7f0();
__n128 game_gmap_154f6c0(__int64 a1, __n128 result);
__int64 game_gmap_1550220(__int64 result);
void game_gmap_15506e0(__int64 a1, __n128 a2, long double a3);
__int64 game_gmap_1656640_alt1(__int64 result,
                               long double a2) __asm__("game_gmap_1656640");
__attribute__((swiftcall)) void game_gmap_165d4a0(PSEUDO_X8 x8_, __int64 a1);
__int64 GmapUIDef_1654300(__int64 result, __int64, char);
__int64 LayoutAccessor_1562f00(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2075d48[])();
extern __int64 (*GameData_2075dc8[])();
extern __int64* GameData_2130e70;
extern __int64 GameData_21f1658;
long double LayoutAccessor_15638b0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64* Manager_bc6460_alt2(_QWORD*, __int64, char) __asm__("Manager_bc6460");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_1656a50_alt1(__int64 result, __int64,
                                 char) __asm__("GameRoutine_1656a50");
__int64 GameRoutine_1656a90_alt1(__int64) __asm__("GameRoutine_1656a90");
__int64
LayoutAccessor_1562ea0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_1562ea0");
__int64 LayoutAccessor_1562f00_alt1(__int64 result, const char*,
                                    float) __asm__("LayoutAccessor_1562f00");
__int64 LayoutAccessor_1563030_alt1(__int64 result, const char*,
                                    char) __asm__("LayoutAccessor_1563030");
__int64 LayoutAccessor_15636c0_alt1(__int64 result, const char*, char,
                                    float) __asm__("LayoutAccessor_15636c0");
__int64 game_gameui_control_GmapTroopInfo_SetInfoPlayerOther(__int64, __int64,
                                                             char);
__int64 game_gmap_1340560_alt1(__int64 result,
                               char) __asm__("game_gmap_1340560");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool LayoutAccessor_1563380_alt1(__int64*, const char*,
                                 char) __asm__("LayoutAccessor_1563380");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
float LayoutAccessor_15637c0_alt1(__int64*, const char*,
                                  char) __asm__("LayoutAccessor_15637c0");
float LayoutAccessor_15638b0_alt1(__int64*, const char*,
                                  char) __asm__("LayoutAccessor_15638b0");
unsigned __int64
GameRoutine_1130770_alt1(__int64, const char*,
                         __int64*) __asm__("GameRoutine_1130770");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 game_gmap_1656640(__int64 result, float a2);

void game_gmap_152c5a0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 (**v8)();
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _WORD* v14;
  _WORD* v15;
  _WORD* v16;
  __int64 (**v17)();
  char v18;
  __int64 v19;
  _WORD* v20;
  _WORD* v21;
  char v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64* v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  struct {
    __int64 (**v66)();
    __int64 (**v67)();
    __int64 v68;
  } v66_;
  __int64* v69;

  v66_.v67 = (__int64 (**)(void))&GameData_1abbb2b;
  v66_.v66 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abbb2b);
  if (game_GameModeData_instance_ == 0 ||
      (v2 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v66_.v66)) == 0 ||
      *(_DWORD*)(v2 + 32) == 0) {
    v66_.v67 = nullptr;
    v66_.v68 = 0;
    v66_.v66 = nullptr;
    game_gmap_SpotMgr_CalcExcludedDisposSpot(&v66_.v66);
    v5 = *(_QWORD*)(GameData_21c9700 + 8);
    v7 = *(__int64**)(v5 + 48);
    v6 = *(__int64**)(v5 + 56);
    if (v7 == v6) {
    LABEL_94:
      if (v66_.v66 != nullptr) {
        v66_.v67 = v66_.v66;
        v62 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v62 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v62);
      }
      return;
    }
    v64 = *(__int64**)(v5 + 56);
    while (1) {
      v9 = *v7;
      if (!game_gmap_Spot_CanPopTroop(*v7, 0)) {
        goto LABEL_11;
      }
      v8 = v66_.v66;
      if (v66_.v66 != v66_.v67) {
        v10 = (char*)v66_.v67 - (char*)v66_.v66 - 8;
        if ((~(_BYTE)v10 & 0x18) != 0) {
          v11 = ((unsigned __int8)((unsigned int)v10 >> 3) + 1) & 3;
          while (*v8 != (__int64 (*)())v9) {
            ++v8;
            if (--v11 == 0) {
              goto LABEL_18;
            }
          }
        }
        else {
        LABEL_18:
          if (v10 < 0x18) {
            goto LABEL_19;
          }
          v8 += 2;
          while (1) {
            if (*(v8 - 2) == (__int64 (*)())v9) {
              v8 -= 2;
              goto LABEL_10;
            }
            if (*(v8 - 1) == (__int64 (*)())v9) {
              --v8;
              goto LABEL_10;
            }
            if (*v8 == (__int64 (*)())v9) {
              goto LABEL_10;
            }
            if (v8[1] == (__int64 (*)())v9) {
              break;
            }
            v17 = v8 + 2;
            v8 += 4;
            if (v17 == v66_.v67) {
              goto LABEL_19;
            }
          }
          ++v8;
        }
      }
    LABEL_10:
      if (v8 != v66_.v67) {
        goto LABEL_11;
      }
    LABEL_19:
      v12 = *(_QWORD*)(v9 + 120);
      v13 = game_GameModeData_instance_;
      if (v12 == 0) {
        goto LABEL_65;
      }
      if (game_GameModeData_instance_ != 0) {
        v14 = (_WORD*)(v12 + 224);
        v15 = (_WORD*)(v12 + 208);
        if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          v16 = v14;
        }
        else {
          v16 = v15;
        }
        if (*v16 != 0) {
          goto LABEL_44;
        }
      }
      else if (*(_WORD*)(v12 + 208) != 0) {
        goto LABEL_44;
      }
      v18 = Impl_13261c0(v9);
      v13 = game_GameModeData_instance_;
      if (v18 == 4) {
        goto LABEL_65;
      }
      v19 = *(_QWORD*)(v9 + 136);
      if (v19 == 0) {
        goto LABEL_65;
      }
      if (game_GameModeData_instance_ != 0) {
        v20 = (_WORD*)(v19 + 96);
        v21 = (_WORD*)(v19 + 80);
        if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          v21 = v20;
        }
        if (*v21 == 0) {
          goto LABEL_65;
        }
      }
      else if (*(_WORD*)(v19 + 80) == 0) {
        goto LABEL_65;
      }
    LABEL_44:
      v22 = Impl_13261c0(v9);
      v23 = *(_QWORD*)(v9 + 136);
      v69 = &v65;
      if (v22 == 4) {
        v24 = 0;
      }
      else {
        v24 = v23;
      }
      v65 = v24;
      v25 = game_gmap_152d9e0((float*)(a1 + 208), &v65, &v69);
      v27 = (__int64*)v25[4];
      v26 = v25[5];
      v28 = v25;
      if ((unsigned __int64)v27 >= v26) {
        v30 = v25[3];
        v31 = (char*)v27 - v30;
        v32 = ((__int64)v27 - v30) >> 3;
        v33 = v32 + 1;
        if ((unsigned __int64)(v32 + 1) >> 61 != 0) {
          goto LABEL_109;
        }
        v34 = v26 - v30;
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
            goto LABEL_110;
          }
          v36 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35, 16, 0);
        }
        else {
          v36 = 0;
        }
        v37 = v36 + 8 * v35;
        v38 = (char*)v27 - v30;
        v39 = (__int64)&v31[v36 + -8 * v32];
        *(_QWORD*)&v31[v36] = v9;
        v29 = (__int64)&v31[v36 + 8];
        memcpy(v39, v30, v38);
        v28[3] = v39;
        v28[4] = v29;
        v28[5] = v37;
        if (v30 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v40);
        }
        v6 = v64;
      }
      else {
        *v27 = v9;
        v29 = (__int64)(v27 + 1);
      }
      v13 = game_GameModeData_instance_;
      v28[4] = v29;
    LABEL_65:
      if (v13 != 0 && *(_DWORD*)(v13 + 60) == 1) {
        v41 = *(_QWORD*)(v9 + 120);
        if (v41 != 0 && (*(_WORD*)(v41 + 240) != 0 ||
                         (unsigned __int8)Impl_13261c0(v9) != 4 &&
                             (v50 = *(_QWORD*)(v9 + 136)) != 0 &&
                             *(_WORD*)(v50 + 112) != 0)) {
          v42 = Impl_13261c0(v9);
          v43 = *(_QWORD*)(v9 + 136);
          v69 = &v65;
          if (v42 == 4) {
            v44 = 0;
          }
          else {
            v44 = v43;
          }
          v65 = v44;
          v45 = game_gmap_152d9e0((float*)(a1 + 248), &v65, &v69);
          v47 = (__int64*)v45[4];
          v46 = v45[5];
          v48 = v45;
          if ((unsigned __int64)v47 >= v46) {
            v51 = v45[3];
            v52 = (char*)v47 - v51;
            v53 = ((__int64)v47 - v51) >> 3;
            v54 = v53 + 1;
            if ((unsigned __int64)(v53 + 1) >> 61 != 0) {
            LABEL_109:
              GameRoutine_8875e0();
            }
            v55 = v46 - v51;
            if (v55 >> 2 > v54) {
              v54 = v55 >> 2;
            }
            if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF8LL) {
              v56 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v56 = v54;
            }
            if (v56 != 0) {
              if (v56 >> 61 != 0) {
              LABEL_110:
                GameRoutine_60a210();
              }
              v57 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v56, 16, 0);
            }
            else {
              v57 = 0;
            }
            v58 = v57 + 8 * v56;
            v59 = (char*)v47 - v51;
            v60 = (__int64)&v52[v57 + -8 * v53];
            *(_QWORD*)&v52[v57] = v9;
            v49 = (__int64)&v52[v57 + 8];
            memcpy(v60, v51, v59);
            v48[3] = v60;
            v48[4] = v49;
            v48[5] = v58;
            if (v51 != 0) {
              v61 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v61 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
            }
            v6 = v64;
          }
          else {
            *v47 = v9;
            v49 = (__int64)(v47 + 1);
          }
          v48[4] = v49;
        }
      }
    LABEL_11:
      if (++v7 == v6) {
        goto LABEL_94;
      }
    }
  }
  v3 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (v3 == (_QWORD*)(a1 + 160)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_101;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_101:
  v63 = *(_QWORD*)(a1 + 8);
  if (v63 != 0) {
    while (1) {
      if (*(_BYTE*)v63 == 2) {
        if (*(_DWORD*)(v63 + 32) == 3) {
          *(_QWORD*)(a1 + 16) = v63;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v63 == 0) {
        return;
      }
      v63 += 64;
    }
  }
}

__int64 game_gmap_152cb00(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64* v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  __int64 result;

  if (game_GameModeData_instance_ == 0) {
    v3 = 0;
    goto LABEL_9;
  }
  v2 = game_GameVariableTable_Find_alt1(
      *(_QWORD*)(game_GameModeData_instance_ + 48), a1 + 312);
  if (v2 == 0) {
    v3 = 0;
    v4 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      goto LABEL_7;
    }
  LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  v3 = *(_DWORD*)(v2 + 32);
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_9;
  }
LABEL_7:
  v5 = game_GameVariableTable_Find_alt1(*(_QWORD*)(v4 + 48), a1 + 328);
  if (v5 == 0) {
    goto LABEL_9;
  }
  v6 = *(_DWORD*)(v5 + 32);
LABEL_10:
  nn_os_LockMutex(&game_g_random_mutex);
  v7 = game_map_MapRandom_instance__ptr[0];
  v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8);
  v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) ^
        (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL))
         << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 4) = v8;
  v11 = (v10 >> 8) ^ (v9 >> 19) ^ v10 ^ v9;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8) = v9;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 12) = v11;
  v12 = v11 & 0x7FFFFFFF;
  result = nn_os_UnlockMutex(&game_g_random_mutex);
  *(_DWORD*)(a1 + 304) = v12 % (v6 - v3 + 1) + v3;
  return result;
}

void game_gmap_152cc00(__int64 a1, __n128 a2)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* v3;
  char* v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64** v10;
  int v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE* v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  _QWORD* v44;
  _QWORD* v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  float* v52;
  _QWORD* v53;
  long double v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned int v57;
  int v58;
  __int64 v59;
  __n128 v60;
  _QWORD* v61;
  __int64 v62;
  __int64* v63;
  __int64* v64;
  unsigned __int64 v65;
  unsigned int v66;
  int v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v76;
  struct {
    __int64* v77;
    __int64* v78;
  } v77_;

  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(__int64**)(GameData_21c9ef0 + 64);
  v3 = *(__int64**)(GameData_21c9ef0 + 72);
  if (v2 == v3) {
    goto LABEL_62;
  }
  v74 = 0;
  v4 = nullptr;
  v5 = nullptr;
  v6 = 0;
  do {
    v7 = *v2;
    if (*v2 == 0 ||
        (v8 = *(_QWORD*)(GameData_21c96e8 + 8), v9 = *(__int64***)(v8 + 8),
         v10 = *(__int64***)(v8 + 16), v9 == v10)) {
      v11 = 0;
    }
    else {
      v11 = 0;
      do {
        v12 = *v9;
        if (((*v9)[68] & 0x200) != 0) {
          v13 = *v12;
          v14 = (unsigned __int8)Impl_13261c0(*v12) == 4
                    ? 0LL
                    : *(_QWORD*)(v13 + 136),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v14 == v7) {
            ++v11;
          }
        }
        ++v9;
      } while (v9 != v10);
    }
    v15 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v16 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      if (v16 == 1) {
        v17 = 176;
      LABEL_25:
        if (v11 >=
            *(unsigned __int8*)(*(_QWORD*)(v7 + v17) +
                                *(int*)(game_GameModeData_instance_ + 64) -
                                1LL)) {
          goto LABEL_5;
        }
        goto LABEL_26;
      }
      if (v16 == 3) {
        v17 = 192;
        goto LABEL_25;
      }
    }
    if (v11 >= 0) {
      goto LABEL_5;
    }
  LABEL_26:
    if (*(_BYTE*)(v7 + 165) != 0) {
      if ((v77_.v77 = (__int64*)v7,
           (v18 = GameRoutine_152dfa0((_QWORD*)(a1 + 208),
                                      (__int64*)&v77_.v77)) != nullptr) &&
              v18[4] != v18[3] ||
          ((v77_.v77 = (__int64*)v7, v15 == 0) || *(_DWORD*)(v15 + 60) != 3) &&
              (v19 = GameRoutine_152dfa0((_QWORD*)(a1 + 248),
                                         (__int64*)&v77_.v77)) != nullptr &&
              v19[4] != v19[3]) {
        if ((unsigned __int64)v5 < v6) {
          *v5++ = v7;
        }
        else {
          v20 = (char*)((char*)v5 - v4);
          v21 = ((char*)v5 - v4) >> 3;
          v22 = v21 + 1;
          if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
            GameRoutine_14bec90(),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          if ((__int64)(v6 - (_QWORD)v4) >> 2 > v22) {
            v22 = (__int64)(v6 - (_QWORD)v4) >> 2;
          }
          if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
            v23 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v23 = v22;
          }
          if (v23 != 0) {
            if (v23 >> 61 != 0) {
              GameRoutine_60a210(),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v24 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          else {
            v24 = 0;
          }
          v6 = v24 + 8 * v23;
          v25 = (char*)((char*)v5 - v4);
          v26 = (__int64)&v20[v24 + -8 * v21];
          *(_QWORD*)&v20[v24] = v7;
          v5 = (__int64*)&v20[v24 + 8];
          memcpy(v26, v4, v25),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v4 != nullptr) {
            v27 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v27 = 56;
            }
            a2 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v27),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          v4 = (char*)v26;
        }
        v74 += *(unsigned __int8*)(v7 + 165);
      }
    }
  LABEL_5:
    ++v2;
  } while (v2 != v3);
  if (v5 == (__int64*)v4) {
    v33 = 0;
    if (v4 != nullptr) {
      goto LABEL_55;
    }
  }
  else {
    nn_os_LockMutex(&game_g_random_mutex),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v28 = game_g_game_random ^ ((_DWORD)game_g_game_random << 11);
    game_g_game_random = *(__int64*)((char*)&game_g_game_random + 4);
    GameData_21ca3e8 = GameData_21ca3ec;
    GameData_21ca3ec ^= (v28 >> 8) ^ (GameData_21ca3ec >> 19) ^ v28;
    v29 = GameData_21ca3ec & 0x7FFFFFFF;
    a2 = nn_os_UnlockMutex_alt1(&game_g_random_mutex),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v30 = 0;
    v31 = v29 % v74;
    v32 = (__int64*)v4;
    while (1) {
      v34 = *v32++;
      v33 = v34;
      v30 += *(unsigned __int8*)(v34 + 165);
      if (v31 < v30) {
        break;
      }
      if (v32 == v5) {
        v33 = 0;
        break;
      }
    }
    if (v4 != nullptr) {
    LABEL_55:
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      a2 = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if (v33 == 0) {
  LABEL_62:
    v38 = a1;
    v39 = *(_QWORD**)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (v39 == (_QWORD*)(a1 + 160)) {
      v40 = 32;
    }
    else {
      if (v39 == nullptr) {
        goto LABEL_76;
      }
      v40 = 40;
    }
    (*(void (**)(void*))(*v39 + v40))(v39),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_76:
    v46 = *(_QWORD*)(a1 + 8);
    if (v46 != 0) {
      while (1) {
        if (*(_BYTE*)v46 == 2) {
          if (*(_DWORD*)(v46 + 32) == 3) {
          LABEL_122:
            *(_QWORD*)(v38 + 16) = v46;
            *(_WORD*)(v38 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v46 == 0) {
          return;
        }
        v46 += 64;
      }
    }
    return;
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v36 = a1;
    v37 = (_BYTE*)(a1 + 308);
    *(_BYTE*)(a1 + 308) = 1;
  LABEL_67:
    v77_.v77 = (__int64*)v33;
    v44 = GameRoutine_152dfa0((_QWORD*)(v36 + 208), (__int64*)&v77_.v77),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v44 != nullptr && v44[4] != v44[3]) {
      goto LABEL_103;
    }
    *v37 = 0;
    v77_.v77 = (__int64*)v33;
    if (game_GameModeData_instance_ == 0 ||
        *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
      v45 = (_QWORD*)(a1 + 248);
      goto LABEL_88;
    }
    goto LABEL_90;
  }
  nn_os_LockMutex(&game_g_random_mutex),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v41 = game_g_game_random ^ ((_DWORD)game_g_game_random << 11);
  game_g_game_random = *(__int64*)((char*)&game_g_game_random + 4);
  GameData_21ca3e8 = GameData_21ca3ec;
  GameData_21ca3ec ^= (v41 >> 8) ^ (GameData_21ca3ec >> 19) ^ v41;
  v42 = GameData_21ca3ec & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1(&game_g_random_mutex),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v37 = (_BYTE*)(a1 + 308);
  v43 = *(unsigned __int8*)(v33 + 160);
  *(_BYTE*)(a1 + 308) = v42 % 0x64 < v43;
  if (v42 % 0x64 < v43) {
    v36 = a1;
    goto LABEL_67;
  }
  v77_.v77 = (__int64*)v33;
  if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 ||
      (v47 = GameRoutine_152dfa0((_QWORD*)(a1 + 248), (__int64*)&v77_.v77)) ==
          nullptr ||
      v47[4] == v47[3]) {
    v77_.v77 = (__int64*)v33;
    *v37 = 1;
    v45 = (_QWORD*)(a1 + 208);
  LABEL_88:
    v48 = GameRoutine_152dfa0(v45, (__int64*)&v77_.v77),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v48 != nullptr && v48[4] != v48[3]) {
      goto LABEL_103;
    }
  LABEL_90:
    v49 = *(_QWORD**)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (v49 == (_QWORD*)(a1 + 160)) {
      v50 = 32;
    LABEL_94:
      (*(void (**)(__int64))(*v49 + v50))((__int64)v49),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else if (v49 != nullptr) {
      v50 = 40;
      goto LABEL_94;
    }
    v51 = *(_QWORD*)(a1 + 8);
    if (v51 != 0) {
      while (1) {
        if (*(_BYTE*)v51 == 2) {
          if (*(_DWORD*)(v51 + 32) == 3) {
            *(_QWORD*)(a1 + 16) = v51;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v51 == 0) {
          break;
        }
        v51 += 64;
      }
    }
  }
LABEL_103:
  v76 = v33;
  if (*v37 == 1) {
    v77_.v77 = &v76;
    v52 = (float*)(a1 + 208);
  }
  else {
    v77_.v77 = &v76;
    v52 = (float*)(a1 + 248);
  }
  v53 = game_gmap_152e0e0(v52, &v76, &v77_.v77),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v55 = v53[4] - v53[3];
  if (v55 == 0) {
    goto LABEL_110;
  }
  v56 = v55 >> 3;
  nn_os_LockMutex(&game_g_random_mutex),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v57 = game_g_game_random ^ ((_DWORD)game_g_game_random << 11);
  game_g_game_random = *(__int64*)((char*)&game_g_game_random + 4);
  GameData_21ca3e8 = GameData_21ca3ec;
  GameData_21ca3ec ^= (v57 >> 8) ^ (GameData_21ca3ec >> 19) ^ v57;
  v58 = GameData_21ca3ec & 0x7FFFFFFF;
  *(__n128*)&v54 = nn_os_UnlockMutex_alt1(&game_g_random_mutex),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v59 = *(_QWORD*)(v53[3] + 8LL * (unsigned int)(v58 % (int)v56));
  if (v59 == 0) {
  LABEL_110:
    v38 = a1;
    v61 = *(_QWORD**)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (v61 == (_QWORD*)(a1 + 160)) {
      v62 = 32;
    }
    else {
      if (v61 == nullptr) {
        goto LABEL_115;
      }
      v62 = 40;
    }
    (*(void (**)(void*))(*v61 + v62))(v61),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_115:
    v46 = *(_QWORD*)(a1 + 8);
    if (v46 != 0) {
      while (1) {
        if (*(_BYTE*)v46 == 2) {
          if (*(_DWORD*)(v46 + 32) == 3) {
            goto LABEL_122;
          }
        }
        else if (*(_BYTE*)v46 == 0) {
          return;
        }
        v46 += 64;
      }
    }
    return;
  }
  *(_QWORD*)(a1 + 288) = v59;
  if (*(_BYTE*)(a1 + 308) == 1) {
    game_gmap_Spot_GetEnemies((void*)(&v77_.v77), v59),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v60 =
        X8CALL_V0(__n128, game_gmap_Spot_GetCaravans((void*)(&v77_.v77), v59)),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v64 = v77_.v77;
  v63 = v77_.v78;
  if (v77_.v78 == v77_.v77) {
    if (v77_.v78 != nullptr) {
      v68 = v77_.v77;
      goto LABEL_128;
    }
    v69 = a1;
  }
  else {
    v65 = (unsigned __int64)((char*)v77_.v78 - (char*)v77_.v77) >> 3;
    nn_os_LockMutex(&game_g_random_mutex),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v66 = game_g_game_random ^ ((_DWORD)game_g_game_random << 11);
    game_g_game_random = *(__int64*)((char*)&game_g_game_random + 4);
    GameData_21ca3e8 = GameData_21ca3ec;
    GameData_21ca3ec ^= (v66 >> 8) ^ (GameData_21ca3ec >> 19) ^ v66;
    v67 = GameData_21ca3ec & 0x7FFFFFFF;
    nn_os_UnlockMutex_alt1(&game_g_random_mutex),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v68 = v77_.v77;
    v53 = (_QWORD*)v77_.v77[v67 % (int)v65];
  LABEL_128:
    v77_.v78 = v68;
    v69 = a1;
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    v60 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v70),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v63 != v64 && v53 != nullptr) {
      *(_QWORD*)(a1 + 296) = v53;
      return;
    }
  }
  v71 = *(_QWORD**)(v69 + 192);
  *(_QWORD*)(v69 + 152) = 0;
  *(_QWORD*)(v69 + 192) = 0;
  if (v71 == (_QWORD*)(v69 + 160)) {
    v72 = 32;
  LABEL_138:
    (*(void (**)(void*))(*v71 + v72))(v71),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else if (v71 != nullptr) {
    v72 = 40;
    goto LABEL_138;
  }
  v73 = *(_QWORD*)(v69 + 8);
  if (v73 != 0) {
    while (1) {
      if (*(_BYTE*)v73 == 2) {
        if (*(_DWORD*)(v73 + 32) == 3) {
          *(_QWORD*)(v69 + 16) = v73;
          *(_WORD*)(v69 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v73 == 0) {
        return;
      }
      v73 += 64;
    }
  }
}

_QWORD* game_gmap_152d9e0(float* a1, __int64* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD** v11;
  _QWORD* result;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 primeEm;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;

  v4 = *a2;
  v33 = *a2;
  v7 = std___1___hash_memory(&v33, 8);
  v8 = *((_QWORD*)a1 + 1);
  v9 = v7;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = v7;
      if (v7 >= v8) {
        v3 = v7 % v8;
      }
    }
    else {
      v3 = v10 & v7;
    }
    v11 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != nullptr) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = result[1];
            if (v14 == v9) {
              if (result[2] == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_22;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = result[1];
          if (v13 == v9) {
            if (result[2] == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_22:
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v15 = *a3;
  *result = 0;
  result[1] = v9;
  v16 = a1[8];
  v17 = *v15;
  result[4] = 0;
  result[5] = 0;
  result[2] = v17;
  result[3] = 0;
  v18 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v8 == 0 || (float)(v16 * (float)v8) < v18) {
    v19 = v18 / v16;
    v20 = true;
    if (v8 >= 3) {
      v20 = (v8 & (v8 - 1)) != 0;
    }
    v21 = v20 | (2 * v8);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      primeEm = v22;
    }
    else {
      primeEm = v21;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v24 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v24;
      v8 = *((_QWORD*)a1 + 1);
    }
    if (primeEm > v8) {
      goto LABEL_34;
    }
    if (primeEm < v8) {
      v26 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v28 = result;
        v26 = std___1___next_prime(v26);
        result = v28;
      }
      else {
        v27 = 1LL << -(char)__clz(v26 - 1);
        if (v26 >= 2) {
          v26 = v27;
        }
      }
      if (primeEm <= v26) {
        primeEm = v26;
      }
      if (primeEm < v8) {
      LABEL_34:
        v25 = result;
        GameRoutine_152dd00((__int64*)a1, primeEm);
        result = v25;
      }
    }
    v8 = *((_QWORD*)a1 + 1);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v29 = *(_QWORD*)a1;
  v30 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v30 != nullptr) {
    *result = *v30;
    *v30 = result;
  }
  else {
    v31 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *result = v31;
    *(_QWORD*)(v29 + 8 * v3) = a1 + 4;
    if (*result != 0) {
      v32 = *(_QWORD*)(*result + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v32 >= v8) {
          v32 %= v8;
        }
      }
      else {
        v32 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v32) = result;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

_QWORD* game_gmap_152e0e0(float* a1, __int64* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD** v11;
  _QWORD* result;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 primeEm;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;

  v4 = *a2;
  v33 = *a2;
  v7 = std___1___hash_memory(&v33, 8);
  v8 = *((_QWORD*)a1 + 1);
  v9 = v7;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = v7;
      if (v7 >= v8) {
        v3 = v7 % v8;
      }
    }
    else {
      v3 = v10 & v7;
    }
    v11 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != nullptr) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = result[1];
            if (v14 == v9) {
              if (result[2] == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v13 = result[1];
          if (v13 == v9) {
            if (result[2] == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_23:
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v15 = *a3;
  *result = 0;
  result[1] = v9;
  v16 = a1[8];
  v17 = *v15;
  result[4] = 0;
  result[5] = 0;
  result[2] = v17;
  result[3] = 0;
  v18 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v8 == 0 || (float)(v16 * (float)v8) < v18) {
    v19 = v18 / v16;
    v20 = true;
    if (v8 >= 3) {
      v20 = (v8 & (v8 - 1)) != 0;
    }
    v21 = v20 | (2 * v8);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      primeEm = v22;
    }
    else {
      primeEm = v21;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v24 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v24;
      v8 = *((_QWORD*)a1 + 1);
    }
    if (primeEm > v8) {
      goto LABEL_35;
    }
    if (primeEm < v8) {
      v26 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v28 = result;
        v26 = std___1___next_prime(v26);
        result = v28;
      }
      else {
        v27 = 1LL << -(char)__clz(v26 - 1);
        if (v26 >= 2) {
          v26 = v27;
        }
      }
      if (primeEm <= v26) {
        primeEm = v26;
      }
      if (primeEm < v8) {
      LABEL_35:
        v25 = result;
        GameRoutine_152dd00((__int64*)a1, primeEm);
        result = v25;
      }
    }
    v8 = *((_QWORD*)a1 + 1);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v29 = *(_QWORD*)a1;
  v30 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v30 != nullptr) {
    *result = *v30;
    *v30 = result;
  }
  else {
    v31 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *result = v31;
    *(_QWORD*)(v29 + 8 * v3) = a1 + 4;
    if (*result != 0) {
      v32 = *(_QWORD*)(*result + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v32 >= v8) {
          v32 %= v8;
        }
      }
      else {
        v32 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v32) = result;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

__int64 game_gmap_1535b50(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int128 v4;
  __int128 v5;

  if (*(_BYTE*)(result + 152) == 1) {
    v1 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v2 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v2 + 172) == *(float*)(v2 + 168) &&
          (v3 = v2 + 160,
           LANES128_OF(((__n128 (*)(unsigned __int64)) *
                        (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160))
                   .n128_f32[3] == 1.0f)) {
        if (*(float*)(v3 + 12) == *(float*)(v3 + 8)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v3 + 16LL))(v3);
        }
        else {
          v4 = *(_OWORD*)(v3 + 48);
        }
        v5 = v4;
        return game_809dc0(v1, &v5, 0.5f);
      }
      else {
        return game_809dc0(v1, GameData_212c960, 0.5f);
      }
    }
  }
  return result;
}

__int64 game_gmap_1536480(__int64 result)
{
  const char* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;

  v1 = *(const char**)(*(_QWORD*)(result + 168) + 32LL);
  if (v1 != nullptr && GameData_21ec7b8 == 0) {
    v3 = result;
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770_alt1(v4, v1, nullptr);
    v5 = *(_QWORD*)(v3 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v3 + 40);
    }
    *(_QWORD*)(v3 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = v3;
    *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt1("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
    if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  return result;
}

__int64 game_gmap_1536600(__int64 result)
{
  const char* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;

  v1 = *(const char**)(*(_QWORD*)(result + 168) + 40LL);
  if (v1 != nullptr && GameData_21ec7b8 == 0) {
    v3 = result;
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770_alt1(v4, v1, nullptr);
    v5 = *(_QWORD*)(v3 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v3 + 40);
    }
    *(_QWORD*)(v3 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = v3;
    *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt1("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
    if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  return result;
}

__int64 game_gmap_1536730(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  int v5;
  bool v6;
  __int64 v7;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v16[3];
  __int64* v17[3];

  if (game_GameModeData_instance_ != 0) {
    v2 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v3 = 114;
    if (v2 == 1) {
      v3 = 112;
    }
    if (*(_WORD*)(*(_QWORD*)(a1 + 168) + v3) != 0) {
      v4 = *(unsigned __int16*)(*(_QWORD*)(a1 + 168) + v3);
      v5 = (*(_DWORD*)(game_GameModeData_instance_ + 72) + v4) &
           ~((*(_DWORD*)(game_GameModeData_instance_ + 72) + v4) >> 31);
      if (v5 >= 9999999) {
        v5 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v5;
    }
    v6 = v2 == 1;
    v7 = 80;
    if (!v6) {
      v7 = 96;
    }
  }
  else {
    v7 = 96;
  }
  HonorFile_9c7620((void*)((__int64*)v16),
                   (unsigned __int16*)(*(_QWORD*)(a1 + 168) + v7));
  game_8af240(v17, v16);
  game_8ae640((__int64*)v17, 0, 0);
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v17[0] != nullptr) {
    v11 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v17[1] = v17[0];
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(v11 + v12);
  }
  if (v16[0] != nullptr) {
    v13 = *v10;
    v16[1] = v16[0];
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14);
  }
  return GameRoutine_176b120(a1, *(_QWORD*)(a1 + 168));
}

__int64 game_gmap_1536e70(int a1)
{
  __int64* v1;
  __int64 result;
  __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  int v6;
  struct {
    unsigned __int64 v7[2];
    char gap16_[28];
    int v8;
  } v7_;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    v1 = game_821090(GameData_1bdb634[a1]);
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v1);
      if (result != 0) {
        return *(_DWORD*)(result + 32) > 0;
      }
      return result;
    }
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2255da0,
                            memory_order_acquire) &
       1) == 0) {
    v7_.v8 = a1;
    v6 = __cxa_guard_acquire(&GameData_2255da0);
    a1 = v7_.v8;
    if (v6 != 0) {
      GameData_2255d38 = (__int64)&GameData_1af2c37;
      GameData_2255d30[0] = game_HashString((__int64)&GameData_1af2c37);
      GameData_2255d48 = (__int64)&GameData_1aeefcb;
      GameData_2255d40 = game_HashString((__int64)&GameData_1aeefcb);
      GameData_2255d58 = (__int64)&GameData_1ac4a2b;
      GameData_2255d50 = game_HashString((__int64)&GameData_1ac4a2b);
      GameData_2255d68 = (__int64)&GameData_1aeb41e;
      GameData_2255d60 = game_HashString((__int64)&GameData_1aeb41e);
      GameData_2255d78 = (__int64)&GameData_1ad44ee;
      GameData_2255d70 = game_HashString((__int64)&GameData_1ad44ee);
      GameData_2255d88 = (__int64)&GameData_1a86fe3;
      GameData_2255d80 = game_HashString((__int64)&GameData_1a86fe3);
      GameData_2255d98 = (__int64)&GameData_1af6cc1;
      GameData_2255d90 = game_HashString((__int64)&GameData_1af6cc1);
      __cxa_guard_release(&GameData_2255da0);
      a1 = v7_.v8;
    }
  }
  v3 = &GameData_2255d30[2 * a1];
  v5 = *v3;
  v4 = v3[1];
  v7_.v7[0] = v5;
  v7_.v7[1] = v4;
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v7_.v7);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__n64 game_gmap_1540e50(__int64** a1, __int128* a2, __int64* a3, __int128* a4,
                        float a5, float a6, float a7)
{
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  __int128 v13;
  __int128 v14;
  __int64 v15;
  int v16;
  int v17;
  float v18;
  float v19;
  float v20;
  __n64 result;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int128 v25;
  __int64 v26;
  int v27;
  __int128 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int128 v35;
  __int64 v36;
  __int128 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int128 v44;
  __int64 v45;
  int v46;
  __int128 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  __int64 v53;

  v7 = (float)(a5 * 0x1.1df46a0000000p-6f) +
       (float)(roundf((float)(a5 * 0x1.1df46a0000000p-6f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v7 <= 0x1.921fb60000000p+0f) {
    v9 = 1.0f;
    if (v7 >= -0x1.921fb60000000p+0f) {
      goto LABEL_6;
    }
    v8 = -0x1.921fb60000000p+1f;
  }
  else {
    v8 = 0x1.921fb60000000p+1f;
  }
  v7 = v8 - v7;
  v9 = -1.0f;
LABEL_6:
  v10 = v7 * v7;
  v11 =
      v7 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v7 *
                                                                                                    v7))) *
                                                                            (float)(v7 *
                                                                                    v7))) *
                                                         (float)(v7 * v7))) *
                                         (float)(v7 * v7))) *
                      (float)(v7 * v7)) +
              1.0f);
  v12 = **a1;
  v13 = *a2;
  v14 = *a4;
  v15 = *(_QWORD*)(v12 + 18736);
  v16 = *(_DWORD*)(v12 + 19200);
  v17 = *(_DWORD*)(v12 + 17280);
  v18 =
      v9 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v10)) *
                                                                            v10)) *
                                                         v10)) *
                                         v10)) *
                      v10) +
              1.0f);
  v19 = -a7;
  v20 = v11 + v18;
  LANES64(result).n64_f32[0] = v18 - v11;
  v22 = *a3;
  *(_DWORD*)(v12 + 19200) = v16 + 1;
  if (v16 <= 262142) {
    *(float*)&v13 = *(float*)&v13 + (float)(v19 * v20);
    v23 = *(_QWORD*)(v12 + 19136) + 40LL * (v16 + 1);
    *((float*)&v13 + 1) = a6 + *((float*)&v13 + 1);
    *(_QWORD*)(v23 + 12) = v22;
    *(_DWORD*)(v23 + 20) = 0;
    *(_OWORD*)(v23 + 24) = v14;
    *(float*)(v23 + 8) =
        *((float*)&v13 + 2) + (float)(v19 * LANES64(result).n64_f32[0]);
    *(_QWORD*)v23 = v13;
    v24 = v15 + 1440LL * v17 + 4LL * *(int*)(v15 + 1440LL * v17 + 256);
    ++*(_DWORD*)(v24 + 260);
  }
  v25 = *a2;
  v26 = *a3;
  v27 = *((_DWORD*)a3 + 3);
  v28 = *a4;
  v29 = **a1;
  v30 = *(_QWORD*)(v29 + 18736);
  v31 = *(_DWORD*)(v29 + 19200);
  v32 = *(_DWORD*)(v29 + 17280);
  *(_DWORD*)(v29 + 19200) = v31 + 1;
  if (v31 <= 262142) {
    *(float*)&v25 = *(float*)&v25 + (float)(v19 * LANES64(result).n64_f32[0]);
    HIDWORD(v26) = v27;
    v33 = *(_QWORD*)(v29 + 19136) + 40LL * (v31 + 1);
    *((float*)&v25 + 1) = a6 + *((float*)&v25 + 1);
    *(_QWORD*)(v33 + 12) = v26;
    *(_DWORD*)(v33 + 20) = 0;
    *(_OWORD*)(v33 + 24) = v28;
    *(float*)(v33 + 8) = *((float*)&v25 + 2) + (float)(a7 * v20);
    *(_QWORD*)v33 = v25;
    v34 = v30 + 1440LL * v32 + 4LL * *(int*)(v30 + 1440LL * v32 + 256);
    ++*(_DWORD*)(v34 + 260);
  }
  v35 = *a2;
  v36 = a3[1];
  v37 = *a4;
  v38 = **a1;
  v39 = *(_QWORD*)(v38 + 18736);
  v40 = *(_DWORD*)(v38 + 19200);
  v41 = *(_DWORD*)(v38 + 17280);
  *(_DWORD*)(v38 + 19200) = v40 + 1;
  if (v40 <= 262142) {
    *(float*)&v35 = *(float*)&v35 + (float)(a7 * v20);
    v42 = *(_QWORD*)(v38 + 19136) + 40LL * (v40 + 1);
    *((float*)&v35 + 1) = a6 + *((float*)&v35 + 1);
    *(_QWORD*)(v42 + 12) = v36;
    *(_DWORD*)(v42 + 20) = 0;
    *(_OWORD*)(v42 + 24) = v37;
    *(float*)(v42 + 8) =
        *((float*)&v35 + 2) + (float)(a7 * LANES64(result).n64_f32[0]);
    *(_QWORD*)v42 = v35;
    v43 = v39 + 1440LL * v41 + 4LL * *(int*)(v39 + 1440LL * v41 + 256);
    ++*(_DWORD*)(v43 + 260);
  }
  v44 = *a2;
  v45 = a3[1];
  v46 = *((_DWORD*)a3 + 1);
  v47 = *a4;
  v48 = **a1;
  v49 = *(_QWORD*)(v48 + 18736);
  v50 = *(_DWORD*)(v48 + 19200);
  v51 = *(_DWORD*)(v48 + 17280);
  *(_DWORD*)(v48 + 19200) = v50 + 1;
  if (v50 <= 262142) {
    LANES64(result).n64_f32[0] =
        *(float*)&v44 + (float)(a7 * LANES64(result).n64_f32[0]);
    HIDWORD(v45) = v46;
    v52 = *(_QWORD*)(v48 + 19136) + 40LL * (v50 + 1);
    *(_QWORD*)(v52 + 12) = v45;
    *(_DWORD*)(v52 + 20) = 0;
    *(_OWORD*)(v52 + 24) = v47;
    *(float*)(v52 + 8) = *((float*)&v44 + 2) + (float)(v19 * v20);
    LANES64(result).n64_f32[1] = a6 + *((float*)&v44 + 1);
    *(__n64*)v52 = result;
    v53 = v49 + 1440LL * v51 + 4LL * *(int*)(v49 + 1440LL * v51 + 256);
    ++*(_DWORD*)(v53 + 260);
  }
  return result;
}

void game_gmap_1541de0(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  unsigned __int64 v21;
  float32x4_t v22;
  _QWORD* v23;
  __int64 v24;
  __int64* v25;
  unsigned int v26;
  long double v27;
  _QWORD* v28;
  unsigned __int64 v29;
  _QWORD* v30;
  struct {
    _QWORD v31[2];
    int v32;
  } v31_;
  struct {
    float32x4_t v33;
    const char* v34;
    int v35;
    char gap76_[4];
    float32x4_t v36;
    __int128 v37;
    __int64 v38;
    __int64 v39;
  } v33_;

  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    while (1) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
      ++v5;
    }
  }
  else {
    v8 = *v5;
    v6 = v5 + 1;
    v7 = v8;
    if (*(_DWORD*)(v8 + 84) != v4) {
      do {
        v9 = *v6++;
        v7 = v9;
      } while (*(_DWORD*)(v9 + 84) != v4);
    }
  }
  v10 = *(_OWORD*)(v7 + 48);
  v31_.v31[1] = *(_QWORD*)(v7 + 48);
  v31_.v32 = DWORD2(v10);
  v31_.v31[0] = GameData_212d1e0[0] + 2;
  snd_Fade_Fade_10c830((__int64)&v33_.v33, 0x0.0p+0f),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  snd_playAt_ff5f0((__int64)"SE_SYS_GMAP_Exclamation",
                   (__int64)"SE_SYS_GMAP_Exclamation", (__int64)v31_.v31,
                   (__int64)&v33_.v33, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  snd_Fade_Destroy_Fade(&v33_.v33),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = *(_QWORD*)(*v2 + 8);
  v12 = *(_DWORD*)(v11 + 56);
  v13 = *(__int64**)(v11 + 8);
  v14 = *(__int64**)(v11 + 16);
  if ((v12 & 0x80000000) == 0) {
    while (v13 != v14) {
      v16 = *v13++;
      v15 = v16;
      if (*(_DWORD*)(v16 + 84) == v12) {
        goto LABEL_15;
      }
    }
  LABEL_14:
    v15 = 0;
    goto LABEL_15;
  }
  if (v13 == v14) {
    goto LABEL_14;
  }
  while (1) {
    v15 = *v13;
    if (*(_QWORD*)(*v13 + 96) == 0 && *(_QWORD*)(v15 + 552) == 0) {
      break;
    }
    if (++v13 == v14) {
      goto LABEL_14;
    }
  }
LABEL_15:
  LANES128(v33_.v33).n128_u64[1] = (unsigned __int64)&GameData_1adf7b0;
  v17 = 0x0.0p+0f;
  LANES128(v33_.v33).n128_u64[0] = game_HashString((__int64)&GameData_1adf7b0),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    v18 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        LANES128(v33_.v33).n128_u64),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v18 != 0) {
      v17 = (float)*(int*)(v18 + 32);
    }
  }
  UnitActor_81d430((void*)(&v33_.v33), v15 + 112),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = LANES128(v33_.v33).n128_f32[1];
  v20 = *(float*)(v15 + 52);
  UnitActor_81d430((void*)(&v33_.v33), v15 + 112),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v21) = 0;
  *((float*)&v21 + 1) = v17 + (float)(v19 - v20);
  v22 = v33_.v33;
  v33_.v33 = (__typeof__(v33_.v33)){0};
  v23 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  v33_.v35 = 5;
  v33_.v36 = vaddq_f32(v22, COERCE_AS(float32x4_t, v21));
  v33_.v37 = GameData_1a83390;
  v24 = *((_QWORD*)GameData_212c540 + 1);
  v33_.v38 = *(_QWORD*)GameData_212c540;
  v33_.v39 = v24;
  v33_.v34 = "UI_Gmap_Icon_ExclamationEvent";
  v25 = Manager_bc6460(v23, &v33_.v33, 1),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(__n128*)&v27 = GameRoutine_14a10d0(&v33_.v33, (__int64)v25, v26,
                                       (__int64)&GameData_1a9f09e),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = (_QWORD*)a1[20];
  if ((unsigned __int64)v28 >= a1[21]) {
    v30 = Situation_767300(a1 + 19, &v33_.v33),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v29 = LANES128(v33_.v33).n128_u64[1];
    a1[20] = v30;
    if (v29 == 0) {
      return;
    }
    goto LABEL_28;
  }
  *v28 = LANES128(v33_.v33).n128_u64[0];
  v29 = LANES128(v33_.v33).n128_u64[1];
  v28[1] = LANES128(v33_.v33).n128_u64[1];
  if (v29 != 0) {
    atomic_fetch_add_explicit(
        (atomic_ullong* volatile)((char*)((_UNKNOWN**)0x8LL) + v29), 1u,
        memory_order_relaxed);
  }
  a1[20] = v28 + 2;
  if (v29 != 0) {
  LABEL_28:
    if (atomic_fetch_add(
            (atomic_ullong* volatile)((char*)((_UNKNOWN**)0x8LL) + v29),
            0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v29 + 16LL))(v29,
                                                                          v27),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
}

void game_gmap_15420c0(__int64 a1)
{
  __int64** v1;
  __int64** v2;
  int v4;
  int v5;
  unsigned __int64 v6;
  __int128 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  v1 = *(__int64***)(a1 + 152);
  v2 = *(__int64***)(a1 + 160);
  if (v1 == v2) {
  LABEL_20:
    v9 = *(unsigned __int8**)(a1 + 16);
    if (v9 != nullptr) {
      v10 = *v9;
      v11 = v10 > 0x10;
      v12 = (1 << v10) & 0x1CE00;
      if (!v11 && v12 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
  else {
    while (1) {
      if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
        v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
        v5 = (v4 & 8) != 0 ? 2 : 3;
        if ((v5 & v4) == 0) {
          goto LABEL_16;
        }
      }
      if (game_ProcFadeView_instance_ != 0) {
        v6 = game_ProcFadeView_instance_ +
             ((unsigned __int64)*(
                  unsigned __int8*)(game_ProcFadeView_instance_ + 480)
              << 6);
        if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 +
                                                                        160);
        }
        else {
          v7 = *(_OWORD*)(v6 + 208);
        }
        if (*((float*)&v7 + 3) == 1.0f &&
            LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                            v6 + 160, *((float*)&v7 + 3)))
                    .n128_f32[3] == 1.0f) {
        LABEL_16:
          GameRoutine_14a1390(v1, 1);
        }
      }
      v8 = **v1;
      if (v8 != 0 && *(_DWORD*)(v8 + 16) == *((_DWORD*)*v1 + 2)) {
        break;
      }
      v1 += 2;
      if (v1 == v2) {
        goto LABEL_20;
      }
    }
  }
}

__int64 game_gmap_1544280(__int64** a1)
{
  __int64* v1;
  __int64* v2;
  char v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  _BYTE* v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  bool v15;
  _BYTE* v17;
  int v18;
  int v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v26;
  _BYTE* v27;
  __int64 v29;
  int v30;
  _BYTE* v32;
  int v35;
  int v36;
  _BYTE* v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64* v44;
  _BYTE* v45;
  _BYTE* v46;
  char v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    _BYTE* v52;
    _BYTE* v53;
    __int64 v54;
  } v52_;
  struct {
    __int64 v55;
    unsigned __int64 v56;
    char* v57;
  } v55_;

  v1 = *a1;
  v2 = a1[1];
  if (*a1 != v2) {
    v3 = 0;
    v4 = fw_memory_g_heap_manager_ptr;
    while (1) {
      if ((*(_BYTE*)v1 & 1) != 0) {
        fw_text_String_CopyTerminated(&v55_.v55, v1[2], v1[1]);
      }
      else {
        v5 = *v1;
        v6 = (char*)v1[2];
        v55_.v56 = v1[1];
        v55_.v57 = v6;
        v55_.v55 = v5;
      }
      v52_.v53 = nullptr;
      v52_.v54 = 0;
      v52_.v52 = nullptr;
      if ((v55_.v55 & 1) != 0) {
        v7 = v55_.v57;
      }
      else {
        v7 = (char*)&v55_.v55 + 1;
      }
      if ((v55_.v55 & 1) != 0) {
        v8 = v55_.v56;
      }
      else {
        v8 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
      }
      RuntimeBuffer_8924a0((__int64)&v52_.v52, (__int64)v7, v8, 0x2Fu);
      v9 = v52_.v52;
      v10 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v52_.v52);
      if ((*v52_.v52 & 1) == 0) {
        v10 = *v52_.v52 >> 1;
      }
      if (v10 == 6) {
        if ((*v52_.v52 & 1) != 0) {
          v17 = *(_BYTE**)((char*)((__int128*)0x10LL) + (_QWORD)v52_.v52);
        }
        else {
          v17 = v52_.v52 + 1;
        }
        v18 = *(_DWORD*)v17;
        v19 = *((unsigned __int16*)v17 + 2);
        if (v18 != -409304855 || v19 != 42399) {
        LABEL_99:
          v45 = v52_.v53;
          if (v9 == v52_.v53) {
            goto LABEL_109;
          }
          v46 = v52_.v53;
          do {
            v47 = *(v46 - 24);
            v46 -= 24;
            if ((v47 & 1) != 0 && *((_QWORD*)v45 - 1) != 0) {
              if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
                v48 = 128;
              }
              else {
                v48 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v48);
            }
            v45 = v46;
          } while (v46 != v9);
          v52_.v53 = v9;
          if (v52_.v52 != nullptr) {
          LABEL_109:
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v49 = 128;
            }
            else {
              v49 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v49);
          }
          goto LABEL_113;
        }
      }
      else {
        if (v10 != 18) {
          goto LABEL_99;
        }
        v11 = (*v52_.v52 & 1) != 0
                  ? *(_BYTE**)((char*)((__int128*)0x10LL) + (_QWORD)v52_.v52)
                  : v52_.v52 + 1;
        v12 = *(_QWORD*)v11;
        v13 = *((_QWORD*)v11 + 1);
        v14 = *((unsigned __int16*)v11 + 8);
        v15 = v12 == 0x83E39E83E3B382E3LL && v13 == 0xE5B7BCE58983E3B3LL;
        if (!v15 || v14 != 46728) {
          goto LABEL_99;
        }
      }
      v21 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v52_.v52);
      v3 = 1;
      if ((*((_BYTE*)((__int128*)0x10LL) + (_QWORD)v52_.v52 + 8) & 1) == 0) {
        v21 = *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v52_.v52 + 8) >> 1;
      }
      if (v21 > 11) {
        if (v21 == 18) {
          if ((*((_BYTE*)((__int128*)0x10LL) + (_QWORD)v52_.v52 + 8) & 1) !=
              0) {
            v38 =
                *(_BYTE**)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v52_.v52);
          }
          else {
            v38 = v52_.v52 + 25;
          }
          v39 = *(_QWORD*)v38;
          v40 = *((_QWORD*)v38 + 1);
          v41 = *((unsigned __int16*)v38 + 8);
          if (v39 != 0x81E3B381E38A81E3LL || v40 != 0xE39B81E384AFE58DLL ||
              v41 != 35714) {
            goto LABEL_99;
          }
          v26 = 20;
        }
        else {
          if (v21 != 12) {
            goto LABEL_99;
          }
          if ((*((_BYTE*)((__int128*)0x10LL) + (_QWORD)v52_.v52 + 8) & 1) !=
              0) {
            v27 =
                *(_BYTE**)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v52_.v52);
          }
          else {
            v27 = v52_.v52 + 25;
          }
          if (*(_QWORD*)v27 == 0xBDE49282E39195E7LL &&
              *((_DWORD*)v27 + 2) == -1954356324) {
            v26 = 22;
          }
          else {
            v29 = *(_QWORD*)v27;
            v30 = *((_DWORD*)v27 + 2);
            if (v29 != 0x8BE5ABA3E5B585E5LL || v30 != -2036602465) {
              goto LABEL_99;
            }
            v26 = 23;
          }
        }
      }
      else if (v21 == 6) {
        if ((*((_BYTE*)((__int128*)0x10LL) + (_QWORD)v52_.v52 + 8) & 1) != 0) {
          v32 = *(_BYTE**)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v52_.v52);
        }
        else {
          v32 = v52_.v52 + 25;
        }
        if (*(_DWORD*)v32 == -440486682 &&
            *((unsigned __int16*)v32 + 2) == 46469) {
          v26 = 25;
        }
        else if (*(_DWORD*)v32 == -393705240 &&
                 *((unsigned __int16*)v32 + 2) == 36001) {
          v26 = 32;
        }
        else {
          v35 = *(_DWORD*)v32;
          v36 = *((unsigned __int16*)v32 + 2);
          if (v35 != -408776986 || v36 != 41652) {
            goto LABEL_99;
          }
          v26 = 4;
        }
      }
      else {
        if (v21 != 9) {
          goto LABEL_99;
        }
        v22 = (*((_BYTE*)((__int128*)0x10LL) + (_QWORD)v52_.v52 + 8) & 1) != 0
                  ? *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) +
                                (_QWORD)v52_.v52)
                  : (__int64)(v52_.v52 + 25);
        v23 = *(_QWORD*)v22;
        v24 = *(unsigned __int8*)(v22 + 8);
        if (v23 != 0x82E3B4B3E98388E5LL || v24 != 138) {
          goto LABEL_99;
        }
        v26 = 29;
      }
      v44 = game_821090(v26);
      game_VariableManager_SetFlag((__int64)v44, 1);
      v9 = v52_.v52;
      if (v52_.v52 != nullptr) {
        goto LABEL_99;
      }
    LABEL_113:
      if ((v55_.v55 & 1) != 0 && v55_.v57 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v50 = 128;
        }
        else {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v50);
      }
      v1 += 3;
      if (v1 == v2) {
        return v3 & 1;
      }
    }
  }
  v3 = 0;
  return v3 & 1;
}

void game_gmap_154e7f0()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(__int64**)(v0 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  v1 = game_gameui_Footer_instance_;
  v2 = *(_DWORD*)(v0 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v0 + 5856) = v2;
  if (v1 != 0) {
    LayoutAccessor_1567000(v1, 0);
    v2 = *(_DWORD*)(v0 + 5856);
  }
  *(_DWORD*)(v0 + 5856) = v2 & 0xFFFDFFFF;
}

__n128 game_gmap_154f6c0(__int64 a1, __n128 result)
{

#pragma clang fp contract(off)
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int* v9;
  __int64 (*v11)();
  __int64 (*v12)();
  __int64 v13;
  __int64 v14;
  char** v15;
  char* v16;
  unsigned int* v17;
  __int64 (*v18)();
  __int64 (*v19)();
  __int64 (*v20)();
  __int16 v21;
  __int64 v22;
  __int64 v23;
  __int64 (*v24)();
  __int64 v25;
  struct {
    __int64 (*v26)();
    __int64 (*v27)();
  } v26_;

  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0) {
    return result;
  }
  if (*(_BYTE*)(game_GameModeData_instance_ + 57) == 4) {
    *(_BYTE*)(game_GameModeData_instance_ + 57) = 0;
  }
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if (v4 < 0) {
    for (; v5 != v6; ++v5) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        goto LABEL_15;
      }
    }
  LABEL_11:
    v9 = game_gmap_SpotMgr_GetCurrentSpot();
    goto LABEL_16;
  }
  if (v5 == v6) {
    goto LABEL_11;
  }
  while (1) {
    v8 = *v5++;
    v7 = v8;
    if (*(_DWORD*)(v8 + 84) == v4) {
      break;
    }
    if (v5 == v6) {
      goto LABEL_11;
    }
  }
LABEL_15:
  v9 = *(unsigned int**)v7;
LABEL_16:
  if ((unsigned __int8)Impl_13261c0((__int64)v9) != 4 ||
      (*((_BYTE*)v9 + 178) & 2) != 0) {
    goto LABEL_26;
  }
  TroopMgr_134b820((void*)(&v26_.v26), *(_QWORD**)(a1 + 152));
  v11 = v26_.v26;
  v12 = v26_.v27;
  if (v26_.v26 == v26_.v27) {
    if (v26_.v26 == nullptr) {
      goto LABEL_26;
    }
    goto LABEL_23;
  }
  do {
    v15 = (char**)(*(_QWORD*)v11 + 24LL);
    v16 = *(char**)(*(_QWORD*)v11 + 32LL);
    if (v16 != *v15) {
      *(_QWORD*)(*(_QWORD*)v11 + 8LL) = *((_QWORD*)v16 - 1);
      GameRoutine_888970(v15, 0, 0, 0);
    }
    v11 = (__int64 (*)())((char*)v11 + 8);
  } while (v11 != v12);
  v11 = v26_.v26;
  if (v26_.v26 != nullptr) {
  LABEL_23:
    v26_.v27 = v11;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
LABEL_26:
  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0xC) == 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 120LL);
    if (v14 == GameRoutine_ae0560()) {
      if (game_GameModeData_instance_ == 0 ||
          (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x10) != 0) {
        return result;
      }
    }
    else if (game_GameModeData_instance_ == 0) {
      return result;
    }
    if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x10) != 0) {
      if (*(_BYTE*)(*(_QWORD*)(GameData_21c96f8 + 16) + 129LL) == 1) {
        v17 = TroopMgr_134c680();
        GameRoutine_134b980((void*)(&v26_.v26), (__int64 (*)())v17);
        v18 = v26_.v26;
        v19 = v26_.v27;
        if (v26_.v26 != v26_.v27) {
          v20 = v26_.v26;
          do {
            v21 = *(_WORD*)(*(_QWORD*)v20 + 544LL);
            if ((v21 & 0x40) == 0) {
              *(_WORD*)(*(_QWORD*)v20 + 544LL) = v21 | 0x40;
            }
            v20 = (__int64 (*)())((char*)v20 + 8);
          } while (v20 != v19);
        }
        if (v18 != nullptr) {
          v26_.v27 = v18;
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v22);
        }
      }
      v26_.v27 = (__int64 (*)())&GameData_1ade186;
      v26_.v26 = (__int64 (*)())game_HashString((__int64)&GameData_1ade186);
      if (game_GameModeData_instance_ != 0) {
        v23 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v26_.v26);
        if (v23 != 0 && *(int*)(v23 + 32) >= 1) {
          TroopMgr_134b820((void*)(&v26_.v26), *(_QWORD**)(a1 + 152));
          v24 = v26_.v26;
          if (v26_.v27 != v26_.v26) {
            TroopMgr_13463f0(*(unsigned int*)(*(_QWORD*)v26_.v26 + 84LL),
                             *(long double*)&result);
            v24 = v26_.v26;
          }
          if (v24 != nullptr) {
            v26_.v27 = v24;
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            return nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
          }
        }
      }
    }
  }
  return result;
}

__int64 game_gmap_1550220(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int128 v6;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  unsigned int v15;
  __int64 v16;
  __int64* v17;
  __int64* i;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  unsigned int v25;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;
  struct {
    __int64 v32;
    __int64 v33;
  } v32_;
  struct {
    _QWORD v34[2];
    int v35;
  } v34_;
  struct {
    _QWORD v36[2];
    const char* v37;
    int v38;
    char gap140_[4];
    __int64 v39;
    __int64 v40;
    __int128 v41;
    __int64 v42;
    __int64 v43;
  } v36_;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = result;
  v2 = *(__int64**)(result + 208);
  v1 = *(__int64**)(result + 216);
  v3 = eft_g_effectSystem_ptr[0];
  v4 = (__int64*)GameData_212c540;
  if (v2 != v1) {
    v5 = GameData_212d1e0[0] + 2;
    do {
      v9 = *v2;
      v10 = (_QWORD*)*v3;
      v36_.v36[0] = 0;
      v36_.v36[1] = 0;
      v36_.v37 = "Btl_Hit_Damage";
      v36_.v38 = 5;
      v11 = *(_QWORD*)(v9 + 48);
      v12 = *(_QWORD*)(v9 + 56);
      v36_.v41 = GameData_1a83910;
      v36_.v39 = v11;
      v36_.v40 = v12;
      v13 = v4[1];
      v36_.v42 = *v4;
      v36_.v43 = v13;
      v14 = Manager_bc6460_alt2(v10, (__int64)v36_.v36, 1),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameHr_14a10d0(&v32_.v32, (__int64)v14, v15, (__int64)&GameData_1a9f09e),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v16 = v32_.v33;
      if (v32_.v33 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt2(v16),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v6 = *(_OWORD*)(v9 + 48);
      v34_.v34[0] = v5;
      v34_.v34[1] = v6;
      v34_.v35 = DWORD2(v6);
      snd_Fade_Fade_10c830((__int64)v36_.v36, 0x0.0p+0f),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_playAt_ff5f0((__int64)"SE_SYS_GMAP_Dead_Unit",
                       (__int64)"SE_SYS_GMAP_Dead_Unit", (__int64)v34_.v34,
                       (__int64)v36_.v36, 0, 0x10001u, 0, 0x0.0p+0f,
                       0x1.0000000000000p+0f),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_Fade_Destroy_Fade(v36_.v36),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = game_gmap_1340560_alt1(v9, 3),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ++v2;
    } while (v2 != v1);
  }
  v17 = *(__int64**)(v29 + 184);
  for (i = *(__int64**)(v29 + 192); v17 != i; ++v17) {
    v19 = *v17;
    v20 = (_QWORD*)*v3;
    v36_.v36[0] = 0;
    v36_.v36[1] = 0;
    v36_.v38 = 5;
    v36_.v37 = "Btl_Hit_Damage";
    v21 = *(_QWORD*)(v19 + 48);
    v22 = *(_QWORD*)(v19 + 56);
    v36_.v41 = GameData_1a83910;
    v36_.v39 = v21;
    v36_.v40 = v22;
    v23 = v4[1];
    v36_.v42 = *v4;
    v36_.v43 = v23;
    v24 = Manager_bc6460_alt2(v20, (__int64)v36_.v36, 1),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameHr_14a10d0(&v30_.v30, (__int64)v24, v25, (__int64)&GameData_1a9f09e),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v28 = v30_.v31;
    if (v30_.v31 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v30_.v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v28),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    result = game_gmap_1340560_alt1(v19, 0),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return result;
}

void game_gmap_15506e0(__int64 a1, __n128 a2, long double a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  char v10;

  v3 = *(__int64**)(a1 + 184);
  v4 = *(__int64**)(a1 + 192);
  if (v3 != v4) {
    v5 = (_QWORD*)GameData_212d750;
    while (1) {
      v6 = *v3;
      if ((*(_DWORD*)(*v3 + 84) & 0x80000000) == 0) {
        break;
      }
    LABEL_11:
      if (*v5 != 0) {
        GameRoutine_995200(v6 + 112);
      }
      game_gmap_133de90(v6, 0, a2, a3);
      if (++v3 == v4) {
        goto LABEL_13;
      }
    }
    Troop_133e4e0(*v3);
    v10 = 1;
    v8_.v8[0] = GameData_202c598;
    v8_.v8[1] = &v10;
    v8_.v9 = v8_.v8;
    Troop_133ed80(v6, (__int64)v8_.v8);
    if (v8_.v9 == v8_.v8) {
      v7 = 32;
    }
    else {
      if (v8_.v9 == nullptr) {
      LABEL_10:
        Troop_133e4e0(v6);
        goto LABEL_11;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v8_.v9 + v7))((__int64)v8_.v9);
    goto LABEL_10;
  }
LABEL_13:
  TroopMgr_134d2e0(*(_QWORD*)(GameData_21c96e8 + 8));
  game_19a0e60(*(_QWORD*)(GameData_21f1668 + 8) + 32LL);
}

__int64 game_gmap_1655e80(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  int v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  int v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  int v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  int v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  int v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  char v57;
  unsigned int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  bool v64;
  int v65;
  __int64* v66;
  __int64* v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  char v76;
  __int64 v77;
  float v78;
  __int64 v79;
  __int64 v80;
  __int64 v82;
  float v83;
  _BYTE v84[4];
  struct {
    _QWORD v85[4];
    int v86;
    int v87;
    __int64 v88;
    int v89;
    int v90;
    __int64 v91;
    int v92;
    int v93;
    __int64 v94;
    int v95;
    int v96;
    __int64 v97;
    int v98;
    char v99;
  } v85_;
  struct {
    __int64 v100;
    _BYTE* v101;
    int v102;
    int v103;
    __int64 v104;
    __int64* v105;
    __int64 v106;
    int v107;
    int v108;
    __int64 v109;
    int v110;
    int v111;
    __int64 v112;
    int v113;
    int v114;
    __int64 v115;
    int v116;
    char v117;
  } v100_;

  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 40LL))(
      *(_QWORD*)(a1 + 16), 1);
  v2 = *(_QWORD*)(a1 + 16);
  v100_.v100 = 0x3F8000003F800000LL;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v2 + 88LL))(v2, &v100_.v100);
  v3 = *(_QWORD*)(a1 + 8);
  if ((*(_QWORD*)(v3 + 96) | *(_QWORD*)(v3 + 552)) != 0) {
    v4 = *(_DWORD*)(v3 + 540);
    v84[0] = 0;
    v5 = __OFSUB__(v4, 1);
    v6 = (unsigned int)(v4 - 1);
    if (((v6 & 0x80000000) != 0LL) == v5) {
      v7 = *(_QWORD*)(v3 + 24);
      v8 = *(_QWORD*)(v3 + 32) - v7;
      v9 = v7 + 8LL * (unsigned int)v6;
      if (v6 < v8 >> 3) {
        v3 = v9;
      }
    }
    v10 = *(_QWORD*)v3;
    v11 = &v100_.v100;
    v100_.v100 = (__int64)GameData_2075d48;
    v100_.v101 = v84;
    v100_.v105 = &v100_.v100;
    if (v10 != 0) {
      v12 = *(_QWORD*)(GameData_21c96e8 + 8);
      v13 = *(__int64**)(v12 + 8);
      v14 = *(__int64**)(v12 + 16);
      if (v13 == v14) {
        v11 = &v100_.v100;
      }
      else {
        do {
          v15 = *v13;
          v16 = *(_DWORD*)(*v13 + 540);
          v17 = (_QWORD*)*v13;
          v5 = __OFSUB__(v16, 1);
          v18 = (unsigned int)(v16 - 1);
          if (((v18 & 0x80000000) != 0LL) == v5) {
            v19 = *(_QWORD*)(v15 + 24);
            v20 = *(_QWORD*)(v15 + 32) - v19;
            v21 = (_QWORD*)(v19 + 8LL * (unsigned int)v18);
            if (v18 >= v20 >> 3) {
              v17 = (_QWORD*)*v13;
            }
            else {
              v17 = v21;
            }
          }
          if (*v17 == v10) {
            v85_.v85[0] = *v13;
            if (v100_.v105 == nullptr) {
            LABEL_101:
              GameRoutine_60a310_alt1();
            }
            (*(void (**)(__int64*, _QWORD*))(*v100_.v105 + 48))(v100_.v105,
                                                                v85_.v85);
          }
          ++v13;
        } while (v13 != v14);
        v11 = v100_.v105;
        if (v100_.v105 != &v100_.v100) {
          if (v100_.v105 != nullptr) {
            v22 = 40;
          LABEL_20:
            (*(void (**)(__int64))(*v11 + v22))((__int64)v11);
          }
          v3 = *(_QWORD*)(a1 + 8);
          if (v84[0] == 1) {
            goto LABEL_22;
          }
          v43 = *(_DWORD*)(v3 + 540);
          v5 = __OFSUB__(v43, 1);
          v44 = (unsigned int)(v43 - 1);
          if (((v44 & 0x80000000) != 0LL) == v5) {
            v45 = *(_QWORD*)(v3 + 24);
            v46 = *(_QWORD*)(v3 + 32) - v45;
            v47 = v45 + 8LL * (unsigned int)v44;
            if (v44 < v46 >> 3) {
              v3 = v47;
            }
          }
          v48 = *(_QWORD*)v3;
          GameHr_1562680(*(_QWORD*)(a1 + 16) + 88LL, "KeyOff",
                         0x1.0000000000000p+0f);
          if (v48 == *(_QWORD*)(*(_QWORD*)(GameData_21f1658 + 16) + 96LL)) {
            v52 = *(_DWORD*)(a1 + 40);
            if (v52 != 3 && v52 != 6) {
              v53 = *(_QWORD*)(a1 + 8);
              v54 = *(_QWORD*)(v53 + 96);
              if (v54 != 0 && *(_BYTE*)(v54 + 32) == 1) {
                goto LABEL_52;
              }
              v100_.v101 = nullptr;
              v100_.v103 = 0;
              v100_.v104 = 0;
              v100_.v106 = 0;
              v100_.v108 = 0;
              v100_.v109 = 0;
              v100_.v111 = 0;
              v100_.v112 = 0;
              v100_.v114 = 0;
              v100_.v115 = 0;
              v100_.v116 = 0;
              v100_.v117 = 0;
              v100_.v100 = 2;
              v100_.v102 = 2;
              v100_.v105 = (_QWORD*)(((_UNKNOWN*)0x0LL) + 2);
              v100_.v107 = 2;
              v100_.v110 = 2;
              v100_.v113 = 2;
              GmapUIDef_1654300((__int64)&v100_.v100, v53, 0);
              if (v100_.v116 > 1) {
              LABEL_52:
                GameHr_1562680(*(_QWORD*)(a1 + 16) + 88LL, "In",
                               0x1.0000000000000p+0f);
                v55 = 3;
              }
              else {
                v77 = *(_QWORD*)(a1 + 16);
                GameHr_1562680(v77 + 88, "In", 0x1.0000000000000p+0f);
                v78 =
                    LayoutAccessor_15638b0_alt1((__int64*)(v77 + 88), "In", 0);
                LayoutAccessor_1562f00_alt1(v77 + 88, "In", v78);
                LayoutAccessor_1563030_alt1(v77 + 88, "In", 0);
                v55 = 6;
              }
              *(_DWORD*)(a1 + 40) = v55;
            }
            v79 = *(_QWORD*)(a1 + 8);
            if (v79 == 0) {
              goto LABEL_89;
            }
            v80 = *(_QWORD*)(a1 + 16);
            v100_.v101 = nullptr;
            v100_.v103 = 0;
            v100_.v104 = 0;
            v100_.v106 = 0;
            v100_.v108 = 0;
            v100_.v109 = 0;
            v100_.v111 = 0;
            v100_.v112 = 0;
            v100_.v114 = 0;
            v100_.v115 = 0;
            v100_.v116 = 0;
            v100_.v117 = 0;
            v100_.v100 = 2;
            v100_.v102 = 2;
            v100_.v105 = (_QWORD*)(((_UNKNOWN*)0x0LL) + 2);
            v100_.v107 = 2;
            v100_.v110 = 2;
            v100_.v113 = 2;
            GmapUIDef_1654300((__int64)&v100_.v100, v79, 0);
            v75 = &v100_.v100;
            v74 = v80;
            v76 = 0;
          }
          else {
            v49 = *(_QWORD*)(a1 + 8);
            v100_.v101 = nullptr;
            v100_.v103 = 0;
            v100_.v104 = 0;
            v100_.v106 = 0;
            v100_.v108 = 0;
            v100_.v109 = 0;
            v100_.v111 = 0;
            v100_.v112 = 0;
            v100_.v114 = 0;
            v100_.v115 = 0;
            v100_.v116 = 0;
            v100_.v117 = 0;
            v100_.v100 = 2;
            v100_.v102 = 2;
            v100_.v105 = (_QWORD*)(((_UNKNOWN*)0x0LL) + 2);
            v100_.v107 = 2;
            v100_.v110 = 2;
            v100_.v113 = 2;
            GmapUIDef_1654300((__int64)&v100_.v100, v49, 0);
            v50 = *(_DWORD*)(a1 + 40);
            if (v50 > 5 || ((1 << v50) & 0x34) == 0) {
              if ((v100_.v117 & 1) != 0 || v100_.v116 >= 2) {
                GameHr_1562680(*(_QWORD*)(a1 + 16) + 88LL, "In",
                               0x1.0000000000000p+0f);
                v51 = 2;
              }
              else {
                v51 = 4;
              }
              *(_DWORD*)(a1 + 40) = v51;
              *(_DWORD*)(a1 + 44) = -1082130432;
            }
            v64 = v100_.v116 <= -1;
            v65 = (signed __int32)*(_DWORD*)(a1 + 48) % v100_.v116;
            v66 = (__int64*)((_UNKNOWN**)0x8LL);
            v67 = &v100_.v100 + 2 * v65;
            *(_DWORD*)(a1 + 48) = v65;
            v70 = *v67;
            v69 = v67 + 1;
            v68 = v70;
            if (!v64) {
              v66 = v69;
            }
            v71 = *v66;
            v85_.v85[3] = 0;
            v85_.v87 = 0;
            v85_.v85[2] = 2;
            v85_.v86 = 2;
            v85_.v88 = 0;
            v85_.v90 = 0;
            v85_.v89 = 2;
            v85_.v91 = 0;
            v85_.v93 = 0;
            v85_.v92 = 2;
            v85_.v94 = 0;
            v85_.v96 = 0;
            v85_.v95 = 2;
            v85_.v97 = 0;
            if ((_DWORD)v68 != 0 || v71 == 0) {
              LOBYTE(v73) = 0;
            }
            else {
              v73 = *(_QWORD*)(v71 + 96);
              if (v73 != 0) {
                LOBYTE(v73) = *(_BYTE*)(v73 + 32) == 1;
              }
            }
            v74 = *(_QWORD*)(a1 + 16);
            v85_.v85[0] = v68;
            v85_.v85[1] = v71;
            v75 = v85_.v85;
            v76 = 1;
            v85_.v99 = v73;
            v85_.v98 = 1;
          }
          game_gameui_control_GmapTroopInfo_SetInfoPlayerOther(
              v74, (__int64)v75, v76);
        LABEL_89:
          v57 = 0;
          goto LABEL_90;
        }
      }
    }
    v22 = 32;
    goto LABEL_20;
  }
LABEL_22:
  v23 = *(_QWORD*)(a1 + 16);
  v100_.v101 = nullptr;
  v100_.v103 = 0;
  v100_.v104 = 0;
  v100_.v106 = 0;
  v100_.v108 = 0;
  v100_.v109 = 0;
  v100_.v111 = 0;
  v100_.v112 = 0;
  v100_.v114 = 0;
  v100_.v115 = 0;
  v100_.v116 = 0;
  v100_.v117 = 0;
  v100_.v100 = 2;
  v100_.v102 = 2;
  v100_.v105 = (_QWORD*)(((_UNKNOWN*)0x0LL) + 2);
  v100_.v107 = 2;
  v100_.v110 = 2;
  v100_.v113 = 2;
  GmapUIDef_1654300((__int64)&v100_.v100, v3, 0);
  game_gameui_control_GmapTroopInfo_SetInfoPlayerOther(v23,
                                                       (__int64)&v100_.v100, 0);
  v24 = *(__int64**)(a1 + 8);
  v25 = *((_DWORD*)v24 + 135);
  v5 = __OFSUB__(v25, 1);
  v26 = (unsigned int)(v25 - 1);
  if (((v26 & 0x80000000) != 0LL) == v5) {
    v27 = v24[3];
    v28 = v24[4] - v27;
    v29 = (__int64*)(v27 + 8LL * (unsigned int)v26);
    if (v26 < v28 >> 3) {
      v24 = v29;
    }
  }
  v30 = *(_QWORD*)(GameData_21f1658 + 16);
  if ((*(_BYTE*)(v30 + 170) & 1) != 0) {
    goto LABEL_61;
  }
  v31 = *v24;
  if (*v24 != *(_QWORD*)(v30 + 96)) {
    goto LABEL_61;
  }
  v32 = &v100_.v100;
  v84[0] = 0;
  v100_.v100 = (__int64)GameData_2075dc8;
  v100_.v101 = v84;
  v100_.v105 = &v100_.v100;
  if (v31 == 0) {
    goto LABEL_56;
  }
  v33 = *(_QWORD*)(GameData_21c96e8 + 8);
  v34 = *(__int64**)(v33 + 8);
  v35 = *(__int64**)(v33 + 16);
  if (v34 == v35) {
    v32 = &v100_.v100;
  LABEL_56:
    v56 = 32;
    goto LABEL_57;
  }
  do {
    v36 = *v34;
    v37 = *(_DWORD*)(*v34 + 540);
    v38 = (_QWORD*)*v34;
    v5 = __OFSUB__(v37, 1);
    v39 = (unsigned int)(v37 - 1);
    if (((v39 & 0x80000000) != 0LL) == v5) {
      v40 = *(_QWORD*)(v36 + 24);
      v41 = *(_QWORD*)(v36 + 32) - v40;
      v42 = (_QWORD*)(v40 + 8LL * (unsigned int)v39);
      if (v39 >= v41 >> 3) {
        v38 = (_QWORD*)*v34;
      }
      else {
        v38 = v42;
      }
    }
    if (*v38 == v31) {
      v85_.v85[0] = *v34;
      if (v100_.v105 == nullptr) {
        goto LABEL_101;
      }
      (*(void (**)(__int64*, _QWORD*))(*v100_.v105 + 48))(v100_.v105, v85_.v85);
    }
    ++v34;
  } while (v34 != v35);
  v32 = v100_.v105;
  if (v100_.v105 == &v100_.v100) {
    goto LABEL_56;
  }
  if (v100_.v105 != nullptr) {
    v56 = 40;
  LABEL_57:
    (*(void (**)(__int64))(*v32 + v56))((__int64)v32);
  }
  if (v84[0] == 1) {
    if (*(_DWORD*)(a1 + 40) == 6) {
    LABEL_60:
      v57 = 1;
      goto LABEL_90;
    }
    v60 = *(_QWORD*)(GameData_21c96e8 + 8);
    if (*(_BYTE*)(v60 + 60) == 1) {
      v61 = *(_QWORD*)(a1 + 8);
      v62 = *(_QWORD*)(v61 + 96);
      v63 = *(_QWORD*)(v61 + 552);
      if (*(_BYTE*)(*GameData_2130e70 + 54) == 1) {
        if ((v62 | v63) == 0 && *(_DWORD*)(v61 + 84) == *(_DWORD*)(v60 + 56) &&
            *(_QWORD*)(v61 + 32) != *(_QWORD*)(v61 + 24)) {
          goto LABEL_60;
        }
      }
      else if ((v62 | v63) != 0 &&
               *(_QWORD*)(v61 + 32) != *(_QWORD*)(v61 + 24) &&
               (v62 == 0 && v63 != 0 && *(_QWORD*)(v61 + 104) == 0 &&
                    *(__int16*)(v61 + 642) * *(__int16*)(v61 + 640) *
                            *(__int16*)(v61 + 644) ==
                        0 &&
                    *(_QWORD*)(v63 + 352) == 0 ||
                (*(_WORD*)(v61 + 544) & 3) != 2)) {
        goto LABEL_60;
      }
    }
    GameHr_1562680(*(_QWORD*)(a1 + 16) + 88LL, "Key00", 0x1.0000000000000p+0f);
    v82 = *(_QWORD*)(a1 + 16);
    GameHr_1562680(v82 + 88, "In", 0x1.0000000000000p+0f);
    v83 = LayoutAccessor_15638b0_alt1((__int64*)(v82 + 88), "In", 0);
    LayoutAccessor_1562f00_alt1(v82 + 88, "In", v83);
    LayoutAccessor_1563030_alt1(v82 + 88, "In", 0);
    v59 = 6;
  LABEL_64:
    *(_DWORD*)(a1 + 40) = v59;
    v57 = 1;
    goto LABEL_90;
  }
LABEL_61:
  v58 = *(_DWORD*)(a1 + 40);
  if (v58 > 5 || (v57 = 1, ((1 << v58) & 0x34) == 0)) {
    GameHr_1562680(*(_QWORD*)(a1 + 16) + 88LL, "KeyOff", 0x1.0000000000000p+0f);
    v59 = 4;
    goto LABEL_64;
  }
LABEL_90:
  *(_BYTE*)(a1 + 52) = v57;
  return 1;
}

__int64 game_gmap_1656640(__int64 result, float a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  bool v13;
  int v14;
  int v15;
  float v16;
  bool v17;
  int v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v26;
  bool v27;
  bool v28;
  __int64 v30;
  float v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _BOOL4 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  struct {
    _QWORD v41[12];
    int v42;
    char v43;
  } v41_;
  struct {
    _QWORD v44[12];
    int v45;
  } v44_;

  v3 = *(_QWORD*)(result + 8);
  if (v3 != 0) {
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    v5 = *(char**)(v4 + 8);
    v6 = *(char**)(v4 + 16);
    if (v5 != v6) {
      v7 = v6 - v5 - 8;
      if ((~(_BYTE)v7 & 0x18) != 0) {
        v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
        while (1) {
          v9 = *(_QWORD*)v5;
          v5 += 8;
          if (v3 == v9) {
            break;
          }
          if (--v8 == 0) {
            goto LABEL_7;
          }
        }
      }
      else {
      LABEL_7:
        if (v7 < 0x18) {
          return result;
        }
        while (v3 != *(_QWORD*)v5 && v3 != *((_QWORD*)v5 + 1) &&
               v3 != *((_QWORD*)v5 + 2) && v3 != *((_QWORD*)v5 + 3)) {
          v5 += 32;
          if (v5 == v6) {
            return result;
          }
        }
      }
      v10 = *(_QWORD*)(result + 16);
      if (v10 != 0) {
        v11 = *(_DWORD*)(result + 40);
        v12 = result;
        if (v11 <= 2) {
          if ((unsigned int)v11 >= 2) {
            if (v11 != 2) {
              goto LABEL_48;
            }
            v27 = LayoutAccessor_1563380_alt1((__int64*)(v10 + 88), "In", 0);
            result = v12;
            if (v27) {
              *(_DWORD*)(v12 + 40) = 4;
              goto LABEL_48;
            }
          }
          else {
            v13 = LayoutAccessor_1563380_alt1((__int64*)(v10 + 88), "Out", 0);
            result = v12;
            if (v13) {
              game_gmap_1655e80(v12);
              v14 = *(_DWORD*)(v12 + 40);
              result = v12;
              if (v14 == 3 || v14 == 6) {
                goto LABEL_48;
              }
              GameHr_1562680(*(_QWORD*)(v12 + 16) + 88LL, "In",
                             0x1.0000000000000p+0f);
              v15 = 2;
              goto LABEL_42;
            }
          }
        LABEL_47:
          if (*(_DWORD*)(result + 40) == 0) {
            return GameRoutine_1656a90_alt1(result);
          }
          goto LABEL_48;
        }
        if (v11 == 3) {
          v28 = LayoutAccessor_1563380_alt1((__int64*)(v10 + 88), "In", 0);
          result = v12;
          if (!v28) {
            goto LABEL_47;
          }
          LayoutAccessor_1562ea0_alt1((__int64*)(*(_QWORD*)(v12 + 16) + 88LL),
                                      "In");
          v15 = 6;
        }
        else {
          if (v11 != 4) {
            if (v11 != 5 || (*(_BYTE*)(result + 52) & 1) != 0) {
              goto LABEL_48;
            }
            if (*(float*)(result + 44) >= 0x0.0p+0f) {
              v16 =
                  LayoutAccessor_15637c0_alt1((__int64*)(v10 + 88), "Wait", 1);
              result = v12;
              if (v16 < *(float*)(v12 + 44)) {
                GameRoutine_1656a50_alt1((__int64)v44_.v44, *(_QWORD*)(v12 + 8),
                                         0);
                v17 = v44_.v45 <= -1;
                v18 = (*(_DWORD*)(v12 + 48) + 1) % v44_.v45;
                v19 = (__int64*)((_UNKNOWN**)0x8LL);
                v20 = &v44_.v44[2 * v18];
                *(_DWORD*)(v12 + 48) = v18;
                v23 = *v20;
                v22 = v20 + 1;
                v21 = v23;
                if (!v17) {
                  v19 = v22;
                }
                v24 = *v19;
                v41_.v41[3] = 0;
                v41_.v41[2] = 2;
                v41_.v41[5] = 0;
                v41_.v41[4] = 2;
                v41_.v41[7] = 0;
                v41_.v41[6] = 2;
                v41_.v41[9] = 0;
                v41_.v41[8] = 2;
                v41_.v41[11] = 0;
                v41_.v41[10] = 2;
                if ((_DWORD)v21 != 0 || v24 == 0) {
                  LOBYTE(v26) = 0;
                }
                else {
                  v26 = *(_QWORD*)(v24 + 96);
                  if (v26 != 0) {
                    LOBYTE(v26) = *(_BYTE*)(v26 + 32) == 1;
                  }
                }
                v30 = *(_QWORD*)(v12 + 16);
                v41_.v41[0] = v21;
                v41_.v41[1] = v24;
                v41_.v43 = v26;
                v41_.v42 = 1;
                game_gameui_control_GmapTroopInfo_SetInfoPlayerOther(
                    v30, (__int64)v41_.v41, 1);
                result = v12;
              }
            }
            v31 = LayoutAccessor_15637c0_alt1(
                (__int64*)(*(_QWORD*)(result + 16) + 88LL), "Wait", 1);
            result = v12;
            *(float*)(v12 + 44) = v31;
            goto LABEL_47;
          }
          if (a2 < 0x0.0p+0f) {
            goto LABEL_48;
          }
          GameHr_1562680(v10 + 88, "Wait", 0x1.0000000000000p+0f);
          LayoutAccessor_15636c0_alt1(*(_QWORD*)(v12 + 16) + 88LL, "Wait", 0,
                                      a2);
          v15 = 5;
        }
      LABEL_42:
        result = v12;
        *(_DWORD*)(v12 + 40) = v15;
      LABEL_48:
        v32 = *(_QWORD**)(result + 16);
        if (v32[13] == 0 || v32[12] == 0) {
          return GameRoutine_1656a90_alt1(result);
        }
        v33 = std___1___shared_weak_count_lock_alt1(v32[12]);
        if (v33 != 0) {
          v34 = v32[11];
          if (v34 != 0) {
            v2 = *(unsigned __int8*)(v34 + 24);
            v35 = v34 + 152;
            if (v2 == 0) {
              v35 = 0;
            }
            v36 = v35 != v32[13];
          }
          else {
            v36 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v37 = v33;
            (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
            std___1___shared_weak_count___release_weak_alt2(v37);
          }
          if (!v36) {
            result = v12;
            if ((v2 & 1) != 0) {
              goto LABEL_63;
            }
            return GameRoutine_1656a90_alt1(result);
          }
        }
        v38 = v32[12];
        result = v12;
        if (v38 == 0 || *(_QWORD*)(v38 + 8) == -1) {
          return GameRoutine_1656a90_alt1(result);
        }
      LABEL_63:
        v39 = v32[13];
        if (v39 != 0) {
          v40 = *(_QWORD*)(v39 + 24);
          if (v40 != 0) {
            *(_BYTE*)(v40 + 89) = -1;
          }
        }
        return GameRoutine_1656a90_alt1(result);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_gmap_165d4a0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  void* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64* v20;

  v2 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_DWORD*)(a2 + 32) = 1065353216;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 24LL))(
          *(_QWORD*)(v2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 272LL))(
      *(_QWORD*)(v2 + 280));
  v5 = *(_QWORD*)result;
  v6 = *(_QWORD*)(result + 8);
  if (*(_QWORD*)result == v6) {
    result;
    return;
  }
  v7 = std___1_piecewise_construct_ptr;
  do {
    v8 = *(_QWORD*)(a2 + 8);
    v9 = *(_QWORD*)(*(_QWORD*)v5 + 8LL);
    if (v8 == 0 || *(_QWORD*)(a2 + 24) == 0) {
      goto LABEL_28;
    }
    v20 = *(__int64**)(*(_QWORD*)v5 + 8LL);
    v11 = std___1___hash_memory(&v20, 8);
    v12 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v13 = v11;
      if (v11 >= v8) {
        v13 = v11 % v8;
      }
    }
    else {
      v13 = v11 & v12;
    }
    v14 = *(_QWORD**)(*(_QWORD*)a2 + 8 * v13);
    if (v14 == nullptr || (v15 = (_QWORD*)*v14) == nullptr) {
    LABEL_28:
      v18 = v9;
      v20 = &v18;
      result = SpotAttachmentFort_151c7c0(a2, &v18, v7, &v20, &v19);
      *(_DWORD*)(result + 24) = 1;
      goto LABEL_29;
    }
    if ((v8 & v12) == 0) {
      while (1) {
        v17 = v15[1];
        if (v11 == v17) {
          if (v15[2] == v9) {
            goto LABEL_31;
          }
        }
        else if ((v17 & v12) != v13) {
          goto LABEL_28;
        }
        v15 = (_QWORD*)*v15;
        if (v15 == nullptr) {
          goto LABEL_28;
        }
      }
    }
    while (1) {
      v16 = v15[1];
      if (v11 == v16) {
        break;
      }
      if (v16 >= v8) {
        v16 %= v8;
      }
      if (v16 != v13) {
        goto LABEL_28;
      }
    LABEL_18:
      v15 = (_QWORD*)*v15;
      if (v15 == nullptr) {
        goto LABEL_28;
      }
    }
    if (v15[2] != v9) {
      goto LABEL_18;
    }
  LABEL_31:
    v18 = v9;
    v20 = &v18;
    result = SpotAttachmentFort_151c7c0(a2, &v18, v7, &v20, &v19);
    ++*(_DWORD*)(result + 24);
  LABEL_29:
    v5 += 8;
  } while (v5 != v6);
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
