#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleInfoWindowBase_DeletingDestructor(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_17c5b50(__int64 result);
__int64 GameRoutine_1832b70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1833f20(void);
__int64 GameRoutine_1835440(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_18aee60(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_20d8dd0[])();
extern __int64 (*GameData_20d8e00[])();
extern __int64 (*GameData_20d8ea8[])();
extern __int64 (*game_cmdbtl_CmdBtlInfoWindow_vtable[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21f1e08;
extern __int64 GameData_2203490;
extern __int64 GameData_221b2e0;
extern __int64 GameData_221b2e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_empty_item;
extern __int64 game_g_game_setting;
extern __int64* GameData_212f628[9];
extern int GameData_226576c;
__int64 CmdBtlInfoWindow_DeletingDestructor(_QWORD* a1);
__int64 CmdBtlInfoWindow_17c58a0(_QWORD* a1);
__int64 CmdBtlInfoWindow_Unknown2(_QWORD* a1);
__int64 CmdBtlInfoWindow_17c5a60(_QWORD* a1);
__int64 CmdBtlInfoWindow_Unknown3(__int64 result);
__int64 CmdBtlInfoWindow_Destructor();
bool CmdBtlInfoWindow_Unknown5(__int64 a1, unsigned __int8* a2);
const char* CmdBtlInfoWindow_Unknown28(__int64 a1, char a2);
bool CmdBtlInfoWindow_Unknown25(__int64 a1);
__int64 CmdBtlInfoWindow_Unknown15(__int64* a1, unsigned __int8 a2);
__int64 CmdBtlInfoWindow_Unknown20(__int64 a1, __int64 a2, _QWORD* a3,
                                   __int64 a4);
__int64 CmdBtlInfoWindow_Unknown21(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 CmdBtlInfoWindow_17c7ba0(__int64 a1);

__int64 CmdBtlInfoWindow_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_cmdbtl_CmdBtlInfoWindow_vtable;
  a1[30] = GameData_20d8dd0;
  a1[31] = GameData_20d8e00;
  v2 = a1[1];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[2];
  a1[1] = 0;
  a1[2] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 3);
  a1[30] = GameData_20d8ea8;
  if ((_QWORD*)GameData_221b2e8 == a1) {
    GameData_221b2e8 = 0;
    GameData_226576c = 0;
  }
  return BattleInfoWindowBase_DeletingDestructor(a1);
}

__int64 CmdBtlInfoWindow_17c58a0(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  *(a1 - 30) = game_cmdbtl_CmdBtlInfoWindow_vtable;
  v2 = a1 - 30;
  *a1 = GameData_20d8dd0;
  a1[1] = GameData_20d8e00;
  v3 = *(a1 - 29);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(a1 - 28);
  *(a1 - 29) = 0;
  *(a1 - 28) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1 - 27);
  *a1 = GameData_20d8ea8;
  if ((_QWORD*)GameData_221b2e8 == v2) {
    GameData_221b2e8 = 0;
    GameData_226576c = 0;
  }
  return BattleInfoWindowBase_DeletingDestructor(v2);
}

__int64 CmdBtlInfoWindow_Unknown2(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_cmdbtl_CmdBtlInfoWindow_vtable;
  a1[30] = GameData_20d8dd0;
  a1[31] = GameData_20d8e00;
  v2 = a1[1];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[2];
  a1[1] = 0;
  a1[2] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 3);
  a1[30] = GameData_20d8ea8;
  if ((_QWORD*)GameData_221b2e8 == a1) {
    GameData_221b2e8 = 0;
    GameData_226576c = 0;
  }
  BattleInfoWindowBase_DeletingDestructor(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 CmdBtlInfoWindow_17c5a60(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(a1 - 30) = game_cmdbtl_CmdBtlInfoWindow_vtable;
  v2 = a1 - 30;
  *a1 = GameData_20d8dd0;
  a1[1] = GameData_20d8e00;
  v3 = *(a1 - 29);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(a1 - 28);
  *(a1 - 29) = 0;
  *(a1 - 28) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1 - 27);
  *a1 = GameData_20d8ea8;
  if ((_QWORD*)GameData_221b2e8 == v2) {
    GameData_221b2e8 = 0;
    GameData_226576c = 0;
  }
  BattleInfoWindowBase_DeletingDestructor(v2);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v2);
}

__int64 CmdBtlInfoWindow_Unknown3(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = result;
  if (*GameData_212f628[0] == 0 || *(int*)(*GameData_212f628[0] + 256) <= 0) {
    if ((GameRoutine_1832b70(result, 0, 0) & 1) != 0) {
      *(_BYTE*)(v1 + 204) = 1;
      GameRoutine_17c5b50(v1);
      v2 = GameData_21f1e08;
      if (GameData_21f1e08 != 0) {
        *(_BYTE*)(GameData_21f1e08 + 256) = 0;
        GameRoutine_18aee60(v2, v1 + 24);
        GameRoutine_18ae960(v2, 1);
        v3 = *(_QWORD*)(v2 + 240);
        *(_QWORD*)(v2 + 232) = 0;
        *(_QWORD*)(v2 + 240) = 0;
        if (v3 != 0) {
          std___1___shared_weak_count___release_weak(v3);
        }
        *(_BYTE*)(v2 + 257) = 0;
        *(_DWORD*)(v2 + 248) = -1;
        v4 = GameData_21f1e08;
        if (GameData_21f1e08 != 0) {
          *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
          *(_QWORD*)(v4 + 276) = 0xC4048000446D8000LL;
        }
      }
    }
    return GameRoutine_155e830(v1 + 24, 1);
  }
  return result;
}

__int64 CmdBtlInfoWindow_Destructor()
{
  unsigned int v0;
  __int64 result;

  if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
      ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
       *(_BYTE*)(game_g_game_setting + 940) == 1 &&
           (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
           (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_8;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_8:
    if (GameData_221b2e0 != 0) {
      v0 = *(_DWORD*)(GameData_221b2e0 + 23040);
      if (v0 - 1 >= 3) {
        return 0;
      }
      else {
        return v0;
      }
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_8;
  }
  return result;
}

bool CmdBtlInfoWindow_Unknown5(__int64 a1, unsigned __int8* a2)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 152) + 760LL * *a2 + 32) == 0;
}

const char* CmdBtlInfoWindow_Unknown28(__int64 a1, char a2)
{
  if (a2 != 0) {
    return "Out";
  }
  else {
    return "In";
  }
}

bool CmdBtlInfoWindow_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v18;
  unsigned int v20;
  int v21;

  v1 = GameData_2203490;
  if (GameData_2203490 == 0) {
    return false;
  }
  v2 = *(_QWORD*)(GameData_2203490 + 640);
  v3 = *(_QWORD*)(GameData_2203490 + 648);
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v11 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    a1 = v11;
    if (v2 != 0) {
      goto LABEL_5;
    }
  }
  else if (v2 != 0) {
    goto LABEL_5;
  }
  v2 = *(_QWORD*)(v1 + 656);
  v12 = *(_QWORD*)(v1 + 664);
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v13 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
      a1 = v13;
    }
  }

LABEL_5:
  if ((unsigned int)*(unsigned __int8*)(v2 + 8) - 2 > 2) {
    return true;
  }
  v4 = *(_QWORD*)(a1 + 152);
  if (v4 == 0) {
    return false;
  }
  if (*(_WORD*)(v4 + 60) != 0) {
    v5 = *(unsigned __int16*)(v4 + 60);
  }
  else {
    v14 = *(unsigned int*)(v4 + 56);
    if ((v14 & 0x80000000) != 0) {
      v5 = (unsigned __int16)game_g_empty_item;
      if ((_WORD)game_g_empty_item == 0) {
        goto LABEL_23;
      }
    }
    else {
      v5 = *(unsigned __int16*)(*(_QWORD*)(v4 + 40) + 8 * v14 + 828);
      if (v5 == 0) {
        goto LABEL_23;
      }
    }
  }
  v6 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v5);
  v7 = *(unsigned __int8*)(v6 + 72);
  v8 = *(unsigned __int8*)(v6 + 73);
  if (v7 <= 7 && v8 == 7) {
    return true;
  }

LABEL_23:
  v15 = *(_QWORD*)(v4 + 72);
  if (v15 != 0 &&
      (((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v15 + 104)) & 1) !=
          0) {
    v16 = *(unsigned __int8*)(v15 + 106);
    if (*(_BYTE*)(v15 + 106) == 0 || v16 == 6) {
      v18 = *(_QWORD*)(v15 + 576);
      if (v18 != 0) {
      LABEL_34:
        if (*(unsigned __int8*)(v18 + 72) <= 7u && *(_BYTE*)(v18 + 73) == 1) {
          return true;
        }
        goto LABEL_41;
      }
    }
    else {
      if (v16 == 1) {
        v18 = *(_QWORD*)(v15 + 576);
        if (v18 == 0) {
          return true;
        }
        goto LABEL_34;
      }
      v18 = *(_QWORD*)(v15 + 576);
      if (v18 != 0) {
      LABEL_41:
        v20 = *(unsigned __int8*)(v18 + 72);
        v21 = *(unsigned __int8*)(v18 + 73);
        return v20 <= 7 && v21 == 7;
      }
    }
  }
  return false;
}

__int64 CmdBtlInfoWindow_Unknown15(__int64* a1, unsigned __int8 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _BYTE v7[4];

  result = GameRoutine_1833f20();
  v5 = a1[19] + 760LL * a2;
  if (*(_QWORD*)(v5 + 40) != 0) {
    v6 = *a1;
    v7[0] = a2;
    result = (*(__int64 (**)(__int64*, _BYTE*))(v6 + 40))(a1, v7);
    if ((result & 1) != 0) {
      a1[21] = *(_QWORD*)(v5 + 72);
    }
  }
  return result;
}

__int64 CmdBtlInfoWindow_Unknown20(__int64 a1, __int64 a2, _QWORD* a3,
                                   __int64 a4)
{
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;

  if (a4 != 0) {
    v4 = *(_WORD*)(a4 + 16) & 0xFFF;
  }
  else {
    v4 = 0;
  }
  v5 = a3[182];
  if ((v4 >> 5) + 1 > (unsigned __int64)((a3[183] - v5) >> 2)) {
    goto LABEL_16;
  }
  if (((*(_DWORD*)(v5 + 4LL * (v4 >> 5)) >> v4) & 1) == 0) {
    goto LABEL_16;
  }
  v6 = a3[187];
  v7 = a3[186];
  if (v6 == v7) {
    goto LABEL_16;
  }
  v8 = (v6 - v7) >> 2;
  v9 = 0;
  while (((*(_DWORD*)(v7 + 4 * v9) ^ v4) & 0xFFF) != 0) {
    if (v8 == ++v9) {
      goto LABEL_16;
    }
  }
  if (v9 < 0) {
  LABEL_16:
    v18 = 0xFFFFFFFFLL;
  }
  else {
    v10 = *(_DWORD*)(v7 + 4LL * (unsigned int)v9);
    v11 = v10 & 0xFFF;
    v12 = (v10 >> 19) & 0x1F;
    v13 = (v10 >> 12) & 0x7F;
    v14 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v11);
    v15 = *(unsigned __int8*)(v14 + 104);
    v16 = *(unsigned __int8*)(v14 + 273);
    if ((unsigned int)(v15 - 5) >= 2) {
      v17 = 0;
    }
    else {
      v17 = v12;
    }
    v18 = (v17 - v13 + v16) & (unsigned int)~((v17 - v13 + v16) >> 31);
  }
  return GameRoutine_1835440(a1, a2, v18, (unsigned int)(v18 - 1), (int)v18 > 0,
                             "MID_Sys_Remaining");
}

__int64 CmdBtlInfoWindow_Unknown21(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  const char* v12;

  v4 = *(_QWORD*)(a3 + 8);
  v5 = *(unsigned __int8*)(v4 + 3068);
  v6 = v4 + 3064;
  if (v5 != 1) {
    v9 = v4 + 3086;
    do {
      v10 = *(unsigned __int8*)(v9 + 46);
      v9 += 64;
    } while (v10 != 1);
    v7 = 12LL * *(unsigned __int8*)(a3 + 16);
    v8 = *(unsigned __int16*)(v9 + v7);
    goto LABEL_7;
  }
  v7 = 12LL * *(unsigned __int8*)(a3 + 16);
  v8 = *(unsigned __int16*)(v4 + v7 + 3086);
  do {
    v5 = *(unsigned __int8*)(v6 + 68);
    v6 += 64;
  LABEL_7:;
  } while (v5 != 24);
  v11 = *(unsigned __int16*)(v6 + v7 + 22);
  if ((a4 & 1) != 0) {
    v12 = "MID_Sys_Remaining";
  }
  else {
    v12 = "MID_Sys_WeaponEndure";
  }
  return GameRoutine_1835440(a1, a2, (unsigned int)(__int16)v8,
                             (unsigned int)(__int16)v11, v8 != v11, v12);
}

__int64 CmdBtlInfoWindow_17c7ba0(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 248) + 24LL))(a1 - 248);
}

#pragma GCC visibility pop
