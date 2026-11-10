#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_65c660(_QWORD, _QWORD);
__int64 GameRoutine_8305a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_TransporterConst_List_Impl_EachData(_QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1ac849d;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1f93008[])();
extern __int64 (*GameData_2019548[])();
extern __int64 (*GameData_20195c8[])();
extern __int64 (*GameData_20198d8[])();
extern __int64 GameData_21c99b8;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 UnitUtil_1211e40(__int64 result);
__int64 UnitUtil_1212140(unsigned __int64 a1);
__int64 UnitUtil_12122d0(__int64* a1);
__int64 UnitUtil_12123e0(__int64* a1, __int64* a2);
__int64 UnitUtil_12124a0(unsigned __int64 a1);
__int64 UnitUtil_1212520(unsigned __int16* a1, __int64 a2);
__int64 UnitUtil_1212ac0(_QWORD* a1, _WORD* a2);
__int64 UnitUtil_1213180(__int64 result, __int64 a2);
__int64 game_UnitUtil_AutoEquipItem_lambda0_Invoke(__int64 result,
                                                   unsigned __int16* a2);
bool game_UnitUtil_SortSortieOrder_lambda0_Invoke(__int64 a1, __int64 a2,
                                                  __int64 a3);
__int64 game_UnitUtil_TryEscapeCorps_lambda0_Invoke(__int64 result, __int64 a2);
__int64 game_UnitUtil_TryEscapeCorps_lambda1_Invoke(__int64 result, __int64 a2);
__int64 game_UnitUtil_GetStockCount_lambda0_Invoke(__int64 result, __int64 a2,
                                                   _DWORD* a3);
__int64 game_UnitUtil_GetDeliverCount_lambda0_Invoke(__int64 result,
                                                     __int64 a2);
__int64 game_UnitUtil_GetDeliverCount_lambda1_Invoke(__int64 result, _WORD* a2);
bool game_UnitUtil_UniqueMap_Commit_lambda0_Invoke_1216430(
    __int64 a1, unsigned __int16* a2);
__int64 game_UnitUtil_UniqueMap_Commit_lambda0_Invoke_1216570(__int64 result,
                                                              __int64 a2);
__int64 game_UnitUtil_UniqueMap_Commit_lambda1_Invoke(__int64 result,
                                                      unsigned __int16* a2);
__int64 game_UnitUtil_EachFlagUnit_lambda0_Invoke(__int64 result, __int64* a2);
_QWORD* GameRoutine_89b900(_QWORD* result);
_WORD*
game_UnitItemList_EachItem_alt1(_WORD* result,
                                __int64) __asm__("game_UnitItemList_EachItem");
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_89aac0(_QWORD*, _QWORD*);
__int64 GameSituation_906910(__int64, __int64*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_1373e60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_UnitUtil_UniqueMap_Commit_1212e40(_QWORD*, __int64*, __int64);
__int64 game_gmap_TroopMgr_CountPlayerTroop_134e7b0(__int64);
__int64 game_telop_TelopRelianceLvUp_CreateBind(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ade186;
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*GameData_2019858[])();
extern __int64 (*GameData_2019958[])();
extern __int64 (*GameData_20199d8[])();
extern __int64 (*GameData_2019a58[])();
extern __int64 (*GameData_2019c58[])();
extern __int64 GameData_21c96e8;
extern __int64 GameData_21ca3f8;
extern __int64 GameData_21ca400;
extern __int64 GameData_21ca410;
extern __int64 GameData_21ee210;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_212d818[9];
extern char* GameData_212d830[6];
extern char GameData_1b5724e;
extern char GameData_1b5724f;
extern int GameData_21ee228;
unsigned int* TroopMgr_1346380();
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_89d1c0();
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8 x8_, __int64 result,
                                      unsigned __int16* a2, __int64 a3);
unsigned int* game_UnitUtil_GetSpotAsPlayerCorps(unsigned int* result,
                                                 __int64 a2, __int64 a3);
__int64 UnitUtil_1211f60(__int64 result, __int64 a2, __int64 a3, int a4);
__int64 UnitUtil_1212be0(__int64 a1, __int64 a2, __int64 a3);
unsigned __int64* game_UnitUtil_EachFlagUnit(unsigned __int64* result,
                                             __int64 a2);
__attribute__((swiftcall)) void

game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8 x8_, __int64 result,
                                      unsigned __int16* a2, __int64 a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int16* v4;
  __int64* v5;
  __int64 v6;
  char v7;
  __int64 v9;
  char* v10;
  char v11;
  __int64 v12;
  int v13;
  __int64 v14;
  _DWORD* v15;
  unsigned __int16 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  char* v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  unsigned __int16* v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  unsigned __int16* v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  _QWORD* v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int16 v73;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int16 v80;
  unsigned __int16* v81;
  int v83;
  struct {
    _QWORD v84[2];
    _QWORD* v85;
    __int64 v86;
    int v87;
  } v84_;
  struct {
    __int64 v88[4];
    __int64* v89;
  } v88_;

  if (*a2 != 0) {
    v4 = a2;
    if ((*((_BYTE*)a2 + 3) & 0x10) == 0) {
      v5 = GameData_212c878[0];
      v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
      v7 = *(_BYTE*)(v6 + 72);
      if ((*(_WORD*)(v6 + 336) & 0x304) == 0 && ((1LL << v7) & 0xE01F) != 0) {
        v12 = result;
        if ((((0x10000000000LL << v7) | (1LL << *(_BYTE*)(v6 + 73))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          v13 = a3 & ((int)a3 >> 31);
          while (1) {
            if ((int)a3 < 1) {
              goto LABEL_21;
            }
            v14 = *(unsigned int*)(v12 + 72);
            if ((int)v14 < 1) {
              break;
            }
            v9 = 0;
            v15 = (_DWORD*)(*(_QWORD*)(v12 + 8) + 8LL);
            while (*((_WORD*)v15 - 2) != 0) {
              ++v9;
              v15 += 3;
              if (v14 == v9) {
                goto LABEL_20;
              }
            }
            v16 = *v4;
            v17 = a3;
            *((_BYTE*)v15 - 2) = *((_BYTE*)v4 + 2);
            *((_WORD*)v15 - 2) = v16;
            LOBYTE(v16) = *((_BYTE*)v4 + 3);
            *((_BYTE*)v15 - 1) = v16;
            v18 = *((_DWORD*)v4 + 1);
            *((_BYTE*)v15 - 1) = v16 & 0xF8;
            *((_WORD*)v15 - 3) = 1;
            *v15 = v18;
            result = (__int64)GameRoutine_89b900((_QWORD*)v12);
            a3 = (unsigned int)(v17 - 1);
            v5 = GameData_212c878[0];
            if (v17 == 1) {
              goto LABEL_132;
            }
          }
        LABEL_20:
          v13 = a3;
        LABEL_21:
          v81 = v4;
          while (1) {
            if (v13 < 1) {
            LABEL_120:
              LODWORD(v9) = -1;
              v10 = GameData_212d830[0];
              goto LABEL_9;
            }
            v19 = *v4;
            v84_.v85 = nullptr;
            v84_.v86 = 0;
            v84_.v84[0] = 0;
            v84_.v84[1] = 0;
            v83 = v13;
            v84_.v87 = 1065353216;
            if (v19 != 0) {
              v20 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * v19);
              v21 = (*((_DWORD*)v4 + 1) & 0xF) * *(unsigned __int8*)(v20 + 87);
              v22 =
                  v21 != 0
                      ? (((1000 *
                           ((v21 - *((unsigned __int8*)v4 + 2)) &
                            ~((int)(v21 - *((unsigned __int8*)v4 + 2)) >> 31)) /
                           v21) &
                          0x3FF)
                         << 16) |
                            0x4000000
                      : 132644864LL;
              v23 =
                  v22 & 0xFFFFBFFFFFFFFFFFLL |
                  ((unsigned __int64)*(unsigned __int8*)(v20 + 84) << 36) |
                  ((unsigned __int64)((*(_DWORD*)(v20 + 336) & 2) != 0) << 46) |
                  ((unsigned __int64)(*(_DWORD*)(v20 + 336) & 1) << 47) | v19;
            }
            else {
              v23 = -1;
            }
            if (*(int*)(v12 + 72) < 1) {
              break;
            }
            v24 = 0;
            v25 = nullptr;
            v26 = nullptr;
            v27 = 0;
            v28 = 0;
            do {
              v29 = *(_QWORD*)(v12 + 8) + v24;
              if (*(_WORD*)(v29 + 4) != 0 &&
                  (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v5 + 64) +
                                        8LL * *(unsigned __int16*)(v29 + 4)) +
                             336LL) &
                   3) == 0) {
                if ((unsigned __int64)v26 < v27) {
                  *(_QWORD*)v26 = v29;
                  v26 += 8;
                }
                else {
                  v30 = (char*)(v26 - v25);
                  v31 = (v26 - v25) >> 3;
                  v32 = v31 + 1;
                  if ((unsigned __int64)(v31 + 1) >> 61 != 0) {
                  LABEL_133:
                    GameRoutine_89d1c0();
                  }
                  if ((__int64)(v27 - (_QWORD)v25) >> 2 > v32) {
                    v32 = (__int64)(v27 - (_QWORD)v25) >> 2;
                  }
                  if (v27 - (unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v33 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v33 = v32;
                  }
                  if (v33 != 0) {
                    if (v33 >> 61 != 0) {
                    LABEL_134:
                      GameRoutine_60a210();
                    }
                    v34 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v33, 16, 0);
                  }
                  else {
                    v34 = 0;
                  }
                  v27 = v34 + 8 * v33;
                  v35 = (char*)(v26 - v25);
                  v36 = (__int64)&v30[v34 + -8 * v31];
                  *(_QWORD*)&v30[v34] = v29;
                  v26 = &v30[v34 + 8];
                  result = memcpy(v36, v25, v35);
                  if (v25 != nullptr) {
                    v37 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v37 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v25);
                  }
                  v25 = (char*)v36;
                  v5 = GameData_212c878[0];
                }
              }
              ++v28;
              v24 += 12;
            } while (v28 < *(int*)(v12 + 72));
            if (v25 == v26) {
              goto LABEL_64;
            }
            v38 = *v5;
            LODWORD(v9) = -1;
            v39 = v23;
            v40 = v25;
            do {
              v41 = *(unsigned __int16**)v40;
              v42 = *(unsigned __int16*)(*(_QWORD*)v40 + 4LL);
              if (*(_WORD*)(*(_QWORD*)v40 + 4LL) == 0 ||
                  ((v43 = *(_QWORD*)(*(_QWORD*)(v38 + 64) + 8 * v42),
                    (v44 = (*((_DWORD*)v41 + 2) & 0xF) *
                           *(unsigned __int8*)(v43 + 87)) == 0)
                       ? (v45 = 65536000)
                       : (v45 =
                              ((1000 *
                                ((v44 - *((unsigned __int8*)v41 + 6)) &
                                 ~((int)(v44 - *((unsigned __int8*)v41 + 6)) >>
                                   31)) /
                                v44) &
                               0x3FF)
                              << 16),
                   v42 |=
                   v45 & 0xFFFFBFF003FFFFFFLL |
                   ((unsigned __int64)(v41[1] & 0x3FF) << 26) |
                   ((unsigned __int64)*(unsigned __int8*)(v43 + 84) << 36) |
                   ((unsigned __int64)((*(_DWORD*)(v43 + 336) & 2) != 0)
                    << 46) |
                   ((unsigned __int64)(*(_DWORD*)(v43 + 336) & 1) << 47),
                   v42 <= v39)) {
                LODWORD(v9) = *v41;
                v39 = v42;
              }
              v40 += 8;
            } while (v40 != v26);
            if ((_DWORD)v9 == -1) {
              goto LABEL_64;
            }
          LABEL_102:
            v65 = v84_.v85;
            v66 = fw_memory_g_heap_manager_ptr;
            if (v84_.v85 != nullptr) {
              do {
                v67 = (_QWORD*)*v65;
                if (*(_QWORD*)(*(_QWORD*)v66 + 200LL) != 0) {
                  v68 = 128;
                }
                else {
                  v68 = 56;
                }
                result =
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v66 + v68, v65);
                v65 = v67;
              } while (v67 != nullptr);
            }
            v69 = v84_.v84[0];
            v84_.v84[0] = 0;
            if (v69 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v66 + 200LL) != 0) {
                v70 = 128;
              }
              else {
                v70 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v66 + v70, v69);
            }
            if (v25 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)v66 + 200LL) != 0) {
                v71 = 128;
              }
              else {
                v71 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v66 + v71, v25);
            }
            if ((_DWORD)v9 == -1) {
              goto LABEL_120;
            }
            v4 = v81;
            v72 = *(_QWORD*)(v12 + 8) + 12LL * (int)v9;
            v73 = *v81;
            *(_BYTE*)(v72 + 6) = *((_BYTE*)v81 + 2);
            *(_WORD*)(v72 + 4) = v73;
            LOBYTE(v73) = *((_BYTE*)v81 + 3);
            *(_BYTE*)(v72 + 7) = v73;
            v74 = *((_DWORD*)v81 + 1);
            *(_BYTE*)(v72 + 7) = v73 & 0xF8;
            *(_WORD*)(v72 + 2) = 1;
            *(_DWORD*)(v72 + 8) = v74;
            result = (__int64)GameRoutine_89b900((_QWORD*)v12);
            v13 = v83 - 1;
            v5 = GameData_212c878[0];
            if (v83 == 1) {
              v10 = &GameData_1b5724f;
              goto LABEL_9;
            }
          }
          v25 = nullptr;
          v27 = 0;
        LABEL_64:
          v88_.v88[0] = (__int64)GameData_2019a58;
          v88_.v89 = v88_.v88;
          game_UnitUtil_UniqueMap_Commit_1212e40(v84_.v84, v88_.v88, a3);
          result = (__int64)v88_.v89;
          if (v88_.v89 == v88_.v88) {
            v46 = 32;
          }
          else {
            if (v88_.v89 == nullptr) {
              goto LABEL_69;
            }
            v46 = 40;
          }
          result =
              (*(__int64 (**)(__int64))(*v88_.v89 + v46))((__int64)v88_.v89);
        LABEL_69:
          if (*(int*)(v12 + 72) < 1) {
            LODWORD(v9) = -1;
          }
          else {
            v47 = 0;
            v48 = 0;
            v49 = v25;
            do {
              v50 = *(_QWORD*)(v12 + 8) + v47;
              result = UnitUtil_1212ac0(v84_.v84, (_WORD*)(v50 + 4));
              if ((int)result >= 2) {
                if ((unsigned __int64)v49 < v27) {
                  *(_QWORD*)v49 = v50;
                  v49 += 8;
                }
                else {
                  v51 = (char*)(v49 - v25);
                  v52 = (v49 - v25) >> 3;
                  v53 = v52 + 1;
                  if ((unsigned __int64)(v52 + 1) >> 61 != 0) {
                    goto LABEL_133;
                  }
                  if ((__int64)(v27 - (_QWORD)v25) >> 2 > v53) {
                    v53 = (__int64)(v27 - (_QWORD)v25) >> 2;
                  }
                  if (v27 - (unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v54 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v54 = v53;
                  }
                  if (v54 != 0) {
                    if (v54 >> 61 != 0) {
                      goto LABEL_134;
                    }
                    v55 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v54, 16, 0);
                  }
                  else {
                    v55 = 0;
                  }
                  v27 = v55 + 8 * v54;
                  v56 = (char*)(v49 - v25);
                  v57 = (__int64)&v51[v55 + -8 * v52];
                  *(_QWORD*)&v51[v55] = v50;
                  v49 = &v51[v55 + 8];
                  result = memcpy(v57, v25, v56);
                  if (v25 != nullptr) {
                    v58 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v58 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v25);
                  }
                  v25 = (char*)v57;
                }
              }
              ++v48;
              v47 += 12;
            } while (v48 < *(int*)(v12 + 72));
            if (v25 == v49) {
              LODWORD(v9) = -1;
            }
            else {
              LODWORD(v9) = -1;
              v59 = v25;
              do {
                v60 = *(unsigned __int16**)v59;
                v61 = *(unsigned __int16*)(*(_QWORD*)v59 + 4LL);
                if (*(_WORD*)(*(_QWORD*)v59 + 4LL) == 0 ||
                    ((v62 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8 * v61),
                      (v63 = (*((_DWORD*)v60 + 2) & 0xF) *
                             *(unsigned __int8*)(v62 + 87)) == 0)
                         ? (v64 = 65536000)
                         : (v64 = ((1000 *
                                    ((v63 - *((unsigned __int8*)v60 + 6)) &
                                     ~((int)(v63 -
                                             *((unsigned __int8*)v60 + 6)) >>
                                       31)) /
                                    v63) &
                                   0x3FF)
                                  << 16),
                     v61 |=
                     v64 & 0xFFFFBFF003FFFFFFLL |
                     ((unsigned __int64)(v60[1] & 0x3FF) << 26) |
                     ((unsigned __int64)*(unsigned __int8*)(v62 + 84) << 36) |
                     ((unsigned __int64)((*(_DWORD*)(v62 + 336) & 2) != 0)
                      << 46) |
                     ((unsigned __int64)(*(_DWORD*)(v62 + 336) & 1) << 47),
                     v61 <= v23)) {
                  v23 = v61;
                  LODWORD(v9) = *v60;
                }
                v59 += 8;
              } while (v59 != v49);
            }
          }
          goto LABEL_102;
        }
        v75 = a3;
        result = GameRoutine_89aac0((_QWORD*)result, a2);
        if ((result & 0x80000000) == 0) {
          LODWORD(v9) = result;
          v76 = *(_QWORD*)(v12 + 8) + 12LL * (unsigned int)result;
          v77 = *(unsigned __int16*)(v76 + 4);
          if (*(_WORD*)(v76 + 4) != 0) {
            v78 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v77);
            if ((((0x10000000000LL << *(_BYTE*)(v78 + 72)) |
                  (1LL << *(_BYTE*)(v78 + 73))) &
                 0xFFBFFFFFFFA39FFFLL) != 0) {
              LODWORD(v77) = 1;
            }
            else {
              LODWORD(v77) = 999;
            }
          }
          v79 = v75 + *(unsigned __int16*)(v76 + 2);
          if ((int)v77 >= v79) {
            LOWORD(v77) = v75 + *(_WORD*)(v76 + 2);
          }
          if (v79 >= 0) {
            v80 = v77;
          }
          else {
            v80 = 0;
          }
          *(_WORD*)(v76 + 2) = v80;
          result = (__int64)GameRoutine_89b900((_QWORD*)v12);
        LABEL_132:
          v10 = &GameData_1b5724e;
          goto LABEL_9;
        }
      }
    }
  }
  LODWORD(v9) = -1;
  v10 = GameData_212d818[0];
LABEL_9:
  v11 = *v10;
  *(_DWORD*)(a4 + 4) = v9;
  *(_BYTE*)a4 = v11;
  {
    result;
    return;
  }
}

unsigned int* game_UnitUtil_GetSpotAsPlayerCorps(unsigned int* result,
                                                 __int64 a2, __int64 a3)
{
  __int64 v3;
  char v4;
  unsigned int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  void* v20;
  unsigned int* v21;
  __int64 v22;
  int v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  struct {
    __int64 (**v27)();
    void* v28;
    char gap16_[16];
    __int64* v29;
  } v27_;

  if (result == nullptr) {
    return result;
  }
  v3 = *((_QWORD*)result + 55);
  if (v3 != 0) {
    v4 = *(_BYTE*)(v3 + 16);
  }
  else {
    v4 = 9;
  }
  if (((1 << v4) & 0xF1) == 0) {
    if (game_GameModeData_instance_ != 0) {
      v20 = *((void**)result + 49);
      v27_.v27 = nullptr;
      v27_.v28 = v20;
      v21 = (unsigned int*)GameSituation_906910(
          game_GameModeData_instance_ + 136, (__int64*)&v27_.v27, a3);
    }
    else {
      v21 = nullptr;
    }
    return game_gmap_SpotMgr_FindSpot(v21);
  }
  v5 = result;
  v27_.v28 = &GameData_1ade186;
  v27_.v27 =
      (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ade186);
  if (game_GameModeData_instance_ == 0 ||
      (v6 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v27_.v27)) == 0 ||
      *(int*)(v6 + 32) < 1) {
    v15 = *(_QWORD*)(GameData_21c96e8 + 8);
    v16 = *(_DWORD*)(v15 + 56);
    v17 = *(__int64**)(v15 + 8);
    v18 = *(__int64**)(v15 + 16);
    if (v16 < 0) {
      if (v17 != v18) {
        while (1) {
          v11 = (_QWORD*)*v17;
          if (*(_QWORD*)(*v17 + 96) == 0 && v11[69] == 0) {
            break;
          }
          if (++v17 == v18) {
            return game_gmap_SpotMgr_GetCurrentSpot();
          }
        }
        return (unsigned int*)*v11;
      }
    }
    else if (v17 != v18) {
      while (1) {
        v19 = *v17++;
        v11 = (_QWORD*)v19;
        if (*(_DWORD*)(v19 + 84) == v16) {
          break;
        }
        if (v17 == v18) {
          return game_gmap_SpotMgr_GetCurrentSpot();
        }
      }
      return (unsigned int*)*v11;
    }
    return game_gmap_SpotMgr_GetCurrentSpot();
  }
  v7 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  if (*((_QWORD*)v5 + 49) == v7) {
    v22 = *(_QWORD*)(GameData_21c96e8 + 8);
    v23 = *(_DWORD*)(v22 + 56);
    v24 = *(__int64**)(v22 + 8);
    v25 = *(__int64**)(v22 + 16);
    if (v23 < 0) {
      if (v24 != v25) {
        while (1) {
          v11 = (_QWORD*)*v24;
          if (*(_QWORD*)(*v24 + 96) == 0 && v11[69] == 0) {
            break;
          }
          if (++v24 == v25) {
            return game_gmap_SpotMgr_GetCurrentSpot();
          }
        }
        return (unsigned int*)*v11;
      }
    }
    else if (v24 != v25) {
      while (1) {
        v26 = *v24++;
        v11 = (_QWORD*)v26;
        if (*(_DWORD*)(v26 + 84) == v23) {
          break;
        }
        if (v24 == v25) {
          return game_gmap_SpotMgr_GetCurrentSpot();
        }
      }
      return (unsigned int*)*v11;
    }
    return game_gmap_SpotMgr_GetCurrentSpot();
  }
  if ((v5[104] & 0x100000) != 0) {
    v8 = *(_QWORD*)(GameData_21c96e8 + 8);
    v9 = *(__int64**)(v8 + 8);
    v10 = *(__int64**)(v8 + 16);
    while (v9 != v10) {
      v12 = *v9++;
      v11 = (_QWORD*)v12;
      if (*(_DWORD*)(v12 + 84) == *((unsigned __int8*)v5 + 501)) {
        return (unsigned int*)*v11;
      }
    }
  }
  v27_.v27 = GameData_2019858;
  v27_.v29 = (__int64*)&v27_.v27;
  v13 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0((__int64)&v27_.v27);
  if (v27_.v29 == (__int64*)&v27_.v27) {
    v14 = 32;
    goto LABEL_40;
  }
  if (v27_.v29 != nullptr) {
    v14 = 40;
  LABEL_40:
    (*(void (**)(__int64))(*v27_.v29 + v14))((__int64)v27_.v29);
  }
  if (v13 > 0) {
    return game_gmap_SpotMgr_GetCurrentSpot();
  }
  return TroopMgr_1346380();
}

__int64 UnitUtil_1211e40(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9[4];
  char v10[4];
  char v11[4];
  char v12[4];
  char v13[4];
  char v14[4];
  char v15[4];
  char v16[4];

  if (result != 0) {
    v1 = result;
    v9[0] = 1;
    v2 = game_Unit_GetParam(result, v9, 1);
    v10[0] = 2;
    v3 = game_Unit_GetParam(v1, v10, 1) + v2;
    v11[0] = 3;
    v4 = game_Unit_GetParam(v1, v11, 1);
    v12[0] = 4;
    v5 = v3 + v4 + game_Unit_GetParam(v1, v12, 1);
    v13[0] = 5;
    v6 = game_Unit_GetParam(v1, v13, 1);
    v14[0] = 6;
    v7 = v6 + game_Unit_GetParam(v1, v14, 1);
    v15[0] = 7;
    v8 = v5 + v7 + game_Unit_GetParam(v1, v15, 1);
    v16[0] = 8;
    return v8 + (unsigned int)game_Unit_GetParam(v1, v16, 1);
  }
  return result;
}

__int64 UnitUtil_1211f60(__int64 result, __int64 a2, __int64 a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 (***v11)();
  __int64 v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  _QWORD v17[3];
  _QWORD v18[5];

  if (a4 < 1) {
    return result;
  }
  v18[3] = v4;
  v18[4] = v5;
  v8 = result;
  v18[0] = 0;
  v18[1] = a2;
  if (a2 != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 1784LL) + 272LL);
  }
  else {
    v9 = 0;
  }
  v18[2] = v9;
  v17[0] = 0;
  v17[1] = a3;
  if (a3 == 0) {
    v11 = &game_GameReliance_Impl_Data_vtable_ptr;
    goto LABEL_11;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 24) + 1784LL) + 272LL);
  v17[2] = v10;
  v11 = GameData_212dae8;
  if (v9 == 0 || v10 == 0) {
  LABEL_11:
    if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 2) == 0) {
      return result;
    }
    goto LABEL_15;
  }
  v12 = *(_QWORD*)(game_GameModeData_instance_ + 128);
  v13 = a4;
  result = GameReliance_8e17a0(v12, v18, v17);
  if ((result & 0x80000000) != 0) {
    v11 = &game_GameReliance_Impl_Data_vtable_ptr;
  }
  else {
    v11 = (__int64 (***)())(*(_QWORD*)(v12 + 8) + 56LL * (unsigned int)result);
  }
  a4 = v13;
  if (*((_BYTE*)v11 + 10) != 0) {
  LABEL_15:
    v14 = *((unsigned __int16*)v11 + 6);
    v15 = *((unsigned __int8*)v11 + 11);
    ((void (*)(__int64 (***)(), _QWORD, __int64))(*v11)[2])(
        v11, (unsigned int)a4, 1);
    if (v15 == *((unsigned __int8*)v11 + 11)) {
      if (*((_BYTE*)v11 + 10) != 0) {
        v16 = 5;
      }
      else {
        v16 = 0;
      }
      return game_1373e60(a2, a3,
                          (unsigned int)*((unsigned __int16*)v11 + 6) - v14, 0,
                          v15 == v16);
    }
    else {
      return game_telop_TelopRelianceLvUp_CreateBind(v8, a2, a3, v15);
    }
  }
  return result;
}

__int64 UnitUtil_1212140(unsigned __int64 a1)
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
  __int64 v13;

  v1 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 == 0) {
    return 0;
  }
  v2 = a1;
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 15) == 7) {
    goto LABEL_32;
  }
  a1 = game_HashString(&GameData_1ac849d);
  if (a1 == 0) {
    goto LABEL_32;
  }
  v3 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_32;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = a1;
    if (a1 >= v3) {
      v6 = a1 % v3;
    }
  }
  else {
    v6 = v5 & a1;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v6);
  if (v7 == nullptr) {
    goto LABEL_32;
  }
  v8 = (_QWORD*)*v7;
  if (v8 == nullptr) {
    goto LABEL_32;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == a1) {
        if (v8[2] == a1) {
          goto LABEL_29;
        }
      }
      else if ((v10 & v5) != v6) {
        goto LABEL_32;
      }
      v8 = (_QWORD*)*v8;
      if (v8 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == a1) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      goto LABEL_32;
    }
  LABEL_18:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      goto LABEL_32;
    }
  }
  if (v8[2] != a1) {
    goto LABEL_18;
  }
LABEL_29:
  v11 = v8[3];
  if (v11 != 0 && *(_QWORD*)(*(_QWORD*)(v1 + 24) + 1672LL) ==
                      *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1672LL)) {
    return 0;
  }
LABEL_32:
  v13 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    LOBYTE(a1) =
        GameRoutine_65c660(*(_QWORD*)(game_GameModeData_instance_ + 48),
                           *(_QWORD*)(*(_QWORD*)v2 + 24LL) + 1512LL);
  }
  return (v13 != 0) & (unsigned __int8)a1;
}

__int64 UnitUtil_12122d0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v1 = *a1;
  if (*a1 == 0) {
    return 0;
  }
  if (*(_QWORD*)(v1 + 272) == 0 || game_GameModeData_instance_ == 0) {
    return 0;
  }
  v3 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   *(_QWORD*)(v1 + 24) + 1032LL);
  if (v3 != 0 && *(_DWORD*)(v3 + 32) != 0) {
    return 1;
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v4 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   *(_QWORD*)(*a1 + 24) + 992LL);
  if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
    return 1;
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result =
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  *(_QWORD*)(*a1 + 24) + 1152LL);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 UnitUtil_12123e0(__int64* a1, __int64* a2)
{
  __int64 result;

  if (*a1 == 0 || game_GameModeData_instance_ == 0) {
    return 0;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    if ((UnitUtil_12122d0(a1) & 1) == 0) {
      return 0;
    }
  }
  else {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        *(_QWORD*)(*a1 + 24) + 1032LL);
    if (result == 0) {
      return result;
    }
    if (*(_DWORD*)(result + 32) == 0) {
      return 0;
    }
  }
  if (*a2 == 0 || game_GameModeData_instance_ == 0) {
    return 0;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    return UnitUtil_12122d0(a2);
  }
  result =
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  *(_QWORD*)(*a2 + 24) + 1032LL);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 UnitUtil_12124a0(unsigned __int64 a1)
{
  __int64 result;

  if ((UnitUtil_1212140(a1) & 1) == 0 || *(_QWORD*)a1 == 0 ||
      game_GameModeData_instance_ == 0) {
    return 0;
  }
  result =
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  *(_QWORD*)(*(_QWORD*)a1 + 24LL) + 1512LL);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 UnitUtil_1212520(unsigned __int16* a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  unsigned int v23;
  _QWORD v24[4];
  _QWORD* v25;
  unsigned int v26;
  _QWORD v27[4];
  _QWORD* v28;
  _QWORD v29[4];
  _QWORD* v30;

  v3 = v24;
  v26 = 0;
  v24[0] = GameData_20198d8;
  v24[1] = &v26;
  v4 = *a1;
  v25 = v24;
  if (v4 == 0) {
  LABEL_39:
    v21 = 32;
    goto LABEL_40;
  }
  v5 = GameData_212c878[0];
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v4);
  v30 = v29;
  v29[0] = GameData_2019548;
  v29[1] = v24;
  game_TransporterConst_List_Impl_EachData(
      *(_QWORD*)(game_TransporterConst_List_instance_ + 8), v6, v29);
  if (v30 == v29) {
    v7 = 32;
    goto LABEL_6;
  }
  if (v30 != nullptr) {
    v7 = 40;
  LABEL_6:
    (*(void (**)(_QWORD*, __int64))(*v30 + v7))(v30, a2);
  }
  v8 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * *a1);
  if ((((0x10000000000LL << *(_BYTE*)(v8 + 72)) | (1LL << *(_BYTE*)(v8 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    LODWORD(v29[0]) = 17;
    v9 = game_UnitPool_GetFirst(v29);
    if (v9 != 0) {
      v10 = *(_QWORD*)(v9 + 432);
      if (v10 == 0) {
        v10 = *(_QWORD*)(v9 + 440);
        if (v10 != 0) {
          v11 = *(unsigned __int8*)(v10 + 16);
          if (v11 <= 8) {
            v23 = v11 - 3;
            do {
              if (v23 == 0) {
                v10 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v10 != 0) {
                  goto LABEL_15;
                }
              }
              ++v23;
            } while (v23 != 6);
          }
          v10 = 0;
          goto LABEL_15;
        }
      }
      while (1) {
      LABEL_15:
        v12 = v10;
        v13 = *a1;
        v27[0] = GameData_20195c8;
        v27[1] = v24;
        v28 = v27;
        if (v13 == 0) {
          v16 = v27;
        LABEL_25:
          v17 = 32;
          goto LABEL_26;
        }
        v14 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * v13);
        v29[2] = v27;
        v30 = v29;
        v29[0] = GameData_1f93008;
        v29[1] = v14;
        game_UnitItemList_EachItem(v9 + 828, v29);
        if (v30 == v29) {
          v15 = 32;
        }
        else {
          if (v30 == nullptr) {
            goto LABEL_22;
          }
          v15 = 40;
        }
        (*(void (**)(_QWORD*, __int64))(*v30 + v15))(v30, a2);
      LABEL_22:
        v16 = v28;
        if (v28 == v27) {
          goto LABEL_25;
        }
        if (v28 != nullptr) {
          v17 = 40;
        LABEL_26:
          (*(void (**)(_QWORD*, __int64))(*v16 + v17))(v16, a2);
        }
        if (v12 == 0) {
          break;
        }
        v10 = *(_QWORD*)(v12 + 432);
        v9 = v12;
        if (v10 == 0) {
          v18 = *(_QWORD*)(v12 + 440);
          v9 = v12;
          if (v18 != 0) {
            v19 = *(unsigned __int8*)(v18 + 16);
            v10 = 0;
            v9 = v12;
            if (v19 <= 8) {
              v20 = v19 - 3;
              while (1) {
                if (v20 == 0) {
                  v10 =
                      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v10 != 0) {
                    break;
                  }
                }
                if (++v20 == 6) {
                  v10 = 0;
                  v9 = v12;
                  goto LABEL_15;
                }
              }
              v9 = v12;
            }
          }
        }
      }
    }
  }
  v3 = v25;
  if (v25 == v24) {
    goto LABEL_39;
  }
  if (v25 != nullptr) {
    v21 = 40;
  LABEL_40:
    (*(void (**)(_QWORD*, __int64))(*v3 + v21))(v3, a2);
  }
  return v26;
}

__int64 UnitUtil_1212ac0(_QWORD* a1, _WORD* a2)
{
  unsigned __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64*** v8;
  __int64** v9;
  __int64 result;
  unsigned __int64 v11;
  __int64* v12;

  if (*a2 != 0) {
    v2 = *(
        unsigned __int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 +
                                                             64) +
                                                  8LL * (unsigned __int16)*a2) +
                                       24LL) +
                            600LL);
    if (v2 != nullptr) {
      v3 = a1[1];
      if (v3 != 0 && a1[3] != 0) {
        v5 = *v2;
        v6 = v3 - 1;
        if ((v3 & (v3 - 1)) != 0) {
          v7 = v5;
          if (v5 >= v3) {
            v7 = v5 % v3;
          }
        }
        else {
          v7 = v6 & v5;
        }
        v8 = *(__int64****)(*a1 + 8 * v7);
        if (v8 != nullptr) {
          v9 = *v8;
          if (v9 != nullptr) {
            if ((v3 & v6) == 0) {
              while (1) {
                v12 = v9[1];
                if ((__int64*)v5 == v12) {
                  if (v9[2] == (__int64*)v5) {
                    return *((unsigned int*)v9 + 6);
                  }
                }
                else if (((unsigned __int64)v12 & v6) != v7) {
                  return 0;
                }
                v9 = (__int64**)*v9;
                result = 0;
                if (v9 == nullptr) {
                  return result;
                }
              }
            }
            while (1) {
              v11 = (unsigned __int64)v9[1];
              if (v5 == v11) {
                if (v9[2] == (__int64*)v5) {
                  return *((unsigned int*)v9 + 6);
                }
              }
              else {
                if (v11 >= v3) {
                  v11 %= v3;
                }
                if (v11 != v7) {
                  return 0;
                }
              }
              v9 = (__int64**)*v9;
              result = 0;
              if (v9 == nullptr) {
                return result;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

__int64 UnitUtil_1212be0(__int64 a1, __int64 a2, __int64 a3)
{
  char v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v20;
  struct {
    _QWORD v21[2];
    unsigned int* v22;
    char gap24_[8];
    _QWORD* v23;
  } v21_;
  unsigned int v24;

  v24 = 0;
  v4 = a2;
  v21_.v21[0] = GameData_2019958;
  v21_.v21[1] = a1;
  v5 = v21_.v21;
  v21_.v22 = &v24;
  v21_.v23 = v21_.v21;
  v6 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v7 = *(unsigned int*)(v6 + 80);
  if ((int)v7 >= 1) {
    v8 = 0;
    v9 = 12 * v7;
    do {
      a2 = *(_QWORD*)(v6 + 8) + v8;
      if (*(_WORD*)(a2 + 2) != 0) {
        if (v21_.v23 == nullptr) {
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(_QWORD*))(*v21_.v23 + 48LL))(v21_.v23);
      }
      v8 += 12;
    } while (v9 != v8);
    v5 = v21_.v23;
    if (v21_.v23 != v21_.v21) {
      if (v21_.v23 != nullptr) {
        v10 = 40;
      LABEL_12:
        (*(void (**)(_QWORD*, __int64, __int64))(*v5 + v10))(v5, a2, a3);
      }
      if ((v4 & 1) == 0) {
        LODWORD(v21_.v21[0]) = 17;
        v11 = game_UnitPool_GetFirst_alt1((int*)v21_.v21);
        if (v11 != 0) {
          v12 = *(_QWORD*)(v11 + 432);
          if (v12 == 0) {
            v12 = *(_QWORD*)(v11 + 440);
            if (v12 != 0) {
              v13 = *(unsigned __int8*)(v12 + 16);
              if (v13 <= 8) {
                v20 = v13 - 3;
                do {
                  if (v20 == 0) {
                    v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                     556096LL);
                    if (v12 != 0) {
                      goto LABEL_21;
                    }
                  }
                  ++v20;
                } while (v20 != 6);
              }
              v12 = 0;
              goto LABEL_21;
            }
          }
          while (1) {
          LABEL_21:
            v14 = v12;
            v21_.v21[0] = GameData_20199d8;
            v21_.v21[1] = a1;
            v21_.v22 = &v24;
            v21_.v23 = v21_.v21;
            game_UnitItemList_EachItem_alt1((_WORD*)(v11 + 828),
                                            (__int64)v21_.v21);
            if (v21_.v23 == v21_.v21) {
              v15 = 32;
            }
            else {
              if (v21_.v23 == nullptr) {
                goto LABEL_26;
              }
              v15 = 40;
            }
            (*(void (**)(__int64))(*v21_.v23 + v15))((__int64)v21_.v23);
          LABEL_26:
            if (v14 == 0) {
              return v24;
            }
            v12 = *(_QWORD*)(v14 + 432);
            v11 = v14;
            if (v12 == 0) {
              v16 = *(_QWORD*)(v14 + 440);
              v11 = v14;
              if (v16 != 0) {
                v17 = *(unsigned __int8*)(v16 + 16);
                v12 = 0;
                v11 = v14;
                if (v17 <= 8) {
                  v18 = v17 - 3;
                  while (1) {
                    if (v18 == 0) {
                      v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                       556096LL);
                      if (v12 != 0) {
                        break;
                      }
                    }
                    if (++v18 == 6) {
                      v12 = 0;
                      v11 = v14;
                      goto LABEL_21;
                    }
                  }
                  v11 = v14;
                }
              }
            }
          }
        }
      }
      return v24;
    }
  }
  v10 = 32;
  goto LABEL_12;
}

__int64 UnitUtil_1213180(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  _QWORD* v6;
  _DWORD* v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  _DWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if (result != 0) {
    v2 = *(_QWORD*)(result + 392);
    v4 = result;
    v5 = GameData_212c880[0];
    if (v2 != 0) {
      v6 = *(_QWORD**)(v2 + 24);
      v7 = (_DWORD*)v6[4];
      v8 = (_DWORD*)v6[5];
      if (v7 != v8) {
        v9 = *GameData_212c880[0];
        do {
          v10 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*v7 & 0xFFF));
          if (v10 != 0 && *(_BYTE*)(*(_QWORD*)(v10 + 24) + 1121LL) == 1) {
            v11 = *(_QWORD*)(a2 + 32);
            v19 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*v7 & 0xFFF));
            if (v11 == 0) {
            LABEL_10:
              GameRoutine_60a310(v11, a2);
            }
            result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
                v11, &v19);
            v9 = *v5;
          }
          ++v7;
        } while (v7 != v8);
        v6 = *(_QWORD**)(v2 + 24);
      }
      v12 = v6[116];
      v13 = v6[117];
      while (v12 != v13) {
        v14 = *(_QWORD*)(*(_QWORD*)v12 + 48LL);
        if (v14 != 0 && *(_BYTE*)(*(_QWORD*)(v14 + 24) + 1121LL) == 1) {
          v11 = *(_QWORD*)(a2 + 32);
          v19 = *(_QWORD*)(*(_QWORD*)v12 + 48LL);
          if (v11 == 0) {
            goto LABEL_10;
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
              v11, &v19);
        }
        v12 += 8;
      }
    }
    v15 = *(_DWORD**)(v4 + 1392);
    v16 = *(_DWORD**)(v4 + 1400);
    if (v15 != v16) {
      v17 = *v5;
      do {
        v18 = *(_QWORD*)(*(_QWORD*)(v17 + 64) + 8LL * (*v15 & 0xFFF));
        if (v18 != 0 && *(_BYTE*)(*(_QWORD*)(v18 + 24) + 1121LL) == 1) {
          v11 = *(_QWORD*)(a2 + 32);
          v19 = *(_QWORD*)(*(_QWORD*)(v17 + 64) + 8LL * (*v15 & 0xFFF));
          if (v11 == 0) {
            goto LABEL_10;
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
              v11, &v19);
          v17 = *v5;
        }
        ++v15;
      } while (v15 != v16);
    }
  }
  return result;
}

unsigned __int64* game_UnitUtil_EachFlagUnit(unsigned __int64* result,
                                             __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64** v7;
  __int64* v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  struct {
    _QWORD v22[4];
    unsigned __int64* v23;
  } v22_;
  char v24;

  if (GameData_21ca400 != 0 && GameData_21ca410 != 0) {
    v4 = *result;
    v5 = GameData_21ca400 - 1;
    if ((GameData_21ca400 & (GameData_21ca400 - 1)) != 0) {
      v6 = *result;
      if (v4 >= GameData_21ca400) {
        v6 = v4 % GameData_21ca400;
      }
    }
    else {
      v6 = v5 & v4;
    }
    v7 = *(__int64***)(GameData_21ca3f8 + 8 * v6);
    if (v7 != nullptr) {
      v8 = *v7;
      if (v8 != nullptr) {
        v9 = &GameData_21ee210;
        if ((GameData_21ca400 & v5) == 0) {
          while (1) {
            v11 = v8[1];
            if (v11 == v4) {
              if (v8[2] == v4) {
                goto LABEL_53;
              }
            }
            else if ((v11 & v5) != v6) {
              goto LABEL_28;
            }
            v8 = (__int64*)*v8;
            if (v8 == nullptr) {
              goto LABEL_28;
            }
          }
        }
        while (1) {
          v10 = v8[1];
          if (v10 == v4) {
            if (v8[2] == v4) {
            LABEL_53:
              v9 = v8 + 3;
              if (*((_DWORD*)v8 + 12) == 0) {
                return result;
              }
            LABEL_29:
              LODWORD(v22_.v22[0]) = 241;
              result = (unsigned __int64*)game_UnitPool_GetFirst_alt1(
                  (int*)v22_.v22);
              if (result == nullptr) {
                return result;
              }
              v12 = result[54];
              v13 = (__int64)result;
              if (v12 == 0) {
                v12 = result[55];
                if (v12 != 0) {
                  v14 = *(unsigned __int8*)(v12 + 16);
                  if (v14 <= 8) {
                    do {
                      v21 = v14 + 1;
                      if (((2 << v14) & 0xF0) != 0) {
                        v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                         24LL * (unsigned __int8)(v14 + 1) +
                                         556000);
                        if (v12 != 0) {
                          goto LABEL_36;
                        }
                      }
                      v14 = v21;
                    } while (v21 != 9);
                  }
                  v12 = 0;
                }
              }
            LABEL_36:
              while (2) {
                v15 = v12;
                v24 = 0;
                v22_.v22[0] = GameData_2019c58;
                v22_.v22[1] = &v24;
                v22_.v22[2] = v9;
                v22_.v23 = v22_.v22;
                UnitUtil_1213180(v13, (__int64)v22_.v22);
                result = v22_.v23;
                if (v22_.v23 == v22_.v22) {
                  v16 = 32;
                LABEL_40:
                  result = (unsigned __int64*)(*(__int64 (**)(__int64))(
                      *v22_.v23 + v16))((__int64)v22_.v23);
                }
                else if (v22_.v23 != nullptr) {
                  v16 = 40;
                  goto LABEL_40;
                }
                if (v24 == 1) {
                  v17 = *(_QWORD*)(a2 + 32);
                  v22_.v22[0] = v13;
                  if (v17 == 0) {
                    GameRoutine_60a310_alt1();
                  }
                  result = (unsigned __int64*)(*(__int64 (**)(
                      __int64, _QWORD*))(*(_QWORD*)v17 + 48LL))(v17, v22_.v22);
                }
                if (v15 == 0) {
                  return result;
                }
                v12 = *(_QWORD*)(v15 + 432);
                v13 = v15;
                if (v12 == 0) {
                  v18 = *(_QWORD*)(v15 + 440);
                  v13 = v15;
                  if (v18 != 0) {
                    v19 = *(unsigned __int8*)(v18 + 16);
                    v12 = 0;
                    v13 = v15;
                    if (v19 <= 8) {
                      while (1) {
                        v20 = v19 + 1;
                        if (((2 << v19) & 0xF0) != 0) {
                          v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                           24LL * (unsigned __int8)(v19 + 1) +
                                           556000);
                          if (v12 != 0) {
                            break;
                          }
                        }
                        ++v19;
                        if (v20 == 9) {
                          v12 = 0;
                          v13 = v15;
                          goto LABEL_36;
                        }
                      }
                      v13 = v15;
                    }
                  }
                }
                continue;
              }
            }
          }
          else {
            if (v10 >= GameData_21ca400) {
              v10 %= (unsigned __int64)GameData_21ca400;
            }
            if (v10 != v6) {
              goto LABEL_28;
            }
          }
          v8 = (__int64*)*v8;
          if (v8 == nullptr) {
            goto LABEL_28;
          }
        }
      }
      v9 = &GameData_21ee210;
    LABEL_28:
      if (GameData_21ee228 != 0) {
        goto LABEL_29;
      }
      return result;
    }
  }
  v9 = &GameData_21ee210;
  if (GameData_21ee228 == 0) {
    return result;
  }
  goto LABEL_29;
}

__int64 game_UnitUtil_AutoEquipItem_lambda0_Invoke(__int64 result,
                                                   unsigned __int16* a2)
{
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL *
                                         **(unsigned __int16**)(result + 16)) +
                          73LL) ==
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *a2) +
                          73LL)) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

bool game_UnitUtil_SortSortieOrder_lambda0_Invoke(__int64 a1, __int64 a2,
                                                  __int64 a3)
{
  return (unsigned __int8)(*(_BYTE*)(*(_QWORD*)a2 + 2093LL) - 1) <
         (unsigned int)(unsigned __int8)(*(_BYTE*)(*(_QWORD*)a3 + 2093LL) - 1);
}

__int64 game_UnitUtil_TryEscapeCorps_lambda0_Invoke(__int64 result, __int64 a2)
{
  **(_DWORD**)(result + 8) |= 1 << *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  return result;
}

__int64 game_UnitUtil_TryEscapeCorps_lambda1_Invoke(__int64 result, __int64 a2)
{
  **(_DWORD**)(result + 8) |= 1 << *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  return result;
}

__int64 game_UnitUtil_GetStockCount_lambda0_Invoke(__int64 result, __int64 a2,
                                                   _DWORD* a3)
{
  **(_DWORD**)(result + 8) += *a3;
  return result;
}

__int64 game_UnitUtil_GetDeliverCount_lambda0_Invoke(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(GameData_21c99b8 + 64);
  v3 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(a2 + 4)) +
                          24LL) +
               600LL);
  if (v3 ==
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 +
                                           8LL * **(unsigned __int16**)(result +
                                                                        8)) +
                                24LL) +
                     600LL) &&
      **(_WORD**)(v3 + 24) != 0) {
    **(_DWORD**)(result + 16) += *(unsigned __int16*)(a2 + 2);
  }
  return result;
}

__int64 game_UnitUtil_GetDeliverCount_lambda1_Invoke(__int64 result, _WORD* a2)
{
  if (*a2 != 0 &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * (unsigned __int16)*a2) +
                            24LL) +
                 600LL) ==
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                           8LL * **(unsigned __int16**)(result +
                                                                        8)) +
                                24LL) +
                     600LL)) {
    ++**(_DWORD**)(result + 16);
  }
  return result;
}

bool game_UnitUtil_UniqueMap_Commit_lambda0_Invoke_1216430(__int64 a1,
                                                           unsigned __int16* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8);
  return v2 != 0 &&
         *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                          8LL * *a2) +
                               24LL) +
                    600LL) == *(_QWORD*)(*(_QWORD*)(v2 + 24) + 600LL);
}

__int64 game_UnitUtil_UniqueMap_Commit_lambda0_Invoke_1216570(__int64 result,
                                                              __int64 a2)
{
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v8;
  int v9;
  __int64 v10;
  char v11;
  __int64* v12;

  v2 = (unsigned __int16*)(a2 + 4);
  v3 = GameData_212c878[0];
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)(a2 + 4));
  if ((*(_BYTE*)(v4 + 336) & 4) == 0 &&
      ((1LL << *(_BYTE*)(v4 + 72)) & 0xE01F) != 0) {
    v5 = *(_QWORD**)(*(_QWORD*)(result + 16) + 32LL);
    if (v5 == nullptr) {
      GameRoutine_60a310(result, a2);
    }
    v6 = *(_QWORD*)(result + 8);
    result = (__int64)X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64))(
            *v5 + 48LL))((void*)v5, *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL),
                         a2 + 4));
    if ((result & 1) != 0) {
      v8 =
          *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v2) +
                                  24LL) +
                       600LL);
      if (v8 != nullptr) {
        v9 = *(unsigned __int16*)(a2 + 2);
        v10 = *v8;
        v12 = &v10;
        result = GameRoutine_8305a0(v6, &v10, std___1_piecewise_construct_ptr,
                                    &v12, &v11);
        *(_DWORD*)(result + 24) += v9;
      }
    }
  }
  return result;
}

__int64 game_UnitUtil_UniqueMap_Commit_lambda1_Invoke(__int64 result,
                                                      unsigned __int16* a2)
{
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64* v7;
  __int64 v8;
  char v9;
  __int64* v10;

  if ((*((_BYTE*)a2 + 3) & 0x10) == 0) {
    v2 = GameData_212c878[0];
    v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
    if ((*(_BYTE*)(v3 + 336) & 4) == 0 &&
        ((1LL << *(_BYTE*)(v3 + 72)) & 0xE01F) != 0) {
      v4 = *(_QWORD**)(*(_QWORD*)(result + 16) + 32LL);
      if (v4 == nullptr) {
        GameRoutine_60a310(result, a2);
      }
      v5 = *(_QWORD*)(result + 8);
      result = (__int64)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v4 + 48LL))(
                       (void*)v4, *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL)));
      if ((result & 1) != 0) {
        v7 = *(
            __int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * *a2) +
                                  24LL) +
                       600LL);
        if (v7 != nullptr) {
          v8 = *v7;
          v10 = &v8;
          result = GameRoutine_8305a0(v5, &v8, std___1_piecewise_construct_ptr,
                                      &v10, &v9);
          ++*(_DWORD*)(result + 24);
        }
      }
    }
  }
  return result;
}

__int64 game_UnitUtil_EachFlagUnit_lambda0_Invoke(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;

  v2 = *a2;
  if (*a2 != 0) {
    LODWORD(v2) = *(_WORD*)(v2 + 16) & 0xFFF;
  }
  v3 = **(_QWORD**)(result + 16);
  if (((unsigned int)v2 >> 5) + 1 <=
      (unsigned __int64)((*(_QWORD*)(*(_QWORD*)(result + 16) + 8LL) - v3) >>
                         2)) {
    v4 = (*(_DWORD*)(v3 + 4LL * ((unsigned int)v2 >> 5)) >> v2) & 1;
  }
  else {
    LOBYTE(v4) = 0;
  }
  **(_BYTE**)(result + 8) |= v4;
  return result;
}

#pragma GCC visibility pop
