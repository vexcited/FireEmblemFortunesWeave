#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_6fcb20(_QWORD, _QWORD);
__int64 Unit_6cc580(_QWORD, _QWORD, _QWORD);
__int64 Unit_6cc9e0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6881c0(void);
__int64
game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn_closure_Invoke(
    __int64 result, __int64* a2);
__int64 ProcCmdBtlSeqBattleGrow_Destructor(__int64 a1);
_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
__int64 CmdBtlSkipInput_1007060(__int64);
__int64 Manager_e9bcb0(__int64, __int64, unsigned int, __int64*);
__int64 UnitSkillList_84d980(__int64*, unsigned int*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_67ef00(__int64 result, __int64, __int64);
__int64 game_Unit_Unknown6c4610(__int64);
__int64 game_telop_TelopSkillLearnIndividually_CreateBind(__int64,
                                                          __int64 (**)(),
                                                          __int64**, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
char** GameRoutine_7fb7c0(char** result, __int64, __int64, unsigned __int64);
extern __int64 (*GameData_1fec818[])();
extern __int64 (*GameData_1ff9390[])();
extern __int64* GameData_212ea58;
extern __int64 GameData_22190c0;
void __attribute__((noreturn))
GameRoutine_6881c0_alt1() __asm__("GameRoutine_6881c0");
void __attribute__((noreturn)) GameRoutine_6e3e20();
__int64 game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn(__int64* a1);
_QWORD* ProcCmdBtlSeqBattleGrow_fa5db0(_QWORD* result);

__int64 game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn(__int64* a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  unsigned int* v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int* v31;
  __int64 v32;
  int v33;
  char v34;
  __int64 v35;
  char v36;
  int v37;
  int v38;
  __int64 v39;
  char v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  struct {
    _QWORD v52[4];
    _QWORD* v53;
  } v52_;
  struct {
    char* v54;
    char* v55;
    __int64 v56;
    int v57;
    char gap76_[4];
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
  } v54_;

  result = game_Unit_Unknown6c4610(a1[23]);
  v3 = result;
  v54_.v54 = nullptr;
  v54_.v55 = nullptr;
  v54_.v56 = 0;
  v54_.v57 = 0;
  if (&v54_.v54 != (char**)result) {
    result = (__int64)GameRoutine_7fb7c0(
        &v54_.v54, *(_QWORD*)result, *(_QWORD*)(result + 8),
        (__int64)(*(_QWORD*)(result + 8) - *(_QWORD*)result) >> 2);
  }
  v4 = *(_DWORD*)(v3 + 24);
  v54_.v59 = 0;
  v54_.v60 = 0;
  v54_.v58 = 0;
  v54_.v57 = v4;
  v6 = *(_QWORD*)(v3 + 32);
  v5 = *(_QWORD*)(v3 + 40);
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = v5 - v6;
  if (v5 != v6) {
    if (v8 < 0) {
      goto LABEL_45;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5 - v6, 16, 0);
    v10 = v9 + v8;
    v54_.v58 = v9;
    v54_.v59 = v9;
    v54_.v60 = v9 + v8;
    result = memcpy(v9, v6, v8);
    v54_.v59 = v10;
  }
  v54_.v62 = 0;
  v54_.v63 = 0;
  v54_.v61 = 0;
  v12 = *(_QWORD*)(v3 + 56);
  v11 = *(_QWORD*)(v3 + 64);
  v13 = v11 - v12;
  if (v11 != v12) {
    if (v13 < 0) {
    LABEL_45:
      GameRoutine_6e3e20();
    }
    v14 = fw_memory_HeapManager_Allocate_alt1(*v7, v11 - v12, 16, 0);
    v15 = v14 + v13;
    v54_.v61 = v14;
    v54_.v62 = v14;
    v54_.v63 = v14 + v13;
    result = memcpy(v14, v12, v13);
    v54_.v62 = v15;
  }
  v16 = *(_QWORD*)(v3 + 80);
  v17 = *(_QWORD*)(v3 + 88);
  v18 = (unsigned int*)a1[40];
  v19 = (unsigned int*)a1[41];
  v54_.v64 = v16;
  v54_.v65 = v17;
  if (v18 == v19) {
    v21 = v54_.v58;
    v22 = v54_.v59;
  }
  else {
    v20 = 0;
    do {
      result = UnitSkillList_84d980((__int64*)&v54_.v54, v18++);
      v20 |= result;
    } while (v18 != v19);
    v21 = v54_.v58;
    v22 = v54_.v59;
    if ((v20 & 1) != 0) {
      v54_.v64 = 0;
      v54_.v65 = 0;
      if ((int)((unsigned __int64)(v54_.v59 - v54_.v58) >> 2) >= 1) {
        v23 = (int)((v54_.v59 - v54_.v58) >> 2);
        v24 = v23 <= 1 ? 1LL : (int)((v54_.v59 - v54_.v58) >> 2);
        v25 = *GameData_212c880[0];
        if (v23 >= 2) {
          v31 = (int*)(v54_.v58 + 4);
          v26 = 0;
          v27 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 0;
          do {
            v30 += 2;
            v32 = *(_QWORD*)(*(_QWORD*)(v25 + 64) + 8LL * (*(v31 - 1) & 0xFFF));
            v33 = v29 | (1 << *(_BYTE*)(v32 + 104));
            v34 = *(_BYTE*)(v32 + 250);
            LOWORD(v54_.v64) = v33;
            v35 = (1LL << v34) | v28;
            v36 = *(_BYTE*)(v32 + 115);
            v54_.v65 = v35;
            HIDWORD(v54_.v64) = (1 << v36) | v27;
            v37 = *(unsigned __int16*)(*(_QWORD*)(v32 + 24) + 1064LL) | v26;
            WORD1(v54_.v64) = v37;
            v38 = *v31;
            v31 += 2;
            v39 = *(_QWORD*)(*(_QWORD*)(v25 + 64) + 8LL * (v38 & 0xFFF));
            v29 = v33 | (1 << *(_BYTE*)(v39 + 104));
            v40 = *(_BYTE*)(v39 + 250);
            LOWORD(v54_.v64) = v29;
            v28 = (1LL << v40) | v35;
            v41 = *(_BYTE*)(v39 + 115);
            v54_.v65 = v28;
            result = (unsigned int)(1 << v41);
            v27 = result | HIDWORD(v54_.v64);
            HIDWORD(v54_.v64) |= result;
            v26 = *(unsigned __int16*)(*(_QWORD*)(v39 + 24) + 1064LL) | v37;
            WORD1(v54_.v64) = v26;
          } while ((v24 & 0x7FFFFFFFFFFFFFFELL) != v30);
        }
        else {
          LOWORD(v26) = 0;
          v27 = 0;
          v28 = 0;
          LOWORD(v29) = 0;
          v30 = 0;
        }
        if ((v24 & 1) != 0) {
          v42 = *(_QWORD*)(*(_QWORD*)(v25 + 64) +
                           8LL * (*(_DWORD*)(v54_.v58 + 4 * v30) & 0xFFF));
          LOWORD(v54_.v64) = v29 | (1 << *(_BYTE*)(v42 + 104));
          v54_.v65 = (1LL << *(_BYTE*)(v42 + 250)) | v28;
          HIDWORD(v54_.v64) = (1 << *(_BYTE*)(v42 + 115)) | v27;
          WORD1(v54_.v64) = *(_WORD*)(*(_QWORD*)(v42 + 24) + 1064LL) | v26;
        }
      }
    }
  }
  for (; v21 != v22; v21 += 4) {
    v44 = a1[23];
    v52_.v52[0] = GameData_1ff9390;
    v52_.v52[1] = v21;
    v52_.v52[2] = a1;
    v45 = *(_QWORD*)(v44 + 392);
    v52_.v53 = v52_.v52;
    game_67ef00(v45, v44, (__int64)v52_.v52);
    result = (__int64)v52_.v53;
    if (v52_.v53 == v52_.v52) {
      v43 = 32;
    }
    else {
      if (v52_.v53 == nullptr) {
        continue;
      }
      v43 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v52_.v53 + v43))((__int64)v52_.v53);
  }
  if (v54_.v61 != 0) {
    v46 = *v7;
    v54_.v62 = v54_.v61;
    v47 = 128;
    if (*(_QWORD*)(v46 + 200) == 0) {
      v47 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v46 + v47);
  }
  if (v54_.v58 != 0) {
    v48 = *v7;
    v54_.v59 = v54_.v58;
    v49 = 128;
    if (*(_QWORD*)(v48 + 200) == 0) {
      v49 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v48 + v49);
  }
  if (v54_.v54 != nullptr) {
    v50 = *v7;
    v54_.v55 = v54_.v54;
    v51 = 128;
    if (*(_QWORD*)(v50 + 200) == 0) {
      v51 = 56;
    }
    return nn_mem_StandardAllocator_Free(v50 + v51);
  }
  return result;
}

_QWORD* ProcCmdBtlSeqBattleGrow_fa5db0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 (**v5)();
  __int64* v6;
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64* v19;
    __int64* v20;
    char* v21;
  } v19_;
  struct {
    __int64 (**v22)();
    __int64 v23;
  } v22_;
  struct {
    __int64 (**v24)();
    __int64* v25;
    __int64 (***v26)();
    char gap72_[8];
    __int64* v27;
  } v24_;
  __int64 v28;

  if ((*(_BYTE*)(result[24] + 90LL) & 4) == 0) {
    v19_.v19 = nullptr;
    v19_.v20 = nullptr;
    v19_.v21 = nullptr;
    v2 = result[49];
    v1 = result[50];
    v3 = (__int64)result;
    v4 = v1 - v2;
    v5 = (__int64 (**)(void))result[23];
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v1 != v2) {
      if (v4 < 0) {
        GameRoutine_6881c0_alt1();
      }
      v7 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v1 - v2, 16, 0);
      v8 = (__int64*)((char*)v7 + v4);
      v19_.v19 = v7;
      v19_.v21 = (char*)v7 + v4;
      memcpy(v7, v2, v4);
      v19_.v20 = v8;
    }
    result = (_QWORD*)game_telop_TelopSkillLearnIndividually_CreateBind(
        v3, v5, &v19_.v19, *(_QWORD*)(v3 + 384));
    v9 = result;
    if (v19_.v19 != nullptr) {
      v10 = *v6;
      v19_.v20 = v19_.v19;
      v11 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(v10 + v11);
    }
    if (v9 != nullptr) {
      CmdBtlSkipInput_1007060(GameData_22190c0);
      v12 = GameData_212ea58;
      v13 = *(_QWORD*)(v3 + 184);
      v22_.v22 = nullptr;
      v22_.v23 = 0;
      v24_.v27 = (__int64*)&v24_.v24;
      v14 = (_QWORD*)*GameData_212ea58;
      v28 = v13;
      v24_.v24 = GameData_1fec818;
      v24_.v25 = &v28;
      v24_.v26 = &v22_.v22;
      CmdbtlPartyNatives_e9a800(v14, (__int64)&v24_.v24);
      result = v24_.v27;
      if (v24_.v27 == (__int64*)&v24_.v24) {
        v16 = 32;
      }
      else {
        if (v24_.v27 == nullptr) {
        LABEL_15:
          if (v22_.v22 != nullptr) {
            v17 = *v12;
            v24_.v24 = v22_.v22;
            v24_.v25 = (__int64*)v22_.v23;
            if (v22_.v23 != 0) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(v22_.v23 + 16), 1u,
                  memory_order_relaxed);
            }
            Manager_e9bcb0(v17, v3, 0, (__int64*)&v24_.v24);
            result = v24_.v25;
            if (v24_.v25 != nullptr) {
              result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(
                  v24_.v25);
            }
          }
          v18 = v22_.v23;
          if (v22_.v23 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(
                v18);
          }
          return result;
        }
        v16 = 40;
      }
      result = (_QWORD*)(*(__int64 (**)(__int64))(*v24_.v27 + v16))(
          (__int64)v24_.v27);
      goto LABEL_15;
    }
  }
  return result;
}

__int64

game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn_closure_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  __int64 v22;
  int v23;

  v2 = *a2;
  v3 = GameData_212c880[0];
  if (*(_QWORD*)(*a2 + 48) ==
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                 8LL * (**(_DWORD**)(result + 8) & 0xFFF))) {
    v4 = *(_QWORD**)(result + 16);
    v6 = (_QWORD*)v4[50];
    v5 = v4[51];
    if ((unsigned __int64)v6 >= v5) {
      v8 = v4[49];
      v9 = (char*)v6 - v8;
      v10 = ((__int64)v6 - v8) >> 3;
      v11 = v10 + 1;
      if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
        GameRoutine_6881c0();
      }
      v12 = v5 - v8;
      v13 = fw_memory_g_heap_manager_ptr;
      if (v12 >> 2 > v11) {
        v11 = v12 >> 2;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v11;
      }
      if (v14 != 0) {
        if (v14 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v15 = result;
        v16 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      }
      else {
        v15 = result;
        v16 = 0;
      }
      v17 = v16 + 8 * v14;
      v18 = (char*)v6 - v8;
      v19 = (__int64)&v9[v16 + -8 * v10];
      *(_QWORD*)&v9[v16] = v2;
      v7 = (__int64)&v9[v16 + 8];
      memcpy(v19, v8, v18);
      v4[49] = v19;
      v4[50] = v7;
      v4[51] = v17;
      if (v8 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v20);
      }
      result = v15;
    }
    else {
      *v6 = v2;
      v7 = (__int64)(v6 + 1);
    }
    v4[50] = v7;
    v21 = *(_DWORD**)(result + 8);
    if ((*v21 & 0xFFF) != 0) {
      v22 = v4[23];
      result = GameRoutine_6fcb20(
          *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * (*v21 & 0xFFF)), v22 + 1840);
      if ((result & 1) != 0) {
        v23 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                             8LL * (*v21 & 0xFFF)) +
                                  104LL);
        if (v23 == 2) {
          return Unit_6cc580(v22, v21, 0);
        }
        else if (v23 == 1) {
          return Unit_6cc9e0(v22, v21, 0);
        }
      }
    }
  }
  return result;
}

__int64 ProcCmdBtlSeqBattleGrow_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
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

  v1 = *(_QWORD*)(a1 + 392);
  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 400) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD*)(a1 + 344);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 352) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = *(_QWORD*)(a1 + 320);
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 328) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = *(_QWORD*)(a1 + 288);
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 296) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14);
  }
  v15 = *(_QWORD*)(a1 + 264);
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 272) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17);
  }
  v18 = *(_QWORD*)(a1 + 200);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = *(_QWORD*)(a1 + 152);
  if (v19 != 0) {
    v20 = *(_QWORD*)(a1 + 160);
    if (v19 == v20) {
      goto LABEL_32;
    }
    do {
      v21 = *(_QWORD*)(v20 - 8);
      if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
      }
      v20 -= 16;
    } while (v20 != v19);
    v22 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v19;
    if (v22 != 0) {
    LABEL_32:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
