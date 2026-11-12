#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_facility_anonymous_ObeliskDestinyMenuItem_vtable[])();
extern __int64 (*game_menu_EmptyMenuItem_vtable[])();
extern __int64 GameData_21c9c20;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcObeliskDestinyMenu_Unknown91(_QWORD* a1, int a2);
__int64 ProcObeliskDestinyMenu_Unknown128(__int64 a1);
__int64 ProcObeliskDestinyMenu_Unknown143_alt1(_BYTE* a1, __int64* a2) __asm__(
    "ProcObeliskDestinyMenu_Unknown143");
__int64 GameRoutine_990c70(_QWORD);
__int64 ObeliskDestinyMenuItem_1a06510(_QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a06cc0(_QWORD, _QWORD, _QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 ProcObeliskDestinyMenu_Unknown12(__int64 a1, __int64 a2, char a3);
__int64 game_facility_anonymous_ProcObeliskDestinyMenu_ZLCall_closure_Invoke(
    __int64 a1);
bool game_facility_anonymous_ProcObeliskDestinyMenu_SortAndFilter_closure_Invoke_1932fe0(
    __int64 a1, __int64* a2);
bool game_facility_anonymous_ProcObeliskDestinyMenu_SortAndFilter_closure_Invoke_1933110(
    __int64 a1, __int64* a2, __int64* a3);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_16497b0(_QWORD, _QWORD);
__int64 MapSortieMenu_871860(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_2116200[])();
extern __int64 (*GameData_2116280[])();
__int64 game_facility_anonymous_ProcObeliskDestinyMenu_ZLCall(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcObeliskDestinyMenu_Unknown143(_BYTE* a1, __int64* a2);

__int64 ProcObeliskDestinyMenu_Unknown91(_QWORD* a1, int a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64 v9;

  switch (a2) {
  case 12:
    v5 = a1[42];
    if (v5 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 64LL))(v5, 1);
    }
    result = (*(__int64 (**)(_QWORD*))(*a1 + 568LL))(a1);
    break;
  case 11:
  LABEL_6:
    result = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    break;
  case 10:
    v3 = a1[42];
    if (v3 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 64LL))(v3, 1);
    }
    goto LABEL_6;
  default:
    result = (*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1);
    break;
  }
  if (*((_BYTE*)a1 + 1064) != 1) {
    goto LABEL_23;
  }
  v6 = *(__int64**)(GameData_21c9c20 + 64);
  v7 = *(__int64**)(GameData_21c9c20 + 72);
  if (v6 == v7) {
    goto LABEL_23;
  }
  v8 = 0;
  do {
    if (game_GameModeData_instance_ != 0) {
      v9 = *v6;
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48),
          *(_QWORD*)(*v6 + 24) + 32LL);
      if ((result == 0 || *(_BYTE*)(result + 32) != 4) &&
          game_GameModeData_instance_ != 0) {
        result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48),
            *(_QWORD*)(v9 + 24) + 32LL);
        if (result != 0 && *(_BYTE*)(result + 32) != 0) {
          v8 += *(unsigned __int16*)(v9 + 64);
        }
      }
    }
    ++v6;
  } while (v6 != v7);
  if (v8 == 0) {
  LABEL_23:
    *((_BYTE*)a1 + 1064) = 0;
    return GameRoutine_1567590("AllRecieve", 1);
  }
  return result;
}

__int64 game_facility_anonymous_ProcObeliskDestinyMenu_ZLCall(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  _QWORD v13[4];
  _QWORD* v14;
  _QWORD v15[4];
  _QWORD* v16;
  _QWORD v17[4];
  _QWORD* v18;
  const char* v19;

  if (*(_BYTE*)(a1 + 1064) == 1) {
    v1 = *(__int64**)(GameData_21c9c20 + 64);
    v2 = *(__int64**)(GameData_21c9c20 + 72);
    if (v1 != v2) {
      v4 = 0;
      do {
        if (game_GameModeData_instance_ != 0) {
          v5 = *v1;
          v6 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48),
              *(_QWORD*)(*v1 + 24) + 32LL);
          if ((v6 == 0 || *(_BYTE*)(v6 + 32) != 4) &&
              game_GameModeData_instance_ != 0) {
            v7 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48),
                *(_QWORD*)(v5 + 24) + 32LL);
            if (v7 != 0 && *(_BYTE*)(v7 + 32) != 0) {
              v4 += *(unsigned __int16*)(v5 + 64);
            }
          }
        }
        ++v1;
      } while (v1 != v2);
      if (v4 >= 1) {
        v17[2] = (unsigned int)v4;
        v19 = "MID_AchieveMenu_ReceiveAll_Confirm";
        v15[0] = GameData_2116280;
        v13[0] = GameData_2116280;
        v14 = v13;
        v17[0] = GameData_2116200;
        v17[1] = a1;
        v18 = v17;
        v16 = v15;
        v8 = MapSortieMenu_871860(a1);
        if (v14 == v13) {
          v9 = 32;
        }
        else {
          if (v14 == nullptr) {
            goto LABEL_20;
          }
          v9 = 40;
        }
        (*(void (**)(__int64))(*v14 + v9))((__int64)v14);
      LABEL_20:
        if (v16 == v15) {
          v11 = 32;
        }
        else {
          if (v16 == nullptr) {
            goto LABEL_25;
          }
          v11 = 40;
        }
        (*(void (**)(__int64))(*v16 + v11))((__int64)v16);
      LABEL_25:
        if (v18 == v17) {
          v12 = 32;
        }
        else {
          if (v18 == nullptr) {
          LABEL_30:
            GameRoutine_16497b0(v8, "SE_SYS_Decide_L");
            return 11;
          }
          v12 = 40;
        }
        (*(void (**)(__int64))(*v18 + v12))((__int64)v18);
        goto LABEL_30;
      }
    }
  }
  snd_Fade_Fade_10c830(v17, 0.0f);
  snd_play_ff2d0((void*)(v15), "SE_SYS_NG", "SE_SYS_NG", v17, 0, 65537, 0, 0.0f,
                 1.0f);
  snd_Fade_Destroy_Fade(v17);
  return 0;
}

__int64 ProcObeliskDestinyMenu_Unknown128(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  v4 = v3;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_QWORD*)v3 = game_menu_EmptyMenuItem_vtable;
  *(_QWORD*)(v3 + 8) = 0;
  result = *(_QWORD*)(a1 + 344);
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  v6 = *(__int64**)(GameData_21c9c20 + 64);
  v7 = *(__int64**)(GameData_21c9c20 + 72);
  if (v6 != v7) {
    v8 = 0;
    do {
      v9 = *v6++;
      v10 = fw_memory_HeapManager_Allocate(*v2, 96, 16, 0);
      *(_WORD*)(v10 + 16) = 0;
      *(_QWORD*)(v10 + 48) = 0;
      *(_QWORD*)(v10 + 56) = 0;
      *(_QWORD*)(v10 + 64) = 0;
      *(_QWORD*)(v10 + 72) = 0;
      *(_WORD*)(v10 + 80) = 257;
      *(_BYTE*)(v10 + 82) = 1;
      *(_QWORD*)v10 = game_facility_anonymous_ObeliskDestinyMenuItem_vtable;
      *(_QWORD*)(v10 + 8) = 0;
      *(_QWORD*)(v10 + 88) = v9;
      *(_DWORD*)(v10 + 40) = v8;
      result = GameRoutine_16e0c00(a1, v10);
      ++v8;
    } while (v6 != v7);
  }
  return result;
}

void ProcObeliskDestinyMenu_Unknown143(_BYTE* a1, __int64* a2)
{
  int v4;
  char v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  signed __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v4 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
  if (a1[1064] != 0) {
    v5 = 3;
  }
  else {
    v5 = 1;
  }
  v6 = a2[1];
  v7 = a2[2];
  if (v6 >= v7) {
    v9 = *a2;
    v10 = v6 - *a2;
    v11 = 1 - 0x3333333333333333LL * (v10 >> 3);
    if (v11 > 0x666666666666666LL) {
      GameRoutine_874520_alt1();
    }
    v12 = fw_memory_g_heap_manager_ptr;
    v13 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v7 - v9) >> 3);
    if (2 * v13 > v11) {
      v11 = 2 * v13;
    }
    if (v13 >= 0x333333333333333LL) {
      v14 = 0x666666666666666LL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 > 0x666666666666666LL) {
        GameRoutine_60a210_alt1();
      }
      v15 = v4;
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v14, 16, 0);
      v4 = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + v10;
    *(_QWORD*)v17 = "AllRecieve";
    *(_QWORD*)(v17 + 8) = "MID_KeyHelp_AllReceive";
    *(_BYTE*)(v17 + 28) = v5;
    v8 = v16 + v10 + 40;
    *(_QWORD*)(v17 + 32) = 0;
    *(_BYTE*)(v17 + 16) = 1;
    *(_DWORD*)(v17 + 20) = 6;
    *(_DWORD*)(v17 + 24) = v4;
    memcpy_alt1(v16, v9, v10);
    *a2 = v16;
    a2[1] = v8;
    a2[2] = v16 + 40 * v14;
    if (v9 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v18, v9);
    }
  }
  else {
    *(_BYTE*)(v6 + 28) = v5;
    *(_QWORD*)(v6 + 32) = 0;
    *(_QWORD*)v6 = "AllRecieve";
    *(_QWORD*)(v6 + 8) = "MID_KeyHelp_AllReceive";
    v8 = v6 + 40;
    *(_BYTE*)(v6 + 16) = 1;
    *(_DWORD*)(v6 + 20) = 6;
    *(_DWORD*)(v6 + 24) = v4;
  }
  a2[1] = v8;
}

__int64 ProcObeliskDestinyMenu_Unknown12(__int64 a1, __int64 a2, char a3)
{
  if (*(int*)(a1 + 480) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 480, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  game_menu_BasicMenu_Unknown16de4d0(a1 - 176);
  return 13;
}

__int64

game_facility_anonymous_ProcObeliskDestinyMenu_ZLCall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v1 + 1064) == 1) {
    v3 = *(__int64**)(GameData_21c9c20 + 64);
    for (i = *(__int64**)(GameData_21c9c20 + 72); v3 != i; ++v3) {
      if (game_GameModeData_instance_ != 0) {
        v5 = *v3;
        v6 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48),
            *(_QWORD*)(*v3 + 24) + 32LL);
        if ((v6 == 0 || *(_BYTE*)(v6 + 32) != 4) &&
            game_GameModeData_instance_ != 0) {
          v7 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48),
              *(_QWORD*)(v5 + 24) + 32LL);
          if (v7 != 0 && *(_BYTE*)(v7 + 32) != 0 &&
              game_GameModeData_instance_ != 0) {
            v8 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48),
                *(_QWORD*)(v5 + 24) + 32LL);
            if (v8 != 0 &&
                (unsigned int)*(unsigned __int8*)(v8 + 32) - 1 <= 2) {
              if (game_GameModeData_instance_ != 0) {
                v9 = (*(_DWORD*)(game_GameModeData_instance_ + 80) +
                      *(unsigned __int16*)(v5 + 64)) &
                     ~((*(_DWORD*)(game_GameModeData_instance_ + 80) +
                        *(unsigned __int16*)(v5 + 64)) >>
                       31);
                if (v9 >= 99999) {
                  v9 = 99999;
                }
                *(_DWORD*)(game_GameModeData_instance_ + 80) = v9;
              }
              game_VariableManager_SetFlag(*(_QWORD*)(v5 + 24) + 32LL, 4);
            }
          }
        }
      }
    }
    *(_BYTE*)(v1 + 1064) = 0;
    game_menu_BasicMenu_Unknown16de4d0(v1);
  }
  v10 = ObeliskDestinyMenuItem_1a06cc0(v1, "MID_AchieveMenu_ReceiveAll_Result",
                                       0);
  ObeliskDestinyMenuItem_1a06510(v10 + 824, *(unsigned int*)(a1 + 16));
  Se_80e330(v10, "FF_Positive1");
  GameRoutine_1567590("AllRecieve", 1);
  return 5;
}

bool game_facility_anonymous_ProcObeliskDestinyMenu_SortAndFilter_closure_Invoke_1932fe0(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  int v4;

  v2 = *a2;
  if ((GameRoutine_990c70(*(_QWORD*)(*a2 + 88)) & 1) == 0) {
    return false;
  }
  v4 = *(_DWORD*)(a1 + 8);
  return v4 == 0 || v4 == *(unsigned __int8*)(*(_QWORD*)(v2 + 88) + 40LL);
}

bool game_facility_anonymous_ProcObeliskDestinyMenu_SortAndFilter_closure_Invoke_1933110(
    __int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  _BOOL4 v15;

  v3 = *a2;
  v4 = *a3;
  if (game_GameModeData_instance_ == 0) {
    return *(_DWORD*)(v3 + 40) < *(_DWORD*)(v4 + 40);
  }
  v5 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   *(_QWORD*)(*(_QWORD*)(v3 + 88) + 24LL) +
                                       32LL);
  if (v5 != 0) {
    v6 = (unsigned int)*(unsigned __int8*)(v5 + 32) - 1 < 3;
    v7 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
    LABEL_9:
      if (v6) {
        v9 = false;
        return v6 && !v9;
      }
      goto LABEL_12;
    }
  }
  else {
    v6 = false;
    v7 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_9;
    }
  }
  v8 = game_GameVariableTable_Find(
      *(_QWORD*)(v7 + 48), *(_QWORD*)(*(_QWORD*)(v4 + 88) + 24LL) + 32LL);
  if (v8 == 0) {
    goto LABEL_9;
  }
  v9 = (unsigned int)*(unsigned __int8*)(v8 + 32) - 1 < 3;
  if (((v6 ^ v9) & 1) != 0) {
    return v6 && !v9;
  }
LABEL_12:
  if (game_GameModeData_instance_ == 0) {
    return *(_DWORD*)(v3 + 40) < *(_DWORD*)(v4 + 40);
  }
  v11 = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48),
      *(_QWORD*)(*(_QWORD*)(v3 + 88) + 24LL) + 32LL);
  if (v11 != 0) {
    v12 = *(unsigned __int8*)(v11 + 32) == 4;
    v13 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
    LABEL_20:
      if (v12) {
        v15 = false;
        return v15 && !v12;
      }
      return *(_DWORD*)(v3 + 40) < *(_DWORD*)(v4 + 40);
    }
  }
  else {
    v12 = false;
    v13 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_20;
    }
  }
  v14 = game_GameVariableTable_Find(
      *(_QWORD*)(v13 + 48), *(_QWORD*)(*(_QWORD*)(v4 + 88) + 24LL) + 32LL);
  if (v14 == 0) {
    goto LABEL_20;
  }
  v15 = *(unsigned __int8*)(v14 + 32) == 4;
  if (((v12 ^ v15) & 1) != 0) {
    return v15 && !v12;
  }
  return *(_DWORD*)(v3 + 40) < *(_DWORD*)(v4 + 40);
}

#pragma GCC visibility pop
