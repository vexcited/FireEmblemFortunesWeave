#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7576e0(_QWORD, _QWORD);
__int64 GameRoutine_f36bc0(_QWORD, _QWORD);
extern __int64 GameData_21ca310;
__int64 CmdBtlDispos_f35040(__int64 result);
__int64 GameRoutine_f369a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff4360[])();
extern __int64 GameData_22167c8;
extern __int64 GameData_22167d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_2216858;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 CmdBtlDispos_f35d20(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 CmdBtlDispos_f35e20_alt2(__int64 a1,
                                 signed int a2) __asm__("CmdBtlDispos_f35e20");
__int64 CmdBtlDispos_f36bc0(__int64 result, _QWORD* a2);
__int64 game_cmdbtl_CmdBtlDispos_Initialize_lambda0_Invoke(__int64 result,
                                                           __int64 a2);
_QWORD* CmdbtlPartyNatives_eba910(_QWORD*, __int64*);
__int64 CmdbtlPartyNatives_eba740(__int64*);
__int64 GameRoutine_932c10(_QWORD, _QWORD);
extern __int64 GameData_21f4cc0;
extern int GameData_22167c0;
unsigned __int64 GameRoutine_f36300(__int64, __int64, int);
void __attribute__((noreturn))
GameRoutine_6c1f60_alt1(_QWORD) __asm__("GameRoutine_6c1f60");
__int64 game_cmdbtl_CmdBtlDispos_CreatePlayer_lambda0_Invoke(__int64 result,
                                                             __int64 a2);
unsigned __int64
game_cmdbtl_CmdBtlDispos_CreateAlly_lambda0_Invoke(unsigned __int64 result,
                                                   __int64 a2);
unsigned __int64
game_cmdbtl_CmdBtlDispos_CreateTemporary_lambda0_Invoke(unsigned __int64 result,
                                                        __int64 a2);
unsigned __int64
game_cmdbtl_CmdBtlDispos_CreateEnemyWave_lambda0_Invoke(unsigned __int64 result,
                                                        __int64 a2);
unsigned __int64
game_cmdbtl_CmdBtlDispos_CreateExpUnit_lambda0_Invoke(unsigned __int64 result,
                                                      __int64 a2);
_QWORD* GameRoutine_1005820(_QWORD*, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_eb5940(PSEUDO_X8);
__attribute__((swiftcall)) void game_ec1260(PSEUDO_X8, __int64 result);
__int64 CmdBtlDispos_f35e20_alt1(_QWORD, _QWORD) __asm__("CmdBtlDispos_f35e20");
__int64 CmdBtlDispos_f36300_alt1(_QWORD, _QWORD,
                                 _QWORD) __asm__("CmdBtlDispos_f36300");
__int64 CmdBtlUnit_e79df0(_QWORD);
__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_1005520(_QWORD, _QWORD);
__int64 GameRoutine_1033a80(_QWORD, _QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 GameRoutine_e73e20(_QWORD);
__int64 UnitItem_6e8d00(_QWORD, _QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GameVariableTable_Find_alt1(_QWORD, _QWORD) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(__int64 result);
__int64 game_HashString_alt1(_QWORD) __asm__("game_HashString");
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _QWORD GameData_212f760;
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a8e364;
extern _UNKNOWN GameData_1acbe42;
extern _UNKNOWN GameData_1ae6c42;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fec818[])();
extern __int64 (*GameData_1ff4150[])();
extern __int64 (*GameData_1ff41e0[])();
extern __int64 (*GameData_1ff4260[])();
extern __int64 (*GameData_1ff42e0[])();
extern __int64 (*GameData_1ff4460[])();
extern __int64 (*GameData_1ff44b0[])();
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212f528[3];
extern __int64 GameData_2203490;
extern __int64 GameData_2216820;
extern __int64 GameData_22190a8;
extern __int64 GameData_22190c8;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __attribute__((noreturn)) GameRoutine_f36b00(void);
__int64 (***game_cmdbtl_CmdBtlDispos_Initialize())();
__int64 (***CmdBtlDispos_f351e0(__int64 a1))();
unsigned __int64 CmdBtlDispos_f36300(__int64 a1, __int64 a2, int a3);
__int64 CmdBtlDispos_f36600(__int64 a1);
__int64 CmdBtlDispos_1004ca0_alt1(_QWORD* a1) __asm__("CmdBtlDispos_1004ca0");
__n128 CmdBtlDispos_1004e00_alt1(__int64 a1) __asm__("CmdBtlDispos_1004e00");
void CmdBtlDispos_1005280(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_f369a0_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_f369a0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6c1f60_alt2() __asm__("GameRoutine_6c1f60");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CmdBtlDispos_f35e20(__int64 a1, signed int a2);
_QWORD*
CmdbtlPartyNatives_e9a800_alt1(_QWORD*,
                               __int64) __asm__("CmdbtlPartyNatives_e9a800");
_QWORD* GameHr_1005820(_QWORD*, __int64, __int64);
_QWORD*
game_UnitPool_Find_6ead60_alt1(__int64*,
                               int*) __asm__("game_UnitPool_Find_6ead60");
__int64* GameHr_1005520(_QWORD*, __int64);
__int64 GameRoutine_9db9e0_alt1(unsigned int,
                                unsigned int) __asm__("GameRoutine_9db9e0");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool UnitItem_6e8d00_alt1(unsigned __int16*,
                          __int64) __asm__("UnitItem_6e8d00");
void __attribute__((noreturn))
GameRoutine_f36b00_alt1() __asm__("GameRoutine_f36b00");
void CmdBtlDispos_1004ca0(_QWORD* a1);
void CmdBtlDispos_1004e00(_QWORD* a1);
__attribute__((swiftcall)) void
    game_ec1260_alt1(PSEUDO_X8) __asm__("game_ec1260");
__int64 BonusExpList_7ff4f0(__int64, __int64*);
__int64 BonusExpList_7ffb30(__int64);
extern _UNKNOWN GameData_1a99717;
extern _UNKNOWN GameData_1af1e9b;
extern __int64 (*GameData_1ff43e0[])();
void game_cmdbtl_CmdBtlDispos_CreateExpUnit(_QWORD* a1);

__int64 (***game_cmdbtl_CmdBtlDispos_Initialize())()
{
  __int64* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (***v8)();
  __int64 v9;
  __int64 (***result)();
  __int64 v11;
  int v12;
  struct {
    __int64 (**v13)();
    __int64 v14;
    __int64 v15;
    char gap24_[8];
    __int64* v16;
  } v13_;

  v0 = GameData_212dec0[0];
  v1 = (_QWORD*)*GameData_212dec0[0];
  GameRoutine_eb5940((void*)((__int64*)&v13_.v13));
  v2 = v1[5];
  if (v2 != 0) {
    v1[6] = v2;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
  }
  v4 = v13_.v14;
  v1[5] = v13_.v13;
  v1[6] = v4;
  v1[7] = v13_.v15;
  if ((GameData_2216858 & 1) == 0) {
  LABEL_25:
    GameRoutine_8123d0_alt1();
  }
  if ((GameData_2216820 & 4) != 0) {
    *(_BYTE*)(*v0 + 12) = 1;
  }
  v5 = GameData_22190c8;
  if ((*(_BYTE*)(GameData_22190c8 + 8) & 1) == 0) {
    *(_QWORD*)(GameData_22190c8 + 12) = 0;
    v13_.v13 = GameData_1ff4150;
    v13_.v14 = v5;
    v13_.v16 = (__int64*)&v13_.v13;
    if ((GameData_2216858 & 1) == 0) {
      goto LABEL_25;
    }
    v6 = GameData_22167c8;
    v7 = GameData_22167d0;
    if (GameData_22167c8 == GameData_22167d0) {
      v8 = &v13_.v13;
    }
    else {
      do {
        if (v13_.v16 == nullptr) {
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(__int64*, __int64))(*v13_.v16 + 48))(v13_.v16, v6);
        v6 += 88;
      } while (v6 != v7);
      v8 = (__int64 (***)(void))v13_.v16;
      if (v13_.v16 != (__int64*)&v13_.v13) {
        if (v13_.v16 == nullptr) {
        LABEL_19:
          *(_BYTE*)(v5 + 8) = 1;
          v5 = GameData_22190c8;
          goto LABEL_20;
        }
        v9 = 5;
      LABEL_18:
        ((void (*)(__int64 (***)(void), __int64))(*v8)[v9])(v8, v2);
        goto LABEL_19;
      }
    }
    v9 = 4;
    goto LABEL_18;
  }
LABEL_20:
  result = CmdBtlDispos_f351e0(v5);
  v11 = GameData_2203490;
  v12 = *(_DWORD*)(GameData_2203490 + 1204);
  *(_DWORD*)(GameData_2203490 + 1204) = v12 | 0x80;
  if ((GameData_2216858 & 1) == 0) {
    goto LABEL_25;
  }
  if ((GameData_2216820 & 2) != 0) {
    *(_DWORD*)(v11 + 1204) = v12 | 0x90;
    *(_BYTE*)(GameData_22190a8 + 12) = 0;
  }
  return result;
}

__int64 CmdBtlDispos_f35040(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  int v19;
  _BYTE v20[4];

  if (*(_BYTE*)(result + 8) != 0) {
    v1 = (_QWORD*)(result + 128);
    v2 = result;
    GameRoutine_f36bc0(result + 120, *(_QWORD*)(result + 128));
    v4 = v1[5];
    v3 = v1[6];
    *v1 = 0;
    v1[1] = 0;
    v5 = v3 - v4;
    *(v1 - 1) = v1;
    if ((int)(v5 >> 3) >= 1) {
      v6 = (v5 >> 3) & 0x7FFFFFFF;
      v7 = GameData_21ca310;
      v8 = v6 - 1;
      while (1) {
        v10 = *(_QWORD**)(*(_QWORD*)(v2 + 168) + 8 * v8);
        if (v10[49] != 0) {
          break;
        }
      LABEL_6:
        v9 = v8-- + 1;
        if (v9 <= 1) {
          goto LABEL_21;
        }
      }
      v11 = v10[53];
      v12 = v10[54];
      v13 = *(_QWORD*)(v7 + 56) + 552960LL;
      if (v12 != 0) {
        *(_QWORD*)(v12 + 424) = v11;
        if (v11 == 0) {
          goto LABEL_14;
        }
      }
      else {
        *(_QWORD*)(*(_QWORD*)(v7 + 56) + 556008LL) = v11;
        if (v11 == 0 || (*(_QWORD*)(v11 + 432) = 0, (v11 = v10[53]) == 0)) {
        LABEL_14:
          v14 = v10[54];
          *(_QWORD*)(v13 + 3040) = v14;
          if (v14 != 0) {
            *(_QWORD*)(v14 + 424) = 0;
          }
          goto LABEL_16;
        }
      }
      *(_QWORD*)(v11 + 432) = v10[54];
    LABEL_16:
      v10[53] = 0;
      v10[54] = 0;
      v15 = *(_QWORD*)(v7 + 56) + 552960LL;
      v16 = (_QWORD*)(*(_QWORD*)(v7 + 56) + 556000LL);
      if (*(unsigned __int8*)(*(_QWORD*)(v7 + 56) + 556016LL) >= 0xAu) {
        v17 = nullptr;
      }
      else {
        v17 = &v16[3 * *(unsigned __int8*)(*(_QWORD*)(v7 + 56) + 556016LL)];
      }
      v10[55] = v17;
      v18 = *(_QWORD*)(v15 + 3040);
      if (v18 != 0) {
        *(_QWORD*)(v18 + 424) = v10;
        v10[54] = v18;
      }
      else {
        *(_QWORD*)(v15 + 3048) = v10;
      }
      *v16 = v10;
      goto LABEL_6;
    }
  LABEL_21:
    v20[0] = 0;
    v19 = 267;
    result = GameRoutine_7576e0(v20, &v19);
    *(_BYTE*)(v2 + 8) = 0;
  }
  return result;
}

__int64 (***CmdBtlDispos_f351e0(__int64 a1))()
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 i;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 (***v31)();
  __int64 (***v32)();
  __int64 v33;
  __int64 v34;
  __int64 (**v35)();
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  _QWORD* v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  _QWORD* v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 (**v80)();
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 (***v84)();
  __int64 v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  _DWORD* v89;
  _DWORD* j;
  int v91;
  __int64 v92;
  __int64 v93;
  __int64* v94;
  unsigned __int64 v95;
  char* v96;
  int* v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64* v102;
  int v103;
  unsigned int v104;
  unsigned int v105;
  int v106;
  unsigned int v107;
  __int64 v108;
  _QWORD* v109;
  __int64 (**v110)();
  signed __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 (***v122)();
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 (***result)();
  __int64 v127;
  unsigned int v128;
  struct {
    __int64 (**v129)();
    __int64* v130;
    _QWORD* v131;
    __int64 v132;
    __int64* v133;
  } v129_;
  int v134;
  int v135;
  int v136;
  struct {
    __int64 v137;
    __int64 v138;
    __int64 v139;
  } v137_;
  _QWORD* v140;
  signed int v141;

  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v1 = *(_QWORD*)(a1 + 144);
  *(_DWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 152) = v1;
  LODWORD(v129_.v129) = 16;
  v3 = game_UnitPool_GetFirst_alt1((int*)&v129_.v129),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 432);
    v5 = v3;
    if (v4 == 0) {
      v4 = *(_QWORD*)(v3 + 440);
      if (v4 != 0) {
        v6 = *(unsigned __int8*)(v4 + 16);
        if (v6 <= 8) {
          v128 = v6 - 3;
          while (1) {
            if (v128 == 0) {
              v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v4 != 0) {
                break;
              }
            }
            if (++v128 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v4 = 0;
        }
      }
    }
    v7 = *(__int64**)(a1 + 152);
    while (1) {
    LABEL_8:
      v8 = v4;
      v9 = *(_QWORD*)(a1 + 160);
      if ((unsigned __int64)v7 >= v9) {
        v10 = *(_QWORD*)(a1 + 144);
        v11 = (char*)v7 - v10;
        v12 = ((__int64)v7 - v10) >> 3;
        v13 = v12 + 1;
        if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
        LABEL_195:
          GameRoutine_6c1f60_alt2(),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v87 = COERCE_AS(__typeof__(v87),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        v14 = v9 - v10;
        if (v14 >> 2 > v13) {
          v13 = v14 >> 2;
        }
        v15 = (unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL
                  ? 0x1FFFFFFFFFFFFFFFLL
                  : v13;
        if (v15 != 0) {
          if (v15 >> 61 != 0) {
          LABEL_196:
            GameRoutine_60a210_alt1(),
                v77 =
                    COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v78 =
                    COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v86 =
                    COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v87 =
                    COERCE_AS(__typeof__(v87),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          }
          v16 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v15;
        v18 = (unsigned __int64)v7 - v10;
        v19 = (__int64)&v11[v16 + -8 * v12];
        *(_QWORD*)&v11[v16] = v5;
        v7 = (__int64*)&v11[v16 + 8];
        memcpy_alt1(v19, v10, v18),
            v77 = COERCE_AS(__typeof__(v77),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v87 = COERCE_AS(__typeof__(v87),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        *(_QWORD*)(a1 + 144) = v19;
        *(_QWORD*)(a1 + 152) = v7;
        *(_QWORD*)(a1 + 160) = v17;
        if (v10 != 0) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v10),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v87 = COERCE_AS(__typeof__(v87),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
      }
      else {
        *v7++ = v5;
      }
      *(_QWORD*)(a1 + 152) = v7;
      if (v8 == 0) {
        break;
      }
      v4 = *(_QWORD*)(v8 + 432);
      v5 = v8;
      if (v4 == 0) {
        v21 = *(_QWORD*)(v8 + 440);
        v5 = v8;
        if (v21 != 0) {
          v22 = *(unsigned __int8*)(v21 + 16);
          v4 = 0;
          v5 = v8;
          if (v22 <= 8) {
            v23 = v22 - 3;
            while (1) {
              if (v23 == 0) {
                v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v4 != 0) {
                  break;
                }
              }
              if (++v23 == 6) {
                v4 = 0;
                v5 = v8;
                goto LABEL_8;
              }
            }
            v5 = v8;
          }
        }
      }
    }
  }
  v24 = *(_QWORD*)(a1 + 232);
  for (i = *(_QWORD*)(a1 + 240); i != v24; i -= 88) {
    v26 = *(_QWORD*)(i - 56);
    if (v26 != 0) {
      *(_QWORD*)(i - 48) = v26;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v27 = 128;
      }
      else {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v26),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    v28 = *(_QWORD*)(i - 80);
    if (v28 != 0) {
      *(_QWORD*)(i - 72) = v28;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v29 = 128;
      }
      else {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
  }
  *(_QWORD*)(a1 + 240) = v24;
  v141 = 0;
  v129_.v130 = nullptr;
  v129_.v131 = nullptr;
  v129_.v129 = nullptr;
  v137_.v139 = 0;
  v140 = nullptr;
  v137_.v137 = 0;
  v137_.v138 = 0;
  v136 = 0;
  v30 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  v135 = 0;
  v31 =
      (__int64 (***)(void))fw_memory_HeapManager_Allocate_alt1(v30, 64, 16, 0),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *v31 = GameData_1ff41e0;
  v31[1] = (__int64 (**)(void))&v141,
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31[2] = (__int64 (**)(void))&v129_.v129,
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31[3] = (__int64 (**)(void))&v136,
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31[4] = (__int64 (**)(void))a1,
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31[5] = (__int64 (**)(void))&v135,
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31[6] = (__int64 (**)(void))&v137_.v137,
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31[7] = (__int64 (**)(void))&v140,
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((GameData_2216858 & 1) == 0) {
  LABEL_197:
    GameRoutine_8123d0_alt1(),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v32 = v31;
  v33 = GameData_22167c8;
  v34 = GameData_22167d0;
  if (GameData_22167c8 == GameData_22167d0) {
    v35 = GameData_1ff41e0;
  }
  else {
    do {
      ((void (*)(__int64 (***)(void), __int64))(*v32)[6])(v32, v33),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v33 += 88;
    } while (v33 != v34);
    v35 = *v32;
  }
  ((void (*)(__int64 (***)(void)))v35[5])(v32),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v134 = 1;
  v36 = game_UnitPool_GetFirst_alt1(&v134),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v36 != 0) {
    v37 = *(char**)(a1 + 176);
    v38 = v36;
    do {
      v39 = v38;
      v38 = *(_QWORD*)(v38 + 432);
      v40 = *(_QWORD*)(a1 + 184);
      if ((unsigned __int64)v37 < v40) {
        *(_QWORD*)v37 = v39;
        v37 += 8;
      }
      else {
        v41 = *(_QWORD*)(a1 + 168);
        v42 = &v37[-v41];
        v43 = (__int64)&v37[-v41] >> 3;
        v44 = v43 + 1;
        if ((unsigned __int64)(v43 + 1) >> 61 != 0) {
          goto LABEL_195;
        }
        v45 = v40 - v41;
        if (v45 >> 2 > v44) {
          v44 = v45 >> 2;
        }
        if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF8LL) {
          v46 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v46 = v44;
        }
        if (v46 != 0) {
          if (v46 >> 61 != 0) {
            goto LABEL_196;
          }
          v47 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v46, 16, 0),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        else {
          v47 = 0;
        }
        v48 = v47 + 8 * v46;
        v49 = (unsigned __int64)&v37[-v41];
        v50 = (__int64)&v42[v47 + -8 * v43];
        *(_QWORD*)&v42[v47] = v39;
        v37 = &v42[v47 + 8];
        memcpy_alt1(v50, v41, v49),
            v77 = COERCE_AS(__typeof__(v77),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v87 = COERCE_AS(__typeof__(v87),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        *(_QWORD*)(a1 + 168) = v50;
        *(_QWORD*)(a1 + 176) = v37;
        *(_QWORD*)(a1 + 184) = v48;
        if (v41 != 0) {
          v51 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v41),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v87 = COERCE_AS(__typeof__(v87),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
      }
      *(_QWORD*)(a1 + 176) = v37;
    } while (v38 != 0);
  }
  if ((int)((unsigned __int64)(v137_.v138 - v137_.v137) >> 3) >= 1) {
    v52 = ((unsigned __int64)(v137_.v138 - v137_.v137) >> 3) & 0x7FFFFFFF;
    v53 = GameData_21ca310;
    v54 = v52 + 1;
    v55 = (_QWORD*)(v137_.v137 + 8 * v52 - 8);
    do {
      v57 = (_QWORD*)*v55--;
      v56 = v57;
      v58 = v57[53];
      v59 = v57[54];
      v60 = *(_QWORD*)(v53 + 56) + 552960LL;
      if (v59 != 0) {
        *(_QWORD*)(v59 + 424) = v58;
        if (v58 == 0) {
          goto LABEL_80;
        }
      }
      else {
        *(_QWORD*)(*(_QWORD*)(v53 + 56) + 556008LL) = v58;
        if (v58 == 0 || (*(_QWORD*)(v58 + 432) = 0, (v58 = v56[53]) == 0)) {
        LABEL_80:
          v61 = v56[54];
          *(_QWORD*)(v60 + 3040) = v61;
          if (v61 != 0) {
            *(_QWORD*)(v61 + 424) = 0;
          }
          goto LABEL_82;
        }
      }
      *(_QWORD*)(v58 + 432) = v56[54];
    LABEL_82:
      v56[53] = 0;
      v56[54] = 0;
      v62 = *(_QWORD*)(v53 + 56) + 552960LL;
      v63 = (_QWORD*)(*(_QWORD*)(v53 + 56) + 556000LL);
      if (*(unsigned __int8*)(*(_QWORD*)(v53 + 56) + 556016LL) >= 0xAu) {
        v64 = nullptr;
      }
      else {
        v64 = &v63[3 * *(unsigned __int8*)(*(_QWORD*)(v53 + 56) + 556016LL)];
      }
      v56[55] = v64;
      v65 = *(_QWORD*)(v62 + 3040);
      if (v65 != 0) {
        *(_QWORD*)(v65 + 424) = v56;
        v56[54] = v65;
      }
      else {
        *(_QWORD*)(v62 + 3048) = v56;
      }
      --v54;
      *v63 = v56;
    } while (v54 > 1);
  }
  v66 = v140;
  if (v140 != nullptr) {
    v67 = v140[53];
    v68 = v140[54];
    v69 = GameData_21ca310;
    v70 = *(_QWORD*)(GameData_21ca310 + 56) + 552960LL;
    if (v68 != 0) {
      *(_QWORD*)(v68 + 424) = v67;
      if (v67 == 0) {
        goto LABEL_94;
      }
    }
    else {
      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556008LL) = v67;
      if (v67 == 0 || (*(_QWORD*)(v67 + 432) = 0, (v67 = v66[53]) == 0)) {
      LABEL_94:
        v71 = v66[54];
        *(_QWORD*)(v70 + 3040) = v71;
        if (v71 != 0) {
          *(_QWORD*)(v71 + 424) = 0;
        }
        goto LABEL_96;
      }
    }
    *(_QWORD*)(v67 + 432) = v66[54];
  LABEL_96:
    v66[53] = 0;
    v66[54] = 0;
    v72 = *(_QWORD*)(v69 + 56) + 552960LL;
    v73 = *(unsigned __int8*)(*(_QWORD*)(v69 + 56) + 556016LL);
    v74 = (_QWORD*)(*(_QWORD*)(v69 + 56) + 556000LL);
    if (v73 >= 0xA) {
      v75 = nullptr;
    }
    else {
      v75 = &v74[3 * v73];
    }
    v66[55] = v75;
    v76 = *(_QWORD*)(v72 + 3040);
    if (v76 != 0) {
      *(_QWORD*)(v76 + 424) = v66;
      v66[54] = v76;
    }
    else {
      *(_QWORD*)(v72 + 3048) = v66;
    }
    *v74 = v66;
  }
  CmdBtlDispos_f35e20(a1, v141),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v137_.v137 != 0) {
    v137_.v138 = v137_.v137;
    v79 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v79 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v137_.v137),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v80 = v129_.v129;
  if (v129_.v129 != nullptr) {
    v129_.v130 = (__int64*)v129_.v129;
    v81 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v81, (__int64)v129_.v129),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  LODWORD(v140) = 0;
  LODWORD(v137_.v137) = 1;
  v129_.v129 = GameData_1ff4360;
  v129_.v130 = &v137_.v137;
  v129_.v131 = &v140;
  v129_.v132 = a1;
  v129_.v133 = (__int64*)&v129_.v129;
  if ((GameData_2216858 & 1) == 0) {
    goto LABEL_197;
  }
  v82 = GameData_22167c8;
  v83 = GameData_22167d0;
  if (GameData_22167c8 == GameData_22167d0) {
    v84 = &v129_.v129;
  LABEL_119:
    v85 = 4;
    goto LABEL_120;
  }
  do {
    if (v129_.v133 == nullptr) {
    LABEL_194:
      GameRoutine_60a310_alt1(),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    (*(void (**)(__int64*, __int64))(*v129_.v133 + 48))(v129_.v133, v82),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v82 += 88;
  } while (v82 != v83);
  v84 = (__int64 (***)(void))v129_.v133,
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v129_.v133 == (__int64*)&v129_.v129) {
    goto LABEL_119;
  }
  if (v129_.v133 != nullptr) {
    v85 = 5;
  LABEL_120:
    ((void (*)(__int64 (***)(void), __int64 (**)(void), __int64, __int64))(
        *v84)[v85])(v84, v80, v77, v78),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  CmdBtlDispos_f35e20(a1, v137_.v137),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v89 = *(_DWORD**)(a1 + 232);
  for (j = *(_DWORD**)(a1 + 240); v89 != j; v89 += 22) {
    if (v89[16] != 1) {
      v91 = v89[19];
      v89[16] = 2;
      v89[18] = 1;
      v89[19] = v91 | 0x5A;
    }
  }
  if ((*(_BYTE*)(a1 + 228) & 1) != 0) {
    v93 = *(_QWORD*)(a1 + 232);
    v92 = *(_QWORD*)(a1 + 240);
    if (v93 != v92) {
      v94 = nullptr;
      v95 = 0;
      v96 = nullptr;
      v97 = (int*)GameData_212f760;
      while (1) {
        if ((*(_BYTE*)(v93 + 76) & 1) != 0) {
          v129_.v129 = *(__int64 (***)(void))v93,
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          v109 = game_UnitPool_Find_6ead60_alt1((__int64*)&v129_.v129, v97),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          if (v109 != nullptr) {
            if ((*(_BYTE*)(a1 + 228) & 1) == 0) {
              goto LABEL_197;
            }
            v86 = v109;
            if ((signed __int32)*(_DWORD*)(a1 + 224) <=
                (int)*((unsigned __int8*)v109 + 498)) {
              v110 = *((_WORD*)v109 + 976) != 0 ? (__int64 (**)(void))v109[244]
                                                : nullptr,
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v87 = COERCE_AS(__typeof__(v87),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
              v129_.v129 = v110;
              if (UnitItem_6e8d00_alt1((unsigned __int16*)&v129_.v129,
                                       (__int64)v109)) {
                if ((unsigned __int64)v96 < v95) {
                  *(_QWORD*)v96 = v93;
                  v96 += 8;
                }
                else {
                  v111 = v96 - (char*)v94;
                  v112 = (v96 - (char*)v94) >> 3;
                  v113 = v112 + 1;
                  if ((unsigned __int64)(v112 + 1) >> 61 != 0) {
                    GameRoutine_f36b00_alt1(),
                        v77 = COERCE_AS(
                            __typeof__(v77),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                        v78 = COERCE_AS(
                            __typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                        v86 = COERCE_AS(
                            __typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v87 = COERCE_AS(
                            __typeof__(v87),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                        v88 = COERCE_AS(
                            __typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  }
                  if ((__int64)(v95 - (_QWORD)v94) >> 2 > v113) {
                    v113 = (__int64)(v95 - (_QWORD)v94) >> 2;
                  }
                  if (v95 - (unsigned __int64)v94 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v114 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v114 = v113;
                  }
                  if (v114 != 0) {
                    if (v114 >> 61 != 0) {
                      goto LABEL_196;
                    }
                    v115 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v114, 16,
                        0),
                    v77 = COERCE_AS(
                        __typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v78 = COERCE_AS(
                        __typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v86 = COERCE_AS(
                        __typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v87 = COERCE_AS(
                        __typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v88 = COERCE_AS(
                        __typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  }
                  else {
                    v115 = 0;
                  }
                  v95 = v115 + 8 * v114;
                  v116 = v96 - (char*)v94;
                  v117 = v115 + v111 - 8 * v112;
                  *(_QWORD*)(v115 + v111) = v93;
                  v96 = (char*)(v115 + v111 + 8);
                  memcpy_alt1(v117, (__int64)v94, v116),
                      v77 = COERCE_AS(
                          __typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v78 = COERCE_AS(
                          __typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v86 = COERCE_AS(
                          __typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v87 = COERCE_AS(
                          __typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v88 = COERCE_AS(
                          __typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  if (v94 != nullptr) {
                    v118 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v118 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt3(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v118,
                        (__int64)v94),
                        v77 = COERCE_AS(
                            __typeof__(v77),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                        v78 = COERCE_AS(
                            __typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                        v86 = COERCE_AS(
                            __typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v87 = COERCE_AS(
                            __typeof__(v87),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                        v88 = COERCE_AS(
                            __typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
                  }
                  v94 = (__int64*)v117;
                }
              }
            }
          }
        }
        v93 += 88;
        if (v93 == v92) {
          goto LABEL_130;
        }
      }
    }
  }
  v96 = nullptr;
  v94 = nullptr;
LABEL_130:
  v98 = v96 - (char*)v94;
  v99 = (unsigned __int64)(v96 - (char*)v94) >> 3;
  if ((int)v99 >= 1) {
    v100 = ((unsigned __int64)v98 >> 3) & 0x7FFFFFFF;
    v101 = v94;
    v102 = game_map_MapRandom_instance__ptr[0];
    do {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v103 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v102);
      v104 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v102 + 4);
      v105 = *(_DWORD*)v102 ^ (*(_DWORD*)v102 << 11);
      *(_DWORD*)v102 = *((_DWORD*)v102 + 1);
      *((_DWORD*)v102 + 1) = v103;
      v106 = (v105 >> 8) ^ (v104 >> 19) ^ v105 ^ v104;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v102) = v104;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v102 + 4) = v106;
      v107 = v106 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v108 = *v101;
      --v100;
      *v101++ = v94[v107 % (unsigned int)v99];
      v94[v107 % (unsigned int)v99] = v108;
    } while (v100 != 0);
  }
  if (v96 == (char*)v94) {
    if (v96 == nullptr) {
      goto LABEL_168;
    }
  }
  else {
    CmdBtlDispos_f36300(a1, *v94, -1),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if ((unsigned __int64)(v98 >> 3) >= 2) {
      CmdBtlDispos_f36300(a1, v94[1], -1),
          v77 = COERCE_AS(__typeof__(v77),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v78 = COERCE_AS(__typeof__(v78),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      if (v98 != 16) {
        CmdBtlDispos_f36300(a1, v94[2], -1),
            v77 = COERCE_AS(__typeof__(v77),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v78 = COERCE_AS(__typeof__(v78),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v87 = COERCE_AS(__typeof__(v87),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        if ((unsigned __int64)(v98 >> 3) >= 4) {
          CmdBtlDispos_f36300(a1, v94[3], -1),
              v77 = COERCE_AS(__typeof__(v77),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v87 = COERCE_AS(__typeof__(v87),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
      }
    }
  }
  v119 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v119 = 56;
  }
  nn_mem_StandardAllocator_Free_alt3(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v119, (__int64)v94),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v78 = COERCE_AS(__typeof__(v78),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
LABEL_168:
  v129_.v129 = GameData_1ff4260;
  v129_.v130 = (__int64*)a1;
  v129_.v133 = (__int64*)&v129_.v129;
  if ((GameData_2216858 & 1) == 0) {
    goto LABEL_197;
  }
  v120 = GameData_22167c8;
  v121 = GameData_22167d0;
  if (GameData_22167c8 == GameData_22167d0) {
    v122 = &v129_.v129;
  LABEL_176:
    v123 = 4;
    goto LABEL_177;
  }
  do {
    if (v129_.v133 == nullptr) {
      goto LABEL_194;
    }
    (*(void (**)(__int64*, __int64))(*v129_.v133 + 48))(v129_.v133, v120),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v120 += 88;
  } while (v120 != v121);
  v122 = (__int64 (***)(void))v129_.v133,
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v129_.v133 == (__int64*)&v129_.v129) {
    goto LABEL_176;
  }
  if (v129_.v133 != nullptr) {
    v123 = 5;
  LABEL_177:
    ((void (*)(__int64 (***)(void), _QWORD*, __int64, __int64))(*v122)[v123])(
        v122, v86, v87, v88),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v129_.v129 = GameData_1ff42e0;
  v129_.v130 = (__int64*)a1;
  v129_.v133 = (__int64*)&v129_.v129;
  if ((GameData_2216858 & 1) == 0) {
    goto LABEL_197;
  }
  v124 = GameData_22167c8;
  v125 = GameData_22167d0;
  if (GameData_22167c8 == GameData_22167d0) {
    result = &v129_.v129;
  LABEL_186:
    v127 = 4;
    return (
        (__int64 (***(*)(__int64 (***)(void), _QWORD*, __int64, __int64))())(
            *result)[v127])(result, v86, v87, v88);
  }
  do {
    if (v129_.v133 == nullptr) {
      goto LABEL_194;
    }
    (*(void (**)(__int64*, __int64))(*v129_.v133 + 48))(v129_.v133, v124),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v78 = COERCE_AS(__typeof__(v78),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v124 += 88;
  } while (v124 != v125);
  result = (__int64 (***)(void))v129_.v133,
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v78 = COERCE_AS(__typeof__(v78),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v129_.v133 == (__int64*)&v129_.v129) {
    goto LABEL_186;
  }
  if (v129_.v133 == nullptr) {
    return result;
  }
  v127 = 5;
  return ((__int64 (***(*)(__int64 (***)(void), _QWORD*, __int64, __int64))())(
      *result)[v127])(result, v86, v87, v88);
}

__int64 CmdBtlDispos_f35d20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD v10[4];
  _QWORD* v11;
  int v12;
  unsigned int v13;

  *(_DWORD*)(a1 + 12) = a2;
  v12 = 0;
  v13 = 1;
  v10[0] = GameData_1ff4360;
  v10[1] = &v13;
  v10[2] = &v12;
  v10[3] = a1;
  v11 = v10;
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0(a1);
  }
  v5 = GameData_22167c8;
  v6 = GameData_22167d0;
  if (GameData_22167c8 == GameData_22167d0) {
    v7 = v10;
  LABEL_9:
    v8 = 32;
    goto LABEL_10;
  }
  do {
    if (v11 == nullptr) {
      GameRoutine_60a310(0, a2, a3);
    }
    (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(v11, v5);
    v5 += 88;
  } while (v5 != v6);
  v7 = v11;
  if (v11 == v10) {
    goto LABEL_9;
  }
  if (v11 != nullptr) {
    v8 = 40;
  LABEL_10:
    (*(void (**)(_QWORD*, __int64, __int64, __int64))(*v7 + v8))(v7, a2, a3,
                                                                 a4);
  }
  return CmdBtlDispos_f35e20_alt2(a1, v13);
}

void CmdBtlDispos_f35e20(__int64 a1, signed int a2)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  char* v11;
  char* v12;
  __int64 v13;
  signed __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  char v50;
  struct {
    __int64 v51;
    __int64 v52;
    __int64 v53;
  } v51_;

  v3 = a1 + 192;
  *(_QWORD*)(a1 + 192 + 8LL * a2) = 0;
  if ((unsigned int)a2 >= 3) {
    LOBYTE(v4) = 8;
  }
  else {
    v4 = 0x30100u >> (8 * a2);
  }
  v5 = 1 << v4;
  LODWORD(v51_.v51) = 1 << v4;
  v6 = game_UnitPool_GetFirst_alt1((int*)&v51_.v51);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 432);
    v8 = v6;
    if (v7 == 0) {
      v7 = *(_QWORD*)(v6 + 440);
      if (v7 != 0) {
        v9 = *(unsigned __int8*)(v7 + 16);
        if (v9 <= 8) {
          while (1) {
            v49 = v9 + 1;
            if (((v5 >> v9) & 2) != 0) {
              v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v9 + 1) + 556000);
              if (v7 != 0) {
                break;
              }
            }
            v9 = v49;
            if (v49 == 9) {
              goto LABEL_8;
            }
          }
        }
        else {
        LABEL_8:
          v7 = 0;
        }
      }
    }
    v50 = v4;
    v10 = 0;
    v11 = nullptr;
    v12 = nullptr;
    while (1) {
    LABEL_11:
      v13 = v7;
      if (*(_QWORD*)(v3 + 8LL * a2) != 0) {
        if ((unsigned __int64)v11 < v10) {
          goto LABEL_13;
        }
      }
      else {
        *(_QWORD*)(v3 + 8LL * a2) = v8;
        if ((unsigned __int64)v11 < v10) {
        LABEL_13:
          *(_QWORD*)v11 = v8;
          v11 += 8;
          if (v7 == 0) {
            goto LABEL_39;
          }
          goto LABEL_31;
        }
      }
      v14 = v11 - v12;
      v15 = (v11 - v12) >> 3;
      v16 = v15 + 1;
      if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
        GameRoutine_6c1f60_alt2();
      }
      if ((__int64)(v10 - (_QWORD)v12) >> 2 > v16) {
        v16 = (__int64)(v10 - (_QWORD)v12) >> 2;
      }
      if (v10 - (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v17 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v17 = v16;
      }
      if (v17 != 0) {
        if (v17 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v18 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
      }
      else {
        v18 = 0;
      }
      v10 = v18 + 8 * v17;
      v19 = v11 - v12;
      v20 = v18 + v14 - 8 * v15;
      *(_QWORD*)(v18 + v14) = v8;
      v11 = (char*)(v18 + v14 + 8);
      memcpy_alt1(v20, (__int64)v12, v19);
      if (v12 != nullptr) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v12);
      }
      v12 = (char*)v20;
      if (v13 == 0) {
      LABEL_39:
        v25 = v11 - v12;
        v51_.v52 = 0;
        v51_.v53 = 0;
        v51_.v51 = 0;
        if (v11 == v12 ||
            (v26 = v25 >> 3, GameRoutine_f369a0_alt1(&v51_.v51, v25 >> 3),
             v27 = (v25 << 28) - 0x80000000LL,
             *(_QWORD*)(v51_.v51 + ((v27 >> 29) & 0xFFFFFFFFFFFFFFF8LL)) =
                 *(_QWORD*)v12,
             (unsigned __int64)(v25 >> 3) < 2)) {
          LOBYTE(v4) = v50;
        }
        else {
          LOBYTE(v4) = v50;
          v28 = v27 >> 32;
          v29 = v26 - 1;
          v30 = 1;
          v31 = v28 - 1;
          v32 = v28 + 1;
          do {
            if ((v32 & 0x8000000000000000LL) == 0 &&
                v32 < (v51_.v52 - v51_.v51) >> 3 && (v30 & 0x80000000) == 0 &&
                v26 > v30) {
              v33 = *(_QWORD*)&v12[8 * v30++];
              *(_QWORD*)(v51_.v51 + 8 * v32) = v33;
            }
            if ((v31 & 0x8000000000000000LL) == 0 &&
                v31 < (v51_.v52 - v51_.v51) >> 3 && (v30 & 0x80000000) == 0 &&
                v26 > v30) {
              v34 = *(_QWORD*)&v12[8 * v30++];
              *(_QWORD*)(v51_.v51 + 8 * v31) = v34;
            }
            --v29;
            --v31;
            ++v32;
          } while (v29 != 0);
        }
        goto LABEL_55;
      }
    LABEL_31:
      v7 = *(_QWORD*)(v13 + 432);
      v8 = v13;
      if (v7 == 0) {
        v22 = *(_QWORD*)(v13 + 440);
        v8 = v13;
        if (v22 != 0) {
          v23 = *(unsigned __int8*)(v22 + 16);
          v7 = 0;
          v8 = v13;
          if (v23 <= 8) {
            while (1) {
              v24 = v23 + 1;
              if (((v5 >> v23) & 2) != 0) {
                v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v23 + 1) + 556000);
                if (v7 != 0) {
                  break;
                }
              }
              ++v23;
              if (v24 == 9) {
                v7 = 0;
                v8 = v13;
                goto LABEL_11;
              }
            }
            v8 = v13;
          }
        }
      }
    }
  }
  v12 = nullptr;
  v51_.v52 = 0;
  v51_.v53 = 0;
  v51_.v51 = 0;
LABEL_55:
  v35 = v51_.v51;
  v36 = v51_.v52;
  if (v51_.v51 == v51_.v52) {
    goto LABEL_67;
  }
  do {
    v37 = *(_QWORD*)v35;
    v38 = *(_QWORD*)(*(_QWORD*)v35 + 424LL);
    v39 = *(_QWORD*)(*(_QWORD*)v35 + 432LL);
    v40 = (_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                    24LL * (unsigned __int8)v4 + 556000);
    if (v39 != 0) {
      *(_QWORD*)(v39 + 424) = v38;
      if (v38 != 0) {
        goto LABEL_57;
      }
    }
    else {
      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                 24LL * (unsigned __int8)v4 + 556008) = v38;
      if (v38 != 0) {
        *(_QWORD*)(v38 + 432) = 0;
        v38 = *(_QWORD*)(v37 + 424);
        if (v38 != 0) {
        LABEL_57:
          *(_QWORD*)(v38 + 432) = *(_QWORD*)(v37 + 432);
          goto LABEL_58;
        }
      }
    }
    v41 = *(_QWORD*)(v37 + 432);
    *v40 = v41;
    if (v41 != 0) {
      *(_QWORD*)(v41 + 424) = 0;
    }
  LABEL_58:
    v35 += 8;
    *(_QWORD*)(v37 + 424) = 0;
    *(_QWORD*)(v37 + 432) = 0;
  } while (v35 != v36);
  v35 = v51_.v51;
  v36 = v51_.v52;
LABEL_67:
  if (v35 != v36) {
    do {
      v42 = *(_QWORD*)v35;
      v43 = *(_QWORD*)(GameData_21ca310 + 56) + 556000LL;
      v44 = v43 + 24LL * (unsigned __int8)v4;
      v45 = v43 + 24LL * *(unsigned __int8*)(v44 + 16);
      if (*(unsigned __int8*)(v44 + 16) >= 0xAu) {
        v45 = 0;
      }
      *(_QWORD*)(v42 + 440) = v45;
      v46 = *(_QWORD*)(v44 + 8);
      if (v46 != 0) {
        *(_QWORD*)(v46 + 432) = v42;
        *(_QWORD*)(v42 + 424) = v46;
      }
      else {
        *(_QWORD*)v44 = v42;
      }
      v35 += 8;
      *(_QWORD*)(v44 + 8) = v42;
    } while (v35 != v36);
    v35 = v51_.v51;
  }
  if (v35 != 0) {
    v51_.v52 = v35;
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v35);
  }
  if (v12 != nullptr) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, (__int64)v12);
  }
}

unsigned __int64 CmdBtlDispos_f36300(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  atomic_ullong* v8;
  _QWORD* v9;
  _QWORD* v10;
  _BOOL8 v11;
  __int16 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  char v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;

  if ((a3 & 0x80000000) == 0 && *(_DWORD*)(a2 + 68) != a3) {
    return 0;
  }
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v7[1] = 0;
  v8 = (atomic_ullong*)(v7 + 1);
  v7[2] = 0;
  v9 = v7;
  v7[3] = a2;
  v10 = v7 + 3;
  v7[4] = 0;
  v7[5] = 0;
  *v7 = GameData_1ff4460;
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
      if (GameData_2216858 != 0) {
        v12 = GameData_2216820;
      LABEL_11:
        v11 = (v12 & 0x1000) != 0;
        goto LABEL_12;
      }
    LABEL_35:
      GameRoutine_8123d0(v7);
    }
    if ((GameData_2216858 & 1) == 0) {
      goto LABEL_35;
    }
    v12 = GameData_2216820;
    if ((GameData_2216820 & 8) == 0) {
      goto LABEL_11;
    }
  }
  v11 = false;
LABEL_12:
  v5 = GameRoutine_1033a80(a2, v11);
  if (v5 != 0) {
    if ((*(_BYTE*)(a2 + 76) & 4) != 0) {
      v13 = *(_QWORD*)(*(_QWORD*)a2 + 352LL);
      v14 = fw_memory_HeapManager_Allocate(*v6, 88, 16, 0);
      *(_QWORD*)(v14 + 24) = 0;
      v15 = v14 + 24;
      v16 = v14;
      *(_QWORD*)(v14 + 8) = 0;
      *(_QWORD*)(v14 + 16) = 0;
      *(_DWORD*)(v14 + 32) = 0;
      *(_QWORD*)(v14 + 56) = 0;
      *(_QWORD*)(v14 + 64) = 0;
      *(_QWORD*)(v14 + 72) = 0;
      *(_QWORD*)(v14 + 80) = 0;
      *(_QWORD*)v14 = GameData_1ff44b0;
      *(_QWORD*)(v14 + 48) = 0;
      *(_QWORD*)(v14 + 40) = v14 + 48;
      if (v13 != 0) {
        *(_BYTE*)(v14 + 24) = *(_BYTE*)(v13 + 16);
        nn_os_LockMutex(&game_g_random_mutex);
        v17 = game_map_MapRandom_instance__ptr[0];
        v18 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 8);
        v19 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
        v20 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL)) ^
              (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((__int128*)0x10LL))
               << 11);
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) =
            *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v17 + 4) = v18;
        v21 = (v20 >> 8) ^ (v19 >> 19) ^ v20 ^ v19;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v17 + 8) = v19;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v17 + 12) = v21;
        nn_os_UnlockMutex(&game_g_random_mutex);
        v22 = *(_BYTE*)(v16 + 26);
        *(_BYTE*)(v16 + 25) = v21;
        *(_BYTE*)(v16 + 26) = v22 & 0xFE;
      }
      v23 = v9[5];
      v9[4] = v15;
      v9[5] = v16;
      if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak(v23);
      }
    }
    v25 = (_QWORD*)(a1 + 128);
    v24 = *(_QWORD**)(a1 + 128);
    if (v24 != nullptr) {
      while (1) {
        while (1) {
          v26 = v24;
          v27 = v24[4];
          if (v5 >= v27) {
            break;
          }
          v24 = (_QWORD*)*v26;
          v25 = v26;
          if (*v26 == 0) {
            goto LABEL_26;
          }
        }
        if (v27 >= v5) {
          break;
        }
        v24 = (_QWORD*)v26[1];
        if (v24 == nullptr) {
          v25 = v26 + 1;
          goto LABEL_26;
        }
      }
    }
    else {
      v26 = (_QWORD*)(a1 + 128);
    LABEL_26:
      v28 = v26;
      v29 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 56, 16, 0);
      v29[4] = v5;
      v29[5] = 0;
      v29[6] = 0;
      v26 = v29;
      v30 = v29;
      *v29 = 0;
      v29[1] = 0;
      v29[2] = v28;
      *v25 = v29;
      v31 = **(_QWORD**)(a1 + 120);
      if (v31 != 0) {
        *(_QWORD*)(a1 + 120) = v31;
        v30 = (_QWORD*)*v25;
      }
      fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 128), v30);
      ++*(_QWORD*)(a1 + 136);
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 1), 1u,
                              memory_order_relaxed);
    v32 = v26[6];
    v26[5] = v10;
    v26[6] = v9;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
      std___1___shared_weak_count___release_weak(v32);
    }
  }
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  return v5;
}

__int64 CmdBtlDispos_f36600(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _BOOL8 v26;
  __int64 v27;
  unsigned int v28;
  char v29[4];
  int v30;
  int v31;

  v2 = *GameData_212ea58;
  v3 = *(__int64**)(*GameData_212ea58 + 840);
  v4 = *(__int64**)(*GameData_212ea58 + 848);
  if (v3 != v4) {
    do {
      v5 = *v3;
      v3 += 2;
      CmdBtlUnit_e79df0(v5);
    } while (v3 != v4);
    v4 = *(__int64**)(v2 + 848);
    v3 = *(__int64**)(v2 + 840);
  }
  for (; v4 != v3; v4 -= 2) {
    v6 = *(v4 - 1);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  *(_QWORD*)(v2 + 848) = v3;
  *(_DWORD*)(v2 + 828) = 0;
  GameRoutine_e73e20(v2 + 800);
  v30 = 2;
  result = game_UnitPool_GetFirst(&v30);
  if (result == 0) {
    return result;
  }
  v8 = *(_QWORD*)(result + 432);
  v9 = result;
  if (v8 == 0) {
    v8 = *(_QWORD*)(result + 440);
    if (v8 != 0) {
      v10 = *(unsigned __int8*)(v8 + 16);
      if (v10 <= 8) {
        while (1) {
          if (v10 == 0) {
            v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
            if (v8 != 0) {
              break;
            }
          }
          if (++v10 == 9) {
            goto LABEL_14;
          }
        }
      }
      else {
      LABEL_14:
        v8 = 0;
      }
    }
  }
  v11 = game_g_shared_system_skills_ptr;
LABEL_17:
  while (2) {
    v12 = v8;
    v13 = *(_QWORD**)(a1 + 128);
    if (v13 == nullptr) {
      goto LABEL_36;
    }
    v14 = *(_QWORD**)(a1 + 128);
    while (1) {
      v15 = v14[4];
      if (v9 >= v15) {
        break;
      }
    LABEL_19:
      v14 = (_QWORD*)*v14;
      if (v14 == nullptr) {
        goto LABEL_36;
      }
    }
    if (v15 < v9) {
      ++v14;
      goto LABEL_19;
    }
    do {
      while (1) {
        v16 = v13;
        v17 = v13[4];
        if (v9 < v17) {
          break;
        }
        if (v17 >= v9) {
          v20 = v16;
          goto LABEL_33;
        }
        v13 = (_QWORD*)v16[1];
        if (v13 == nullptr) {
          v18 = v16 + 1;
          goto LABEL_29;
        }
      }
      v13 = (_QWORD*)*v16;
    } while (*v16 != 0);
    v18 = v16;
  LABEL_29:
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v19[4] = v9;
    v19[5] = 0;
    v19[6] = 0;
    v20 = v19;
    v21 = v19;
    *v19 = 0;
    v19[1] = 0;
    v19[2] = v16;
    *v18 = v19;
    v22 = **(_QWORD**)(a1 + 120);
    if (v22 != 0) {
      *(_QWORD*)(a1 + 120) = v22;
      v21 = (_QWORD*)*v18;
    }
    fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 128), v21);
    ++*(_QWORD*)(a1 + 136);
  LABEL_33:
    v23 = v20[6];
    v20[5] = 0;
    v20[6] = 0;
    if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v23);
    }
  LABEL_36:
    v24 = *(_QWORD*)(v9 + 392);
    v25 = game_GameModeData_instance_;
    v29[0] = 9;
    if (game_GameModeData_instance_ != 0) {
      v25 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v26 = true;
    if (v24 != v25 && (*(_BYTE*)(v9 + 418) & 8) == 0) {
      v31 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v11) & 0xFFF;
      if ((game_HasSkill(v9 + 1744, &v31) & 1) != 0 && v29[0] != 9) {
        v26 = false;
      }
    }
    result = GameRoutine_6c47b0(v9, v29, v26, 0);
    if (v12 != 0) {
      v8 = *(_QWORD*)(v12 + 432);
      v9 = v12;
      if (v8 == 0) {
        v27 = *(_QWORD*)(v12 + 440);
        v9 = v12;
        if (v27 != 0) {
          v28 = *(unsigned __int8*)(v27 + 16);
          v8 = 0;
          v9 = v12;
          if (v28 <= 8) {
            while (1) {
              if (v28 == 0) {
                v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
                if (v8 != 0) {
                  break;
                }
              }
              if (++v28 == 9) {
                v8 = 0;
                v9 = v12;
                goto LABEL_17;
              }
            }
            v9 = v12;
          }
        }
      }
      continue;
    }
    return result;
  }
}

__int64 CmdBtlDispos_f36bc0(__int64 result, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (a2 != nullptr) {
    v3 = result;
    CmdBtlDispos_f36bc0(result, *a2);
    CmdBtlDispos_f36bc0(v3, a2[1]);
    v4 = a2[6];
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a2);
  }
  return result;
}

__int64 game_cmdbtl_CmdBtlDispos_Initialize_lambda0_Invoke(__int64 result,
                                                           __int64 a2)
{
  __int64 v2;
  int v3;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_DWORD*)(a2 + 68);
  if (v3 <= *(_DWORD*)(v2 + 16)) {
    v3 = *(_DWORD*)(v2 + 16);
  }
  *(_DWORD*)(v2 + 16) = v3;
  return result;
}

__int64 game_cmdbtl_CmdBtlDispos_CreatePlayer_lambda0_Invoke(__int64 result,
                                                             __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;

  if (*(_DWORD*)(a2 + 64) == **(_DWORD**)(result + 8)) {
    v2 = *(_QWORD*)a2;
    if (*(_QWORD*)a2 != 0) {
      v3 = *(_QWORD*)(result + 32);
      v4 = *(_BYTE**)(v2 + 40);
      if (v4 == nullptr || *v4 == 0) {
        goto LABEL_11;
      }
      v5 = *(__int64**)(result + 16);
      v6 = *v5;
      v7 = v5[1];
      if (v6 != v7) {
        while (*(_QWORD*)v6 == 0 ||
               *(_QWORD*)(*(_QWORD*)(v2 + 24) + 1672LL) !=
                   *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 24LL) + 1672LL)) {
          v6 += 8;
          if (v6 == v7) {
            goto LABEL_11;
          }
        }
      }
      if (v6 == v7) {
      LABEL_11:
        if ((*(_BYTE*)(a2 + 76) & 1) != 0) {
          if ((GameData_2216858 & 1) == 0) {
            GameRoutine_8123d0(result);
          }
          v8 = *(_DWORD**)(result + 24);
          if (*v8 >= GameData_22167c0) {
            v13 = *(_QWORD*)(v3 + 240);
            if (v13 >= *(_QWORD*)(v3 + 248)) {
              result = CmdbtlPartyNatives_eba740((__int64*)(v3 + 232));
              *(_QWORD*)(v3 + 240) = result;
            }
            else {
              result = (__int64)CmdbtlPartyNatives_eba910(*(_QWORD**)(v3 + 240),
                                                          (__int64*)a2);
              *(_QWORD*)(v3 + 240) = v13 + 88;
            }
            return result;
          }
          ++*v8;
        }
        if (**(int**)(result + 40) <= 5) {
          v9 = result;
          result = GameRoutine_f36300(v3, a2, -1);
          if (result != 0) {
            v11 = result;
            ++**(_DWORD**)(v9 + 40);
            result = GameRoutine_932c10(*(_QWORD*)(v9 + 16), a2);
            if ((*(_BYTE*)(a2 + 76) & 2) != 0) {
              v14 = *(__int64**)(v9 + 48);
              v16 = (__int64*)v14[1];
              v15 = v14[2];
              if ((unsigned __int64)v16 >= v15) {
                v18 = *v14;
                v19 = (__int64)v16 - *v14;
                v20 = (v19 >> 3) + 1;
                if (v20 >> 61 != 0) {
                  GameRoutine_6c1f60_alt1(result);
                }
                v21 = v15 - v18;
                v22 = fw_memory_g_heap_manager_ptr;
                if (v21 >> 2 > v20) {
                  v20 = v21 >> 2;
                }
                if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v23 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v23 = v20;
                }
                if (v23 != 0) {
                  if (v23 >> 61 != 0) {
                    GameRoutine_60a210(result);
                  }
                  v24 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
                }
                else {
                  v24 = 0;
                }
                v25 = v24 + 8 * v23;
                v26 = v24 + v19 - 8 * (v19 >> 3);
                *(_QWORD*)(v24 + v19) = v11;
                v17 = v24 + v19 + 8;
                result = memcpy(v26, v18, v19);
                *v14 = v26;
                v14[1] = v17;
                v14[2] = v25;
                if (v18 != 0) {
                  v27 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
                    v27 = 56;
                  }
                  result =
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v27, v18);
                }
              }
              else {
                *v16 = v11;
                v17 = (__int64)(v16 + 1);
              }
              v14[1] = v17;
            }
            else if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
              v12 = *(__int64**)(v9 + 56);
              if (*v12 == 0) {
                *v12 = v11;
              }
            }
            v28 = *(unsigned __int8*)(v11 + 498);
            if ((*(_BYTE*)(v3 + 228) & 1) != 0 && *(_DWORD*)(v3 + 224) < v28) {
              v28 = *(_DWORD*)(v3 + 224);
            }
            *(_DWORD*)(v3 + 224) = v28;
            *(_BYTE*)(v3 + 228) = 1;
          }
        }
      }
    }
  }
  return result;
}

unsigned __int64

game_cmdbtl_CmdBtlDispos_CreateAlly_lambda0_Invoke(unsigned __int64 result,
                                                   __int64 a2)
{
  if (*(_DWORD*)(a2 + 64) == 2) {
    return GameRoutine_f36300(*(_QWORD*)(result + 8), a2, -1);
  }
  return result;
}

unsigned __int64

game_cmdbtl_CmdBtlDispos_CreateTemporary_lambda0_Invoke(unsigned __int64 result,
                                                        __int64 a2)
{
  if (*(_DWORD*)(a2 + 64) == 3) {
    return GameRoutine_f36300(*(_QWORD*)(result + 8), a2, -1);
  }
  return result;
}

unsigned __int64

game_cmdbtl_CmdBtlDispos_CreateEnemyWave_lambda0_Invoke(unsigned __int64 result,
                                                        __int64 a2)
{
  unsigned __int64 v2;

  if (*(_DWORD*)(a2 + 64) == **(_DWORD**)(result + 8) &&
      **(int**)(result + 16) <= 5) {
    v2 = result;
    result = GameRoutine_f36300(*(_QWORD*)(result + 24), a2,
                                *(_DWORD*)(*(_QWORD*)(result + 24) + 12LL));
    if (result != 0) {
      ++**(_DWORD**)(v2 + 16);
    }
  }
  return result;
}

unsigned __int64

game_cmdbtl_CmdBtlDispos_CreateExpUnit_lambda0_Invoke(unsigned __int64 result,
                                                      __int64 a2)
{
  if (*(_DWORD*)(a2 + 64) == 1) {
    return GameRoutine_f36300(*(_QWORD*)(result + 8), a2, -1);
  }
  return result;
}

void game_cmdbtl_CmdBtlDispos_CreateExpUnit(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 (***v5)();
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 (****v15)();
  float v16;
  float v17;
  __int64 (***v18)();
  __int64 (**v19)();
  int v20;
  float v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (**v26)();
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 (**v31)();
  __int64 v32;
  __int64 (*v33)();
  int v34;
  __int64 (****i)();
  struct {
    __int64 (**v36)();
    __int64 (**v37)();
    __int64 v38;
    __int64 v39;
    __int64* v40;
  } v36_;
  _BYTE v41[12];

  if ((GameData_2216858 & 1) == 0) {
    goto LABEL_64;
  }
  if ((GameData_2216820 & 0x10) != 0 ||
      (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0 ||
      (GameData_2216820 & 8) != 0 && *(_BYTE*)(GameData_21f4cc0 + 13) == 0) {
    return;
  }
  v2 = GameData_22190c8;
  CmdBtlDispos_f36600(GameData_22190c8);
  v36_.v36 = GameData_1ff43e0;
  v36_.v37 = (__int64 (**)(void))v2;
  v36_.v40 = (__int64*)&v36_.v36;
  if ((GameData_2216858 & 1) == 0) {
  LABEL_64:
    GameRoutine_8123d0_alt1();
  }
  v3 = GameData_22167c8;
  v4 = GameData_22167d0;
  if (GameData_22167c8 == GameData_22167d0) {
    v5 = &v36_.v36;
  LABEL_14:
    v6 = 4;
    goto LABEL_15;
  }
  do {
    if (v36_.v40 == nullptr) {
      GameRoutine_60a310_alt1();
    }
    (*(void (**)(__int64*, __int64))(*v36_.v40 + 48))(v36_.v40, v3);
    v3 += 88;
  } while (v3 != v4);
  v5 = (__int64 (***)(void))v36_.v40;
  if (v36_.v40 == (__int64*)&v36_.v36) {
    goto LABEL_14;
  }
  if (v36_.v40 != nullptr) {
    v6 = 5;
  LABEL_15:
    ((__int64 (*)(__int64))(*v5)[v6])((__int64)v5);
  }
  v7 = *(__int64**)(GameData_22190c8 + 144);
  v8 = *(__int64**)(GameData_22190c8 + 152);
  while (v7 != v8) {
    v9 = *v7++;
    GameHr_1005520(a1, v9);
  }
  game_ec1260_alt1((void*)((__int64*)&v36_.v36));
  v10 = (__int64)v36_.v36;
  v11 = (__int64*)v36_.v37;
  if (v36_.v36 != v36_.v37) {
    v12 = (__int64*)v36_.v36;
    do {
      v13 = GameHr_1005520(a1, *v12);
      if (v13 != nullptr) {
        *((_BYTE*)v13 + 16) = 1;
      }
      ++v12;
    } while (v12 != v11);
  }
  if (v10 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v10);
  }
  v15 = (__int64 (****)())a1[4];
  for (i = (__int64 (****)())a1[5]; v15 != i;
       *((_DWORD*)v18 + 3) = *((_DWORD*)v18 + 2)) {
    v19 = **v15;
    v20 = *((unsigned __int8*)*v15 + 16);
    v36_.v37 = (__int64 (**)(void))&GameData_1a99717;
    v21 = 0x0.0p+0f;
    v22 = 0x0.0p+0f;
    v36_.v36 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a99717);
    if (game_GameModeData_instance_ != 0) {
      v23 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v36_.v36);
      if (v23 != 0) {
        v22 = (float)*(int*)(v23 + 32);
      }
    }
    v36_.v37 = (__int64 (**)(void))&GameData_1af1e9b;
    v36_.v36 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af1e9b);
    if (game_GameModeData_instance_ != 0) {
      v24 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v36_.v36);
      if (v24 != 0) {
        v21 = (float)*(int*)(v24 + 32);
      }
    }
    LODWORD(v36_.v36) = 2;
    v25 = game_UnitPool_GetFirst_alt1((int*)&v36_.v36);
    if (v25 != 0) {
      v26 = *(__int64 (***)(void))(v25 + 432);
      if (v26 == nullptr) {
        v27 = *(_QWORD*)(v25 + 440);
        if (v27 != 0 &&
            (unsigned int)(v28 = *(unsigned __int8*)(v27 + 16)) <= 8) {
          while (1) {
            if (v28 == 0) {
              v26 = *(__int64 (***)(void))(*(_QWORD*)(GameData_21ca310 + 56) +
                                           556024LL);
              if (v26 != nullptr) {
                break;
              }
            }
            if (++v28 == 9) {
              goto LABEL_43;
            }
          }
        }
        else {
        LABEL_43:
          v26 = nullptr;
        }
      }
      v36_.v36 = v19;
      v36_.v37 = (__int64 (**)(void))v25;
      v36_.v39 = 0;
      v36_.v40 = (_QWORD*)(((_UNKNOWN*)0xFCLL) + 5);
      v36_.v38 = 0;
      v29 = BonusExpList_7ff4f0((__int64)v41, (__int64*)&v36_.v36);
      v30 = BonusExpList_7ffb30(v29);
      if (v26 != nullptr) {
        do {
          v31 = (__int64 (**)(void))v26[54];
          if (v31 == nullptr) {
            v33 = v26[55];
            if (v33 != nullptr &&
                (unsigned int)(v34 = *((unsigned __int8*)v33 + 16)) <= 8) {
              while (1) {
                if (v34 == 0) {
                  v31 = *(__int64 (***)(void))(
                      *(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
                  if (v31 != nullptr) {
                    break;
                  }
                }
                if (++v34 == 9) {
                  goto LABEL_46;
                }
              }
            }
            else {
            LABEL_46:
              v31 = nullptr;
            }
          }
          v36_.v39 = 0;
          v36_.v40 = (_QWORD*)(((_UNKNOWN*)0xFCLL) + 5);
          v36_.v38 = 0;
          v36_.v36 = v19;
          v36_.v37 = v26;
          v32 = BonusExpList_7ff4f0((__int64)v41, (__int64*)&v36_.v36);
          v30 += BonusExpList_7ffb30(v32);
          v26 = v31;
        } while (v31 != nullptr);
      }
      v16 = (float)v30;
    }
    else {
      v16 = 0x0.0p+0f;
    }
    v17 = (float)(v22 / 0x1.9000000000000p+6f) *
          (float)(v16 / 0x1.4000000000000p+2f);
    if (v20 == 0) {
      v17 = (float)(v21 / 0x1.9000000000000p+6f) * v17;
    }
    *((_DWORD*)*v15 + 2) += vcvtps_s32_f32(v17);
    v18 = *v15;
    v15 += 2;
  }
}

void CmdBtlDispos_1004ca0(_QWORD* a1)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  struct {
    _BYTE* v15;
    _BYTE* v16;
  } v15_;

  v15_.v16 = &GameData_1acbe42;
  v2 = *(_DWORD*)(*(_QWORD*)GameData_212f528[0] + 16LL);
  v15_.v15 = (_BYTE*)game_HashString((__int64)&GameData_1acbe42);
  if (game_GameModeData_instance_ != 0 &&
      (v3 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v15_.v15)) != 0) {
    v4 = *(_DWORD*)(v3 + 32);
  }
  else {
    v4 = 0;
  }
  game_ec1260((void*)((__int64*)&v15_.v15), *GameData_212dec0[0]);
  v5 = (__int64)v15_.v15;
  v6 = v15_.v16 - v15_.v15;
  if (v15_.v16 != v15_.v15) {
    v7 = v6 >> 3;
    if ((unsigned __int64)(v6 >> 3) >= 2) {
      v8 = v4 + v4 * v2;
      v9 = 1;
      v10 = 0;
      do {
        v11 = v10;
        v10 = v9;
        v12 = v9;
        do {
          v13 = GameHr_1005820(a1, *(_QWORD*)(v5 + 8 * v11),
                               *(_QWORD*)(v5 + 8 * v12));
          if (v13 != nullptr) {
            *((_DWORD*)v13 + 4) += v8;
          }
          ++v12;
        } while (v7 > v12);
        v9 = v10 + 1;
      } while (v7 > v10 + 1);
    }
  }
  if (v5 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v5);
  }
}

void CmdBtlDispos_1004e00(_QWORD* a1)
{
  int v2;
  __int64 v3;
  unsigned int v4;
  int v5;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  unsigned __int64 v37;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;
  struct {
    __int64* v40;
    __int64* v41;
  } v40_;
  struct {
    __int64 (**v42)();
    __int64* v43;
    __int64* v44;
    char gap88_[8];
    unsigned __int64* v45;
  } v42_;
  __int64 v46;

  v42_.v43 = (__int64*)&GameData_1a8e364;
  v2 = *(_DWORD*)(*(_QWORD*)GameData_212f528[0] + 16LL);
  v42_.v42 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a8e364);
  if (game_GameModeData_instance_ != 0 &&
      (v3 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v42_.v42)) != 0) {
    v4 = *(_DWORD*)(v3 + 32);
  }
  else {
    v4 = 0;
  }
  v5 = GameRoutine_9db9e0_alt1(2u, v4);
  game_ec1260((void*)((__int64*)&v40_.v40), *GameData_212dec0[0]);
  v6 = v40_.v40;
  v7 = v40_.v41;
  if (v40_.v40 == v40_.v41) {
    goto LABEL_59;
  }
  v8 = 0;
  v35 = v5 & ~(v5 >> 31);
  v36 = v2 + 1;
  do {
    if (GameHr_1005520(a1, *v6) == nullptr) {
      goto LABEL_7;
    }
    v9 = *v6;
    v38_.v38 = 0;
    v38_.v39 = 0;
    v46 = v9;
    v42_.v42 = GameData_1fec818;
    v42_.v43 = &v46;
    v42_.v44 = &v38_.v38;
    v42_.v45 = (unsigned __int64*)&v42_.v42;
    CmdbtlPartyNatives_e9a800_alt1((_QWORD*)*GameData_212ea58,
                                   (__int64)&v42_.v42);
    if (v42_.v45 == (unsigned __int64*)&v42_.v42) {
      v10 = 32;
    }
    else {
      if (v42_.v45 == nullptr) {
        goto LABEL_14;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v42_.v45 + v10))((__int64)v42_.v45);
  LABEL_14:
    if (v38_.v38 != 0 && v8 <= (signed __int32)*(_DWORD*)(v38_.v38 + 408)) {
      v8 = *(_DWORD*)(v38_.v38 + 408);
    }
    v11 = v38_.v39;
    if (v38_.v39 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v38_.v39 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt2(v11);
    }
  LABEL_7:
    ++v6;
  } while (v6 != v7);
  v6 = v40_.v40;
  if (v8 != 0) {
    v12 = v40_.v41;
    if (v40_.v40 != v40_.v41) {
      v37 = 0;
      v13 = nullptr;
      v14 = 0;
      while (2) {
        if (GameHr_1005520(a1, *v6) == nullptr) {
          goto LABEL_23;
        }
        v15 = *v6;
        v38_.v38 = 0;
        v38_.v39 = 0;
        v46 = v15;
        v42_.v42 = GameData_1fec818;
        v42_.v43 = &v46;
        v42_.v44 = &v38_.v38;
        v42_.v45 = (unsigned __int64*)&v42_.v42;
        CmdbtlPartyNatives_e9a800_alt1((_QWORD*)*GameData_212ea58,
                                       (__int64)&v42_.v42);
        if (v42_.v45 == (unsigned __int64*)&v42_.v42) {
          v16 = 32;
        LABEL_29:
          (*(void (**)(__int64))(*v42_.v45 + v16))((__int64)v42_.v45);
        }
        else if (v42_.v45 != nullptr) {
          v16 = 40;
          goto LABEL_29;
        }
        if (v38_.v38 != 0 && *(_DWORD*)(v38_.v38 + 408) == v8) {
          if ((unsigned __int64)v13 >= v37) {
            v18 = (unsigned __int64)v13 - v14;
            v19 = ((__int64)v13 - v14) >> 3;
            v20 = v19 + 1;
            if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
              GameRoutine_6c1f60_alt2();
            }
            v21 = v14;
            if ((__int64)(v37 - v14) >> 2 > v20) {
              v20 = (__int64)(v37 - v14) >> 2;
            }
            if (v37 - v14 >= 0x7FFFFFFFFFFFFFF8LL) {
              v22 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v22 = v20;
            }
            if (v22 != 0) {
              if (v22 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v23 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
            }
            else {
              v23 = 0;
            }
            v37 = v23 + 8 * v22;
            v24 = v23 + v18 - 8 * v19;
            *(_QWORD*)(v23 + v18) = *v6;
            v13 = (__int64*)(v23 + v18 + 8);
            memcpy_alt1(v24, v21, v18);
            if (v21 != 0) {
              v25 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v25 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v21);
            }
            v14 = v24;
            v17 = v38_.v39;
            if (v38_.v39 == 0) {
              goto LABEL_23;
            }
          LABEL_35:
            if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
              std___1___shared_weak_count___release_weak_alt2(v17);
            }
            goto LABEL_23;
          }
          *v13++ = *v6;
        }
        v17 = v38_.v39;
        if (v38_.v39 != 0) {
          goto LABEL_35;
        }
      LABEL_23:
        if (++v6 == v12) {
          goto LABEL_54;
        }
        continue;
      }
    }
    v14 = 0;
    v13 = nullptr;
  LABEL_54:
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    v26 = game_map_MapRandom_instance__ptr[0];
    v27 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8);
    v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL)) ^
          (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((__int128*)0x10LL))
           << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 4) = v27;
    v30 = (v29 >> 8) ^ (v28 >> 19) ^ v29 ^ v28;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 8) = v28;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 12) = v30;
    v31 = v30 & 0x7FFFFFFF;
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    v32 = GameHr_1005520(
        a1, *(_QWORD*)(v14 +
                       8LL * (unsigned int)(v31 % (int)(((unsigned __int64)v13 -
                                                         v14) >>
                                                        3))));
    if (v32 != nullptr) {
      *((_DWORD*)v32 + 5) += v35 * v36;
    }
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v14);
    v6 = v40_.v40;
  }
LABEL_59:
  if (v6 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, (__int64)v6);
  }
}

void CmdBtlDispos_1005280(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  float v7;
  _QWORD* v8;
  _QWORD* v9;
  _DWORD* v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  if (*(_QWORD*)(a1 + 16) != *(_QWORD*)(a1 + 8)) {
    v32 = v4;
    v33 = v3;
    v34 = v1;
    v35 = v2;
    v30 = &GameData_1ae6c42;
    v29 = (_QWORD*)game_HashString_alt1(&GameData_1ae6c42);
    if (game_GameModeData_instance_ != 0 &&
        (v6 = game_GameVariableTable_Find_alt1(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v29)) != 0) {
      v7 = (float)(*(_DWORD*)(v6 + 32) - 100);
    }
    else {
      v7 = -0x1.9000000000000p+6f;
    }
    game_ec1260((void*)((__int64*)&v29), GameData_21f4cc0);
    v8 = *(_QWORD**)(a1 + 8);
    v9 = *(_QWORD**)(a1 + 16);
    if (v8 != v9) {
      v10 = (_DWORD*)game_g_shared_system_skills_ptr;
      v11 = v7 / 0x1.9000000000000p+6f;
      do {
        v12 = v8[1];
        if (v12 != 0) {
          v13 = std___1___shared_weak_count_lock(v12);
          if (v13 != 0) {
            v14 = v13;
            if (*v8 != 0) {
              v15 = *(_QWORD*)(*v8 + 16LL);
              v31 = *v10 & 0xFFF;
              if ((game_HasSkill(v15 + 1744, &v31) & 1) != 0 &&
                  ((v16 = *(_QWORD*)(v15 + 440)) == 0
                       ? (v17 = 9)
                       : (v17 = *(_BYTE*)(v16 + 16)),
                   ((1 << v17) & 0xF1) != 0)) {
                v18 = v29;
                v19 = v30;
                while (v18 != v19) {
                  v20 = GameRoutine_1005520(a1, *v18);
                  if (v20 != 0) {
                    *(_DWORD*)(v20 + 12) += vcvtps_s32_f32(
                        (float)(v11 * (float)*(int*)(v20 + 8)) / 5.0f);
                  }
                  ++v18;
                }
              }
              else {
                v21 = v8[1];
                if (v21 != 0 &&
                    (v22 = std___1___shared_weak_count_lock(v21)) != 0) {
                  v23 = v22;
                  v24 = GameRoutine_1005520(a1, *(_QWORD*)(*v8 + 16LL));
                  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v25 = v24;
                    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
                    std___1___shared_weak_count___release_weak_alt1(v23);
                    v24 = v25;
                  }
                }
                else {
                  v24 = GameRoutine_1005520(a1, 0);
                }
                if (v24 != 0) {
                  v26 = *(_DWORD*)(v24 + 8);
                  v27 = *(_DWORD*)(v24 + 12);
                  *(_BYTE*)(v24 + 17) = 1;
                  *(_DWORD*)(v24 + 12) = v27 + vcvtps_s32_f32(v11 * (float)v26);
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
              std___1___shared_weak_count___release_weak_alt1(v14);
            }
          }
        }
        v8 += 2;
      } while (v8 != v9);
    }
    if (v29 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
    }
  }
}

#pragma GCC visibility pop
