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
__int64 ConvergeConst_8e68e0_alt3(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("ConvergeConst_8e68e0");
_QWORD* game_ConvergeConst_Depository_Clone_lambda1_Invoke(__int64 a1,
                                                           __int64 a2);
_QWORD* game_ConvergeConst_Depository_Clone_lambda2_Invoke(__int64 a1,
                                                           __int64 a2);
_QWORD* game_ConvergeConst_Depository_Merge_lambda2_Invoke_alt1(
    __int64 a1,
    __int64 a2) __asm__("game_ConvergeConst_Depository_Merge_lambda2_Invoke");
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
__int64 game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit_alt1(
    __int64 result,
    unsigned int a2) __asm__("game_ConvergeConst_Part3ItemAdjuster_"
                             "CheckAndAdjustAfterCommit");
__int64
game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit_lambda0_Invoke_alt1(
    __int64 result, __int64* a2) __asm__("game_ConvergeConst_Part3ItemAdjuster_"
                                         "CheckBeforeCommit_lambda0_Invoke");
__int64
game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit_lambda0_Invoke_alt1(
    __int64 result,
    __int64* a2) __asm__("game_ConvergeConst_Part3ItemAdjuster_"
                         "CheckAndAdjustAfterCommit_lambda0_Invoke");
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
char* game_ConvergeConst_Depository_Merge_lambda0_Invoke_alt1(
    char* result,
    __int64 a2) __asm__("game_ConvergeConst_Depository_Merge_lambda0_Invoke");
__int64 game_ConvergeConst_Depository_Merge_lambda1_Invoke(__int64 result,
                                                           unsigned __int8* a2);
_QWORD* game_8f7120(float*, __int64*, __int64*);
__attribute__((swiftcall)) void
RidePool_93c6a0(PSEUDO_X8, __int64, unsigned __int8*, __int64, char);
__attribute__((swiftcall)) void RidePool_93e420(PSEUDO_X8, __int64 result,
                                                unsigned int, __int64);
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_8e7080_alt1(__int64,
                                unsigned int) __asm__("GameRoutine_8e7080");
__int64 RidePool_93cd60_alt1(_QWORD*, __int64) __asm__("RidePool_93cd60");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_UnitItemList_Sort_alt1(__int64, unsigned int,
                                    int) __asm__("game_UnitItemList_Sort");
__int64
game_Unit_EquipFirstWeapon_alt1(__int64) __asm__("game_Unit_EquipFirstWeapon");
void GameRoutine_89b900_alt1(__int64) __asm__("GameRoutine_89b900");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit(
    __int64* a1, unsigned int a2);
void game_ConvergeConst_Depository_Merge_lambda2_Invoke(__int64 a1,
                                                        unsigned __int8* a2);
__attribute__((swiftcall)) void game_UnitUtil_UniqueMap_Commit_89abc0_alt1(
    PSEUDO_X8, __int64, unsigned __int16*,
    int) __asm__("game_UnitUtil_UniqueMap_Commit_89abc0");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
void GameRoutine_89d1e0_alt1(__int64) __asm__("GameRoutine_89d1e0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 ConvergeConst_8e68e0(unsigned __int8 a1, __int64 a2, __int64 a3);
void game_ConvergeConst_Depository_Merge_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_8f6950_alt1() __asm__("GameRoutine_8f6950");
void game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit_lambda0_Invoke(
    __int64 a1, __int64* a2);
void game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit_lambda0_Invoke(
    __int64 a1, __int64* a2);
__int64 GameHr_6c2b50(__int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_1fac720[])();
extern __int64 (*GameData_1fac770[])();
extern __int64 (*game_ConvergeConst_CompData_vtable[])();
void GameRoutine_8301a0(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_8ed650();
__int64 ConvergeConst_8e61e0(__int64 a1, __int64 a2);

__int64 ConvergeConst_8e61e0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64* v2;
  unsigned __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  unsigned __int64* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  _QWORD* v38;
  float v39;
  float v40;
  _BOOL8 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 primeEm;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64* v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(unsigned __int64**)(a2 + 392);
  if (v2 == nullptr) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 40);
  if (v4 == 0 || *(_QWORD*)(a1 + 56) == 0) {
    goto LABEL_29;
  }
  v7 = *v2;
  v8 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v9 = v7;
    if (v7 >= v4) {
      v9 = v7 % v4;
    }
  }
  else {
    v9 = v8 & v7;
  }
  v11 = *(__int64***)(*(_QWORD*)(a1 + 32) + 8 * v9);
  if (v11 == nullptr || (v12 = *v11) == nullptr) {
  LABEL_29:
    v16 = (__int64*)fw_memory_g_heap_manager_ptr;
    v15 = (*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) >> 4;
    v17 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    *(_QWORD*)(v17 + 16) = 0;
    *(_QWORD*)v17 = GameData_1fac770;
    v18 = *v16;
    *(_QWORD*)(v17 + 8) = 0;
    *(_QWORD*)(v17 + 24) = game_ConvergeConst_CompData_vtable;
    v19 = v17 + 24;
    v20 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v18, 2256, 16, 0);
    v21 = v20 + 4;
    v22 = v20;
    v20[1] = 0;
    v20[2] = 0;
    *v20 = GameData_1fac720;
    GameHr_6c2b50((__int64)(v20 + 4));
    v23 = *v16;
    *(_QWORD*)(v17 + 32) = v21;
    *(_QWORD*)(v17 + 40) = v22;
    v24 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v23, 2256, 16, 0);
    v25 = v24 + 4;
    v26 = (unsigned __int64)v24;
    v24[1] = 0;
    v24[2] = 0;
    *v24 = GameData_1fac720;
    GameHr_6c2b50((__int64)(v24 + 4));
    v27 = *(unsigned __int64**)(a2 + 392);
    *(_QWORD*)(v17 + 48) = v25;
    *(_QWORD*)(v17 + 56) = v26;
    v28 = *(_QWORD*)(a1 + 40);
    v29 = *v27;
    if (v28 != 0) {
      v30 = v28 - 1;
      if ((v28 & (v28 - 1)) != 0) {
        v26 = *v27;
        if (v29 >= v28) {
          v26 = v29 % v28;
        }
      }
      else {
        v26 = v30 & v29;
      }
      v31 = *(_QWORD**)(*(_QWORD*)(a1 + 32) + 8 * v26);
      if (v31 != nullptr) {
        v32 = (_QWORD*)*v31;
        if (v32 != nullptr) {
          if ((v28 & v30) == 0) {
            while (1) {
              v34 = v32[1];
              if (v34 == v29) {
                if (v32[2] == v29) {
                  goto LABEL_87;
                }
              }
              else if ((v34 & v30) != v26) {
                goto LABEL_50;
              }
              v32 = (_QWORD*)*v32;
              if (v32 == nullptr) {
                goto LABEL_50;
              }
            }
          }
          do {
            v33 = v32[1];
            if (v33 == v29) {
              if (v32[2] == v29) {
                goto LABEL_87;
              }
            }
            else {
              if (v33 >= v28) {
                v33 %= v28;
              }
              if (v33 != v26) {
                break;
              }
            }
            v32 = (_QWORD*)*v32;
          } while (v32 != nullptr);
        }
      }
    }
  LABEL_50:
    v35 = fw_memory_HeapManager_Allocate_alt1(*v16, 32, 16, 0);
    v36 = *(_QWORD*)(a1 + 56);
    v37 = *(float*)(a1 + 64);
    v38 = (_QWORD*)v35;
    *(_QWORD*)(v35 + 8) = v29;
    *(_QWORD*)(v35 + 16) = v29;
    *(_DWORD*)(v35 + 24) = v15;
    v39 = (float)(unsigned __int64)(v36 + 1);
    if (v28 == 0 || (float)(v37 * (float)v28) < v39) {
      v40 = v39 / v37;
      v41 = true;
      if (v28 >= 3) {
        v41 = (v28 & (v28 - 1)) != 0;
      }
      v42 = v41 | (2 * v28);
      v43 = vcvtps_u64_f32(v40);
      if (v42 <= v43) {
        v44 = v43;
      }
      else {
        v44 = v42;
      }
      if (v44 == 1) {
        v44 = 2;
      }
      else if ((v44 & (v44 - 1)) != 0) {
        primeEm = std___1___next_prime(v44);
        v28 = *(_QWORD*)(a1 + 40);
        v44 = primeEm;
      }
      if (v44 > v28) {
        goto LABEL_62;
      }
      if (v44 < v28) {
        v46 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 56) /
                             *(float*)(a1 + 64));
        if (v28 < 3 || (v28 & (v28 - 1)) != 0) {
          v46 = std___1___next_prime(v46);
        }
        else {
          v47 = 1LL << -(char)__clz(v46 - 1);
          if (v46 >= 2) {
            v46 = v47;
          }
        }
        if (v44 <= v46) {
          v44 = v46;
        }
        if (v44 < v28) {
        LABEL_62:
          GameRoutine_8301a0((__int64*)(a1 + 32), v44);
        }
      }
      v28 = *(_QWORD*)(a1 + 40);
      if ((v28 & (v28 - 1)) != 0) {
        if (v29 >= v28) {
          v26 = v29 % v28;
        }
        else {
          v26 = v29;
        }
      }
      else {
        v26 = (v28 - 1) & v29;
      }
    }
    v48 = *(_QWORD*)(a1 + 32);
    v49 = *(_QWORD**)(v48 + 8 * v26);
    if (v49 != nullptr) {
      *v38 = *v49;
      *v49 = v38;
    }
    else {
      v50 = *(_QWORD*)(a1 + 48);
      *(_QWORD*)(a1 + 48) = v38;
      *v38 = v50;
      *(_QWORD*)(v48 + 8 * v26) = a1 + 48;
      if (v50 != 0) {
        v51 = *(_QWORD*)(v50 + 8);
        if ((v28 & (v28 - 1)) != 0) {
          if (v51 >= v28) {
            v51 %= v28;
          }
        }
        else {
          v51 &= v28 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v51) = v38;
      }
    }
    ++*(_QWORD*)(a1 + 56);
  LABEL_87:
    v52 = *(__int64**)(a1 + 16);
    v53 = *(_QWORD*)(a1 + 24);
    if ((unsigned __int64)v52 >= v53) {
      v55 = *(_QWORD*)(a1 + 8);
      v56 = (unsigned __int64)v52 - v55;
      v57 = ((__int64)v52 - v55) >> 4;
      v58 = v57 + 1;
      if ((unsigned __int64)(v57 + 1) >> 60 != 0) {
        GameRoutine_8ed650();
      }
      v59 = v53 - v55;
      if (v59 >> 3 > v58) {
        v58 = v59 >> 3;
      }
      if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFF0LL) {
        v60 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v60 = v58;
      }
      if (v60 >> 60 != 0) {
        GameRoutine_60a210_alt1();
      }
      v61 = fw_memory_HeapManager_Allocate_alt1(*v16, 16 * v60, 16, 0);
      v62 = (__int64*)(v61 + v56);
      v63 = v61 + 16 * v60;
      *v62 = v19;
      v62[1] = v17;
      v64 = v61 + v56 - 16 * v57;
      v54 = v61 + v56 + 16;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
      memcpy_alt1(v64, v55, v56);
      *(_QWORD*)(a1 + 8) = v64;
      *(_QWORD*)(a1 + 16) = v54;
      *(_QWORD*)(a1 + 24) = v63;
      if (v55 != 0) {
        v65 = 128;
        if (*(_QWORD*)(*v16 + 200) == 0) {
          v65 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v16 + v65, v55);
      }
    }
    else {
      *v52 = v19;
      v52[1] = v17;
      v54 = (__int64)(v52 + 2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
    }
    *(_QWORD*)(a1 + 16) = v54;
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v17);
    }
    return *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL * (int)v15);
  }
  if ((v4 & v8) == 0) {
    while (1) {
      v14 = v12[1];
      if (v7 == v14) {
        if (v12[2] == v7) {
          goto LABEL_28;
        }
      }
      else if ((v14 & v8) != v9) {
        goto LABEL_29;
      }
      v12 = (__int64*)*v12;
      if (v12 == nullptr) {
        goto LABEL_29;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v7 == v13) {
      break;
    }
    if (v13 >= v4) {
      v13 %= v4;
    }
    if (v13 != v9) {
      goto LABEL_29;
    }
  LABEL_17:
    v12 = (__int64*)*v12;
    if (v12 == nullptr) {
      goto LABEL_29;
    }
  }
  if (v12[2] != v7) {
    goto LABEL_17;
  }
LABEL_28:
  LODWORD(v15) = *((_DWORD*)v12 + 6);
  if ((v15 & 0x80000000) != 0) {
    goto LABEL_29;
  }
  return *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL * (int)v15);
}

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

__int64 ConvergeConst_8e68e0(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned __int16* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  __int64 v30;
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
  __int64 v43;
  bool v44;
  __int64 v45;
  __int64 v46;
  bool v47;
  __int64 v49;
  int v50;
  __int64 v51;

  result = game_GetHero_alt1(a1);
  if (result != 0 && GameData_21c9c50 != 0) {
    v5 = *(__int64**)(GameData_21c9c50 + 64);
    v6 = *(__int64**)(GameData_21c9c50 + 72);
    if (v5 != v6) {
      while (1) {
        v8 = *v5++;
        v7 = v8;
        if (*(_QWORD*)(v8 + 40) == result) {
          break;
        }
        if (v5 == v6) {
          return result;
        }
      }
      v49 = *(unsigned __int16*)(v7 + 48);
      if (*(_WORD*)(v7 + 48) != 0) {
        v9 = 0;
        v10 = GameData_212c878[0];
        do {
          v11 = *(_QWORD*)(*(_QWORD*)(v7 + 56) + 16 * v9 + 8);
          if (v11 != 0 && (*(_BYTE*)(v11 + 337) & 0x40) != 0) {
            v51 = *(_QWORD*)(*(_QWORD*)(v7 + 56) + 16 * v9 + 8);
            v12 = *(_QWORD*)(a2 + 32);
            if (v12 == 0) {
            LABEL_83:
              GameRoutine_60a310_alt1();
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v12 + 48LL))(v12, &v51);
            LODWORD(v51) = 17;
            result = game_UnitPool_GetFirst_alt1((int*)&v51);
            if (result != 0) {
              v13 = *(_QWORD*)(result + 432);
              v14 = result;
              if (v13 == 0) {
                v13 = *(_QWORD*)(result + 440);
                if (v13 != 0) {
                  v15 = *(unsigned __int8*)(v13 + 16);
                  if (v15 <= 8) {
                    v16 = v15 - 3;
                    while (1) {
                      if (v16 == 0) {
                        v13 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                         556096LL);
                        if (v13 != 0) {
                          break;
                        }
                      }
                      if (++v16 == 6) {
                        goto LABEL_17;
                      }
                    }
                  }
                  else {
                  LABEL_17:
                    v13 = 0;
                  }
                }
              }
              while (1) {
                v17 = (unsigned __int16*)(v14 + 828);
                v18 = 0;
                v19 = v13;
                do {
                  v21 = *v17;
                  v17 += 4;
                  v20 = v21;
                  if (v21 != 0) {
                    v22 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8 * v20);
                    if (v22 != 0 && *(unsigned __int8*)(v11 + 72) ==
                                        *(unsigned __int8*)(v22 + 72)) {
                      if (v11 == v22 ||
                          (v23 = *(_QWORD*)(v11 + 24),
                           (v24 = *(_QWORD*)(v23 + 600)) != 0) &&
                              *(_QWORD*)(v24 + 296) != 0 &&
                              (v25 = *(_QWORD*)(*(_QWORD*)(v22 + 24) +
                                                600LL)) != 0 &&
                              (v24 == v25 ? (v26 = *(_QWORD*)(v25 + 296) == 0)
                                          : (v26 = true),
                               !v26) ||
                          (v27 = *(_QWORD*)(v23 + 592)) != 0 &&
                              *(_QWORD*)(v27 + 352) != 0 &&
                              (v28 = *(_QWORD*)(*(_QWORD*)(v22 + 24) +
                                                592LL)) != 0 &&
                              (v27 == v28 ? (v29 = *(_QWORD*)(v28 + 352) == 0)
                                          : (v29 = true),
                               !v29)) {
                        v30 = *(_QWORD*)(a3 + 32);
                        v51 = v14;
                        v50 = v18;
                        if (v30 == 0) {
                          goto LABEL_83;
                        }
                        result = (*(__int64 (**)(__int64, __int64*, int*))(
                            *(_QWORD*)v30 + 48LL))(v30, &v51, &v50);
                      }
                    }
                  }
                  ++v18;
                } while (v18 != 6);
                if (v19 == 0) {
                  break;
                }
                v13 = *(_QWORD*)(v19 + 432);
                v14 = v19;
                if (v13 == 0) {
                  v31 = *(_QWORD*)(v19 + 440);
                  v14 = v19;
                  if (v31 != 0) {
                    v32 = *(unsigned __int8*)(v31 + 16);
                    v13 = 0;
                    v14 = v19;
                    if (v32 <= 8) {
                      v33 = v32 - 3;
                      while (1) {
                        if (v33 == 0) {
                          v13 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                           556096LL);
                          if (v13 != 0) {
                            break;
                          }
                        }
                        if (++v33 == 6) {
                          v13 = 0;
                          break;
                        }
                      }
                      v14 = v19;
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
                v39 = *(unsigned __int16*)(*(_QWORD*)(v35 + 8) + v36);
                if (v39 != 0) {
                  v40 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8 * v39);
                  if (v40 != 0 && *(unsigned __int8*)(v11 + 72) ==
                                      *(unsigned __int8*)(v40 + 72)) {
                    if (v11 == v40 ||
                        (v41 = *(_QWORD*)(v11 + 24),
                         (v42 = *(_QWORD*)(v41 + 600)) != 0) &&
                            *(_QWORD*)(v42 + 296) != 0 &&
                            (v43 = *(_QWORD*)(*(_QWORD*)(v40 + 24) + 600LL)) !=
                                0 &&
                            (v42 == v43 ? (v44 = *(_QWORD*)(v43 + 296) == 0)
                                        : (v44 = true),
                             !v44) ||
                        (v45 = *(_QWORD*)(v41 + 592)) != 0 &&
                            *(_QWORD*)(v45 + 352) != 0 &&
                            (v46 = *(_QWORD*)(*(_QWORD*)(v40 + 24) + 592LL)) !=
                                0 &&
                            (v45 == v46 ? (v47 = *(_QWORD*)(v46 + 352) == 0)
                                        : (v47 = true),
                             !v47)) {
                      v38 = *(_QWORD*)(a3 + 32);
                      v51 = 0;
                      v50 = v37;
                      if (v38 == 0) {
                        goto LABEL_83;
                      }
                      result = (*(__int64 (**)(__int64, __int64*, int*))(
                          *(_QWORD*)v38 + 48LL))(v38, &v51, &v50);
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
          ++v9;
        } while (v9 != v49);
      }
    }
  }
  return result;
}

void game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit(
    __int64* a1, unsigned int a2)
{

#pragma clang fp contract(off)
  int v2;
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
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  char v27;
  char v28;
  int v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    _QWORD v35[4];
    _QWORD* v36;
  } v35_;
  struct {
    _QWORD v37[2];
    _QWORD* v38;
    __int64 v39;
    _QWORD* v40;
  } v37_;
  int v41;
  __int64 v42;
  __int64 v43;
  char v44;

  v2 = *((unsigned __int8*)a1 + 48);
  v44 = a2;
  if (v2 == 0) {
    return;
  }
  v43 = 0;
  v5 = game_g_empty_item_ptr;
  v42 = *game_g_empty_item_ptr;
  v41 = -1;
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v37_.v40 = v7;
  *v7 = GameData_1fac8d0;
  v7[1] = a1;
  v7[2] = &v43;
  v7[3] = &v42;
  v35_.v36 = v35_.v35;
  v7[4] = &v44;
  v35_.v35[0] = GameData_1fac950;
  v35_.v35[1] = &v43;
  v35_.v35[2] = &v41;
  v35_.v35[3] = &v42;
  ConvergeConst_8e68e0_alt3(a2, (__int64)v37_.v37, (__int64)v35_.v35);
  if (v35_.v36 == v35_.v35) {
    v8 = 32;
    goto LABEL_6;
  }
  if (v35_.v36 != nullptr) {
    v8 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v35_.v36 + v8))((__int64)v35_.v36);
  }
  (*(void (**)(_QWORD*))(*v7 + 40LL))(v7);
  v37_.v38 = nullptr;
  v37_.v39 = 0;
  v37_.v37[0] = 0;
  v37_.v37[1] = 0;
  LODWORD(v37_.v40) = 1065353216;
  v9 = *a1;
  if (a1[1] == *a1) {
    goto LABEL_42;
  }
  v10 = 0;
  v11 = 0;
  v12 = game_TransporterConst_List_instance__ptr[0];
  do {
    v13 = a1[3];
    v14 = v13 + v10;
    if ((signed __int32)*(_DWORD*)(v9 + v10 + 8) <
        (signed __int32)*(_DWORD*)(v13 + v10 + 8)) {
      v15 = *(unsigned int*)(v14 + 24);
      if ((v15 & 0x80000000) == 0) {
        v16 = *(_QWORD*)(v14 + 16);
        v17 = *(_DWORD*)(v13 + v10 + 32);
        if (v16 != 0) {
          if ((v17 & 0x80000000) == 0) {
            goto LABEL_9;
          }
          *(_QWORD*)(v16 + 8 * v15 + 828) = *v5;
          game_8f7120((float*)v37_.v37, (__int64*)(v14 + 16),
                      (__int64*)(v14 + 16));
        }
        else {
          if ((v17 & 0x80000000) == 0 && (_DWORD)v15 != v17) {
          LABEL_9:
            GameRoutine_8e7080_alt1(v14 + 16, v17);
            goto LABEL_10;
          }
          v18 = *(_QWORD*)(*(_QWORD*)v12 + 8LL);
          v19 = *(_QWORD*)(v18 + 8) + 12LL * (unsigned int)v15;
          if (*(_WORD*)(v19 + 4) != 0) {
            v20 = *(unsigned __int16*)(v19 + 2);
            v21 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                             8LL * *(unsigned __int16*)(v19 + 4));
            if ((((0x10000000000LL << *(_BYTE*)(v21 + 72)) |
                  (1LL << *(_BYTE*)(v21 + 73))) &
                 0xFFBFFFFFFFA39FFFLL) != 0) {
              v22 = 1;
            }
            else {
              v22 = 999;
            }
            if (v22 >= v20 - 1) {
              LOWORD(v22) = v20 - 1;
            }
            if (*(_WORD*)(v19 + 2) == 0) {
              LOWORD(v22) = 0;
            }
            *(_WORD*)(v19 + 2) = v22;
            if ((_WORD)v22 == 0) {
              v23 = *(_QWORD*)(v18 + 8) + 12LL * (unsigned int)v15;
              v24 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * *(unsigned __int16*)(v23 + 4));
              if ((((0x10000000000LL << *(_BYTE*)(v24 + 72)) |
                    (1LL << *(_BYTE*)(v24 + 73))) &
                   0xFFBFFFFFFFA39FFFLL) != 0) {
                *(_QWORD*)(v23 + 4) = 0;
              }
              *(_WORD*)(v23 + 2) = 0;
              GameRoutine_89b900_alt1(v18);
            }
          }
        }
      }
    }
  LABEL_10:
    v9 = *a1;
    ++v11;
    v10 += 40;
  } while (0xCCCCCCCCCCCCCCCDLL * ((a1[1] - *a1) >> 3) > v11);
  v25 = v37_.v38;
  if (v37_.v38 != nullptr) {
    do {
      v26 = v25[2];
      v27 = game_UnitItemList_Sort_alt1(v26 + 828, 0, 6);
      v28 = game_UnitItemList_Sort_alt1(v26 + 828, 6u, 24);
      if ((v27 & 1) != 0 || (v28 & 1) != 0) {
        v29 = *(_DWORD*)(v26 + 416);
        if ((v29 & 0x10000000) == 0) {
          *(_DWORD*)(v26 + 416) = v29 | 0x10000000;
          game_6c51e0(v26);
          GameRoutine_6c6da0_alt1(v26);
          game_6c6ec0(v26);
          *(_DWORD*)(v26 + 416) &= ~0x10000000u;
        }
      }
      game_Unit_EquipFirstWeapon_alt1(v26);
      v25 = (_QWORD*)*v25;
    } while (v25 != nullptr);
    v30 = v37_.v38;
    if (v37_.v38 != nullptr) {
      do {
        v31 = (_QWORD*)*v30;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v32 = 128;
        }
        else {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v32, (__int64)v30);
        v30 = v31;
      } while (v31 != nullptr);
    }
  }
LABEL_42:
  v33 = v37_.v37[0];
  v37_.v37[0] = 0;
  if (v33 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v34, v33);
  }
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

void game_ConvergeConst_Depository_Merge_lambda0_Invoke(__int64 a1, __int64 a2)
{
  unsigned __int16* v2;
  __int64 v3;
  unsigned int v4;
  unsigned __int16* v5;
  _QWORD* v6;
  int v7;
  struct {
    _BYTE v8[4];
    int v9;
  } v8_;

  v4 = *(unsigned __int16*)(a2 + 4);
  v2 = (unsigned __int16*)(a2 + 4);
  v3 = v4;
  if (v4 != 0 &&
      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v3) +
                 336LL) &
       0x34) == 0) {
    v5 = v2;
    v6 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 8LL);
    v7 = GameRoutine_89aac0(v6, v2);
    if (v7 == -1 || *(_WORD*)(v6[1] + 12LL * v7 + 2) == 0) {
      game_UnitUtil_UniqueMap_Commit_89abc0_alt1((void*)((__int64)v8_.v8),
                                                 (__int64)v6, v5, 1);
      if ((v8_.v9 & 0x80000000) == 0) {
        GameRoutine_89d1e0_alt1((__int64)v6);
      }
    }
  }
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

void game_ConvergeConst_Depository_Merge_lambda2_Invoke(__int64 a1,
                                                        unsigned __int8* a2)
{
  _QWORD* v3;
  unsigned int v4;
  char v5;
  _BYTE v6[8];

  v3 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 24LL);
  v4 = RidePool_93cd60_alt1(v3, (__int64)a2);
  if ((v4 & 0x80000000) != 0) {
    RidePool_93c6a0((void*)((__int64)v6), (__int64)v3, a2, 0, 1);
  }
  else {
    RidePool_93e420((void*)(&v5), (__int64)v3, v4, (__int64)a2);
  }
}

void game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64* v2;
  __int64 v3;
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

  v2 = *(__int64**)(a1 + 8);
  v3 = *a2;
  v5 = v2[1];
  v6 = v2[2];
  if (v5 >= v6) {
    v8 = *v2;
    v9 = v5 - *v2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      GameRoutine_8f6950_alt1();
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
        GameRoutine_60a210_alt1();
      }
      v14 = fw_memory_HeapManager_Allocate_alt1(
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
    memcpy_alt1(v17, v8, v5 - v8);
    *v2 = v17;
    v2[1] = v7;
    v2[2] = v16;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v18, v8);
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
  **(_QWORD**)(a1 + 16) = v7 - 40;
}

__int64 game_ConvergeConst_Part3ItemAdjuster_CheckBeforeCommit_lambda1_Invoke(
    __int64 result)
{
  ++*(_DWORD*)(**(_QWORD**)(result + 8) + 8LL);
  return result;
}

void game_ConvergeConst_Part3ItemAdjuster_CheckAndAdjustAfterCommit_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
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
  __int64 v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  bool v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = *a2;
  v5 = v2[4];
  v6 = v2[5];
  if (v5 >= v6) {
    v8 = v2[3];
    v9 = v5 - v8;
    v10 = 1 - 0x3333333333333333LL * ((__int64)(v5 - v8) >> 3);
    if (v10 > 0x666666666666666LL) {
      GameRoutine_8f6950_alt1();
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
        GameRoutine_60a210_alt1();
      }
      v14 = fw_memory_HeapManager_Allocate_alt1(
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
    memcpy_alt1(v17, v8, v5 - v8);
    v2[3] = v17;
    v2[4] = v7;
    v2[5] = v16;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v18, v8);
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
  **(_QWORD**)(a1 + 16) = v7 - 40;
  v19 = *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 176) +
                   216LL * **(unsigned __int8**)(a1 + 32) + 336);
  v20 = *(unsigned int*)(v19 + 72);
  if ((int)v20 >= 1) {
    v21 = *(_QWORD*)(v19 + 8);
    v22 = 0;
    v23 = ***(_QWORD***)(a1 + 16);
    v24 = (__int64*)(v21 + 4);
    while (1) {
      if (*(_WORD*)v24 != 0 && v23 != 0) {
        v25 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                         8LL * *(unsigned __int16*)v24);
        if (v25 != 0 &&
            *(unsigned __int8*)(v23 + 72) == *(unsigned __int8*)(v25 + 72)) {
          if (v23 == v25 ||
              (v26 = *(_QWORD*)(v23 + 24),
               (v27 = *(_QWORD*)(v26 + 600)) != 0) &&
                  *(_QWORD*)(v27 + 296) != 0 &&
                  (v28 = *(_QWORD*)(*(_QWORD*)(v25 + 24) + 600LL)) != 0 &&
                  (v27 == v28 ? (v29 = *(_QWORD*)(v28 + 296) == 0)
                              : (v29 = true),
                   !v29) ||
              (v30 = *(_QWORD*)(v26 + 592)) != 0 &&
                  *(_QWORD*)(v30 + 352) != 0 &&
                  (v31 = *(_QWORD*)(*(_QWORD*)(v25 + 24) + 592LL)) != 0 &&
                  (v30 == v31 ? (v32 = *(_QWORD*)(v31 + 352) == 0)
                              : (v32 = true),
                   !v32)) {
            if ((*((_DWORD*)v24 + 1) & 0xF) * *(unsigned __int8*)(v25 + 87) ==
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
  v33 = *v24;
  v34 = *(_QWORD*)(a1 + 24);
  v35 = (unsigned __int64)*v24 >> 24;
  *(_WORD*)v34 = v33;
  *(_BYTE*)(v34 + 2) = BYTE2(v33);
  *(_BYTE*)(v34 + 3) = v35;
  *(_DWORD*)(v34 + 4) = HIDWORD(v33);
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
