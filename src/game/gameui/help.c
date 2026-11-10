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
__int64 game_gameui_Help_SetAnimal(__int64* a1, unsigned __int8* a2, __int64 a3,
                                   char a4);
__attribute__((swiftcall)) void
game_gameui_Help_SetLegion_lambda0_Invoke(PSEUDO_X8 x8_, __int64 result,
                                          _DWORD* a2);
__attribute__((swiftcall)) void
game_gameui_Help_SetAnimal_lambda0_Invoke(PSEUDO_X8 x8_, __int64 a1, int* a2);

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
    unsigned __int64 v18;
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
    v6 = std___1___shared_weak_count_lock(),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = (__int64)v23_.v23;
    if (v23_.v24 != nullptr) {
      std___1___shared_weak_count___release_weak(v23_.v24),
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
      std___1___shared_weak_count___release_weak(v6),
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
  v9 = std___1___shared_weak_count_lock(),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (__int64)v23_.v23;
  if (v23_.v24 != nullptr) {
    std___1___shared_weak_count___release_weak(v23_.v24),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v9 != 0 && v10 != 0) {
    InfoTitle_18b9f60(v10, a2),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    InfoTitle_18b7c20(v10),
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
    std___1___shared_weak_count___release_weak(v9),
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
  GameRoutine_1586d80((__int64)a1, (_DWORD*)GameData_2259348,
                      (_DWORD*)GameData_2259350, (__int64)&v23_.v23, 1, 1, 1, 0,
                      0, 0, 0),
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
  game_gameui_Util_SetGambitSkillStatus((__int64)a1, &v23_.v23, v27,
                                        "L_GambitStatus"),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LayoutAccessor_1560070((void*)(&v18_.v18), a1, (__int64)"L_GambitRange"),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = v18_.v19;
  if (v18_.v19 != 0) {
    v15 = std___1___shared_weak_count_lock(),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v15 != 0) {
      v17 = v15;
      if (v18_.v18 != 0) {
        GameRoutine_157f4e0(v18_.v18, v16, v5),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v17),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    result = v18_.v19;
    if (v18_.v19 != 0) {
      return std___1___shared_weak_count___release_weak(v18_.v19);
    }
  }
  return result;
}

__int64 game_gameui_Help_SetAnimal(__int64* a1, unsigned __int8* a2, __int64 a3,
                                   char a4)
{
  unsigned __int8* v6;
  __int64 v8;
  __int64 v9;
  __int64* v10;
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
  __int64* v25;
  int* v26;
  __int64 v27;
  bool v28;
  int v29;
  int v30;
  __int64 v31;
  __int64* v32;
  int* v33;
  _BOOL8 v34;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  const char** v46;
  __int64* v47;
  unsigned __int64 v48;
  char* v49;
  char* v50;
  const char* v51;
  int v52;
  __int64 v53;
  signed __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  signed __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  __int64 v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  char* v84;
  unsigned __int8* v85;
  __int64 v86;
  int v87;
  _QWORD v88[4];
  _QWORD* v89;
  const char* v90;
  __int64 v91;
  __int64 v92;
  __int64* v93;
  __int64* v94;
  const char** v95;
  __int64* v96;
  __int64** v97;

  v6 = a2;
  v8 = a3;
  if (a3 == 0) {
    if (a2[3] != 0) {
      v8 = game_UnitPool_Get(a2 + 3);
    }
    else {
      v8 = 0;
    }
  }
  v90 = "L_AnimalInfoTitle";
  v91 = 17;
  v92 = v8;
  GameRoutine_13fa520_alt1((void*)(&v93), a1, &v90);
  if (v94 == nullptr) {
    goto LABEL_13;
  }
  v9 = std___1___shared_weak_count_lock_alt1(v94);
  v10 = v93;
  if (v94 != nullptr) {
    std___1___shared_weak_count___release_weak(v94);
  }
  if (v9 != 0 && v10 != nullptr) {
    InfoTitle_18ba0f0(v10, v6);
  }
  else if (v9 == 0) {
    goto LABEL_13;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_13:
    if (a3 == 0) {
      goto LABEL_28;
    }
    goto LABEL_14;
  }
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak(v9);
  if (a3 == 0) {
    goto LABEL_28;
  }
LABEL_14:
  v11 = *(_QWORD*)(a3 + 392);
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
    if ((int)v11 >= *(_DWORD*)GameData_21d9988) {
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
  v90 = "L_Skill00";
  v91 = 9;
  GameRoutine_15d4100((void*)(&v93), a1, &v90);
  if (v94 != nullptr) {
    v24 = std___1___shared_weak_count_lock_alt1(v94);
    v25 = v93;
    if (v94 != nullptr) {
      std___1___shared_weak_count___release_weak(v94);
    }
    if (v24 != 0 && v25 != nullptr) {
      v26 = (int*)GameRoutine_92b880(
          *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *v6), 3, v6[1]);
      if ((a4 & 1) != 0) {
        v27 = 0;
      }
      else {
        v28 = v19 < 3 || *v6 == 0;
        v27 = v28;
      }
      GameRoutine_1899480(v25, 1, v27, 0);
      v29 = *v26;
      if ((v25[135] & 1) == 0) {
        *((_BYTE*)v25 + 1080) = 1;
      }
      *((_DWORD*)v25 + 269) = v29;
      if (v19 >= 3) {
        v30 = -1;
      }
      else {
        v30 = 3;
      }
      *((_DWORD*)v25 + 276) = v30;
      v95 = nullptr;
      v93 = GameData_212d890[0] + 2;
      LODWORD(v94) = 20;
      (*(void (**)(const char** __return_ptr, __int64*, __int64**))(
          v25[9] + 16))(&v90, v25 + 9, &v93);
    }
    else if (v24 == 0) {
      goto LABEL_66;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak(v24);
    }
  }
LABEL_66:
  v90 = "L_Skill01";
  v91 = 9;
  GameRoutine_15d4100((void*)(&v93), a1, &v90);
  if (v94 == nullptr) {
    goto LABEL_89;
  }
  v31 = std___1___shared_weak_count_lock_alt1(v94);
  v32 = v93;
  if (v94 != nullptr) {
    std___1___shared_weak_count___release_weak(v94);
  }
  if (v31 != 0 && v32 != nullptr) {
    v33 = (int*)GameRoutine_92b880(
        *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *v6), 5, v6[1]);
    v34 = (a4 & 1) == 0 && (v19 < 5 || *v6 == 0);
    GameRoutine_1899480(v32, 1, v34, 0);
    v36 = *v33;
    if ((v32[135] & 1) == 0) {
      *((_BYTE*)v32 + 1080) = 1;
    }
    *((_DWORD*)v32 + 269) = v36;
    if (v19 >= 5) {
      v37 = -1;
    }
    else {
      v37 = 5;
    }
    *((_DWORD*)v32 + 276) = v37;
    v95 = nullptr;
    v93 = GameData_212d890[0] + 2;
    LODWORD(v94) = 20;
    (*(void (**)(const char** __return_ptr, __int64*, __int64**))(v32[9] + 16))(
        &v90, v32 + 9, &v93);
  }
  else if (v31 == 0) {
    goto LABEL_89;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
LABEL_89:
  v89 = v88;
  v90 = (const char*)&v92;
  v88[0] = GameData_205b3e0;
  v88[1] = v6;
  v88[2] = &v90;
  v88[3] = &v92;
  v96 = &v92;
  v97 = &v93;
  v93 = (__int64*)GameData_205b3e0;
  v94 = (__int64*)v6;
  v95 = &v90;
  GameRoutine_1586d80_alt1(a1, GameData_2259348, GameData_2259350, &v93, 1, 0,
                           1, 0, 0, 0, 0);
  if (v97 == &v93) {
    v38 = 4;
  }
  else {
    if (v97 == nullptr) {
      goto LABEL_94;
    }
    v38 = 5;
  }
  ((void (*)(void))(*v97)[v38])();
LABEL_94:
  if (v89 == v88) {
    v39 = 32;
    goto LABEL_98;
  }
  if (v89 != nullptr) {
    v39 = 40;
  LABEL_98:
    (*(void (**)(__int64))(*v89 + v39))((__int64)v89);
  }
  if (*v6 == 0 ||
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *v6) +
                109LL) == 0) {
    ui_LayoutAccessor_SetPaneVisible(a1, "L_Own", 0);
    ui_LayoutAccessor_SetPaneVisible(a1, "N_Favorite", 0);
    v43 = game_util_Format("L_Reliance%02d", 0);
    ui_LayoutAccessor_SetPaneVisible(a1, v43, 0);
    v44 = game_util_Format("L_Reliance%02d", 1);
    return ui_LayoutAccessor_SetPaneVisible(a1, v44, 0);
  }
  LayoutAccessor_1560070((void*)(&v93), a1, (__int64)"L_Own");
  if (v94 != nullptr) {
    v40 = std___1___shared_weak_count_lock_alt1(v94);
    v41 = v93;
    if (v94 != nullptr) {
      std___1___shared_weak_count___release_weak(v94);
    }
    if (v40 != 0 && v41 != nullptr) {
      LayoutAccessor_155e830(v41, 0);
      if (v6[3] != 0 && game_UnitPool_Get(v6 + 3) != 0) {
        LayoutAccessor_155e830(v41, 1);
        v42 = game_UnitPool_Get(v6 + 3);
        GameRoutine_15837a0(v41, v6, *(_QWORD*)(v42 + 392));
      }
    }
    else if (v40 == 0) {
      goto LABEL_113;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak(v40);
    }
  }
LABEL_113:
  v86 = a3;
  Unit_932880((void*)(&v93), v6);
  v46 = (const char**)v93;
  v47 = v94;
  if (v93 == v94) {
    v50 = nullptr;
    v49 = nullptr;
    if (v93 == nullptr) {
      goto LABEL_143;
    }
    goto LABEL_140;
  }
  v85 = v6;
  v48 = 0;
  v49 = nullptr;
  v50 = nullptr;
  do {
    v51 = *v46;
    v90 = *v46;
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v52 = 177;
      }
      else {
        v52 = 241;
      }
    }
    else {
      v52 = 241;
    }
    v87 = v52;
    v53 = game_UnitPool_Find_6ead60(&v90, &v87);
    if (v53 != 0) {
      if ((unsigned __int64)v49 < v48) {
        *(_QWORD*)v49 = v51;
        v49 += 8;
      }
      else {
        v54 = v49 - v50;
        v55 = (v49 - v50) >> 3;
        v56 = v55 + 1;
        if ((unsigned __int64)(v55 + 1) >> 61 != 0) {
          GameRoutine_688200();
        }
        if ((__int64)(v48 - (_QWORD)v50) >> 2 > v56) {
          v56 = (__int64)(v48 - (_QWORD)v50) >> 2;
        }
        if (v48 - (unsigned __int64)v50 >= 0x7FFFFFFFFFFFFFF8LL) {
          v57 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v57 = v56;
        }
        if (v57 != 0) {
          if (v57 >> 61 != 0) {
            GameRoutine_60a210(v53);
          }
          v58 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v57, 16, 0);
        }
        else {
          v58 = 0;
        }
        v48 = v58 + 8 * v57;
        v59 = v49 - v50;
        v60 = v58 + v54 - 8 * v55;
        *(_QWORD*)(v58 + v54) = v51;
        v49 = (char*)(v58 + v54 + 8);
        memcpy(v60, v50, v59);
        if (v50 != nullptr) {
          v61 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v61 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v61);
        }
        v50 = (char*)v60;
      }
    }
    ++v46;
  } while (v46 != (const char**)v47);
  v46 = (const char**)v93;
  v6 = v85;
  if (v93 != nullptr) {
  LABEL_140:
    v94 = (__int64*)v46;
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v62);
  }
LABEL_143:
  v93 = (__int64*)v6;
  v63 = (v49 - v50) >> 3;
  if (v49 != v50) {
    GameRoutine_15da6e0(v50, v49, &v93, (2 * __clz(v63)) ^ 0x7E, 1);
  }
  v64 = game_util_Format("L_Reliance%02d", 0);
  LayoutAccessor_1560070((void*)(&v93), a1, v64);
  if (v94 != nullptr) {
    v65 = std___1___shared_weak_count_lock_alt1(v94);
    v66 = v93;
    if (v94 != nullptr) {
      std___1___shared_weak_count___release_weak(v94);
    }
    if (v65 != 0 && v66 != nullptr) {
      if (v50 == v49) {
        LayoutAccessor_155e830(v66, 0);
      }
      else {
        LayoutAccessor_155e830(v66, 1);
        GameRoutine_15837a0(v66, v6, *(_QWORD*)v50);
      }
    }
    else if (v65 == 0) {
      goto LABEL_159;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
      std___1___shared_weak_count___release_weak(v65);
    }
  }
LABEL_159:
  v67 = game_util_Format("L_Reliance%02d", 1);
  LayoutAccessor_1560070((void*)(&v93), a1, v67);
  if (v94 == nullptr) {
    v70 = v86;
    goto LABEL_173;
  }
  v68 = std___1___shared_weak_count_lock_alt1(v94);
  v69 = v93;
  if (v94 != nullptr) {
    std___1___shared_weak_count___release_weak(v94);
  }
  if (v68 != 0 && v69 != nullptr) {
    if (v63 <= 1) {
      LayoutAccessor_155e830(v69, 0);
    }
    else {
      LayoutAccessor_155e830(v69, 1);
      GameRoutine_15837a0(v69, v6, *((_QWORD*)v50 + 1));
    }
    v70 = v86;
  }
  else {
    v70 = v86;
    if (v68 == 0) {
      goto LABEL_173;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
    std___1___shared_weak_count___release_weak(v68);
  }
LABEL_173:
  v71 = GameData_212c8a0;
  if (v50 != nullptr) {
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v72 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v72);
  }
  ui_LayoutAccessor_SetPaneVisible(a1, "N_Favorite", 1);
  v90 = "L_FavoriteItem";
  v91 = 14;
  GameRoutine_15d4240((void*)(&v93), a1, &v90);
  if (v94 == nullptr) {
    goto LABEL_186;
  }
  v73 = std___1___shared_weak_count_lock_alt1(v94);
  v74 = v93;
  if (v94 != nullptr) {
    std___1___shared_weak_count___release_weak(v94);
  }
  if (v73 != 0 && v74 != nullptr) {
    v75 = GameRoutine_92b980(*(_QWORD*)(*(_QWORD*)(*v71 + 64) + 8LL * *v6),
                             v6[1]);
    v93 = nullptr;
    UnitItem_6e8800(&v93, v75);
    v76 = (int)v93;
    v77 = HIDWORD(v93);
    v74[134] = v70;
    *((_DWORD*)v74 + 270) = v76;
    *((_DWORD*)v74 + 271) = v77;
    LayoutAccessor_1562cf0(v74 + 11, "Info");
    *((_BYTE*)v74 + 1091) = 1;
    v95 = nullptr;
    v93 = GameData_212d890[0] + 2;
    LODWORD(v94) = 20;
    (*(void (**)(const char** __return_ptr, __int64*, __int64**))(v74[9] + 16))(
        &v90, v74 + 9, &v93);
  }
  else if (v73 == 0) {
  LABEL_186:
    v78 = ui_LayoutAccessor_FindPane(a1, "FoodIcon");
    if (v78 != 0) {
      v79 = __dynamic_cast(v78, GameData_212d670[0], GameData_212d678[0], 0);
      if (v79 != 0) {
        v80 = *(_QWORD*)(*(_QWORD*)(*v71 + 64) + 8LL * *v6);
        v81 = *(unsigned __int8*)(v80 + 104);
        v28 = *(_BYTE*)(v80 + 105) == 2;
        v82 = 1;
        if (!v28) {
          v82 = 2;
        }
        if (v81 == 2) {
          v82 = 0;
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v79, 0, 2,
                        GameData_205b750[v82]);
      }
    }
    v83 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v71 + 64) + 8LL * *v6) +
                              107LL);
    if (v83 == 4) {
      v84 = nullptr;
    }
    else {
      v84 = GameData_1fafc88[v83];
    }
    return LayoutAccessor_1562060(a1, "T_Taste", v84);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
    std___1___shared_weak_count___release_weak(v73);
  }
  goto LABEL_186;
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
