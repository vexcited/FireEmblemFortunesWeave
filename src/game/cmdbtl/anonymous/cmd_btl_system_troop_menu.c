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
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 CmdBtlSystemSortieMenuItem_Unknown89(_QWORD);
__int64 game_menu_178cf10(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 CmdBtlSystemTroopMenu_CmdBtlSystemSortieMenuItem_ACall(__int64 a1);
__int64 GameRoutine_17859d0_alt1(__int64, char,
                                 _QWORD*) __asm__("GameRoutine_17859d0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 GameRoutine_1638d20(__int64 result, __int64*, __int64 (**)(__int64),
                            __int64, char);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 (*GameData_210d278[])();
extern __int64 (*GameData_210d2f8[])();
extern __int64 (*GameData_210d378[])();
extern __int64 (*GameData_21319a8)();
extern __int64* GameData_212e0c8[6];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_2131d60[14];
extern __int64 GameData_2259500;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
void game_menu_BasicMenu_Destroy_BasicMenu(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CmdBtlSystemTroopMenu_Destructor(_QWORD* a1);
void CmdBtlSystemTroopMenu_DeletingDestructor(_QWORD* a1);
void game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_SetupCmdBtlForce(__int64 a1);

void CmdBtlSystemTroopMenu_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;

  v1 = a1[149];
  if (v1 != 0) {
    a1[150] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
  }
  v4 = a1 + 136;
  v5 = GameData_2131d60[0] + 1368;
  *a1 = GameData_2131d60[0] + 16;
  a1[22] = v5;
  v6 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v7 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v7 & 0x18) != 0) {
      v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
      while ((_QWORD*)*v6 != v4) {
        ++v6;
        if (--v8 == 0) {
          goto LABEL_10;
        }
      }
    }
    else {
    LABEL_10:
      if (v7 < 0x18) {
        goto LABEL_25;
      }
      v6 += 2;
      while (1) {
        if ((_QWORD*)*(v6 - 2) == v4) {
          v6 -= 2;
          goto LABEL_21;
        }
        if ((_QWORD*)*(v6 - 1) == v4) {
          --v6;
          goto LABEL_21;
        }
        if ((_QWORD*)*v6 == v4) {
          goto LABEL_21;
        }
        if ((_QWORD*)v6[1] == v4) {
          break;
        }
        v9 = v6 + 2;
        v6 += 4;
        if (v9 == (_QWORD*)GameData_2259500) {
          goto LABEL_25;
        }
      }
      ++v6;
    }
  }
LABEL_21:
  if (v6 != (_QWORD*)GameData_2259500) {
    v10 = GameData_2259500 - (_QWORD)(v6 + 1);
    if ((_QWORD*)GameData_2259500 != v6 + 1) {
      memmove((__int64)v6, (__int64)(v6 + 1),
              GameData_2259500 - (_QWORD)(v6 + 1));
    }
    GameData_2259500 = (__int64)v6 + v10;
  }
LABEL_25:
  v11 = (_QWORD*)a1[146];
  if (v11 == a1 + 142) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_30;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_30:
  v13 = (_QWORD*)a1[140];
  if (v13 == v4) {
    v14 = 32;
    goto LABEL_34;
  }
  if (v13 != nullptr) {
    v14 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

void CmdBtlSystemTroopMenu_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;

  v1 = a1[149];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[150] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = a1 + 136;
  v7 = GameData_2131d60[0] + 1368;
  *a1 = GameData_2131d60[0] + 16;
  a1[22] = v7;
  v8 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v9 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v9 & 0x18) != 0) {
      v10 = ((unsigned __int8)((unsigned int)v9 >> 3) + 1) & 3;
      while ((_QWORD*)*v8 != v6) {
        ++v8;
        if (--v10 == 0) {
          goto LABEL_10;
        }
      }
    }
    else {
    LABEL_10:
      if (v9 < 0x18) {
        goto LABEL_25;
      }
      v8 += 2;
      while (1) {
        if ((_QWORD*)*(v8 - 2) == v6) {
          v8 -= 2;
          goto LABEL_21;
        }
        if ((_QWORD*)*(v8 - 1) == v6) {
          --v8;
          goto LABEL_21;
        }
        if ((_QWORD*)*v8 == v6) {
          goto LABEL_21;
        }
        if ((_QWORD*)v8[1] == v6) {
          break;
        }
        v11 = v8 + 2;
        v8 += 4;
        if (v11 == (_QWORD*)GameData_2259500) {
          goto LABEL_25;
        }
      }
      ++v8;
    }
  }
LABEL_21:
  if (v8 != (_QWORD*)GameData_2259500) {
    v12 = GameData_2259500 - (_QWORD)(v8 + 1);
    if ((_QWORD*)GameData_2259500 != v8 + 1) {
      memmove((__int64)v8, (__int64)(v8 + 1),
              GameData_2259500 - (_QWORD)(v8 + 1));
    }
    GameData_2259500 = (__int64)v8 + v12;
  }
LABEL_25:
  v13 = (_QWORD*)a1[146];
  if (v13 == a1 + 142) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_30;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
LABEL_30:
  v15 = (_QWORD*)a1[140];
  if (v15 == v6) {
    v16 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_35;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
LABEL_35:
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v17, (__int64)a1);
}

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
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  int v17;
  __int64 v18;

  v3 = v15_.v15;
  v17 = 0;
  v15_.v15[0] = GameData_210d168;
  v15_.v15[1] = &v17;
  v5 = *(_QWORD*)(a1 + 232);
  v4 = *(_QWORD*)(a1 + 240);
  v15_.v16 = v15_.v15;
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
    if (v15_.v16 == nullptr) {
      GameRoutine_60a310_alt1();
    }
    if (((*(__int64 (**)(_QWORD*, __int64*))(*v15_.v16 + 48LL))(v15_.v16,
                                                                &v18) &
         1) != 0) {
      break;
    }
    v5 = *(_QWORD*)(a1 + 232);
    v4 = *(_QWORD*)(a1 + 240);
  }
  v3 = v15_.v16;
  if (v15_.v16 != v15_.v15) {
    if (v15_.v16 != nullptr) {
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
  v10 = *(_BYTE*)(a1 + 1216);
  v15_.v16 = v15_.v15;
  v11 = v9 != 0 ? v9 : a1;
  v15_.v15[0] = GameData_210d3f8;
  v15_.v15[1] = a1;
  v12 = GameRoutine_17859d0_alt1(v11, v10, v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v13 = 32;
  LABEL_22:
    (*(void (**)(__int64))(*v15_.v16 + v13))((__int64)v15_.v16);
  }
  else if (v15_.v16 != nullptr) {
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

__int64 CmdBtlSystemTroopMenu_CmdBtlSystemSortieMenuItem_ACall(__int64 a1)
{
  __int64 result;
  char v3;
  char v4;
  char v5;
  const char* v6;
  __int64 (***v7)();
  _QWORD v8[2];
  _BYTE v9[200];

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 584LL))(a1) & 1) != 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1) & 1) != 0) {
    return 1;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1) & 1) != 0) {
    result = 1;
  }
  else {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 712LL))(a1) ^ 1;
    result = 1;
    if ((v3 & 1) == 0) {
      return result;
    }
  }
  if (*(_QWORD*)(a1 + 88) != 0) {
    v4 = CmdBtlSystemSortieMenuItem_Unknown89(a1);
    if (*(_BYTE*)(a1 + 101) == 1) {
      snd_Fade_Fade_10c830(v9, 0.0f);
      snd_play_ff2d0((void*)(v8), "SE_SYS_Sortie_Exclude",
                     "SE_SYS_Sortie_Exclude", v9, 0, 65537, 0, 0.0f, 1.0f);
      snd_Fade_Destroy_Fade(v9);
      v5 = 0;
    }
    else {
      snd_Fade_Fade_10c830(v9, 0.0f);
      if ((v4 & 1) != 0) {
        v6 = "SE_SYS_NG";
      }
      else {
        v6 = "SE_SYS_Sortie_Include";
      }
      snd_play_ff2d0((void*)(v8), v6, v6, v9, 0, 65537, 0, 0.0f, 1.0f);
      snd_Fade_Destroy_Fade(v9);
      v5 = 1;
    }
    *(_BYTE*)(a1 + 101) = v5;
    game_menu_178cf10(a1);
    v7 = *(__int64 (****)())(a1 + 8);
    if (v7 != nullptr &&
        *v7 == game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_vtable &&
        (v4 & 1) != (CmdBtlSystemSortieMenuItem_Unknown89(a1) & 1)) {
      game_menu_BasicMenu_Unknown16dd9a0(v7);
    }
    return 13;
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

void game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_SetupCmdBtlForce(__int64 a1)
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
  v50_.v50[0] = (__int64 (*)(__int64))GameData_210d278;
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
  v14 = *(_DWORD*)(a1 + 1184);
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
    v50_.v50[0] = (__int64 (*)(__int64))GameData_210d2f8;
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
    if (v15 != nullptr && v19 < (signed __int32)*(_DWORD*)(a1 + 1184)) {
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
      v50_.v50[0] = (__int64 (*)(__int64))GameData_210d378;
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
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, (__int64)v52_.v52);
  }
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
