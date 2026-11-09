#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562f00(_QWORD, _QWORD);
__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_16abc40(_QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 GameRoutine_16e3a80(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_811a70(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(void);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 game_menu_GameMenu_Unknown135(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_BGM_getFirstName(_QWORD);
__int64 snd_BGM_isActive_dc740(_QWORD);
__int64 snd_BGM_isFirstActive(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_startSlotVolume_100ab0(_QWORD, _QWORD, float);
extern __int64 (*GameData_20899b8[])();
extern __int64 GameData_2089750;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* game_sound_g_game_sound_ptr[5];
extern char GameData_1a9f09e;
extern char game_facility_g_memory_sound_playing;
extern int GameData_21d87ec;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcObeliskMemorySoundMenu_Unknown2(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown88(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown94(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown96(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown101(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown129(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown135(__int64 a1, __int64 a2);
__int64 ProcObeliskMemorySoundMenu_Unknown143(__int64 a1, __int64* a2);

__int64 ProcObeliskMemorySoundMenu_Unknown2(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _BOOL4 v7;

  result = GameRoutine_16df7a0(a1);
  v3 = *(_DWORD*)(a1 + 1248);
  if (v3 == 2) {
    result = snd_BGM_isActive_dc740(result);
    if ((result & 1) == 0) {
      return GameRoutine_16abc40(a1);
    }
  }
  else if (v3 == 1) {
    result = snd_BGM_isActive_dc740(result);
    if ((result & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 336);
      *(_DWORD*)(a1 + 1248) = 2;
      if (v4 != 0 && (v5 = __dynamic_cast(v4, GameData_212e008[0],
                                          &GameData_2089750, 0)) != 0) {
        v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 464LL))(v5) ^ 1;
        v7 = *(_DWORD*)(a1 + 1248) == 0;
      }
      else {
        v7 = false;
        LOBYTE(v6) = 1;
      }
      GameRoutine_1567590("Play", v6 & 1);
      return GameRoutine_1567590("Stop", v7);
    }
  }
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown88(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  _BOOL4 v5;

  game_menu_BasicMenu_Unknown16dd9a0();
  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && (v3 = __dynamic_cast(v2, GameData_212e008[0],
                                      &GameData_2089750, 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) ^ 1;
  }
  else {
    v4 = 1;
  }
  v5 = *(_DWORD*)(a1 + 1248) == 0;
  GameRoutine_1567590("Play", v4 & 1);
  return GameRoutine_1567590("Stop", v5);
}

__int64 ProcObeliskMemorySoundMenu_Unknown94(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _BYTE v5[200];

  v1 = *(_QWORD*)(a1 + 1080);
  game_facility_g_memory_sound_playing = 0;
  if ((*(_BYTE*)(a1 + 1064) & 1) != 0) {
    v3 = v1;
  }
  else {
    v3 = a1 + 1065;
  }
  GameRoutine_811a70(v3);
  *(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 2600) = 0;
  snd_Fade_Fade_10c910(v5, 250);
  snd_startSlotVolume_100ab0("SE_Master", v5, 1.0);
  snd_Fade_Destroy_Fade(v5);
  --GameData_21d87ec;
  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  return GameRoutine_155e830(a1 + 848, 0);
}

__int64 ProcObeliskMemorySoundMenu_Unknown96(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  _BOOL4 v5;

  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && (v3 = __dynamic_cast(v2, GameData_212e008[0],
                                      &GameData_2089750, 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) ^ 1;
  }
  else {
    v4 = 1;
  }
  v5 = *(_DWORD*)(a1 + 1248) == 0;
  GameRoutine_1567590("Play", v4 & 1);
  return GameRoutine_1567590("Stop", v5);
}

__int64 ProcObeliskMemorySoundMenu_Unknown101(__int64 a1)
{
  __int64 result;

  if ((GameRoutine_16abc40(a1) & 1) != 0) {
    return 13;
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown129(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  v3 = a1 + 232;
  v1 = *(_QWORD*)(a1 + 232);
  v2 = *(_QWORD*)(v3 + 8);
  v8[0] = GameData_20899b8;
  v9 = v8;
  if ((unsigned __int64)((v2 - v1) >> 3) >= 2) {
    v10[0] = GameData_20899b8;
    v11 = v10;
    if (v1 == v2) {
      v5 = 32;
      v4 = v10;
    }
    else {
      GameRoutine_16e3a80(v1);
      v4 = v11;
      if (v11 == v10) {
        v5 = 32;
      }
      else {
        if (v11 == nullptr) {
          goto LABEL_9;
        }
        v5 = 40;
      }
    }
    (*(void (**)(_QWORD*))(*v4 + v5))(v4);
  }

LABEL_9:
  result = (__int64)v9;
  if (v9 == v8) {
    v7 = 32;
  }
  else {
    if (v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(_QWORD*))(*v9 + v7))(v9);
}

__int64 ProcObeliskMemorySoundMenu_Unknown135(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char v10;
  _BOOL4 v11;
  _BYTE v13[200];

  v4 = game_sound_g_game_sound_ptr[0];
  v5 = *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8);
  if (v5 != 0 &&
      (snd_BGM_isFirstActive(*(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8)) &
       1) != 0) {
    v6 = snd_BGM_getFirstName(v5);
  }
  else {
    v6 = 0;
  }
  if (v6 != 0) {
    v7 = (char*)v6;
  }
  else {
    v7 = &GameData_1a9f09e;
  }
  GameRoutine_60a020(a1 + 1064, v7);
  snd_Fade_Fade_10c910(v13, 250);
  (*(void (**)(_QWORD, _BYTE*, _QWORD))(**(_QWORD**)(*v4 + 8) + 48LL))(
      *(_QWORD*)(*v4 + 8), v13, 0);
  snd_Fade_Destroy_Fade(v13);
  snd_Fade_Fade_10c910(v13, 250);
  snd_startSlotVolume_100ab0("SE_Master", v13, 0.0);
  snd_Fade_Destroy_Fade(v13);
  GameRoutine_1562680(a1 + 848, "Info_Out", 1.0);
  GameRoutine_15638b0(a1 + 848, "Info_Out", 0);
  GameRoutine_1562f00(a1 + 848, "Info_Out");
  GameRoutine_1563030(a1 + 848, "Info_Out", 0);
  v8 = *(_QWORD*)(a1 + 336);
  if (v8 != 0 && (v9 = __dynamic_cast(v8, GameData_212e008[0],
                                      &GameData_2089750, 0)) != 0) {
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 464LL))(v9) ^ 1;
  }
  else {
    v10 = 1;
  }
  v11 = *(_DWORD*)(a1 + 1248) == 0;
  GameRoutine_1567590("Play", v10 & 1);
  GameRoutine_1567590("Stop", v11);
  return game_menu_GameMenu_Unknown135(a1, a2);
}

__int64 ProcObeliskMemorySoundMenu_Unknown143(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      goto LABEL_34;
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        goto LABEL_35;
      }
      v14 = result;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      LODWORD(result) = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = "Play";
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_Play";
    *(_DWORD*)(v16 + 20) = 0;
    *(_DWORD*)(v16 + 24) = result;
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_DWORD*)(v5 + 20) = 0;
    *(_DWORD*)(v5 + 24) = result;
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    v7 = v5 + 40;
    *(_QWORD*)v5 = "Play";
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Play";
    *(_BYTE*)(v5 + 16) = 1;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 < v20) {
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)v19 = "Stop";
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_Stop";
    v21 = v19 + 40;
    *(_BYTE*)(v19 + 16) = 1;
    *(_DWORD*)(v19 + 20) = 1;
    *(_DWORD*)(v19 + 24) = result;
    goto LABEL_33;
  }
  v22 = *a2;
  v23 = v19 - *a2;
  v24 = 1 - 0x3333333333333333LL * (v23 >> 3);
  if (v24 > 0x666666666666666LL) {
  LABEL_34:
    GameRoutine_874520(result);
  }
  v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v22) >> 3);
  if (2 * v25 > v24) {
    v24 = 2 * v25;
  }
  if (v25 >= 0x333333333333333LL) {
    v26 = 0x666666666666666LL;
  }
  else {
    v26 = v24;
  }
  if (v26 != 0) {
    if (v26 <= 0x666666666666666LL) {
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v26,
                                           16, 0);
      LODWORD(result) = v27;
      goto LABEL_29;
    }
  LABEL_35:
    GameRoutine_60a210(result);
  }
  v28 = 0;

LABEL_29:
  v29 = v28 + v23;
  *(_QWORD*)v29 = "Stop";
  *(_QWORD*)(v29 + 8) = "MID_KeyHelp_Stop";
  *(_BYTE*)(v29 + 28) = 0;
  *(_QWORD*)(v29 + 32) = 0;
  *(_BYTE*)(v29 + 16) = 1;
  v30 = v28 + 40 * v26;
  *(_DWORD*)(v29 + 20) = 1;
  *(_DWORD*)(v29 + 24) = result;
  v21 = v28 + v23 + 40;
  result = memcpy(v28, v22, v23);
  *a2 = v28;
  a2[1] = v21;
  a2[2] = v30;
  if (v22 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v22);
  }

LABEL_33:
  a2[1] = v21;
  return result;
}

#pragma GCC visibility pop
