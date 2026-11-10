#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_975940(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1ae3887;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_vstring_kEmpty;
extern __int64* game_vstring_kEmpty_ptr[2];
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 SceneTalk_1497180(unsigned __int64 a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4, __int64 a5, unsigned __int64 a6, int a7);
__int64 game_facility_SceneTalk_Args_Args_lambda0_Invoke(__int64 result,
                                                         __int64 a2);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void Manager_a501f0(PSEUDO_X8, __int64, __int64);
__int64* Registration_a4da40(__int64, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 AssetTableFile_7e94a0(_QWORD);
__int64 GameManager_a35ca0(_QWORD, _QWORD);
__int64 GameRoutine_975940_alt1(__int64) __asm__("GameRoutine_975940");
__int64 Manager_a51640(__int64, __int64, _DWORD*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1_stoi(_QWORD, _QWORD, _QWORD);
__n128 game_112d480(__int64, char, __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
char* game_util_Format_alt1(__int64, __int64, __int64, __int64, __int64,
                            __int64, __int64, __int64,
                            char) __asm__("game_util_Format");
extern _UNKNOWN GameData_1a966c6;
extern _UNKNOWN GameData_1ae1fdd;
extern _UNKNOWN GameData_1aeb303;
extern _UNKNOWN GameData_1aeee64;
extern _UNKNOWN GameData_1af6b87;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_2043d78[])();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_1a9278d;
extern __int64 GameData_1ab567f;
extern __int64 GameData_1ab983a;
extern __int64 GameData_1ab9858;
extern __int64 GameData_1ad7f52;
extern __int64 GameData_1aeb2e5;
extern __int64 GameData_1aeb33a;
extern __int64 GameData_1afaa82;
extern __int64 GameData_21c99c8;
extern __int64 msg_MessageManager_instance_;
unsigned __int64 Manager_6326c0(__int64*, __int64);
void SceneTalk_1497180_alt1(_DWORD*, __int64, unsigned __int64, __int64,
                            __int64, unsigned __int64,
                            unsigned int) __asm__("SceneTalk_1497180");
void __attribute__((noreturn)) GameRoutine_14984e0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
__n128 game_facility_SceneTalk_Args_Args(unsigned __int8* a1, __int64 a2,
                                         unsigned __int64 a3, __n128 result);
__attribute__((swiftcall)) void SceneTalk_1497520(PSEUDO_X8 x8_, __int64 a1,
                                                  unsigned __int64 a2,
                                                  __int64 a3, __int64 a4,
                                                  unsigned __int64 a5, int a6);
__attribute__((swiftcall)) void SceneTalk_1497bf0(PSEUDO_X8 x8_,
                                                  unsigned __int64* a1, int a2);
__attribute__((swiftcall)) void SceneTalk_1497cf0(PSEUDO_X8 x8_,
                                                  unsigned __int64 result);
__attribute__((swiftcall)) void SceneTalk_1497de0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int16 a2);

__n128 game_facility_SceneTalk_Args_Args(unsigned __int8* a1, __int64 a2,
                                         unsigned __int64 a3, __n128 result)
{
  unsigned __int8* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __n128 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  unsigned __int8* v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int8* v36;
  __int64 v37;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int8* v41;
  __int64 v42;
  unsigned __int8* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64* v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int8* v61;
  int v62;
  int v63;
  unsigned __int8* v64;
  unsigned __int64 v65;
  unsigned __int8* v66;
  __int64 v67;
  __int64 v68;
  unsigned __int8* v69;
  unsigned __int8* v70;
  unsigned __int8* v71;
  __int64 v72;
  char v73;
  __int64 v74;
  __int64 v75;
  struct {
    __int64 v76[2];
    char* v77;
    char gap24_[8];
    __int64* v78;
  } v76_;
  struct {
    __int64 v79[2];
    __int64 v80;
  } v79_;
  struct {
    unsigned __int8* v81;
    unsigned __int8* v82;
    __int64 v83;
  } v81_;
  __int64 v84;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (a3 >= 0x17) {
    v7 = a2;
    if ((a3 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (a3 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v8, 16,
                                             0),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a2 = v7;
    v6 = (unsigned __int8*)v9;
    *((_QWORD*)a1 + 1) = a3;
    *((_QWORD*)a1 + 2) = v9;
    *(_QWORD*)a1 = v8 | 1;
    goto LABEL_9;
  }
  *a1 = 2 * a3;
  v6 = a1 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove(v6, a2, a3),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v6[a3] = 0;
  *((_WORD*)a1 + 16) = 0;
  v11 = a1 + 32;
  v12 = *((_QWORD*)a1 + 1);
  *((_DWORD*)a1 + 28) = 1;
  v13 = *a1;
  *((_WORD*)a1 + 44) = 0;
  v14 = a1 + 88;
  v15 = v13 >> 1;
  *((_DWORD*)a1 + 6) = 0;
  *((_QWORD*)a1 + 7) = 0;
  *((_WORD*)a1 + 32) = 0;
  if ((v13 & 1) != 0) {
    v15 = v12;
  }
  if (v15 != 0) {
    v81_.v82 = nullptr;
    v81_.v83 = 0;
    v81_.v81 = nullptr;
    if ((v13 & 1) != 0) {
      fw_text_String_CopyTerminated(v79_.v79, *((_QWORD*)a1 + 2), v12),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v16 = *((_QWORD*)a1 + 1);
      v79_.v79[0] = *(_QWORD*)a1;
      v79_.v79[1] = v16;
      v79_.v80 = *((_QWORD*)a1 + 2);
    }
    game_112d480((__int64)v79_.v79, 95, (__int64)&v81_.v81),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v79_.v79[0] & 1) != 0 && v79_.v80 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    *((_DWORD*)a1 + 6) =
        -1431655765 * ((unsigned __int64)(v81_.v82 - v81_.v81) >> 3);
    if ((*a1 & 1) != 0) {
      v18 = *((unsigned __int8**)a1 + 2);
    }
    else {
      v18 = a1 + 1;
    }
    Manager_a501f0((void*)(v76_.v76), msg_MessageManager_instance_,
                   (__int64)v18),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v76_.v76[0] & 1) != 0) {
      v19 = v76_.v77;
    }
    else {
      v19 = (char*)v76_.v76 + 1;
    }
    v20 = game_HashString((__int64)v19),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v20 != 0) {
      v21 = *(_QWORD*)(GameData_21c99c8 + 96);
      if (v21 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
        v23 = v21 - 1;
        if ((v21 & (v21 - 1)) != 0) {
          v24 = v20;
          if (v20 >= v21) {
            v24 = v20 % v21;
          }
        }
        else {
          v24 = v23 & v20;
        }
        v25 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v24);
        if (v25 != nullptr) {
          v26 = (_QWORD*)*v25;
          if (v26 != nullptr) {
            if ((v21 & v23) == 0) {
              while (1) {
                v29 = v26[1];
                if (v29 == v20) {
                  if (v26[2] == v20) {
                    goto LABEL_108;
                  }
                }
                else if ((v29 & v23) != v24) {
                  goto LABEL_51;
                }
                v26 = (_QWORD*)*v26;
                v28 = 0;
                if (v26 == nullptr) {
                  goto LABEL_52;
                }
              }
            }
            do {
              v27 = v26[1];
              if (v27 == v20) {
                if (v26[2] == v20) {
                LABEL_108:
                  v28 = v26[3];
                  goto LABEL_52;
                }
              }
              else {
                if (v27 >= v21) {
                  v27 %= v21;
                }
                if (v27 != v24) {
                  break;
                }
              }
              v26 = (_QWORD*)*v26;
            } while (v26 != nullptr);
          }
        }
      }
    }
  LABEL_51:
    v28 = 0;
  LABEL_52:
    v30 = v76_.v76[0];
    *((_QWORD*)a1 + 7) = v28;
    if ((v30 & 1) != 0 && v76_.v77 != nullptr) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      v10 = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (*((int*)a1 + 6) < 2) {
      goto LABEL_135;
    }
    v32 = v81_.v81;
    v33 = v81_.v82 - v81_.v81;
    if (v81_.v82 != v81_.v81) {
      v34 = *v81_.v81;
      if ((v34 & 1) != 0) {
        v35 = *((_QWORD*)v81_.v81 + 1);
      }
      else {
        v35 = v34 >> 1;
      }
      if ((v34 & 1) != 0) {
        v36 = *((unsigned __int8**)v81_.v81 + 2);
      }
      else {
        v36 = v81_.v81 + 1;
      }
      if (v35 >= 3) {
        v37 = 3;
      }
      else {
        v37 = v35;
      }
      if ((unsigned int)memcmp(v36, "MID", v37) != 0 || v35 != 3) {
        goto LABEL_135;
      }
      if (0xAAAAAAAAAAAAAAABLL * (v33 >> 3) > 1) {
        v39 = v32[24];
        if ((v39 & 1) != 0) {
          v40 = *((_QWORD*)v32 + 4);
        }
        else {
          v40 = v39 >> 1;
        }
        if ((v39 & 1) != 0) {
          v41 = *((unsigned __int8**)v32 + 5);
        }
        else {
          v41 = v32 + 25;
        }
        if (v40 >= 2) {
          v42 = 2;
        }
        else {
          v42 = v40;
        }
        if ((unsigned int)memcmp(v41, &GameData_1ae3887, v42) != 0 ||
            v40 != 2) {
        LABEL_135:
          v69 = v81_.v81;
          if (v81_.v81 != nullptr) {
            v70 = v81_.v82;
            if (v81_.v81 == v81_.v82) {
              goto LABEL_146;
            }
            v71 = v81_.v82;
            v72 = fw_memory_g_heap_manager_ptr;
            do {
              v73 = *(v71 - 24);
              v71 -= 24;
              if ((v73 & 1) != 0 && *((_QWORD*)v70 - 1) != 0) {
                if (*(_QWORD*)(*(_QWORD*)v72 + 200LL) != 0) {
                  v74 = 128;
                }
                else {
                  v74 = 56;
                }
                v10 = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v72 + v74),
                v57 =
                    COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v70 = v71;
            } while (v71 != v69);
            v81_.v82 = v69;
            if (v81_.v81 != nullptr) {
            LABEL_146:
              v75 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v75 = 56;
              }
              return nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v75);
            }
          }
          return v10;
        }
        if (v33 != 48) {
          v44 = v32 + 48;
          if (v11 != v32 + 48) {
            v45 = *v44;
            if ((*v11 & 1) == 0) {
              if ((v45 & 1) != 0) {
                GameRoutine_64df20((_QWORD*)a1 + 4, *((_QWORD*)v32 + 8),
                                   *((_QWORD*)v32 + 7)),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v57 = COERCE_AS(
                        __typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v48 = *((_QWORD*)a1 + 7);
                if (v48 == 0) {
                  goto LABEL_120;
                }
              }
              else {
                v46 = *(_QWORD*)v44;
                v47 = *((_QWORD*)v32 + 8);
                *((_QWORD*)a1 + 5) = *((_QWORD*)v32 + 7);
                *((_QWORD*)a1 + 6) = v47;
                *(_QWORD*)v11 = v46;
                v48 = *((_QWORD*)a1 + 7);
                if (v48 == 0) {
                  goto LABEL_120;
                }
              }
            LABEL_102:
              v51 = *(_QWORD*)(v48 + 288);
              if (v51 != 0) {
                v52 = GameRoutine_975940_alt1(v51),
                v10 = COERCE_AS(__typeof__(v10),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v57 =
                    COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if (v52 != 0) {
                  v76_.v76[0] = (__int64)GameData_2043d78;
                  v76_.v76[1] = (__int64)a1;
                  v76_.v78 = v76_.v76;
                  v53 = *(_QWORD**)(v52 + 24);
                  v55 = (__int64*)v53[12];
                  v54 = (__int64*)v53[13];
                  if (v54 != v55) {
                    while (1) {
                      v56 = *v55++;
                      v84 = v56;
                      if (v76_.v78 == nullptr) {
                        break;
                      }
                      (*(void (**)(__int64*, __int64*))(*v76_.v78 + 48))(
                          v76_.v78, &v84),
                          v10 = COERCE_AS(__typeof__(v10),
                                          PSEUDO_REGISTER(__n128, "v0", "=w")),
                          v57 = COERCE_AS(
                              __typeof__(v57),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      if (v55 == v54) {
                        goto LABEL_115;
                      }
                    }
                  LABEL_151:
                    GameRoutine_60a310(),
                        v10 = COERCE_AS(__typeof__(v10),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v57 = COERCE_AS(
                            __typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  v58 = v53[9];
                  do {
                    v59 = v58;
                    v58 = *(_QWORD*)(*(_QWORD*)(v58 + 24) + 80LL);
                  } while (v58 != 0);
                  do {
                    v84 = v59;
                    if (v76_.v78 == nullptr) {
                      goto LABEL_151;
                    }
                    (*(void (**)(__int64*, __int64*))(*v76_.v78 + 48))(v76_.v78,
                                                                       &v84),
                        v10 = COERCE_AS(__typeof__(v10),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v57 = COERCE_AS(
                            __typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v59 = *(_QWORD*)(*(_QWORD*)(v59 + 24) + 88LL);
                  } while (v59 != 0);
                LABEL_115:
                  if (v76_.v78 == v76_.v76) {
                    v60 = 32;
                    goto LABEL_119;
                  }
                  if (v76_.v78 != nullptr) {
                    v60 = 40;
                  LABEL_119:
                    (*(void (**)(__int64*, __int64))(*v76_.v78 + v60))(v76_.v78,
                                                                       v57),
                        v10 = COERCE_AS(__typeof__(v10),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v57 = COERCE_AS(
                            __typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                }
              }
            LABEL_120:
              v61 = v81_.v82;
              v62 = std___1_stoi(v81_.v82 - 24, 0, 10),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v62 <= 1) {
                v63 = 1;
              }
              else {
                v63 = v62;
              }
              *((_DWORD*)a1 + 28) = v63;
              v64 = v61 - 48;
              v65 = (unsigned __int64)*(v61 - 48) >> 1;
              if ((*(v61 - 48) & 1) != 0) {
                v65 = *((_QWORD*)v61 - 5);
              }
              if (v65 != 0) {
                v66 = v61 - 47;
                if ((*(v61 - 48) & 1) != 0) {
                  v66 = *((unsigned __int8**)v61 - 4);
                }
                if (v14 != v64 && *v66 == 109) {
                  if ((*v14 & 1) != 0) {
                    SpineModel_64dde0((__int64*)a1 + 11, (__int64)v66, v65),
                        v10 = COERCE_AS(__typeof__(v10),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v57 = COERCE_AS(
                            __typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  else if ((*(v61 - 48) & 1) != 0) {
                    GameRoutine_64df20((_QWORD*)a1 + 11, *((_QWORD*)v61 - 4),
                                       *((_QWORD*)v61 - 5)),
                        v10 = COERCE_AS(__typeof__(v10),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v57 = COERCE_AS(
                            __typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  else {
                    v67 = *(_QWORD*)v64;
                    v68 = *((_QWORD*)v61 - 4);
                    *((_QWORD*)a1 + 12) = *((_QWORD*)v61 - 5);
                    *((_QWORD*)a1 + 13) = v68;
                    *(_QWORD*)v14 = v67;
                  }
                }
              }
              goto LABEL_135;
            }
            if ((v45 & 1) != 0) {
              v49 = *((_QWORD*)v32 + 8);
            }
            else {
              v49 = (__int64)(v32 + 49);
            }
            if ((v45 & 1) != 0) {
              v50 = *((_QWORD*)v32 + 7);
            }
            else {
              v50 = v45 >> 1;
            }
            SpineModel_64dde0((__int64*)a1 + 4, v49, v50),
                v10 = COERCE_AS(__typeof__(v10),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v57 =
                    COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v48 = *((_QWORD*)a1 + 7);
          if (v48 == 0) {
            goto LABEL_120;
          }
          goto LABEL_102;
        }
      }
    }
    GameRoutine_14984e0(),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v10;
}

__int64 SceneTalk_1497180(unsigned __int64 a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4, __int64 a5, unsigned __int64 a6, int a7)
{
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  _BYTE* v20;
  _BYTE* v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  bool v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  bool v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  char* v39;
  bool v40;
  unsigned __int64 v41;
  char* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 result;
  __int64 v47;
  __int64 v48;
  _QWORD v49[3];

  *(_WORD*)a1 = 0;
  *(_DWORD*)(a1 + 24) = 6;
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_60;
  }
  v12 = (_QWORD*)a1;
  if (a3 >= 0x17) {
    v14 = a2;
    if ((a3 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (a3 | 7) + 1;
    }
    v16 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15, 16, 0);
    a2 = v14;
    v13 = v16;
    v12[5] = a3;
    v12[6] = v16;
    v12[4] = v15 | 1;
  }
  else {
    v13 = a1 + 33;
    *(_BYTE*)(a1 + 32) = 2 * a3;
    if (a3 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v13, a2, a3);
LABEL_10:
  *(_BYTE*)(v13 + a3) = 0;
  v12[7] = a4;
  if (a4 != 0 && (v17 = *(_QWORD*)(a4 + 288)) != 0 &&
      (v18 = GameRoutine_975940(v17)) != 0) {
    v21 = *(_BYTE**)(v18 + 160);
    v19 = (__int64*)(v18 + 160);
    v20 = v21;
    v22 = game_vstring_kEmpty_ptr[0];
    if (v21 != nullptr && *v20 != 0) {
      v22 = v19;
    }
  }
  else {
    v22 = &game_vstring_kEmpty;
  }
  v23 = *v22;
  a1 = strlen(*v22);
  if (a1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_60:
    String_60a1d0(a1);
  }
  v24 = a1;
  if (a1 >= 0x17) {
    if ((a1 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (a1 | 7) + 1;
    }
    v25 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v26, 16, 0);
    v12[9] = v24;
    v12[10] = v25;
    v12[8] = v26 | 1;
    goto LABEL_26;
  }
  v25 = (__int64)v12 + 65;
  *((_BYTE*)v12 + 64) = 2 * a1;
  if (a1 != 0) {
  LABEL_26:
    a1 = memmove(v25, v23, v24);
  }
  *(_BYTE*)(v25 + v24) = 0;
  if (a6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_60;
  }
  if (a6 >= 0x17) {
    if ((a6 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (a6 | 7) + 1;
    }
    v27 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v28, 16, 0);
    v12[12] = a6;
    v12[13] = v27;
    v12[11] = v28 | 1;
    goto LABEL_35;
  }
  v27 = (__int64)v12 + 89;
  *((_BYTE*)v12 + 88) = 2 * a6;
  if (a6 != 0) {
  LABEL_35:
    memmove(v27, a5, a6);
  }
  *(_BYTE*)(v27 + a6) = 0;
  *((_DWORD*)v12 + 28) = a7;
  LOWORD(v49[0]) = 0;
  v29 = *((unsigned __int8*)v12 + 32);
  v30 = (v29 & 1) == 0;
  v31 = v29 >> 1;
  if (v30) {
    v32 = v31;
  }
  else {
    v32 = v12[5];
  }
  v33 = *((unsigned __int8*)v12 + 64);
  if (v30) {
    v34 = (char*)v12 + 33;
  }
  else {
    v34 = (char*)v12[6];
  }
  v35 = (v33 & 1) == 0;
  v36 = v33 >> 1;
  if (v35) {
    v37 = v36;
  }
  else {
    v37 = v12[9];
  }
  v38 = *((unsigned __int8*)v12 + 88);
  if (v35) {
    v39 = (char*)v12 + 65;
  }
  else {
    v39 = (char*)v12[10];
  }
  v40 = (v38 & 1) == 0;
  v41 = v38 >> 1;
  if (v40) {
    v42 = (char*)v12 + 89;
  }
  else {
    v42 = (char*)v12[13];
  }
  if (v40) {
    v43 = v41;
  }
  else {
    v43 = v12[12];
  }
  GameRoutine_1a09ce0(v49, "MID", 3);
  GameRoutine_1a09ce0(v49, &GameData_1ac690d, 1);
  GameRoutine_1a09ce0(v49, &GameData_1ae3887, 2);
  GameRoutine_1a09ce0(v49, &GameData_1ac690d, 1);
  GameRoutine_1a09ce0(v49, v34, v32);
  GameRoutine_1a09ce0(v49, &GameData_1ac690d, 1);
  GameRoutine_1a09ce0(v49, v39, v37);
  GameRoutine_1a09ce0(v49, &GameData_1ac690d, 1);
  GameRoutine_1a09ce0(v49, v42, v43);
  GameRoutine_1a09ce0(v49, &GameData_1ac690d, 1);
  v44 = game_util_Format("%02d", a7);
  v45 = strlen(v44);
  result = GameRoutine_1a09ce0(v49, v44, v45);
  if ((*(_BYTE*)v12 & 1) != 0) {
    v47 = v12[2];
    if (v47 != 0) {
      v48 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v48 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v47);
    }
  }
  qmemcpy(v12, v49, 24);
  return result;
}

__attribute__((swiftcall)) void SceneTalk_1497520(PSEUDO_X8 x8_, __int64 a1,
                                                  unsigned __int64 a2,
                                                  __int64 a3, __int64 a4,
                                                  unsigned __int64 a5, int a6)
{
  __int64* a7 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64* v18;
  char* v19;
  _DWORD* v20;
  int v21;
  unsigned int* v22;
  unsigned int* v23;
  unsigned __int64 v24;
  unsigned int v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned int* v36;
  __int64* v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int* v44;
  __int64* v45;
  char* v46;
  _DWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64* v69;
  struct {
    __int64 v70;
    unsigned __int64 v71;
    char* v72;
    char gap40_[8];
    char v73;
    char gap49_[15];
    __int64 v74;
    char gap72_[8];
    char v75;
    char gap81_[15];
    __int64 v76;
    char v77;
    char gap105_[15];
    __int64 v78;
  } v70_;
  struct {
    __int64 v79;
    unsigned __int64 v80;
    char* v81;
  } v79_;

  v14 = fw_memory_g_heap_manager_ptr;
  v15 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
  v16 = v15;
  *(_WORD*)v15 = 0;
  *(_QWORD*)(v15 + 24) = a1;
  *(_QWORD*)(v15 + 32) = a2;
  if (a6 <= 1) {
    v17 = 1;
  }
  else {
    v17 = a6;
  }
  *(_QWORD*)(v15 + 40) = a3;
  *(_QWORD*)(v15 + 48) = a4;
  *(_QWORD*)(v15 + 56) = a5;
  *(_DWORD*)(v15 + 64) = v17;
  if (a6 < 2) {
    SceneTalk_1497180_alt1(&v70_.v70, a1, a2, a3, a4, a5, 1u);
    v18 = msg_MessageManager_instance__ptr[0];
    if ((v70_.v70 & 1) != 0) {
      v19 = v70_.v72;
    }
    else {
      v19 = (char*)&v70_.v70 + 1;
    }
    if (((unsigned __int8)Registration_a4da40(
             *msg_MessageManager_instance__ptr[0], (__int64)v19) &
         1) != 0 &&
        ((v70_.v70 & 1) != 0 ? (v20 = v70_.v72)
                             : (v20 = (_DWORD*)((char*)&v70_.v70 + 1)),
         (Manager_a51640(*v18, (__int64)v20, v20) & 1) != 0)) {
      if ((v70_.v70 & 1) != 0) {
        fw_text_String_CopyTerminated(&v79_.v79, (__int64)v70_.v72, v70_.v71);
        if ((*(_BYTE*)v16 & 1) == 0) {
          goto LABEL_92;
        }
      }
      else {
        v79_.v79 = v70_.v70;
        v79_.v80 = v70_.v71;
        v79_.v81 = v70_.v72;
        if ((*(_BYTE*)v16 & 1) == 0) {
          goto LABEL_92;
        }
      }
    }
    else {
      LOWORD(v79_.v79) = 0;
      if ((*(_BYTE*)v16 & 1) == 0) {
        goto LABEL_92;
      }
    }
    if (*(_QWORD*)(v16 + 16) != 0) {
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v54);
    }
  LABEL_92:
    v55 = v79_.v79;
    v56 = v79_.v80;
    LOWORD(v79_.v79) = 0;
    *(_QWORD*)v16 = v55;
    *(_QWORD*)(v16 + 8) = v56;
    *(_QWORD*)(v16 + 16) = v79_.v81;
    if ((v70_.v77 & 1) != 0 && v70_.v78 != 0) {
      v57 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v57);
    }
    if ((v70_.v75 & 1) != 0 && v70_.v76 != 0) {
      v58 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v58 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v58);
    }
    if ((v70_.v73 & 1) != 0 && v70_.v74 != 0) {
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v59);
    }
    if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
      v60 = *(_QWORD*)v14;
      goto LABEL_128;
    }
    goto LABEL_131;
  }
  v69 = a7;
  v21 = 0;
  v22 = nullptr;
  v23 = nullptr;
  v24 = 0;
  do {
    v25 = v21 + 1;
    if ((unsigned __int64)v23 < v24) {
      *v23++ = v25;
    }
    else {
      v26 = (char*)((char*)v23 - (char*)v22);
      v27 = v23 - v22;
      v28 = v27 + 1;
      if ((unsigned __int64)(v27 + 1) >> 62 != 0) {
        GameRoutine_6e5a20();
      }
      if ((__int64)(v24 - (_QWORD)v22) >> 1 > v28) {
        v28 = (__int64)(v24 - (_QWORD)v22) >> 1;
      }
      if (v24 - (unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFFCLL) {
        v29 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v29 = v28;
      }
      if (v29 != 0) {
        if (v29 >> 62 != 0) {
          GameRoutine_60a210();
        }
        v30 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v29, 16, 0);
      }
      else {
        v30 = 0;
      }
      v24 = v30 + 4 * v29;
      v31 = (char*)((char*)v23 - (char*)v22);
      v32 = (__int64)&v26[v30 + -4 * v27];
      *(_DWORD*)&v26[v30] = v25;
      v23 = (unsigned int*)&v26[v30 + 4];
      memcpy(v32, v22, v31);
      if (v22 != nullptr) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
      }
      v22 = (unsigned int*)v32;
    }
    ++v21;
  } while (v21 < *(_DWORD*)(v16 + 64));
  v34 = (unsigned __int64)((char*)v23 - (char*)v22) >> 2;
  if ((int)v34 >= 1) {
    v35 = ((unsigned __int64)((char*)v23 - (char*)v22) >> 2) & 0x7FFFFFFF;
    v36 = v22;
    v37 = game_map_MapRandom_instance__ptr[0];
    do {
      nn_os_LockMutex(&game_g_random_mutex);
      v38 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v37);
      v39 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v37 + 4);
      v40 = *(_DWORD*)v37 ^ (*(_DWORD*)v37 << 11);
      *(_DWORD*)v37 = *((_DWORD*)v37 + 1);
      *((_DWORD*)v37 + 1) = v38;
      v41 = (v40 >> 8) ^ (v39 >> 19) ^ v40 ^ v39;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v37) = v39;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v37 + 4) = v41;
      v42 = v41 & 0x7FFFFFFF;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v43 = *v36;
      --v35;
      *v36++ = v22[v42 % (unsigned int)v34];
      v22[v42 % (unsigned int)v34] = v43;
    } while (v35 != 0);
  }
  v14 = fw_memory_g_heap_manager_ptr;
  if (v22 == v23) {
    goto LABEL_126;
  }
  v44 = v22;
  v45 = msg_MessageManager_instance__ptr[0];
  while (1) {
    SceneTalk_1497180_alt1(&v70_.v70, *(_QWORD*)(v16 + 24),
                           *(_QWORD*)(v16 + 32), *(_QWORD*)(v16 + 40),
                           *(_QWORD*)(v16 + 48), *(_QWORD*)(v16 + 56), *v44);
    v46 = (v70_.v70 & 1) != 0 ? v70_.v72 : (char*)&v70_.v70 + 1;
    if (((unsigned __int8)Registration_a4da40(*v45, (__int64)v46) & 1) != 0 &&
        ((v70_.v70 & 1) != 0 ? (v47 = v70_.v72)
                             : (v47 = (_DWORD*)((char*)&v70_.v70 + 1)),
         (Manager_a51640(*v45, (__int64)v47, v47) & 1) != 0)) {
      if ((v70_.v70 & 1) != 0) {
        fw_text_String_CopyTerminated(&v79_.v79, (__int64)v70_.v72, v70_.v71);
        if ((v70_.v77 & 1) == 0) {
          goto LABEL_58;
        }
      }
      else {
        v79_.v79 = v70_.v70;
        v79_.v80 = v70_.v71;
        v79_.v81 = v70_.v72;
        if ((v70_.v77 & 1) == 0) {
          goto LABEL_58;
        }
      }
    }
    else {
      LOWORD(v79_.v79) = 0;
      if ((v70_.v77 & 1) == 0) {
        goto LABEL_58;
      }
    }
    if (v70_.v78 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
        v48 = 128;
      }
      else {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v48);
    }
  LABEL_58:
    if ((v70_.v75 & 1) != 0 && v70_.v76 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
        v49 = 128;
      }
      else {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v49);
    }
    if ((v70_.v73 & 1) != 0 && v70_.v74 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
        v50 = 128;
      }
      else {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v50);
    }
    if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
        v51 = 128;
      }
      else {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v51);
    }
    v52 = (unsigned __int64)(unsigned __int8)v79_.v79 >> 1;
    if ((v79_.v79 & 1) != 0) {
      v52 = v79_.v80;
    }
    if (v52 != 0) {
      break;
    }
    if ((v79_.v79 & 1) != 0 && v79_.v81 != nullptr) {
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
        v53 = 128;
      }
      else {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v53);
    }
    if (++v44 == v23) {
      goto LABEL_126;
    }
  }
  if ((*(_BYTE*)v16 & 1) != 0) {
    if ((v79_.v79 & 1) != 0) {
      v62 = v79_.v81;
    }
    else {
      v62 = (char*)&v79_.v79 + 1;
    }
    SpineModel_64dde0((__int64*)v16, (__int64)v62, v52);
    if ((v79_.v79 & 1) != 0) {
      goto LABEL_122;
    }
  }
  else {
    if ((v79_.v79 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)v16, (__int64)v79_.v81, v79_.v80);
      if ((v79_.v79 & 1) == 0) {
        goto LABEL_126;
      }
    }
    else {
      v61 = v79_.v80;
      *(_QWORD*)v16 = v79_.v79;
      *(_QWORD*)(v16 + 8) = v61;
      *(_QWORD*)(v16 + 16) = v79_.v81;
      if ((v79_.v79 & 1) == 0) {
        goto LABEL_126;
      }
    }
  LABEL_122:
    if (v79_.v81 != nullptr) {
      v63 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v63 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v63);
    }
  }
LABEL_126:
  a7 = v69;
  if (v22 != nullptr) {
    v60 = *(_QWORD*)v14;
  LABEL_128:
    v64 = 128;
    if (*(_QWORD*)(v60 + 200) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v60 + v64);
  }
LABEL_131:
  if ((*(_BYTE*)v16 & 1) != 0) {
    fw_text_String_CopyTerminated(a7, *(_QWORD*)(v16 + 16),
                                  *(_QWORD*)(v16 + 8));
    if ((*(_BYTE*)v16 & 1) != 0 && *(_QWORD*)(v16 + 16) != 0) {
      v66 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v66);
    }
  }
  else {
    v65 = *(_QWORD*)(v16 + 8);
    *a7 = *(_QWORD*)v16;
    a7[1] = v65;
    a7[2] = *(_QWORD*)(v16 + 16);
  }
  v67 = 128;
  if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
    v67 = 56;
  }
  {
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v67);
    return;
  }
}

__attribute__((swiftcall)) void SceneTalk_1497bf0(PSEUDO_X8 x8_,
                                                  unsigned __int64* a1, int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 result;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = *a1;
  if (result == 0 || (result = AssetTableFile_7e94a0(result)) == 0 ||
      (v6 = game_util_Format("V_PTV_%s_%02d", *(const char**)(result + 32), a2),
       result = *game_sound_g_game_sound_ptr[0],
       *game_sound_g_game_sound_ptr[0] == 0) ||
      ((result = GameManager_a35ca0(result, v6)) & 1) == 0) {
    *(_WORD*)a3 = 0;
    {
      result;
      return;
    }
  }
  result = strlen(v6);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    *(_QWORD*)(a3 + 8) = v7;
    *(_QWORD*)(a3 + 16) = v10;
    *(_QWORD*)a3 = v9 | 1;
    v8 = v10;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v8 = a3 + 1;
    if (result == 0) {
      goto LABEL_15;
    }
  }
  result = memmove(v8, v6, v7);
LABEL_15:
  *(_BYTE*)(v8 + v7) = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void SceneTalk_1497cf0(PSEUDO_X8 x8_,
                                                  unsigned __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (result == 0 || (result = AssetTableFile_7e94a0(result)) == 0 ||
      (v3 = game_util_Format("V_PTV_%s_Bird", *(const char**)(result + 32)),
       result = *game_sound_g_game_sound_ptr[0],
       *game_sound_g_game_sound_ptr[0] == 0) ||
      ((result = GameManager_a35ca0(result, v3)) & 1) == 0) {
    *(_WORD*)a2 = 0;
    {
      result;
      return;
    }
  }
  result = strlen(v3);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v4 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (result | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v6, 16, 0);
    *(_QWORD*)(a2 + 8) = v4;
    *(_QWORD*)(a2 + 16) = v7;
    *(_QWORD*)a2 = v6 | 1;
    v5 = v7;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v5 = a2 + 1;
    if (result == 0) {
      goto LABEL_15;
    }
  }
  result = memmove(v5, v3, v4);
LABEL_15:
  *(_BYTE*)(v5 + v4) = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void SceneTalk_1497de0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int16 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v18;
  int v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v26;
  int v27;
  unsigned __int64 result;
  int v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  _BYTE* v40;
  _BYTE* v41;
  __int64* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  _BYTE* v57;
  _BYTE* v58;
  __int64* v59;
  __int64 v60;
  void* v61;
  char* v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  int v73;
  void* v74;
  char vars0;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v4 = *(unsigned __int8*)(a1 + 32);
  if ((v4 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 40);
  }
  else {
    v7 = v4 >> 1;
  }
  if ((v4 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 48);
  }
  else {
    v8 = a1 + 33;
  }
  if (v7 >= 5) {
    v9 = 5;
  }
  else {
    v9 = v7;
  }
  if ((unsigned int)memcmp(v8, "whole", v9) != 0 || v7 != 5 ||
      (a2 & 0x100) == 0) {
    goto LABEL_18;
  }
  if ((unsigned __int8)a2 > 2u) {
    switch ((unsigned __int8)a2) {
    case 3u:
      result = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *a3 = 33;
      v48 = &GameData_1ab983a;
      a3[1] = 29;
      a3[2] = result;
      break;
    case 4u:
      result = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *a3 = 33;
      a3[1] = 29;
      a3[2] = result;
      v48 = &GameData_1aeb2e5;
      break;
    case 5u:
      v36 = *(_QWORD*)(a1 + 56);
      if (v36 != 0 && (v37 = *(_QWORD*)(v36 + 288)) != 0 &&
          (v38 = GameRoutine_975940_alt1(v37)) != 0) {
        v41 = *(_BYTE**)(v38 + 160);
        v39 = (__int64*)(v38 + 160);
        v40 = v41;
        v42 = game_vstring_kEmpty_ptr[0];
        if (v41 != nullptr && *v40 != 0) {
          v42 = v39;
        }
      }
      else {
        v42 = &game_vstring_kEmpty;
      }
      v60 = *v42;
      v61 = &GameData_1aeb303;
      goto LABEL_106;
    default:
      goto LABEL_18;
    }
    v49 = *v48;
    v50 = v48[1];
    *(_BYTE*)(result + 29) = 0;
    *(_QWORD*)result = v49;
    *(_QWORD*)(result + 8) = v50;
    v51 = v48[2];
    v52 = *(__int64*)((char*)v48 + 21);
    *(_QWORD*)(result + 16) = v51;
    *(_QWORD*)(result + 21) = v52;
    {
      result;
      return;
    }
  }
  if ((unsigned __int8)a2 == 1) {
    v53 = *(_QWORD*)(a1 + 56);
    if (v53 != 0 && (v54 = *(_QWORD*)(v53 + 288)) != 0 &&
        (v55 = GameRoutine_975940_alt1(v54)) != 0) {
      v58 = *(_BYTE**)(v55 + 160);
      v56 = (__int64*)(v55 + 160);
      v57 = v58;
      v59 = game_vstring_kEmpty_ptr[0];
      if (v58 != nullptr && *v57 != 0) {
        v59 = v56;
      }
    }
    else {
      v59 = &game_vstring_kEmpty;
    }
    v60 = *v59;
    v61 = &GameData_1aeee64;
  LABEL_106:
    v62 = game_util_Format_alt1((__int64)v61, v60, v10, v11, v12, v13, v14, v15,
                                vars0),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    result = strlen(v62),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1(),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v63 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v65 = 26;
      }
      else {
        v65 = (result | 7) + 1;
      }
      v66 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v65,
                                                16, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      a3[1] = v63;
      a3[2] = v66;
      *a3 = v65 | 1;
      v64 = (char*)v66;
    }
    else {
      *(_BYTE*)a3 = 2 * result;
      v64 = (char*)a3 + 1;
      if (result == 0) {
        goto LABEL_115;
      }
    }
    result = memmove(v64, v62, v63),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_115:
    v64[v63] = 0;
    {
      result;
      return;
    }
  }
  if ((unsigned __int8)a2 == 2) {
    result = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *(_BYTE*)(result + 35) = 0;
    *a3 = 41;
    a3[1] = 35;
    a3[2] = result;
    *(_DWORD*)(result + 31) = -2136414047;
    *(_QWORD*)result = 0x83E3A383E3AD82E3LL;
    *(_QWORD*)(result + 8) = 0x5F8583E6A8A1E8A9LL;
    *(_QWORD*)(result + 16) = 0x83E3AB83E38683E3LL;
    *(_QWORD*)(result + 24) = 0xA184E75FA882E39ELL;
    {
      result;
      return;
    }
  }
LABEL_18:
  if (v7 >= 4) {
    v18 = 4;
  }
  else {
    v18 = v7;
  }
  v19 = memcmp(v8, "Bird", v18),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v7 == 4 && v19 == 0) {
    v21 = *(unsigned __int8*)(a1 + 88);
    v22 = (v21 & 1) != 0 ? *(_QWORD*)(a1 + 96) : v21 >> 1;
    v23 = (v21 & 1) != 0 ? *(_QWORD*)(a1 + 104) : a1 + 89;
    v24 = v22 >= 3 ? 3LL : v22;
    if ((unsigned int)memcmp(v23, "m01", v24) == 0 && v22 == 3) {
      result = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(_BYTE*)(result + 44) = 0;
      *a3 = 49;
      a3[1] = 44;
      a3[2] = result;
      *(_DWORD*)(result + 40) = -1232345432;
      *(_QWORD*)(result + 16) = 0xB383E3A783E3B782LL;
      *(_QWORD*)(result + 24) = 0xE3BE81E3A2ADE65FLL;
      *(_QWORD*)(result + 32) = 0x8CE65FA89CE68A82LL;
      *(_QWORD*)result = 0x83E3A383E3AD82E3LL;
      *(_QWORD*)(result + 8) = 0xE3BC83E3A283E3A9LL;
      {
        result;
        return;
      }
    }
  }
  if (v7 >= 0xA) {
    v26 = 10;
  }
  else {
    v26 = v7;
  }
  v27 = memcmp(v8, "StageWatch", v26),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v7 == 10 && v27 == 0) {
    v43 = *(unsigned __int8*)(a1 + 88);
    if ((v43 & 1) != 0) {
      v44 = *(_QWORD*)(a1 + 96);
    }
    else {
      v44 = v43 >> 1;
    }
    if ((v43 & 1) != 0) {
      v45 = *(_QWORD*)(a1 + 104);
    }
    else {
      v45 = a1 + 89;
    }
    if (v44 >= 3) {
      v46 = 3;
    }
    else {
      v46 = v44;
    }
    if ((unsigned int)memcmp(v45, "m01", v46) != 0 || v44 != 3) {
      v47 = memcmp(v45, &GameData_1ae1fdd, v46),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v44 != 3 || v47 != 0) {
        result = memcmp(v45, "m03", v46),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v44 != 3 || (_DWORD)result != 0) {
          goto LABEL_134;
        }
        result = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        *a3 = 57;
        a3[1] = 51;
        a3[2] = result;
        *(_DWORD*)(result + 47) = -1434261888;
        v35 = &GameData_1afaa82;
      }
      else {
        result = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        *a3 = 57;
        a3[1] = 51;
        a3[2] = result;
        *(_DWORD*)(result + 47) = -1702827602;
        v35 = &GameData_1a9278d;
      }
    }
    else {
      result = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *a3 = 57;
      a3[1] = 51;
      a3[2] = result;
      *(_DWORD*)(result + 47) = -1113201233;
      v35 = &GameData_1aeb33a;
    }
    v67 = v35[2];
    v68 = v35[3];
    *(_BYTE*)(result + 51) = 0;
  LABEL_120:
    *(_QWORD*)(result + 16) = v67;
    *(_QWORD*)(result + 24) = v68;
    v69 = v35[5];
    *(_QWORD*)(result + 32) = v35[4];
    *(_QWORD*)(result + 40) = v69;
  LABEL_121:
    v71 = *v35;
    v70 = v35[1];
    *(_QWORD*)result = v71;
    *(_QWORD*)(result + 8) = v70;
    {
      result;
      return;
    }
  }
  result = memcmp(v8, "Meal", v18),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v7 == 4 && (_DWORD)result == 0) {
    v30 = *(_DWORD*)(a1 + 24);
    if (v30 == 7) {
      v72 = *(_DWORD*)(a1 + 112);
      if (v72 == 2) {
        v74 = &GameData_1af6b87;
        {
          Manager_6326c0(a3, (__int64)v74),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          return;
        }
      }
      if (v72 == 1) {
        result = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        *(_BYTE*)(result + 46) = 0;
        *a3 = 49;
        v35 = &GameData_1ab9858;
        a3[1] = 46;
        a3[2] = result;
        *(_QWORD*)(result + 16) = 0xB383E3A783E3B782LL;
        *(_QWORD*)(result + 24) = 0x5F82A0E59FA3E95FLL;
        *(_QWORD*)(result + 32) = 0x90E59181E39B8EE6LL;
        *(_QWORD*)(result + 38) = 0x305F8481E38890E5LL;
        goto LABEL_121;
      }
    }
    else if (v30 == 6) {
      v31 = *(unsigned __int8*)(a1 + 88);
      if ((v31 & 1) != 0) {
        v32 = *(_QWORD*)(a1 + 96);
      }
      else {
        v32 = v31 >> 1;
      }
      if ((v31 & 1) != 0) {
        v33 = *(_QWORD*)(a1 + 104);
      }
      else {
        v33 = a1 + 89;
      }
      if (v32 >= 3) {
        v34 = 3;
      }
      else {
        v34 = v32;
      }
      if ((unsigned int)memcmp(v33, "m01", v34) == 0 && v32 == 3) {
        result = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        *a3 = 57;
        v35 = &GameData_1ad7f52;
        a3[1] = 48;
        a3[2] = result;
      LABEL_128:
        v67 = v35[2];
        v68 = v35[3];
        *(_BYTE*)(result + 48) = 0;
        goto LABEL_120;
      }
      v73 = memcmp(v33, &GameData_1ae1fdd, v34),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v32 == 3 && v73 == 0) {
        result = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        *a3 = 57;
        a3[1] = 48;
        a3[2] = result;
        v35 = &GameData_1ab567f;
        goto LABEL_128;
      }
      result = memcmp(v33, "m03", v34),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v32 == 3 && (_DWORD)result == 0) {
        v74 = &GameData_1a966c6;
        {
          Manager_6326c0(a3, (__int64)v74),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          return;
        }
      }
    }
  }
LABEL_134:
  *(_WORD*)a3 = 0;
  {
    result;
    return;
  }
}

__int64 game_facility_SceneTalk_Args_Args_lambda0_Invoke(__int64 result,
                                                         __int64 a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  unsigned __int8* v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned __int8* v11;
  __int64 v12;

  v2 = *(unsigned __int8**)(result + 8);
  v3 = v2 + 64;
  if ((v2[64] & 1) != 0) {
    v4 = *((_QWORD*)v2 + 9);
  }
  else {
    v4 = (unsigned __int64)v2[64] >> 1;
  }
  if (v4 == 0) {
    v5 = *(unsigned __int8**)(*(_QWORD*)a2 + 160LL);
    v6 = *v2;
    if ((v6 & 1) != 0) {
      v7 = *((unsigned __int8**)v2 + 2);
    }
    else {
      v7 = v2 + 1;
    }
    if ((v6 & 1) != 0) {
      v8 = *((_QWORD*)v2 + 1);
    }
    else {
      v8 = v6 >> 1;
    }
    result = strlen(*(_QWORD*)(*(_QWORD*)a2 + 160LL));
    if (result != 0) {
      v9 = result;
      if (v8 >= result) {
        v10 = *v5;
        v11 = &v7[v8];
        result = (__int64)v7;
        do {
          result = memchr(result, v10, v8 - v9 + 1);
          if (result == 0) {
            break;
          }
          v12 = result;
          result = memcmp(result, v5, v9);
          if ((_DWORD)result == 0) {
            if ((unsigned __int8*)v12 == v11 || v12 - (_QWORD)v7 == -1) {
              return result;
            }
            return GameRoutine_60a020(v3, v5);
          }
          result = v12 + 1;
          v8 = (__int64)&v11[-v12 - 1];
        } while (v8 >= v9);
      }
    }
    else {
      return GameRoutine_60a020(v3, v5);
    }
  }
  return result;
}

#pragma GCC visibility pop
