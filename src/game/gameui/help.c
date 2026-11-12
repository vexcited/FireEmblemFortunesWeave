#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_13fa520(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void
    GameRoutine_13fa520_alt1(PSEUDO_X8, _QWORD,
                             _QWORD) __asm__("GameRoutine_13fa520");
__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_15d4240(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void Unit_932880(PSEUDO_X8, _QWORD);
__int64* InfoTitle_18b7c20(__int64);
__int64 GameRoutine_15837a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1586d80(__int64, _DWORD*, _DWORD*, __int64, char, char,
                            char, __int64, char, char, char);
__int64 GameRoutine_1586d80_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _DWORD, _BYTE,
                                 _BYTE) __asm__("GameRoutine_1586d80");
__int64 GameRoutine_1595040(unsigned __int8*, __int64, unsigned __int8);
__int64 GameRoutine_15da6e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1899480(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_92b880(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_92b980(_QWORD, _QWORD);
__int64 InfoTitle_18b9dd0(__int64, _BYTE*);
__int64 InfoTitle_18b9f60(__int64, unsigned __int8*);
__int64 InfoTitle_18ba0f0(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitItem_6e8800(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_gameui_Util_SetGambitSkillStatus(__int64, _DWORD*, __int64,
                                              const char*);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 std___1___shared_weak_count_lock_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _BYTE GameData_1be4168[10];
extern _QWORD GameData_1be4118[10];
extern __int64 (*GameData_205b360[])();
extern __int64 (*GameData_205b3e0[])();
extern __int64* GameData_205b750[3];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d890[2];
extern __int64 GameData_21ca060;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21f4018[];
extern __int64 GameData_2259348;
extern __int64 GameData_2259350;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char* GameData_1fafc88[8];
unsigned __int64 GameRoutine_157f4e0(unsigned __int64 result, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(void);
__int64 game_gameui_Help_SetLegion(__int64* a1, unsigned __int8* a2,
                                   __int64 a3);
__int64
game_gameui_Help_SetAnimal_alt1(__int64* a1, unsigned __int8* a2, __int64 a3,
                                char a4) __asm__("game_gameui_Help_SetAnimal");
__attribute__((swiftcall)) void
game_gameui_Help_SetLegion_lambda0_Invoke(PSEUDO_X8 x8_, __int64 result,
                                          _DWORD* a2);
__attribute__((swiftcall)) void
game_gameui_Help_SetAnimal_lambda0_Invoke(PSEUDO_X8 x8_, __int64 a1, int* a2);
_QWORD*
game_UnitPool_Find_6ead60_alt1(__int64*,
                               int*) __asm__("game_UnitPool_Find_6ead60");
__attribute__((swiftcall)) void
GameRoutine_15d4100_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_15d4100");
__attribute__((swiftcall)) void
GameRoutine_15d4240_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_15d4240");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void
Unit_932880_alt1(PSEUDO_X8, __int64) __asm__("Unit_932880");
__int64* GameRoutine_15837a0_alt1(__int64* result, __int64,
                                  __int64) __asm__("GameRoutine_15837a0");
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameHr_1586d80(__int64*, _DWORD*, _DWORD*, __int64, char, char, char,
                       __int64, char, char, char);
__int64 GameRoutine_15da6e0_alt1(__int64 result, __int64*, _QWORD*, __int64,
                                 char) __asm__("GameRoutine_15da6e0");
__int64 GameRoutine_92b980_alt1(__int64,
                                unsigned __int8) __asm__("GameRoutine_92b980");
__int64 InfoTitle_18ba0f0_alt1(__int64,
                               unsigned __int8*) __asm__("InfoTitle_18ba0f0");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 Manager_136a920_alt1(__int64, __int64, int, unsigned int,
                             _BYTE*) __asm__("Manager_136a920");
__int64 UnitItem_6e8800_alt1(__int64 result,
                             unsigned __int64*) __asm__("UnitItem_6e8800");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt2(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
int* GameRoutine_92b880_alt1(__int64, int,
                             unsigned __int8) __asm__("GameRoutine_92b880");
void GameRoutine_157f4e0_alt1(__int64*, __int64,
                              __int64) __asm__("GameRoutine_157f4e0");
void InfoTitle_18b7c20_alt1(__int64) __asm__("InfoTitle_18b7c20");
void LayoutAccessor_1562060_alt1(__int64*, const char*,
                                 const char*) __asm__("LayoutAccessor_1562060");
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void game_gameui_Util_SetGambitSkillStatus_alt1(
    __int64*, _DWORD*, __int64,
    const char*) __asm__("game_gameui_Util_SetGambitSkillStatus");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_gameui_Help_SetAnimal(__int64* a1, unsigned __int8* a2, __int64* a3,
                                char a4);

__int64 game_gameui_Help_SetLegion(__int64* a1, unsigned __int8* a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  _QWORD v22[2];
  struct {
    __int64 (**v23)();
    unsigned __int8* v24;
    __int64* v25;
    char gap136_[8];
    __int64 (***v26)();
  } v23_;
  __int64 v27;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = a3;
  v5 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) + 8LL * *a2) +
                 64LL);
  v22[0] = "L_LegionInfoTitle";
  v22[1] = 17;
  GameRoutine_13fa520((void*)(&v23_.v23), a1, v22),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v23_.v24 != nullptr) {
    v6 = std___1___shared_weak_count_lock_alt2((__int64)v23_.v24),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = (__int64)v23_.v23;
    if (v23_.v24 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v23_.v24),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (v6 == 0 || v7 == 0) {
      if (v6 == 0) {
        goto LABEL_12;
      }
    }
    else {
      InfoTitle_18b9dd0(v7, a2),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v6),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
LABEL_12:
  v22[0] = "L_GambitInfoTitle";
  v22[1] = 17;
  GameRoutine_13fa520((void*)(&v23_.v23), a1, v22),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v23_.v24 == nullptr) {
    goto LABEL_21;
  }
  v9 = std___1___shared_weak_count_lock_alt2((__int64)v23_.v24),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (__int64)v23_.v23;
  if (v23_.v24 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v23_.v24),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v9 != 0 && v10 != 0) {
    InfoTitle_18b9f60(v10, a2),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    InfoTitle_18b7c20_alt1(v10),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else if (v9 == 0) {
    goto LABEL_21;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v9),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_21:
  v20_.v20[0] = GameData_205b360;
  v20_.v20[1] = a2;
  v23_.v23 = GameData_205b360;
  v23_.v24 = a2;
  v20_.v20[2] = &v27;
  v20_.v21 = v20_.v20;
  v23_.v26 = &v23_.v23;
  v23_.v25 = &v27;
  GameHr_1586d80(a1, (_DWORD*)GameData_2259348, (_DWORD*)GameData_2259350,
                 (__int64)&v23_.v23, 1, 1, 1, 0, 0, 0, 0),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v23_.v26 == &v23_.v23) {
    v11 = 4;
  }
  else {
    if (v23_.v26 == nullptr) {
      goto LABEL_26;
    }
    v11 = 5;
  }
  ((__int64 (*)(__int64))(*v23_.v26)[v11])((__int64)v23_.v26),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_26:
  if (v20_.v21 == v20_.v20) {
    v12 = 32;
  }
  else {
    if (v20_.v21 == nullptr) {
      goto LABEL_31;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v20_.v21 + v12))((__int64)v20_.v21),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_31:
  if (v5 != 0) {
    v13 = *(_WORD*)(v5 + 16) & 0xFFF;
  }
  else {
    v13 = 0;
  }
  LODWORD(v23_.v23) = v13;
  game_gameui_Util_SetGambitSkillStatus_alt1(a1, &v23_.v23, v27,
                                             "L_GambitStatus"),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LayoutAccessor_1560070_alt1((void*)(&v18_.v18), a1, "L_GambitRange"),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = v18_.v19;
  if (v18_.v19 != 0) {
    v15 = std___1___shared_weak_count_lock_alt2(v18_.v19),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v15 != 0) {
      v17 = v15;
      if (v18_.v18 != nullptr) {
        GameRoutine_157f4e0_alt1(v18_.v18, v16, v5),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v17),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    result = v18_.v19;
    if (v18_.v19 != 0) {
      return std___1___shared_weak_count___release_weak_alt1(v18_.v19);
    }
  }
  return result;
}

void game_gameui_Help_SetAnimal(__int64* a1, unsigned __int8* a2, __int64* a3,
                                char a4)
{
  unsigned __int8* v6;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  unsigned int v13;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int* v26;
  char v27;
  bool v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  char v34;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  char* v43;
  char* v44;
  __int64* v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  int v51;
  signed __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  __int64* v64;
  char* v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  unsigned __int64* v73;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  const char* v82;
  unsigned __int8* v83;
  __int64* v84;
  int v85;
  struct {
    _QWORD v86[4];
    _QWORD* v87;
  } v86_;
  struct {
    const char* v88;
    __int64 v89;
  } v88_;
  __int64* v90;
  struct {
    __int64* v91;
    __int64* v92;
    const char** v93;
    __int64** v94;
    __int64** v95;
  } v91_;

  v6 = a2;
  v8 = a3;
  if (a3 == nullptr) {
    if (a2[3] != 0) {
      v8 = game_UnitPool_Get_alt1(a2 + 3);
    }
    else {
      v8 = nullptr;
    }
  }
  v88_.v88 = "L_AnimalInfoTitle";
  v88_.v89 = 17;
  v90 = v8;
  GameRoutine_13fa520((void*)(&v91_.v91), a1, &v88_.v88);
  if (v91_.v92 == nullptr) {
    goto LABEL_13;
  }
  v9 = std___1___shared_weak_count_lock_alt2((__int64)v91_.v92);
  v10 = (__int64)v91_.v91;
  if (v91_.v92 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v91_.v92);
  }
  if (v9 != 0 && v10 != 0) {
    InfoTitle_18ba0f0_alt1(v10, v6);
  }
  else if (v9 == 0) {
    goto LABEL_13;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_13:
    if (a3 == nullptr) {
      goto LABEL_28;
    }
    goto LABEL_14;
  }
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak_alt1(v9);
  if (a3 == nullptr) {
    goto LABEL_28;
  }
LABEL_14:
  v11 = a3[49];
  if (v11 == 0) {
    goto LABEL_29;
  }
  v12 = *((unsigned __int8**)v6 + 3);
  if (v12 != nullptr) {
    v13 = *(unsigned __int8*)(v11 + 48);
    v14 = v6 + 24;
    do {
      v15 = v12[26];
      v16 = v15 >= v13;
      if (v15 >= v13) {
        v17 = 0;
      }
      else {
        v17 = 8;
      }
      if (v16) {
        v14 = v12;
      }
      v12 = *(unsigned __int8**)&v12[v17];
    } while (v12 != nullptr);
    if (v14 != v6 + 24 && v13 >= v14[26]) {
      LODWORD(v11) = *((_WORD*)v14 + 14) & 0xFFF;
      goto LABEL_29;
    }
  }
LABEL_28:
  LODWORD(v11) = 0;
LABEL_29:
  v18 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v18 < 1) {
    v19 = 0;
  }
  else {
    v19 = 0;
    v20 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v18 - 1));
    if (v20 >= (int)v11) {
      v20 = v11;
    }
    if ((int)v11 >= (signed __int32)*(_DWORD*)GameData_21d9988) {
      v21 = v20;
    }
    else {
      v21 = *(_DWORD*)GameData_21d9988;
    }
    while (1) {
      v22 = (unsigned int)(v19 + v18) >> 1;
      v23 = *(_DWORD*)(GameData_21d9988 + 4LL * v22);
      if (v21 == v23) {
        break;
      }
      if (v21 < v23) {
        LODWORD(v18) = (unsigned int)(v19 + v18) >> 1;
      }
      else {
        v19 = v22 + 1;
      }
      if (v19 >= (int)v18) {
        goto LABEL_43;
      }
    }
    v19 = v22 + 1;
  }
LABEL_43:
  v88_.v88 = "L_Skill00";
  v88_.v89 = 9;
  GameRoutine_15d4100_alt1((void*)(&v91_.v91), a1, &v88_.v88);
  if (v91_.v92 != nullptr) {
    v24 = std___1___shared_weak_count_lock_alt2((__int64)v91_.v92);
    v25 = (__int64)v91_.v91;
    if (v91_.v92 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v91_.v92);
    }
    if (v24 != 0 && v25 != 0) {
      v26 = GameRoutine_92b880_alt1(
          *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *v6), 3, v6[1]);
      if ((a4 & 1) != 0) {
        v27 = 0;
      }
      else {
        v28 = v19 < 3 || *v6 == 0;
        v27 = v28;
      }
      MenuItemSkill_1899480(v25, 1u, v27, 0);
      v29 = *v26;
      if ((*(_BYTE*)(v25 + 1080) & 1) == 0) {
        *(_BYTE*)(v25 + 1080) = 1;
      }
      *(_DWORD*)(v25 + 1076) = v29;
      if (v19 >= 3) {
        v30 = -1;
      }
      else {
        v30 = 3;
      }
      *(_DWORD*)(v25 + 1104) = v30;
      v91_.v93 = nullptr;
      v91_.v91 = GameData_212d890[0] + 2;
      LODWORD(v91_.v92) = 20;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
          *(_QWORD*)(v25 + 72) + 16LL))((void*)(&v88_.v88), v25 + 72,
                                        &v91_.v91);
    }
    else if (v24 == 0) {
      goto LABEL_66;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak_alt1(v24);
    }
  }
LABEL_66:
  v88_.v88 = "L_Skill01";
  v88_.v89 = 9;
  GameRoutine_15d4100_alt1((void*)(&v91_.v91), a1, &v88_.v88);
  if (v91_.v92 == nullptr) {
    goto LABEL_89;
  }
  v31 = std___1___shared_weak_count_lock_alt2((__int64)v91_.v92);
  v32 = (__int64)v91_.v91;
  if (v91_.v92 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v91_.v92);
  }
  if (v31 != 0 && v32 != 0) {
    v33 = GameRoutine_92b880_alt1(
        *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *v6), 5, v6[1]);
    v34 = (a4 & 1) == 0 && (v19 < 5 || *v6 == 0);
    MenuItemSkill_1899480(v32, 1u, v34, 0);
    v36 = *v33;
    if ((*(_BYTE*)(v32 + 1080) & 1) == 0) {
      *(_BYTE*)(v32 + 1080) = 1;
    }
    *(_DWORD*)(v32 + 1076) = v36;
    if (v19 >= 5) {
      v37 = -1;
    }
    else {
      v37 = 5;
    }
    *(_DWORD*)(v32 + 1104) = v37;
    v91_.v93 = nullptr;
    v91_.v91 = GameData_212d890[0] + 2;
    LODWORD(v91_.v92) = 20;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
        *(_QWORD*)(v32 + 72) + 16LL))((void*)(&v88_.v88), v32 + 72, &v91_.v91);
  }
  else if (v31 == 0) {
    goto LABEL_89;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak_alt1(v31);
  }
LABEL_89:
  v86_.v87 = v86_.v86;
  v88_.v88 = (const char*)&v90;
  v86_.v86[0] = GameData_205b3e0;
  v86_.v86[1] = v6;
  v86_.v86[2] = &v88_.v88;
  v86_.v86[3] = &v90;
  v91_.v94 = &v90;
  v91_.v95 = &v91_.v91;
  v91_.v91 = (__int64*)GameData_205b3e0;
  v91_.v92 = (__int64*)v6;
  v91_.v93 = &v88_.v88;
  GameHr_1586d80(a1, (_DWORD*)GameData_2259348, (_DWORD*)GameData_2259350,
                 (__int64)&v91_.v91, 1, 0, 1, 0, 0, 0, 0);
  if (v91_.v95 == &v91_.v91) {
    v38 = 4;
  }
  else {
    if (v91_.v95 == nullptr) {
      goto LABEL_94;
    }
    v38 = 5;
  }
  ((void (*)(void*))(*v91_.v95)[v38])(v91_.v95);
LABEL_94:
  if (v86_.v87 == v86_.v86) {
    v39 = 32;
    goto LABEL_98;
  }
  if (v86_.v87 != nullptr) {
    v39 = 40;
  LABEL_98:
    (*(void (**)(__int64))(*v86_.v87 + v39))((__int64)v86_.v87);
  }
  if (*v6 == 0 ||
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *v6) +
                109LL) == 0) {
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, "L_Own", 0);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, "N_Favorite", 0);
    v43 = game_util_Format_alt1("L_Reliance%02d", 0);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, v43, 0);
    v44 = game_util_Format_alt1("L_Reliance%02d", 1);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, v44, 0);
    return;
  }
  LayoutAccessor_1560070_alt1((void*)(&v91_.v91), a1, "L_Own");
  if (v91_.v92 != nullptr) {
    v40 = std___1___shared_weak_count_lock_alt2((__int64)v91_.v92);
    v41 = v91_.v91;
    if (v91_.v92 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v91_.v92);
    }
    if (v40 != 0 && v41 != nullptr) {
      LayoutAccessor_155e830_alt1((__int64)v41, 0);
      if (v6[3] != 0 && game_UnitPool_Get_alt1(v6 + 3) != nullptr) {
        LayoutAccessor_155e830_alt1((__int64)v41, 1);
        v42 = game_UnitPool_Get_alt1(v6 + 3);
        GameRoutine_15837a0_alt1(v41, (__int64)v6, v42[49]);
      }
    }
    else if (v40 == 0) {
      goto LABEL_113;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak_alt1(v40);
    }
  }
LABEL_113:
  v84 = a3;
  Unit_932880_alt1((void*)(&v91_.v91), (__int64)v6);
  v45 = v91_.v91;
  v46 = (__int64)v91_.v92;
  if (v91_.v91 == v91_.v92) {
    v49 = nullptr;
    v48 = nullptr;
    if (v91_.v91 == nullptr) {
      goto LABEL_143;
    }
    goto LABEL_140;
  }
  v83 = v6;
  v47 = 0;
  v48 = nullptr;
  v49 = nullptr;
  do {
    v50 = *v45;
    v88_.v88 = (const char*)*v45;
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v51 = 177;
      }
      else {
        v51 = 241;
      }
    }
    else {
      v51 = 241;
    }
    v85 = v51;
    if (game_UnitPool_Find_6ead60_alt1((__int64*)&v88_.v88, &v85) != nullptr) {
      if ((unsigned __int64)v48 < v47) {
        *v48++ = v50;
      }
      else {
        v52 = (char*)v48 - (char*)v49;
        v53 = v48 - v49;
        v54 = v53 + 1;
        if ((unsigned __int64)(v53 + 1) >> 61 != 0) {
          GameRoutine_688200_alt1();
        }
        if ((__int64)(v47 - (_QWORD)v49) >> 2 > v54) {
          v54 = (__int64)(v47 - (_QWORD)v49) >> 2;
        }
        if (v47 - (unsigned __int64)v49 >= 0x7FFFFFFFFFFFFFF8LL) {
          v55 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v55 = v54;
        }
        if (v55 != 0) {
          if (v55 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v56 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v55, 16, 0);
        }
        else {
          v56 = 0;
        }
        v47 = v56 + 8 * v55;
        v57 = (char*)v48 - (char*)v49;
        v58 = v56 + v52 - 8 * v53;
        *(_QWORD*)(v56 + v52) = v50;
        v48 = (__int64*)(v56 + v52 + 8);
        memcpy_alt1(v58, (__int64)v49, v57);
        if (v49 != nullptr) {
          v59 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, (__int64)v49);
        }
        v49 = (__int64*)v58;
      }
    }
    ++v45;
  } while (v45 != (__int64*)v46);
  v45 = v91_.v91;
  v6 = v83;
  if (v91_.v91 != nullptr) {
  LABEL_140:
    v91_.v92 = v45;
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, (__int64)v45);
  }
LABEL_143:
  v91_.v91 = (__int64*)v6;
  v61 = v48 - v49;
  if (v48 != v49) {
    GameRoutine_15da6e0_alt1((__int64)v49, v48, &v91_.v91,
                             (2 * __clz(v61)) ^ 0x7E, 1);
  }
  v62 = game_util_Format_alt1("L_Reliance%02d", 0);
  LayoutAccessor_1560070_alt1((void*)(&v91_.v91), a1, v62);
  if (v91_.v92 != nullptr) {
    v63 = std___1___shared_weak_count_lock_alt2((__int64)v91_.v92);
    v64 = v91_.v91;
    if (v91_.v92 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v91_.v92);
    }
    if (v63 != 0 && v64 != nullptr) {
      if (v49 == v48) {
        LayoutAccessor_155e830_alt1((__int64)v64, 0);
      }
      else {
        LayoutAccessor_155e830_alt1((__int64)v64, 1);
        GameRoutine_15837a0_alt1(v64, (__int64)v6, *v49);
      }
    }
    else if (v63 == 0) {
      goto LABEL_159;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
      std___1___shared_weak_count___release_weak_alt1(v63);
    }
  }
LABEL_159:
  v65 = game_util_Format_alt1("L_Reliance%02d", 1);
  LayoutAccessor_1560070_alt1((void*)(&v91_.v91), a1, v65);
  if (v91_.v92 == nullptr) {
    v68 = (__int64)v84;
    goto LABEL_173;
  }
  v66 = std___1___shared_weak_count_lock_alt2((__int64)v91_.v92);
  v67 = v91_.v91;
  if (v91_.v92 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v91_.v92);
  }
  if (v66 != 0 && v67 != nullptr) {
    if (v61 <= 1) {
      LayoutAccessor_155e830_alt1((__int64)v67, 0);
    }
    else {
      LayoutAccessor_155e830_alt1((__int64)v67, 1);
      GameRoutine_15837a0_alt1(v67, (__int64)v6, v49[1]);
    }
    v68 = (__int64)v84;
  }
  else {
    v68 = (__int64)v84;
    if (v66 == 0) {
      goto LABEL_173;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
    std___1___shared_weak_count___release_weak_alt1(v66);
  }
LABEL_173:
  v69 = GameData_212c8a0;
  if (v49 != nullptr) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, (__int64)v49);
  }
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a1, "N_Favorite", 1);
  v88_.v88 = "L_FavoriteItem";
  v88_.v89 = 14;
  GameRoutine_15d4240_alt1((void*)(&v91_.v91), a1, &v88_.v88);
  if (v91_.v92 == nullptr) {
    goto LABEL_186;
  }
  v71 = std___1___shared_weak_count_lock_alt2((__int64)v91_.v92);
  v72 = v91_.v91;
  if (v91_.v92 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v91_.v92);
  }
  if (v71 != 0 && v72 != nullptr) {
    v73 = (unsigned __int64*)GameRoutine_92b980_alt1(
        *(_QWORD*)(*(_QWORD*)(*v69 + 64) + 8LL * *v6), v6[1]);
    v91_.v91 = nullptr;
    UnitItem_6e8800_alt1((__int64)&v91_.v91, v73);
    v74 = (int)v91_.v91;
    v75 = HIDWORD(v91_.v91);
    v72[134] = v68;
    *((_DWORD*)v72 + 270) = v74;
    *((_DWORD*)v72 + 271) = v75;
    LayoutAccessor_1562cf0_alt1((__int64)(v72 + 11), (unsigned int*)"Info");
    *((_BYTE*)v72 + 1091) = 1;
    v91_.v93 = nullptr;
    v91_.v91 = GameData_212d890[0] + 2;
    LODWORD(v91_.v92) = 20;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64*, __int64**))(
        v72[9] + 16))((void*)(&v88_.v88), v72 + 9, &v91_.v91);
    goto LABEL_184;
  }
  if (v71 != 0) {
  LABEL_184:
    if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
      std___1___shared_weak_count___release_weak_alt1(v71);
    }
  }
LABEL_186:
  v76 = ui_LayoutAccessor_FindPane_alt1(a1, "FoodIcon");
  if (v76 != 0) {
    v77 = __dynamic_cast(v76, GameData_212d670[0], GameData_212d678[0], 0);
    if (v77 != 0) {
      v78 = *(_QWORD*)(*(_QWORD*)(*v69 + 64) + 8LL * *v6);
      v79 = *(unsigned __int8*)(v78 + 104);
      v28 = *(_BYTE*)(v78 + 105) == 2;
      v80 = 1;
      if (!v28) {
        v80 = 2;
      }
      if (v79 == 2) {
        v80 = 0;
      }
      Manager_136a920_alt1(ui_Manager_instance_ + 1264, v77, 0, 2u,
                           GameData_205b750[v80]);
    }
  }
  v81 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v69 + 64) + 8LL * *v6) +
                            107LL);
  if (v81 == 4) {
    v82 = nullptr;
  }
  else {
    v82 = GameData_1fafc88[v81];
  }
  LayoutAccessor_1562060_alt1(a1, "T_Taste", v82);
}

__attribute__((swiftcall)) void

game_gameui_Help_SetLegion_lambda0_Invoke(PSEUDO_X8 x8_, __int64 result,
                                          _DWORD* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;

  v3 = *a2 - 28;
  if (v3 > 9) {
    v4 = 11;
  }
  else {
    v4 = GameData_1be4118[v3];
  }
  v5 = **(unsigned __int8**)(result + 8);
  v6 = **(_QWORD**)(result + 16);
  v7 = *(_QWORD*)(GameData_21ca060 + 64);
  v8 = *(__int16*)(*(_QWORD*)(v7 + 8 * v5) + 2 * v4 + 112);
  v9 = v8;
  if (v6 != 0) {
    v10 = *(unsigned __int8*)(v6 + 1944);
    v9 = *(__int16*)(*(_QWORD*)(v7 + 8 * v5) + 2 * v4 + 112);
    if (v10 != 0) {
      v9 = *(__int16*)(*(_QWORD*)(v7 + 8 * v10) + 2 * v4 + 112);
    }
  }
  *(_DWORD*)a3 = *a2;
  *(_BYTE*)(a3 + 5) = 0;
  *(_DWORD*)(a3 + 8) = -1;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_DWORD*)(a3 + 56) = 0;
  *(_DWORD*)(a3 + 16) = v8;
  *(_DWORD*)(a3 + 20) = v9;
  *(_DWORD*)(a3 + 24) = -1;
  *(_BYTE*)(a3 + 4) = (_DWORD)v5 != 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_gameui_Help_SetAnimal_lambda0_Invoke(PSEUDO_X8 x8_, __int64 a1, int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  unsigned int v6;
  unsigned __int8 v7;
  unsigned __int8* v8;
  int v9;
  __int64 result;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64* v15;
  __int64 v16;

  v3 = *a2;
  v6 = *a2 - 28;
  if (v6 > 9) {
    v7 = 11;
  }
  else {
    v7 = GameData_1be4168[v6];
  }
  v8 = *(unsigned __int8**)(a1 + 8);
  v9 = *v8;
  result = GameRoutine_1595040(v8, ***(_QWORD***)(a1 + 16), v7);
  v11 = result;
  v12 = **(_QWORD**)(a1 + 24);
  if (v12 != 0) {
    v13 = *(_QWORD*)(v12 + 400);
    if (*(_BYTE*)(v13 + 96) == 2 && *(_BYTE*)(v12 + 1880) == 0) {
      v16 = *(_QWORD*)(v13 + 112);
      if (v16 != 0) {
        result = (unsigned int)result;
        if (LOBYTE(GameData_21f4018[8 * (unsigned __int64)*(
                                            unsigned __int8*)(v16 + 32)]) !=
            0) {
          v15 = &GameData_21f4018[8 * (unsigned __int64)*(
                                          unsigned __int8*)(v16 + 32)];
          goto LABEL_15;
        }
      }
      else {
        result = (unsigned int)result;
        v15 = GameData_212c8b0[0];
        if (*(_BYTE*)GameData_212c8b0[0] != 0) {
          goto LABEL_15;
        }
      }
    }
    else {
      result = (unsigned int)result;
      if (*(_BYTE*)(v12 + 1880) != 0) {
        v15 = (__int64*)(v12 + 1880);
      LABEL_15:
        result = GameRoutine_1595040((unsigned __int8*)v15,
                                     ***(_QWORD***)(a1 + 16), v7);
      }
    }
  }
  *(_DWORD*)a3 = v3;
  *(_BYTE*)(a3 + 5) = 0;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_DWORD*)(a3 + 56) = 0;
  *(_DWORD*)(a3 + 16) = v11;
  *(_DWORD*)(a3 + 20) = result;
  *(_BYTE*)(a3 + 4) = v9 != 0;
  *(_DWORD*)(a3 + 8) = -1;
  *(_DWORD*)(a3 + 24) = -1;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
