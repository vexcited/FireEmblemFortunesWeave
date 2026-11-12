#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6dacc0(_QWORD);
__int64 GameRoutine_6e5900(_QWORD, _QWORD);
__int64 GameRoutine_7172c0(void);
__int64 GameRoutine_7173a0(_QWORD);
__int64 GameRoutine_8af240(_QWORD, _QWORD);
__int64 ItemSeq_8af940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LegionPool_937de0(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* game_vstring_kEmpty_ptr[2];
__int64 game_UnitSupplyPart2_Setup_lambda0_Invoke(__int64 result,
                                                  unsigned __int16* a2);
__int64 game_UnitSupplyPart2_End_lambda0_Invoke();
__int64 game_UnitSupplyPart2_End_lambda1_Invoke(__int64 a1, __int64* a2);
__int64 game_UnitSupplyPart2_End_lambda2_Invoke();
_QWORD* GameRoutine_70f550(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8, __int64 result,
                                                  unsigned __int8*, __int64);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64, unsigned __int16*,
                                      __int64);
__int64 Unit_6d9000(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 nn_os_LockMutex(_QWORD);
__n128 GameRoutine_71fb20(__int64*);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1ad7be1;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_2025458[])();
extern __int64 (*GameData_20254e8[])();
extern __int64* GameData_212cd78[24];
extern __int64* GameData_212cd80[23];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_map_history_g_transporter_ptr[8];
extern __int64 GameData_212cf90[3];
extern __int64 GameData_2240f00;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern char GameData_1bc4110[2];
void GameRoutine_716e40();
void GameRoutine_89b540(__int64);
void GameRoutine_89b900(__int64);
void __attribute__((noreturn)) GameRoutine_1309e60();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
__n128 game_UnitSupplyPart2_Start();
__n128 game_UnitSupplyPart2_Setup();
__int64 game_UnitSupplyPart2_Start_lambda0_Invoke(__int64 a1, __int64* a2);
_QWORD* game_8af240(_QWORD* result, __int64**);
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 LegionPool_937de0_alt1(__int64, __int64) __asm__("LegionPool_937de0");
__int64 ProcList_9bd480(__int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
bool game_8ae640(__int64*, __int64, char);
extern _UNKNOWN GameData_1ada3d3;
extern _UNKNOWN GameData_21ed478;
extern __int64 (*GameData_2025568[])();
extern __int64 (*GameData_20255e8[])();
extern __int64 (*GameData_2025668[])();
extern __int64 GameData_21ed468;
extern __int64 GameData_21ed470;
int __cxa_guard_acquire(__int64);
void GameHr_7172c0();
void GameHr_7173a0();
void Unit_6dacc0(_WORD*);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_UnitSupplyPart2_End(__int64 a1, __int64 a2);

__n128 game_UnitSupplyPart2_Start()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned __int64 v4;
  char* v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  _QWORD* v12;
  char* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  _QWORD* v48;
  __int64 v49;
  char* v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  __n128 result;
  unsigned __int64 v55;
  bool v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int* v70;
  __int64 v71;
  __int64* v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  struct {
    int v78[8];
    int* v79;
  } v78_;
  __int64 v80;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v78_.v78[0] = 17;
  v0 = game_UnitPool_GetFirst_alt1(v78_.v78),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v0 != 0) {
    v1 = *(_QWORD*)(v0 + 432);
    v2 = v0;
    if (v1 == 0) {
      v1 = *(_QWORD*)(v0 + 440);
      if (v1 != 0) {
        v3 = *(unsigned __int8*)(v1 + 16);
        if (v3 <= 8) {
          v63 = v3 - 3;
          while (1) {
            if (v63 == 0) {
              v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v1 != 0) {
                break;
              }
            }
            if (++v63 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v1 = 0;
        }
      }
    }
    v4 = 0;
    v5 = nullptr;
    v6 = nullptr;
    while (1) {
    LABEL_8:
      v7 = v1;
      if ((unsigned __int64)v5 >= v4) {
        v8 = 0xEF7BDEF7BDEF7BDFLL * ((v5 - v6) >> 3) + 1;
        if (v8 > 0x108421084210842LL) {
          GameRoutine_1309e60(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if (0xDEF7BDEF7BDEF7BELL * ((__int64)(v4 - (_QWORD)v6) >> 3) > v8) {
          v8 = 0xDEF7BDEF7BDEF7BELL * ((__int64)(v4 - (_QWORD)v6) >> 3);
        }
        if (0xEF7BDEF7BDEF7BDFLL * ((__int64)(v4 - (_QWORD)v6) >> 3) >=
            0x84210842108421LL) {
          v8 = 0x108421084210842LL;
        }
        if (v8 > 0x108421084210842LL) {
          GameRoutine_60a210(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v9 = 31 * v8;
        v10 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 248 * v8, 16, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v11 = (__int64*)(v10 + v5 - v6);
        v12 = (_QWORD*)v10;
        v11[1] = 0;
        *v11 = v2;
        v11[2] = 0;
        v11[3] = 0;
        v11[4] = 0;
        v11[5] = 0;
        v11[6] = 0;
        v11[7] = 0;
        v11[8] = 0;
        v11[9] = 0;
        v11[10] = 0;
        v11[11] = 0;
        v11[12] = 0;
        v11[13] = 0;
        v11[14] = 0;
        v11[15] = 0;
        v11[16] = 0;
        v11[17] = 0;
        v11[18] = 0;
        v11[19] = 0;
        v11[20] = 0;
        v11[21] = 0;
        v11[22] = 0;
        v11[23] = 0;
        v11[24] = 0;
        v11[25] = 0;
        v11[26] = 0;
        v11[27] = 0;
        v11[28] = 0;
        v11[29] = 0;
        v11[30] = 0;
        GameRoutine_70f550(v11 + 1, (_QWORD*)(v2 + 828)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v6 != v5) {
          v13 = v6;
          v14 = v12;
          do {
            *v14 = *(_QWORD*)v13;
            v14[1] = 0;
            v14[1] = *((_QWORD*)v13 + 1);
            v14[2] = 0;
            v14[2] = *((_QWORD*)v13 + 2);
            v14[3] = 0;
            v14[3] = *((_QWORD*)v13 + 3);
            v14[4] = 0;
            v14[4] = *((_QWORD*)v13 + 4);
            v14[5] = 0;
            v14[5] = *((_QWORD*)v13 + 5);
            v14[6] = 0;
            v14[6] = *((_QWORD*)v13 + 6);
            v14[7] = 0;
            v14[7] = *((_QWORD*)v13 + 7);
            v14[8] = 0;
            v14[8] = *((_QWORD*)v13 + 8);
            v14[9] = 0;
            v14[9] = *((_QWORD*)v13 + 9);
            v14[10] = 0;
            v14[10] = *((_QWORD*)v13 + 10);
            v14[11] = 0;
            v14[11] = *((_QWORD*)v13 + 11);
            v14[12] = 0;
            v14[12] = *((_QWORD*)v13 + 12);
            v14[13] = 0;
            v14[13] = *((_QWORD*)v13 + 13);
            v14[14] = 0;
            v14[14] = *((_QWORD*)v13 + 14);
            v14[15] = 0;
            v14[15] = *((_QWORD*)v13 + 15);
            v14[16] = 0;
            v14[16] = *((_QWORD*)v13 + 16);
            v14[17] = 0;
            v14[17] = *((_QWORD*)v13 + 17);
            v14[18] = 0;
            v14[18] = *((_QWORD*)v13 + 18);
            v14[19] = 0;
            v14[19] = *((_QWORD*)v13 + 19);
            v14[20] = 0;
            v14[20] = *((_QWORD*)v13 + 20);
            v14[21] = 0;
            v14[21] = *((_QWORD*)v13 + 21);
            v14[22] = 0;
            v14[22] = *((_QWORD*)v13 + 22);
            v14[23] = 0;
            v14[23] = *((_QWORD*)v13 + 23);
            v14[24] = 0;
            v14[24] = *((_QWORD*)v13 + 24);
            v14[25] = 0;
            v14[25] = *((_QWORD*)v13 + 25);
            v14[26] = 0;
            v14[26] = *((_QWORD*)v13 + 26);
            v14[27] = 0;
            v14[27] = *((_QWORD*)v13 + 27);
            v14[28] = 0;
            v14[28] = *((_QWORD*)v13 + 28);
            v14[29] = 0;
            v14[29] = *((_QWORD*)v13 + 29);
            v14[30] = 0;
            v15 = *((_QWORD*)v13 + 30);
            v13 += 248;
            v14[30] = v15;
            v14 += 31;
          } while (v13 != v5);
        }
        v4 = (unsigned __int64)&v12[v9];
        v5 = (char*)(v11 + 31);
        if (v6 != nullptr) {
          v16 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v16),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v6 = (char*)v12;
        if (v7 == 0) {
          goto LABEL_34;
        }
      }
      else {
        *((_QWORD*)v5 + 1) = 0;
        *(_QWORD*)v5 = v2;
        *((_QWORD*)v5 + 2) = 0;
        *((_QWORD*)v5 + 3) = 0;
        *((_QWORD*)v5 + 4) = 0;
        *((_QWORD*)v5 + 5) = 0;
        *((_QWORD*)v5 + 6) = 0;
        *((_QWORD*)v5 + 7) = 0;
        *((_QWORD*)v5 + 8) = 0;
        *((_QWORD*)v5 + 9) = 0;
        *((_QWORD*)v5 + 10) = 0;
        *((_QWORD*)v5 + 11) = 0;
        *((_QWORD*)v5 + 12) = 0;
        *((_QWORD*)v5 + 13) = 0;
        *((_QWORD*)v5 + 14) = 0;
        *((_QWORD*)v5 + 15) = 0;
        *((_QWORD*)v5 + 16) = 0;
        *((_QWORD*)v5 + 17) = 0;
        *((_QWORD*)v5 + 18) = 0;
        *((_QWORD*)v5 + 19) = 0;
        *((_QWORD*)v5 + 20) = 0;
        *((_QWORD*)v5 + 21) = 0;
        *((_QWORD*)v5 + 22) = 0;
        *((_QWORD*)v5 + 23) = 0;
        *((_QWORD*)v5 + 24) = 0;
        *((_QWORD*)v5 + 25) = 0;
        *((_QWORD*)v5 + 26) = 0;
        *((_QWORD*)v5 + 27) = 0;
        *((_QWORD*)v5 + 28) = 0;
        *((_QWORD*)v5 + 29) = 0;
        *((_QWORD*)v5 + 30) = 0;
        GameRoutine_70f550((_QWORD*)v5 + 1, (_QWORD*)(v2 + 828)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v5 += 248;
        if (v7 == 0) {
          goto LABEL_34;
        }
      }
      v1 = *(_QWORD*)(v7 + 432);
      v2 = v7;
      if (v1 == 0) {
        v17 = *(_QWORD*)(v7 + 440);
        v2 = v7;
        if (v17 != 0) {
          v18 = *(unsigned __int8*)(v17 + 16);
          v1 = 0;
          v2 = v7;
          if (v18 <= 8) {
            v19 = v18 - 3;
            while (1) {
              if (v19 == 0) {
                v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v1 != 0) {
                  break;
                }
              }
              if (++v19 == 6) {
                v1 = 0;
                v2 = v7;
                goto LABEL_8;
              }
            }
            v2 = v7;
          }
        }
      }
    }
  }
  v5 = nullptr;
  v6 = nullptr;
LABEL_34:
  v20 = (_QWORD*)GameData_2240f00;
  v21 = game_TransporterConst_List_instance__ptr[0];
  if (GameData_2240f00 != 0) {
    v22 = GameData_212cf90[0];
    v23 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
    v24 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0]);
    v25 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0] + 8);
    v26 = ((v25 - v24) << 6) - 1;
    if (v25 == v24) {
      v26 = 0;
    }
    v27 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0] + 8) +
          *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0]);
    if (v26 == v27) {
      GameRoutine_71fb20((__int64*)GameData_212cf90[0]),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v24 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v22);
      v27 = *(_QWORD*)((char*)((char*)0x20LL) + v22 + 8) +
            *(_QWORD*)((char*)((char*)0x20LL) + v22);
    }
    *(_QWORD*)(*(_QWORD*)(v24 + 8 * (v27 >> 9)) + 8 * (v27 & 0x1FF)) = v23;
    *(_QWORD*)v21 = v20 + 4;
    ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v22);
    v28 = *(_QWORD*)(*game_map_history_g_transporter_ptr[0] + 16);
    GameRoutine_89b540(v28),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v29 = *(_QWORD*)(v28 + 8);
    if (*(_QWORD*)(v28 + 16) != v29) {
      v30 = 0;
      v31 = 0;
      do {
        v32 = v29 + v30;
        ++v31;
        v33 = *(_QWORD*)(v20[5] + 8LL) + v30;
        v30 += 12;
        *(_DWORD*)v32 = *(_DWORD*)v33;
        v34 = *(_WORD*)(v33 + 4);
        *(_BYTE*)(v32 + 6) = *(_BYTE*)(v33 + 6);
        *(_WORD*)(v32 + 4) = v34;
        *(_BYTE*)(v32 + 7) = *(_BYTE*)(v33 + 7);
        *(_DWORD*)(v32 + 8) = *(_DWORD*)(v33 + 8);
        v29 = *(_QWORD*)(v28 + 8);
      } while (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v28 + 16) - v29) >> 2) >
               v31);
    }
    GameRoutine_89b900(v28),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v36 = *(_QWORD*)((char*)((char*)0x20LL) + v22);
    v35 = *(_QWORD*)((char*)((char*)0x20LL) + v22 + 8);
    v38 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v22);
    v37 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v22 + 8);
    v56 = v37 == v38;
    v39 = v35 - 1 + v36;
    v40 = v39 >> 9;
    v41 = v39 & 0x1FF;
    v42 = ((v37 - v38) << 6) - 1;
    v43 = *(_QWORD*)(v38 + 8 * v40);
    if (v56) {
      v42 = 0;
    }
    v44 = *(_QWORD*)(v43 + 8 * v41);
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v22) = v35 - 1;
    *(_QWORD*)v21 = v44;
    if ((unsigned __int64)(v42 - (v35 + v36) + 1) >= 0x400) {
      if (*(_QWORD*)(v37 - 8) != 0) {
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v45),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v37 = *(_QWORD*)((char*)((__int128*)0x10LL) + v22);
      }
      *(_QWORD*)((char*)((__int128*)0x10LL) + v22) = v37 - 8;
    }
    v46 = (_QWORD*)v20[1];
    v47 = (_QWORD*)v20[2];
    if (v46 != v47) {
      v48 = (_QWORD*)v20[1];
      do {
        v49 = *v48;
        v48 += 31;
        GameRoutine_70f550((_QWORD*)(v49 + 828), v46 + 1),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v46 = v48;
      } while (v48 != v47);
    }
    (*(void (**)(__int64))(*(_QWORD*)GameData_2240f00 + 24LL))(
        GameData_2240f00),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (GameData_2240f00 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2240f00 + 8LL))(
          GameData_2240f00),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    GameData_2240f00 = 0;
  }
  GameRoutine_716e40(), result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_89b540(*(_QWORD*)(*(_QWORD*)v21 + 8LL)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v6 != v5) {
    v50 = v6;
    v51 = v6;
    do {
      v52 = *(_QWORD*)v51;
      v51 += 248;
      GameRoutine_70f550((_QWORD*)(v52 + 828), (_QWORD*)v50 + 1),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v50 = v51;
    } while (v51 != v5);
  }
  v53 = game_HashString((__int64)&GameData_1ad7be1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v53 != 0) {
    v55 = *(_QWORD*)(*GameData_212cd80[0] + 96);
    v56 = v55 == 0 || *(_QWORD*)(*GameData_212cd80[0] + 112) == 0;
    if (!v56) {
      v57 = v55 - 1;
      if ((v55 & (v55 - 1)) != 0) {
        v58 = v53;
        if (v53 >= v55) {
          v58 = v53 % v55;
        }
      }
      else {
        v58 = v57 & v53;
      }
      v59 = *(_QWORD**)(*(_QWORD*)(*GameData_212cd80[0] + 88) + 8 * v58);
      if (v59 != nullptr) {
        v60 = (_QWORD*)*v59;
        if (v60 != nullptr) {
          if ((v55 & v57) == 0) {
            while (1) {
              v62 = v60[1];
              if (v62 == v53) {
                if (v60[2] == v53) {
                  goto LABEL_89;
                }
              }
              else if ((v62 & v57) != v58) {
                goto LABEL_95;
              }
              v60 = (_QWORD*)*v60;
              if (v60 == nullptr) {
                goto LABEL_95;
              }
            }
          }
          do {
            v61 = v60[1];
            if (v61 == v53) {
              if (v60[2] == v53) {
              LABEL_89:
                v64 = v60[3];
                if (v64 != 0) {
                  v65 = *(unsigned __int16*)(v64 + 40);
                  if (*(_WORD*)(v64 + 40) != 0) {
                    v66 = 8;
                    v67 = GameData_212cf80[0];
                    do {
                      v68 = *(_QWORD*)(*(_QWORD*)(v64 + 48) + v66);
                      *(_QWORD*)v78_.v78 = 0x10000;
                      if (v68 != 0) {
                        LOBYTE(v78_.v78[0]) = *(_BYTE*)(v68 + 16);
                      }
                      LegionPool_936f60((void*)((__int64)&v80),
                                        *(_QWORD*)(*(_QWORD*)v67 + 8LL),
                                        (unsigned __int8*)v78_.v78, 0),
                          result =
                              COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
                      --v65;
                      v66 += 16;
                    } while (v65 != 0);
                  }
                }
                break;
              }
            }
            else {
              if (v61 >= v55) {
                v61 %= v55;
              }
              if (v61 != v58) {
                break;
              }
            }
            v60 = (_QWORD*)*v60;
          } while (v60 != nullptr);
        }
      }
    }
  }
LABEL_95:
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 15) == 3) {
    v69 = *(_DWORD*)(game_GameModeData_instance_ + 84);
    v70 = v78_.v78;
    *(_QWORD*)v78_.v78 = GameData_2025458;
    v78_.v79 = v78_.v78;
    v71 = *GameData_212cd80[0];
    if (*GameData_212cd80[0] != 0) {
      v72 = *(__int64**)(v71 + 264);
      v73 = *(__int64**)(v71 + 272);
      if (v72 == v73) {
        v70 = v78_.v78;
      }
      else {
        while (1) {
          v75 = *v72++;
          v74 = v75;
          v70 = v78_.v79;
          if (v69 < *(unsigned __int16*)(v75 + 32)) {
            break;
          }
          v80 = v74;
          if (v78_.v79 == nullptr) {
            GameRoutine_60a310(),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          (*(void (**)(int*))(*(_QWORD*)v78_.v79 + 48LL))(v78_.v79),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v72 == v73) {
            v70 = v78_.v79;
            break;
          }
        }
        if (v70 != v78_.v78) {
          if (v70 == nullptr) {
            goto LABEL_109;
          }
          v76 = 40;
          goto LABEL_108;
        }
      }
    }
    v76 = 32;
  LABEL_108:
    (*(void (**)(int*))(*(_QWORD*)v70 + v76))(v70),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_109:
  if (v6 != nullptr) {
    v77 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v77 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v77);
  }
  return result;
}

__n128 game_UnitSupplyPart2_Setup()
{
  int v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  int* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64* v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  unsigned __int8* v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  unsigned int v51;
  unsigned __int64 v52;
  __int64* v53;
  int v54;
  unsigned int v55;
  unsigned int v56;
  int v57;
  unsigned int v58;
  __int64 v59;
  __n128 result;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  unsigned int v65;
  __int64 v66;
  __int64 v67;
  unsigned int v68;
  unsigned int v69;
  char v70[8];
  struct {
    _QWORD v71[4];
    _QWORD* v72;
  } v71_;
  struct {
    int* v73;
    int* v74;
    __int64 v75;
  } v73_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_GameModeData_instance_ == 0) {
    return result;
  }
  v0 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  if (v0 == 0) {
    return result;
  }
  v1 = v71_.v71;
  v73_.v74 = nullptr;
  v73_.v75 = 0;
  v73_.v73 = nullptr;
  v71_.v71[0] = GameData_20254e8;
  v71_.v71[1] = &v73_.v73;
  v71_.v72 = v71_.v71;
  v2 = game_TransporterConst_List_instance__ptr[0];
  v3 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v4 = *(unsigned int*)(v3 + 80);
  if ((int)v4 < 1) {
    goto LABEL_13;
  }
  v5 = 0;
  v6 = 12 * v4;
  do {
    if (*(_WORD*)(*(_QWORD*)(v3 + 8) + v5 + 2) != 0) {
      if (v71_.v72 == nullptr) {
        GameRoutine_60a310(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      (*(void (**)(_QWORD*))(*v71_.v72 + 48LL))(v71_.v72),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v5 += 12;
  } while (v6 != v5);
  v1 = v71_.v72;
  if (v71_.v72 == v71_.v71) {
  LABEL_13:
    v7 = 32;
  }
  else {
    if (v71_.v72 == nullptr) {
      goto LABEL_15;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v1 + v7))((__int64)v1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_15:
  v8 = v73_.v73;
  v9 = v73_.v74;
  if (v73_.v73 != v73_.v74) {
    v10 = GameData_212c878[0];
    do {
      v11 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
      v12 = *(_QWORD*)(v11 + 8) + 12LL * *v8;
      v13 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                       8LL * *(unsigned __int16*)(v12 + 4));
      if ((((0x10000000000LL << *(_BYTE*)(v13 + 72)) |
            (1LL << *(_BYTE*)(v13 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        *(_QWORD*)(v12 + 4) = 0;
      }
      *(_WORD*)(v12 + 2) = 0;
      GameRoutine_89b900(v11),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      ++v8;
    } while (v8 != v9);
  }
  v14 = *GameData_212cd78[0];
  if (*GameData_212cd78[0] != 0) {
    v15 = *(__int64**)(v14 + 432);
    v16 = *(__int64**)(v14 + 440);
    if (v15 != v16) {
    LABEL_22:
      v17 = *v15;
      v18 = *(unsigned __int16*)(*v15 + 40);
      if (*(_WORD*)(*v15 + 40) != 0) {
        v19 = *(unsigned __int8**)(v17 + 48);
        while (1) {
          v20 = *v19++;
          if (v0 == v20) {
            break;
          }
          if (--v18 == 0) {
            if (++v15 != v16) {
              goto LABEL_22;
            }
            goto LABEL_38;
          }
        }
        if (v17 == 0) {
          goto LABEL_38;
        }
      }
      v21 = *(unsigned __int16*)(v17 + 56);
      if (*(_WORD*)(v17 + 56) != 0) {
        v22 = 8;
        v23 = 0;
        v24 = 0xFFBFFFFFFFA39FFFLL;
        do {
          v25 = *(_QWORD*)(*(_QWORD*)(v17 + 64) + v22);
          if ((((0x10000000000LL << *(_BYTE*)(v25 + 72)) |
                (1LL << *(_BYTE*)(v25 + 73))) &
               v24) == 0) {
            v26 = *(unsigned __int16*)(v25 + 16);
            v27 = *(unsigned __int16*)(v17 + 72) - 1;
            if ((int)v23 < v27) {
              v27 = v23;
            }
            v28 = *(unsigned __int8*)(*(_QWORD*)(v17 + 80) + v27);
            v71_.v71[0] = 0x100000000LL;
            LOWORD(v71_.v71[0]) = v26;
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8 * v26) +
                          73LL) == 17) {
              nn_os_LockMutex(&game_g_random_mutex),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              v29 = v2;
              v30 = v24;
              v31 = game_map_MapRandom_instance__ptr[0];
              v32 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((_UNKNOWN**)0x8LL));
              v33 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
              v34 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                    (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
              *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                  *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
              *((_DWORD*)v31 + 1) = v32;
              v35 = (v34 >> 8) ^ (v33 >> 19) ^ v34 ^ v33;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31) = v33;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v31 + 4) = v35;
              nn_os_UnlockMutex(&game_g_random_mutex),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              v36 = v35 - 1000 * ((v35 & 0x7FFFFFFFu) / 0x3E8);
              v24 = v30;
              v2 = v29;
              HIDWORD(v71_.v71[0]) = HIDWORD(v71_.v71[0]) & 0xFFFFC00F |
                                     (16 * (((16 * v36 + 16) >> 4) & 0x3FF));
            }
            game_UnitUtil_UniqueMap_Commit_89abc0(
                (void*)((__int64)v70), *(_QWORD*)(*(_QWORD*)v2 + 8LL),
                (unsigned __int16*)v71_.v71, v28),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          ++v23;
          v22 += 16;
        } while (v21 != v23);
      }
    }
  }
LABEL_38:
  if (game_GameModeData_instance_ != 0 &&
      (unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 15) - 1) <=
          7u &&
      ((0xBFu >> (*(_BYTE*)(game_GameModeData_instance_ + 15) - 1)) & 1) != 0 &&
      *GameData_212cd78[0] != 0) {
    v37 =
        *GameData_212cd78[0] +
        24LL *
            *(_QWORD*)&GameData_1bc4110
                [8 *
                 (unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 15) -
                                   1)];
    v38 = *(__int64**)(v37 + 264);
    v39 = *(__int64**)(v37 + 272);
    if (v38 != v39) {
    LABEL_43:
      v40 = *v38;
      v41 = *(unsigned __int16*)(*v38 + 40);
      if (*(_WORD*)(*v38 + 40) != 0) {
        v42 = *(unsigned __int8**)(v40 + 48);
        while (1) {
          v43 = *v42++;
          if (v0 == v43) {
            break;
          }
          if (--v41 == 0) {
            if (++v38 != v39) {
              goto LABEL_43;
            }
            goto LABEL_59;
          }
        }
        if (v40 == 0) {
          goto LABEL_59;
        }
      }
      v44 = *(unsigned __int16*)(v40 + 56);
      if (*(_WORD*)(v40 + 56) != 0) {
        v45 = 8;
        v46 = 0;
        v47 = 0xFFBFFFFFFFA39FFFLL;
        do {
          v48 = *(_QWORD*)(*(_QWORD*)(v40 + 64) + v45);
          if ((((0x10000000000LL << *(_BYTE*)(v48 + 72)) |
                (1LL << *(_BYTE*)(v48 + 73))) &
               v47) == 0) {
            v49 = *(unsigned __int16*)(v48 + 16);
            v50 = *(unsigned __int16*)(v40 + 72) - 1;
            if ((int)v46 < v50) {
              v50 = v46;
            }
            v51 = *(unsigned __int8*)(*(_QWORD*)(v40 + 80) + v50);
            v71_.v71[0] = 0x100000000LL;
            LOWORD(v71_.v71[0]) = v49;
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8 * v49) +
                          73LL) == 17) {
              nn_os_LockMutex(&game_g_random_mutex),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              v52 = v47;
              v53 = game_map_MapRandom_instance__ptr[0];
              v54 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((_UNKNOWN**)0x8LL));
              v55 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
              v56 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                    (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
              *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                  *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
              *((_DWORD*)v53 + 1) = v54;
              v57 = (v56 >> 8) ^ (v55 >> 19) ^ v56 ^ v55;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v53) = v55;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v53 + 4) = v57;
              nn_os_UnlockMutex(&game_g_random_mutex),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              v58 = v57 - 1000 * ((v57 & 0x7FFFFFFFu) / 0x3E8);
              v47 = v52;
              HIDWORD(v71_.v71[0]) = HIDWORD(v71_.v71[0]) & 0xFFFFC00F |
                                     (16 * (((16 * v58 + 16) >> 4) & 0x3FF));
            }
            game_UnitUtil_UniqueMap_Commit_89abc0(
                (void*)((__int64)v70), *(_QWORD*)(*(_QWORD*)v2 + 8LL),
                (unsigned __int16*)v71_.v71, v51),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          ++v46;
          v45 += 16;
        } while (v44 != v46);
      }
    }
  }
LABEL_59:
  LODWORD(v71_.v71[0]) = 17;
  v59 = game_UnitPool_GetFirst_alt1((int*)v71_.v71),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v59 == 0) {
    goto LABEL_71;
  }
  v61 = *(_QWORD*)(v59 + 432);
  if (v61 != 0) {
    goto LABEL_61;
  }
  v67 = *(_QWORD*)(v59 + 440);
  if (v67 != 0) {
    v68 = *(unsigned __int8*)(v67 + 16);
    if (v68 <= 8) {
      v69 = v68 - 3;
      while (1) {
        if (v69 == 0) {
          v61 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
          if (v61 != 0) {
            break;
          }
        }
        if (++v69 == 6) {
          goto LABEL_70;
        }
      }
      while (1) {
        do {
        LABEL_61:
          v62 = v61;
          Unit_6d9000(v59),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v61 = *(_QWORD*)(v62 + 432);
          v59 = v62;
        } while (v61 != 0);
        v63 = *(_QWORD*)(v62 + 440);
        if (v63 == 0) {
          break;
        }
        v64 = *(unsigned __int8*)(v63 + 16);
        if (v64 > 8) {
          break;
        }
        v65 = v64 - 3;
        while (1) {
          if (v65 == 0) {
            v61 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v61 != 0) {
              break;
            }
          }
          if (++v65 == 6) {
            goto LABEL_69;
          }
        }
        v59 = v62;
      }
    LABEL_69:
      v59 = v62;
    }
  }
LABEL_70:
  Unit_6d9000(v59), result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_71:
  if (v73_.v73 != nullptr) {
    v73_.v74 = v73_.v73;
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v66 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v66);
  }
  return result;
}

void game_UnitSupplyPart2_End(__int64 a1, __int64 a2)
{
  __int64** v3;
  __int64 v4;
  _BOOL4 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  int v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  struct {
    __int64 (**v31)();
    __int64 (**v32)();
    char gap16_[16];
    __int64* v33;
  } v31_;

  v3 = (__int64**)(*(_QWORD*)(a1 + 24) + 280LL);
  if (*(__int64**)(*(_QWORD*)(a1 + 24) + 288LL) == *v3) {
    v5 = false;
    if (a2 != 0) {
      goto LABEL_8;
    }
  LABEL_13:
    GameHr_7172c0();
    GameHr_7173a0();
    v10 = 0;
    v11 = (__int64*)GameData_212cf80[0];
    v12 = *(_QWORD*)GameData_212cf80[0];
    do {
      v13 = *(_QWORD*)(v12 + 8);
      v14 = *(_QWORD*)(v13 + 48) + 8 * v10;
      if (*(_BYTE*)v14 != 0 && (*(_BYTE*)(v14 + 2) & 1) != 0) {
        if (*(_BYTE*)(v14 + 1) != 0) {
          v15 = game_UnitPool_Get_alt1((_BYTE*)(v14 + 1));
        }
        else {
          v15 = nullptr;
        }
        LegionPool_937de0_alt1(v13, (__int64)v15);
        *(_QWORD*)v14 = 0;
        v16 = 300;
        v17 = 0;
        *(_DWORD*)(v13 + 72) = 0;
        v12 = *v11;
        v18 = (_BYTE*)(*(_QWORD*)(v13 + 48) + 56LL);
        do {
          if (*(v18 - 56) != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (*(v18 - 48) != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (*(v18 - 40) != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (*(v18 - 32) != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (*(v18 - 24) != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (*(v18 - 16) != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (*(v18 - 8) != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (*v18 != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (v18[8] != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (v18[16] != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (v18[24] != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (v18[32] != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (v18[40] != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (v18[48] != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          if (v18[56] != 0) {
            *(_DWORD*)(v13 + 72) = ++v17;
          }
          v16 -= 15;
          v18 += 120;
        } while (v16 != 0);
      }
      ++v10;
    } while (v10 != 300);
    if (v5) {
      game_8af240(&v31_.v31, v3);
      game_8ae640((__int64*)&v31_.v31, 0, 0);
      if (v31_.v31 != nullptr) {
        v31_.v32 = v31_.v31;
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v31_.v31);
      }
    }
    LODWORD(v31_.v31) = 17;
    v20 = game_UnitPool_GetFirst_alt1((int*)&v31_.v31);
    if (v20 != 0) {
      v21 = *(_QWORD*)(v20 + 432);
      if (v21 == 0) {
        v27 = *(_QWORD*)(v20 + 440);
        if (v27 == 0 ||
            (unsigned int)(v28 = *(unsigned __int8*)(v27 + 16)) > 8) {
        LABEL_68:
          Unit_6dacc0((_WORD*)v20);
          return;
        }
        v29 = v28 - 3;
        while (1) {
          if (v29 == 0) {
            v21 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v21 != 0) {
              break;
            }
          }
          if (++v29 == 6) {
            goto LABEL_68;
          }
        }
      }
      while (1) {
        do {
          v22 = v21;
          Unit_6dacc0((_WORD*)v20);
          v21 = *(_QWORD*)(v22 + 432);
          v20 = v22;
        } while (v21 != 0);
        v23 = *(_QWORD*)(v22 + 440);
        if (v23 == 0) {
          break;
        }
        v24 = *(unsigned __int8*)(v23 + 16);
        if (v24 > 8) {
          break;
        }
        v25 = v24 - 3;
        while (1) {
          if (v25 == 0) {
            v21 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v21 != 0) {
              break;
            }
          }
          if (++v25 == 6) {
            goto LABEL_67;
          }
        }
        v20 = v22;
      }
    LABEL_67:
      v20 = v22;
      goto LABEL_68;
    }
    return;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed478,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21ed478) != 0) {
    GameData_21ed470 = (__int64)&GameData_1ada3d3;
    GameData_21ed468 = game_HashString((__int64)&GameData_1ada3d3);
    __cxa_guard_release((__int64)&GameData_21ed478);
  }
  if (game_GameModeData_instance_ == 0 ||
      (v4 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_21ed468)) == 0) {
    v5 = true;
    if (a2 != 0) {
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  v5 = *(_DWORD*)(v4 + 32) == 0;
  if (a2 == 0) {
    goto LABEL_13;
  }
LABEL_8:
  v6 = ProcList_9bd480(a2);
  if (v6 == 0) {
    return;
  }
  v7 = v6;
  v31_.v31 = GameData_2025568;
  v31_.v33 = (__int64*)&v31_.v31;
  game_ProcList_Call_9bcfa0(v6, (__int64)&v31_.v31);
  if (v31_.v33 == (__int64*)&v31_.v31) {
    v8 = 32;
  }
  else {
    if (v31_.v33 == nullptr) {
      goto LABEL_71;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v31_.v33 + v8))((__int64)v31_.v33);
LABEL_71:
  if (v5) {
    v31_.v31 = GameData_20255e8;
    v31_.v32 = (__int64 (**)(void))v3;
    v31_.v33 = (__int64*)&v31_.v31;
    game_ProcList_Call_9bcfa0(v7, (__int64)&v31_.v31);
    if (v31_.v33 == (__int64*)&v31_.v31) {
      v26 = 32;
      goto LABEL_83;
    }
    if (v31_.v33 != nullptr) {
      v26 = 40;
    LABEL_83:
      (*(void (**)(__int64))(*v31_.v33 + v26))((__int64)v31_.v33);
    }
  }
  v31_.v31 = GameData_2025668;
  v31_.v33 = (__int64*)&v31_.v31;
  game_ProcList_Call_9bcfa0(v7, (__int64)&v31_.v31);
  if (v31_.v33 == (__int64*)&v31_.v31) {
    v30 = 32;
  }
  else {
    if (v31_.v33 == nullptr) {
      return;
    }
    v30 = 40;
  }
  (*(void (**)(__int64))(*v31_.v33 + v30))((__int64)v31_.v33);
}

__int64 game_UnitSupplyPart2_Start_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _BYTE v8[8];
  __int64 v9;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = *a2;
  v3 = *(unsigned __int16*)(*a2 + 40);
  if (*(_WORD*)(*a2 + 40) != 0) {
    v4 = 8;
    v5 = GameData_212cf80[0];
    do {
      v7 = *(_QWORD*)(*(_QWORD*)(v2 + 48) + v4);
      v9 = 0x10000;
      if (v7 != 0) {
        LOBYTE(v9) = *(_BYTE*)(v7 + 16);
      }
      result =
          X8CALL_X0(__int64, LegionPool_936f60((void*)((__int64)v8),
                                               *(_QWORD*)(*(_QWORD*)v5 + 8LL),
                                               (unsigned __int8*)&v9, 0));
      --v3;
      v4 += 16;
    } while (v3 != 0);
  }
  return result;
}

__int64 game_UnitSupplyPart2_Setup_lambda0_Invoke(__int64 result,
                                                  unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int* v5;
  int v6;
  int v7;
  int v8;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * a2[2]);
  if ((((0x10000000000LL << *(_BYTE*)(v2 + 72)) | (1LL << *(_BYTE*)(v2 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    if ((*((_BYTE*)a2 + 7) & 0x40) == 0) {
      return result;
    }
    v3 = *(_QWORD*)(result + 8);
    v4 = *a2;
    v5 = &v7;
    v7 = v4;
  }
  else {
    v6 = *a2;
    v3 = *(_QWORD*)(result + 8);
    v5 = &v8;
    v8 = v6;
  }
  return GameRoutine_6e5900(v3, v5);
}

__int64 game_UnitSupplyPart2_End_lambda0_Invoke()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _BYTE* v10;

  v0 = GameRoutine_7172c0();
  result = GameRoutine_7173a0(v0);
  v2 = 0;
  v3 = (__int64*)GameData_212cf80[0];
  v4 = *(_QWORD*)GameData_212cf80[0];
  do {
    v5 = *(_QWORD*)(v4 + 8);
    v6 = *(_QWORD*)(v5 + 48) + 8 * v2;
    if (*(_BYTE*)v6 != 0 && (*(_BYTE*)(v6 + 2) & 1) != 0) {
      if (*(_BYTE*)(v6 + 1) != 0) {
        v7 = game_UnitPool_Get(v6 + 1);
      }
      else {
        v7 = 0;
      }
      result = LegionPool_937de0(v5, v7);
      *(_QWORD*)v6 = 0;
      v8 = 300;
      v9 = 0;
      *(_DWORD*)(v5 + 72) = 0;
      v4 = *v3;
      v10 = (_BYTE*)(*(_QWORD*)(v5 + 48) + 56LL);
      do {
        if (*(v10 - 56) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 48) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 40) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 32) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 24) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 16) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*(v10 - 8) != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (*v10 != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[8] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[16] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[24] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[32] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[40] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[48] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        if (v10[56] != 0) {
          *(_DWORD*)(v5 + 72) = ++v9;
        }
        v8 -= 15;
        v10 += 120;
      } while (v8 != 0);
    }
    ++v2;
  } while (v2 != 300);
  return result;
}

__int64 game_UnitSupplyPart2_End_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[3];
  const char* v6;

  v2 = *a2;
  GameRoutine_8af240(v5, *(_QWORD*)(a1 + 8));
  v6 = "MID_Part2Clear_Reward_Message";
  result = ItemSeq_8af940(v2, v5, 0, &v6, game_vstring_kEmpty_ptr[0], 0);
  if (v5[0] != 0) {
    v5[1] = v5[0];
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return result;
}

__int64 game_UnitSupplyPart2_End_lambda2_Invoke()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  v9 = 17;
  result = game_UnitPool_GetFirst(&v9);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0) {
        return GameRoutine_6dacc0(result);
      }
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 > 8) {
        return GameRoutine_6dacc0(result);
      }
      v8 = v7 - 3;
      while (1) {
        if (v8 == 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
          if (v1 != 0) {
            break;
          }
        }
        if (++v8 == 6) {
          return GameRoutine_6dacc0(result);
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        GameRoutine_6dacc0(result);
        v1 = *(_QWORD*)(v2 + 432);
        result = v2;
      } while (v1 != 0);
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 == 0) {
        break;
      }
      v4 = *(unsigned __int8*)(v3 + 16);
      if (v4 > 8) {
        break;
      }
      v5 = v4 - 3;
      while (1) {
        if (v5 == 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
          if (v1 != 0) {
            break;
          }
        }
        if (++v5 == 6) {
          goto LABEL_11;
        }
      }
      result = v2;
    }
  LABEL_11:
    result = v2;
    return GameRoutine_6dacc0(result);
  }
  return result;
}

#pragma GCC visibility pop
