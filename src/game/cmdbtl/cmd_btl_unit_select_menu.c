#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1626520(__int64, __int64);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
extern __int64 (*GameData_206e870[])();
extern __int64 (*game_cmdbtl_anonymous_UnitMenuItem_vtable[])();
extern __int64 GameData_21c9608;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 CmdBtlUnitSelectMenu_1638100(_DWORD* a1, __int64 a2);
__int64 GameRoutine_1590740(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1590b40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_163b880(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 game_cmdbtl_CmdBtlUnitSelectMenu_CreateImpl_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2);
bool game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda1_Invoke(
    __int64 a1, __int64 a2);
bool game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda2_Invoke(
    __int64 a1, __int64 a2);
__int64 game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2);
void __attribute__((noreturn)) GameRoutine_163b3a0(void);
__int64
game_cmdbtl_CmdBtlUnitSelectMenu_GetSortieCount_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2);
__int64
game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 GameRoutine_1638d20(__int64 result, __int64*, __int64 (**)(__int64),
                            __int64, char);
__int64 GameRoutine_1639f60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_206e900[])();
extern __int64 (*GameData_206e980[])();
extern __int64 (*GameData_206ea00[])();
extern __int64 (*GameData_206ea80[])();
extern __int64 (*GameData_21319a8)();
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
extern __int64 GameData_206e7b8;
extern __int64 GameData_212c6a0[3];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_740050(_QWORD, _QWORD, _QWORD);
__int64 game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo_alt1(
    _QWORD* a1, __int64 a2,
    __int64 a3) __asm__("game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo");
__int64 game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_alt1(
    __int64 a1) __asm__("game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce");
__int64 GameRoutine_1639f60_alt1(__int64 result, __int64*, __int64,
                                 char) __asm__("GameRoutine_1639f60");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_740050_alt1() __asm__("GameRoutine_740050");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo(_QWORD* a1, __int64 a2,
                                                 __int64 a3);
void game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce(__int64 a1);

void game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo(_QWORD* a1, __int64 a2,
                                                 __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    _QWORD v32[4];
    _QWORD* v33;
  } v32_;
  struct {
    __int64* v34;
    __int64* v35;
    __int64 v36;
  } v34_;
  __int64 v37;

  v3 = a1[175];
  v6 = a1[29];
  v5 = a1[30];
  v34_.v35 = nullptr;
  v34_.v36 = 0;
  v34_.v34 = nullptr;
  *(_QWORD*)((char*)a1 + 1388) = 0;
  v32_.v32[0] = GameData_206ea80;
  v32_.v32[1] = a1;
  v32_.v32[2] = &v34_.v34;
  a1[176] = v3;
  v7 = v32_.v32;
  v32_.v33 = v32_.v32;
  if (v5 == v6) {
    goto LABEL_12;
  }
  v8 = 0;
  v9 = GameData_212e008[0];
  do {
    v10 = *(_QWORD*)(v6 + 8 * v8);
    if (v10 != 0) {
      v11 = __dynamic_cast(v10, v9, &GameData_206e7b8, 0);
      if (v11 == 0) {
        goto LABEL_3;
      }
      v37 = v11;
      if (v32_.v33 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v32_.v33 + 48LL))(v32_.v33,
                                                                  &v37) &
           1) != 0) {
        break;
      }
      v6 = a1[29];
      v5 = a1[30];
    }
  LABEL_3:
    ++v8;
  } while (v8 < (v5 - v6) >> 3);
  v7 = v32_.v33;
  if (v32_.v33 != v32_.v32) {
    if (v32_.v33 != nullptr) {
      v12 = 40;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_12:
  v12 = 32;
LABEL_13:
  (*(void (**)(_QWORD*, __int64, __int64))(*v7 + v12))(v7, a2, a3);
LABEL_14:
  v13 = v34_.v34;
  v14 = v34_.v35;
  if (v34_.v34 != v34_.v35) {
    GameRoutine_1639f60_alt1((__int64)v34_.v34, v34_.v35,
                             (2 * __clz(v34_.v35 - v34_.v34)) ^ 0x7E, 1);
    v13 = v34_.v34;
    v14 = v34_.v35;
  }
  if (v13 != v14) {
    v15 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)*v13 + 568LL))(*v13) & 1) != 0 ||
          ((*(__int64 (**)(__int64))(*(_QWORD*)*v13 + 576LL))(*v13) & 1) != 0) {
        v17 = *(_QWORD*)(*v13 + 88);
        if (v17 != 0) {
          v18 = (_QWORD*)a1[176];
          v19 = a1[177];
          if ((unsigned __int64)v18 < v19) {
            *v18 = v17;
            v16 = (__int64)(v18 + 1);
          }
          else {
            v20 = a1[175];
            v21 = (char*)v18 - v20;
            v22 = ((__int64)v18 - v20) >> 3;
            v23 = v22 + 1;
            if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
              GameRoutine_740050_alt1();
            }
            v24 = v19 - v20;
            if (v24 >> 2 > v23) {
              v23 = v24 >> 2;
            }
            if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
              v25 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v25 = v23;
            }
            if (v25 != 0) {
              if (v25 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v26 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * v25, 16, 0);
            }
            else {
              v26 = 0;
            }
            v27 = v26 + 8 * v25;
            v28 = (unsigned __int64)v18 - v20;
            v29 = (__int64)&v21[v26 + -8 * v22];
            *(_QWORD*)&v21[v26] = v17;
            v16 = (__int64)&v21[v26 + 8];
            memcpy_alt1(v29, v20, v28);
            a1[175] = v29;
            a1[176] = v16;
            a1[177] = v27;
            if (v20 != 0) {
              v30 = 128;
              if (*(_QWORD*)(*v15 + 200) == 0) {
                v30 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v15 + v30, v20);
            }
          }
          a1[176] = v16;
        }
      }
      ++v13;
    } while (v13 != v14);
    v13 = v34_.v34;
  }
  if (v13 != nullptr) {
    v34_.v35 = v13;
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v13);
  }
}

__int64 CmdBtlUnitSelectMenu_1638100(_DWORD* a1, __int64 a2)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v34;
  __int64 v37;
  _QWORD v38[7];
  int v39;

  a1[356] = *(_DWORD*)a2;
  if ((*(_BYTE*)(GameData_21c9608 + 328) & 4) != 0) {
    v2 = 1;
  }
  else {
    v2 = *(_DWORD*)(GameData_21c9608 + 308);
  }
  v34 = v2;
  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
  if (v3 != 0) {
    v4 = -1;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do {
      v14 = *(_QWORD*)(v3 + 432);
      v15 = *(_QWORD*)(a2 + 8);
      v16 = *(_QWORD*)(a2 + 16);
      if (v15 == v16) {
        v22 = false;
      }
      else {
        v37 = *(_QWORD*)(v3 + 432);
        v17 = v5;
        v18 = v6;
        v19 = v15 + 8;
        do {
          v20 = *(_QWORD*)(v19 - 8);
          v39 = 16;
          v38[0] = v20;
          v21 = game_UnitPool_Find_6ead60(v38, &v39);
          v22 = v3 == v21;
          v23 = v3 == v21 || v19 == v16;
          v19 += 8;
        } while (!v23);
        v6 = v18;
        v5 = v17;
        v14 = v37;
      }
      v24 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 104, 16, 0);
      *(_WORD*)(v24 + 16) = 0;
      *(_DWORD*)(v24 + 40) = 0;
      *(_QWORD*)(v24 + 48) = 0;
      *(_QWORD*)(v24 + 56) = 0;
      *(_QWORD*)(v24 + 64) = 0;
      *(_QWORD*)(v24 + 72) = 0;
      *(_QWORD*)(v24 + 88) = v3;
      *(_BYTE*)(v24 + 96) = v22;
      *(_BYTE*)(v24 + 97) = v8 < v34;
      *(_WORD*)(v24 + 80) = 257;
      *(_BYTE*)(v24 + 82) = 1;
      *(_QWORD*)v24 = game_cmdbtl_anonymous_UnitMenuItem_vtable;
      *(_QWORD*)(v24 + 8) = 0;
      GameRoutine_16e0c00(a1, v24);
      v25 = *(_QWORD*)(v3 + 392);
      v26 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v27 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      else {
        v27 = 0;
      }
      v11 = v25 == v27;
      v28 = *(_DWORD*)(v3 + 416);
      v29 = *(unsigned __int8*)(v3 + 501);
      if (v11) {
        v5 = v3;
      }
      if ((v28 & 0x80000) != 0) {
        v6 = v3;
      }
      if ((v28 & 0x100000) != 0) {
        v10 = *(unsigned __int8*)(v3 + 501);
      }
      else {
        v10 = -1;
      }
      if (game_GameModeData_instance_ != 0) {
        v26 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      ++v8;
      v3 = v14;
      v9 = (v4 != v29) | v7;
      if (v4 < 0) {
        v9 = v7;
      }
      else {
        v10 = v4;
      }
      v11 = v25 == v26;
      if (v25 == v26) {
        v12 = v4;
      }
      else {
        v12 = v10;
      }
      if (v11) {
        v13 = v7;
      }
      else {
        v13 = v9;
      }
      if ((v28 & 0x100000) != 0) {
        v4 = v12;
        v7 = v13;
      }
    } while (v14 != 0);
  }
  else {
    LOBYTE(v7) = 0;
    v6 = 0;
    v5 = 0;
  }
  v30 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       40, 16, 0);
  v31 = v5;
  v32 = v30;
  *(_BYTE*)(v30 + 16) = v7 & 1;
  *(_QWORD*)(v30 + 24) = v31;
  *(_QWORD*)(v30 + 32) = v6;
  v38[4] = v30;
  *(_QWORD*)v30 = GameData_206e870;
  *(_QWORD*)(v30 + 8) = a1;
  GameRoutine_1626520((__int64)a1, (__int64)v38);
  (*(void (**)(__int64))(*(_QWORD*)v32 + 40LL))(v32);
  return (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 1032LL))(a1);
}

void game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 (**v4)(__int64);
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  _QWORD* v17;
  _QWORD* v18;
  int v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 (**v24)(__int64);
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 (**v39)(__int64);
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  struct {
    __int64 (*v50[4])(__int64);
    __int64 (**v51)(__int64);
  } v50_;
  struct {
    __int64* v52;
    __int64* v53;
    __int64 v54;
  } v52_;
  __int64 v55;

  v3 = *(_QWORD*)(a1 + 232);
  v2 = *(_QWORD*)(a1 + 240);
  v4 = v50_.v50;
  v5 = *(_QWORD*)(GameData_21ca310 + 56);
  v52_.v53 = nullptr;
  v52_.v54 = 0;
  v52_.v52 = nullptr;
  v50_.v51 = v50_.v50;
  v50_.v50[0] = (__int64 (*)(__int64))GameData_206e900;
  v50_.v50[1] = (__int64 (*)(__int64))&v52_.v52;
  if (v2 == v3) {
    goto LABEL_12;
  }
  v6 = 0;
  v7 = GameData_212e008[0];
  v8 = GameData_212e0c8[0];
  do {
    v9 = *(_QWORD*)(v3 + 8 * v6);
    if (v9 != 0) {
      v10 = __dynamic_cast(v9, v7, v8, 0);
      if (v10 == 0) {
        goto LABEL_4;
      }
      v55 = v10;
      if (v50_.v51 == nullptr) {
      LABEL_102:
        GameRoutine_60a310_alt1();
      }
      if (((*((__int64 (**)(__int64 (**)(__int64), __int64*))*v50_.v51 + 6))(
               v50_.v51, &v55) &
           1) != 0) {
        break;
      }
      v3 = *(_QWORD*)(a1 + 232);
      v2 = *(_QWORD*)(a1 + 240);
    }
  LABEL_4:
    ++v6;
  } while (v6 < (v2 - v3) >> 3);
  v4 = v50_.v51;
  if (v50_.v51 != v50_.v50) {
    if (v50_.v51 != nullptr) {
      v11 = 40;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_12:
  v11 = 32;
LABEL_13:
  (*(void (**)(__int64))((char*)*v4 + v11))((__int64)v4);
LABEL_14:
  v50_.v50[0] = (__int64 (*)(__int64))GameData_21319a8;
  if (v52_.v52 != v52_.v53) {
    GameRoutine_1638d20((__int64)v52_.v52, v52_.v53, v50_.v50,
                        (2 * __clz(v52_.v53 - v52_.v52)) ^ 0x7E, 1);
  }
  v12 = v5 + 552960;
  v13 = GameData_21ca310;
  v14 = *(_DWORD*)(a1 + 1424);
  v49 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
  v15 = v49;
  if (v49 == nullptr || v14 < 1) {
    v19 = 0;
    v18 = nullptr;
    goto LABEL_59;
  }
  v17 = nullptr;
  v18 = nullptr;
  v19 = 0;
  while (2) {
    v15 = (_QWORD*)v15[54];
    v20 = v52_.v52;
    v21 = v52_.v53;
    v50_.v51 = v50_.v50;
    v50_.v50[0] = (__int64 (*)(__int64))GameData_206e980;
    v50_.v50[1] = (__int64 (*)(__int64))&v49;
    if (v52_.v52 == v52_.v53) {
      v22 = 0;
      v24 = v50_.v50;
    }
    else {
      do {
        v23 = *v20++;
        v22 = v23;
        v55 = v23;
        if (v50_.v51 == nullptr) {
          goto LABEL_102;
        }
        if (((*((__int64 (**)(__int64 (**)(__int64), __int64*))*v50_.v51 + 6))(
                 v50_.v51, &v55) &
             1) != 0) {
          goto LABEL_27;
        }
      } while (v20 != v21);
      v22 = 0;
    LABEL_27:
      v24 = v50_.v51;
      if (v50_.v51 != v50_.v50) {
        if (v50_.v51 != nullptr) {
          v25 = 40;
          goto LABEL_32;
        }
        goto LABEL_33;
      }
    }
    v25 = 32;
  LABEL_32:
    (*(void (**)(__int64))((char*)*v24 + v25))((__int64)v24);
  LABEL_33:
    if (v22 == 0 ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 576LL))(v22) & 1) == 0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 568LL))(v22) & 1) == 0) {
      goto LABEL_56;
    }
    v18 = v49;
    if (v17 == nullptr) {
      goto LABEL_55;
    }
    v26 = (_QWORD*)v49[53];
    if (v26 == v17) {
      goto LABEL_55;
    }
    v27 = v49[54];
    if (v27 == 0) {
      *(_QWORD*)(v12 + 3144) = v26;
      if (v26 == nullptr) {
        goto LABEL_44;
      }
      v26[54] = 0;
      v26 = (_QWORD*)v18[53];
      if (v26 == nullptr) {
        goto LABEL_44;
      }
      goto LABEL_43;
    }
    *(_QWORD*)(v27 + 424) = v26;
    if (v26 != nullptr) {
    LABEL_43:
      v26[54] = v18[54];
      goto LABEL_46;
    }
  LABEL_44:
    v28 = v18[54];
    *(_QWORD*)(v12 + 3136) = v28;
    if (v28 != 0) {
      *(_QWORD*)(v28 + 424) = 0;
    }
  LABEL_46:
    v18[53] = 0;
    v18[54] = 0;
    v29 = *(_QWORD**)(v12 + 3144);
    if (*(unsigned __int8*)(v12 + 3152) >= 0xAu) {
      v30 = 0;
    }
    else {
      v30 = *(_QWORD*)(GameData_21ca310 + 56) +
            24LL * *(unsigned __int8*)(v12 + 3152) + 556000;
    }
    v18[55] = v30;
    if (v29 == v17) {
      v32 = *(_QWORD*)(v12 + 3144);
      if (v32 != 0) {
        *(_QWORD*)(v32 + 432) = v18;
        v18[53] = v32;
      }
      else {
        *(_QWORD*)(v12 + 3136) = v18;
      }
      *(_QWORD*)(v12 + 3144) = v18;
    }
    else {
      v31 = v17[54];
      v17[54] = v18;
      v18[53] = v17;
      v18[54] = v31;
      *(_QWORD*)(v31 + 424) = v18;
    }
  LABEL_55:
    ++v19;
    v17 = v18;
  LABEL_56:
    v49 = v15;
    if (v15 != nullptr && v19 < (signed __int32)*(_DWORD*)(a1 + 1424)) {
      continue;
    }
    break;
  }
  v13 = GameData_21ca310;
LABEL_59:
  v33 = *(_QWORD**)(*(_QWORD*)(v13 + 56) + 556096LL);
  v49 = v33;
  if (v33 != nullptr) {
    while (2) {
      v33 = (_QWORD*)v33[54];
      v35 = v52_.v52;
      v36 = v52_.v53;
      v50_.v50[0] = (__int64 (*)(__int64))GameData_206ea00;
      v50_.v50[1] = (__int64 (*)(__int64))&v49;
      v50_.v51 = v50_.v50;
      if (v52_.v52 == v52_.v53) {
        v37 = 0;
        v39 = v50_.v50;
      }
      else {
        do {
          v38 = *v35++;
          v37 = v38;
          v55 = v38;
          if (v50_.v51 == nullptr) {
            goto LABEL_102;
          }
          if (((*((__int64 (**)(__int64 (**)(__int64), __int64*))*v50_.v51 +
                  6))(v50_.v51, &v55) &
               1) != 0) {
            goto LABEL_68;
          }
        } while (v35 != v36);
        v37 = 0;
      LABEL_68:
        v39 = v50_.v51;
        if (v50_.v51 != v50_.v50) {
          if (v50_.v51 != nullptr) {
            v40 = 40;
            goto LABEL_73;
          }
          goto LABEL_74;
        }
      }
      v40 = 32;
    LABEL_73:
      (*(void (**)(__int64))((char*)*v39 + v40))((__int64)v39);
    LABEL_74:
      if (v37 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v37 + 576LL))(v37) & 1) != 0 ||
            ((*(__int64 (**)(__int64))(*(_QWORD*)v37 + 568LL))(v37) & 1) != 0) {
          goto LABEL_95;
        }
        v34 = v49;
        if (v18 == nullptr) {
          goto LABEL_62;
        }
        v41 = v49[53];
        v42 = v49[54];
        if (v42 != 0) {
          *(_QWORD*)(v42 + 424) = v41;
          if (v41 == 0) {
          LABEL_84:
            v43 = v34[54];
            *(_QWORD*)(v12 + 3136) = v43;
            if (v43 != 0) {
              *(_QWORD*)(v43 + 424) = 0;
            }
          LABEL_86:
            v34[53] = 0;
            v34[54] = 0;
            v44 = *(_QWORD**)(v12 + 3144);
            if (*(unsigned __int8*)(v12 + 3152) >= 0xAu) {
              v45 = 0;
            }
            else {
              v45 = *(_QWORD*)(GameData_21ca310 + 56) +
                    24LL * *(unsigned __int8*)(v12 + 3152) + 556000;
            }
            v34[55] = v45;
            if (v44 == v18) {
              v47 = *(_QWORD*)(v12 + 3144);
              if (v47 != 0) {
                *(_QWORD*)(v47 + 432) = v34;
                v34[53] = v47;
              }
              else {
                *(_QWORD*)(v12 + 3136) = v34;
              }
              *(_QWORD*)(v12 + 3144) = v34;
            }
            else {
              v46 = v18[54];
              v18[54] = v34;
              v34[53] = v18;
              v34[54] = v46;
              *(_QWORD*)(v46 + 424) = v34;
            }
          LABEL_62:
            v49 = v33;
            v18 = v34;
            if (v33 == nullptr) {
              goto LABEL_95;
            }
            continue;
          }
        }
        else {
          *(_QWORD*)(v12 + 3144) = v41;
          if (v41 == 0) {
            goto LABEL_84;
          }
          *(_QWORD*)(v41 + 432) = 0;
          v41 = v34[53];
          if (v41 == 0) {
            goto LABEL_84;
          }
        }
        *(_QWORD*)(v41 + 432) = v34[54];
        goto LABEL_86;
      }
      break;
    }
    v34 = v18;
    goto LABEL_62;
  }
LABEL_95:
  if (*(_QWORD*)GameData_212c6a0[0] != 0) {
    *(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 308LL) = v19;
  }
  if (v52_.v52 != nullptr) {
    v52_.v53 = v52_.v52;
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, (__int64)v52_.v52);
  }
}

__int64

game_cmdbtl_CmdBtlUnitSelectMenu_GetSortieCount_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 568LL))(*a2) & 1) != 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 576LL))(v2) & 1) != 0) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

__int64 game_cmdbtl_CmdBtlUnitSelectMenu_CreateImpl_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD**)(v2 + 1408);
  v5 = *(_QWORD**)(v2 + 1400);
  if (v4 == v5) {
    if (*(_BYTE*)(a1 + 16) == 1) {
      v8 = *(_QWORD*)(a1 + 24);
      v6 = (__int64*)(a1 + 24);
      v7 = v8;
      if (v8 == 0) {
        goto LABEL_19;
      }
    }
    else {
      v9 = *(_QWORD*)(a1 + 32);
      v6 = (__int64*)(a1 + 32);
      v7 = v9;
      if (v9 == 0) {
        goto LABEL_19;
      }
    }
    v10 = *(_QWORD*)(v2 + 1416);
    if ((unsigned __int64)v4 >= v10) {
      v12 = v10 - (_QWORD)v4;
      v13 = (__int64)(v10 - (_QWORD)v4) >> 2;
      if (v13 <= 1) {
        v13 = 1;
      }
      if (v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v13;
      }
      if (v14 >> 61 != 0) {
        GameRoutine_60a210(v6);
      }
      v15 = v6;
      v16 = fw_memory_g_heap_manager_ptr;
      v17 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      v18 = *v15;
      v11 = v17 + 1;
      *v17 = v18;
      *(_QWORD*)(v2 + 1400) = v17;
      *(_QWORD*)(v2 + 1408) = v17 + 1;
      *(_QWORD*)(v2 + 1416) = &v17[v14];
      if (v4 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v19, v5);
      }
    }
    else {
      *v4 = v7;
      v11 = v4 + 1;
    }
    *(_QWORD*)(v2 + 1408) = v11;
  }
LABEL_19:
  GameRoutine_1590b40(a2, 0, v2 + 1400, 0);
  return GameRoutine_1590740(a2, *(unsigned int*)(v2 + 1388),
                             *(unsigned int*)(v2 + 1392));
}

__int64

game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(__int64**)(a1 + 8);
  v3 = *a2;
  v5 = (_QWORD*)v2[1];
  v4 = v2[2];
  if ((unsigned __int64)v5 >= v4) {
    v7 = *v2;
    v8 = (__int64)v5 - *v2;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_163b3a0();
    }
    v10 = v4 - v7;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(a1);
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v12;
    v15 = v13 + v8 - 8 * (v8 >> 3);
    *(_QWORD*)(v13 + v8) = v3;
    v6 = v13 + v8 + 8;
    memcpy(v15, v7, v8);
    *v2 = v15;
    v2[1] = v6;
    v2[2] = v14;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
    }
  }
  else {
    *v5 = v3;
    v6 = (__int64)(v5 + 1);
  }
  v2[1] = v6;
  return 0;
}

bool game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda1_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == **(_QWORD**)(a1 + 8);
}

bool game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce_lambda2_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == **(_QWORD**)(a1 + 8);
}

__int64 game_cmdbtl_CmdBtlUnitSelectMenu_UpdateInfo_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char v24[4];

  v2 = (_QWORD*)*a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 568LL))(*a2) & 1) != 0 ||
      ((*(__int64 (**)(_QWORD*))(*v2 + 576LL))(v2) & 1) != 0) {
    v5 = v2[11];
    if (v5 != 0) {
      v6 = *(__int16*)(v5 + 492);
      v7 = *(_DWORD*)(v3 + 1388);
      v24[0] = 0;
      *(_DWORD*)(v3 + 1388) = v7 + v6;
      v8 = game_Unit_GetParam(v5, v24, 1);
      *(_DWORD*)(v3 + 1392) += v8;
      v9 = *(__int64**)(a1 + 16);
      v11 = (_QWORD*)v9[1];
      v10 = v9[2];
      if ((unsigned __int64)v11 >= v10) {
        v13 = *v9;
        v14 = (__int64)v11 - *v9;
        v15 = (v14 >> 3) + 1;
        if (v15 >> 61 != 0) {
          GameRoutine_163b880();
        }
        v16 = v10 - v13;
        v17 = fw_memory_g_heap_manager_ptr;
        if (v16 >> 2 > v15) {
          v15 = v16 >> 2;
        }
        if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
          v18 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v18 = v15;
        }
        if (v18 != 0) {
          if (v18 >> 61 != 0) {
            GameRoutine_60a210(v8);
          }
          v19 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
        }
        else {
          v19 = 0;
        }
        v20 = v19 + 8 * v18;
        v21 = v19 + v14 - 8 * (v14 >> 3);
        *(_QWORD*)(v19 + v14) = v2;
        v12 = v19 + v14 + 8;
        memcpy(v21, v13, v14);
        *v9 = v21;
        v9[1] = v12;
        v9[2] = v20;
        if (v13 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v22, v13);
        }
      }
      else {
        *v11 = v2;
        v12 = (__int64)(v11 + 1);
      }
      v9[1] = v12;
    }
  }
  return 0;
}

#pragma GCC visibility pop
