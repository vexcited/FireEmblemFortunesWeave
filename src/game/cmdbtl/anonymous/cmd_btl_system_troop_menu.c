#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_17859d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18fdde0(__int64, int*, char, __int64);
__int64 GameRoutine_1900180(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_SavedCursor_GetItem(_QWORD);
extern __int64 (*GameData_210d168[])();
extern __int64 (*GameData_210d3f8[])();
extern __int64 (
    *game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_CmdBtlSystemSortieMenuItem_vtable
        [])();
extern __int64 GameData_2131d58[15];
extern __int64 GameData_21c9608;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 CmdBtlSystemTroopMenu_Unknown101();
__int64 CmdBtlSystemTroopMenu_Unknown109(__int64 a1);
__int64 CmdBtlSystemTroopMenu_Unknown112(__int64 a1, __int64 a2);
__int64 CmdBtlSystemTroopMenu_Unknown128(__int64 result);
__int64 GameRoutine_1625030(void);
__int64 GameRoutine_178bfa0(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_210d1f8[])();
extern __int64 (*game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 GameData_225ca88;
extern __int64 game_g_game_setting;
void __attribute__((noreturn)) GameRoutine_163b3a0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
__int64
game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_CmdBtlSystemTroopMenu(__int64 a1);
__int64
game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_GetSortieCount_closure_Invoke(
    __int64 a1, __int64 a2);
bool game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_CmdBtlSystemTroopMenu_closure_Invoke(
    __int64 a1, __int64 a2);
__int64
game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_SetupCmdBtlForce_closure_Invoke(
    __int64 a1, __int64* a2);
bool game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_SetupCmdBtlForce_closure0_Invoke(
    __int64 a1, __int64 a2);
bool game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_SetupCmdBtlForce_closure1_Invoke(
    __int64 a1, __int64 a2);
__int64
game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_PlusCall_closure_Invoke(__int64 a1);
__int64 GameRoutine_1900180_alt1(__int64) __asm__("GameRoutine_1900180");

__int64 CmdBtlSystemTroopMenu_Unknown101()
{
  GameRoutine_1900180();
  if (*(int*)(GameData_21c9608 + 308) < 1 &&
      (*(_BYTE*)(GameData_21c9608 + 328) & 4) == 0) {
    return 1;
  }
  else {
    return 3;
  }
}

__int64 CmdBtlSystemTroopMenu_Unknown109(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  GameRoutine_1900180();
  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && (result = __dynamic_cast(v2, GameData_212e008[0],
                                          GameData_2131d58[0], 0)) != 0 ||
      (result = game_menu_BasicMenu_SavedCursor_GetItem(
           *(_QWORD*)(*(_QWORD*)(a1 + 1056) + 336LL))) != 0 &&
          (result = __dynamic_cast(result, GameData_212e008[0],
                                   GameData_2131d58[0], 0)) != 0) {
    v4 = *(_QWORD*)(a1 + 152);
    if (v4 == 0) {
      v4 = a1;
    }
    GameRoutine_18fdde0(*(_QWORD*)(v4 + 32), (int*)(a1 + 1184),
                        *(_BYTE*)(a1 + 1216), *(_QWORD*)(result + 88));
    return 8;
  }
  return result;
}

__int64 CmdBtlSystemTroopMenu_Unknown112(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 i;
  __int64 (***v7)();
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[4];
  _QWORD* v16;
  int v17;
  __int64 v18;

  v3 = v15;
  v17 = 0;
  v15[0] = GameData_210d168;
  v15[1] = &v17;
  v5 = *(_QWORD*)(a1 + 232);
  v4 = *(_QWORD*)(a1 + 240);
  v16 = v15;
  if (v4 == v5) {
    goto LABEL_12;
  }
  for (i = 0; i < (v4 - v5) >> 3; ++i) {
    v7 = *(__int64 (****)())(v5 + 8 * i);
    if (v7 == nullptr ||
        *v7 !=
            game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_CmdBtlSystemSortieMenuItem_vtable) {
      continue;
    }
    v18 = *(_QWORD*)(v5 + 8 * i);
    if (v16 == nullptr) {
      GameRoutine_60a310(0);
    }
    if (((*(__int64 (**)(_QWORD*, __int64*))(*v16 + 48LL))(v16, &v18) & 1) !=
        0) {
      break;
    }
    v5 = *(_QWORD*)(a1 + 232);
    v4 = *(_QWORD*)(a1 + 240);
  }
  v3 = v16;
  if (v16 != v15) {
    if (v16 != nullptr) {
      v8 = 40;
      goto LABEL_13;
    }
    goto LABEL_14;
  }

LABEL_12:
  v8 = 32;

LABEL_13:
  (*(void (**)(_QWORD*, __int64))(*v3 + v8))(v3, a2);

LABEL_14:
  if (v17 < 1) {
    return 1;
  }
  v9 = *(_QWORD*)(a1 + 152);
  v10 = *(unsigned __int8*)(a1 + 1216);
  v16 = v15;
  v11 = v9 != 0 ? v9 : a1;
  v15[0] = GameData_210d3f8;
  v15[1] = a1;
  v12 = GameRoutine_17859d0(v11, v10, v15);
  if (v16 == v15) {
    v13 = 32;
  LABEL_22:
    (*(void (**)(void))(*v16 + v13))();
  }
  else if (v16 != nullptr) {
    v13 = 40;
    goto LABEL_22;
  }
  if (v12 != 0) {
    return 12;
  }
  else {
    return 1;
  }
}

__int64 CmdBtlSystemTroopMenu_Unknown128(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  int v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  int v14;
  __int64 v15;

  if ((*(_BYTE*)(GameData_21c9608 + 328) & 4) != 0) {
    v1 = 1;
  }
  else {
    v1 = *(_DWORD*)(GameData_21c9608 + 308);
  }
  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
  if (v2 != 0) {
    v3 = result;
    v4 = 0;
    do {
      v7 = *(_QWORD*)(v2 + 432);
      if ((*(_BYTE*)(v2 + 416) & 8) == 0) {
        v8 = *(_QWORD*)(v3 + 1192);
        v9 = *(_QWORD*)(v3 + 1200);
        if (v8 == v9) {
          v5 = false;
        }
        else {
          v10 = v8 + 8;
          do {
            v11 = *(_QWORD*)(v10 - 8);
            v14 = 16;
            v15 = v11;
            v12 = game_UnitPool_Find_6ead60(&v15, &v14);
            v5 = v2 == v12;
            v13 = v2 == v12 || v10 == v9;
            v10 += 8;
          } while (!v13);
        }
        v6 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
        *(_WORD*)(v6 + 16) = 0;
        *(_DWORD*)(v6 + 40) = 0;
        *(_QWORD*)(v6 + 48) = 0;
        *(_QWORD*)(v6 + 56) = 0;
        *(_QWORD*)(v6 + 64) = 0;
        *(_QWORD*)(v6 + 72) = 0;
        *(_QWORD*)(v6 + 88) = v2;
        *(_DWORD*)(v6 + 96) = 0;
        *(_QWORD*)v6 =
            game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_CmdBtlSystemSortieMenuItem_vtable;
        *(_QWORD*)(v6 + 8) = 0;
        *(_BYTE*)(v6 + 100) = v5;
        *(_BYTE*)(v6 + 101) = v4 < v1;
        *(_WORD*)(v6 + 80) = 257;
        *(_BYTE*)(v6 + 82) = 1;
        result = GameRoutine_16e0c00(v3, v6);
      }
      ++v4;
      v2 = v7;
    } while (v7 != 0);
  }
  return result;
}

__int64

game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_GetSortieCount_closure_Invoke(
    __int64 a1, __int64 a2)
{
  if ((*(_BYTE*)(*(_QWORD*)a2 + 101LL) & 1) != 0 ||
      *(_BYTE*)(*(_QWORD*)a2 + 100LL) == 1) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

bool game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_CmdBtlSystemTroopMenu_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

__int64

game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_SetupCmdBtlForce_closure_Invoke(
    __int64 a1, __int64* a2)
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
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
    }
  }
  else {
    *v5 = v3;
    v6 = (__int64)(v5 + 1);
  }
  v2[1] = v6;
  return 0;
}

bool game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_SetupCmdBtlForce_closure0_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == **(_QWORD**)(a1 + 8);
}

bool game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_SetupCmdBtlForce_closure1_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == **(_QWORD**)(a1 + 8);
}

__int64

game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_PlusCall_closure_Invoke(__int64 a1)
{
  GameRoutine_1900180_alt1(*(_QWORD*)(a1 + 8));
  if (GameData_225ca88 != 0) {
    GameRoutine_1625030();
  }
  return 4;
}

#pragma GCC visibility pop
