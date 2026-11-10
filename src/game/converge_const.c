#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 RidePool_93cd60(_QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern __int64 GameData_21c9c50;
extern __int64 GameData_21ca310;
extern __int64 game_TransporterConst_List_instance_;
extern __int64* GameData_212c878[6];
struct PseudoSret GameRoutine_936f60(_QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_93c6a0(_QWORD, _QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_93e420(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ConvergeConst_8e68e0(__int64 a1, __int64 a2, __int64 a3);
_QWORD* game_ConvergeConst_Depository_Clone_lambda1_Invoke(__int64 a1,
                                                           __int64 a2);
_QWORD* game_ConvergeConst_Depository_Clone_lambda2_Invoke(__int64 a1,
                                                           __int64 a2);
_QWORD* game_ConvergeConst_Depository_Merge_lambda2_Invoke(__int64 a1,
                                                           __int64 a2);
__int64 game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit_lambda1_Invoke(
    __int64 result);
__int64 ConvergeConst_8e68e0_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("ConvergeConst_8e68e0");
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_89b900(_QWORD);
__int64 GameRoutine_8e7080(_QWORD);
__int64 GameRoutine_8f7120(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_Sort(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_EquipFirstWeapon(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_1fac8d0[])();
extern __int64 (*GameData_1fac950[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8f6950(void);
__int64
game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit(__int64 result,
                                                               unsigned int a2);
__int64 game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit_lambda0_Invoke(
    __int64 result, __int64* a2);
__int64
game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit_lambda0_Invoke(
    __int64 result, __int64* a2);
__int64
game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit_lambda1_Invoke(
    __int64 result, __int64* a2, int* a3);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8, __int64 result,
                                                  unsigned __int8*, __int64);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64 result,
                                      unsigned __int16*, __int64);
__int64 ConvergeConst_8e68e0_alt2(unsigned __int8, __int64,
                                  __int64) __asm__("ConvergeConst_8e68e0");
__int64 GameRoutine_89aac0(_QWORD*, _QWORD*);
__int64 LegionPool_938ca0(__int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero_alt1(unsigned __int8) __asm__("game_GetHero");
__int64 game_HashString(__int64 result);
char* GameRoutine_89d1e0(unsigned __int64);
extern _QWORD GameData_1f9cbe8[10];
extern __int64 (*GameData_1fac7c0[])();
extern __int64 (*GameData_1fac850[])();
extern __int64 GameData_21c99b8;
__int64 (**game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit(
    __int64 a1, unsigned __int8 a2))();
__int64 game_ConvergeConst_Depository_Clone_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
char* game_ConvergeConst_Depository_Merge_lambda0_Invoke(char* result,
                                                         __int64 a2);
__int64 game_ConvergeConst_Depository_Merge_lambda1_Invoke(__int64 result,
                                                           unsigned __int8* a2);

__int64 (**game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit(
    __int64 a1, unsigned __int8 a2))()
{
  __int64 v2;
  __int64 (**result)();
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    __int64 (**v10)();
    __int64 v11;
    __int64* v12;
    char gap72_[8];
    __int64* v13;
  } v10_;
  __int64 v14;

  v2 = *(_QWORD*)a1;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 8) = v2;
  *(_QWORD*)(a1 + 32) = *(_QWORD*)(a1 + 24);
  v10_.v11 = GameData_1f9cbe8[a2];
  v10_.v10 = (__int64 (**)(void))game_HashString(v10_.v11);
  if (game_GameModeData_instance_ != 0 &&
          (result = (__int64 (**)(void))game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v10_.v10)) != nullptr &&
          *((_DWORD*)result + 8) != 0 ||
      (result = (__int64 (**)(void))game_GetHero_alt1(a2)) == nullptr) {
    *(_BYTE*)(a1 + 48) = 0;
    return result;
  }
  v10_.v10 = result;
  LODWORD(v8_.v8[0]) = 241;
  result = (__int64 (**)(void))game_UnitPool_Find_6ead60((__int64*)&v10_.v10,
                                                         v8_.v8);
  *(_BYTE*)(a1 + 48) = result != nullptr;
  if (result == nullptr) {
    return result;
  }
  v14 = 0;
  v10_.v13 = (__int64*)&v10_.v10;
  v8_.v9 = v8_.v8;
  v10_.v10 = GameData_1fac7c0;
  v10_.v11 = a1;
  v10_.v12 = &v14;
  v8_.v8[0] = GameData_1fac850;
  v8_.v8[1] = &v14;
  ConvergeConst_8e68e0_alt2(a2, (__int64)&v10_.v10, (__int64)v8_.v8);
  if (v8_.v9 == v8_.v8) {
    v6 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_12;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
LABEL_12:
  result = (__int64 (**)(void))v10_.v13;
  if (v10_.v13 == (__int64*)&v10_.v10) {
    v7 = 32;
  }
  else {
    if (v10_.v13 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (__int64 (**)(void))(*(__int64 (**)(__int64))(*v10_.v13 + v7))(
      (__int64)v10_.v13);
}

__int64 ConvergeConst_8e68e0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned __int16* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  bool v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  __int64 v48;
  int v49;
  __int64 v50;

  result = game_GetHero(a1);
  if (result != 0 && GameData_21c9c50 != 0) {
    v6 = *(__int64**)(GameData_21c9c50 + 64);
    v7 = *(__int64**)(GameData_21c9c50 + 72);
    if (v6 != v7) {
      while (1) {
        v9 = *v6++;
        v8 = v9;
        if (*(_QWORD*)(v9 + 40) == result) {
          break;
        }
        if (v6 == v7) {
          return result;
        }
      }
      v48 = *(unsigned __int16*)(v8 + 48);
      if (*(_WORD*)(v8 + 48) != 0) {
        v10 = 0;
        v11 = GameData_212c878[0];
        do {
          v12 = *(_QWORD*)(*(_QWORD*)(v8 + 56) + 16 * v10 + 8);
          if (v12 != 0 && (*(_BYTE*)(v12 + 337) & 0x40) != 0) {
            v50 = *(_QWORD*)(*(_QWORD*)(v8 + 56) + 16 * v10 + 8);
            v13 = *(_QWORD*)(a2 + 32);
            if (v13 == 0) {
            LABEL_83:
              GameRoutine_60a310(v13, v5);
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v13 + 48LL))(v13, &v50);
            LODWORD(v50) = 17;
            result = game_UnitPool_GetFirst(&v50);
            if (result != 0) {
              v14 = *(_QWORD*)(result + 432);
              v15 = result;
              if (v14 == 0) {
                v14 = *(_QWORD*)(result + 440);
                if (v14 != 0) {
                  v16 = *(unsigned __int8*)(v14 + 16);
                  if (v16 <= 8) {
                    v17 = v16 - 3;
                    while (1) {
                      if (v17 == 0) {
                        v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                         556096LL);
                        if (v14 != 0) {
                          break;
                        }
                      }
                      if (++v17 == 6) {
                        goto LABEL_17;
                      }
                    }
                  }
                  else {
                  LABEL_17:
                    v14 = 0;
                  }
                }
              }
              while (1) {
                v18 = (unsigned __int16*)(v15 + 828);
                v19 = 0;
                v20 = v14;
                do {
                  v22 = *v18;
                  v18 += 4;
                  v21 = v22;
                  if (v22 != 0) {
                    v23 = *(_QWORD*)(*(_QWORD*)(*v11 + 64) + 8 * v21);
                    if (v23 != 0 && *(unsigned __int8*)(v12 + 72) ==
                                        *(unsigned __int8*)(v23 + 72)) {
                      if (v12 == v23 ||
                          (v24 = *(_QWORD*)(v12 + 24),
                           (v25 = *(_QWORD*)(v24 + 600)) != 0) &&
                              *(_QWORD*)(v25 + 296) != 0 &&
                              (v26 = *(_QWORD*)(*(_QWORD*)(v23 + 24) +
                                                600LL)) != 0 &&
                              (v25 == v26 ? (v27 = *(_QWORD*)(v26 + 296) == 0)
                                          : (v27 = true),
                               !v27) ||
                          (v28 = *(_QWORD*)(v24 + 592)) != 0 &&
                              *(_QWORD*)(v28 + 352) != 0 &&
                              (v29 = *(_QWORD*)(*(_QWORD*)(v23 + 24) +
                                                592LL)) != 0 &&
                              (v28 == v29 ? (v30 = *(_QWORD*)(v29 + 352) == 0)
                                          : (v30 = true),
                               !v30)) {
                        v13 = *(_QWORD*)(a3 + 32);
                        v50 = v15;
                        v49 = v19;
                        if (v13 == 0) {
                          goto LABEL_83;
                        }
                        result = (*(__int64 (**)(__int64, __int64*, int*))(
                            *(_QWORD*)v13 + 48LL))(v13, &v50, &v49);
                      }
                    }
                  }
                  ++v19;
                } while (v19 != 6);
                if (v20 == 0) {
                  break;
                }
                v14 = *(_QWORD*)(v20 + 432);
                v15 = v20;
                if (v14 == 0) {
                  v31 = *(_QWORD*)(v20 + 440);
                  v15 = v20;
                  if (v31 != 0) {
                    v32 = *(unsigned __int8*)(v31 + 16);
                    v14 = 0;
                    v15 = v20;
                    if (v32 <= 8) {
                      v33 = v32 - 3;
                      while (1) {
                        if (v33 == 0) {
                          v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                           556096LL);
                          if (v14 != 0) {
                            break;
                          }
                        }
                        if (++v33 == 6) {
                          v14 = 0;
                          break;
                        }
                      }
                      v15 = v20;
                    }
                  }
                }
              }
            }
            v34 = game_TransporterConst_List_instance_;
            v35 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
            if (*(int*)(v35 + 72) >= 1) {
              v36 = 4;
              v37 = 0;
              do {
                v38 = *(unsigned __int16*)(*(_QWORD*)(v35 + 8) + v36);
                if (v38 != 0) {
                  v39 = *(_QWORD*)(*(_QWORD*)(*v11 + 64) + 8 * v38);
                  if (v39 != 0 && *(unsigned __int8*)(v12 + 72) ==
                                      *(unsigned __int8*)(v39 + 72)) {
                    if (v12 == v39 ||
                        (v40 = *(_QWORD*)(v12 + 24),
                         (v41 = *(_QWORD*)(v40 + 600)) != 0) &&
                            *(_QWORD*)(v41 + 296) != 0 &&
                            (v42 = *(_QWORD*)(*(_QWORD*)(v39 + 24) + 600LL)) !=
                                0 &&
                            (v41 == v42 ? (v43 = *(_QWORD*)(v42 + 296) == 0)
                                        : (v43 = true),
                             !v43) ||
                        (v44 = *(_QWORD*)(v40 + 592)) != 0 &&
                            *(_QWORD*)(v44 + 352) != 0 &&
                            (v45 = *(_QWORD*)(*(_QWORD*)(v39 + 24) + 592LL)) !=
                                0 &&
                            (v44 == v45 ? (v46 = *(_QWORD*)(v45 + 352) == 0)
                                        : (v46 = true),
                             !v46)) {
                      v13 = *(_QWORD*)(a3 + 32);
                      v50 = 0;
                      v49 = v37;
                      if (v13 == 0) {
                        goto LABEL_83;
                      }
                      result = (*(__int64 (**)(__int64, __int64*, int*))(
                          *(_QWORD*)v13 + 48LL))(v13, &v50, &v49);
                      v34 = game_TransporterConst_List_instance_;
                    }
                  }
                }
                v35 = *(_QWORD*)(v34 + 8);
                ++v37;
                v36 += 12;
              } while (v37 < *(int*)(v35 + 72));
            }
          }
          ++v10;
        } while (v10 != v48);
      }
    }
  }
  return result;
}

__int64

game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit(__int64 result,
                                                               unsigned int a2)
{
  int v2;
  __int64* v3;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  char v26;
  char v27;
  int v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[4];
  _QWORD* v35;
  _QWORD v36[2];
  _QWORD* v37;
  __int64 v38;
  _QWORD* v39;
  int v40;
  __int64 v41;
  __int64 v42;
  char v43;

  v2 = *(unsigned __int8*)(result + 48);
  v43 = a2;
  if (v2 == 0) {
    return result;
  }
  v42 = 0;
  v3 = (__int64*)result;
  v5 = game_g_empty_item_ptr;
  v41 = *game_g_empty_item_ptr;
  v40 = -1;
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v39 = v7;
  *v7 = GameData_1fac8d0;
  v7[1] = v3;
  v7[2] = &v42;
  v7[3] = &v41;
  v35 = v34;
  v7[4] = &v43;
  v34[0] = GameData_1fac950;
  v34[1] = &v42;
  v34[2] = &v40;
  v34[3] = &v41;
  ConvergeConst_8e68e0_alt1(a2, v36, v34);
  if (v35 == v34) {
    v8 = 32;
    goto LABEL_6;
  }
  if (v35 != nullptr) {
    v8 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v35 + v8))((__int64)v35);
  }
  result = (*(__int64 (**)(_QWORD*))(*v7 + 40LL))(v7);
  v37 = nullptr;
  v38 = 0;
  v36[0] = 0;
  v36[1] = 0;
  LODWORD(v39) = 1065353216;
  v9 = *v3;
  if (v3[1] == *v3) {
    goto LABEL_42;
  }
  v10 = 0;
  v11 = 0;
  v12 = game_TransporterConst_List_instance__ptr[0];
  do {
    v13 = v3[3];
    v14 = v13 + v10;
    if (*(_DWORD*)(v9 + v10 + 8) < *(_DWORD*)(v13 + v10 + 8)) {
      v15 = *(unsigned int*)(v14 + 24);
      if ((v15 & 0x80000000) == 0) {
        v16 = *(_QWORD*)(v14 + 16);
        v17 = *(_DWORD*)(v13 + v10 + 32);
        if (v16 != 0) {
          if ((v17 & 0x80000000) == 0) {
            goto LABEL_9;
          }
          *(_QWORD*)(v16 + 8 * v15 + 828) = *v5;
          result = GameRoutine_8f7120(v36, v14 + 16, v14 + 16);
        }
        else {
          if ((v17 & 0x80000000) == 0 && (_DWORD)v15 != v17) {
          LABEL_9:
            result = GameRoutine_8e7080(v14 + 16);
            goto LABEL_10;
          }
          result = *(_QWORD*)(*(_QWORD*)v12 + 8LL);
          v18 = *(_QWORD*)(result + 8) + 12LL * (unsigned int)v15;
          if (*(_WORD*)(v18 + 4) != 0) {
            v19 = *(unsigned __int16*)(v18 + 2);
            v20 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                             8LL * *(unsigned __int16*)(v18 + 4));
            if ((((0x10000000000LL << *(_BYTE*)(v20 + 72)) |
                  (1LL << *(_BYTE*)(v20 + 73))) &
                 0xFFBFFFFFFFA39FFFLL) != 0) {
              v21 = 1;
            }
            else {
              v21 = 999;
            }
            if (v21 >= v19 - 1) {
              LOWORD(v21) = v19 - 1;
            }
            if (*(_WORD*)(v18 + 2) == 0) {
              LOWORD(v21) = 0;
            }
            *(_WORD*)(v18 + 2) = v21;
            if ((_WORD)v21 == 0) {
              v22 = *(_QWORD*)(result + 8) + 12LL * (unsigned int)v15;
              v23 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * *(unsigned __int16*)(v22 + 4));
              if ((((0x10000000000LL << *(_BYTE*)(v23 + 72)) |
                    (1LL << *(_BYTE*)(v23 + 73))) &
                   0xFFBFFFFFFFA39FFFLL) != 0) {
                *(_QWORD*)(v22 + 4) = 0;
              }
              *(_WORD*)(v22 + 2) = 0;
              result = GameRoutine_89b900(result);
            }
          }
        }
      }
    }
  LABEL_10:
    v9 = *v3;
    ++v11;
    v10 += 40;
  } while (0xCCCCCCCCCCCCCCCDLL * ((v3[1] - *v3) >> 3) > v11);
  v24 = v37;
  if (v37 != nullptr) {
    do {
      v25 = v24[2];
      v26 = game_UnitItemList_Sort(v25 + 828, 0, 6);
      v27 = game_UnitItemList_Sort(v25 + 828, 6, 24);
      if ((v26 & 1) != 0 || (v27 & 1) != 0) {
        v28 = *(_DWORD*)(v25 + 416);
        if ((v28 & 0x10000000) == 0) {
          *(_DWORD*)(v25 + 416) = v28 | 0x10000000;
          GameRoutine_6c51e0(v25);
          GameRoutine_6c6da0(v25);
          GameRoutine_6c6ec0(v25);
          *(_DWORD*)(v25 + 416) &= ~0x10000000u;
        }
      }
      result = game_Unit_EquipFirstWeapon(v25);
      v24 = (_QWORD*)*v24;
    } while (v24 != nullptr);
    v29 = v37;
    if (v37 != nullptr) {
      do {
        v30 = (_QWORD*)*v29;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v31, v29);
        v29 = v30;
      } while (v30 != nullptr);
    }
  }
LABEL_42:
  v32 = v36[0];
  v36[0] = 0;
  if (v32 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v33 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v33, v32);
  }
  return result;
}

__int64 game_ConvergeConst_Depository_Clone_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  _BYTE v3[8];

  return X8CALL_X0(
      __int64, game_UnitUtil_UniqueMap_Commit_89abc0(
                   (void*)((__int64)v3), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL),
                   (unsigned __int16*)(a2 + 4), *(unsigned __int16*)(a2 + 2)));
}

_QWORD* game_ConvergeConst_Depository_Clone_lambda1_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v3;

  return (*(struct PseudoSret*)(&v3) =
              GameRoutine_936f60(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 40LL), a2, 0),
          (void*)(&v3));
}

_QWORD* game_ConvergeConst_Depository_Clone_lambda2_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v3;

  return (*(struct PseudoSret*)(&v3) = GameRoutine_93c6a0(
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL), a2, 0, 1),
          (void*)(&v3));
}

char* game_ConvergeConst_Depository_Merge_lambda0_Invoke(char* result,
                                                         __int64 a2)
{
  unsigned __int16* v2;
  __int64 v3;
  unsigned int v4;
  unsigned __int16* v5;
  _QWORD* v6;
  struct {
    _BYTE v7[4];
    int v8;
  } v7_;

  v4 = *(unsigned __int16*)(a2 + 4);
  v2 = (unsigned __int16*)(a2 + 4);
  v3 = v4;
  if (v4 != 0 &&
      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v3) +
                 336LL) &
       0x34) == 0) {
    v5 = v2;
    v6 = *(_QWORD**)(*((_QWORD*)result + 1) + 8LL);
    result = (char*)GameRoutine_89aac0(v6, v2);
    if ((_DWORD)result == -1 ||
        *(_WORD*)(v6[1] + 12LL * (int)result + 2) == 0) {
      result = (char*)X8CALL_X0(
          __int64, game_UnitUtil_UniqueMap_Commit_89abc0(
                       (void*)((__int64)v7_.v7), (__int64)v6, v5, 1));
      if ((v7_.v8 & 0x80000000) == 0) {
        return GameRoutine_89d1e0((unsigned __int64)v6);
      }
    }
  }
  return result;
}

__int64 game_ConvergeConst_Depository_Merge_lambda1_Invoke(__int64 result,
                                                           unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  struct {
    _BYTE v6[4];
    int v7;
  } v6_;

  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 40LL);
  if (*a2 != 0 && (v3 = *(_QWORD*)a2, *(_QWORD*)a2 != 0)) {
    v4 = 300;
    v5 = (_QWORD*)(*(_QWORD*)(v2 + 48) + 56LL);
    while (*(v5 - 7) != v3 && *(v5 - 6) != v3 && *(v5 - 5) != v3 &&
           *(v5 - 4) != v3 && *(v5 - 3) != v3 && *(v5 - 2) != v3 &&
           *(v5 - 1) != v3 && *v5 != v3 && v5[1] != v3 && v5[2] != v3 &&
           v5[3] != v3 && v5[4] != v3 && v5[5] != v3 && v5[6] != v3 &&
           v5[7] != v3) {
      v4 -= 15;
      v5 += 15;
      if (v4 == 0) {
        goto LABEL_20;
      }
    }
  }
  else {
  LABEL_20:
    result = X8CALL_X0(
        __int64,
        LegionPool_936f60((void*)((__int64)v6_.v6),
                          *(_QWORD*)(*(_QWORD*)(result + 8) + 40LL), a2, 0));
    if ((v6_.v7 & 0x80000000) == 0) {
      return LegionPool_938ca0(v2);
    }
  }
  return result;
}

_QWORD* game_ConvergeConst_Depository_Merge_lambda2_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v3;
  unsigned int v4;
  __int64 v6;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  v4 = RidePool_93cd60(v3);
  if ((v4 & 0x80000000) != 0) {
    return (*(struct PseudoSret*)((__int64*)((char*)&v6 + 1)) =
                GameRoutine_93c6a0(v3, a2, 0, 1),
            (void*)((__int64*)((char*)&v6 + 1)));
  }
  else {
    return (*(struct PseudoSret*)(&v6) = GameRoutine_93e420(v3, v4, a2),
            (void*)(&v6));
  }
}

__int64 game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit_lambda0_Invoke(
    __int64 result, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = *(__int64**)(result + 8);
  v3 = *a2;
  v4 = result;
  v5 = v2[1];
  v6 = v2[2];
  if (v5 >= v6) {
    v8 = *v2;
    v9 = v5 - *v2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      GameRoutine_8f6950();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      v8 = *v2;
      v5 = v2[1];
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v9;
    *(_QWORD*)v15 = v3;
    v16 = v14 + 40 * v13;
    v17 = v14 + v9 - (v5 - v8);
    *(_DWORD*)(v15 + 8) = 0;
    *(_QWORD*)(v15 + 16) = 0;
    v7 = v14 + v9 + 40;
    *(_DWORD*)(v15 + 24) = -1;
    *(_DWORD*)(v15 + 32) = -1;
    result = memcpy(v17, v8, v5 - v8);
    *v2 = v17;
    v2[1] = v7;
    v2[2] = v16;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v18);
    }
  }
  else {
    *(_QWORD*)v5 = v3;
    *(_DWORD*)(v5 + 8) = 0;
    v7 = v5 + 40;
    *(_QWORD*)(v5 + 16) = 0;
    *(_DWORD*)(v5 + 24) = -1;
    *(_DWORD*)(v5 + 32) = -1;
  }
  v2[1] = v7;
  **(_QWORD**)(v4 + 16) = v7 - 40;
  return result;
}

__int64 game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit_lambda1_Invoke(
    __int64 result)
{
  ++*(_DWORD*)(**(_QWORD**)(result + 8) + 8LL);
  return result;
}

__int64

game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit_lambda0_Invoke(
    __int64 result, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;

  v2 = *(_QWORD**)(result + 8);
  v3 = *a2;
  v4 = result;
  v5 = v2[4];
  v6 = v2[5];
  if (v5 >= v6) {
    v8 = v2[3];
    v9 = v5 - v8;
    v10 = 1 - 0x3333333333333333LL * ((__int64)(v5 - v8) >> 3);
    if (v10 > 0x666666666666666LL) {
      GameRoutine_8f6950();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      v8 = v2[3];
      v5 = v2[4];
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v9;
    *(_QWORD*)v15 = v3;
    v16 = v14 + 40 * v13;
    v17 = v14 + v9 - (v5 - v8);
    *(_DWORD*)(v15 + 8) = 0;
    *(_QWORD*)(v15 + 16) = 0;
    v7 = v14 + v9 + 40;
    *(_DWORD*)(v15 + 24) = -1;
    *(_DWORD*)(v15 + 32) = -1;
    result = memcpy(v17, v8, v5 - v8);
    v2[3] = v17;
    v2[4] = v7;
    v2[5] = v16;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v18);
    }
  }
  else {
    *(_QWORD*)v5 = v3;
    *(_DWORD*)(v5 + 8) = 0;
    v7 = v5 + 40;
    *(_QWORD*)(v5 + 16) = 0;
    *(_DWORD*)(v5 + 24) = -1;
    *(_DWORD*)(v5 + 32) = -1;
  }
  v2[4] = v7;
  **(_QWORD**)(v4 + 16) = v7 - 40;
  v19 = *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 176) +
                   216LL * **(unsigned __int8**)(v4 + 32) + 336);
  v20 = *(unsigned int*)(v19 + 72);
  if ((int)v20 >= 1) {
    v21 = *(_QWORD*)(v19 + 8);
    v22 = 0;
    v23 = ***(_QWORD***)(v4 + 16);
    v24 = (__int64*)(v21 + 4);
    while (1) {
      if (*(_WORD*)v24 != 0 && v23 != 0) {
        v25 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                         8LL * *(unsigned __int16*)v24);
        if (v25 != 0 &&
            *(unsigned __int8*)(v23 + 72) == *(unsigned __int8*)(v25 + 72)) {
          if (v23 == v25) {
            goto LABEL_40;
          }
          v26 = *(_QWORD*)(v23 + 24);
          v27 = *(_QWORD*)(v26 + 600);
          if (v27 != 0) {
            result = *(_QWORD*)(v27 + 296);
            if (result != 0) {
              result = *(_QWORD*)(*(_QWORD*)(v25 + 24) + 600LL);
              if (result != 0 && v27 == result &&
                  *(_QWORD*)(result + 296) != 0) {
                goto LABEL_40;
              }
            }
          }
          v29 = *(_QWORD*)(v26 + 592);
          if (v29 != 0 && *(_QWORD*)(v29 + 352) != 0) {
            v30 = *(_QWORD*)(*(_QWORD*)(v25 + 24) + 592LL);
            if (v30 != 0) {
              result = *(_QWORD*)(v30 + 352);
              if (v29 == v30 && result != 0) {
              LABEL_40:
                if ((*((_DWORD*)v24 + 1) & 0xF) *
                        *(unsigned __int8*)(v25 + 87) ==
                    0) {
                  v24 = (__int64*)(v21 + 12 * v22 + 4);
                  goto LABEL_45;
                }
                if (*((_BYTE*)v24 + 2) == 0) {
                  goto LABEL_45;
                }
              }
            }
          }
        }
      }
      ++v22;
      --v20;
      v24 = (__int64*)((char*)v24 + 12);
      if (v20 == 0) {
        v24 = game_g_empty_item_ptr;
        goto LABEL_45;
      }
    }
  }
  v24 = game_g_empty_item_ptr;
LABEL_45:
  v32 = *v24;
  v33 = *(_QWORD*)(v4 + 24);
  v34 = (unsigned __int64)*v24 >> 24;
  *(_WORD*)v33 = v32;
  *(_BYTE*)(v33 + 2) = BYTE2(v32);
  *(_BYTE*)(v33 + 3) = v34;
  *(_DWORD*)(v33 + 4) = HIDWORD(v32);
  return result;
}

__int64

game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit_lambda1_Invoke(
    __int64 result, __int64* a2, int* a3)
{
  int v3;
  __int64 v4;
  int v5;
  unsigned __int16* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  int v12;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v19;

  v3 = *a3;
  v4 = *a2;
  v5 = *a3;
  ++*(_DWORD*)(**(_QWORD**)(result + 8) + 8LL);
  if (v4 != 0) {
    v6 = (unsigned __int16*)(v4 + 8LL * v3 + 828);
  }
  else {
    v6 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * v5 + 4);
  }
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v6);
  v8 = *(_QWORD*)(v7 + 24);
  v9 = *(_QWORD*)(v8 + 592);
  if (v9 != 0) {
    if (v9 != v7 && *(_QWORD*)(v9 + 352) != 0) {
      v12 = 0;
      do {
        v9 = *(_QWORD*)(v9 + 352);
        ++v12;
      } while (v9 != 0 && v9 != v7);
      if (v9 != 0) {
        LODWORD(v9) = v12;
      }
      else {
        LODWORD(v9) = 0;
      }
      v11 = *(_QWORD*)(v8 + 600);
      if (v11 == 0) {
        goto LABEL_27;
      }
      goto LABEL_22;
    }
    LODWORD(v9) = 0;
  }
  v11 = *(_QWORD*)(v8 + 600);
  if (v11 == 0) {
  LABEL_27:
    v15 = 0;
    if ((int)v9 >= 255) {
      v16 = 255;
    }
    else {
      v16 = v9;
    }
    goto LABEL_43;
  }
LABEL_22:
  if (v11 == v7 || *(_QWORD*)(v11 + 296) == 0) {
    goto LABEL_27;
  }
  v17 = 0;
  do {
    v11 = *(_QWORD*)(v11 + 296);
    ++v17;
  } while (v11 != 0 && v11 != v7);
  if (v11 != 0) {
    v15 = v17;
  }
  else {
    v15 = 0;
  }
  if ((int)v9 >= 255) {
    v16 = 255;
  }
  else {
    v16 = v9;
  }
  if (v15 >= 0xFF) {
    v15 = 255;
  }
LABEL_43:
  v19 = v15 | (v16 << 8);
  if (v19 <= **(_DWORD**)(result + 16)) {
    *(_QWORD*)(**(_QWORD**)(result + 8) + 16LL) = v4;
    *(_DWORD*)(**(_QWORD**)(result + 8) + 24LL) = v3;
    **(_DWORD**)(result + 16) = v19;
  }
  if (v4 == 0 &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                           game_TransporterConst_List_instance__ptr
                                               [0] +
                                       8LL) +
                            8LL) +
                 12LL * v5 + 4) == **(_QWORD**)(result + 24)) {
    *(_DWORD*)(**(_QWORD**)(result + 8) + 32LL) = v3;
  }
  return result;
}

#pragma GCC visibility pop
