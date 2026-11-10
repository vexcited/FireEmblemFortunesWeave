#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1827b90(_QWORD);
__int64 GameRoutine_182aaa0(void);
__int64 GameRoutine_182ac80(void);
__int64 GameRoutine_826140(_QWORD, _QWORD);
__int64 MapBattleHUD_Destructor(_QWORD);
__int64 MapOnMapInfo_1601bf0(_QWORD);
__int64 MapSkillInfo_17ce880(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
extern _UNKNOWN GameData_1b45894;
extern __int64 (*GameData_1f9eaa0[])();
extern __int64 (*GameData_1f9eac0[])();
extern __int64 (*GameData_1f9eb80[])();
extern __int64 (*game_map_MapInfo_vtable[])();
extern __int64 GameData_212d0d0[2];
extern __int64 GameData_212d0d8;
extern __int64 GameData_212d1b0;
extern __int64 GameData_212d220[5];
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21cd128;
extern __int64 GameData_21cf838;
extern __int64 GameData_21cf840;
extern __int64 GameData_21d1e38;
extern __int64 GameData_21d1f10;
extern __int64 GameData_21d3f58;
extern __int64 GameData_21ed080;
extern __int64 GameData_21ed088;
extern __int64 GameData_21ed090;
extern __int64 GameData_21ed0a0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64* GameData_212cff8[3];
extern __int64* GameData_212d560[9];
extern __int64* GameData_212d568[8];
extern __int64* GameData_212d570[7];
extern __int64* GameData_212d578[6];
extern __int64* GameData_212d580[5];
extern int GameData_21ed07c;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_826080(void);
__int64 MapInfo_Destructor(_QWORD* a1);
__int64 MapInfo_824950(__int64 result, _BYTE* a2);
__int64 MapInfo_824f10();
__int64 MapInfo_825040(_QWORD* a1, int a2);
_QWORD* MapInfo_825790(_QWORD* result);
__int64* MapInfo_8258e0(__int64* result, __int64* a2);
__int64 MapInfo_Unknown4();
__int64 MapInfo_825b30();
__int64 MapInfo_Unknown5();
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 MapUnitInfo_182aaa0(void);
__int64 MapInfo_DeletingDestructor();
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_155ea30_alt1(__int64*) __asm__("LayoutAccessor_155ea30");
__int64 MapUnitInfo_182aaa0_alt1(__int64, char) __asm__("MapUnitInfo_182aaa0");
__int64 ProcTransitionAnim_156af20(__int64, int, int, __int64*, __int64,
                                   __int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
void MapInfo_824ca0();

__int64 MapInfo_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64* v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  *a1 = game_map_MapInfo_vtable;
  a1[1] = GameData_1f9eaa0;
  a1[3] = GameData_1f9eac0;
  v2 = (_QWORD*)GameData_212d0d0[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d0d0[0] + 24LL))(
      *(_QWORD*)GameData_212d0d0[0]);
  if (*v2 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
  }
  *v2 = 0;
  v3 = GameData_212d560[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d560[0] + 24LL))(
      *GameData_212d560[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = GameData_212d568[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d568[0] + 24LL))(
      *GameData_212d568[0]);
  if (*v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 8LL))(*v4);
  }
  *v4 = 0;
  v5 = GameData_212d570[0];
  v6 = *GameData_212d570[0];
  v7 = fw_memory_g_heap_manager_ptr;
  if (*GameData_212d570[0] != 0) {
    MapBattleHUD_Destructor(*GameData_212d570[0]);
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v8, v6);
  }
  *v5 = 0;
  v9 = GameData_212d578[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d578[0] + 24LL))(
      *GameData_212d578[0]);
  if (*v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v9 + 8LL))(*v9);
  }
  *v9 = 0;
  v10 = (_QWORD*)GameData_212d220[0];
  (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)GameData_212d220[0] + 240LL) +
                         24LL))(*(_QWORD*)GameData_212d220[0] + 240LL);
  if (*v10 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v10 + 16LL))(*v10);
  }
  *v10 = 0;
  v11 = (_QWORD*)GameData_212d1b0;
  (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)GameData_212d1b0 + 240LL) +
                         24LL))(*(_QWORD*)GameData_212d1b0 + 240LL);
  if (*v11 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v11 + 16LL))(*v11);
  }
  *v11 = 0;
  v12 = (_QWORD*)GameData_212d0d8;
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d0d8 + 24LL))(
      *(_QWORD*)GameData_212d0d8);
  if (*v12 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v12 + 8LL))(*v12);
  }
  *v12 = 0;
  v13 = GameData_212d580[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d580[0] + 24LL))(
      *GameData_212d580[0]);
  result = *v13;
  if (*v13 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v15 = a1[11];
  *v13 = 0;
  if (v15 != 0) {
    v16 = *(_QWORD*)v7;
    a1[12] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v18 = (_QWORD*)a1[6];
  v19 = (_QWORD*)a1[7];
  a1[10] = 0;
  v20 = v19 - v18;
  if (v20 >= 3) {
    do {
      if (*v18 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v21, *v18);
        v18 = (_QWORD*)a1[6];
        v19 = (_QWORD*)a1[7];
      }
      a1[6] = ++v18;
      v20 = v19 - v18;
    } while (v20 > 2);
  }
  if (v20 == 1) {
    v22 = 170;
  }
  else {
    if (v20 != 2) {
      goto LABEL_38;
    }
    v22 = 341;
  }
  a1[9] = v22;

LABEL_38:
  if (v18 != v19) {
    do {
      if (*v18 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v23, *v18);
      }
      ++v18;
    } while (v18 != v19);
    v24 = a1[7];
    v25 = a1[6] - v24;
    if (v25 != 0) {
      a1[7] = v24 + ((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v26 = a1[5];
  if (v26 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v27, v26);
  }
  *a1 = GameData_1f9eb80;
  if (*(_QWORD**)GameData_212cff8[0] == a1) {
    *GameData_212cff8[0] = 0;
    GameData_21ed07c = 0;
  }
  return result;
}

__int64 MapInfo_824950(__int64 result, _BYTE* a2)
{
  __int64 v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v3 = result;
  if (*(unsigned __int8*)(result + 120) != (unsigned __int8)a2[4]) {
    result = GameData_21cf840;
    if (a2[4] != 0) {
      if (GameData_21cf840 != 0) {
        v4 = *(_DWORD*)(GameData_21cf840 + 16);
        *(_DWORD*)(GameData_21cf840 + 16) = v4 + 1;
        if (v4 == 0) {
          result = (**(__int64 (***)(__int64))(result + 8))(result + 8);
        }
      }
    }
    else if (GameData_21cf840 != 0) {
      v12 = *(_DWORD*)(GameData_21cf840 + 16) - 1;
      *(_DWORD*)(GameData_21cf840 + 16) = v12;
      if (v12 == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(
            result + 8);
      }
    }
  }
  if (*(unsigned __int8*)(v3 + 121) != (unsigned __int8)a2[5]) {
    result = GameData_21ed0a0;
    if (a2[5] != 0) {
      if (GameData_21ed0a0 != 0) {
        v5 = *(_DWORD*)(GameData_21ed0a0 + 16);
        *(_DWORD*)(GameData_21ed0a0 + 16) = v5 + 1;
        if (v5 == 0) {
          result = (**(__int64 (***)(__int64))(result + 8))(result + 8);
        }
      }
    }
    else if (GameData_21ed0a0 != 0) {
      v13 = *(_DWORD*)(GameData_21ed0a0 + 16) - 1;
      *(_DWORD*)(GameData_21ed0a0 + 16) = v13;
      if (v13 == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(
            result + 8);
      }
    }
  }
  if (*(unsigned __int8*)(v3 + 122) != (unsigned __int8)a2[6]) {
    result = GameData_21ed080;
    if (a2[6] != 0) {
      if (GameData_21ed080 != 0) {
        v6 = *(_DWORD*)(GameData_21ed080 + 16);
        *(_DWORD*)(GameData_21ed080 + 16) = v6 + 1;
        if (v6 == 0) {
          result = (**(__int64 (***)(__int64))(result + 8))(result + 8);
        }
      }
    }
    else if (GameData_21ed080 != 0) {
      v14 = *(_DWORD*)(GameData_21ed080 + 16) - 1;
      *(_DWORD*)(GameData_21ed080 + 16) = v14;
      if (v14 == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(
            result + 8);
      }
    }
  }
  if (*(unsigned __int8*)(v3 + 123) != (unsigned __int8)a2[7]) {
    result = GameData_21ed090;
    if (a2[7] != 0) {
      if (GameData_21ed090 != 0) {
        v7 = *(_DWORD*)(GameData_21ed090 + 16);
        *(_DWORD*)(GameData_21ed090 + 16) = v7 + 1;
        if (v7 == 0) {
          result = (**(__int64 (***)(__int64))(result + 8))(result + 8);
        }
      }
    }
    else if (GameData_21ed090 != 0) {
      v15 = *(_DWORD*)(GameData_21ed090 + 16) - 1;
      *(_DWORD*)(GameData_21ed090 + 16) = v15;
      if (v15 == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(
            result + 8);
      }
    }
  }
  if (*(unsigned __int8*)(v3 + 124) != (unsigned __int8)a2[8]) {
    result = GameData_21d3f58;
    if (a2[8] != 0) {
      if (GameData_21d3f58 != 0) {
        v8 = *(_DWORD*)(GameData_21d3f58 + 256);
        *(_DWORD*)(GameData_21d3f58 + 256) = v8 + 1;
        if (v8 == 0) {
          result = (**(__int64 (***)(__int64))(result + 248))(result + 248);
        }
      }
    }
    else if (GameData_21d3f58 != 0) {
      v16 = *(_DWORD*)(GameData_21d3f58 + 256) - 1;
      *(_DWORD*)(GameData_21d3f58 + 256) = v16;
      if (v16 == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 248) + 8LL))(
            result + 248);
      }
    }
  }
  if (*(unsigned __int8*)(v3 + 125) != (unsigned __int8)a2[9]) {
    result = GameData_21d1e38;
    if (a2[9] != 0) {
      if (GameData_21d1e38 != 0) {
        v9 = *(_DWORD*)(GameData_21d1e38 + 256);
        *(_DWORD*)(GameData_21d1e38 + 256) = v9 + 1;
        if (v9 == 0) {
          result = (**(__int64 (***)(__int64))(result + 248))(result + 248);
        }
      }
    }
    else if (GameData_21d1e38 != 0) {
      v17 = *(_DWORD*)(GameData_21d1e38 + 256) - 1;
      *(_DWORD*)(GameData_21d1e38 + 256) = v17;
      if (v17 == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 248) + 8LL))(
            result + 248);
      }
    }
  }
  if (*(unsigned __int8*)(v3 + 126) != (unsigned __int8)a2[10]) {
    result = GameData_21cf838;
    if (a2[10] != 0) {
      if (GameData_21cf838 != 0) {
        v10 = *(_DWORD*)(GameData_21cf838 + 16);
        *(_DWORD*)(GameData_21cf838 + 16) = v10 + 1;
        if (v10 == 0) {
          result = (**(__int64 (***)(__int64))(result + 8))(result + 8);
        }
      }
    }
    else if (GameData_21cf838 != 0) {
      v18 = *(_DWORD*)(GameData_21cf838 + 16) - 1;
      *(_DWORD*)(GameData_21cf838 + 16) = v18;
      if (v18 == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(
            result + 8);
      }
    }
  }
  if (*(unsigned __int8*)(v3 + 127) != (unsigned __int8)a2[11]) {
    result = GameData_21ed088;
    if (a2[11] != 0) {
      if (GameData_21ed088 != 0) {
        v11 = *(_DWORD*)(GameData_21ed088 + 16);
        *(_DWORD*)(GameData_21ed088 + 16) = v11 + 1;
        if (v11 == 0) {
          result = (**(__int64 (***)(__int64))(result + 8))(result + 8);
        }
      }
    }
    else if (GameData_21ed088 != 0) {
      v19 = *(_DWORD*)(GameData_21ed088 + 16) - 1;
      *(_DWORD*)(GameData_21ed088 + 16) = v19;
      if (v19 == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(
            result + 8);
      }
    }
  }
  *(_QWORD*)(v3 + 120) = *(_QWORD*)(a2 + 4);
  return result;
}

void MapInfo_824ca0()
{
  __int64 v0;
  int v1;
  bool v2;
  __int64 v3;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE v13[32];

  v0 = GameData_21cd128;
  v1 = *(_DWORD*)(GameData_21cd128 + 116);
  v2 = __OFSUB__(v1--, 1);
  *(_DWORD*)(GameData_21cd128 + 116) = v1;
  if ((v1 < 0) ^ v2 | (v1 == 0)) {
    *(_BYTE*)(v0 + 32) = 1;
    if (GameData_21cf840 == 0 || *(int*)(GameData_21cf840 + 16) <= 0) {
      v3 = *(_QWORD*)(GameData_21cf840 + 160);
      if (v3 != 0 && (*(_BYTE*)(v3 + 417) & 0x1C) == 0 &&
          *(_BYTE*)(GameData_21cf840 + 152) == 0) {
        MapUnitInfo_182aaa0_alt1(GameData_21cf840, 0);
      }
    }
    v5 = GameData_21ed0a0;
    if (*(_QWORD*)(GameData_21ed0a0 + 152) != 0 &&
        *(int*)(GameData_21ed0a0 + 16) <= 0) {
      v6 = LayoutAccessor_155ea30_alt1((__int64*)(GameData_21ed0a0 + 40)) & 1;
      LayoutAccessor_155e830_alt1(v5 + 40, 1);
      if (v6 != (LayoutAccessor_155ea30_alt1((__int64*)(v5 + 40)) & 1)) {
        *(_BYTE*)(v5 + 425) = 1;
      }
    }
    v7 = GameData_21ed080;
    if (GameData_21ed080 == 0 || *(int*)(GameData_21ed080 + 16) <= 0) {
      if (*(_BYTE*)(GameData_21ed080 + 391878) == 1) {
        *(_BYTE*)(GameData_21ed080 + 391878) = 0;
      }
      LayoutAccessor_155e830_alt1(v7 + 40, 1);
      v8 = game_gameui_MenuAnimator_instance_;
      if (game_gameui_MenuAnimator_instance_ != 0) {
        sprintf(v13, "%s%s", "Alpha", "In");
        v9 = ProcTransitionAnim_156af20(v8, 4, 0, (__int64*)(v7 + 40), 0,
                                        (__int64)v13);
      }
      else {
        v9 = -1;
      }
      *(_QWORD*)(v7 + 144) = v9;
    }
    if (GameData_21ed090 == 0 || *(int*)(GameData_21ed090 + 16) <= 0) {
      LayoutAccessor_155e830_alt1(GameData_21ed090 + 40, 1);
    }
    (*(void (**)(__int64))(*(_QWORD*)GameData_21d3f58 + 24LL))(
        GameData_21d3f58);
    (*(void (**)(__int64))(*(_QWORD*)GameData_21d1e38 + 24LL))(
        GameData_21d1e38);
    v10 = GameData_21cf838;
    if ((*(_BYTE*)(GameData_21cf838 + 20) & 1) == 0) {
      *(_BYTE*)(GameData_21cf838 + 20) = 1;
      *(_BYTE*)(v10 + 220) = 1;
    }
    v11 = GameData_21ed088;
    if ((GameData_21ed088 == 0 || *(int*)(GameData_21ed088 + 16) <= 0) &&
        (GameData_21ca2f8 == 0 ||
         game_GameModeData_instance_ != 0 &&
             (v12 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)&GameData_21d1f10)) != 0 &&
             *(_BYTE*)(v12 + 32) != 0)) {
      LayoutAccessor_155e830_alt1(v11 + 40, 1);
    }
  }
}

__int64 MapInfo_824f10()
{
  __int64 v0;
  int v1;
  __int64 v2;
  int v3;

  v0 = GameData_21cd128;
  v1 = *(_DWORD*)(GameData_21cd128 + 116);
  *(_BYTE*)(GameData_21cd128 + 32) = 0;
  *(_DWORD*)(v0 + 116) = v1 + 1;
  if (*(_BYTE*)(GameData_21cf840 + 152) == 0) {
    GameRoutine_182ac80();
  }
  v2 = GameData_21ed0a0;
  v3 = GameRoutine_155ea30(GameData_21ed0a0 + 40) & 1;
  GameRoutine_155e830(v2 + 40, 0);
  if (v3 != (GameRoutine_155ea30(v2 + 40) & 1)) {
    GameRoutine_1827b90(v2);
  }
  MapOnMapInfo_1601bf0(GameData_21ed080);
  MapSkillInfo_17ce880(GameData_21ed090);
  (*(void (**)(__int64))(*(_QWORD*)GameData_21d3f58 + 32LL))(GameData_21d3f58);
  (*(void (**)(__int64))(*(_QWORD*)GameData_21d1e38 + 32LL))(GameData_21d1e38);
  if (*(_BYTE*)(GameData_21cf838 + 20) == 1) {
    *(_BYTE*)(GameData_21cf838 + 20) = 0;
  }
  return GameRoutine_155e830(*GameData_212d580[0] + 40, 0);
}

__int64 MapInfo_825040(_QWORD* a1, int a2)
{
  __int64 v2;
  int v3;
  _QWORD* v4;
  _QWORD* v5;
  _DWORD* v6;
  char v7;
  int v8;
  char v9;
  int v10;
  char v11;
  int v12;
  char v13;
  int v14;
  char v15;
  int v16;
  char v17;
  int v18;
  char v19;
  int v20;
  char v21;
  char* v22;
  char* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  char* v31;
  _QWORD* v32;
  _QWORD* v33;
  char* v34;
  char* v35;
  char* v36;
  signed __int64 v37;
  __int64 v38;
  char* v39;
  unsigned __int64 v40;
  _QWORD* v41;
  __int64 v42;
  char* v43;
  char* v44;
  __int64* v45;
  char* v46;
  char* v47;
  unsigned __int64 v48;
  _QWORD* v49;
  __int64 v50;
  char* v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  signed __int64 v57;
  bool v58;
  signed __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  signed __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  char* v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  signed __int64 v72;
  char* v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 result;
  int v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  signed __int64 v85;
  unsigned __int64 v86;
  _QWORD* v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  _BYTE v94[12];
  __int64 v95;

  v2 = a1[10];
  v3 = a2;
  v4 = a1;
  *(_DWORD*)v94 = a2;
  if (v2 != 0) {
    v5 = (_QWORD*)(*(_QWORD*)(a1[6] + 8 * ((v2 + a1[9] - 1) / 0x155uLL)) +
                   12 * ((v2 + a1[9] - 1) % 0x155uLL) + 4);
  }
  else {
    v5 = a1 + 15;
  }
  *(_QWORD*)&v94[4] = *v5;
  v6 = (_DWORD*)((char*)&GameData_1b45894 + 32 * a2);
  if (*v6 != 0) {
    if (*v6 != 1) {
      goto LABEL_9;
    }
    v7 = 0;
  }
  else {
    v7 = 1;
  }
  v94[4] = v7;

LABEL_9:
  v8 = v6[1];
  if (v8 == 1) {
    v9 = 0;
  }
  else {
    if (v8 != 0) {
      goto LABEL_14;
    }
    v9 = 1;
  }
  v94[5] = v9;

LABEL_14:
  v10 = v6[2];
  if (v10 == 1) {
    v11 = 0;
  }
  else {
    if (v10 != 0) {
      goto LABEL_19;
    }
    v11 = 1;
  }
  v94[6] = v11;

LABEL_19:
  v12 = v6[3];
  if (v12 == 1) {
    v13 = 0;
  }
  else {
    if (v12 != 0) {
      goto LABEL_24;
    }
    v13 = 1;
  }
  v94[7] = v13;

LABEL_24:
  v14 = v6[4];
  if (v14 == 1) {
    v15 = 0;
  }
  else {
    if (v14 != 0) {
      goto LABEL_29;
    }
    v15 = 1;
  }
  v94[8] = v15;

LABEL_29:
  v16 = v6[5];
  if (v16 == 1) {
    v17 = 0;
  }
  else {
    if (v16 != 0) {
      goto LABEL_34;
    }
    v17 = 1;
  }
  v94[9] = v17;

LABEL_34:
  v18 = v6[6];
  if (v18 == 1) {
    v19 = 0;
  }
  else {
    if (v18 != 0) {
      goto LABEL_39;
    }
    v19 = 1;
  }
  v94[10] = v19;

LABEL_39:
  v20 = v6[7];
  if (v20 == 1) {
    v21 = 0;
  }
  else {
    if (v20 != 0) {
      goto LABEL_44;
    }
    v21 = 1;
  }
  v94[11] = v21;

LABEL_44:
  v22 = (char*)a1[6];
  v23 = (char*)a1[7];
  v24 = v23 - v22;
  v25 = (v23 - v22) >> 3;
  if (v23 == v22) {
    v26 = 0;
  }
  else {
    v26 = 341 * v25 - 1;
  }
  v27 = a1[9];
  v28 = v27 + v2;
  if (v26 == v28) {
    if (v27 >= 0x155) {
      a1[9] = v27 - 341;
      v29 = *(_QWORD*)v22;
      a1[6] = v22 + 8;
      v95 = v29;
    LABEL_50:
      GameRoutine_826140(v4 + 5, &v95);
    LABEL_109:
      v22 = (char*)v4[6];
      v28 = v4[10] + v4[9];
      goto LABEL_110;
    }
    v30 = (char*)a1[8];
    v31 = (char*)a1[5];
    if (v24 >= v30 - v31) {
      if (v30 == v31) {
        v40 = 1;
      }
      else {
        v40 = (v30 - v31) >> 2;
      }
      if (v40 >> 61 == 0) {
        v41 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        v42 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40, 16, 0);
        v43 = (char*)(v42 + v24);
        v44 = (char*)(v42 + 8 * v40);
        a1 = (_QWORD*)fw_memory_HeapManager_Allocate(*v41, 4092, 16, 0);
        if (v24 == 8 * v40) {
          if (v23 == v22) {
            v49 = a1;
            v45 = (__int64*)fw_memory_g_heap_manager_ptr;
            v43 = (char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
            v44 = v43 + 8;
            v50 = 128;
            if (*(_QWORD*)(*v45 + 200) == 0) {
              v50 = 56;
            }
            nn_mem_StandardAllocator_Free(*v45 + v50, v42);
            a1 = v49;
            v22 = (char*)v4[6];
            v23 = (char*)v4[7];
            v42 = (__int64)v43;
          }
          else {
            v45 = (__int64*)fw_memory_g_heap_manager_ptr;
            v43 -= 8 * ((v25 + 1 + ((unsigned __int64)(v25 + 1) >> 63)) >> 1);
          }
        }
        else {
          v45 = &fw_memory_g_heap_manager;
        }
        v3 = a2;
        *(_QWORD*)v43 = a1;
        v51 = v43 + 8;
        if (v23 != v22) {
          while (1) {
            if (v43 == (char*)v42) {
              if (v51 >= v44) {
                if (v44 == v43) {
                  v60 = 1;
                }
                else {
                  v60 = (v44 - v43) >> 2;
                }
                if (v60 >> 61 != 0) {
                  goto LABEL_128;
                }
                v61 = fw_memory_HeapManager_Allocate(*v45, 8 * v60, 16, 0);
                v62 = v61;
                v55 = (char*)(v61 + ((2 * v60 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                v63 = v51 - v43;
                v58 = v51 == v43;
                v51 = v55;
                if (!v58) {
                  v51 = &v55[v63];
                  v64 = (_QWORD*)(v61 + ((2 * v60 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  do {
                    v65 = *(_QWORD*)v43;
                    v43 += 8;
                    v63 -= 8LL;
                    *v64++ = v65;
                  } while (v63 != 0);
                }
                v44 = (char*)(v61 + 8 * v60);
                v66 = 128;
                if (*(_QWORD*)(*v45 + 200) == 0) {
                  v66 = 56;
                }
                a1 = (_QWORD*)nn_mem_StandardAllocator_Free(*v45 + v66, v42);
                v42 = v62;
              }
              else {
                v57 = v51 - v43;
                v59 = v51 - v43;
                v58 = v51 == v43;
                v51 +=
                    8 * ((((v44 - v51) >> 3) + 1 +
                          ((unsigned __int64)(((v44 - v51) >> 3) + 1) >> 63)) >>
                         1);
                v55 = &v51[-v57];
                if (!v58) {
                  a1 = (_QWORD*)memmove(&v51[-v57], v43, v59);
                }
              }
            }
            else {
              v55 = v43;
            }
            v56 = *((_QWORD*)v23 - 1);
            v23 -= 8;
            *((_QWORD*)v55 - 1) = v56;
            v52 = v55 - 8;
            v43 = v52;
            if (v23 == (char*)v4[6]) {
              goto LABEL_73;
            }
          }
        }
        v52 = v43;
      LABEL_73:
        v53 = v4[5];
        v4[7] = v51;
        v4[8] = v44;
        v4[5] = v42;
        v4[6] = v52;
        if (v53 != 0) {
          v54 = 128;
          if (*(_QWORD*)(*v45 + 200) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free(*v45 + v54, v53);
        }
        goto LABEL_109;
      }
    }
    else {
      v32 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      a1 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4092, 16, 0);
      v33 = a1;
      if (v30 == v23) {
        v47 = (char*)v4[5];
        v46 = (char*)v4[6];
        if (v46 == v47) {
          v68 = (char*)v4[7];
          v67 = v4[8];
          if ((unsigned __int64)v68 >= v67) {
            v81 = v67 - (_QWORD)v46;
            v58 = v81 == 0;
            v82 = v81 >> 2;
            if (v58) {
              v83 = 1;
            }
            else {
              v83 = v82;
            }
            if (v83 >> 61 != 0) {
              goto LABEL_128;
            }
            v84 = fw_memory_HeapManager_Allocate(*v32, 8 * v83, 16, 0);
            v85 = v68 - v46;
            v48 = v84 + ((2 * v83 + 6) & 0xFFFFFFFFFFFFFFF8LL);
            v86 = v48;
            if (v68 != v46) {
              v86 = v48 + v85;
              v87 = (_QWORD*)(v84 + ((2 * v83 + 6) & 0xFFFFFFFFFFFFFFF8LL));
              v88 = (__int64*)v46;
              do {
                v89 = *v88++;
                v85 -= 8LL;
                *v87++ = v89;
              } while (v85 != 0);
            }
            v4[5] = v84;
            v4[6] = v48;
            v4[7] = v86;
            v4[8] = v84 + 8 * v83;
            if (v46 != nullptr) {
              v90 = 128;
              if (*(_QWORD*)(*v32 + 200LL) == 0) {
                v90 = 56;
              }
              nn_mem_StandardAllocator_Free(*v32 + v90, v47);
              v48 = v4[6];
            }
          }
          else {
            v69 = (((__int64)(v67 - (_QWORD)v68) >> 3) + 1) / 2;
            v48 = (unsigned __int64)&v46[8 * v69];
            if (v68 != v46) {
              memmove(&v46[8 * v69], v4[6], v68 - v46);
              v68 = (char*)v4[7];
            }
            v4[6] = v48;
            v4[7] = &v68[8 * v69];
          }
        }
        else {
          v48 = v4[6];
        }
        *(_QWORD*)(v48 - 8) = v33;
        v91 = v4[6];
        v4[6] = v91 - 8;
        v92 = *(_QWORD*)(v91 - 8);
        v4[6] = v91;
        v95 = v92;
        goto LABEL_50;
      }
      v34 = (char*)v4[7];
      if (v34 != (char*)v4[8]) {
      LABEL_108:
        *(_QWORD*)v34 = v33;
        v4[7] += 8LL;
        goto LABEL_109;
      }
      v36 = (char*)v4[5];
      v35 = (char*)v4[6];
      if (v35 > v36) {
        v37 = v34 - v35;
        v38 = ((v35 - v36) >> 3) + 1;
        v39 = &v35[-8 * (v38 / 2)];
        if (v37 != 0) {
          memmove(&v35[-8 * (v38 / 2)], v4[6], v37);
          v35 = (char*)v4[6];
        }
        v34 = &v39[v37];
        v4[6] = &v35[8 * (v38 / -2)];
        v4[7] = v34;
        goto LABEL_108;
      }
      if (v34 == v36) {
        v70 = 1;
      }
      else {
        v70 = (v34 - v36) >> 2;
      }
      if (v70 >> 61 == 0) {
        v71 = fw_memory_HeapManager_Allocate(*v32, 8 * v70, 16, 0);
        v72 = v34 - v35;
        v58 = v34 == v35;
        v73 = (char*)(v71 + 8 * (v70 >> 2));
        v34 = v73;
        if (!v58) {
          v34 = &v73[v72];
          v74 = (_QWORD*)(v71 + 8 * (v70 >> 2));
          do {
            v75 = *(_QWORD*)v35;
            v35 += 8;
            v72 -= 8LL;
            *v74++ = v75;
          } while (v72 != 0);
        }
        v4[5] = v71;
        v4[6] = v73;
        v4[7] = v34;
        v4[8] = v71 + 8 * v70;
        if (v36 != nullptr) {
          v76 = 128;
          if (*(_QWORD*)(*v32 + 200LL) == 0) {
            v76 = 56;
          }
          nn_mem_StandardAllocator_Free(*v32 + v76, v36);
          v34 = (char*)v4[7];
        }
        goto LABEL_108;
      }
    }
  LABEL_128:
    GameRoutine_60a210(a1);
  }

LABEL_110:
  v77 = *(_QWORD*)&v22[8 * (v28 / 0x155)] + 12 * (v28 % 0x155);
  v78 = *(_QWORD*)v94;
  *(_DWORD*)(v77 + 8) = *(_DWORD*)&v94[8];
  *(_QWORD*)v77 = v78;
  ++v4[10];
  result = MapInfo_8258e0(v4 + 11, v94);
  if (*((int*)v4 + 28) <= 0) {
    if (v3 == 18) {
      v80 = 3;
    }
    else {
      v80 = 2;
    }
    *((_DWORD*)v4 + 28) = v80;
  }
  return result;
}

_QWORD* MapInfo_825790(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;

  v1 = result[10];
  if (v1 != 0) {
    v3 = result[6];
    v2 = result[7];
    v4 = result;
    v5 = result[9];
    if (v2 == v3) {
      v6 = 0;
    }
    else {
      v6 = 341 * ((v2 - v3) >> 3) - 1;
    }
    v7 = v1 - 1;
    v8 = *(_DWORD*)(*(_QWORD*)(v3 + 8 * ((v5 + v1 - 1) / 0x155uLL)) +
                    12 * ((v5 + v1 - 1) % 0x155uLL));
    result[10] = v1 - 1;
    if ((unsigned __int64)(v6 - (v1 + v5) + 1) >= 0x2AA) {
      v9 = *(_QWORD*)(v2 - 8);
      if (v9 != 0) {
        v10 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v10 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
        v2 = v4[7];
        v7 = v4[10];
      }
      v4[7] = v2 - 8;
    }
    if (v7 != 0) {
      result = (_QWORD*)MapInfo_8258e0(
          v4 + 11, *(_QWORD*)(v4[6] + 8 * ((v7 + v4[9] - 1) / 0x155uLL)) +
                       12 * ((v7 + v4[9] - 1) % 0x155uLL));
      if (*((int*)v4 + 28) <= 0) {
        if (v8 == 18) {
          v11 = 3;
        }
        else {
          v11 = 2;
        }
        *((_DWORD*)v4 + 28) = v11;
      }
    }
  }
  return result;
}

__int64* MapInfo_8258e0(__int64* result, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  v3 = result[1];
  v2 = result[2];
  v4 = result;
  if (v3 >= v2) {
    v7 = *result;
    v8 = v3 - *result;
    v9 = 1 - 0x5555555555555555LL * (v8 >> 2);
    if (v9 > 0x1555555555555555LL) {
      GameRoutine_826080();
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v2 - v7) >> 2);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0xAAAAAAAAAAAAAAALL) {
      v12 = 0x1555555555555555LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x1555555555555555LL) {
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 12 * v12, 16, 0);
      a2 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    v16 = v14 + 12 * v12;
    v6 = v14 + v8 + 12;
    *(_QWORD*)v15 = *a2;
    *(_DWORD*)(v15 + 8) = *((_DWORD*)a2 + 2);
    result = (__int64*)memcpy(v14, v7, v8);
    *v4 = v14;
    v4[1] = v6;
    v4[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    v5 = *a2;
    v6 = v3 + 12;
    *(_DWORD*)(v3 + 8) = *((_DWORD*)a2 + 2);
    *(_QWORD*)v3 = v5;
  }
  v4[1] = v6;
  return result;
}

__int64 MapInfo_Unknown4()
{
  __int64 v0;
  int v1;

  if (*(_BYTE*)(GameData_21cf840 + 152) == 0) {
    GameRoutine_182ac80();
  }
  v0 = GameData_21ed0a0;
  v1 = GameRoutine_155ea30(GameData_21ed0a0 + 40) & 1;
  GameRoutine_155e830(v0 + 40, 0);
  if (v1 != (GameRoutine_155ea30(v0 + 40) & 1)) {
    GameRoutine_1827b90(v0);
  }
  MapOnMapInfo_1601bf0(GameData_21ed080);
  (*(void (**)(__int64))(*(_QWORD*)GameData_21d3f58 + 32LL))(GameData_21d3f58);
  (*(void (**)(__int64))(*(_QWORD*)GameData_21d1e38 + 32LL))(GameData_21d1e38);
  if (*(_BYTE*)(GameData_21cf838 + 20) == 1) {
    *(_BYTE*)(GameData_21cf838 + 20) = 0;
  }
  return GameRoutine_155e830(*GameData_212d580[0] + 40, 0);
}

__int64 MapInfo_825b30()
{
  __int64 v0;
  int v1;

  if (*(_BYTE*)(GameData_21cf840 + 152) == 0) {
    GameRoutine_182ac80();
  }
  v0 = GameData_21ed0a0;
  v1 = GameRoutine_155ea30(GameData_21ed0a0 + 40) & 1;
  GameRoutine_155e830(v0 + 40, 0);
  if (v1 != (GameRoutine_155ea30(v0 + 40) & 1)) {
    GameRoutine_1827b90(v0);
  }
  MapOnMapInfo_1601bf0(GameData_21ed080);
  (*(void (**)(__int64))(*(_QWORD*)GameData_21d3f58 + 32LL))(GameData_21d3f58);
  (*(void (**)(__int64))(*(_QWORD*)GameData_21d1e38 + 32LL))(GameData_21d1e38);
  if (*(_BYTE*)(GameData_21cf838 + 20) == 1) {
    *(_BYTE*)(GameData_21cf838 + 20) = 0;
  }
  return GameRoutine_155e830(*GameData_212d580[0] + 40, 0);
}

__int64 MapInfo_Unknown5()
{
  __int64 v0;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  _BYTE v10[32];

  if (GameData_21cf840 == 0 || *(int*)(GameData_21cf840 + 16) <= 0) {
    v0 = *(_QWORD*)(GameData_21cf840 + 160);
    if (v0 != 0 && (*(_BYTE*)(v0 + 417) & 0x1C) == 0 &&
        *(_BYTE*)(GameData_21cf840 + 152) == 0) {
      GameRoutine_182aaa0();
    }
  }
  v2 = GameData_21ed0a0;
  if (*(_QWORD*)(GameData_21ed0a0 + 152) != 0 &&
      *(int*)(GameData_21ed0a0 + 16) <= 0) {
    v3 = GameRoutine_155ea30(GameData_21ed0a0 + 40) & 1;
    GameRoutine_155e830(v2 + 40, 1);
    if (v3 != (GameRoutine_155ea30(v2 + 40) & 1)) {
      *(_BYTE*)(v2 + 425) = 1;
    }
  }
  v4 = GameData_21ed080;
  if (GameData_21ed080 == 0 || *(int*)(GameData_21ed080 + 16) <= 0) {
    if (*(_BYTE*)(GameData_21ed080 + 391878) == 1) {
      *(_BYTE*)(GameData_21ed080 + 391878) = 0;
    }
    GameRoutine_155e830(v4 + 40, 1);
    v5 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf(v10, "%s%s", "Alpha", "In");
      v6 = GameRoutine_156af20(v5, 4, 0, v4 + 40, 0, v10);
    }
    else {
      v6 = -1;
    }
    *(_QWORD*)(v4 + 144) = v6;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_21d3f58 + 24LL))(GameData_21d3f58);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_21d1e38 + 24LL))(
      GameData_21d1e38);
  v8 = GameData_21cf838;
  if ((*(_BYTE*)(GameData_21cf838 + 20) & 1) == 0) {
    *(_BYTE*)(GameData_21cf838 + 20) = 1;
    *(_BYTE*)(v8 + 220) = 1;
  }
  v9 = GameData_21ed088;
  if (GameData_21ed088 == 0 || *(int*)(GameData_21ed088 + 16) <= 0) {
    if (GameData_21ca2f8 == 0) {
      return GameRoutine_155e830(v9 + 40, 1);
    }
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1f10);
      if (result != 0 && *(_BYTE*)(result + 32) != 0) {
        return GameRoutine_155e830(v9 + 40, 1);
      }
    }
  }
  return result;
}

__int64 MapInfo_DeletingDestructor()
{
  __int64 v0;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  _BYTE v10[32];

  if (GameData_21cf840 == 0 || *(int*)(GameData_21cf840 + 16) <= 0) {
    v0 = *(_QWORD*)(GameData_21cf840 + 160);
    if (v0 != 0 && (*(_BYTE*)(v0 + 417) & 0x1C) == 0 &&
        *(_BYTE*)(GameData_21cf840 + 152) == 0) {
      MapUnitInfo_182aaa0();
    }
  }
  v2 = GameData_21ed0a0;
  if (*(_QWORD*)(GameData_21ed0a0 + 152) != 0 &&
      *(int*)(GameData_21ed0a0 + 16) <= 0) {
    v3 = LayoutAccessor_155ea30(GameData_21ed0a0 + 40) & 1;
    LayoutAccessor_155e830(v2 + 40, 1);
    if (v3 != (LayoutAccessor_155ea30(v2 + 40) & 1)) {
      *(_BYTE*)(v2 + 425) = 1;
    }
  }
  v4 = GameData_21ed080;
  if (GameData_21ed080 == 0 || *(int*)(GameData_21ed080 + 16) <= 0) {
    if (*(_BYTE*)(GameData_21ed080 + 391878) == 1) {
      *(_BYTE*)(GameData_21ed080 + 391878) = 0;
    }
    LayoutAccessor_155e830(v4 + 40, 1);
    v5 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf(v10, "%s%s", "Alpha", "In");
      v6 = GameRoutine_156af20(v5, 4, 0, v4 + 40, 0, v10);
    }
    else {
      v6 = -1;
    }
    *(_QWORD*)(v4 + 144) = v6;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_21d3f58 + 24LL))(GameData_21d3f58);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_21d1e38 + 24LL))(
      GameData_21d1e38);
  v8 = GameData_21cf838;
  if ((*(_BYTE*)(GameData_21cf838 + 20) & 1) == 0) {
    *(_BYTE*)(GameData_21cf838 + 20) = 1;
    *(_BYTE*)(v8 + 220) = 1;
  }
  v9 = GameData_21ed088;
  if (GameData_21ed088 == 0 || *(int*)(GameData_21ed088 + 16) <= 0) {
    if (GameData_21ca2f8 == 0) {
      return LayoutAccessor_155e830(v9 + 40, 1);
    }
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1f10);
      if (result != 0 && *(_BYTE*)(result + 32) != 0) {
        return LayoutAccessor_155e830(v9 + 40, 1);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
