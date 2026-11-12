#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameConverge_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GameConverge_Destructor(_QWORD* a1);
__int64 GameConverge_DeletingDestructor(_QWORD* a1);
__int64 GameRecord_99d540(_QWORD);
__int64 GameRoutine_130a9a0(_QWORD, _QWORD);
__int64 GameRoutine_130b1a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1327310(void);
__int64 GameRoutine_6c3980(_QWORD, _QWORD);
__int64 GameRoutine_6d86a0(_QWORD, _QWORD);
__int64 GameRoutine_7152e0(_QWORD);
__int64 GameRoutine_8305a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_89b540(__int64);
__int64 GameRoutine_8e61e0(__int64, __int64);
__int64 GameRoutine_8e7ec0(__int64 result, unsigned int, int);
__int64 GameRoutine_8ee960(_QWORD, _QWORD);
__int64 GameRoutine_8ef040(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8f31e0(_QWORD, _QWORD);
__int64 GameRoutine_99d700(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 GameRoutine_ae07e0(_QWORD);
__int64 GameVariable_8272a0(_QWORD);
__int64 Impl_718440(void);
__int64 RidePool_93bb80(_QWORD);
__int64 SideStoryFile_12ae4c0(_QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 UnitHeroes_6daf00(_QWORD);
__int64 Unit_6db740(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_Find_6eac40(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_Unknown6c46e0(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1aed5ad;
extern _UNKNOWN* game_g_hero_ids;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1fabaa0[])();
extern __int64 (*GameData_1fabb20[])();
extern __int64 (*GameData_1fabe10[])();
extern __int64 (*GameData_1fabf20[])();
extern __int64 (*GameData_1fac220[])();
extern __int64 GameData_21c6980;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 GameData_21ca310;
extern __int64 GameData_21d9f90;
extern __int64 GameData_21d9f98;
extern __int64 GameData_21d9fa8;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c780;
extern char GameData_1a9f09e;
extern int GameData_21d8810;
struct PseudoSret GameRoutine_936f60(_QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_93c6a0(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn)) GameRoutine_740050(void);
void __attribute__((noreturn)) GameRoutine_8f2260(void);
__int64 GameConverge_8e7ca0(__int64 a1, unsigned __int64* a2);
__int64 GameConverge_8e7dc0(__int64 result);
_QWORD* game_GameConverge_Impl_GetUnitList(__int64 a1, _QWORD* a2,
                                           unsigned int a3, int a4);
__int64 game_GameConverge_Impl_Commit(__int64 result, __int64* a2);
__int64 game_GameConverge_Impl_CommonInfo_MergeRelay(__int64 a1);
__int64 GameConverge_8ea270(__int64 a1, unsigned int a2, __int64 a3);
__int64 GameConverge_8eeec0(__int64 result, unsigned int a2, int a3);
__int64 GameConverge_8ef7c0(__int64 result);
__int64 GameConverge_8ef980(__int64 a1);
__int64 GameConverge_8eff50(__int64 result, __int16* a2);
__int64 GameConverge_8f0c60(__int64 a1, __int64 a2);
_QWORD* game_GameConverge_Impl_RouteInfo_ResetReceived_closure_Invoke_8f1450(
    __int64 a1, __int64 a2);
_QWORD* game_GameConverge_Impl_RouteInfo_ResetReceived_closure_Invoke_8f1580(
    __int64 a1, __int64 a2);
__int64
game_GameConverge_Impl_CommitStartBind_closure_Invoke_8f16a0(__int64 a1,
                                                             _QWORD* a2);
unsigned __int64 game_GameConverge_Impl_CommitStartBind_closure_Invoke_8f17c0(
    __int64 a1, unsigned __int8* a2);
_QWORD* GameConverge_8f2280(_QWORD* a1, __int64* a2);
_QWORD* GameConverge_8f23a0(_QWORD* result);
_QWORD* GameConverge_8f24c0(_QWORD* a1, __int64* a2);
_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Destructor(_QWORD* a1);
_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Clone(__int64 a1);
_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Destroy(__int64 a1);
__int64 game_GameConverge_Impl_TryJoin_closure_Invoke(__int64 a1, _QWORD* a2);
__int64 game_GameConverge_Impl_TryJoin_closure0_Invoke(__int64 a1, __int64* a2);
__int64 game_GameConverge_Impl_GetUnitList_closure_Invoke(__int64 result,
                                                          __int64* a2);
__int64
game_GameConverge_Impl_EachCompleted_closure_Invoke(__int64 result,
                                                    unsigned __int8* a2);
__int64 GameRoutine_89b540_alt1(_QWORD) __asm__("GameRoutine_89b540");
__int64 LegionPool_9374e0(_QWORD, _QWORD);
__int64 RidePool_93cc20(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_1fabba0[])();
extern __int64 (*GameData_1fabc20[])();
extern __int64 (*GameData_1fabca0[])();
extern __int64* GameData_212dd88[5];
extern __int64* GameData_212dda8;
__int64 game_GameConverge_Impl_RouteInfo_ResetReceived_alt2(_QWORD* a1) __asm__(
    "game_GameConverge_Impl_RouteInfo_ResetReceived");
__int64
game_GameConverge_Impl_CommitEndBind_closure_DeletingDestructor(_QWORD* a1);
__int64
game_GameConverge_Impl_GetMaxMergeCount_closure_Invoke(__int64 result,
                                                       unsigned __int8* a2);
__int64
game_GameConverge_Impl_GetMaxClearDifficulty_closure_Invoke(__int64 result,
                                                            _BYTE* a2);
_DWORD* GameRoutine_9addd0(_DWORD* result);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64 result,
                                      unsigned __int16*, __int64);
__int64* GameConverge_8f2280_alt1(__int64*,
                                  __int64*) __asm__("GameConverge_8f2280");
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_6c3980_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_6c3980");
__int64 GameRoutine_717fc0(_QWORD, _QWORD);
__int64 GameRoutine_717fc0_alt1(unsigned __int64*,
                                int) __asm__("GameRoutine_717fc0");
__int64 GameRoutine_8e56c0(__int64*);
__int64 GameRoutine_8e5be0(__int64);
__int64 GameRoutine_8ee960_alt1(__int64 result,
                                unsigned int*) __asm__("GameRoutine_8ee960");
__int64 UnitVariables_6e2ce0(__int64, __int64, char);
__int64 Unit_6cf740(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_GameConverge_Impl_CommonInfo_Merge_alt1(
    __int64, char, int) __asm__("game_GameConverge_Impl_CommonInfo_Merge");
__int64 game_GameConverge_Impl_RouteInfo_ResetReceived_alt1(_QWORD) __asm__(
    "game_GameConverge_Impl_RouteInfo_ResetReceived");
__int64 game_GameVariable_EachMerge(__int64, __int64);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 game_HashString_alt2(__int64 result) __asm__("game_HashString");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_anonymous_DepositoryData_Commit(_QWORD, _QWORD);
__int64 game_anonymous_DepositoryData_Commit_alt1(_BYTE*, _QWORD*) __asm__(
    "game_anonymous_DepositoryData_Commit");
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
char* GameRoutine_8ef5a0(char**);
char* UnitHeroes_6828a0(unsigned __int8);
extern _QWORD GameData_1f9cbe8[10];
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1faba10[])();
extern char GameData_21f60a8;
extern char GameData_21f60c0;
extern char GameData_21f60d8;
extern char GameData_21f60f0;
extern char GameData_21f6108;
extern char GameData_21f6120;
extern char GameData_21f6138;
extern char GameData_21f6150;
extern char GameData_21f6168;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_64aa00_alt1() __asm__("GameRoutine_64aa00");
void __attribute__((noreturn)) GameRoutine_8f2240();
void __attribute__((noreturn)) String_60a1d0();
__int64 GameConverge_8e7ec0(__int64 result, unsigned __int8 a2, int a3);
__attribute__((swiftcall)) void
GameConverge_8ea8c0(PSEUDO_X8 x8_, __int64 result, __int64 a2, char a3);
_QWORD* game_GameConverge_Impl_CommonInfo_Merge_alt2(
    __int64 a1, char a2,
    int a3) __asm__("game_GameConverge_Impl_CommonInfo_Merge");
__int64 GameConverge_8ef340(__int64 result, __int64 a2, char a3);
__int64
game_GameConverge_Impl_RouteInfo_ResetReceived_closure_Invoke(__int64 a1,
                                                              __int64 a2);
__int64
game_GameConverge_Impl_CommitEndBind_closure_Invoke(__int64 result,
                                                    unsigned __int8* a2);
__int64* GameRoutine_60eb40(__int64* result, unsigned __int64);
__int64 std___1___next_prime(_QWORD);
__int64 GameConverge_8ef040(__int64 a1, unsigned int* a2, int* a3, int* a4);
unsigned __int64 GameConverge_8f04a0(unsigned __int64 result, _QWORD* a2);
__int64* game_9a28e0(int);
__int64 GameHr_8273e0(__int64, __int64);
__int64 GameRoutine_130a9a0_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_130a9a0");
__int64 Impl_718440_alt1() __asm__("Impl_718440");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
bool LegionPool_9374e0_alt1(_QWORD*, __int64) __asm__("LegionPool_9374e0");
bool RidePool_93cc20_alt1(_QWORD*, __int64) __asm__("RidePool_93cc20");
float* GameUnitRecord_130b1a0(float* result, int, __int64);
void GameRecord_99d700(__int64, unsigned int, __int64);
void RidePool_93bb80_alt1(__int64) __asm__("RidePool_93bb80");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_GameConverge_Impl_CommonInfo_Merge(__int64 a1, char a2, int a3);
void game_GameConverge_Impl_RouteInfo_ResetReceived(__int64* a1);

__int64 GameConverge_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_GameConverge_vtable;
  result = a1[1];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[1] = 0;
  }
  return result;
}

__int64 GameConverge_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_GameConverge_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

__int64 GameConverge_8e7ca0(__int64 a1, unsigned __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64*** v9;
  __int64** v10;
  unsigned __int64 v11;
  __int64* v12;

  v2 = 1;
  while (1) {
    if (a2 != nullptr) {
      v3 = (_QWORD*)(a1 + 256 + 216 * v2);
      v4 = v3[4];
      if (v4 != 0 && v3[6] != 0) {
        v6 = *a2;
        v7 = v4 - 1;
        if ((v4 & (v4 - 1)) != 0) {
          v8 = *a2;
          if (v6 >= v4) {
            v8 = v6 % v4;
          }
        }
        else {
          v8 = v7 & v6;
        }
        v9 = *(__int64****)(v3[3] + 8 * v8);
        if (v9 != nullptr) {
          v10 = *v9;
          if (v10 != nullptr) {
            break;
          }
        }
      }
    }
  LABEL_3:
    if (++v2 == 10) {
      return 0;
    }
  }
  if ((v4 & v7) == 0) {
    while (1) {
      v12 = v10[1];
      if ((__int64*)v6 == v12) {
        if (v10[2] == (__int64*)v6) {
          goto LABEL_2;
        }
      }
      else if (((unsigned __int64)v12 & v7) != v8) {
        goto LABEL_3;
      }
      v10 = (__int64**)*v10;
      if (v10 == nullptr) {
        goto LABEL_3;
      }
    }
  }
  while (1) {
    v11 = (unsigned __int64)v10[1];
    if (v6 == v11) {
      break;
    }
    if (v11 >= v4) {
      v11 %= v4;
    }
    if (v11 != v8) {
      goto LABEL_3;
    }
  LABEL_18:
    v10 = (__int64**)*v10;
    if (v10 == nullptr) {
      goto LABEL_3;
    }
  }
  if (v10[2] != (__int64*)v6) {
    goto LABEL_18;
  }
LABEL_2:
  if (((_DWORD)v10[3] & 0x80000000) != 0) {
    goto LABEL_3;
  }
  return 1;
}

__int64 GameConverge_8e7dc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  unsigned __int64 v14;
  int v15;
  struct {
    unsigned int v16;
    char v17;
    char v18;
  } v16_;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(*GameData_212c780 + 8);
  v3 = *(__int64**)(v2 + 48);
  v4 = *(__int64**)(v2 + 56);
  while (v3 != v4) {
    v5 = *v3;
    if (*v3 != 0) {
      v16_.v16 = *(_DWORD*)(v5 + 96);
      v6 = *(_BYTE*)(v5 + 176);
      v7 = *(_BYTE*)(v5 + 178);
      v16_.v17 = v6;
      v16_.v18 = v7;
      result = GameRoutine_8ee960_alt1(v1 + 8, &v16_.v16);
    }
    ++v3;
  }
  if (game_GameModeData_instance_ != 0) {
    v8 = *(_QWORD*)(game_GameModeData_instance_ + 160);
    if (v8 != 0) {
      v9 = *(_QWORD*)(v1 + 184);
      v11 = *(_QWORD*)(v9 + 8);
      v10 = *(_QWORD*)(v9 + 16);
      if (v10 != v11 && v10 - v11 == *(_QWORD*)(v8 + 16) - *(_QWORD*)(v8 + 8)) {
        v13 = 4;
        v14 = 0;
        do {
          v15 = *(_DWORD*)(*(_QWORD*)(v8 + 8) + v13);
          if ((signed __int32)*(_DWORD*)(v11 + v13) < v15) {
            *(_DWORD*)(v11 + v13) = v15;
            v11 = *(_QWORD*)(v9 + 8);
            v10 = *(_QWORD*)(v9 + 16);
          }
          ++v14;
          v13 += 32;
        } while (v14 < (v10 - v11) >> 5);
      }
    }
  }
  return result;
}

__int64 GameConverge_8e7ec0(__int64 result, unsigned __int8 a2, int a3)
{
  __int64 v3;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;

  if ((unsigned __int8)(a2 - 1) > 7u) {
    return result;
  }
  v3 = result;
  game_GameConverge_Impl_CommonInfo_Merge_alt1(result + 8, a2, a3);
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v6 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  }
  if (*(_DWORD*)(v3 + 216LL * a2 + 320) > v6) {
    v6 = *(_DWORD*)(v3 + 216LL * a2 + 320);
  }
  *(_DWORD*)(v3 + 216LL * a2 + 320) = v6;
  v19 = 17;
  v7 = game_UnitPool_GetFirst_alt1(&v19);
  if (v7 != 0) {
    v8 = *(_QWORD*)(v7 + 432);
    v9 = v7;
    if (v8 == 0) {
      v16 = *(_QWORD*)(v7 + 440);
      if (v16 == 0 || (unsigned int)(v17 = *(unsigned __int8*)(v16 + 16)) > 8) {
      LABEL_17:
        GameConverge_8ef340(v3 + 216LL * a2 + 256, v9, a2);
        goto LABEL_18;
      }
      v18 = v17 - 3;
      while (1) {
        if (v18 == 0) {
          v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
          if (v8 != 0) {
            break;
          }
        }
        if (++v18 == 6) {
          goto LABEL_17;
        }
      }
    }
    while (1) {
      do {
        v10 = v8;
        GameConverge_8ef340(v3 + 216LL * a2 + 256, v9, a2);
        v8 = *(_QWORD*)(v10 + 432);
        v9 = v10;
      } while (v8 != 0);
      v11 = *(_QWORD*)(v10 + 440);
      if (v11 == 0) {
        break;
      }
      v12 = *(unsigned __int8*)(v11 + 16);
      if (v12 > 8) {
        break;
      }
      v13 = v12 - 3;
      while (1) {
        if (v13 == 0) {
          v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
          if (v8 != 0) {
            break;
          }
        }
        if (++v13 == 6) {
          goto LABEL_16;
        }
      }
      v9 = v10;
    }
  LABEL_16:
    v9 = v10;
    goto LABEL_17;
  }
LABEL_18:
  result = GameRoutine_8e5be0(v3 + 2464);
  if (*(_DWORD*)(v3 + 216LL * a2 + 428) + *(_DWORD*)(v3 + 216LL * a2 + 424) ==
      0) {
    result = GameRoutine_8e56c0((__int64*)(v3 + 216LL * a2 + 328));
  }
  if (a3 == 2) {
    v14 = *(_DWORD*)(v3 + 216LL * a2 + 428);
    if (v14 >= 99) {
      v14 = 99;
    }
    *(_DWORD*)(v3 + 216LL * a2 + 428) = v14 + 1;
  }
  else {
    v15 = *(_DWORD*)(v3 + 216LL * a2 + 424);
    if (v15 >= 99) {
      v15 = 99;
    }
    *(_DWORD*)(v3 + 216LL * a2 + 424) = v15 + 1;
  }
  return result;
}

_QWORD* game_GameConverge_Impl_GetUnitList(__int64 a1, _QWORD* a2,
                                           unsigned int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  _QWORD* i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* result;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  _QWORD v43[4];
  _QWORD* v44;
  __int64 v45;

  v4 = a2[1];
  v5 = a2[2];
  for (i = a2; v5 != v4; v5 -= 16) {
    v10 = *(_QWORD*)(v5 - 8);
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  v11 = i[7];
  i[2] = v4;
  if (v11 != 0) {
    a2 = (_QWORD*)i[6];
    if (a2 != nullptr) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)*a2;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14);
        a2 = v13;
      } while (v13 != nullptr);
    }
    v15 = i[5];
    i[6] = 0;
    if (v15 != 0) {
      v16 = v15 & 7;
      if (v15 >= 8) {
        v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        v17 = 0;
        do {
          *(_QWORD*)(i[4] + 8 * v17) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 8) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 16) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 24) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 32) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 40) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 48) = 0;
          v19 = i[4] + 8 * v17;
          v17 += 8;
          *(_QWORD*)(v19 + 56) = 0;
        } while (v18 != v17);
      }
      else {
        v17 = 0;
      }
      if (v16 != 0) {
        v20 = 8 * v17;
        do {
          --v16;
          *(_QWORD*)(i[4] + v20) = 0;
          v20 += 8;
        } while (v16 != 0);
      }
    }
    i[7] = 0;
  }
  v21 = *(_QWORD*)(a1 + 8);
  v22 = v43;
  v44 = v43;
  v23 = *(_QWORD*)(v21 + 2416);
  v43[0] = GameData_1fac220;
  v43[1] = v21;
  *(_QWORD*)(v21 + 2424) = v23;
  v24 = v21 + 216LL * (unsigned __int8)a3;
  v25 = *(_QWORD*)(v24 + 256);
  v26 = *(_QWORD*)(v24 + 264);
  if (v25 == v26) {
    goto LABEL_29;
  }
  do {
    v27 = v44;
    v45 = v25;
    if (v44 == nullptr) {
    LABEL_50:
      GameRoutine_60a310(v27, a2);
    }
    (*(void (**)(_QWORD*, __int64*))(*v44 + 48LL))(v44, &v45);
    v25 += 2224;
  } while (v25 != v26);
  v22 = v44;
  if (v44 == v43) {
  LABEL_29:
    v28 = 32;
  }
  else {
    if (v44 == nullptr) {
      goto LABEL_31;
    }
    v28 = 40;
  }
  (*(void (**)(_QWORD*, _QWORD*))(*v22 + v28))(v22, a2);
LABEL_31:
  v29 = *(__int64**)(v21 + 2416);
  v30 = *(__int64**)(v21 + 2424);
  while (v29 != v30) {
    v31 = *v29;
    v32 = GameRoutine_8e61e0((__int64)i, *v29);
    if (v32 != 0) {
      GameRoutine_6c3980(*(_QWORD*)(v32 + 8), v31);
    }
    ++v29;
  }
  GameRoutine_8e7ec0(*(_QWORD*)(a1 + 8), a3, a4);
  v33 = *(_QWORD*)(a1 + 8);
  result = v43;
  v44 = v43;
  v35 = *(_QWORD*)(v33 + 2416);
  v43[0] = GameData_1fac220;
  v43[1] = v33;
  *(_QWORD*)(v33 + 2424) = v35;
  v36 = v33 + 216LL * (unsigned __int8)a3;
  v37 = *(_QWORD*)(v36 + 256);
  v38 = *(_QWORD*)(v36 + 264);
  if (v37 != v38) {
    do {
      v27 = v44;
      v45 = v37;
      if (v44 == nullptr) {
        goto LABEL_50;
      }
      (*(void (**)(_QWORD*, __int64*))(*v44 + 48LL))(v44, &v45);
      v37 += 2224;
    } while (v37 != v38);
    result = v44;
    if (v44 != v43) {
      if (v44 != nullptr) {
        v39 = 40;
      LABEL_43:
        result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + v39))(
            result, a2);
      }
      v40 = *(__int64**)(v33 + 2416);
      v41 = *(__int64**)(v33 + 2424);
      while (v40 != v41) {
        v42 = *v40;
        result = (_QWORD*)GameRoutine_8e61e0((__int64)i, *v40);
        if (result != nullptr) {
          result = (_QWORD*)GameRoutine_6c3980(result[3], v42);
        }
        ++v40;
      }
      return result;
    }
  }
  v39 = 32;
  goto LABEL_43;
}

__int64 game_GameConverge_Impl_Commit(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int* v14;
  unsigned int* k;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  bool v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v27;
  __int64* v28;
  __int64 m;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  int v33;
  __int64 v34;
  unsigned int* v35;
  unsigned int* i;
  unsigned int v37;
  unsigned int v38;
  int v39;
  __int64 v40;
  bool v41;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64** v50;
  __int64 j;
  unsigned __int64* v52;
  unsigned __int64 v53;
  char v54;
  __int64 v55;
  unsigned __int64 v56;
  int v57;
  __int64 (**v58)();
  char* v59;
  __int64 (***v60)();
  int v61;

  v2 = result;
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 15) == 9) {
    v4 = *(__int64**)(result + 88);
    result = (__int64)&v58;
    v58 = GameData_1fabaa0;
    v59 = (char*)(game_GameModeData_instance_ + 40);
    v60 = &v58;
    if (v4 == nullptr) {
      goto LABEL_77;
    }
    do {
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 48) + 3932784LL);
      if (v5 != 0 && *(_QWORD*)(*(_QWORD*)(v3 + 48) + 3932800LL) != 0) {
        v7 = *((unsigned int*)v4 + 4);
        v8 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v9 = *((unsigned int*)v4 + 4);
          if (v5 <= v7) {
            v9 = (unsigned int)v7 % (unsigned int)v5;
          }
        }
        else {
          v9 = ((_DWORD)v5 - 1) & (unsigned int)v7;
        }
        v10 =
            *(__int64***)(*(_QWORD*)(*(_QWORD*)(v3 + 48) + 3932776LL) + 8 * v9);
        if (v10 != nullptr) {
          v11 = *v10;
          if (v11 != nullptr) {
            if ((v5 & v8) == 0) {
              while (1) {
                v13 = v11[1];
                if (v13 == v7) {
                  if (*((_DWORD*)v11 + 4) == (_DWORD)v7) {
                    goto LABEL_33;
                  }
                }
                else if ((v13 & v8) != v9) {
                  goto LABEL_5;
                }
                v11 = (__int64*)*v11;
                if (v11 == nullptr) {
                  goto LABEL_5;
                }
              }
            }
            do {
              v12 = v11[1];
              if (v12 == v7) {
                if (*((_DWORD*)v11 + 4) == (_DWORD)v7) {
                LABEL_33:
                  a2 = v11 + 3;
                  if (v11[3] == 0) {
                    goto LABEL_8;
                  }
                  goto LABEL_6;
                }
              }
              else {
                if (v12 >= v5) {
                  v12 %= v5;
                }
                if (v12 != v9) {
                  break;
                }
              }
              v11 = (__int64*)*v11;
            } while (v11 != nullptr);
          }
        }
      }
    LABEL_5:
      a2 = &GameData_21c6980;
      if (GameData_21c6980 != 0) {
      LABEL_6:
        v61 = *((_DWORD*)v4 + 5);
        if (v60 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        ((void (*)(__int64 (***)()))(*v60)[6])(v60);
      }
    LABEL_8:
      v4 = (__int64*)*v4;
    } while (v4 != nullptr);
    result = (__int64)v60;
    if (v60 == &v58) {
    LABEL_77:
      v34 = 32;
    }
    else {
      if (v60 == nullptr) {
      LABEL_79:
        v35 = *(unsigned int**)(v2 + 8);
        for (i = *(unsigned int**)(v2 + 16); v35 != i; v35 += 2) {
          v59 = &GameData_1a9f09e;
          v58 = (__int64 (**)())*v35;
          result = SpotMgr_132ffa0(&v58);
          if (result != 0) {
            v37 = *(unsigned __int8*)(result + 176);
            v38 = *((unsigned __int8*)v35 + 4);
            if (v38 <= v37) {
              v39 = *(unsigned __int8*)(result + 176);
            }
            else {
              v39 = *((unsigned __int8*)v35 + 4);
            }
            if (v37 < v38) {
              v40 = *(_QWORD*)(result + 120);
              v41 = v39 == 1 || v40 == 0;
              if (v41 || (*(_WORD*)(v40 + 258) & 0x80) == 0) {
                *(_BYTE*)(result + 176) = v39;
                if (v39 == 2) {
                  *(_BYTE*)(result + 177) = 3;
                }
                if (v39 != 1 && v40 != 0) {
                  v43 = result;
                  v44 = (_QWORD*)GameRoutine_ae07e0(v40);
                  result = v43;
                  if (*v44 != 0) {
                    game_VariableManager_SetFlag(v44, 1);
                    result = v43;
                  }
                }
              }
            }
            *(_BYTE*)(result + 178) =
                (*(_BYTE*)(result + 178) | *((_BYTE*)v35 + 5)) & 0xFD;
          }
        }
        v45 = *(_QWORD*)(v2 + 184);
        if (v45 != 0) {
          v46 = *(_QWORD*)(game_GameModeData_instance_ + 160);
          v48 = *(_QWORD*)(v46 + 8);
          v47 = *(_QWORD*)(v46 + 16);
          if (v47 != v48 &&
              v47 - v48 == *(_QWORD*)(v45 + 16) - *(_QWORD*)(v45 + 8)) {
            v55 = 4;
            v56 = 0;
            do {
              v57 = *(_DWORD*)(*(_QWORD*)(v45 + 8) + v55);
              if (*(_DWORD*)(v48 + v55) < v57) {
                *(_DWORD*)(v48 + v55) = v57;
                v48 = *(_QWORD*)(v46 + 8);
                v47 = *(_QWORD*)(v46 + 16);
              }
              ++v56;
              v55 += 32;
            } while (v56 < (v47 - v48) >> 5);
          }
        }
        v50 = (unsigned __int64**)GameData_21c9a78;
        for (j = GameData_21c9a80; v50 != (unsigned __int64**)j;
             result = game_VariableManager_SetFlag(v53 + 1432, v54 & 1)) {
          v52 = *v50++;
          v53 = v52[3];
          v54 = GameConverge_8e7ca0(v2, v52);
        }
        return result;
      }
      v34 = 40;
    }
    result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + v34))(
        result, a2);
    goto LABEL_79;
  }
  v14 = *(unsigned int**)(result + 8);
  for (k = *(unsigned int**)(result + 16); v14 != k; v14 += 2) {
    v59 = &GameData_1a9f09e;
    v58 = (__int64 (**)())*v14;
    result = SpotMgr_132ffa0(&v58);
    if (result != 0) {
      v16 = result;
      result = GameRoutine_1327310();
      if ((result & 1) == 0) {
        v17 = *(unsigned __int8*)(v16 + 176);
        v18 = *((unsigned __int8*)v14 + 4);
        if (v18 <= v17) {
          v19 = *(unsigned __int8*)(v16 + 176);
        }
        else {
          v19 = *((unsigned __int8*)v14 + 4);
        }
        if (v17 < v18) {
          result = *(_QWORD*)(v16 + 120);
          v20 = v19 == 1 || result == 0;
          if (v20 || (*(_WORD*)(result + 258) & 0x80) == 0) {
            *(_BYTE*)(v16 + 176) = v19;
            if (v19 == 2) {
              *(_BYTE*)(v16 + 177) = 3;
            }
            if (v19 != 1 && result != 0) {
              result = ((__int64 (*)(void))GameRoutine_ae07e0)();
              if (*(_QWORD*)result != 0) {
                result = game_VariableManager_SetFlag(result, 1);
              }
            }
          }
        }
        *(_BYTE*)(v16 + 178) =
            (*(_BYTE*)(v16 + 178) | *((_BYTE*)v14 + 5)) & 0xFD;
      }
    }
  }
  v22 = *(_QWORD*)(v2 + 184);
  if (v22 != 0) {
    v23 = *(_QWORD*)(game_GameModeData_instance_ + 160);
    v25 = *(_QWORD*)(v23 + 8);
    v24 = *(_QWORD*)(v23 + 16);
    if (v24 != v25 && v24 - v25 == *(_QWORD*)(v22 + 16) - *(_QWORD*)(v22 + 8)) {
      v31 = 4;
      v32 = 0;
      do {
        v33 = *(_DWORD*)(*(_QWORD*)(v22 + 8) + v31);
        if (*(_DWORD*)(v25 + v31) < v33) {
          *(_DWORD*)(v25 + v31) = v33;
          v25 = *(_QWORD*)(v23 + 8);
          v24 = *(_QWORD*)(v23 + 16);
        }
        ++v32;
        v31 += 32;
      } while (v32 < (v24 - v25) >> 5);
    }
  }
  if (*(_BYTE*)(v2 + 168) == 0) {
    v27 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v27 = *(_BYTE*)(game_GameModeData_instance_ + 15);
    }
    *(_BYTE*)(v2 + 168) = v27;
  }
  v28 = (__int64*)GameData_21c9a78;
  for (m = GameData_21c9a80; v28 != (__int64*)m;
       result =
           game_VariableManager_SetFlag(*(_QWORD*)(v30 + 24) + 1432LL, 0)) {
    v30 = *v28++;
  }
  return result;
}

__int64 game_GameConverge_Impl_CommonInfo_MergeRelay(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  int v38;
  unsigned int v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  __int64 v46;
  unsigned int v47;
  unsigned int v48;
  __int64 v49;
  unsigned int v50;
  unsigned int v51;
  __int64 v52;
  unsigned int v53;
  unsigned int v54;
  __int64 v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  __int64 v61;
  unsigned int v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  char v80;
  char v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v86;
  unsigned __int64 v87;
  int v88;
  __int64 (***v89)();
  __int64 v90;
  __int64* v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  unsigned int v96;
  struct {
    __int64 (**v97)();
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 (***v101)();
    int v102;
    char gap44_[4];
    __int64 v103;
  } v97_;
  __int64 v104;

  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    v2 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    v3 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v2 = 0;
    v3 = 0;
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + 160LL) = v2;
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 164LL) = v3;
  v4 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v4 + 160) != 0) {
    v5 = *(_DWORD*)(v4 + 164);
    v6 = 216LL * *(unsigned __int8*)(v4 + 160);
    v7 = 432;
    if (v5 == 2) {
      v7 = 436;
    }
    v8 = v4 + v7;
    v9 = v4 + v6;
    v10 = *(_DWORD*)(v8 + v6);
    if (v10 >= 99) {
      v10 = 99;
    }
    v11 = v10 + 1;
    if (v5 == 2) {
      *(_DWORD*)(v9 + 436) = v11;
    }
    else {
      *(_DWORD*)(v9 + 432) = v11;
    }
  }
  v12 = game_9a28e0(44),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ == 0 ||
      (v13 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v12)) == 0 ||
      *(_DWORD*)(v13 + 32) == 0) {
    v14 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      v15 = v14 + 216LL * v2;
      if (v3 == 2) {
        v16 = *(unsigned __int8*)(v15 + 441);
        v17 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_22;
        }
      LABEL_20:
        v18 = *(unsigned __int8*)(v17 + 13);
        LODWORD(v17) = *(unsigned __int8*)(v17 + 14);
      LABEL_23:
        if (v18 >= (unsigned int)v17 && v18 != 3 || (_DWORD)v17 == 3) {
          v18 = v17;
        }
        if ((v18 < v16 || v18 == 3) && v16 != 3) {
          LOBYTE(v18) = v16;
        }
        if (v2 != 0) {
          v23 = 216LL * v2;
          v24 = v14 + v23;
          if (v3 == 2) {
            *(_BYTE*)(v24 + 441) = v18;
            *(_DWORD*)(*(_QWORD*)(a1 + 8) + v23 + 468) = GameData_21d8810;
          }
          else {
            *(_BYTE*)(v24 + 440) = v18;
            *(_DWORD*)(*(_QWORD*)(a1 + 8) + v23 + 464) = GameData_21d8810;
          }
        }
        goto LABEL_44;
      }
      v16 = *(unsigned __int8*)(v15 + 440);
      v17 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_20;
      }
    }
    else {
      v16 = 3;
      v17 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_20;
      }
    }
  LABEL_22:
    v18 = 0;
    goto LABEL_23;
  }
LABEL_44:
  v25 = game_9a28e0(44),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ == 0 ||
      (v26 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v25)) == 0 ||
      *(_DWORD*)(v26 + 32) == 0) {
    v28 = *(_QWORD*)(a1 + 8);
    if (game_GameModeData_instance_ != 0) {
      v29 = game_GameModeData_instance_ + 104;
    }
    else {
      v29 = 0;
    }
    GameRecord_99d700(*(_QWORD*)(v28 + 216LL * v2 + 456), v3, v29),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v3 - 1 <= 1) {
      v30 = *(_QWORD*)(v28 + 672);
      v31 = 8;
      if (v3 != 1) {
        v31 = 9;
      }
      v32 = v28 + 216LL * v2;
      v33 = *(char*)(*(_QWORD*)(v32 + 456) + v31);
      v34 = *(char*)(v30 + 8);
      if (v33 < 0) {
        v36 = *(unsigned __int8*)(v30 + 9);
        v37 = *(_QWORD*)(v28 + 1752);
        v38 = ((v36 >> 7) ^ 1) + ((v34 & 0x80) == 0) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 888) + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 888) + 9LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 1104) + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 1104) + 9LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 1320) + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 1320) + 9LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 1536) + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 1536) + 9LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v37 + 8) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v37 + 9) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 1968) + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 1968) + 9LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 2184) + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 2184) + 9LL) >> 7) ^ 1);
        v35 = v38 +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 2400) + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(*(_QWORD*)(v28 + 2400) + 9LL) >> 7) ^ 1);
      }
      else {
        if (v34 <= 0) {
          LOBYTE(v35) = 0;
        }
        else {
          if ((unsigned __int8)v33 < (unsigned int)(unsigned __int8)v34) {
            *(_BYTE*)(v30 + 8) = v34 - 1;
            v30 = *(_QWORD*)(v28 + 672);
          }
          LOBYTE(v35) = 1;
        }
        if (*(char*)(v30 + 9) >= 1) {
          v39 = *(unsigned __int8*)(v30 + 9);
          if (v39 > (unsigned __int8)v33) {
            *(_BYTE*)(v30 + 9) = v39 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v40 = *(_QWORD*)(v28 + 888);
        if (*(char*)(v40 + 8) >= 1) {
          v41 = *(unsigned __int8*)(v40 + 8);
          if (v41 > (unsigned __int8)v33) {
            *(_BYTE*)(v40 + 8) = v41 - 1;
            v40 = *(_QWORD*)(v28 + 888);
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v40 + 9) >= 1) {
          v42 = *(unsigned __int8*)(v40 + 9);
          if (v42 > (unsigned __int8)v33) {
            *(_BYTE*)(v40 + 9) = v42 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v43 = *(_QWORD*)(v28 + 1104);
        if (*(char*)(v43 + 8) >= 1) {
          v44 = *(unsigned __int8*)(v43 + 8);
          if (v44 > (unsigned __int8)v33) {
            *(_BYTE*)(v43 + 8) = v44 - 1;
            v43 = *(_QWORD*)(v28 + 1104);
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v43 + 9) >= 1) {
          v45 = *(unsigned __int8*)(v43 + 9);
          if (v45 > (unsigned __int8)v33) {
            *(_BYTE*)(v43 + 9) = v45 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v46 = *(_QWORD*)(v28 + 1320);
        if (*(char*)(v46 + 8) >= 1) {
          v47 = *(unsigned __int8*)(v46 + 8);
          if (v47 > (unsigned __int8)v33) {
            *(_BYTE*)(v46 + 8) = v47 - 1;
            v46 = *(_QWORD*)(v28 + 1320);
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v46 + 9) >= 1) {
          v48 = *(unsigned __int8*)(v46 + 9);
          if (v48 > (unsigned __int8)v33) {
            *(_BYTE*)(v46 + 9) = v48 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v49 = *(_QWORD*)(v28 + 1536);
        if (*(char*)(v49 + 8) >= 1) {
          v50 = *(unsigned __int8*)(v49 + 8);
          if (v50 > (unsigned __int8)v33) {
            *(_BYTE*)(v49 + 8) = v50 - 1;
            v49 = *(_QWORD*)(v28 + 1536);
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v49 + 9) >= 1) {
          v51 = *(unsigned __int8*)(v49 + 9);
          if (v51 > (unsigned __int8)v33) {
            *(_BYTE*)(v49 + 9) = v51 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v52 = *(_QWORD*)(v28 + 1752);
        if (*(char*)(v52 + 8) >= 1) {
          v53 = *(unsigned __int8*)(v52 + 8);
          if (v53 > (unsigned __int8)v33) {
            *(_BYTE*)(v52 + 8) = v53 - 1;
            v52 = *(_QWORD*)(v28 + 1752);
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v52 + 9) >= 1) {
          v54 = *(unsigned __int8*)(v52 + 9);
          if (v54 > (unsigned __int8)v33) {
            *(_BYTE*)(v52 + 9) = v54 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v55 = *(_QWORD*)(v28 + 1968);
        if (*(char*)(v55 + 8) >= 1) {
          v56 = *(unsigned __int8*)(v55 + 8);
          if (v56 > (unsigned __int8)v33) {
            *(_BYTE*)(v55 + 8) = v56 - 1;
            v55 = *(_QWORD*)(v28 + 1968);
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v55 + 9) >= 1) {
          v57 = *(unsigned __int8*)(v55 + 9);
          if (v57 > (unsigned __int8)v33) {
            *(_BYTE*)(v55 + 9) = v57 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v58 = *(_QWORD*)(v28 + 2184);
        if (*(char*)(v58 + 8) >= 1) {
          v59 = *(unsigned __int8*)(v58 + 8);
          if (v59 > (unsigned __int8)v33) {
            *(_BYTE*)(v58 + 8) = v59 - 1;
            v58 = *(_QWORD*)(v28 + 2184);
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v58 + 9) >= 1) {
          v60 = *(unsigned __int8*)(v58 + 9);
          if (v60 > (unsigned __int8)v33) {
            *(_BYTE*)(v58 + 9) = v60 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v61 = *(_QWORD*)(v28 + 2400);
        if (*(char*)(v61 + 8) >= 1) {
          v62 = *(unsigned __int8*)(v61 + 8);
          if (v62 > (unsigned __int8)v33) {
            *(_BYTE*)(v61 + 8) = v62 - 1;
            v61 = *(_QWORD*)(v28 + 2400);
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v61 + 9) >= 1) {
          v63 = *(unsigned __int8*)(v61 + 9);
          if (v63 > (unsigned __int8)v33) {
            *(_BYTE*)(v61 + 9) = v63 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
      }
      v64 = *(_QWORD*)(v32 + 456);
      if (v3 == 1) {
        *(_BYTE*)(v64 + 8) = v35;
      }
      else {
        *(_BYTE*)(v64 + 9) = v35;
      }
    }
    LODWORD(v97_.v97) = 241;
    v65 = game_UnitPool_GetFirst_alt1((int*)&v97_.v97),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v65 != 0) {
      v66 = *(_QWORD*)(v65 + 432);
      if (v66 == 0) {
        v66 = *(_QWORD*)(v65 + 440);
        if (v66 != 0) {
          v67 = *(unsigned __int8*)(v66 + 16);
          if (v67 <= 8) {
            while (1) {
              v96 = v67 + 1;
              if (((2 << v67) & 0xF0) != 0) {
                v66 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v67 + 1) + 556000);
                if (v66 != 0) {
                  break;
                }
              }
              v67 = v96;
              if (v96 == 9) {
                goto LABEL_135;
              }
            }
          }
          else {
          LABEL_135:
            v66 = 0;
          }
        }
      }
      v97_.v103 = 0;
      v97_.v98 = 0;
      v97_.v99 = 0;
      v68 = v66;
      v97_.v100 = 0;
      v97_.v101 = nullptr;
      v97_.v102 = 0;
      GameRoutine_130a9a0_alt1((__int64)&v97_.v97, v65),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameUnitRecord_130b1a0(*(float**)(v28 + 200), v3, (__int64)&v97_.v97),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v68 != 0) {
        v27 = v68;
        do {
          v69 = *(_QWORD*)(v27 + 432);
          if (v69 == 0) {
            v70 = *(_QWORD*)(v27 + 440);
            if (v70 != 0 &&
                (unsigned int)(v71 = *(unsigned __int8*)(v70 + 16)) <= 8) {
              while (1) {
                v72 = v71 + 1;
                if (((2 << v71) & 0xF0) != 0) {
                  v69 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                   24LL * (unsigned __int8)(v71 + 1) + 556000);
                  if (v69 != 0) {
                    break;
                  }
                }
                ++v71;
                if (v72 == 9) {
                  goto LABEL_138;
                }
              }
            }
            else {
            LABEL_138:
              v69 = 0;
            }
          }
          v97_.v103 = 0;
          v97_.v98 = 0;
          v97_.v99 = 0;
          v97_.v100 = 0;
          v97_.v101 = nullptr;
          v97_.v102 = 0;
          GameRoutine_130a9a0_alt1((__int64)&v97_.v97, v27),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameUnitRecord_130b1a0(*(float**)(v28 + 200), v3, (__int64)&v97_.v97),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v27 = v69;
        } while (v69 != 0);
      }
    }
  }
  v73 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 15) == 9) {
    return Impl_718440_alt1();
  }
  v74 = *(_QWORD*)(a1 + 8);
  v75 = *(_QWORD*)(*GameData_212c780 + 8);
  v76 = *(__int64**)(v75 + 48);
  v77 = *(__int64**)(v75 + 56);
  if (v76 != v77) {
    do {
      v79 = *v76;
      if (*v76 != 0) {
        LODWORD(v97_.v97) = *(_DWORD*)(v79 + 96);
        v80 = *(_BYTE*)(v79 + 176);
        v81 = *(_BYTE*)(v79 + 178);
        BYTE4(v97_.v97) = v80;
        BYTE5(v97_.v97) = v81;
        GameRoutine_8ee960_alt1(v74 + 8, (unsigned int*)&v97_.v97),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      ++v76;
    } while (v76 != v77);
    v73 = game_GameModeData_instance_;
    v78 = *(_QWORD*)(game_GameModeData_instance_ + 160);
    if (v78 == 0) {
      goto LABEL_167;
    }
    goto LABEL_157;
  }
  v78 = *(_QWORD*)(game_GameModeData_instance_ + 160);
  if (v78 != 0) {
  LABEL_157:
    v82 = *(_QWORD*)(v74 + 184);
    v84 = *(_QWORD*)(v82 + 8);
    v83 = *(_QWORD*)(v82 + 16);
    if (v83 != v84 && v83 - v84 == *(_QWORD*)(v78 + 16) - *(_QWORD*)(v78 + 8)) {
      v86 = 4;
      v87 = 0;
      do {
        v88 = *(_DWORD*)(*(_QWORD*)(v78 + 8) + v86);
        if ((signed __int32)*(_DWORD*)(v84 + v86) < v88) {
          *(_DWORD*)(v84 + v86) = v88;
          v84 = *(_QWORD*)(v82 + 8);
          v83 = *(_QWORD*)(v82 + 16);
        }
        ++v87;
        v86 += 32;
      } while (v87 < (v83 - v84) >> 5);
      v73 = game_GameModeData_instance_;
    }
  }
LABEL_167:
  v89 = &v97_.v97;
  v97_.v97 = GameData_1fabb20;
  v97_.v98 = v74 + 8;
  v90 = *(_QWORD*)(v73 + 48);
  v97_.v101 = &v97_.v97;
  v90 += 3932160;
  v91 = *(__int64**)(v90 + 176);
  v92 = *(__int64**)(v90 + 184);
  if (v91 != v92) {
    do {
      v93 = *v91++;
      v104 = v93;
      if (v97_.v101 == nullptr) {
        GameRoutine_60a310_alt1(),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v97_.v101)[6])(v97_.v101,
                                                                 &v104),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v91 != v92);
    v89 = v97_.v101;
    if (v97_.v101 != &v97_.v97) {
      if (v97_.v101 != nullptr) {
        v94 = 5;
      LABEL_174:
        ((void (*)(__int64 (***)(void), __int64))(*v89)[v94])(v89, v27),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      return Impl_718440_alt1();
    }
  }
  v94 = 4;
  goto LABEL_174;
}

__int64 GameConverge_8ea270(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  int v9;

  if (a3 == 0) {
    return 0;
  }
  v7 = a3;
  v9 = 241;
  if (game_UnitPool_Find_6ead60(&v7, &v9) != 0) {
    return 0;
  }
  if (GameRoutine_8f31e0(a1 + 216LL * (unsigned __int8)a2 + 256, a3) != 0) {
    return 1;
  }
  if (game_GetHero(a2) != a3) {
    return 0;
  }
  v8 = SideStoryFile_12ae4c0(a2);
  v7 = game_HashString(v8);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &v7);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__attribute__((swiftcall)) void

GameConverge_8ea8c0(PSEUDO_X8 x8_, __int64 result, __int64 a2, char a3)
{
  _BYTE* a4 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;

  v5 = result + 216LL * (unsigned __int8)a2;
  v6 = *(_QWORD*)(v5 + 256);
  v7 = *(_QWORD*)(v5 + 264);
  v8 = v5 + 256;
  if (v7 == v6) {
    goto LABEL_11;
  }
  v13 = GameData_1f9cbe8[(unsigned __int8)a2];
  v12 = game_HashString_alt1(v13, a2);
  result = GameRoutine_717fc0(&v12, 1);
  if ((result & 1) == 0) {
    goto LABEL_11;
  }
  if ((a3 & 1) != 0) {
    result = game_GameConverge_Impl_RouteInfo_ResetReceived_alt1(v8);
  }
  if (*(_QWORD*)(v8 + 8) == *(_QWORD*)v8) {
  LABEL_11:
    *a4 = 1;
  }
  else {
    if (game_GameModeData_instance_ != 0) {
      v10 = *(_DWORD*)(game_GameModeData_instance_ + 72) + *(_DWORD*)(v8 + 64);
      v11 = v10 & ~(v10 >> 31);
      if (v11 >= 9999999) {
        v11 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v11;
    }
    {
      game_anonymous_DepositoryData_Commit(a4, v8 + 72);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_GameConverge_Impl_CommonInfo_Merge(__int64 a1, char a2, int a3)
{
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  char v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  __int64 result;
  __int64 v22;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;

  v6 = *(_QWORD*)(*GameData_212c780 + 8);
  v7 = *(__int64**)(v6 + 48);
  v8 = *(__int64**)(v6 + 56);
  while (v7 != v8) {
    v9 = *v7;
    if (*v7 != 0) {
      LODWORD(v23_.v23[0]) = *(_DWORD*)(v9 + 96);
      v10 = *(_BYTE*)(v9 + 176);
      v11 = *(_BYTE*)(v9 + 178);
      BYTE4(v23_.v23[0]) = v10;
      BYTE5(v23_.v23[0]) = v11;
      GameRoutine_8ee960_alt1(a1, (unsigned int*)v23_.v23);
    }
    ++v7;
  }
  v12 = game_GameModeData_instance_;
  v13 = *(_QWORD*)(game_GameModeData_instance_ + 160);
  if (v13 != 0) {
    v14 = *(_QWORD*)(a1 + 176);
    v16 = *(_QWORD*)(v14 + 8);
    v15 = *(_QWORD*)(v14 + 16);
    if (v15 != v16 && v15 - v16 == *(_QWORD*)(v13 + 16) - *(_QWORD*)(v13 + 8)) {
      v18 = 4;
      v19 = 0;
      do {
        v20 = *(_DWORD*)(*(_QWORD*)(v13 + 8) + v18);
        if ((signed __int32)*(_DWORD*)(v16 + v18) < v20) {
          *(_DWORD*)(v16 + v18) = v20;
          v16 = *(_QWORD*)(v14 + 8);
          v15 = *(_QWORD*)(v14 + 16);
        }
        ++v19;
        v18 += 32;
      } while (v19 < (v15 - v16) >> 5);
      v12 = game_GameModeData_instance_;
    }
  }
  v23_.v23[0] = GameData_1faba10;
  v23_.v23[1] = a1;
  v23_.v24 = v23_.v23;
  GameHr_8273e0(v12 + 40, (__int64)v23_.v23);
  result = (__int64)v23_.v24;
  if (v23_.v24 == v23_.v23) {
    v22 = 32;
    goto LABEL_21;
  }
  if (v23_.v24 != nullptr) {
    v22 = 40;
  LABEL_21:
    result = (*(__int64 (**)(__int64))(*v23_.v24 + v22))((__int64)v23_.v24);
  }
  *(_BYTE*)(a1 + 144) = a2;
  *(_DWORD*)(a1 + 148) = a3;
  return result;
}

__int64 GameConverge_8eeec0(__int64 result, unsigned int a2, int a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  int v13;
  int v14;
  unsigned int v15;

  v14 = a3;
  v15 = a2;
  if (a3 < 1) {
    return result;
  }
  v3 = *(_QWORD*)(result + 72);
  if (v3 == 0 || *(_QWORD*)(result + 88) == 0) {
    return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = a2;
    if (v3 <= a2) {
      v6 = a2 % (unsigned int)v3;
    }
  }
  else {
    v6 = ((_DWORD)v3 - 1) & a2;
  }
  v7 = *(__int64***)(*(_QWORD*)(result + 64) + 8 * v6);
  if (v7 == nullptr) {
    return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
  }
  v8 = *v7;
  if (*v7 == nullptr) {
    return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == a2) {
        if (*((_DWORD*)v8 + 4) == a2) {
          goto LABEL_25;
        }
      }
      else if ((v10 & v5) != v6) {
        return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
      }
      v8 = (__int64*)*v8;
      if (v8 == nullptr) {
        return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == a2) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
    }
  LABEL_15:
    v8 = (__int64*)*v8;
    if (v8 == nullptr) {
      return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
    }
  }
  if (*((_DWORD*)v8 + 4) != a2) {
    goto LABEL_15;
  }
LABEL_25:
  v11 = *((_DWORD*)v8 + 5);
  result = GameVariable_8272a0(game_GameModeData_instance_ + 40);
  if (result != 0) {
    if (v11 <= a3) {
      v13 = a3;
    }
    else {
      v13 = v11;
    }
    if (*(_BYTE*)(result + 18) != 0) {
      v11 = a3;
    }
    else {
      v11 = v13;
    }
  }
  *((_DWORD*)v8 + 5) = v11;
  return result;
}

__int64 GameConverge_8ef040(__int64 a1, unsigned int* a2, int* a3, int* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v10;
  __int64* v11;
  __int64 result;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  float v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 primeEm;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  unsigned __int64 v33;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v10 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v6 <= v5) {
        v4 = (unsigned int)v5 % (unsigned int)v6;
      }
    }
    else {
      v4 = ((_DWORD)v6 - 1) & (unsigned int)v5;
    }
    v11 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != 0) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = *(_QWORD*)(result + 8);
            if (v14 == v5) {
              if (*(_DWORD*)(result + 16) == (_DWORD)v5) {
                return result;
              }
            }
            else if ((v14 & v10) != v4) {
              goto LABEL_23;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_23;
            }
          }
        }
        do {
          v13 = *(_QWORD*)(result + 8);
          if (v13 == v5) {
            if (*(_DWORD*)(result + 16) == (_DWORD)v5) {
              return result;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v4) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_23:
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v15 = *a3;
  v16 = *a4;
  v17 = *(float*)(a1 + 32);
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v5;
  *(_DWORD*)(result + 16) = v15;
  *(_DWORD*)(result + 20) = v16;
  v18 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v17 * (float)v6) < v18) {
    v19 = v18 / v17;
    v20 = true;
    if (v6 >= 3) {
      v20 = (v6 & (v6 - 1)) != 0;
    }
    v21 = v20 | (2 * v6);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      v23 = v22;
    }
    else {
      v23 = v21;
    }
    if (v23 == 1) {
      v23 = 2;
    }
    else if ((v23 & (v23 - 1)) != 0) {
      v24 = result;
      primeEm = std___1___next_prime(v23);
      v6 = *(_QWORD*)(a1 + 8);
      v23 = primeEm;
      result = v24;
    }
    if (v23 > v6) {
      goto LABEL_35;
    }
    if (v23 < v6) {
      v27 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v29 = result;
        v27 = std___1___next_prime(v27);
        result = v29;
      }
      else {
        v28 = 1LL << -(char)__clz(v27 - 1);
        if (v27 >= 2) {
          v27 = v28;
        }
      }
      if (v23 <= v27) {
        v23 = v27;
      }
      if (v23 < v6) {
      LABEL_35:
        v26 = result;
        GameRoutine_60eb40((__int64*)a1, v23);
        result = v26;
      }
    }
    v6 = *(_QWORD*)(a1 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = ((_DWORD)v6 - 1) & (unsigned int)v5;
    }
  }
  v30 = *(_QWORD*)a1;
  v31 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v31 != nullptr) {
    *(_QWORD*)result = *v31;
    *v31 = result;
  }
  else {
    v32 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v32;
    *(_QWORD*)(v30 + 8 * v4) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v33 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v33 >= v6) {
          v33 %= v6;
        }
      }
      else {
        v33 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v33) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

__int64 GameConverge_8ef340(__int64 result, __int64 a2, char a3)
{
  __int64 v4;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64** v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  char* v22;
  int v27;

  if (a2 == 0) {
    return result;
  }
  v4 = result;
  v27 = *(_DWORD*)&(*(_BYTE(*)[4])0x1ACLL)[game_g_shared_system_skills_ptr] &
        0xFFF;
  result = game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v27);
  if ((result & 1) != 0) {
    return result;
  }
  v11 = *(__int64**)(a2 + 392);
  if ((*((_BYTE*)v11 + 49) & 8) != 0) {
    return result;
  }
  v12 = *(_QWORD*)(v4 + 32);
  if (v12 == 0 || *(_QWORD*)(v4 + 48) == 0) {
    goto LABEL_29;
  }
  v13 = *v11;
  v14 = v12 - 1;
  if ((v12 & (v12 - 1)) != 0) {
    v15 = v13;
    if (v13 >= v12) {
      v15 = v13 % v12;
    }
  }
  else {
    v15 = v14 & v13;
  }
  v16 = *(__int64***)(*(_QWORD*)(v4 + 24) + 8 * v15);
  if (v16 == nullptr) {
    goto LABEL_29;
  }
  v17 = *v16;
  if (v17 == nullptr) {
    goto LABEL_29;
  }
  if ((v12 & v14) == 0) {
    while (1) {
      v19 = v17[1];
      if (v13 == v19) {
        if (v17[2] == v13) {
          goto LABEL_26;
        }
      }
      else if ((v19 & v14) != v15) {
        goto LABEL_29;
      }
      v17 = (__int64*)*v17;
      if (v17 == nullptr) {
        goto LABEL_29;
      }
    }
  }
  while (1) {
    v18 = v17[1];
    if (v13 == v18) {
      break;
    }
    if (v18 >= v12) {
      v18 %= v12;
    }
    if (v18 != v15) {
      goto LABEL_29;
    }
  LABEL_15:
    v17 = (__int64*)*v17;
    if (v17 == nullptr) {
      goto LABEL_29;
    }
  }
  if (v17[2] != v13) {
    goto LABEL_15;
  }
LABEL_26:
  v20 = *((_DWORD*)v17 + 6);
  if ((v20 & 0x80000000) == 0) {
    v21 = *(_QWORD*)v4 + 2224LL * v20;
    if (a3 != 9) {
      return UnitVariables_6e2ce0(v21, a2, 1);
    }
    GameRoutine_6c3980_alt1(v21, a2);
    Unit_6cf740(v21);
    return (__int64)GameRoutine_9addd0((_DWORD*)(v21 + 2144));
  }
LABEL_29:
  v22 = GameRoutine_8ef5a0((char**)v4);
  GameRoutine_6c3980_alt1((__int64)v22, a2);
  Unit_6cf740((__int64)v22);
  if (GameData_21f60a8 == 1) {
    *((_DWORD*)v22 + 538) = 0;
  }
  if (GameData_21f60c0 == 1) {
    *((_DWORD*)v22 + 539) = 0;
  }
  if (GameData_21f60d8 == 1) {
    *((_DWORD*)v22 + 540) = 0;
  }
  if (GameData_21f60f0 == 1) {
    *((_DWORD*)v22 + 541) = 0;
  }
  if (GameData_21f6108 == 1) {
    *((_DWORD*)v22 + 542) = 0;
  }
  if (GameData_21f6120 == 1) {
    *((_DWORD*)v22 + 543) = 0;
  }
  if (GameData_21f6138 == 1) {
    *((_DWORD*)v22 + 544) = 0;
  }
  if (GameData_21f6150 == 1) {
    *((_DWORD*)v22 + 545) = 0;
  }
  if (GameData_21f6168 == 1) {
    *((_DWORD*)v22 + 546) = 0;
  }
  return GameConverge_8ef7c0(v4);
}

__int64 GameConverge_8ef7c0(__int64 result)
{
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  void* v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64* v19;

  v1 = (__int64*)result;
  if (*(_QWORD*)(result + 48) != 0) {
    v2 = *(_QWORD**)(result + 40);
    if (v2 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
        v2 = v4;
      } while (v4 != nullptr);
    }
    v6 = v1[4];
    v1[5] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v1[3] + 8 * v8) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 48) = 0;
          v10 = v1[3] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(v1[3] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v1[6] = 0;
  }
  v12 = *v1;
  if (v1[1] != *v1) {
    v13 = 392;
    v14 = 0;
    v15 = std___1_piecewise_construct_ptr;
    do {
      v16 = **(_QWORD**)(v12 + v13);
      v19 = &v17;
      v17 = v16;
      result = GameRoutine_8305a0(v1 + 3, &v17, v15, &v19, &v18);
      *(_DWORD*)(result + 24) = v14++;
      v13 += 2224;
      v12 = *v1;
    } while (0x3AEF6CA970586723LL * ((v1[1] - *v1) >> 4) > v14);
  }
  return result;
}

__int64 GameConverge_8ef980(__int64 a1)
{
  __int64 v1;
  void (***v2)(_QWORD);
  void (***v4)(_QWORD);
  bool v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 j;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 result;

  v2 = *(void (****)(_QWORD))a1;
  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)a1 != v1) {
    v4 = (void (***)(_QWORD))(v1 - 2224);
    do {
      (**v4)(v4);
      v5 = v4 == v2;
      v4 -= 278;
    } while (!v5);
  }
  v6 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 8) = v2;
  if (v6 != 0) {
    v7 = *(_QWORD**)(a1 + 40);
    if (v7 != nullptr) {
      v8 = fw_memory_g_heap_manager_ptr;
      do {
        v9 = (_QWORD*)*v7;
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v10);
        v7 = v9;
      } while (v9 != nullptr);
    }
    v11 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 48) = 0;
          v15 = *(_QWORD*)(a1 + 24) + 8 * v13;
          v13 += 8;
          *(_QWORD*)(v15 + 56) = 0;
        } while (v14 != v13);
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v16 = 8 * v13;
        do {
          --v12;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + v16) = 0;
          v16 += 8;
        } while (v12 != 0);
      }
    }
    *(_QWORD*)(a1 + 48) = 0;
  }
  v17 = *(_QWORD*)(a1 + 80);
  *(_DWORD*)(a1 + 64) = 0;
  GameRoutine_89b540(v17);
  RidePool_93bb80(*(_QWORD*)(a1 + 96));
  v18 = *(_QWORD*)(a1 + 112);
  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2544) = 0;
    v20 = *(_QWORD*)(v18 + 48) + i;
    *(_QWORD*)(v20 + 2552) = 0;
  }
  if (*(_QWORD*)(v18 + 32) != 0) {
    v21 = *(_QWORD**)(v18 + 24);
    if (v21 != nullptr) {
      v22 = fw_memory_g_heap_manager_ptr;
      do {
        v23 = (_QWORD*)*v21;
        if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v24);
        v21 = v23;
      } while (v23 != nullptr);
    }
    v25 = *(_QWORD*)(v18 + 16);
    *(_QWORD*)(v18 + 24) = 0;
    if (v25 != 0) {
      v26 = v25 & 7;
      if (v25 >= 8) {
        v28 = v25 & 0xFFFFFFFFFFFFFFF8LL;
        v27 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 48) = 0;
          v29 = *(_QWORD*)(v18 + 8) + 8 * v27;
          v27 += 8;
          *(_QWORD*)(v29 + 56) = 0;
        } while (v28 != v27);
      }
      else {
        v27 = 0;
      }
      if (v26 != 0) {
        v30 = 8 * v27;
        do {
          --v26;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + v30) = 0;
          v30 += 8;
        } while (v26 != 0);
      }
    }
    *(_QWORD*)(v18 + 32) = 0;
  }
  *(_DWORD*)(v18 + 72) = 0;
  GameRoutine_89b540(*(_QWORD*)(a1 + 128));
  RidePool_93bb80(*(_QWORD*)(a1 + 144));
  v31 = *(_QWORD*)(a1 + 160);
  for (j = -2400; j != 0; j += 160) {
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2544) = 0;
    v33 = *(_QWORD*)(v31 + 48) + j;
    *(_QWORD*)(v33 + 2552) = 0;
  }
  if (*(_QWORD*)(v31 + 32) != 0) {
    v34 = *(_QWORD**)(v31 + 24);
    if (v34 != nullptr) {
      v35 = fw_memory_g_heap_manager_ptr;
      do {
        v36 = (_QWORD*)*v34;
        if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) != 0) {
          v37 = 128;
        }
        else {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v37);
        v34 = v36;
      } while (v36 != nullptr);
    }
    v38 = *(_QWORD*)(v31 + 16);
    *(_QWORD*)(v31 + 24) = 0;
    if (v38 != 0) {
      v39 = v38 & 7;
      if (v38 >= 8) {
        v41 = v38 & 0xFFFFFFFFFFFFFFF8LL;
        v40 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 48) = 0;
          v42 = *(_QWORD*)(v31 + 8) + 8 * v40;
          v40 += 8;
          *(_QWORD*)(v42 + 56) = 0;
        } while (v41 != v40);
      }
      else {
        v40 = 0;
      }
      if (v39 != 0) {
        v43 = 8 * v40;
        do {
          --v39;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + v43) = 0;
          v43 += 8;
        } while (v39 != 0);
      }
    }
    *(_QWORD*)(v31 + 32) = 0;
  }
  *(_DWORD*)(v31 + 72) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_WORD*)(a1 + 184) = 771;
  result = GameRecord_99d540(a1 + 192);
  *(_QWORD*)(a1 + 208) = 0;
  return result;
}

__int64 GameConverge_8eff50(__int64 result, __int16* a2)
{
  __int16 v2;
  __int16 v3;
  __int16 v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;
  __int16 v19;
  __int16 v20;
  __int16 v21;
  __int16 v22;
  __int16 v23;
  __int16 v24;
  __int16 v25;
  __int16 v26;
  __int16 v27;
  __int16 v28;
  __int16 v29;
  __int16 v30;
  __int16 v31;

  v2 = *a2;
  *(_BYTE*)(result + 2) = *((_BYTE*)a2 + 2);
  *(_WORD*)result = v2;
  *(_BYTE*)(result + 3) = *((_BYTE*)a2 + 3);
  *(_DWORD*)(result + 4) = *((_DWORD*)a2 + 1);
  v3 = a2[4];
  *(_BYTE*)(result + 10) = *((_BYTE*)a2 + 10);
  *(_WORD*)(result + 8) = v3;
  *(_BYTE*)(result + 11) = *((_BYTE*)a2 + 11);
  *(_DWORD*)(result + 12) = *((_DWORD*)a2 + 3);
  v4 = a2[8];
  *(_BYTE*)(result + 18) = *((_BYTE*)a2 + 18);
  *(_WORD*)(result + 16) = v4;
  *(_BYTE*)(result + 19) = *((_BYTE*)a2 + 19);
  *(_DWORD*)(result + 20) = *((_DWORD*)a2 + 5);
  v5 = a2[12];
  *(_BYTE*)(result + 26) = *((_BYTE*)a2 + 26);
  *(_WORD*)(result + 24) = v5;
  *(_BYTE*)(result + 27) = *((_BYTE*)a2 + 27);
  *(_DWORD*)(result + 28) = *((_DWORD*)a2 + 7);
  v6 = a2[16];
  *(_BYTE*)(result + 34) = *((_BYTE*)a2 + 34);
  *(_WORD*)(result + 32) = v6;
  *(_BYTE*)(result + 35) = *((_BYTE*)a2 + 35);
  *(_DWORD*)(result + 36) = *((_DWORD*)a2 + 9);
  v7 = a2[20];
  *(_BYTE*)(result + 42) = *((_BYTE*)a2 + 42);
  *(_WORD*)(result + 40) = v7;
  *(_BYTE*)(result + 43) = *((_BYTE*)a2 + 43);
  *(_DWORD*)(result + 44) = *((_DWORD*)a2 + 11);
  v8 = a2[24];
  *(_BYTE*)(result + 50) = *((_BYTE*)a2 + 50);
  *(_WORD*)(result + 48) = v8;
  *(_BYTE*)(result + 51) = *((_BYTE*)a2 + 51);
  *(_DWORD*)(result + 52) = *((_DWORD*)a2 + 13);
  v9 = a2[28];
  *(_BYTE*)(result + 58) = *((_BYTE*)a2 + 58);
  *(_WORD*)(result + 56) = v9;
  *(_BYTE*)(result + 59) = *((_BYTE*)a2 + 59);
  *(_DWORD*)(result + 60) = *((_DWORD*)a2 + 15);
  v10 = a2[32];
  *(_BYTE*)(result + 66) = *((_BYTE*)a2 + 66);
  *(_WORD*)(result + 64) = v10;
  *(_BYTE*)(result + 67) = *((_BYTE*)a2 + 67);
  *(_DWORD*)(result + 68) = *((_DWORD*)a2 + 17);
  v11 = a2[36];
  *(_BYTE*)(result + 74) = *((_BYTE*)a2 + 74);
  *(_WORD*)(result + 72) = v11;
  *(_BYTE*)(result + 75) = *((_BYTE*)a2 + 75);
  *(_DWORD*)(result + 76) = *((_DWORD*)a2 + 19);
  v12 = a2[40];
  *(_BYTE*)(result + 82) = *((_BYTE*)a2 + 82);
  *(_WORD*)(result + 80) = v12;
  *(_BYTE*)(result + 83) = *((_BYTE*)a2 + 83);
  *(_DWORD*)(result + 84) = *((_DWORD*)a2 + 21);
  v13 = a2[44];
  *(_BYTE*)(result + 90) = *((_BYTE*)a2 + 90);
  *(_WORD*)(result + 88) = v13;
  *(_BYTE*)(result + 91) = *((_BYTE*)a2 + 91);
  *(_DWORD*)(result + 92) = *((_DWORD*)a2 + 23);
  v14 = a2[48];
  *(_BYTE*)(result + 98) = *((_BYTE*)a2 + 98);
  *(_WORD*)(result + 96) = v14;
  *(_BYTE*)(result + 99) = *((_BYTE*)a2 + 99);
  *(_DWORD*)(result + 100) = *((_DWORD*)a2 + 25);
  v15 = a2[52];
  *(_BYTE*)(result + 106) = *((_BYTE*)a2 + 106);
  *(_WORD*)(result + 104) = v15;
  *(_BYTE*)(result + 107) = *((_BYTE*)a2 + 107);
  *(_DWORD*)(result + 108) = *((_DWORD*)a2 + 27);
  v16 = a2[56];
  *(_BYTE*)(result + 114) = *((_BYTE*)a2 + 114);
  *(_WORD*)(result + 112) = v16;
  *(_BYTE*)(result + 115) = *((_BYTE*)a2 + 115);
  *(_DWORD*)(result + 116) = *((_DWORD*)a2 + 29);
  v17 = a2[60];
  *(_BYTE*)(result + 122) = *((_BYTE*)a2 + 122);
  *(_WORD*)(result + 120) = v17;
  *(_BYTE*)(result + 123) = *((_BYTE*)a2 + 123);
  *(_DWORD*)(result + 124) = *((_DWORD*)a2 + 31);
  v18 = a2[64];
  *(_BYTE*)(result + 130) = *((_BYTE*)a2 + 130);
  *(_WORD*)(result + 128) = v18;
  *(_BYTE*)(result + 131) = *((_BYTE*)a2 + 131);
  *(_DWORD*)(result + 132) = *((_DWORD*)a2 + 33);
  v19 = a2[68];
  *(_BYTE*)(result + 138) = *((_BYTE*)a2 + 138);
  *(_WORD*)(result + 136) = v19;
  *(_BYTE*)(result + 139) = *((_BYTE*)a2 + 139);
  *(_DWORD*)(result + 140) = *((_DWORD*)a2 + 35);
  v20 = a2[72];
  *(_BYTE*)(result + 146) = *((_BYTE*)a2 + 146);
  *(_WORD*)(result + 144) = v20;
  *(_BYTE*)(result + 147) = *((_BYTE*)a2 + 147);
  *(_DWORD*)(result + 148) = *((_DWORD*)a2 + 37);
  v21 = a2[76];
  *(_BYTE*)(result + 154) = *((_BYTE*)a2 + 154);
  *(_WORD*)(result + 152) = v21;
  *(_BYTE*)(result + 155) = *((_BYTE*)a2 + 155);
  *(_DWORD*)(result + 156) = *((_DWORD*)a2 + 39);
  v22 = a2[80];
  *(_BYTE*)(result + 162) = *((_BYTE*)a2 + 162);
  *(_WORD*)(result + 160) = v22;
  *(_BYTE*)(result + 163) = *((_BYTE*)a2 + 163);
  *(_DWORD*)(result + 164) = *((_DWORD*)a2 + 41);
  v23 = a2[84];
  *(_BYTE*)(result + 170) = *((_BYTE*)a2 + 170);
  *(_WORD*)(result + 168) = v23;
  *(_BYTE*)(result + 171) = *((_BYTE*)a2 + 171);
  *(_DWORD*)(result + 172) = *((_DWORD*)a2 + 43);
  v24 = a2[88];
  *(_BYTE*)(result + 178) = *((_BYTE*)a2 + 178);
  *(_WORD*)(result + 176) = v24;
  *(_BYTE*)(result + 179) = *((_BYTE*)a2 + 179);
  *(_DWORD*)(result + 180) = *((_DWORD*)a2 + 45);
  v25 = a2[92];
  *(_BYTE*)(result + 186) = *((_BYTE*)a2 + 186);
  *(_WORD*)(result + 184) = v25;
  *(_BYTE*)(result + 187) = *((_BYTE*)a2 + 187);
  *(_DWORD*)(result + 188) = *((_DWORD*)a2 + 47);
  v26 = a2[96];
  *(_BYTE*)(result + 194) = *((_BYTE*)a2 + 194);
  *(_WORD*)(result + 192) = v26;
  *(_BYTE*)(result + 195) = *((_BYTE*)a2 + 195);
  *(_DWORD*)(result + 196) = *((_DWORD*)a2 + 49);
  v27 = a2[100];
  *(_BYTE*)(result + 202) = *((_BYTE*)a2 + 202);
  *(_WORD*)(result + 200) = v27;
  *(_BYTE*)(result + 203) = *((_BYTE*)a2 + 203);
  *(_DWORD*)(result + 204) = *((_DWORD*)a2 + 51);
  v28 = a2[104];
  *(_BYTE*)(result + 210) = *((_BYTE*)a2 + 210);
  *(_WORD*)(result + 208) = v28;
  *(_BYTE*)(result + 211) = *((_BYTE*)a2 + 211);
  *(_DWORD*)(result + 212) = *((_DWORD*)a2 + 53);
  v29 = a2[108];
  *(_BYTE*)(result + 218) = *((_BYTE*)a2 + 218);
  *(_WORD*)(result + 216) = v29;
  *(_BYTE*)(result + 219) = *((_BYTE*)a2 + 219);
  *(_DWORD*)(result + 220) = *((_DWORD*)a2 + 55);
  v30 = a2[112];
  *(_BYTE*)(result + 226) = *((_BYTE*)a2 + 226);
  *(_WORD*)(result + 224) = v30;
  *(_BYTE*)(result + 227) = *((_BYTE*)a2 + 227);
  *(_DWORD*)(result + 228) = *((_DWORD*)a2 + 57);
  v31 = a2[116];
  *(_BYTE*)(result + 234) = *((_BYTE*)a2 + 234);
  *(_WORD*)(result + 232) = v31;
  *(_BYTE*)(result + 235) = *((_BYTE*)a2 + 235);
  *(_DWORD*)(result + 236) = *((_DWORD*)a2 + 59);
  return result;
}

unsigned __int64 GameConverge_8f04a0(unsigned __int64 result, _QWORD* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v4;
  float v5;
  unsigned __int64 v6;
  float v7;
  float v8;
  _BOOL8 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  int v39;
  _BOOL4 v40;
  _BOOL4 v41;
  int v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  int v47;
  _BOOL4 v48;
  _BOOL4 v49;
  char v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;

  v2 = a2[2];
  v4 = result;
  a2[1] = v2;
  v5 = *(float*)(result + 32);
  v6 = *(_QWORD*)(result + 8);
  v7 = (float)(unsigned __int64)(*(_QWORD*)(result + 24) + 1LL);
  if (v6 == 0 || (float)(v5 * (float)v6) < v7) {
    v8 = v7 / v5;
    v9 = true;
    if (v6 >= 3) {
      v9 = (v6 & (v6 - 1)) != 0;
    }
    v10 = v9 | (2 * v6);
    v11 = vcvtps_u64_f32(v8);
    if (v10 <= v11) {
      v12 = v11;
    }
    else {
      v12 = v10;
    }
    if (v12 == 1) {
      v12 = 2;
    }
    else if ((v12 & (v12 - 1)) != 0) {
      result = std___1___next_prime(v12);
      v6 = *(_QWORD*)(v4 + 8);
      v12 = result;
    }
    if (v12 > v6) {
      goto LABEL_13;
    }
    if (v12 >= v6) {
      goto LABEL_65;
    }
    result = vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 24) /
                            *(float*)(v4 + 32));
    if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
      result = std___1___next_prime(result);
    }
    else {
      v18 = 1LL << -(char)__clz(result - 1);
      if (result >= 2) {
        result = v18;
      }
    }
    if (v12 <= result) {
      v12 = result;
    }
    if (v12 >= v6) {
      goto LABEL_65;
    }
    if (v12 != 0) {
    LABEL_13:
      if (v12 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v13 = fw_memory_g_heap_manager_ptr;
      result = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      v14 = *(_QWORD*)v4;
      *(_QWORD*)v4 = result;
      if (v14 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v15 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v15, v14);
      }
      v16 = v12 & 7;
      *(_QWORD*)(v4 + 8) = v12;
      if (v12 >= 8) {
        v17 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v17) = 0;
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v17 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v17 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v17 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v17 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v17 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v17 + 48) = 0;
          v19 = *(_QWORD*)v4 + 8 * v17;
          v17 += 8;
          *(_QWORD*)(v19 + 56) = 0;
        } while ((v12 & 0x1FFFFFFFFFFFFFF8LL) != v17);
      }
      else {
        v17 = 0;
      }
      if ((v12 & 7) != 0) {
        v20 = 8 * v17;
        do {
          --v16;
          *(_QWORD*)(*(_QWORD*)v4 + v20) = 0;
          v20 += 8;
        } while (v16 != 0);
      }
      v22 = v4 + 16;
      v21 = *(_QWORD**)(v4 + 16);
      if (v21 != nullptr) {
        v23 = v21[1];
        v24 = v12 - 1;
        if ((v12 & (v12 - 1)) != 0) {
          if (v23 >= v12) {
            v23 %= v12;
          }
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v23) = v22;
          while (1) {
            v25 = (_QWORD*)*v21;
            if (*v21 == 0) {
              break;
            }
            v26 = v25[1];
            if (v26 >= v12) {
              v26 %= v12;
            }
            if (v26 == v23) {
              v21 = (_QWORD*)*v21;
            }
            else {
              v27 = (_QWORD*)*v21;
              if (*(_QWORD*)(*(_QWORD*)v4 + 8 * v26) != 0) {
                do {
                  v28 = v27;
                  v27 = (_QWORD*)*v27;
                } while (v27 != nullptr && v25[2] == v27[2]);
                *v21 = v27;
                *v28 = **(_QWORD**)(*(_QWORD*)v4 + 8 * v26);
                **(_QWORD**)(*(_QWORD*)v4 + 8 * v26) = v25;
              }
              else {
                *(_QWORD*)(*(_QWORD*)v4 + 8 * v26) = v21;
                v21 = v25;
                v23 = v26;
              }
            }
          }
        }
        else {
          v29 = v23 & v24;
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v29) = v22;
          while (1) {
            v30 = (_QWORD*)*v21;
            if (*v21 == 0) {
              break;
            }
            v31 = v30[1] & v24;
            if (v31 == v29) {
              v21 = (_QWORD*)*v21;
            }
            else {
              v32 = (_QWORD*)*v21;
              if (*(_QWORD*)(*(_QWORD*)v4 + 8 * v31) != 0) {
                do {
                  v33 = v32;
                  v32 = (_QWORD*)*v32;
                } while (v32 != nullptr && v30[2] == v32[2]);
                *v21 = v32;
                *v33 = **(_QWORD**)(*(_QWORD*)v4 + 8 * v31);
                **(_QWORD**)(*(_QWORD*)v4 + 8 * v31) = v30;
              }
              else {
                *(_QWORD*)(*(_QWORD*)v4 + 8 * v31) = v21;
                v21 = v30;
                v29 = v31;
              }
            }
          }
        }
      }
    }
    else {
      v34 = *(_QWORD*)v4;
      *(_QWORD*)v4 = 0;
      if (v34 != 0) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v35 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v34);
      }
      *(_QWORD*)(v4 + 8) = 0;
    }
  LABEL_65:
    v6 = *(_QWORD*)(v4 + 8);
  }
  v36 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v37 = v2;
    if (v2 >= v6) {
      v37 = v2 % v6;
    }
    v38 = *(_QWORD**)(*(_QWORD*)v4 + 8 * v37);
    if (v38 == nullptr) {
      v52 = a2[1];
      v43 = nullptr;
      if (v52 < v6) {
        goto LABEL_92;
      }
      goto LABEL_91;
    }
    v39 = 0;
    do {
      v43 = v38;
      v38 = (_QWORD*)*v38;
      if (v38 == nullptr) {
        break;
      }
      v44 = v38[1];
      v45 = v44;
      if (v44 >= v6) {
        v45 = v44 % v6;
      }
      if (v45 != v37) {
        break;
      }
      v40 = v44 == v2 && v38[2] == a2[2];
      v41 = v40 != (v39 & 1);
      v42 = v39 & v41;
      v39 |= v41;
    } while (v42 != 1);
  }
  else {
    v46 = *(_QWORD**)(*(_QWORD*)v4 + 8 * (v36 & v2));
    if (v46 == nullptr) {
      v52 = a2[1];
      v43 = nullptr;
      goto LABEL_102;
    }
    v47 = 0;
    do {
      v43 = v46;
      v46 = (_QWORD*)*v46;
      if (v46 == nullptr) {
        break;
      }
      v51 = v46[1];
      if ((v51 & v36) != (v36 & v2)) {
        break;
      }
      v48 = v51 == v2 && v46[2] == a2[2];
      v49 = v48 != (v47 & 1);
      v50 = v47 & v49;
      v47 |= v49;
    } while ((v50 & 1) == 0);
  }
  v52 = a2[1];
  if ((v6 & v36) != 0) {
    if (v52 < v6) {
    LABEL_92:
      if (v43 != nullptr) {
        goto LABEL_93;
      }
    LABEL_103:
      *a2 = *(_QWORD*)(v4 + 16);
      *(_QWORD*)(v4 + 16) = a2;
      *(_QWORD*)(*(_QWORD*)v4 + 8 * v52) = v4 + 16;
      if (*a2 == 0) {
        goto LABEL_109;
      }
      v53 = *(_QWORD*)(*a2 + 8LL);
      if ((v6 & v36) != 0) {
        if (v53 >= v6) {
          v53 %= v6;
        }
      }
      else {
        v53 &= v36;
      }
      goto LABEL_108;
    }
  LABEL_91:
    v52 %= v6;
    goto LABEL_92;
  }
LABEL_102:
  v52 &= v36;
  if (v43 == nullptr) {
    goto LABEL_103;
  }
LABEL_93:
  *a2 = *v43;
  *v43 = a2;
  if (*a2 != 0) {
    v53 = *(_QWORD*)(*a2 + 8LL);
    if ((v6 & v36) == 0) {
      v53 &= v36;
      if (v53 == v52) {
        goto LABEL_109;
      }
      goto LABEL_108;
    }
    if (v53 >= v6) {
      v53 %= v6;
    }
    if (v53 != v52) {
    LABEL_108:
      *(_QWORD*)(*(_QWORD*)v4 + 8 * v53) = a2;
    }
  }
LABEL_109:
  ++*(_QWORD*)(v4 + 24);
  return result;
}

__int64 GameConverge_8f0c60(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  __int64 result;
  __int64*** v9;
  __int64** v10;
  unsigned __int64 v11;
  __int64* v12;
  unsigned int v13;

  if (a2 == 0) {
    return 0;
  }
  v4 = game_HashString(*(_QWORD*)(a2 + 8));
  if (GameData_21d9f98 == 0 || GameData_21d9fa8 == 0) {
    goto LABEL_26;
  }
  v6 = GameData_21d9f98 - 1;
  if ((GameData_21d9f98 & (GameData_21d9f98 - 1)) != 0) {
    v7 = v4;
    if (v4 >= GameData_21d9f98) {
      v7 = v4 % GameData_21d9f98;
    }
  }
  else {
    v7 = v6 & v4;
  }
  v9 = *(__int64****)(GameData_21d9f90 + 8 * v7);
  if (v9 == nullptr || (v10 = *v9) == nullptr) {
  LABEL_26:
    v13 = 0;
    goto LABEL_27;
  }
  if ((GameData_21d9f98 & v6) == 0) {
    while (1) {
      v12 = v10[1];
      if (v12 == (__int64*)v4) {
        if (v10[2] == (__int64*)v4) {
          goto LABEL_37;
        }
      }
      else if (((unsigned __int64)v12 & v6) != v7) {
        goto LABEL_26;
      }
      v10 = (__int64**)*v10;
      if (v10 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  while (1) {
    v11 = (unsigned __int64)v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= GameData_21d9f98) {
      v11 %= (unsigned __int64)GameData_21d9f98;
    }
    if (v11 != v7) {
      goto LABEL_26;
    }
  LABEL_16:
    v10 = (__int64**)*v10;
    if (v10 == nullptr) {
      goto LABEL_26;
    }
  }
  if (v10[2] != (__int64*)v4) {
    goto LABEL_16;
  }
LABEL_37:
  v13 = *((unsigned __int8*)v10 + 24);
LABEL_27:
  result = GameRoutine_8f31e0(a1 + 216LL * v13 + 256, a2);
  if (result == 0) {
    result = GameRoutine_8f31e0(a1 + 472, a2);
    if (result == 0) {
      result = GameRoutine_8f31e0(a1 + 688, a2);
      if (result == 0) {
        result = GameRoutine_8f31e0(a1 + 904, a2);
        if (result == 0) {
          result = GameRoutine_8f31e0(a1 + 1120, a2);
          if (result == 0) {
            result = GameRoutine_8f31e0(a1 + 1336, a2);
            if (result == 0) {
              result = GameRoutine_8f31e0(a1 + 1552, a2);
              if (result == 0) {
                result = GameRoutine_8f31e0(a1 + 1768, a2);
                if (result == 0) {
                  result = GameRoutine_8f31e0(a1 + 1984, a2);
                  if (result == 0) {
                    return GameRoutine_8f31e0(a1 + 2200, a2);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

void game_GameConverge_Impl_RouteInfo_ResetReceived(__int64* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 i;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;
  struct {
    _QWORD v29[2];
    _QWORD* v30;
    char gap72_[8];
    _QWORD* v31;
  } v29_;

  v2 = a1[16];
  v29_.v29[0] = GameData_1fabba0;
  v29_.v29[1] = a1;
  v3 = v29_.v29;
  v29_.v31 = v29_.v29;
  v4 = *(unsigned int*)(v2 + 80);
  if ((int)v4 < 1) {
    goto LABEL_10;
  }
  v5 = 0;
  v6 = 12 * v4;
  do {
    if (*(_WORD*)(*(_QWORD*)(v2 + 8) + v5 + 2) != 0) {
      if (v29_.v31 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*))(*v29_.v31 + 48LL))(v29_.v31);
    }
    v5 += 12;
  } while (v6 != v5);
  v3 = v29_.v31;
  if (v29_.v31 == v29_.v29) {
  LABEL_10:
    v7 = 32;
  }
  else {
    if (v29_.v31 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v3 + v7))((__int64)v3);
LABEL_12:
  v8 = (_QWORD*)a1[18];
  v27_.v27[0] = GameData_1fabc20;
  v27_.v27[1] = a1;
  v27_.v28 = v27_.v27;
  v29_.v30 = v27_.v27;
  v29_.v31 = v29_.v29;
  v29_.v29[0] = GameData_212dda8 + 2;
  v29_.v29[1] = v8;
  RidePool_93cc20_alt1(v8, (__int64)v29_.v29);
  if (v29_.v31 == v29_.v29) {
    v9 = 32;
  }
  else {
    if (v29_.v31 == nullptr) {
      goto LABEL_17;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v29_.v31 + v9))((__int64)v29_.v31);
LABEL_17:
  if (v27_.v28 == v27_.v27) {
    v10 = 32;
  }
  else {
    if (v27_.v28 == nullptr) {
      goto LABEL_22;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v27_.v28 + v10))((__int64)v27_.v28);
LABEL_22:
  v11 = (_QWORD*)a1[20];
  v27_.v27[0] = GameData_1fabca0;
  v27_.v27[1] = a1;
  v27_.v28 = v27_.v27;
  v29_.v30 = v27_.v27;
  v29_.v31 = v29_.v29;
  v29_.v29[0] = GameData_212dd88[0] + 2;
  v29_.v29[1] = v11;
  LegionPool_9374e0_alt1(v11, (__int64)v29_.v29);
  if (v29_.v31 == v29_.v29) {
    v12 = 32;
  }
  else {
    if (v29_.v31 == nullptr) {
      goto LABEL_27;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v29_.v31 + v12))((__int64)v29_.v31);
LABEL_27:
  if (v27_.v28 == v27_.v27) {
    v13 = 32;
    goto LABEL_31;
  }
  if (v27_.v28 != nullptr) {
    v13 = 40;
  LABEL_31:
    (*(void (**)(__int64))(*v27_.v28 + v13))((__int64)v27_.v28);
  }
  GameRoutine_89b540(a1[16]);
  RidePool_93bb80_alt1(a1[18]);
  v14 = a1[20];
  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v14 + 48) + i + 2544) = 0;
    v16 = *(_QWORD*)(v14 + 48) + i;
    *(_QWORD*)(v16 + 2552) = 0;
  }
  if (*(_QWORD*)(v14 + 32) != 0) {
    v17 = *(_QWORD**)(v14 + 24);
    if (v17 != nullptr) {
      v18 = fw_memory_g_heap_manager_ptr;
      do {
        v19 = (_QWORD*)*v17;
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v20, (__int64)v17);
        v17 = v19;
      } while (v19 != nullptr);
    }
    v21 = *(_QWORD*)(v14 + 16);
    *(_QWORD*)(v14 + 24) = 0;
    if (v21 != 0) {
      v22 = v21 & 7;
      if (v21 >= 8) {
        v24 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v14 + 8) + 8 * v23) = 0;
          *(_QWORD*)(*(_QWORD*)(v14 + 8) + 8 * v23 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v14 + 8) + 8 * v23 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v14 + 8) + 8 * v23 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v14 + 8) + 8 * v23 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v14 + 8) + 8 * v23 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v14 + 8) + 8 * v23 + 48) = 0;
          v25 = *(_QWORD*)(v14 + 8) + 8 * v23;
          v23 += 8;
          *(_QWORD*)(v25 + 56) = 0;
        } while (v24 != v23);
      }
      else {
        v23 = 0;
      }
      if (v22 != 0) {
        v26 = 8 * v23;
        do {
          --v22;
          *(_QWORD*)(*(_QWORD*)(v14 + 8) + v26) = 0;
          v26 += 8;
        } while (v22 != 0);
      }
    }
    *(_QWORD*)(v14 + 32) = 0;
  }
  *(_DWORD*)(v14 + 72) = 0;
}

__int64

game_GameConverge_Impl_RouteInfo_ResetReceived_closure_Invoke(__int64 a1,
                                                              __int64 a2)
{
  _BYTE v3[8];

  return X8CALL_X0(
      __int64, game_UnitUtil_UniqueMap_Commit_89abc0(
                   (void*)((__int64)v3), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 80LL),
                   (unsigned __int16*)(a2 + 4), *(unsigned __int16*)(a2 + 2)));
}

_QWORD*

game_GameConverge_Impl_RouteInfo_ResetReceived_closure_Invoke_8f1450(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v3;

  return (*(struct PseudoSret*)(&v3) = GameRoutine_93c6a0(
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + 96LL), a2, 0, 1),
          (void*)(&v3));
}

_QWORD*

game_GameConverge_Impl_RouteInfo_ResetReceived_closure_Invoke_8f1580(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v3;

  return (*(struct PseudoSret*)(&v3) =
              GameRoutine_936f60(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 112LL), a2, 0),
          (void*)(&v3));
}

__int64 game_GameConverge_Impl_CommitStartBind_closure_Invoke_8f16a0(__int64 a1,
                                                                     _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  GameRoutine_6c3980(*a2, *(_QWORD*)(a1 + 8));
  return UnitHeroes_6daf00(v2);
}

unsigned __int64 game_GameConverge_Impl_CommitStartBind_closure_Invoke_8f17c0(
    __int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 v18;
  __int64 (***v19)();
  char v20[4];

  v2 = *a2;
  result = game_HashString(*(&game_g_hero_ids + v2));
  if (result == 0) {
    return result;
  }
  v4 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    return result;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = result;
    if (result >= v4) {
      v7 = result % v4;
    }
  }
  else {
    v7 = v6 & result;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v7);
  if (v8 == nullptr) {
    return result;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    return result;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == result) {
        if (v9[2] == result) {
          goto LABEL_26;
        }
      }
      else if ((v11 & v6) != v7) {
        return result;
      }
      v9 = (_QWORD*)*v9;
      if (v9 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == result) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      return result;
    }
  LABEL_15:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      return result;
    }
  }
  if (v9[2] != result) {
    goto LABEL_15;
  }
LABEL_26:
  v12 = v9[3];
  if (v12 == 0) {
    return result;
  }
  v17 = (__int64 (**)())v9[3];
  result = game_UnitPool_Find_6eac40(&v17);
  if (result != 0) {
    return result;
  }
  v18 = SideStoryFile_12ae4c0((unsigned int)v2);
  result = game_HashString(v18);
  v17 = (__int64 (**)())result;
  if (game_GameModeData_instance_ == 0) {
    return result;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &v17);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    return result;
  }
  v17 = GameData_1fabe10;
  v18 = v12;
  v19 = &v17;
  v14 = *(_QWORD*)(GameData_21ca310 + 56);
  v15 = *(_QWORD*)(v14 + 556216);
  if (v15 == 0) {
    v16 = 32;
    result = (unsigned __int64)&v17;
    return (*(__int64 (**)(unsigned __int64, __int64))(*(_QWORD*)result + v16))(
        result, v13);
  }
  GameRoutine_6d86a0(*(_QWORD*)(v14 + 556216), v12);
  v20[0] = 6;
  game_Unit_Unknown6c46e0(v15, v20);
  result = (unsigned __int64)v19;
  if (v19 == &v17) {
    v16 = 32;
    return (*(__int64 (**)(unsigned __int64, __int64))(*(_QWORD*)result + v16))(
        result, v13);
  }
  if (v19 != nullptr) {
    v16 = 40;
    return (*(__int64 (**)(unsigned __int64, __int64))(*(_QWORD*)result + v16))(
        result, v13);
  }
  return result;
}

__int64 game_GameConverge_Impl_CommitEndBind_closure_Invoke(__int64 result,
                                                            unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  char* v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64** v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64** v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64* v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  char* v57;
  char* v58;
  char v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  struct {
    __int64 v64;
    unsigned __int64 v65;
    __int64 v66;
    __int64* v67;
    __int64* v68;
    char* v69;
  } v64_;
  struct {
    __int64 v70;
    unsigned __int64 v71;
    __int64 v72;
    char* v73;
    char* v74;
    unsigned __int64 v75;
  } v70_;
  char v76[4];

  v2 = *a2;
  v3 = *(_QWORD*)(result + 8) + 216 * v2;
  if (*(_QWORD*)(v3 + 264) != *(_QWORD*)(v3 + 256)) {
    v4 = result;
    v70_.v71 = GameData_1f9cbe8[v2];
    v70_.v70 = game_HashString_alt2(v70_.v71);
    result = GameRoutine_717fc0_alt1((unsigned __int64*)&v70_.v70, 1);
    if ((result & 1) != 0 && *(_QWORD*)(v3 + 264) != *(_QWORD*)(v3 + 256)) {
      if (game_GameModeData_instance_ != 0) {
        v5 =
            *(_DWORD*)(game_GameModeData_instance_ + 72) + *(_DWORD*)(v3 + 320);
        v6 = v5 & ~(v5 >> 31);
        if (v6 >= 9999999) {
          v6 = 9999999;
        }
        *(_DWORD*)(game_GameModeData_instance_ + 72) = v6;
      }
      result =
          game_anonymous_DepositoryData_Commit_alt1(v76, (_QWORD*)(v3 + 328));
      if ((v76[0] & 1) == 0) {
        v70_.v74 = nullptr;
        v70_.v75 = 0;
        v70_.v72 = 0;
        v70_.v73 = nullptr;
        v70_.v70 = 0;
        v70_.v71 = 0;
        GameRoutine_60a020((__int64)&v70_.v70,
                           (__int64)"MID_Converge_Success_Message");
        v7 = UnitHeroes_6828a0(v2);
        v8 = strlen(v7);
        if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0();
        }
        v9 = v8;
        v10 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v8 >= 0x17) {
          if ((v8 | 7) == 0x17) {
            v12 = 26;
          }
          else {
            v12 = (v8 | 7) + 1;
          }
          v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0);
          v64_.v65 = v9;
          v64_.v66 = (__int64)v11;
          v64_.v64 = v12 | 1;
        }
        else {
          LOBYTE(v64_.v64) = 2 * v8;
          v11 = (char*)&v64_.v64 + 1;
          if (v8 == 0) {
          LABEL_18:
            v13 = v70_.v74;
            v14 = v70_.v75;
            v11[v9] = 0;
            if ((unsigned __int64)v13 >= v14) {
              v16 = v70_.v73;
              v17 = (char*)(v13 - v70_.v73);
              v18 = 1 - 0x5555555555555555LL * ((v13 - v70_.v73) >> 3);
              if (v18 > 0xAAAAAAAAAAAAAAALL) {
                goto LABEL_100;
              }
              v19 = 0xAAAAAAAAAAAAAAABLL *
                    ((__int64)(v14 - (_QWORD)v70_.v73) >> 3);
              if (2 * v19 > v18) {
                v18 = 2 * v19;
              }
              if (v19 >= 0x555555555555555LL) {
                v20 = 0xAAAAAAAAAAAAAAALL;
              }
              else {
                v20 = v18;
              }
              if (v20 != 0) {
                if (v20 > 0xAAAAAAAAAAAAAAALL) {
                  goto LABEL_102;
                }
                v21 =
                    fw_memory_HeapManager_Allocate_alt1(*v10, 24 * v20, 16, 0);
              }
              else {
                v21 = 0;
              }
              v22 = &v17[v21];
              v23 = v21 + 24 * v20;
              v24 = v64_.v65;
              v15 = (__int64)&v17[v21 + 24];
              *(_QWORD*)v22 = v64_.v64;
              *((_QWORD*)v22 + 1) = v24;
              *((_QWORD*)v22 + 2) = v64_.v66;
              memcpy(v21, v16, v17);
              v70_.v73 = (char*)v21;
              v70_.v74 = (char*)v15;
              v70_.v75 = v23;
              if (v16 != nullptr) {
                v25 = 128;
                if (*(_QWORD*)(*v10 + 200) == 0) {
                  v25 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v10 + v25, v16);
              }
            }
            else {
              v15 = (__int64)(v13 + 24);
              *(_QWORD*)v13 = v64_.v64;
              *((_QWORD*)v13 + 1) = v64_.v65;
              *((_QWORD*)v13 + 2) = v64_.v66;
            }
            v26 = *(_QWORD**)(v4 + 24);
            v70_.v74 = (char*)v15;
            if ((v70_.v70 & 1) != 0) {
              fw_text_String_CopyTerminated_alt1(&v64_.v64, v70_.v72, v70_.v71);
              v15 = (__int64)v70_.v74;
            }
            else {
              v64_.v64 = v70_.v70;
              v64_.v65 = v70_.v71;
              v64_.v66 = v70_.v72;
            }
            v27 = (__int64*)v70_.v73;
            v64_.v68 = nullptr;
            v64_.v69 = nullptr;
            v64_.v67 = nullptr;
            v28 = v15 - (_QWORD)v70_.v73;
            if ((char*)v15 == v70_.v73) {
            LABEL_45:
              v32 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v10, 48, 16,
                                                                  0);
              v33 = v32 + 6;
              result = (__int64)GameConverge_8f2280_alt1(v32, &v64_.v64);
              v35 = (__int64**)v26[1];
              v34 = v26[2];
              if ((unsigned __int64)v35 < v34) {
                *v35 = v32;
                v35[1] = v33;
                v36 = v35 + 3;
                v35[2] = v33;
              LABEL_61:
                v26[1] = v36;
                v48 = v64_.v67;
                if (v64_.v67 != nullptr) {
                  v49 = v64_.v68;
                  if (v64_.v67 == v64_.v68) {
                    goto LABEL_72;
                  }
                  v50 = v64_.v68;
                  do {
                    v51 = *((_BYTE*)v50 - 24);
                    v50 -= 3;
                    if ((v51 & 1) != 0) {
                      v52 = *(v49 - 1);
                      if (v52 != 0) {
                        if (*(_QWORD*)(*v10 + 200) != 0) {
                          v53 = 128;
                        }
                        else {
                          v53 = 56;
                        }
                        result =
                            nn_mem_StandardAllocator_Free_alt1(*v10 + v53, v52);
                      }
                    }
                    v49 = v50;
                  } while (v50 != v48);
                  v64_.v68 = v48;
                  v48 = v64_.v67;
                  if (v64_.v67 != nullptr) {
                  LABEL_72:
                    v54 = 128;
                    if (*(_QWORD*)(*v10 + 200) == 0) {
                      v54 = 56;
                    }
                    result =
                        nn_mem_StandardAllocator_Free_alt1(*v10 + v54, v48);
                  }
                }
                if ((v64_.v64 & 1) != 0 && v64_.v66 != 0) {
                  v55 = 128;
                  if (*(_QWORD*)(*v10 + 200) == 0) {
                    v55 = 56;
                  }
                  result =
                      nn_mem_StandardAllocator_Free_alt1(*v10 + v55, v64_.v66);
                }
                **(_BYTE**)(v4 + 16) |= v76[0];
                v56 = v70_.v73;
                if (v70_.v73 != nullptr) {
                  v57 = v70_.v74;
                  if (v70_.v73 == v70_.v74) {
                    goto LABEL_91;
                  }
                  v58 = v70_.v74;
                  do {
                    v59 = *(v58 - 24);
                    v58 -= 24;
                    if ((v59 & 1) != 0) {
                      v60 = *((_QWORD*)v57 - 1);
                      if (v60 != 0) {
                        if (*(_QWORD*)(*v10 + 200) != 0) {
                          v61 = 128;
                        }
                        else {
                          v61 = 56;
                        }
                        result =
                            nn_mem_StandardAllocator_Free_alt1(*v10 + v61, v60);
                      }
                    }
                    v57 = v58;
                  } while (v58 != v56);
                  v70_.v74 = v56;
                  v56 = v70_.v73;
                  if (v70_.v73 != nullptr) {
                  LABEL_91:
                    v62 = 128;
                    if (*(_QWORD*)(*v10 + 200) == 0) {
                      v62 = 56;
                    }
                    result =
                        nn_mem_StandardAllocator_Free_alt1(*v10 + v62, v56);
                  }
                }
                if ((v70_.v70 & 1) != 0 && v70_.v72 != 0) {
                  v63 = 128;
                  if (*(_QWORD*)(*v10 + 200) == 0) {
                    v63 = 56;
                  }
                  return nn_mem_StandardAllocator_Free_alt1(*v10 + v63,
                                                            v70_.v72);
                }
                return result;
              }
              v37 = (__int64)v35 - *v26;
              v38 = 1 - 0x5555555555555555LL * (v37 >> 3);
              if (v38 > 0xAAAAAAAAAAAAAAALL) {
                GameRoutine_8f2240();
              }
              v39 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v34 - *v26) >> 3);
              if (2 * v39 > v38) {
                v38 = 2 * v39;
              }
              if (v39 >= 0x555555555555555LL) {
                v40 = 0xAAAAAAAAAAAAAAALL;
              }
              else {
                v40 = v38;
              }
              if (v40 == 0) {
                v41 = 0;
              LABEL_57:
                v42 = (__int64**)(v41 + v37);
                *v42 = v32;
                v42[1] = v33;
                v42[2] = v33;
                v43 = v41 + 24 * v40;
                v36 = v42 + 3;
                v44 = *v26;
                v45 = v26[1] - *v26;
                v46 = (char*)v42 - v45;
                result = memcpy((char*)v42 - v45, *v26, v45);
                *v26 = v46;
                v26[1] = v36;
                v26[2] = v43;
                if (v44 != 0) {
                  v47 = 128;
                  if (*(_QWORD*)(*v10 + 200) == 0) {
                    v47 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free_alt1(*v10 + v47, v44);
                }
                goto LABEL_61;
              }
              if (v40 <= 0xAAAAAAAAAAAAAAALL) {
                v41 =
                    fw_memory_HeapManager_Allocate_alt1(*v10, 24 * v40, 16, 0);
                goto LABEL_57;
              }
            LABEL_102:
              GameRoutine_60a210_alt1();
            }
            if (0xAAAAAAAAAAAAAAABLL * (v28 >> 3) <= 0xAAAAAAAAAAAAAAALL) {
              v29 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                  *v10, v15 - (_QWORD)v70_.v73, 16, 0);
              v64_.v67 = v29;
              v64_.v68 = v29;
              v64_.v69 = (char*)v29 + v28;
              do {
                if ((*(_BYTE*)v27 & 1) != 0) {
                  fw_text_String_CopyTerminated_alt1(v29, v27[2], v27[1]);
                }
                else {
                  v30 = *v27;
                  v31 = v27[2];
                  v29[1] = v27[1];
                  v29[2] = v31;
                  *v29 = v30;
                }
                v27 += 3;
                v29 += 3;
              } while (v27 != (__int64*)v15);
              v64_.v68 = v29;
              goto LABEL_45;
            }
          LABEL_100:
            GameRoutine_64aa00_alt1();
          }
        }
        memmove(v11, v7, v9);
        goto LABEL_18;
      }
    }
  }
  return result;
}

_QWORD* GameConverge_8f2280(_QWORD* a1, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v3 = a1;
  if ((*(_BYTE*)a2 & 1) != 0) {
    a1 = (_QWORD*)fw_text_String_CopyTerminated(a1, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    a1[1] = a2[1];
    a1[2] = v5;
    *a1 = v4;
  }
  v3[4] = 0;
  v3[5] = 0;
  v3[3] = 0;
  v6 = (char*)a2[3];
  v7 = (char*)a2[4];
  v8 = v7 - v6;
  if (v7 != v6) {
    if (0xAAAAAAAAAAAAAAABLL * (v8 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(a1);
    }
    v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7 - v6, 16, 0);
    v3[3] = v9;
    v3[4] = v9;
    v3[5] = (char*)v9 + v8;
    do {
      if ((*v6 & 1) != 0) {
        fw_text_String_CopyTerminated(v9, *((_QWORD*)v6 + 2),
                                      *((_QWORD*)v6 + 1));
      }
      else {
        v10 = *(_QWORD*)v6;
        v11 = *((_QWORD*)v6 + 2);
        v9[1] = *((_QWORD*)v6 + 1);
        v9[2] = v11;
        *v9 = v10;
      }
      v6 += 24;
      v9 += 3;
    } while (v6 != v7);
    v3[4] = v9;
  }
  return v3;
}

_QWORD* GameConverge_8f23a0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = *result;
  v1 = result[1];
  v3 = result;
  if (*result != v1) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v5 = v1;
      v6 = *(_QWORD*)(v1 - 24);
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 - 16);
        if (v6 == v7) {
          goto LABEL_15;
        }
        v8 = *(_QWORD*)(v5 - 16);
        do {
          v9 = *(_BYTE*)(v8 - 24);
          v8 -= 24;
          if ((v9 & 1) != 0 && *(_QWORD*)(v7 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v10 = 128;
            }
            else {
              v10 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
          }
          v7 = v8;
        } while (v8 != v6);
        v11 = *(_QWORD*)(v5 - 24);
        *(_QWORD*)(v5 - 16) = v6;
        if (v11 != 0) {
        LABEL_15:
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12);
        }
      }
      v1 = v5 - 48;
      if ((*(_BYTE*)(v5 - 48) & 1) != 0 && *(_QWORD*)(v5 - 32) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v13);
      }
    } while (v2 != v1);
  }
  v3[1] = v2;
  return result;
}

_QWORD* GameConverge_8f24c0(_QWORD* a1, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v3 = a1;
  if ((*(_BYTE*)a2 & 1) != 0) {
    a1 = (_QWORD*)fw_text_String_CopyTerminated(a1, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    a1[1] = a2[1];
    a1[2] = v5;
    *a1 = v4;
  }
  v3[4] = 0;
  v3[5] = 0;
  v3[3] = 0;
  v6 = (char*)a2[3];
  v7 = (char*)a2[4];
  v8 = v7 - v6;
  if (v7 != v6) {
    if (0xAAAAAAAAAAAAAAABLL * (v8 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(a1);
    }
    v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7 - v6, 16, 0);
    v3[3] = v9;
    v3[4] = v9;
    v3[5] = (char*)v9 + v8;
    do {
      if ((*v6 & 1) != 0) {
        fw_text_String_CopyTerminated(v9, *((_QWORD*)v6 + 2),
                                      *((_QWORD*)v6 + 1));
      }
      else {
        v10 = *(_QWORD*)v6;
        v11 = *((_QWORD*)v6 + 2);
        v9[1] = *((_QWORD*)v6 + 1);
        v9[2] = v11;
        *v9 = v10;
      }
      v6 += 24;
      v9 += 3;
    } while (v6 != v7);
    v3[4] = v9;
  }
  return v3;
}

_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Destructor(_QWORD* a1)
{
  _QWORD* result;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  *a1 = GameData_1fabf20;
  v2 = a1[1];
  result = a1 + 1;
  if (v2 != 0) {
    v3 = result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
    }
  }
  return result;
}

__int64

game_GameConverge_Impl_CommitEndBind_closure_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = GameData_1fabf20;
  v1 = a1 + 1;
  v2 = fw_memory_g_heap_manager_ptr;
  if (a1[1] != 0) {
    GameConverge_8f23a0(a1 + 1);
    if (*v1 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v3);
    }
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
}

_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Clone(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v4 = *(__int64**)(a1 + 8);
  v5 = *(__int64**)(a1 + 16);
  v6 = v3;
  v3[2] = 0;
  v3[3] = 0;
  v7 = (char*)v5 - (char*)v4;
  *v3 = GameData_1fabf20;
  v3[1] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v7 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v8 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, (char*)v5 - (char*)v4, 16,
                                                 0);
    v6[1] = v8;
    v6[3] = (char*)v8 + v7;
    do {
      GameConverge_8f24c0(v8, v4);
      v4 += 6;
      v8 += 6;
    } while (v4 != v5);
    v6[2] = v8;
  }
  return v6;
}

_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Destroy(__int64 a1)
{
  _QWORD* result;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  result = (_QWORD*)(a1 + 8);
  if (v2 != 0) {
    v3 = result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
    }
  }
  return result;
}

__int64 game_GameConverge_Impl_TryJoin_closure_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  GameRoutine_6c3980(*a2, *(_QWORD*)(a1 + 8));
  return Unit_6db740(v2, *(unsigned __int8*)(a1 + 16), 0);
}

__int64 game_GameConverge_Impl_TryJoin_closure0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v6[2];

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 16) == 1) {
    v4 = GameRoutine_7152e0(a1);
    if ((_DWORD)v4 == 0) {
    LABEL_3:
      GameRoutine_7152e0(v4);
    }
  }
  else {
    v6[1] = &GameData_1aed5ad;
    v4 = game_HashString(&GameData_1aed5ad);
    v6[0] = v4;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_3;
    }
    v4 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v6);
    if (v4 == 0 || *(_DWORD*)(v4 + 32) == 0) {
      goto LABEL_3;
    }
  }
  return GameRoutine_6d86a0(v2, v3);
}

__int64 game_GameConverge_Impl_GetUnitList_closure_Invoke(__int64 result,
                                                          __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;

  v2 = *(_QWORD**)(result + 8);
  v3 = *a2;
  v4 = (_QWORD*)v2[303];
  v5 = v2[304];
  if ((unsigned __int64)v4 >= v5) {
    v7 = v2[302];
    v8 = (char*)v4 - v7;
    v9 = ((__int64)v4 - v7) >> 3;
    v10 = v9 + 1;
    if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
      GameRoutine_740050();
    }
    v11 = v5 - v7;
    v12 = fw_memory_g_heap_manager_ptr;
    if (v11 >> 2 > v10) {
      v10 = v11 >> 2;
    }
    if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
      v13 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
    }
    else {
      v14 = 0;
    }
    v15 = v14 + 8 * v13;
    v16 = (char*)v4 - v7;
    v17 = (__int64)&v8[v14 + -8 * v9];
    *(_QWORD*)&v8[v14] = v3;
    v6 = (__int64)&v8[v14 + 8];
    result = memcpy(v17, v7, v16);
    v2[302] = v17;
    v2[303] = v6;
    v2[304] = v15;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v18);
    }
  }
  else {
    *v4 = v3;
    v6 = (__int64)(v4 + 1);
  }
  v2[303] = v6;
  return result;
}

__int64 game_GameConverge_Impl_EachCompleted_closure_Invoke(__int64 result,
                                                            unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE v4[4];

  v2 = *(_QWORD*)(result + 16) + 216LL * *a2;
  if (*(_QWORD*)(v2 + 264) != *(_QWORD*)(v2 + 256)) {
    v3 = *(_QWORD*)(result + 64);
    v4[0] = *a2;
    if (v3 == 0) {
      GameRoutine_60a310(0, a2);
    }
    return (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v3 + 48LL))(v3, v4);
  }
  return result;
}

__int64

game_GameConverge_Impl_GetMaxMergeCount_closure_Invoke(__int64 result,
                                                       unsigned __int8* a2)
{
  int* v2;
  __int64 v3;
  int v4;

  v2 = *(int**)(result + 8);
  v3 = *(_QWORD*)(result + 16) + 216LL * *a2;
  v4 = *(_DWORD*)(v3 + 428) + *(_DWORD*)(v3 + 424);
  if (*v2 > v4) {
    v4 = *v2;
  }
  *v2 = v4;
  return result;
}

__int64

game_GameConverge_Impl_GetMaxClearDifficulty_closure_Invoke(__int64 result,
                                                            _BYTE* a2)
{
  _BYTE* v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;

  v2 = *(_BYTE**)(result + 8);
  v3 = (unsigned __int8)*v2;
  if (*a2 != 0) {
    v4 = *(_QWORD*)(result + 24) + 216LL * (unsigned __int8)*a2;
    if (*(_DWORD*)(result + 16) == 2) {
      v5 = *(unsigned __int8*)(v4 + 441);
    }
    else {
      v5 = *(unsigned __int8*)(v4 + 440);
    }
  }
  else {
    v5 = 3;
  }
  if (v5 >= v3 && v5 != 3 || v3 == 3) {
    LOBYTE(v3) = v5;
  }
  *v2 = v3;
  return result;
}

#pragma GCC visibility pop
