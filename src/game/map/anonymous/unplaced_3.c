#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_8224a0(unsigned __int8);
__int64 MapDrawer_808650(__int64, __int64, int);
__int64 Unit_6dcf40(__int64, int, char);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_OnHpChanged(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 GameData_2131d50[16];
extern __int64 GameData_2131d60[14];
extern __int64 GameData_22400f8;
extern __int64 GameData_2259500;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
void EffectConst_961740(__int64, const char**, __int64, char);
void EffectConst_9619a0(__int64, const char**, __int64, char);
void GameRoutine_17869d0(__int64);
void game_menu_BasicMenu_Destroy_BasicMenu(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_map_anonymous_76f770(__int64 result);
void game_map_anonymous_1783140(_QWORD* a1);
void game_map_anonymous_1783960(_QWORD* a1);

__int64 game_map_anonymous_76f770(__int64 result)
{
  int v1;
  __int64 v2;
  unsigned __int64 v3;
  const char* v4;
  __int64 v5;
  int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int v9;
  char v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  bool v17;
  unsigned __int64 v18;
  const char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  int v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  const char* v34;

  v1 = *(_DWORD*)(result + 160);
  if (v1 == 0) {
    return result;
  }
  v2 = result;
  result = *(_QWORD*)(result + 152);
  if (v1 > 0) {
    result = Unit_6dcf40(result, v1, *(_BYTE*)(v2 + 164));
    if ((_DWORD)result == 0) {
      return result;
    }
    v3 = *(unsigned __int8*)(v2 + 168);
    v4 = (const char*)(v2 + 169);
    v5 = *(_QWORD*)(v2 + 152);
    v6 = result;
    v7 = v3 >> 1;
    v17 = (v3 & 1) == 0;
    v8 = *(_QWORD*)(v2 + 176);
    if (v17) {
      v8 = v7;
    }
    else {
      v4 = *(const char**)(v2 + 184);
    }
    if (v8 == 0) {
      v4 = nullptr;
    }
    v34 = v4;
    v9 = *(unsigned __int8*)(v2 + 192);
    if (v9 == 1) {
      v10 = 1;
    }
    else if (v9 == 2) {
      v10 = 0;
    }
    else {
      v25 = v5;
      v27 = game_8224a0((signed __int32)*(_DWORD*)(v2 + 160) < 1);
      v10 = game_GameModeData_instance_ != 0 &&
            (v28 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)v27)) != 0 &&
            *(_BYTE*)(v28 + 32) != 0;
      v5 = v25;
    }
    EffectConst_961740(v2, &v34, v5, v10);
    goto LABEL_50;
  }
  if (*(_WORD*)(result + 494) != 0) {
    *(_WORD*)(result + 494) = 0;
  }
  if ((*(_BYTE*)(result + 416) & 8) == 0) {
    v11 = *(__int16*)(result + 492);
    v12 = v1;
    LOBYTE(v34) = 0;
    v13 = result;
    v14 = v11 - v1;
    v15 = game_Unit_GetParam(result);
    v16 = v15;
    v17 = *(_WORD*)(v13 + 494) == 0 || v14 == *(__int16*)(v13 + 494);
    if (!v17) {
      *(_WORD*)(v13 + 494) = 0;
    }
    if (v15 >= v14) {
      v16 = v14;
    }
    if (v14 < 0) {
      v16 = 0;
    }
    if (v16 != *(__int16*)(v13 + 492)) {
      *(_WORD*)(v13 + 492) = v16;
      game_Unit_OnHpChanged(v13);
    }
    v18 = *(unsigned __int8*)(v2 + 168);
    v19 = (const char*)(v2 + 169);
    v20 = *(_QWORD*)(v2 + 152);
    v6 = -v12;
    v21 = v18 >> 1;
    v17 = (v18 & 1) == 0;
    v22 = *(_QWORD*)(v2 + 176);
    if (v17) {
      v22 = v21;
    }
    else {
      v19 = *(const char**)(v2 + 184);
    }
    if (v22 == 0) {
      v19 = nullptr;
    }
    v34 = v19;
    v23 = *(unsigned __int8*)(v2 + 192);
    if (v23 == 1) {
      v24 = 1;
    }
    else if (v23 == 2) {
      v24 = 0;
    }
    else {
      v26 = v20;
      v29 = game_8224a0((signed __int32)*(_DWORD*)(v2 + 160) < 1);
      v24 = game_GameModeData_instance_ != 0 &&
            (v30 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)v29)) != 0 &&
            *(_BYTE*)(v30 + 32) != 0;
      v20 = v26;
    }
    EffectConst_9619a0(v2, &v34, v20, v24);
  LABEL_50:
    result = MapDrawer_808650(v2, *(_QWORD*)(v2 + 152), v6);
    if (GameData_22400f8 != 0) {
      v31 = *(_QWORD*)(v2 + 152);
      if (v31 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
        v32 = *(_QWORD*)(v31 + 440);
        if (v32 != 0 && *(unsigned __int8*)(v32 + 16) <= 8u &&
            game_map_UnitFlags_instance_ != 0) {
          v33 = *(unsigned __int8*)(v31 + 2088);
          if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v33) & 1) != 0) {
            *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v33) |= 2u;
          }
        }
      }
    }
  }
  return result;
}

void game_map_anonymous_1783140(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = GameData_2131d50[0] + 440;
  *a1 = GameData_2131d50[0] + 16;
  a1[22] = v2;
  v3 = a1[59];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = (_QWORD*)a1[56];
  if (v4 == a1 + 52) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_8:
  v6 = a1[48];
  if (v6 != 0) {
    a1[49] = v6;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v6);
  }
  GameRoutine_17869d0((__int64)a1);
}

void game_map_anonymous_1783960(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;

  v1 = a1 + 136;
  v3 = GameData_2131d60[0] + 1368;
  *a1 = GameData_2131d60[0] + 16;
  a1[22] = v3;
  v4 = (_QWORD*)game_menu_UnitGridSelectMenu_listeners_;
  if (game_menu_UnitGridSelectMenu_listeners_ != GameData_2259500) {
    v5 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_ - 8;
    if ((~(_BYTE)v5 & 0x18) != 0) {
      v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
      while ((_QWORD*)*v4 != v1) {
        ++v4;
        if (--v6 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v5 < 0x18) {
        goto LABEL_21;
      }
      v4 += 2;
      while (1) {
        if ((_QWORD*)*(v4 - 2) == v1) {
          v4 -= 2;
          goto LABEL_17;
        }
        if ((_QWORD*)*(v4 - 1) == v1) {
          --v4;
          goto LABEL_17;
        }
        if ((_QWORD*)*v4 == v1) {
          goto LABEL_17;
        }
        if ((_QWORD*)v4[1] == v1) {
          break;
        }
        v7 = v4 + 2;
        v4 += 4;
        if (v7 == (_QWORD*)GameData_2259500) {
          goto LABEL_21;
        }
      }
      ++v4;
    }
  }
LABEL_17:
  if (v4 != (_QWORD*)GameData_2259500) {
    v8 = GameData_2259500 - (_QWORD)(v4 + 1);
    if ((_QWORD*)GameData_2259500 != v4 + 1) {
      memmove((__int64)v4, (__int64)(v4 + 1),
              GameData_2259500 - (_QWORD)(v4 + 1));
    }
    GameData_2259500 = (__int64)v4 + v8;
  }
LABEL_21:
  v9 = (_QWORD*)a1[146];
  if (v9 == a1 + 142) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_26;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_26:
  v11 = (_QWORD*)a1[140];
  if (v11 == v1) {
    v12 = 32;
    goto LABEL_30;
  }
  if (v11 != nullptr) {
    v12 = 40;
  LABEL_30:
    (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

#pragma GCC visibility pop
