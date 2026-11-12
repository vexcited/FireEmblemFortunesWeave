#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameConst_7f97f0(_QWORD);
__int64 GameRoutine_82e5c0(_QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 SideStoryFile_12ae4c0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_CountAll(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 nn_time_StandardUserSystemClock_GetCurrentTime(_QWORD);
__int64 nn_time_ToCalendarTime(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212ce68;
extern __int64 (*GameData_1fa66d0[])();
extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212c790;
extern __int64* GameData_212ce90[3];
extern int GameData_21caa68;
extern int GameData_21d87f8;
__int64 game_GameSaveConst_Header_Commit(__int64 a1);
__int64 game_GameSaveConst_Header_Commit_lambda0_Invoke(__int64 a1,
                                                        unsigned __int8* a2);
void __attribute__((noreturn))
GameSaveConst_GlobalSerializer_DeletingDestructor();
_QWORD*
game_UnitPool_Find_6ead60_alt1(__int64*,
                               _DWORD*) __asm__("game_UnitPool_Find_6ead60");
__int64* game_9a28e0(int);
__int64 GameConst_7f97f0_alt1(__int64) __asm__("GameConst_7f97f0");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_GetHero_alt1(unsigned __int8) __asm__("game_GetHero");
__int64 game_UnitPool_CountAll_alt1(int*) __asm__("game_UnitPool_CountAll");

__int64 game_GameSaveConst_Header_Commit(__int64 a1)
{
  _WORD* v1;
  __int64 v3;
  unsigned int* v4;
  char v5;
  __int64 v6;
  int v7;
  int* v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  char v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64* v24;
  int v25;
  __int64 v26;
  __int64* v27;
  int v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  __int64 result;
  __int64 v34;
  struct {
    __int64 v35[4];
    __int64* v36;
  } v35_;
  unsigned __int16 v37;
  unsigned __int8 v38;
  unsigned int v39;
  int v40;

  *(_QWORD*)(a1 + 14) = 0;
  v1 = (_WORD*)(a1 + 14);
  *(_BYTE*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 22) = 0;
  *(_QWORD*)(a1 + 30) = 0;
  *(_QWORD*)(a1 + 4) = 0x10000000000LL;
  *(_WORD*)a1 = 15;
  v3 = game_GameModeData_instance_;
  *(_QWORD*)(a1 + 56) = 0;
  v4 = (unsigned int*)(a1 + 56);
  *(_QWORD*)(a1 + 42) = 0;
  *(_DWORD*)(a1 + 37) = 0;
  *(_DWORD*)(a1 + 50) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 76) = 0;
  *(_DWORD*)(a1 + 78) = 0;
  *(_DWORD*)(a1 + 84) = 0;
  *(_WORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 63) = 0;
  if (v3 != 0) {
    *(_DWORD*)(a1 + 4) = *(_DWORD*)(v3 + 8);
    *(_BYTE*)(a1 + 8) = *(_BYTE*)(v3 + 12);
    *(_BYTE*)(a1 + 9) = *(_BYTE*)(v3 + 13);
    *(_BYTE*)(a1 + 10) = *(_BYTE*)(v3 + 15);
    *(_BYTE*)(a1 + 11) = *(_DWORD*)(v3 + 60);
    *(_BYTE*)(a1 + 12) = *(_DWORD*)(v3 + 64);
    *(_QWORD*)(a1 + 16) = *(_QWORD*)(v3 + 24);
    *(_QWORD*)(a1 + 24) = *(_QWORD*)(v3 + 16);
    v5 = *(_BYTE*)(v3 + 56);
  }
  else {
    v5 = 0;
    *(_BYTE*)(a1 + 12) = 0;
    *(_QWORD*)(a1 + 4) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
  }
  *(_BYTE*)(a1 + 40) = v5;
  if (game_gmap_GmapClock_instance_ != 0) {
    v6 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v6 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v7 = *(_DWORD*)(v6 + 8);
  *(_QWORD*)(a1 + 42) = *(_QWORD*)v6;
  *(_DWORD*)(a1 + 50) = v7;
  v8 = (int*)(v3 + 92);
  if (v3 == 0) {
    v8 = &GameData_21caa68;
  }
  v9 = GameData_21d87f8;
  *(_DWORD*)(a1 + 56) = *v8;
  *(_DWORD*)(a1 + 60) = v9;
  if ((unsigned int)nn_time_StandardUserSystemClock_GetCurrentTime(&v40) != 0 ||
      (unsigned int)nn_time_ToCalendarTime(&v37, v35_.v35, &v40) != 0) {
    v10 = 0;
  }
  else {
    v10 = v37 | ((unsigned __int64)v38 << 16) | ((unsigned __int64)v39 << 24);
  }
  *(_DWORD*)(a1 + 64) = v10;
  v11 = HIWORD(v10);
  *(_WORD*)(a1 + 68) = WORD2(v10);
  v12 = game_GameModeData_instance_;
  *(_BYTE*)(a1 + 70) = v11;
  if (v12 != 0) {
    LODWORD(v12) = *(_DWORD*)(v12 + 2704);
  }
  *(_DWORD*)(a1 + 72) = v12;
  v13 = *GameData_212c790;
  if (*GameData_212c790 != 0) {
    v14 = *(_QWORD*)(v13 + 8);
    v15 = *(_DWORD*)(v14 + 56);
    v16 = *(__int64**)(v14 + 8);
    v17 = *(__int64**)(v14 + 16);
    if (v15 < 0) {
      for (; v16 != v17; ++v16) {
        v18 = (__int64*)*v16;
        if (*(_QWORD*)(*v16 + 96) == 0 && v18[69] == 0) {
          goto LABEL_25;
        }
      }
    }
    else if (v16 != v17) {
      while (1) {
        v19 = *v16++;
        v18 = (__int64*)v19;
        if (*(_DWORD*)(v19 + 84) == v15) {
          break;
        }
        if (v16 == v17) {
          goto LABEL_21;
        }
      }
    LABEL_25:
      v13 = *v18;
      goto LABEL_26;
    }
  LABEL_21:
    v13 = 0;
  }
LABEL_26:
  *(_QWORD*)(a1 + 32) = v13;
  v20 = game_UnitPool_CountAll_alt1((int*)GameData_212ce68);
  v21 = game_GameModeData_instance_;
  *(_BYTE*)(a1 + 76) = v20;
  *(_DWORD*)(a1 + 84) = *(_DWORD*)(v21 + 2716);
  *(_WORD*)(a1 + 88) = *(_WORD*)(v21 + 2720);
  if (*GameData_212ce90[0] != 0) {
    *v1 = *(_WORD*)(*GameData_212ce90[0] + 26);
  }
  v35_.v35[0] = game_GetHero_alt1(9u);
  v40 = 241;
  v22 = game_UnitPool_Find_6ead60_alt1(v35_.v35, &v40);
  if (v22 != nullptr) {
    *(_QWORD*)(a1 + 96) = v22[50];
    v23 = v22[49];
    if (v23 != 0) {
      LODWORD(v23) = *(unsigned __int8*)(v23 + 441);
      if ((_DWORD)v23 == 3) {
        LODWORD(v23) = *((unsigned __int8*)v22 + 2136);
        if ((unsigned int)v23 <= 1) {
          LOBYTE(v23) = 1;
        }
      }
    }
    *(_BYTE*)(a1 + 104) = v23;
  }
  v24 = game_9a28e0(45);
  v25 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v26 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v24);
    if (v26 != 0) {
      if (*(_DWORD*)(v26 + 32) != 0) {
        v25 = 0x8000000;
      }
      else {
        v25 = 0;
      }
    }
    else {
      v25 = 0;
    }
  }
  *v4 = *v4 & 0xF7FFFFFF | v25;
  v27 = game_9a28e0(46);
  v28 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v29 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v27);
    if (v29 != 0) {
      if (*(_DWORD*)(v29 + 32) != 0) {
        v28 = 0x10000000;
      }
      else {
        v28 = 0;
      }
    }
    else {
      v28 = 0;
    }
  }
  v30 = *(_DWORD*)(a1 + 56) & 0xEFFFFFFF | v28;
  *(_DWORD*)(a1 + 56) = v30;
  v31 = v30 & 0xFDFFFFFF;
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 652) != 0) {
    v32 = 0x2000000;
  }
  else {
    v32 = 0;
  }
  *(_DWORD*)(a1 + 56) = v32 | v31;
  v35_.v35[0] = (__int64)GameData_1fa66d0;
  v35_.v35[1] = a1;
  v35_.v36 = v35_.v35;
  GameConst_7f97f0_alt1((__int64)v35_.v35);
  result = (__int64)v35_.v36;
  if (v35_.v36 == v35_.v35) {
    v34 = 32;
  }
  else {
    if (v35_.v36 == nullptr) {
      return result;
    }
    v34 = 40;
  }
  return (*(__int64 (**)(__int64))(*v35_.v36 + v34))((__int64)v35_.v36);
}

__int64 game_GameSaveConst_Header_Commit_lambda0_Invoke(__int64 a1,
                                                        unsigned __int8* a2)
{
  unsigned int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;
  _QWORD v7[2];

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v4 = (_QWORD*)GameRoutine_82e5c0(*a2);
  if (*v4 != 0 && game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v4);
    if (v5 != 0 && *(_DWORD*)(v5 + 32) != 0) {
      *(_WORD*)(v3 + 78) |= 1 << v2;
    }
  }
  result = SideStoryFile_12ae4c0(v2);
  if (result != 0) {
    v7[1] = result;
    result = game_HashString(result);
    v7[0] = result;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v7);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        *(_WORD*)(v3 + 80) |= 1 << v2;
      }
    }
  }
  return result;
}

void __attribute__((noreturn))

GameSaveConst_GlobalSerializer_DeletingDestructor()
{
  __udf(0x8002u);
}

#pragma GCC visibility pop
