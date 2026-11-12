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
__int64 ProcCmdBtlSeqBattleGrow_Destructor_alt1(__int64 a1) __asm__(
    "ProcCmdBtlSeqBattleGrow_Destructor");
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
__int64 game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn_alt1(
    __int64* a1) __asm__("game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_"
                         "UpdateLearn");
_QWORD* ProcCmdBtlSeqBattleGrow_fa5db0_alt1(_QWORD* result) __asm__(
    "ProcCmdBtlSeqBattleGrow_fa5db0");
__int64*
GameRoutine_7fb7c0_alt1(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_7fb7c0");
__int64 Manager_e9bcb0_alt1(__int64, __int64, signed int,
                            __int64*) __asm__("Manager_e9bcb0");
__int64 Unit_6cc580_alt1(__int64, _DWORD*, __int64) __asm__("Unit_6cc580");
__int64 Unit_6cc9e0_alt1(__int64, _DWORD*) __asm__("Unit_6cc9e0");
__int64 game_1007060(__int64);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 game_telop_TelopSkillLearnIndividually_CreateBind_alt1(
    __int64, __int64 (**)(), __int64*,
    __int64) __asm__("game_telop_TelopSkillLearnIndividually_CreateBind");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_6fcb20_alt1(__int64, _QWORD*) __asm__("GameRoutine_6fcb20");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn(__int64* a1);
void ProcCmdBtlSeqBattleGrow_fa5db0(_QWORD* a1);
void ProcCmdBtlSeqBattleGrow_Destructor(__int64 a1);

void game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn(__int64* a1)
{
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  unsigned int* v19;
  char v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int* v32;
  __int64 v33;
  int v34;
  char v35;
  __int64 v36;
  char v37;
  int v38;
  int v39;
  __int64 v40;
  char v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  struct {
    _QWORD v53[4];
    _QWORD* v54;
  } v53_;
  struct {
    __int64 v55;
    __int64 v56;
    __int64 v57;
    int v58;
    char gap76_[4];
    __int64 v59;
    __int64 v60;
    unsigned __int64 v61;
    __int64 v62;
    __int64 v63;
    unsigned __int64 v64;
    __int64 v65;
    __int64 v66;
  } v55_;

  v2 = (__int64*)game_Unit_Unknown6c4610(a1[23]);
  v3 = v2;
  v55_.v55 = 0;
  v55_.v56 = 0;
  v55_.v57 = 0;
  v55_.v58 = 0;
  if (&v55_.v55 != v2) {
    GameRoutine_7fb7c0_alt1(&v55_.v55, *v2, v2[1], (v2[1] - *v2) >> 2);
  }
  v4 = *((_DWORD*)v3 + 6);
  v55_.v60 = 0;
  v55_.v61 = 0;
  v55_.v59 = 0;
  v55_.v58 = v4;
  v6 = v3[4];
  v5 = v3[5];
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = v5 - v6;
  if (v5 != v6) {
    if ((v8 & 0x8000000000000000LL) != 0) {
      goto LABEL_45;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5 - v6, 16, 0);
    v10 = v9 + v8;
    v55_.v59 = v9;
    v55_.v60 = v9;
    v55_.v61 = v9 + v8;
    memcpy_alt1(v9, v6, v8);
    v55_.v60 = v10;
  }
  v55_.v63 = 0;
  v55_.v64 = 0;
  v55_.v62 = 0;
  v12 = v3[7];
  v11 = v3[8];
  v13 = v11 - v12;
  if (v11 != v12) {
    if ((v13 & 0x8000000000000000LL) != 0) {
    LABEL_45:
      GameRoutine_6e3e20();
    }
    v14 = fw_memory_HeapManager_Allocate_alt1(*v7, v11 - v12, 16, 0);
    v15 = v14 + v13;
    v55_.v62 = v14;
    v55_.v63 = v14;
    v55_.v64 = v14 + v13;
    memcpy_alt1(v14, v12, v13);
    v55_.v63 = v15;
  }
  v16 = v3[10];
  v17 = v3[11];
  v18 = (unsigned int*)a1[40];
  v19 = (unsigned int*)a1[41];
  v55_.v65 = v16;
  v55_.v66 = v17;
  if (v18 == v19) {
    v22 = v55_.v59;
    v23 = v55_.v60;
  }
  else {
    v20 = 0;
    do {
      v21 = UnitSkillList_84d980(&v55_.v55, v18++);
      v20 |= v21;
    } while (v18 != v19);
    v22 = v55_.v59;
    v23 = v55_.v60;
    if ((v20 & 1) != 0) {
      v55_.v65 = 0;
      v55_.v66 = 0;
      if ((int)((unsigned __int64)(v55_.v60 - v55_.v59) >> 2) >= 1) {
        v24 = (int)((v55_.v60 - v55_.v59) >> 2);
        v25 = v24 <= 1 ? 1LL : (int)((v55_.v60 - v55_.v59) >> 2);
        v26 = *GameData_212c880[0];
        if (v24 >= 2) {
          v32 = (int*)(v55_.v59 + 4);
          v27 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          do {
            v31 += 2;
            v33 = *(_QWORD*)(*(_QWORD*)(v26 + 64) + 8LL * (*(v32 - 1) & 0xFFF));
            v34 = v30 | (1 << *(_BYTE*)(v33 + 104));
            v35 = *(_BYTE*)(v33 + 250);
            LOWORD(v55_.v65) = v34;
            v36 = (1LL << v35) | v29;
            v37 = *(_BYTE*)(v33 + 115);
            v55_.v66 = v36;
            HIDWORD(v55_.v65) = (1 << v37) | v28;
            v38 = *(unsigned __int16*)(*(_QWORD*)(v33 + 24) + 1064LL) | v27;
            WORD1(v55_.v65) = v38;
            v39 = *v32;
            v32 += 2;
            v40 = *(_QWORD*)(*(_QWORD*)(v26 + 64) + 8LL * (v39 & 0xFFF));
            v30 = v34 | (1 << *(_BYTE*)(v40 + 104));
            v41 = *(_BYTE*)(v40 + 250);
            LOWORD(v55_.v65) = v30;
            v29 = (1LL << v41) | v36;
            v42 = *(_BYTE*)(v40 + 115);
            v55_.v66 = v29;
            v28 = (1 << v42) | HIDWORD(v55_.v65);
            HIDWORD(v55_.v65) = v28;
            v27 = *(unsigned __int16*)(*(_QWORD*)(v40 + 24) + 1064LL) | v38;
            WORD1(v55_.v65) = v27;
          } while ((v25 & 0x7FFFFFFFFFFFFFFELL) != v31);
        }
        else {
          LOWORD(v27) = 0;
          v28 = 0;
          v29 = 0;
          LOWORD(v30) = 0;
          v31 = 0;
        }
        if ((v25 & 1) != 0) {
          v43 = *(_QWORD*)(*(_QWORD*)(v26 + 64) +
                           8LL * (*(_DWORD*)(v55_.v59 + 4 * v31) & 0xFFF));
          LOWORD(v55_.v65) = v30 | (1 << *(_BYTE*)(v43 + 104));
          v55_.v66 = (1LL << *(_BYTE*)(v43 + 250)) | v29;
          HIDWORD(v55_.v65) = (1 << *(_BYTE*)(v43 + 115)) | v28;
          WORD1(v55_.v65) = *(_WORD*)(*(_QWORD*)(v43 + 24) + 1064LL) | v27;
        }
      }
    }
  }
  for (; v22 != v23; v22 += 4) {
    v45 = a1[23];
    v53_.v53[0] = GameData_1ff9390;
    v53_.v53[1] = v22;
    v53_.v53[2] = a1;
    v46 = *(_QWORD*)(v45 + 392);
    v53_.v54 = v53_.v53;
    game_67ef00(v46, v45, (__int64)v53_.v53);
    if (v53_.v54 == v53_.v53) {
      v44 = 32;
    }
    else {
      if (v53_.v54 == nullptr) {
        continue;
      }
      v44 = 40;
    }
    (*(void (**)(__int64))(*v53_.v54 + v44))((__int64)v53_.v54);
  }
  if (v55_.v62 != 0) {
    v47 = *v7;
    v55_.v63 = v55_.v62;
    v48 = 128;
    if (*(_QWORD*)(v47 + 200) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v47 + v48, v55_.v62);
  }
  if (v55_.v59 != 0) {
    v49 = *v7;
    v55_.v60 = v55_.v59;
    v50 = 128;
    if (*(_QWORD*)(v49 + 200) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v49 + v50, v55_.v59);
  }
  if (v55_.v55 != 0) {
    v51 = *v7;
    v55_.v56 = v55_.v55;
    v52 = 128;
    if (*(_QWORD*)(v51 + 200) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v51 + v52, v55_.v55);
  }
}

void ProcCmdBtlSeqBattleGrow_fa5db0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v4;
  __int64 (**v5)();
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
    unsigned __int64 v20;
  } v18_;
  struct {
    __int64 (**v21)();
    __int64 v22;
  } v21_;
  struct {
    __int64 (**v23)();
    __int64* v24;
    __int64 (***v25)();
    char gap72_[8];
    __int64* v26;
  } v23_;
  __int64 v27;

  if ((*(_BYTE*)(a1[24] + 90LL) & 4) == 0) {
    v18_.v18 = 0;
    v18_.v19 = 0;
    v18_.v20 = 0;
    v2 = a1[49];
    v1 = a1[50];
    v4 = v1 - v2;
    v5 = (__int64 (**)(void))a1[23];
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v1 != v2) {
      if ((v4 & 0x8000000000000000LL) != 0) {
        GameRoutine_6881c0_alt1();
      }
      v7 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v1 - v2, 16, 0);
      v8 = v7 + v4;
      v18_.v18 = v7;
      v18_.v20 = v7 + v4;
      memcpy_alt1(v7, v2, v4);
      v18_.v19 = v8;
    }
    v9 = game_telop_TelopSkillLearnIndividually_CreateBind_alt1(
        (__int64)a1, v5, &v18_.v18, a1[48]);
    if (v18_.v18 != 0) {
      v10 = *v6;
      v18_.v19 = v18_.v18;
      v11 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v10 + v11, v18_.v18);
    }
    if (v9 != 0) {
      game_1007060(GameData_22190c0);
      v12 = GameData_212ea58;
      v13 = a1[23];
      v21_.v21 = nullptr;
      v21_.v22 = 0;
      v23_.v26 = (__int64*)&v23_.v23;
      v14 = (_QWORD*)*GameData_212ea58;
      v27 = v13;
      v23_.v23 = GameData_1fec818;
      v23_.v24 = &v27;
      v23_.v25 = &v21_.v21;
      CmdbtlPartyNatives_e9a800(v14, (__int64)&v23_.v23);
      if (v23_.v26 == (__int64*)&v23_.v23) {
        v15 = 32;
      }
      else {
        if (v23_.v26 == nullptr) {
        LABEL_15:
          if (v21_.v21 != nullptr) {
            v16 = *v12;
            v23_.v23 = v21_.v21;
            v23_.v24 = (__int64*)v21_.v22;
            if (v21_.v22 != 0) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(v21_.v22 + 16), 1u,
                  memory_order_relaxed);
            }
            Manager_e9bcb0_alt1(v16, (__int64)a1, 0, (__int64*)&v23_.v23);
            if (v23_.v24 != nullptr) {
              std___1___shared_weak_count___release_weak_alt2(
                  (__int64)v23_.v24);
            }
          }
          v17 = v21_.v22;
          if (v21_.v22 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v21_.v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            std___1___shared_weak_count___release_weak_alt2(v17);
          }
          return;
        }
        v15 = 40;
      }
      (*(void (**)(__int64))(*v23_.v26 + v15))((__int64)v23_.v26);
      goto LABEL_15;
    }
  }
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
  unsigned __int64 v18;
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
        GameRoutine_6881c0_alt1();
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
          GameRoutine_60a210_alt1();
        }
        v15 = result;
        v16 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      }
      else {
        v15 = result;
        v16 = 0;
      }
      v17 = v16 + 8 * v14;
      v18 = (unsigned __int64)v6 - v8;
      v19 = (__int64)&v9[v16 + -8 * v10];
      *(_QWORD*)&v9[v16] = v2;
      v7 = (__int64)&v9[v16 + 8];
      memcpy_alt1(v19, v8, v18);
      v4[49] = v19;
      v4[50] = v7;
      v4[51] = v17;
      if (v8 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v20, v8);
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
      result = GameRoutine_6fcb20_alt1(
          *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * (*v21 & 0xFFF)),
          (_QWORD*)(v22 + 1840));
      if ((result & 1) != 0) {
        v23 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                             8LL * (*v21 & 0xFFF)) +
                                  104LL);
        if (v23 == 2) {
          return Unit_6cc580_alt1(v22, v21, 0);
        }
        else if (v23 == 1) {
          return Unit_6cc9e0_alt1(v22, v21);
        }
      }
    }
  }
  return result;
}

void ProcCmdBtlSeqBattleGrow_Destructor(__int64 a1)
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
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 344);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 352) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  v9 = *(_QWORD*)(a1 + 320);
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 328) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v10 + v11, v9);
  }
  v12 = *(_QWORD*)(a1 + 288);
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 296) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v13 + v14, v12);
  }
  v15 = *(_QWORD*)(a1 + 264);
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 272) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v16 + v17, v15);
  }
  v18 = *(_QWORD*)(a1 + 200);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak_alt2(v18);
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
        std___1___shared_weak_count___release_weak_alt2(v21);
      }
      v20 -= 16;
    } while (v20 != v19);
    v22 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v19;
    v19 = v22;
    if (v22 != 0) {
    LABEL_32:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v23, v19);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
