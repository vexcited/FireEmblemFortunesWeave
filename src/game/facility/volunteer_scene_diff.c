#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1451020(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
game_facility_VolunteerSceneDiff_OnReadyResult_lambda0_Invoke_alt1() __asm__(
    "game_facility_VolunteerSceneDiff_OnReadyResult_lambda0_Invoke");
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8, __int64, __int64);
__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1400c40(__int64, __int64*, char, __int64);
__int64 GameRoutine_195b020(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneCharacter_14020c0(_QWORD);
__int64 SceneManager_138a920(_QWORD, _QWORD);
__int64 SceneManager_138c000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138d3a0(_QWORD, _QWORD);
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_facility_SceneManager_CreateMob(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_212dce8;
extern __int64 GameData_212e1c0;
extern __int64 GameData_2131338[2];
extern __int64 GameData_2241750;
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1aa238b[];
extern char GameData_1aa5e95[];
extern char GameData_1ab561d[];
extern char GameData_1ad7e93[];
extern const char GameData_1a9e31c[];
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void VolunteerSceneDiff_141d200(PSEUDO_X8 x8_,
                                                           __int64 a1);
unsigned __int64
game_facility_VolunteerSceneDiff_Initialize_lambda0_Invoke_alt1(
    __int64 a1) __asm__("game_facility_VolunteerSceneDiff_Initialize_lambda0_"
                        "Invoke");
unsigned __int64
game_facility_VolunteerSceneDiff_Initialize_lambda2_Invoke_alt1(
    __int64 a1) __asm__("game_facility_VolunteerSceneDiff_Initialize_lambda2_"
                        "Invoke");
__attribute__((swiftcall)) void game_facility_1451020(PSEUDO_X8, __int64,
                                                      __int64, __int64);
__int64 SceneManager_138c000_alt1(_QWORD*, unsigned __int8*, __int64,
                                  __int64) __asm__("SceneManager_138c000");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
bool GameRoutine_1389160_alt1(__int64, __int64,
                              __int64) __asm__("GameRoutine_1389160");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_195b020_alt1(__int64, int, unsigned __int8*, __int64*,
                              __int64*) __asm__("GameRoutine_195b020");
void GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
void SceneManager_138a920_alt1(__int64,
                               __int64) __asm__("SceneManager_138a920");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void game_facility_SceneManager_CreateMob_alt1(_QWORD*, __int64) __asm__(
    "game_facility_SceneManager_CreateMob");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_VolunteerSceneDiff_Initialize_lambda0_Invoke(__int64 a1);
__attribute__((swiftcall)) void
game_facility_VolunteerSceneDiff_OnReadyResult_lambda0_Invoke(PSEUDO_X8 x8_);
_QWORD* SceneCharacter_14020c0_alt1(__int64) __asm__("SceneCharacter_14020c0");
__attribute__((swiftcall)) void SceneCharacterAppearance_140f320_alt1(
    PSEUDO_X8, __int64*, __int64) __asm__("SceneCharacterAppearance_140f320");
__int64 SceneManager_138e5e0_alt1(__int64) __asm__("SceneManager_138e5e0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void SceneManager_138d3a0_alt1(_QWORD*,
                               __int64) __asm__("SceneManager_138d3a0");
void game_facility_VolunteerSceneDiff_Initialize_lambda2_Invoke(__int64 a1);
_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8, __int64,
                                                      __int64);
__int64 GameHr_14127e0(__int64, unsigned __int8*);
__int64 SceneCharacter_1400a90(_QWORD*, __int64);
__int64 SceneManager_138c8e0(__int64, __int64);
__int64 game_facility_SceneCharacterLookAt_ReserveResetOnRelocate(_QWORD*,
                                                                  __int64,
                                                                  float);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20330a8[])();
extern __int64 (*GameData_203a300[])();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern char GameData_1a86e5d[];
extern char GameData_1aeb23d[];
extern char GameData_1afe4d7[];
float GameHr_144f360(__int64);
float game_facility_14107c0(__int64, __int64);
void SceneManager_138d7c0(__int64, __int64, __int64);
void game_facility_VolunteerSceneDiff_Initialize_lambda1_Invoke(__int64 a1);
__int64 game_facility_VolunteerSceneDiff_OnReadyResult();

__attribute__((swiftcall)) void VolunteerSceneDiff_141d200(PSEUDO_X8 x8_,
                                                           __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 24);
  }
  else {
    v3 = a1 + 9;
  }
  v4 = game_util_Format(GameData_1ab561d, v3);
  result = game_HashString(v4);
  if (result == 0) {
    goto LABEL_34;
  }
  v6 = *(_QWORD*)(GameData_2241750 + 96);
  if (v6 == 0 || *(_QWORD*)(GameData_2241750 + 112) == 0) {
    goto LABEL_34;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = result;
    if (result >= v6) {
      v9 = result % v6;
    }
  }
  else {
    v9 = v8 & result;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(GameData_2241750 + 88) + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_34;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_34;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == result) {
        if (v11[2] == result) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_34;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        goto LABEL_34;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == result) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_34;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_34;
    }
  }
  if (v11[2] != result) {
    goto LABEL_18;
  }
LABEL_29:
  if (v11[3] != 0) {
    result = strlen(v4);
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(result);
    }
    v14 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (result | 7) + 1;
      }
      v15 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17, 16, 0);
      *(_QWORD*)(a2 + 8) = v14;
      *(_QWORD*)(a2 + 16) = v15;
      *(_QWORD*)a2 = v17 | 1;
    }
    else {
      *(_BYTE*)a2 = 2 * result;
      v15 = a2 + 1;
      if (result == 0) {
      LABEL_41:
        v16 = 1;
        *(_BYTE*)(v15 + v14) = 0;
        goto LABEL_35;
      }
    }
    result = memmove(v15, v4, v14);
    goto LABEL_41;
  }
LABEL_34:
  v16 = 0;
  *(_BYTE*)a2 = 0;
LABEL_35:
  *(_BYTE*)(a2 + 24) = v16;
  {
    result;
    return;
  }
}

void __attribute__((noreturn)) VolunteerSceneDiff_141d730() { __udf(0x8002u); }

void game_facility_VolunteerSceneDiff_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  const char* v2;
  __int64 v3;
  const char* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int128 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
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
  char* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44[3];
  __int64 v45[3];
  struct {
    _QWORD v46[2];
    char* v47;
  } v46_;
  struct {
    __int64 v48;
    unsigned __int64 v49;
    __int128 v50;
    int v51;
    char gap148_[4];
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
  } v48_;
  struct {
    __int64 v61;
    unsigned __int64 v62;
  } v61_;
  struct {
    __int128 v63;
    __int64 v64;
    __int64 v65;
    __int128* v66;
    __int64 v67;
    __int128 v68;
    int v69;
    char gap308_[4];
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    char v79;
    char gap385_[15];
    char v80;
    char gap401_[47];
    __int64 v81;
  } v63_;

  v63_.v66 = nullptr;
  v63_.v67 = 0;
  v63_.v64 = 0;
  v63_.v65 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v63_.v63 = (__typeof__(v63_.v63)){0};
  *(_QWORD*)&v63_.v68 = 0;
  v2 = *(const char**)(v1 + 24);
  v3 = v1 + 9;
  v61_.v61 = GameData_2131338[0] + 16;
  v61_.v62 = 0;
  if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = (const char*)(v1 + 9);
  }
  v5 = strlen_alt1(v4);
  GameRoutine_1389160_alt1((__int64)&v61_.v61, (__int64)v4, v5);
  SceneManager_138a920_alt1(*(_QWORD*)GameData_212dce8, (__int64)&v61_.v61);
  v61_.v61 = GameData_212e1c0 + 16;
  if (v63_.v66 == &v63_.v63) {
    v6 = 32;
    goto LABEL_8;
  }
  if (v63_.v66 != nullptr) {
    v6 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*(_QWORD*)v63_.v66 + v6))((__int64)v63_.v66);
  }
  v7 = 0;
  v8 = 1;
  do {
    v9 = v8;
    if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
      v10 = *(_QWORD*)(v1 + 24);
    }
    else {
      v10 = v3;
    }
    v11 = game_util_Format_alt1(GameData_1aa238b, v10, (unsigned int)v7);
    v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 16LL) + 8 * v7);
    LOBYTE(v63_.v66) = 0;
    v63_.v79 = 0;
    v63_.v80 = 0;
    v63_.v81 = 0;
    LOBYTE(v63_.v63) = 20;
    strcpy((char*)&v63_.v63 + 9, "_D");
    *(_QWORD*)((char*)&v63_.v63 + 1) = 0x335FAC9CE6BA9FE5LL;
    if (v12 != 0) {
      v13 = *(_QWORD*)(v12 + 392);
    }
    else {
      v13 = 0;
    }
    v46_.v46[0] = v13;
    SceneCharacterAppearance_140f320((void*)(&v48_.v48), (__int64)v46_.v46,
                                     (__int64)v11);
    v61_.v61 = v48_.v48;
    v61_.v62 = v48_.v49;
    if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
      v14 = *(_QWORD*)(v1 + 24);
    }
    else {
      v14 = v3;
    }
    v15 = game_util_Format_alt1(GameData_1a9e31c, v14, (unsigned int)v7);
    v16 = strlen_alt1(v15);
    if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_85:
      String_60a1d0_alt1();
    }
    v17 = v16;
    if (v16 >= 0x17) {
      if ((v16 | 7) == 0x17) {
        v19 = 26;
      }
      else {
        v19 = (v16 | 7) + 1;
      }
      v18 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v19, 16, 0);
      v46_.v46[1] = v17;
      v46_.v47 = v18;
      v46_.v46[0] = v19 | 1;
    LABEL_28:
      memmove_alt1((__int64)v18, (__int64)v15, v17);
      goto LABEL_29;
    }
    v18 = (char*)v46_.v46 + 1;
    LOBYTE(v46_.v46[0]) = 2 * v16;
    if (v16 != 0) {
      goto LABEL_28;
    }
  LABEL_29:
    v18[v17] = 0;
    LOWORD(v45[0]) = 0;
    LOWORD(v44[0]) = 0;
    GameRoutine_195b020_alt1((__int64)&v48_.v48, 1669996436,
                             (unsigned __int8*)v46_.v46, v45, v44);
    LODWORD(v63_.v66) = v48_.v48;
    if (v63_.v79 != 1) {
      v25 = v48_.v52;
      v26 = v48_.v53;
      v48_.v52 = 0;
      v48_.v53 = 0;
      v63_.v70 = v25;
      v63_.v71 = v26;
      v27 = v48_.v56;
      v28 = v48_.v57;
      v63_.v68 = v48_.v50;
      v48_.v56 = 0;
      v48_.v57 = 0;
      v63_.v69 = v48_.v51;
      v63_.v74 = v27;
      v63_.v75 = v28;
      v29 = v48_.v54;
      v30 = v48_.v55;
      v48_.v54 = 0;
      v48_.v55 = 0;
      v63_.v72 = v29;
      v63_.v73 = v30;
      v32 = v48_.v59;
      v31 = v48_.v60;
      v48_.v59 = 0;
      v48_.v60 = 0;
      v63_.v77 = v32;
      v63_.v78 = v31;
      v33 = v48_.v58;
      v48_.v58 = 0;
      v63_.v76 = v33;
      v63_.v79 = 1;
    LABEL_51:
      if ((v48_.v52 & 1) == 0) {
        goto LABEL_58;
      }
    LABEL_54:
      if (v48_.v54 != 0) {
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v48_.v54);
      }
      goto LABEL_58;
    }
    *(_QWORD*)&v20 = v48_.v50;
    *((_QWORD*)&v20 + 1) = DWORD2(v48_.v50);
    v63_.v69 = v48_.v51;
    v63_.v68 = v20;
    if ((v63_.v70 & 1) != 0 && v63_.v72 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v63_.v72);
    }
    v63_.v70 = v48_.v52;
    v63_.v71 = v48_.v53;
    LOWORD(v48_.v52) = 0;
    v63_.v72 = v48_.v54;
    if ((v63_.v73 & 1) != 0 && v63_.v75 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v63_.v75);
    }
    v63_.v73 = v48_.v55;
    v63_.v74 = v48_.v56;
    LOWORD(v48_.v55) = 0;
    v63_.v75 = v48_.v57;
    if ((v63_.v76 & 1) == 0 || v63_.v78 == 0) {
      v63_.v76 = v48_.v58;
      v63_.v77 = v48_.v59;
      LOWORD(v48_.v58) = 0;
      v63_.v78 = v48_.v60;
      if ((v48_.v52 & 1) == 0) {
        goto LABEL_58;
      }
      goto LABEL_54;
    }
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v63_.v78);
    v63_.v76 = v48_.v58;
    v63_.v77 = v48_.v59;
    LOWORD(v48_.v58) = 0;
    v63_.v78 = v48_.v60;
    if ((v48_.v55 & 1) == 0 || v48_.v57 == 0) {
      goto LABEL_51;
    }
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v48_.v57);
    if ((v48_.v52 & 1) != 0) {
      goto LABEL_54;
    }
  LABEL_58:
    if ((v46_.v46[0] & 1) != 0 && v46_.v47 != nullptr) {
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, (__int64)v46_.v47);
    }
    v36 = *(_QWORD**)GameData_212dce8;
    v37 = game_util_Format_alt1(GameData_1aa5e95, (unsigned int)v7);
    v38 = strlen_alt1(v37);
    if (v38 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_85;
    }
    v39 = v38;
    if (v38 >= 0x17) {
      if ((v38 | 7) == 0x17) {
        v41 = 26;
      }
      else {
        v41 = (v38 | 7) + 1;
      }
      v40 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v41, 16, 0);
      v48_.v49 = v39;
      *(_QWORD*)&v48_.v50 = v40;
      v48_.v48 = v41 | 1;
    }
    else {
      v40 = (char*)&v48_.v48 + 1;
      LOBYTE(v48_.v48) = 2 * v38;
      if (v38 == 0) {
        goto LABEL_72;
      }
    }
    memmove_alt1((__int64)v40, (__int64)v37, v39);
  LABEL_72:
    v40[v39] = 0;
    SceneManager_138c000_alt1(v36, (unsigned __int8*)&v48_.v48, v12,
                              (__int64)&v61_.v61);
    if ((v48_.v48 & 1) != 0 && (_QWORD)v48_.v50 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v48_.v50);
    }
    GameRoutine_a0d9a0_alt1((__int64)&v61_.v61);
    v3 = v1 + 9;
    v7 = 1;
    v8 = 0;
  } while ((v9 & 1) != 0);
  VolunteerSceneDiff_141d200((void*)((__int64)&v61_.v61), v1);
  if ((BYTE8(v63_.v63) & 1) != 0) {
    game_facility_SceneManager_CreateMob_alt1(*(_QWORD**)GameData_212dce8,
                                              (__int64)&v61_.v61);
    if (BYTE8(v63_.v63) == 1 && (v61_.v61 & 1) != 0 && (_QWORD)v63_.v63 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v63_.v63);
    }
  }
}

void game_facility_VolunteerSceneDiff_Initialize_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
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
  __int64* v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  char* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int64 v38;
    unsigned __int64 v39;
    __int64 v40;
    char v41;
  } v38_;
  struct {
    __int64 v42;
    unsigned __int64 v43;
    char* v44;
    char gap72_[8];
    __int64* v45;
  } v42_;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = (__int64*)GameData_212dce8;
  if ((int)((*(_QWORD*)(*(_QWORD*)(v1 + 96) + 24LL) -
             *(_QWORD*)(*(_QWORD*)(v1 + 96) + 16LL)) >>
            3) >= 1) {
    v3 = 0;
    while (1) {
      if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
        v4 = *(_QWORD*)(v1 + 24);
      }
      else {
        v4 = v1 + 9;
      }
      v5 = game_util_Format_alt1(GameData_1aeb23d, v4, (unsigned int)v3);
      v6 = *(_QWORD*)(*(_QWORD*)(*v2 + 160) + 8 * v3);
      v7 = strlen_alt1(v5);
      if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_70;
      }
      v8 = v7;
      if (v7 >= 0x17) {
        break;
      }
      v9 = (char*)&v38_.v38 + 1;
      LOBYTE(v38_.v38) = 2 * v7;
      if (v7 != 0) {
        goto LABEL_15;
      }
    LABEL_16:
      v9[v8] = 0;
      game_facility_14107c0((__int64)&v42_.v42, (__int64)&v38_.v38);
      v14 = *(_QWORD*)(v6 + 112);
      v15 = *(_QWORD*)(v6 + 120);
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
        GameHr_14127e0(v14, (unsigned __int8*)&v42_.v42);
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak_alt1(v15);
        }
        if ((v42_.v42 & 1) == 0) {
          goto LABEL_26;
        }
      LABEL_22:
        if (v42_.v44 != nullptr) {
          v16 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v42_.v44);
        }
        goto LABEL_26;
      }
      GameHr_14127e0(v14, (unsigned __int8*)&v42_.v42);
      if ((v42_.v42 & 1) != 0) {
        goto LABEL_22;
      }
    LABEL_26:
      if ((v38_.v38 & 1) != 0 && v38_.v40 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v38_.v40);
      }
      if (++v3 >= (int)((*(_QWORD*)(*(_QWORD*)(v1 + 96) + 24LL) -
                         *(_QWORD*)(*(_QWORD*)(v1 + 96) + 16LL)) >>
                        3)) {
        goto LABEL_31;
      }
    }
    v10 = v2;
    if ((v7 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v7 | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v11, 16,
                                              0);
    v13 = v11 | 1;
    v9 = (char*)v12;
    v38_.v39 = v8;
    v38_.v40 = v12;
    v2 = v10;
    v38_.v38 = v13;
  LABEL_15:
    memmove_alt1((__int64)v9, (__int64)v5, v8);
    goto LABEL_16;
  }
LABEL_31:
  VolunteerSceneDiff_141d200((void*)((__int64)&v38_.v38), v1);
  if ((v38_.v41 & 1) != 0) {
    v18 = *v2;
    if ((SceneManager_138c8e0(*v2, (__int64)&v38_.v38) & 1) != 0) {
      LODWORD(v42_.v43) = 0;
      v42_.v42 = (__int64)GameData_20330a8;
      v42_.v45 = &v42_.v42;
      SceneManager_138d7c0(v18, (__int64)&v38_.v38, (__int64)&v42_.v42);
      if (v42_.v45 == &v42_.v42) {
        v19 = 32;
        goto LABEL_37;
      }
      if (v42_.v45 != nullptr) {
        v19 = 40;
      LABEL_37:
        (*(void (**)(__int64))(*v42_.v45 + v19))((__int64)v42_.v45);
      }
    }
    if (v38_.v41 == 1 && (v38_.v38 & 1) != 0 && v38_.v40 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v38_.v40);
    }
  }
  v21 = *(_QWORD*)(*v2 + 264);
  if (v21 != 0) {
    v22 = *(_QWORD*)(*v2 + 256);
    v23 = *(_QWORD*)(*v2 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
    v24 = std___1___shared_weak_count_lock(v23);
    std___1___shared_weak_count___release_weak_alt1(v21);
    if (v24 != 0) {
      if (v22 == 0) {
      LABEL_67:
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          std___1___shared_weak_count___release_weak_alt1(v24);
        }
        return;
      }
      if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
        v25 = *(_QWORD*)(v1 + 24);
      }
      else {
        v25 = v1 + 9;
      }
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v26 = game_map_MapRandom_instance__ptr[0];
      v27 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v29 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v26 + 1) = v27;
      v30 = (v29 >> 8) ^ (v28 >> 19) ^ v29 ^ v28;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26) = v28;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26 + 4) = v30;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v31 = game_util_Format_alt1(GameData_1a86e5d, v25, (v30 & 1u) + 1);
      v32 = strlen_alt1(v31);
      if (v32 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_70:
        String_60a1d0_alt1();
      }
      v33 = v32;
      if (v32 >= 0x17) {
        if ((v32 | 7) == 0x17) {
          v35 = 26;
        }
        else {
          v35 = (v32 | 7) + 1;
        }
        v34 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v35, 16, 0);
        v42_.v43 = v33;
        v42_.v44 = v34;
        v42_.v42 = v35 | 1;
      }
      else {
        LOBYTE(v42_.v42) = 2 * v32;
        v34 = (char*)&v42_.v42 + 1;
        if (v32 == 0) {
        LABEL_59:
          v34[v33] = 0;
          game_facility_144f120((void*)(&v38_.v38), v22, (__int64)&v42_.v42);
          v36 = v38_.v39;
          if (v38_.v39 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v38_.v39 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
            std___1___shared_weak_count___release_weak_alt1(v36);
          }
          if ((v42_.v42 & 1) != 0 && v42_.v44 != nullptr) {
            v37 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v37 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                (__int64)v42_.v44);
          }
          goto LABEL_67;
        }
      }
      memmove_alt1((__int64)v34, (__int64)v31, v33);
      goto LABEL_59;
    }
  }
}

void game_facility_VolunteerSceneDiff_Initialize_lambda2_Invoke(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _BYTE v14[16];
    __int64 v15;
    char v16;
    char gap25_[7];
    _BYTE* v17;
  } v14_;
  _QWORD* v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = (__int64*)GameData_212dce8;
  v3 = SceneManager_138e5e0_alt1(*(_QWORD*)GameData_212dce8);
  if (v3 == 0) {
    goto LABEL_10;
  }
  v4 = v3;
  v5 = game_util_Format_alt1(GameData_1ad7e93, 0);
  v18 = SceneCharacter_14020c0_alt1(v4);
  SceneCharacterAppearance_140f320((void*)(&v19_.v19), (__int64)&v18,
                                   (__int64)v5);
  v14_.v17 = nullptr;
  GameRoutine_1400c40(v4, &v19_.v19, 0, (__int64)v14_.v14);
  if (v14_.v17 == v14_.v14) {
    v6 = 32;
    goto LABEL_6;
  }
  if (v14_.v17 != nullptr) {
    v6 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*(_QWORD*)v14_.v17 + v6))((__int64)v14_.v17);
  }
  v7 = v19_.v20;
  if (v19_.v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
LABEL_10:
  v8 = SceneManager_138e5e0_alt1(*v2);
  if (v8 == 0) {
    goto LABEL_19;
  }
  v9 = v8;
  v10 = game_util_Format_alt1(GameData_1ad7e93, 1);
  v18 = SceneCharacter_14020c0_alt1(v9);
  SceneCharacterAppearance_140f320((void*)(&v19_.v19), (__int64)&v18,
                                   (__int64)v10);
  v14_.v17 = nullptr;
  GameRoutine_1400c40(v9, &v19_.v19, 0, (__int64)v14_.v14);
  if (v14_.v17 == v14_.v14) {
    v11 = 32;
    goto LABEL_15;
  }
  if (v14_.v17 != nullptr) {
    v11 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*(_QWORD*)v14_.v17 + v11))((__int64)v14_.v17);
  }
  v12 = v19_.v20;
  if (v19_.v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
LABEL_19:
  VolunteerSceneDiff_141d200((void*)((__int64)v14_.v14), v1);
  if (v14_.v16 == 1) {
    SceneManager_138d3a0_alt1((_QWORD*)*v2, (__int64)v14_.v14);
    if (v14_.v16 == 1 && (v14_.v14[0] & 1) != 0 && v14_.v15 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v14_.v15);
    }
  }
}

__int64 game_facility_VolunteerSceneDiff_OnReadyResult()
{
  __int64* v0;
  char* v1;
  __int64 v2;
  _QWORD* v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  _QWORD* v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    char* v27;
    char gap24_[8];
    __int64* v28;
  } v25_;
  struct {
    __int128 v29;
    char gap64_[8];
    char v30;
    char gap73_[7];
    __int128* v31;
    __int64 v32;
  } v29_;

  v0 = (__int64*)GameData_212dce8;
  v1 = (char*)&v25_.v25 + 1;
  v2 = SceneManager_138e5e0_alt1(*(_QWORD*)GameData_212dce8);
  if (v2 == 0) {
    goto LABEL_22;
  }
  v3 = (_QWORD*)v2;
  v4 = game_util_Format_alt1(GameData_1afe4d7, 0);
  v5 = strlen_alt1(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_59;
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v25_.v26 = v6;
    v25_.v27 = v7;
    v25_.v25 = v8 | 1;
    goto LABEL_10;
  }
  v7 = (char*)&v25_.v25 + 1;
  LOBYTE(v25_.v25) = 2 * v5;
  if (v5 != 0) {
  LABEL_10:
    memmove_alt1((__int64)v7, (__int64)v4, v6);
  }
  v7[v6] = 0;
  game_facility_140d160((void*)(&v29_.v29), (__int64)&v25_.v25);
  game_facility_SceneCharacterLookAt_ReserveResetOnRelocate(
      v3, (__int64)&v29_.v29, 0x0.0p+0f);
  if ((v29_.v30 & 1) != 0 && v29_.v32 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v29_.v32);
  }
  if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (__int64)v25_.v27);
  }
  BYTE2(v29_.v29) = 1;
  LOWORD(v29_.v29) = 257;
  SceneCharacter_1400a90(v3, (__int64)&v29_.v29);
LABEL_22:
  result = SceneManager_138e5e0_alt1(*v0);
  if (result == 0) {
    goto LABEL_43;
  }
  v12 = (_QWORD*)result;
  v13 = game_util_Format_alt1(GameData_1afe4d7, 1);
  v14 = strlen_alt1(v13);
  if (v14 > 0xFFFFFFFFFFFFFFF6LL) {
  LABEL_59:
    String_60a1d0_alt1();
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v14 | 7) + 1;
    }
    v1 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v16, 16, 0);
    v25_.v26 = v15;
    v25_.v27 = v1;
    v25_.v25 = v16 | 1;
    goto LABEL_31;
  }
  LOBYTE(v25_.v25) = 2 * v14;
  if (v14 != 0) {
  LABEL_31:
    memmove_alt1((__int64)v1, (__int64)v13, v15);
  }
  v1[v15] = 0;
  game_facility_140d160((void*)(&v29_.v29), (__int64)&v25_.v25);
  game_facility_SceneCharacterLookAt_ReserveResetOnRelocate(
      v12, (__int64)&v29_.v29, 0x0.0p+0f);
  if ((v29_.v30 & 1) != 0 && v29_.v32 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v29_.v32);
  }
  if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v25_.v27);
  }
  BYTE2(v29_.v29) = 1;
  LOWORD(v29_.v29) = 257;
  result = SceneCharacter_1400a90(v12, (__int64)&v29_.v29);
LABEL_43:
  v19 = *(_QWORD*)(*v0 + 264);
  if (v19 != 0) {
    v20 = *(_QWORD*)(*v0 + 256);
    v21 = *(_QWORD*)(*v0 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v22 = std___1___shared_weak_count_lock(v21);
    result = std___1___shared_weak_count___release_weak_alt1(v19);
    if (v22 != 0) {
      if (v20 == 0) {
        goto LABEL_56;
      }
      GameHr_144f360(v20);
      v25_.v25 = (__int64)GameData_203a300;
      v25_.v28 = &v25_.v25;
      v29_.v31 = &v29_.v29;
      *(_QWORD*)&v29_.v29 = GameData_203a300;
      GameRoutine_14514d0(&v29_.v29, (_QWORD*)(v20 + 272));
      if (v29_.v31 == &v29_.v29) {
        v23 = 32;
      }
      else {
        if (v29_.v31 == nullptr) {
          goto LABEL_51;
        }
        v23 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v29_.v31 + v23))((__int64)v29_.v31);
    LABEL_51:
      result = (__int64)v25_.v28;
      if (v25_.v28 == &v25_.v25) {
        v24 = 32;
      }
      else {
        if (v25_.v28 == nullptr) {
          goto LABEL_56;
        }
        v24 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v25_.v28 + v24))((__int64)v25_.v28);
    LABEL_56:
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        return std___1___shared_weak_count___release_weak_alt1(v22);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

game_facility_VolunteerSceneDiff_OnReadyResult_lambda0_Invoke(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _WORD v7[8];
    __int64 v8;
  } v7_;
  struct {
    _WORD v9[8];
    __int64 v10;
  } v9_;
  struct {
    _QWORD v11[2];
    __int64 v12;
  } v11_;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  *(_BYTE*)(v3 + 38) = 0;
  v9_.v9[0] = 0;
  v7_.v7[0] = 0;
  v11_.v11[0] = 41;
  v11_.v11[1] = 38;
  v11_.v12 = v3;
  *(_QWORD*)(v3 + 16) = 0xBBE489A5E55FA983LL;
  *(_QWORD*)(v3 + 24) = 0xB682E3AA83E35F95LL;
  *(_QWORD*)(v3 + 30) = 0x8883E3AB83E3B682LL;
  *(_QWORD*)v3 = 0x83E3BC83E3B782E3LL;
  *(_QWORD*)(v3 + 8) = 0xE3A183E3AB82E3B3LL;
  game_facility_1451020((void*)(a1), (__int64)v11_.v11, (__int64)v9_.v9,
                        (__int64)v7_.v7);
  if ((v7_.v7[0] & 1) != 0 && v7_.v8 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v4, v7_.v8);
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v5, v9_.v10);
  }
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v6, v11_.v12);
  }
}

#pragma GCC visibility pop
