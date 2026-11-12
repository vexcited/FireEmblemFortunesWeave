#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 game_kVariableHubFacilityForced;
__int64 ProcLessonMenu_Unknown101(__int64 a1);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__attribute__((swiftcall)) void GameRoutine_fa73c0(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 Alignment_56b600(__int64 result);
__int64 GameRoutine_157a1e0(__int64*, unsigned int*, __int64, __int64, __int64,
                            __int64, __int64);
__int64 GameRoutine_189d120(__int64*, _QWORD*, char, char, char, char, char);
__int64 GameRoutine_189ddb0(__int64*, unsigned __int8, char);
__int64 GameRoutine_67ed20(_QWORD*);
__int64 GameRoutine_6c2b50(__int64);
__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_6e3b50(__int64 result, _QWORD*);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 LayoutAccessor_1562060(__int64 result, __int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_Unit_Destroy_Unit(__int64);
__int64 game_Unit_Unknown6c8630(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e008[9];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_1ffa128;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_156c5d0(__int64, __int64, char);
__int64 ProcLessonMenu_Unknown88(__int64 a1);
_QWORD*
game_UnitPool_Find_6ead60_alt1(__int64*,
                               int*) __asm__("game_UnitPool_Find_6ead60");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameHr_6c2b50(__int64);
__int64 GameRoutine_157a1e0_alt1(__int64*, unsigned int*, unsigned __int8, char,
                                 char, char,
                                 char) __asm__("GameRoutine_157a1e0");
__int64
LayoutAccessor_1562060_alt1(__int64 result, __int64,
                            const char*) __asm__("LayoutAccessor_1562060");
__int64 StatusClass_189d120(__int64*, _QWORD*, char, char, char, char, char);
__int64 StatusClass_189ddb0(__int64*, unsigned __int8, char);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* GameHr_67ed20(_QWORD*);
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 ProcLessonMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int8 v14;
  char v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (*v24)(_QWORD);
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  struct {
    __int64* v42;
    __int64 v43;
  } v42_;
  _BYTE v44[20];
  _QWORD v45[2];
  _QWORD** v46;
  struct {
    _QWORD* v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    _BYTE* v51;
    __int64 v52;
    int v53;
    char gap132_[300];
    __int64 v54;
  } v47_;
  __int64 v55[2];
  int v56[3];

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_1ffa128, 0);
    if (result != 0) {
      v3 = *(_QWORD*)(result + 88);
      LayoutAccessor_1560070_alt1((void*)(v44), (__int64*)(a1 + 848), "L_Info");
      result = *(_QWORD*)&v44[8];
      if (*(_QWORD*)&v44[8] != 0) {
        v4 = std___1___shared_weak_count_lock_alt1(*(__int64*)&v44[8]);
        v5 = *(__int64**)v44;
        result = *(_QWORD*)&v44[8];
        if (*(_QWORD*)&v44[8] != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(
              *(__int64*)&v44[8]);
        }
        if (v4 == 0 || v5 == nullptr) {
          if (v4 == 0) {
            return result;
          }
          goto LABEL_73;
        }
        LayoutAccessor_1562060_alt1((__int64)v5, (__int64)"T_Txt",
                                    *(const char**)(v3 + 32));
        LayoutAccessor_1562060_alt1((__int64)v5, (__int64)"T_Help",
                                    *(const char**)(v3 + 40));
        v6 = GameHr_67ed20(*(_QWORD**)(v3 + 64));
        if (v6 != nullptr) {
          v7 = (__int64)v6;
          v8 = ui_LayoutAccessor_FindTextBox(v5, (__int64)"T_Name");
          if (v8 != 0) {
            GameRoutine_156c5d0(v8, v7, 0);
          }
        }
        v9 = ui_LayoutAccessor_FindAlignment(v5, (__int64)"A_Help");
        if (v9 != 0) {
          Alignment_56b600(v9);
        }
        ui_LayoutAccessor_SetPaneVisible(
            (__int64)v5, (__int64)"L_Job00",
            *(_QWORD*)(*(_QWORD*)(v3 + 24) + 24LL) != 0);
        if (*(_QWORD*)(*(_QWORD*)(v3 + 24) + 24LL) != 0) {
          v55[0] = (__int64)"L_Job00";
          v55[1] = 7;
          GameRoutine_fa73c0((void*)(v44), v5, v55);
          if (*(_QWORD*)&v44[8] != 0) {
            v10 = std___1___shared_weak_count_lock_alt1(*(__int64*)&v44[8]);
            v11 = *(__int64**)v44;
            if (*(_QWORD*)&v44[8] != 0) {
              std___1___shared_weak_count___release_weak_alt1(
                  *(__int64*)&v44[8]);
            }
            if (v10 != 0 && v11 != nullptr) {
              GameHr_6c2b50((__int64)v44);
              v12 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v12 = *(_QWORD*)(game_GameModeData_instance_ + 96);
              }
              v55[0] = v12;
              v56[0] = 241;
              v13 = game_UnitPool_Find_6ead60_alt1(v55, v56);
              GameRoutine_6c3980((__int64)v44, (__int64)v13);
              if (v47_.v54 != *(_QWORD*)(*(_QWORD*)(v3 + 24) + 24LL)) {
                v47_.v54 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 24LL);
                game_Unit_Unknown6c8630((__int64)v44);
              }
              v14 = 1;
              v15 = StatusClass_189d120(v11, v44, 0, 1, 1, 0, 1);
              v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 24LL) + 24LL);
              v17 = *(__int64**)(v16 + 1016);
              v18 = *(__int64**)(v16 + 1008);
              if (v17 != v18) {
                v40 = v11;
                v41 = v10;
                v19 = 0;
                do {
                  v21 = *v18;
                  v20 = v18[1];
                  if (v20 == *v18) {
                  LABEL_25:
                    ++v19;
                  }
                  else {
                    while (1) {
                      if (*(_QWORD*)v21 != 0) {
                        v22 = game_GameModeData_instance_;
                        if (game_GameModeData_instance_ != 0) {
                          v23 = game_GameVariableTable_Find_alt1(
                              *(_QWORD**)(game_GameModeData_instance_ + 48),
                              (unsigned __int64*)v21);
                          if (v23 != 0) {
                            v24 = *(__int64 (**)(_QWORD))(v23 + 72);
                            v25 = *(_QWORD*)(v23 + 80);
                            v26 = (_QWORD*)(v23 + (v25 >> 1));
                            if ((v25 & 1) != 0) {
                              v24 = *(__int64 (**)(_QWORD))((char*)v24 + *v26);
                            }
                            v15 = v24(v26);
                          }
                          else {
                            v15 = 1;
                          }
                        }
                        if (*(_BYTE*)(v21 + 16) != ((v22 == 0) | v15 & 1)) {
                          break;
                        }
                      }
                      v21 += 24;
                      if (v21 == v20) {
                        goto LABEL_25;
                      }
                    }
                  }
                  v18 += 6;
                } while (v18 != v17);
                v11 = v40;
                v10 = v41;
                v14 = v19 != 0;
              }
              StatusClass_189ddb0(v11, v14, 1);
              game_Unit_Destroy_Unit((__int64)v44);
              goto LABEL_44;
            }
            if (v10 != 0) {
            LABEL_44:
              if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
                std___1___shared_weak_count___release_weak_alt1(v10);
              }
            }
          }
        }
        ui_LayoutAccessor_SetPaneVisible((__int64)v5, (__int64)"N_Reward",
                                         *(_QWORD*)(v3 + 120) != 0);
        v27 = *(_QWORD*)(v3 + 120);
        if (v27 != 0) {
          v28 = *(unsigned __int16*)(v27 + 16);
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v28) +
                        73LL) == 17) {
            nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
            v29 = game_map_MapRandom_instance__ptr[0];
            v30 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v31 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v32 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v29 + 1) = v30;
            v33 = (v32 >> 8) ^ (v31 >> 19) ^ v32 ^ v31;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v29) = v31;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v29 + 4) = v33;
            nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
            v34 =
                (unsigned __int64)((16 * ((_WORD)v33 -
                                          1000 *
                                              (unsigned __int16)((v33 &
                                                                  0x7FFFFFFFu) /
                                                                 0x3E8)) +
                                    16) &
                                       0x3FF0 |
                                   1u)
                << 32;
          }
          else {
            v34 = 0x100000000LL;
          }
          *(_QWORD*)&v44[4] = v34 | v28;
          *(_DWORD*)v44 = 8;
          if (*(_BYTE*)GameData_212ceb0 != 0) {
            v35 = *GameData_212ceb0;
          }
          else {
            v35 = 0;
          }
          *(_QWORD*)&v44[12] = v35;
          WORD1(v45[0]) = 0;
          HIDWORD(v45[0]) = 0;
          v47_.v48 = 0;
          v47_.v49 = 0;
          v47_.v50 = 0;
          v47_.v51 = nullptr;
          v46 = &v47_.v47;
          v47_.v47 = nullptr;
          GameRoutine_930b90((__int64)v45, (__int64)GameData_212c8b0[0]);
          v47_.v52 = 0x100000000LL;
          v47_.v53 = -1;
          LayoutAccessor_1560070_alt1((void*)(&v42_.v42), v5, "L_RewardItem00");
          if (v42_.v43 != 0) {
            v36 = std___1___shared_weak_count_lock_alt1(v42_.v43);
            if (v36 != 0) {
              v37 = v36;
              if (v42_.v42 != nullptr) {
                GameRoutine_157a1e0_alt1(v42_.v42, (unsigned int*)v44, 1u, 0, 1,
                                         0, 0);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
                std___1___shared_weak_count___release_weak_alt1(v37);
              }
            }
            if (v42_.v43 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v42_.v43);
            }
          }
          LODWORD(v45[1]) = 0;
          v45[0] = 0;
          if ((v47_.v49 & 1) != 0) {
            *v47_.v51 = 0;
            v47_.v50 = 0;
          }
          else {
            LOWORD(v47_.v49) = 0;
          }
          GameRoutine_6e3b50_alt1((__int64)&v46, v47_.v47);
          v47_.v47 = nullptr;
          v47_.v48 = 0;
          v46 = &v47_.v47;
          if ((v47_.v49 & 1) != 0) {
            v38 = v47_.v51;
            if (v47_.v51 != nullptr) {
              v39 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v39 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v39,
                  (__int64)v47_.v51);
              v38 = v47_.v47;
            }
          }
          else {
            v38 = nullptr;
          }
          GameRoutine_6e3b50_alt1((__int64)&v46, v38);
        }
        result = ui_LayoutAccessor_FindAlignment(v5, (__int64)"A_Reward");
        if (result != 0) {
          result = Alignment_56b600(result);
        }
      LABEL_73:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak_alt1(v4);
        }
      }
    }
  }
  return result;
}

__int64 ProcLessonMenu_Unknown101(__int64 a1)
{
  __int64 v2;
  __int64 result;

  if (game_GameModeData_instance_ != 0) {
    v2 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        &game_kVariableHubFacilityForced);
    if (v2 != 0 && *(_DWORD*)(v2 + 32) != 0) {
      return 1;
    }
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
