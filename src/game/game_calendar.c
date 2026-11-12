#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_12dd7e0(int);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_12db540(_QWORD, _QWORD);
__int64 GameRoutine_12dd380(__int64, int, int, int, char);
__int64 GameRoutine_12e1990(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ad210(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_88cee0(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 TransporterConst_89cc80(_QWORD);
__int64 Tutorial_f9a740(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Register(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
bool GameRoutine_12da4a0(unsigned __int8*);
bool GameRoutine_12dda00(__int64, __int64***);
extern _UNKNOWN GameData_1a92577;
extern _UNKNOWN GameData_1a95031;
extern _UNKNOWN GameData_21c6868;
extern __int64 (*GameData_20238a8[])();
extern __int64 (*GameData_2023928[])();
extern __int64 (*GameData_20239a8[])();
extern __int64 (*GameData_2023c98[])();
extern __int64 (*game_GameCalendar_ProcCalendarWatcher_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_212c6c8;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21c9650;
extern __int64 GameData_21c9700;
extern __int64 GameData_21eea40;
extern __int64 GameData_2240bc8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212d6d0;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char** msg_MessageManager_empty_text__ptr;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_2240ee0;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(_QWORD);
__int64 GameCalendar_Destructor(_QWORD* a1);
__int64 GameCalendar_12db310_alt1(__int64 a1,
                                  __int64 a2) __asm__("GameCalendar_12db310");
__int64 GameCalendar_Unknown6(__int64 result);
__int64 GameCalendar_Unknown5(__int64 result);
__int64 GameCalendar_Unknown8_alt1(__int64 result,
                                   __int64 a2) __asm__("GameCalendar_Unknown8");
__int64 GameCalendar_Unknown9_alt1(__int64 a1, __int64 a2,
                                   int a3) __asm__("GameCalendar_Unknown9");
_QWORD* GameCalendar_12e0c20(_QWORD* result);
__int64 GameCalendar_12e0d40(__int64 result);
__int64
GameCalendar_12e0da0_alt1(__int64 result) __asm__("GameCalendar_12e0da0");
__int64 game_GameCalendar_ProcNotifyBirthday_Notify(__int64 a1);
__int64 game_GameCalendar_ProcNotifyBirthday_Notify_closure_Invoke(__int64 a1);
__int64 game_GameCalendar_ProcNotify_Notify_closure0_Invoke(__int64 a1,
                                                            __int64* a2);
_QWORD* GameRoutine_9010a0(_QWORD* result);
__int64 GameRoutine_9011a0(_QWORD*, __int16*);
__int64 GameSituation_906440(__int64, __int64*);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
extern _UNKNOWN GameData_1ad690f;
extern __int64 GameData_1ae1d7b;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9c88;
extern __int64 GameData_21ca020;
extern __int64 GameData_21ca090;
__int64 GameCalendar_12da840(__int64* a1);
unsigned __int64 game_GameCalendar_UpdateLatest_lambda0_Invoke(_QWORD* a1,
                                                               __int64* a2);
unsigned __int64 game_GameCalendar_UpdateLatest_lambda1_Invoke(_QWORD* a1,
                                                               __int64* a2);
_BYTE* ProcInst_657a50_alt1(__int64, char) __asm__("ProcInst_657a50");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void GameCalendar_12db310(__int64 a1, __int64 a2);
__int64 GameHr_876a40(_QWORD*, _QWORD*);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_660f80_alt1(__int64*) __asm__("GameRoutine_660f80");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_65c760_alt1() __asm__("GameRoutine_65c760");
void game_GameCalendar_UpdateLatest(_QWORD*, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GameCalendar_Unknown8(__int64 a1, __int64 a2);
void GameCalendar_Unknown9(__int64 a1, __int64 a2, int a3);
void GameCalendar_12e0da0(__int64 a1);

__int64 GameCalendar_12da840(__int64* a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  _WORD* v6;
  int v7;
  unsigned int v8;
  __int64 v10;
  __int64 v11;
  unsigned int v13;
  __int64 v14[2];

  if (game_GameModeData_instance_ != 0) {
    v1 = *a1;
    if (*(_QWORD*)(game_GameModeData_instance_ + 96) == *a1) {
      return 0;
    }
    v2 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  else {
    v1 = *a1;
    if (*a1 == 0) {
      return 0;
    }
    v2 = 0;
  }
  v3 = *(_QWORD*)(GameData_21c9c88 + 64);
  v4 = *(_QWORD*)(GameData_21c9c88 + 72);
  if (v3 == v4 || v2 == 0) {
  LABEL_14:
    v8 = 0;
    if (game_GameModeData_instance_ == 0 || v1 == 0) {
      return v8;
    }
    v10 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)(*(_QWORD*)(v1 + 24) + 992LL));
    if (v10 != 0) {
      v8 = *(_DWORD*)(v10 + 32);
      if (v8 != 0) {
        if (game_GameModeData_instance_ != 0) {
          v11 = *a1;
          v14[0] = 0;
          v14[1] = v11;
          return (unsigned __int8)GameSituation_906440(
                     game_GameModeData_instance_ + 136, v14) != 2;
        }
        else {
          return 1;
        }
      }
      return v8;
    }
    return 0;
  }
  v5 = 1 << (v2 - 1);
  while (1) {
    v6 = *(_WORD**)v3;
    if (*(_QWORD*)(*(_QWORD*)v3 + 40LL) == v1 &&
        ((unsigned __int16)v5 & v6[24]) != 0) {
      break;
    }
    v3 += 8;
    if (v3 == v4) {
      goto LABEL_14;
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v7 = *(_DWORD*)(game_GameModeData_instance_ + 64) |
         (*(_DWORD*)(game_GameModeData_instance_ + 60) << 8);
  }
  else {
    v7 = 0;
  }
  if (v7 < (int)(bswap32((unsigned __int16)v6[25]) >> 16)) {
    return 0;
  }
  v13 = __rev16((unsigned __int16)v6[26]);
  if (v13 == 0) {
    v13 = 25443;
  }
  return v7 <= v13;
}

__int64 GameCalendar_Destructor(_QWORD* a1)
{
  __int64 v2;
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
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 result;
  _QWORD* v37;

  if (GameData_2240bc8 != 0 && (*(_WORD*)(GameData_2240bc8 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(GameData_2240bc8, 1);
  }
  v2 = a1[28];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = a1[29];
    if (v2 == v4) {
      goto LABEL_23;
    }
    v5 = a1[29];
    do {
      v9 = *(_QWORD*)(v5 - 24);
      v5 -= 24;
      v7 = v9;
      if (v9 != 0) {
        v10 = *(_QWORD*)(v4 - 16);
        if (v7 == v10) {
          goto LABEL_8;
        }
        do {
          v11 = *(_QWORD*)(v10 - 24);
          if (v11 != 0) {
            *(_QWORD*)(v10 - 16) = v11;
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12, v11);
          }
          v10 -= 32;
        } while (v10 != v7);
        v6 = *(_QWORD*)(v4 - 24);
        *(_QWORD*)(v4 - 16) = v7;
        v7 = v6;
        if (v6 != 0) {
        LABEL_8:
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v7);
        }
      }
      v4 = v5;
    } while (v2 != v5);
    v13 = a1[28];
    a1[29] = v2;
    v2 = v13;
    if (v13 != 0) {
    LABEL_23:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v14, v2);
    }
  }
  v15 = a1[23];
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    a1[24] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v16 + v17, v15);
  }
  v18 = a1[20];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    a1[21] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v19 + v20, v18);
  }
  v21 = a1[17];
  if (v21 != 0) {
    v22 = *(_QWORD*)v3;
    a1[18] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v22 + v23, v21);
  }
  v24 = a1[14];
  if (v24 != 0) {
    v25 = *(_QWORD*)v3;
    a1[15] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v25 + v26, v24);
  }
  v27 = a1[8];
  if (v27 != 0) {
    v28 = *(_QWORD*)v3;
    a1[9] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v28 + v29, v27);
  }
  v30 = a1[5];
  if (v30 != 0) {
    v31 = *(_QWORD*)v3;
    a1[6] = v30;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v31 + v32, v30);
  }
  v33 = a1[2];
  if (v33 != 0) {
    v34 = *(_QWORD*)v3;
    a1[3] = v33;
    v35 = 128;
    if (*(_QWORD*)(v34 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v34 + v35, v33);
  }
  a1[1] = GameData_212d6d0 + 2;
  v37 = a1 + 1;
  result = GameHr_876a40(&GameData_21eea40, &v37);
  *a1 = GameData_2023c98;
  if (*(_QWORD**)GameData_212c6c0[0] == a1) {
    *(_QWORD*)GameData_212c6c0[0] = 0;
    GameData_2240ee0 = 0;
  }
  return result;
}

void GameCalendar_12db310(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;

  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
  v4 = GameData_212c608[0];
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  game_ProcInst_Register_alt1(v3);
  *(_DWORD*)(v3 + 160) = 0;
  GameData_2240bc8 = v3;
  *(_QWORD*)v3 = game_GameCalendar_ProcCalendarWatcher_vtable;
  *(_QWORD*)(v3 + 152) = 0;
  if (*(_QWORD*)GameData_212c6c8 != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v6 = *(_DWORD*)(v5 + 8);
    *(_QWORD*)(v3 + 152) = *(_QWORD*)v5;
    *(_DWORD*)(v3 + 160) = v6;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21c6868) != 0) {
    GameData_21c67a8 = 3;
    GameData_21c67d0 = 0;
    GameData_21c67d8 = 0;
    GameData_21c67e0 = 0;
    GameData_21c67b0 = 0;
    GameData_21c67b8 = 0;
    GameData_21c67c0 = 0;
    GameData_21c67c8 = 0;
    GameData_21c6808 = 0;
    GameData_21c6810 = 0;
    GameData_21c6818 = 0;
    GameData_21c6820 = 0;
    GameData_21c6828 = 0;
    GameData_21c6850 = 0;
    GameData_21c6858 = 0;
    GameData_21c6860 = 0;
    GameData_21c6848 = 0;
    GameData_21c6838 = 0;
    GameData_21c6840 = 0;
    GameData_21c6830 = 0;
    GameData_21c67e8 = 14;
    GameData_21c67f0 = 0;
    GameData_21c67f8 = 16;
    GameData_21c6800 = 1;
    __cxa_guard_release_alt1((__int64)&GameData_21c6868);
  }
  if (a2 != 0) {
    v7 = *(_QWORD*)(a2 + 40);
    if (v7 != 0) {
      *(_QWORD*)(v7 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "ProcCalendarWatcher";
    *(_QWORD*)(v3 + 32) = a2;
    *(_DWORD*)(v3 + 140) =
        (unsigned int)game_HashString32_alt1("ProcCalendarWatcher");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    *(_QWORD*)(v3 + 8) = &GameData_21c67a8;
    *(_QWORD*)(v3 + 16) = &GameData_21c67a8;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3) & 1) != 0 &&
        (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v3 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(v3, 1);
  }
}

__int64 GameCalendar_Unknown6(__int64 result)
{
  *(_DWORD*)(result + 88) = 0;
  *(_BYTE*)(result + 92) = 0;
  *(_DWORD*)(result + 94) = 0;
  *(_BYTE*)(result + 98) = 0;
  *(_DWORD*)(result + 100) = 0;
  *(_BYTE*)(result + 104) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_DWORD*)(result + 216) = 0;
  *(_WORD*)(result + 106) = 255;
  *(_QWORD*)(result + 24) = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 48) = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 72) = *(_QWORD*)(result + 64);
  *(_QWORD*)(result + 120) = *(_QWORD*)(result + 112);
  *(_QWORD*)(result + 144) = *(_QWORD*)(result + 136);
  *(_QWORD*)(result + 168) = *(_QWORD*)(result + 160);
  *(_QWORD*)(result + 192) = *(_QWORD*)(result + 184);
  return result;
}

__int64 GameCalendar_Unknown5(__int64 result)
{
  *(_DWORD*)(result + 80) = 0;
  *(_BYTE*)(result + 84) = 0;
  *(_DWORD*)(result + 86) = 0;
  *(_BYTE*)(result + 90) = 0;
  *(_DWORD*)(result + 92) = 0;
  *(_BYTE*)(result + 96) = 0;
  *(_QWORD*)(result + 200) = 0;
  *(_DWORD*)(result + 208) = 0;
  *(_WORD*)(result + 98) = 255;
  *(_QWORD*)(result + 16) = *(_QWORD*)(result + 8);
  *(_QWORD*)(result + 40) = *(_QWORD*)(result + 32);
  *(_QWORD*)(result + 64) = *(_QWORD*)(result + 56);
  *(_QWORD*)(result + 112) = *(_QWORD*)(result + 104);
  *(_QWORD*)(result + 136) = *(_QWORD*)(result + 128);
  *(_QWORD*)(result + 160) = *(_QWORD*)(result + 152);
  *(_QWORD*)(result + 184) = *(_QWORD*)(result + 176);
  return result;
}

void GameCalendar_Unknown8(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int16 v6;
  bool v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  char v14;
  __int64 v15;
  char v16;
  __int16 v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  char v24;
  __int64 v25;
  char v26;
  __int16 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  char v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  __int64* v85;
  char v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64* v113;
  __int64* v114;
  char v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  int v137;
  __int64 v138;
  __int64 v139;
  __int16 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64* v146;
  __int64* v147;
  char v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  int v171;
  __int64 v172;
  __int64 v173;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(v3 + v2) = 0;
  v6 = *(_WORD*)(a1 + 88);
  v7 = v6 == 0 || *(_BYTE*)(a1 + 90) == 0;
  if (v7 || *(_BYTE*)(a1 + 91) == 0) {
    v9 = 0;
  }
  else {
    v8 = *(int*)(a2 + 20);
    v9 = 1;
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v6;
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = HIBYTE(v6);
    v11 = *(int*)(a2 + 20);
    v12 = *(_BYTE*)(a1 + 90);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = v12;
    v13 = *(int*)(a2 + 20);
    v14 = *(_BYTE*)(a1 + 91);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = v14;
    v15 = *(int*)(a2 + 20);
    v16 = *(_BYTE*)(a1 + 92);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v16;
  }
  v17 = *(_WORD*)(a1 + 94);
  v18 = v17 == 0 || *(_BYTE*)(a1 + 96) == 0;
  if (!v18 && *(_BYTE*)(a1 + 97) != 0) {
    v19 = *(int*)(a2 + 20);
    ++v9;
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = v17;
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = HIBYTE(v17);
    v21 = *(int*)(a2 + 20);
    v22 = *(_BYTE*)(a1 + 96);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v22;
    v23 = *(int*)(a2 + 20);
    v24 = *(_BYTE*)(a1 + 97);
    *(_DWORD*)(a2 + 20) = v23 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = v24;
    v25 = *(int*)(a2 + 20);
    v26 = *(_BYTE*)(a1 + 98);
    *(_DWORD*)(a2 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = v26;
  }
  v27 = *(_WORD*)(a1 + 100);
  v28 = v27 == 0 || *(_BYTE*)(a1 + 102) == 0;
  if (!v28 && *(_BYTE*)(a1 + 103) != 0) {
    v29 = *(int*)(a2 + 20);
    ++v9;
    *(_DWORD*)(a2 + 20) = v29 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = v27;
    v30 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = HIBYTE(v27);
    v31 = *(int*)(a2 + 20);
    v32 = *(_BYTE*)(a1 + 102);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = v32;
    v33 = *(int*)(a2 + 20);
    v34 = *(_BYTE*)(a1 + 103);
    *(_DWORD*)(a2 + 20) = v33 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = v34;
    v35 = *(int*)(a2 + 20);
    v36 = *(_BYTE*)(a1 + 104);
    *(_DWORD*)(a2 + 20) = v35 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = v36;
  }
  v37 = *(_QWORD*)(a2 + 32);
  v38 = *(_QWORD*)(a2 + 40);
  v39 = ((v38 - v37) << 7) - 1;
  if (v38 == v37) {
    v39 = 0;
  }
  v40 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v39 == v40) {
    GameRoutine_660f80_alt1((__int64*)(a2 + 24));
    v37 = *(_QWORD*)(a2 + 32);
    v40 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v37 + 8 * (v40 >> 10)) + 4 * (v40 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v9;
  v42 = *(_QWORD*)(a2 + 56);
  v41 = *(_QWORD*)(a2 + 64);
  v44 = *(_QWORD*)(a2 + 32);
  v43 = *(_QWORD*)(a2 + 40);
  v45 = v41 - 1;
  v7 = v43 == v44;
  v46 = v41 + v42;
  v47 = ((v43 - v44) << 7) - 1;
  v48 = *(_QWORD*)(v44 + 8 * ((unsigned __int64)(v45 + v42) >> 10));
  if (v7) {
    v47 = 0;
  }
  v49 = *(_DWORD*)(v48 + 4 * ((v45 + v42) & 0x3FF));
  *(_QWORD*)(a2 + 64) = v45;
  *(_DWORD*)(a2 + 20) = v49;
  if ((unsigned __int64)(v47 - v46 + 1) >= 0x800) {
    v50 = *(_QWORD*)(v43 - 8);
    if (v50 != 0) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v50);
      v43 = *(_QWORD*)(a2 + 40);
      v49 = *(_DWORD*)(a2 + 20);
    }
    *(_QWORD*)(a2 + 40) = v43 - 8;
  }
  v52 = *(_BYTE*)(a1 + 107);
  *(_DWORD*)(a2 + 20) = v49 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v49) = v52;
  v53 = *(int*)(a2 + 20);
  v54 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v53 + 1;
  *(_BYTE*)(v54 + v53) = 0;
  v55 = *(__int64**)(a1 + 112);
  v56 = *(__int64**)(a1 + 120);
  if (v55 == v56) {
    v57 = 0;
  }
  else {
    v57 = 0;
    do {
      v58 = *(int*)(a2 + 20);
      v59 = *v55++;
      ++v57;
      *(_DWORD*)(a2 + 20) = v58 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v58) = v59;
      v60 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v60 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v60) = BYTE1(v59);
      v61 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v61 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v61) = BYTE2(v59);
      v62 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v62 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v62) = BYTE3(v59);
      v63 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v63 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v63) = BYTE4(v59);
      v64 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v64 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v64) = BYTE5(v59);
      v65 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v65 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v65) = BYTE6(v59);
      v66 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v66 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v66) = HIBYTE(v59);
    } while (v55 != v56);
  }
  v67 = *(_QWORD*)(a2 + 32);
  v68 = *(_QWORD*)(a2 + 40);
  v69 = ((v68 - v67) << 7) - 1;
  if (v68 == v67) {
    v69 = 0;
  }
  v70 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v69 == v70) {
    GameRoutine_660f80_alt1((__int64*)(a2 + 24));
    v67 = *(_QWORD*)(a2 + 32);
    v70 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v67 + 8 * (v70 >> 10)) + 4 * (v70 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v53 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v53) = v57;
  v72 = *(_QWORD*)(a2 + 56);
  v71 = *(_QWORD*)(a2 + 64);
  v74 = *(_QWORD*)(a2 + 32);
  v73 = *(_QWORD*)(a2 + 40);
  v7 = v73 == v74;
  v75 = v71 - 1 + v72;
  v76 = v75 >> 10;
  v77 = v75 & 0x3FF;
  v78 = ((v73 - v74) << 7) - 1;
  v79 = *(_QWORD*)(v74 + 8 * v76);
  if (v7) {
    v78 = 0;
  }
  v80 = *(_DWORD*)(v79 + 4 * v77);
  *(_QWORD*)(a2 + 64) = v71 - 1;
  *(_DWORD*)(a2 + 20) = v80;
  if ((unsigned __int64)(v78 - (v71 + v72) + 1) >= 0x800) {
    v81 = *(_QWORD*)(v73 - 8);
    if (v81 != 0) {
      v82 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v82 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, v81);
      v73 = *(_QWORD*)(a2 + 40);
      v80 = *(_DWORD*)(a2 + 20);
    }
    *(_QWORD*)(a2 + 40) = v73 - 8;
  }
  v83 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v80 + 1;
  *(_BYTE*)(v83 + v80) = 0;
  v84 = *(__int64**)(a1 + 136);
  v85 = *(__int64**)(a1 + 144);
  if (v84 == v85) {
    v86 = 0;
  }
  else {
    v86 = 0;
    do {
      v87 = *(int*)(a2 + 20);
      v88 = *v84++;
      ++v86;
      *(_DWORD*)(a2 + 20) = v87 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v87) = v88;
      v89 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v89 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v89) = BYTE1(v88);
      v90 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v90 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v90) = BYTE2(v88);
      v91 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v91 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v91) = BYTE3(v88);
      v92 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v92 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v92) = BYTE4(v88);
      v93 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v93 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v93) = BYTE5(v88);
      v94 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v94 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v94) = BYTE6(v88);
      v95 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v95 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v95) = HIBYTE(v88);
    } while (v84 != v85);
  }
  v96 = *(_QWORD*)(a2 + 32);
  v97 = *(_QWORD*)(a2 + 40);
  v98 = ((v97 - v96) << 7) - 1;
  if (v97 == v96) {
    v98 = 0;
  }
  v99 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v98 == v99) {
    GameRoutine_660f80_alt1((__int64*)(a2 + 24));
    v96 = *(_QWORD*)(a2 + 32);
    v99 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v96 + 8 * (v99 >> 10)) + 4 * (v99 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v80 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v80) = v86;
  v101 = *(_QWORD*)(a2 + 56);
  v100 = *(_QWORD*)(a2 + 64);
  v103 = *(_QWORD*)(a2 + 32);
  v102 = *(_QWORD*)(a2 + 40);
  v7 = v102 == v103;
  v104 = v100 - 1 + v101;
  v105 = v104 >> 10;
  v106 = v104 & 0x3FF;
  v107 = ((v102 - v103) << 7) - 1;
  v108 = *(_QWORD*)(v103 + 8 * v105);
  if (v7) {
    v107 = 0;
  }
  v109 = *(_DWORD*)(v108 + 4 * v106);
  *(_QWORD*)(a2 + 64) = v100 - 1;
  *(_DWORD*)(a2 + 20) = v109;
  if ((unsigned __int64)(v107 - (v100 + v101) + 1) >= 0x800) {
    v110 = *(_QWORD*)(v102 - 8);
    if (v110 != 0) {
      v111 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v111 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v111, v110);
      v102 = *(_QWORD*)(a2 + 40);
      v109 = *(_DWORD*)(a2 + 20);
    }
    *(_QWORD*)(a2 + 40) = v102 - 8;
  }
  v112 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v109 + 1;
  *(_BYTE*)(v112 + v109) = 0;
  v113 = *(__int64**)(a1 + 160);
  v114 = *(__int64**)(a1 + 168);
  if (v113 == v114) {
    v115 = 0;
  }
  else {
    v115 = 0;
    do {
      v116 = *(int*)(a2 + 20);
      v117 = *v113++;
      ++v115;
      *(_DWORD*)(a2 + 20) = v116 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v116) = v117;
      v118 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v118 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v118) = BYTE1(v117);
      v119 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v119 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v119) = BYTE2(v117);
      v120 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v120 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v120) = BYTE3(v117);
      v121 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v121 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v121) = BYTE4(v117);
      v122 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v122 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v122) = BYTE5(v117);
      v123 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v123 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v123) = BYTE6(v117);
      v124 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v124 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v124) = HIBYTE(v117);
    } while (v113 != v114);
  }
  v125 = *(_QWORD*)(a2 + 32);
  v126 = *(_QWORD*)(a2 + 40);
  v127 = ((v126 - v125) << 7) - 1;
  if (v126 == v125) {
    v127 = 0;
  }
  v128 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v127 == v128) {
    GameRoutine_660f80_alt1((__int64*)(a2 + 24));
    v125 = *(_QWORD*)(a2 + 32);
    v128 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v125 + 8 * (v128 >> 10)) + 4 * (v128 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v109 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v109) = v115;
  v130 = *(_QWORD*)(a2 + 56);
  v129 = *(_QWORD*)(a2 + 64);
  v132 = *(_QWORD*)(a2 + 32);
  v131 = *(_QWORD*)(a2 + 40);
  v133 = v129 - 1;
  v7 = v131 == v132;
  v134 = v129 + v130;
  v135 = ((v131 - v132) << 7) - 1;
  v136 = *(_QWORD*)(v132 + 8 * ((unsigned __int64)(v133 + v130) >> 10));
  if (v7) {
    v135 = 0;
  }
  v137 = *(_DWORD*)(v136 + 4 * ((v133 + v130) & 0x3FF));
  *(_QWORD*)(a2 + 64) = v133;
  *(_DWORD*)(a2 + 20) = v137;
  if ((unsigned __int64)(v135 - v134 + 1) >= 0x800) {
    v138 = *(_QWORD*)(v131 - 8);
    if (v138 != 0) {
      v139 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v139 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v139, v138);
      v131 = *(_QWORD*)(a2 + 40);
      v137 = *(_DWORD*)(a2 + 20);
    }
    *(_QWORD*)(a2 + 40) = v131 - 8;
  }
  v140 = *(_WORD*)(a1 + 208);
  *(_DWORD*)(a2 + 20) = v137 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v137) = v140;
  v141 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v141 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v141) = HIBYTE(v140);
  v142 = *(int*)(a2 + 20);
  LOBYTE(v140) = *(_BYTE*)(a1 + 210);
  *(_DWORD*)(a2 + 20) = v142 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v142) = v140;
  v143 = *(int*)(a2 + 20);
  LOBYTE(v140) = *(_BYTE*)(a1 + 211);
  *(_DWORD*)(a2 + 20) = v143 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v143) = v140;
  v144 = *(int*)(a2 + 20);
  v145 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v144 + 1;
  *(_BYTE*)(v145 + v144) = 0;
  v146 = *(__int64**)(a1 + 184);
  v147 = *(__int64**)(a1 + 192);
  if (v146 == v147) {
    v148 = 0;
  }
  else {
    v148 = 0;
    do {
      v149 = *(int*)(a2 + 20);
      v150 = *v146++;
      ++v148;
      *(_DWORD*)(a2 + 20) = v149 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v149) = v150;
      v151 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v151 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v151) = BYTE1(v150);
      v152 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v152 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v152) = BYTE2(v150);
      v153 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v153 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v153) = BYTE3(v150);
      v154 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v154 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v154) = BYTE4(v150);
      v155 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v155 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v155) = BYTE5(v150);
      v156 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v156 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v156) = BYTE6(v150);
      v157 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v157 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v157) = HIBYTE(v150);
    } while (v146 != v147);
  }
  v158 = *(_QWORD*)(a2 + 32);
  v159 = *(_QWORD*)(a2 + 40);
  v160 = ((v159 - v158) << 7) - 1;
  if (v159 == v158) {
    v160 = 0;
  }
  v161 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v160 == v161) {
    GameRoutine_660f80_alt1((__int64*)(a2 + 24));
    v158 = *(_QWORD*)(a2 + 32);
    v161 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v158 + 8 * (v161 >> 10)) + 4 * (v161 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v144 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v144) = v148;
  v163 = *(_QWORD*)(a2 + 56);
  v162 = *(_QWORD*)(a2 + 64);
  v165 = *(_QWORD*)(a2 + 32);
  v164 = *(_QWORD*)(a2 + 40);
  v7 = v164 == v165;
  v166 = v162 - 1 + v163;
  v167 = v166 >> 10;
  v168 = v166 & 0x3FF;
  v169 = ((v164 - v165) << 7) - 1;
  v170 = *(_QWORD*)(v165 + 8 * v167);
  if (v7) {
    v169 = 0;
  }
  v171 = *(_DWORD*)(v170 + 4 * v168);
  *(_QWORD*)(a2 + 64) = v162 - 1;
  *(_DWORD*)(a2 + 20) = v171;
  if ((unsigned __int64)(v169 - (v162 + v163) + 1) >= 0x800) {
    v172 = *(_QWORD*)(v164 - 8);
    if (v172 != 0) {
      v173 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v173 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v173, v172);
      v164 = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v164 - 8;
  }
}

void GameCalendar_Unknown9(__int64 a1, __int64 a2, int a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64* v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64* v61;
  __int64 v62;
  char* v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  __int16 v79;
  __int16 v80;
  char v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64* v98;
  __int64 v99;
  signed __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int16 v109;
  char v110;
  char v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  unsigned __int64* v124;
  __int64 v125;
  char* v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  int v137;
  __int64* v138;

  if (game_GameModeData_instance_ != 0) {
    v6 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  }
  else {
    v6 = 0;
  }
  game_GameCalendar_UpdateLatest((_QWORD*)a1, v6);
  v7 = *(int*)(a2 + 20);
  v8 = *(_QWORD*)(a2 + 8);
  v9 = v7 + 1;
  *(_DWORD*)(a2 + 20) = v7 + 1;
  v10 = *(unsigned __int8*)(v8 + v7);
  if (*(_BYTE*)(v8 + v7) != 0) {
    do {
      v11 = *(int*)(a2 + 20);
      v12 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v11 + 1;
      v13 = *(unsigned __int8*)(v12 + v11);
      *(_DWORD*)(a2 + 20) = v11 + 2;
      v14 = v13 | (*(unsigned __int8*)(v12 + v11 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v11 + 3;
      v15 = *(unsigned __int8*)(v12 + v11 + 2);
      *(_DWORD*)(a2 + 20) = v11 + 4;
      v16 = *(unsigned __int8*)(v12 + v11 + 3);
      *(_DWORD*)(a2 + 20) = v11 + 5;
      GameRoutine_12dd380(a1, v14, v15, v16, *(_BYTE*)(v12 + v11 + 4) != 0);
      --v10;
    } while (v10 != 0);
    v9 = *(_DWORD*)(a2 + 20);
    v8 = *(_QWORD*)(a2 + 8);
  }
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(a1 + 107) = *(_BYTE*)(v8 + v9);
  *(_QWORD*)(a1 + 120) = *(_QWORD*)(a1 + 112);
  if (a3 <= 1) {
    *(_QWORD*)(a1 + 144) = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(a1 + 168) = *(_QWORD*)(a1 + 160);
    goto LABEL_73;
  }
  v17 = *(int*)(a2 + 20);
  v137 = a3;
  *(_DWORD*)(a2 + 20) = v17 + 1;
  v18 = *(_QWORD*)(a2 + 8);
  v19 = *(unsigned __int8*)(v18 + v17);
  if (*(_BYTE*)(v18 + v17) != 0) {
    v20 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v22 = *(int*)(a2 + 20);
      v23 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v22 + 1;
      v24 = *(unsigned __int8*)(v23 + v22);
      *(_DWORD*)(a2 + 20) = v22 + 2;
      v25 = v24 | ((unsigned __int64)*(unsigned __int8*)(v23 + v22 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v22 + 3;
      v26 = v25 | ((unsigned __int64)*(unsigned __int8*)(v23 + v22 + 2) << 16);
      *(_DWORD*)(a2 + 20) = v22 + 4;
      v27 = v26 | ((unsigned __int64)*(unsigned __int8*)(v23 + v22 + 3) << 24);
      *(_DWORD*)(a2 + 20) = v22 + 5;
      v28 = v27 | ((unsigned __int64)*(unsigned __int8*)(v23 + v22 + 4) << 32);
      *(_DWORD*)(a2 + 20) = v22 + 6;
      v29 = v28 | ((unsigned __int64)*(unsigned __int8*)(v23 + v22 + 5) << 40);
      *(_DWORD*)(a2 + 20) = v22 + 7;
      v30 = *(unsigned __int8*)(v23 + v22 + 6);
      *(_DWORD*)(a2 + 20) = v22 + 8;
      v31 = v29 | (v30 << 48) |
            ((unsigned __int64)*(unsigned __int8*)(v23 + v22 + 7) << 56);
      v33 = *(unsigned __int64**)(a1 + 120);
      v32 = *(_QWORD*)(a1 + 128);
      if ((unsigned __int64)v33 < v32) {
        *v33 = v31;
        v21 = (__int64)(v33 + 1);
      }
      else {
        v34 = *(_QWORD*)(a1 + 112);
        v35 = (char*)v33 - v34;
        v36 = ((__int64)v33 - v34) >> 3;
        v37 = v36 + 1;
        if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
        LABEL_97:
          GameRoutine_65c760_alt1();
        }
        v38 = v32 - v34;
        if (v38 >> 2 > v37) {
          v37 = v38 >> 2;
        }
        if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
          v39 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v39 = v37;
        }
        if (v39 != 0) {
          if (v39 >> 61 != 0) {
          LABEL_98:
            GameRoutine_60a210_alt1();
          }
          v40 = fw_memory_HeapManager_Allocate_alt1(*v20, 8 * v39, 16, 0);
        }
        else {
          v40 = 0;
        }
        v41 = v40 + 8 * v39;
        v42 = (unsigned __int64)v33 - v34;
        v43 = (__int64)&v35[v40 + -8 * v36];
        *(_QWORD*)&v35[v40] = v31;
        v21 = (__int64)&v35[v40 + 8];
        memcpy_alt1(v43, v34, v42);
        *(_QWORD*)(a1 + 112) = v43;
        *(_QWORD*)(a1 + 120) = v21;
        *(_QWORD*)(a1 + 128) = v41;
        if (v34 != 0) {
          v44 = 128;
          if (*(_QWORD*)(*v20 + 200) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v20 + v44, v34);
        }
      }
      --v19;
      *(_QWORD*)(a1 + 120) = v21;
    } while (v19 != 0);
  }
  *(_QWORD*)(a1 + 144) = *(_QWORD*)(a1 + 136);
  if (v137 < 6) {
  LABEL_48:
    v138 = (__int64*)(a1 + 160);
    *(_QWORD*)(a1 + 168) = *(_QWORD*)(a1 + 160);
    v73 = (__int64*)(a1 + 168);
    if (v137 != 2) {
      goto LABEL_51;
    }
  LABEL_73:
    if ((int)(-373475417 * ((*(_QWORD*)(a1 + 24) - *(_QWORD*)(a1 + 16)) >> 4)) <
        1) {
      v109 = 0;
      v110 = 0;
      v111 = 0;
    }
    else {
      v108 = game_gmap_GmapClock_kDefaultTime_ptr;
      if (game_gmap_GmapClock_instance_ != 0) {
        v108 = game_gmap_GmapClock_instance_ + 8;
      }
      v109 = *(_WORD*)v108;
      v110 = *(_BYTE*)(v108 + 2);
      v111 = *(_BYTE*)(v108 + 4);
    }
    *(_WORD*)(a1 + 208) = v109;
    v136 = *(_QWORD*)(a1 + 184);
    *(_BYTE*)(a1 + 210) = v110;
    *(_BYTE*)(a1 + 211) = v111;
    *(_QWORD*)(a1 + 192) = v136;
    return;
  }
  v45 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v45 + 1;
  v46 = *(_QWORD*)(a2 + 8);
  v47 = *(unsigned __int8*)(v46 + v45);
  if (*(_BYTE*)(v46 + v45) != 0) {
    v48 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v50 = *(int*)(a2 + 20);
      v51 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v50 + 1;
      v52 = *(unsigned __int8*)(v51 + v50);
      *(_DWORD*)(a2 + 20) = v50 + 2;
      v53 = v52 | ((unsigned __int64)*(unsigned __int8*)(v51 + v50 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v50 + 3;
      v54 = v53 | ((unsigned __int64)*(unsigned __int8*)(v51 + v50 + 2) << 16);
      *(_DWORD*)(a2 + 20) = v50 + 4;
      v55 = v54 | ((unsigned __int64)*(unsigned __int8*)(v51 + v50 + 3) << 24);
      *(_DWORD*)(a2 + 20) = v50 + 5;
      v56 = v55 | ((unsigned __int64)*(unsigned __int8*)(v51 + v50 + 4) << 32);
      *(_DWORD*)(a2 + 20) = v50 + 6;
      v57 = v56 | ((unsigned __int64)*(unsigned __int8*)(v51 + v50 + 5) << 40);
      *(_DWORD*)(a2 + 20) = v50 + 7;
      v58 = *(unsigned __int8*)(v51 + v50 + 6);
      *(_DWORD*)(a2 + 20) = v50 + 8;
      v59 = v57 | (v58 << 48) |
            ((unsigned __int64)*(unsigned __int8*)(v51 + v50 + 7) << 56);
      v61 = *(unsigned __int64**)(a1 + 144);
      v60 = *(_QWORD*)(a1 + 152);
      if ((unsigned __int64)v61 < v60) {
        *v61 = v59;
        v49 = (__int64)(v61 + 1);
      }
      else {
        v62 = *(_QWORD*)(a1 + 136);
        v63 = (char*)v61 - v62;
        v64 = ((__int64)v61 - v62) >> 3;
        v65 = v64 + 1;
        if ((unsigned __int64)(v64 + 1) >> 61 != 0) {
          goto LABEL_97;
        }
        v66 = v60 - v62;
        if (v66 >> 2 > v65) {
          v65 = v66 >> 2;
        }
        if ((unsigned __int64)v66 >= 0x7FFFFFFFFFFFFFF8LL) {
          v67 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v67 = v65;
        }
        if (v67 != 0) {
          if (v67 >> 61 != 0) {
            goto LABEL_98;
          }
          v68 = fw_memory_HeapManager_Allocate_alt1(*v48, 8 * v67, 16, 0);
        }
        else {
          v68 = 0;
        }
        v69 = v68 + 8 * v67;
        v70 = (unsigned __int64)v61 - v62;
        v71 = (__int64)&v63[v68 + -8 * v64];
        *(_QWORD*)&v63[v68] = v59;
        v49 = (__int64)&v63[v68 + 8];
        memcpy_alt1(v71, v62, v70);
        *(_QWORD*)(a1 + 136) = v71;
        *(_QWORD*)(a1 + 144) = v49;
        *(_QWORD*)(a1 + 152) = v69;
        if (v62 != 0) {
          v72 = 128;
          if (*(_QWORD*)(*v48 + 200) == 0) {
            v72 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v48 + v72, v62);
        }
      }
      --v47;
      *(_QWORD*)(a1 + 144) = v49;
      if (v47 == 0) {
        goto LABEL_48;
      }
    }
  }
  v138 = (__int64*)(a1 + 160);
  *(_QWORD*)(a1 + 168) = *(_QWORD*)(a1 + 160);
  v73 = (__int64*)(a1 + 168);
LABEL_51:
  v74 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v74 + 1;
  v75 = *(_QWORD*)(a2 + 8);
  v76 = *(unsigned __int8*)(v75 + v74);
  if (*(_BYTE*)(v75 + v74) != 0) {
    do {
      v87 = *(int*)(a2 + 20);
      v88 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v87 + 1;
      v89 = *(unsigned __int8*)(v88 + v87);
      *(_DWORD*)(a2 + 20) = v87 + 2;
      v90 = v89 | ((unsigned __int64)*(unsigned __int8*)(v88 + v87 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v87 + 3;
      v91 = v90 | ((unsigned __int64)*(unsigned __int8*)(v88 + v87 + 2) << 16);
      *(_DWORD*)(a2 + 20) = v87 + 4;
      v92 = v91 | ((unsigned __int64)*(unsigned __int8*)(v88 + v87 + 3) << 24);
      *(_DWORD*)(a2 + 20) = v87 + 5;
      v93 = v92 | ((unsigned __int64)*(unsigned __int8*)(v88 + v87 + 4) << 32);
      *(_DWORD*)(a2 + 20) = v87 + 6;
      v94 = v93 | ((unsigned __int64)*(unsigned __int8*)(v88 + v87 + 5) << 40);
      *(_DWORD*)(a2 + 20) = v87 + 7;
      v95 = *(unsigned __int8*)(v88 + v87 + 6);
      *(_DWORD*)(a2 + 20) = v87 + 8;
      v96 = v94 | (v95 << 48) |
            ((unsigned __int64)*(unsigned __int8*)(v88 + v87 + 7) << 56);
      v98 = *(unsigned __int64**)(a1 + 168);
      v97 = *(_QWORD*)(a1 + 176);
      if ((unsigned __int64)v98 < v97) {
        *v98 = v96;
        v86 = (__int64)(v98 + 1);
      }
      else {
        v99 = *v138;
        v100 = (signed __int64)v98 - *v138;
        v101 = (v100 >> 3) + 1;
        if (v101 >> 61 != 0) {
          goto LABEL_97;
        }
        v102 = v97 - v99;
        if (v102 >> 2 > v101) {
          v101 = v102 >> 2;
        }
        if ((unsigned __int64)v102 >= 0x7FFFFFFFFFFFFFF8LL) {
          v103 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v103 = v101;
        }
        if (v103 != 0) {
          if (v103 >> 61 != 0) {
            goto LABEL_98;
          }
          v104 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v103, 16, 0);
        }
        else {
          v104 = 0;
        }
        v105 = v104 + 8 * v103;
        v106 = v104 + v100 - 8 * (v100 >> 3);
        *(_QWORD*)(v104 + v100) = v96;
        v86 = v104 + v100 + 8;
        memcpy_alt1(v106, v99, v100);
        *(_QWORD*)(a1 + 160) = v106;
        *(_QWORD*)(a1 + 168) = v86;
        *(_QWORD*)(a1 + 176) = v105;
        if (v99 != 0) {
          v107 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v107 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v107, v99);
        }
      }
      --v76;
      *v73 = v86;
    } while (v76 != 0);
  }
  if (v137 <= 3) {
    goto LABEL_73;
  }
  v77 = *(int*)(a2 + 20);
  v78 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v77 + 1;
  v79 = *(unsigned __int8*)(v78 + v77);
  *(_DWORD*)(a2 + 20) = v77 + 2;
  v80 = v79 | (*(unsigned __int8*)(v78 + v77 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v77 + 3;
  v81 = *(_BYTE*)(v78 + v77 + 2);
  *(_DWORD*)(a2 + 20) = v77 + 4;
  LOBYTE(v77) = *(_BYTE*)(v78 + v77 + 3);
  *(_WORD*)(a1 + 208) = v80;
  *(_BYTE*)(a1 + 210) = v81;
  *(_BYTE*)(a1 + 211) = v77;
  *(_QWORD*)(a1 + 192) = *(_QWORD*)(a1 + 184);
  if (v137 != 4) {
    v82 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v82 + 1;
    v83 = *(_QWORD*)(a2 + 8);
    v84 = *(unsigned __int8*)(v83 + v82);
    if (*(_BYTE*)(v83 + v82) != 0) {
      v85 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v113 = *(int*)(a2 + 20);
        v114 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v113 + 1;
        v115 = *(unsigned __int8*)(v114 + v113);
        *(_DWORD*)(a2 + 20) = v113 + 2;
        v116 = v115 |
               ((unsigned __int64)*(unsigned __int8*)(v114 + v113 + 1) << 8);
        *(_DWORD*)(a2 + 20) = v113 + 3;
        v117 = v116 |
               ((unsigned __int64)*(unsigned __int8*)(v114 + v113 + 2) << 16);
        *(_DWORD*)(a2 + 20) = v113 + 4;
        v118 = v117 |
               ((unsigned __int64)*(unsigned __int8*)(v114 + v113 + 3) << 24);
        *(_DWORD*)(a2 + 20) = v113 + 5;
        v119 = v118 |
               ((unsigned __int64)*(unsigned __int8*)(v114 + v113 + 4) << 32);
        *(_DWORD*)(a2 + 20) = v113 + 6;
        v120 = v119 |
               ((unsigned __int64)*(unsigned __int8*)(v114 + v113 + 5) << 40);
        *(_DWORD*)(a2 + 20) = v113 + 7;
        v121 = *(unsigned __int8*)(v114 + v113 + 6);
        *(_DWORD*)(a2 + 20) = v113 + 8;
        v122 = v120 | (v121 << 48) |
               ((unsigned __int64)*(unsigned __int8*)(v114 + v113 + 7) << 56);
        v124 = *(unsigned __int64**)(a1 + 192);
        v123 = *(_QWORD*)(a1 + 200);
        if ((unsigned __int64)v124 < v123) {
          *v124 = v122;
          v112 = (__int64)(v124 + 1);
        }
        else {
          v125 = *(_QWORD*)(a1 + 184);
          v126 = (char*)v124 - v125;
          v127 = ((__int64)v124 - v125) >> 3;
          v128 = v127 + 1;
          if ((unsigned __int64)(v127 + 1) >> 61 != 0) {
            goto LABEL_97;
          }
          v129 = v123 - v125;
          if (v129 >> 2 > v128) {
            v128 = v129 >> 2;
          }
          if ((unsigned __int64)v129 >= 0x7FFFFFFFFFFFFFF8LL) {
            v130 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v130 = v128;
          }
          if (v130 != 0) {
            if (v130 >> 61 != 0) {
              goto LABEL_98;
            }
            v131 = fw_memory_HeapManager_Allocate_alt1(*v85, 8 * v130, 16, 0);
          }
          else {
            v131 = 0;
          }
          v132 = v131 + 8 * v130;
          v133 = (unsigned __int64)v124 - v125;
          v134 = (__int64)&v126[v131 + -8 * v127];
          *(_QWORD*)&v126[v131] = v122;
          v112 = (__int64)&v126[v131 + 8];
          memcpy_alt1(v134, v125, v133);
          *(_QWORD*)(a1 + 184) = v134;
          *(_QWORD*)(a1 + 192) = v112;
          *(_QWORD*)(a1 + 200) = v132;
          if (v125 != 0) {
            v135 = 128;
            if (*(_QWORD*)(*v85 + 200) == 0) {
              v135 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v85 + v135, v125);
          }
        }
        --v84;
        *(_QWORD*)(a1 + 192) = v112;
      } while (v84 != 0);
    }
  }
}

_QWORD* GameCalendar_12e0c20(_QWORD* result)
{
  int v1;
  _QWORD* v2;
  unsigned __int64 v3;
  bool v4;
  int v6;
  void* v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];

  v1 = *(unsigned __int8*)(result[19] + 16LL * *((int*)result + 44));
  if (v1 == 5) {
    v7 = &GameData_1a92577;
    return (_QWORD*)Tutorial_f9a740(result, v7);
  }
  if (v1 == 6) {
    v2 = result;
    v3 = 0xD37A6F4DE9BD37A7LL *
         ((__int64)(*(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 24LL) -
                    *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 16LL)) >>
          4);
    v4 = v3 < 2 || (int)v3 < -1;
    if (v4 || GameData_21c9700 == 0) {
      v6 = 0;
    }
    else {
      v10[1] = &GameData_1a95031;
      v10[0] = game_HashString(&GameData_1a95031);
      v8 = SpotMgr_132ffa0(v10);
      if (game_GameModeData_instance_ != 0) {
        v9 = *(_QWORD*)(game_GameModeData_instance_ + 24);
        if (v9 != 0) {
          v9 = GameRoutine_88cee0();
          if (v9 != 0) {
            v9 = game_gmap_SpotMgr_FindSpot(v9);
          }
        }
      }
      else {
        v9 = 0;
      }
      v6 = v8 == v9 ? 1 : 2;
    }
    result = GameRoutine_12dd7e0(v6);
    if (result != nullptr) {
      v7 = (void*)result[1];
      result = v2;
      return (_QWORD*)Tutorial_f9a740(result, v7);
    }
  }
  return result;
}

__int64 GameCalendar_12e0d40(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(int*)(result + 176) + 1LL;
  v3 = *(_QWORD*)(result + 152);
  v2 = *(_QWORD*)(result + 160);
  *(_DWORD*)(result + 176) = v1;
  v4 = v2 - v3;
  v5 = *(_QWORD*)(result + 8);
  if (v1 < v4 >> 4 && v5 != 0) {
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 0) {
          *(_QWORD*)(result + 16) = v5;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v5 == 0) {
        return result;
      }
      v5 += 64;
    }
  }
  return result;
}

void GameCalendar_12e0da0(__int64 a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  unsigned int v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int8** v13;
  unsigned __int8** v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64*** v24;
  __int64*** v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int8* v42;
  unsigned int v43;
  __int64* v44;
  _BYTE* v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  __int64 v51;
  _QWORD* v52;
  bool v53;
  unsigned __int64 v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  char* v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int8* v90;

  v2 = *(unsigned __int8**)(a1 + 152);
  v1 = *(unsigned __int8**)(a1 + 160);
  v90 = v1;
  while (v2 != v1) {
    v3 = *v2;
    if (v3 > 3) {
      if (*v2 > 5u) {
        if (v3 == 6) {
          *(_BYTE*)(GameData_21c9650 + 107) |= 2u;
          goto LABEL_3;
        }
        if (v3 != 7) {
          goto LABEL_3;
        }
        v12 = (_QWORD*)GameData_21c9650;
        v13 = *(unsigned __int8***)(GameData_21c9650 + 64);
        v14 = *(unsigned __int8***)(GameData_21c9650 + 72);
        while (1) {
          if (v13 == v14) {
            goto LABEL_3;
          }
          v42 = *v13;
          if (!GameRoutine_12da4a0(*v13)) {
            goto LABEL_68;
          }
          v43 = *v42;
          if (v43 > 0xC ||
              ((1 << v43) & 0x1F9E) == 0 && (v43 != 5 || (v42[1] & 1) != 0)) {
            goto LABEL_68;
          }
          v44 = *((__int64**)v42 + 1);
          if (v44 == nullptr) {
            goto LABEL_68;
          }
          v45 = (_BYTE*)v44[36];
          if (v45 == nullptr || *v45 == 0) {
            goto LABEL_68;
          }
          v46 = v12[23];
          v47 = (_QWORD*)v12[24];
          v48 = *v44;
          v49 = (_QWORD*)v46;
          if ((_QWORD*)v46 == v47) {
            goto LABEL_95;
          }
          v50 = (unsigned __int64)v47 - v46 - 8;
          v49 = (_QWORD*)v12[23];
          if ((~(_BYTE)v50 & 0x18) != 0) {
            break;
          }
        LABEL_81:
          if (v50 < 0x18) {
            goto LABEL_96;
          }
          v49 += 2;
          while (1) {
            if (*(v49 - 2) == v48) {
              if (v49 - 2 == v47) {
                goto LABEL_96;
              }
              goto LABEL_68;
            }
            if (*(v49 - 1) == v48) {
              --v49;
              goto LABEL_95;
            }
            if (*v49 == v48) {
              goto LABEL_95;
            }
            if (v49[1] == v48) {
              break;
            }
            v52 = v49 + 2;
            v49 += 4;
            if (v52 == v47) {
              goto LABEL_96;
            }
          }
          if (v49 + 1 != v47) {
            goto LABEL_68;
          }
        LABEL_96:
          v53 = v43 - 1 >= 0xC;
          v54 = v12[25];
          if (v53) {
            v55 = 0;
          }
          else {
            v55 = v48;
          }
          if ((unsigned __int64)v47 < v54) {
            *v47 = v55;
            v41 = (__int64)(v47 + 1);
            goto LABEL_67;
          }
          v56 = (char*)v47 - v46;
          v57 = ((__int64)v47 - v46) >> 3;
          v58 = v57 + 1;
          if ((unsigned __int64)(v57 + 1) >> 61 != 0) {
            goto LABEL_163;
          }
          v59 = v54 - v46;
          if (v59 >> 2 > v58) {
            v58 = v59 >> 2;
          }
          if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFF8LL) {
            v60 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v60 = v58;
          }
          if (v60 != 0) {
            if (v60 >> 61 != 0) {
              goto LABEL_164;
            }
            v61 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v60, 16, 0);
          }
          else {
            v61 = 0;
          }
          v62 = v61 + 8 * v60;
          v63 = (unsigned __int64)v47 - v46;
          v64 = (__int64)&v56[v61 + -8 * v57];
          *(_QWORD*)&v56[v61] = v55;
          v41 = (__int64)&v56[v61 + 8];
          memcpy_alt1(v64, v46, v63);
          v12[23] = v64;
          v12[24] = v41;
          v12[25] = v62;
          if (v46 != 0) {
            v65 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v65 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v46);
          }
        LABEL_67:
          v12[24] = v41;
        LABEL_68:
          ++v13;
        }
        v51 = ((unsigned __int8)((unsigned int)v50 >> 3) + 1) & 3;
        v49 = (_QWORD*)v12[23];
        while (*v49 != v48) {
          ++v49;
          if (--v51 == 0) {
            goto LABEL_81;
          }
        }
      LABEL_95:
        if (v49 == v47) {
          goto LABEL_96;
        }
        goto LABEL_68;
      }
      if (v3 != 4) {
        if (v3 == 5) {
          *(_DWORD*)(GameData_21c9650 + 208) =
              *(_DWORD*)(*((_QWORD*)v2 + 1) + 4LL);
        }
        goto LABEL_3;
      }
      v15 = (_QWORD*)GameData_21c9650;
      v16 = *(_QWORD*)(GameData_21c9650 + 160);
      v17 = *(_QWORD**)(GameData_21c9650 + 168);
      v18 = ***((_QWORD***)v2 + 1);
      v19 = (_QWORD*)v16;
      if ((_QWORD*)v16 == v17) {
      LABEL_121:
        if (v19 != v17) {
          goto LABEL_3;
        }
      }
      else {
        v20 = (unsigned __int64)v17 - v16 - 8;
        v19 = *(_QWORD**)(GameData_21c9650 + 160);
        if ((~(_BYTE)v20 & 0x18) != 0) {
          v21 = ((unsigned __int8)((unsigned int)v20 >> 3) + 1) & 3;
          v19 = *(_QWORD**)(GameData_21c9650 + 160);
          while (*v19 != v18) {
            ++v19;
            if (--v21 == 0) {
              goto LABEL_36;
            }
          }
          goto LABEL_121;
        }
      LABEL_36:
        if (v20 >= 0x18) {
          v19 += 2;
          while (*(v19 - 2) != v18) {
            if (*(v19 - 1) == v18) {
              --v19;
              goto LABEL_121;
            }
            if (*v19 == v18) {
              goto LABEL_121;
            }
            if (v19[1] == v18) {
              if (v19 + 1 != v17) {
                goto LABEL_3;
              }
              goto LABEL_122;
            }
            v22 = v19 + 2;
            v19 += 4;
            if (v22 == v17) {
              goto LABEL_122;
            }
          }
          if (v19 - 2 != v17) {
            goto LABEL_3;
          }
        }
      }
    LABEL_122:
      v66 = *(_QWORD*)(GameData_21c9650 + 176);
      if ((unsigned __int64)v17 < v66) {
        *v17 = v18;
        v15[21] = v17 + 1;
        goto LABEL_3;
      }
      v67 = (char*)v17 - v16;
      v68 = ((__int64)v17 - v16) >> 3;
      v69 = v68 + 1;
      if ((unsigned __int64)(v68 + 1) >> 61 == 0) {
        v70 = v66 - v16;
        if (v70 >> 2 > v69) {
          v69 = v70 >> 2;
        }
        if ((unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFF8LL) {
          v71 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v71 = v69;
        }
        if (v71 != 0) {
          if (v71 >> 61 != 0) {
            goto LABEL_164;
          }
          v72 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v71, 16, 0);
        }
        else {
          v72 = 0;
        }
        v73 = v72 + 8 * v71;
        v74 = (unsigned __int64)v17 - v16;
        v75 = (__int64)&v67[v72 + -8 * v68];
        *(_QWORD*)&v67[v72] = v18;
        v76 = (__int64)&v67[v72 + 8];
        memcpy_alt1(v75, v16, v74);
        v15[20] = v75;
        v15[21] = v76;
        v15[22] = v73;
        if (v16 != 0) {
          v77 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v77 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v16);
        }
        v15[21] = v76;
        goto LABEL_3;
      }
    LABEL_163:
      GameRoutine_65c760_alt1();
    }
    if (*v2 <= 1u) {
      if (*v2 != 0) {
        *(_BYTE*)(GameData_21c9650 + 107) |= 1u;
      }
      else {
        *(_BYTE*)(*((_QWORD*)v2 + 1) + 4LL) = 1;
      }
      goto LABEL_3;
    }
    if (v3 == 2) {
      v23 = (_QWORD*)GameData_21c9650;
      v24 = *(__int64****)(GameData_21c9650 + 40);
      v25 = *(__int64****)(GameData_21c9650 + 48);
      while (1) {
        if (v24 == v25) {
          goto LABEL_3;
        }
        if (GameRoutine_12dda00((__int64)v23, v24)) {
          v27 = ***v24;
          v29 = (__int64*)v23[15];
          v28 = v23[16];
          if ((unsigned __int64)v29 < v28) {
            *v29 = v27;
            v26 = (__int64)(v29 + 1);
          }
          else {
            v30 = v23[14];
            v31 = (char*)v29 - v30;
            v32 = ((__int64)v29 - v30) >> 3;
            v33 = v32 + 1;
            if ((unsigned __int64)(v32 + 1) >> 61 != 0) {
              goto LABEL_163;
            }
            v34 = v28 - v30;
            if (v34 >> 2 > v33) {
              v33 = v34 >> 2;
            }
            if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
              v35 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v35 = v33;
            }
            if (v35 != 0) {
              if (v35 >> 61 != 0) {
                goto LABEL_164;
              }
              v36 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35, 16, 0);
            }
            else {
              v36 = 0;
            }
            v37 = v36 + 8 * v35;
            v38 = (unsigned __int64)v29 - v30;
            v39 = (__int64)&v31[v36 + -8 * v32];
            *(_QWORD*)&v31[v36] = v27;
            v26 = (__int64)&v31[v36 + 8];
            memcpy_alt1(v39, v30, v38);
            v23[14] = v39;
            v23[15] = v26;
            v23[16] = v37;
            if (v30 != 0) {
              v40 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v40 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v30);
            }
          }
          v23[15] = v26;
        }
        ++v24;
      }
    }
    if (v3 != 3) {
      goto LABEL_3;
    }
    v4 = (_QWORD*)GameData_21c9650;
    v5 = *(_QWORD*)(GameData_21c9650 + 136);
    v6 = *(_QWORD**)(GameData_21c9650 + 144);
    v7 = ****((_QWORD****)v2 + 1);
    v8 = (_QWORD*)v5;
    if ((_QWORD*)v5 == v6) {
      goto LABEL_140;
    }
    v9 = (unsigned __int64)v6 - v5 - 8;
    v8 = *(_QWORD**)(GameData_21c9650 + 136);
    if ((~(_BYTE)v9 & 0x18) != 0) {
      v10 = ((unsigned __int8)((unsigned int)v9 >> 3) + 1) & 3;
      v8 = *(_QWORD**)(GameData_21c9650 + 136);
      while (*v8 != v7) {
        ++v8;
        if (--v10 == 0) {
          goto LABEL_20;
        }
      }
    LABEL_140:
      if (v8 == v6) {
        goto LABEL_141;
      }
      goto LABEL_3;
    }
  LABEL_20:
    if (v9 < 0x18) {
      goto LABEL_141;
    }
    v8 += 2;
    while (1) {
      if (*(v8 - 2) == v7) {
        if (v8 - 2 == v6) {
          goto LABEL_141;
        }
        goto LABEL_3;
      }
      if (*(v8 - 1) == v7) {
        --v8;
        goto LABEL_140;
      }
      if (*v8 == v7) {
        goto LABEL_140;
      }
      if (v8[1] == v7) {
        break;
      }
      v11 = v8 + 2;
      v8 += 4;
      if (v11 == v6) {
        goto LABEL_141;
      }
    }
    if (v8 + 1 != v6) {
      goto LABEL_3;
    }
  LABEL_141:
    v78 = *(_QWORD*)(GameData_21c9650 + 152);
    if ((unsigned __int64)v6 < v78) {
      *v6 = v7;
      v4[18] = v6 + 1;
      goto LABEL_3;
    }
    v79 = (char*)v6 - v5;
    v80 = ((__int64)v6 - v5) >> 3;
    v81 = v80 + 1;
    if ((unsigned __int64)(v80 + 1) >> 61 != 0) {
      goto LABEL_163;
    }
    v82 = v78 - v5;
    if (v82 >> 2 > v81) {
      v81 = v82 >> 2;
    }
    if ((unsigned __int64)v82 >= 0x7FFFFFFFFFFFFFF8LL) {
      v83 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v83 = v81;
    }
    if (v83 != 0) {
      if (v83 >> 61 == 0) {
        v84 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v83, 16, 0);
        goto LABEL_153;
      }
    LABEL_164:
      GameRoutine_60a210_alt1();
    }
    v84 = 0;
  LABEL_153:
    v85 = v84 + 8 * v83;
    v86 = (unsigned __int64)v6 - v5;
    v87 = (__int64)&v79[v84 + -8 * v80];
    *(_QWORD*)&v79[v84] = v7;
    v88 = (__int64)&v79[v84 + 8];
    memcpy_alt1(v87, v5, v86);
    v4[17] = v87;
    v4[18] = v88;
    v4[19] = v85;
    if (v5 != 0) {
      v89 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v89 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v89, v5);
    }
    v4[18] = v88;
  LABEL_3:
    v1 = v90;
    v2 += 16;
  }
}

__int64 game_GameCalendar_ProcNotifyBirthday_Notify(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  unsigned int v6;
  int v7;
  __int64 v8;
  __int16* v9;
  _BOOL4 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v29[4];
  _QWORD* v30;
  _QWORD v31[4];
  _QWORD* v32;
  _QWORD v33[4];
  _QWORD* v34;
  _QWORD v35[2];
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  v2 = **(_QWORD**)(a1 + 152);
  v3 = TransporterConst_89cc80(19);
  if (v2 != 0 && *(_QWORD*)(v2 + 272) != 0) {
    v4 = *(_QWORD*)(v2 + 24);
    if (*(_QWORD*)(v4 + 1472) == 0 || game_GameModeData_instance_ == 0) {
      v6 = 0;
    }
    else {
      v7 = v3;
      v8 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v4 + 1472);
      v6 = v8 != 0 ? *(_DWORD*)(v8 + 32) : 0;
      v3 = v7;
    }
    v9 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                        ? game_gmap_GmapClock_instance_ + 8
                        : game_gmap_GmapClock_kDefaultTime_ptr);
    v10 = v6 <= 10000 * *v9 + 100 * v9[1] + v9[2];
    if (v3 >= 1 && v10) {
      v11 = GameRoutine_67ed20(v2);
      v33[0] = GameData_20238a8;
      v33[1] = a1;
      v32 = v31;
      v30 = v29;
      v34 = v33;
      v31[0] = GameData_2023928;
      v29[0] = GameData_20239a8;
      v12 = msg_MessageManager_instance__ptr[0];
      if (v11 != 0) {
        v13 = v11;
      }
      else {
        v13 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v13);
      v14 = *v12;
      v39 = -1;
      v40 = -1;
      v41 = -1;
      v42 = -1;
      v43 = -1;
      v44 = -1;
      v45 = -1;
      v46 = -1;
      v47 = -1;
      v48 = -1;
      v49 = -1;
      v50 = -1;
      v35[0] = GameData_212e348 + 2;
      v35[1] = 0xFFFF0001FFFF0000LL;
      v36 = 0xFFFF0004FFFF0002LL;
      v37 = 0xFFFF0006FFFF0005LL;
      v51 = 8;
      v38 = (_QWORD*)0xFFFF0008FFFF0007LL;
      v35[0] =
          GameRoutine_a4dbe0(v14, "MID_Reminder_BirthSend_Confirm", 0, v35);
      v15 = GameRoutine_12e1990(a1, v35);
      v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
      GameRoutine_16477d0(v17, "MID_Sys_Yes", v33, v29);
      BasicMenuCursor_16e0c00(v15, v17);
      v18 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
      GameRoutine_16477d0(v18, "MID_Sys_No", v31, v29);
      BasicMenuCursor_16e0c00(v15, v18);
      if (v30 == v29) {
        v19 = 32;
      }
      else {
        if (v30 == nullptr) {
          goto LABEL_32;
        }
        v19 = 40;
      }
      (*(void (**)(_QWORD*))(*v30 + v19))(v30);
    LABEL_32:
      if (v32 == v31) {
        v26 = 32;
      }
      else {
        if (v32 == nullptr) {
          goto LABEL_37;
        }
        v26 = 40;
      }
      (*(void (**)(_QWORD*))(*v32 + v26))(v32);
    LABEL_37:
      v24 = v34;
      if (v34 == v33) {
      LABEL_38:
        v25 = 32;
        goto LABEL_39;
      }
    LABEL_28:
      if (v24 != nullptr) {
        v25 = 40;
      LABEL_39:
        (*(void (**)(_QWORD*))(*v24 + v25))(v24);
      }
      v27 = GameRoutine_67ed20(v2);
      return GameRoutine_16ad210(v15, v2, 6, v27);
    }
  }
  v20 = GameRoutine_67ed20(v2);
  v21 = msg_MessageManager_instance__ptr[0];
  if (v20 != 0) {
    v22 = v20;
  }
  else {
    v22 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v22);
  v23 = *v21;
  v39 = -1;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v48 = -1;
  v49 = -1;
  v50 = -1;
  v35[0] = GameData_212e348 + 2;
  v35[1] = 0xFFFF0001FFFF0000LL;
  v36 = 0xFFFF0004FFFF0002LL;
  v37 = 0xFFFF0006FFFF0005LL;
  v51 = 8;
  v38 = (_QWORD*)0xFFFF0008FFFF0007LL;
  v35[0] = GameRoutine_a4dbe0(v23, "MID_Reminder_BirthSend_NotPresent_Message",
                              0, v35);
  v15 = GameRoutine_12e1990(a1, v35);
  v38 = nullptr;
  GameRoutine_6680e0(v35, v15 + 1248);
  v24 = v38;
  if (v38 == v35) {
    goto LABEL_38;
  }
  goto LABEL_28;
}

__int64 game_GameCalendar_ProcNotifyBirthday_Notify_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 8);
  if (v2 == 0) {
    return 2;
  }
  while (*(_BYTE*)v2 != 2) {
    if (*(_BYTE*)v2 == 0) {
      return 2;
    }
  LABEL_4:
    v2 += 64;
  }
  if (*(_DWORD*)(v2 + 32) != 0) {
    goto LABEL_4;
  }
  *(_QWORD*)(v1 + 16) = v2;
  *(_WORD*)(v1 + 136) &= ~0x80u;
  return 2;
}

__int64 game_GameCalendar_ProcNotify_Notify_closure0_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _BYTE v5[32];
  _BYTE* v6;
  const char* v7;

  v2 = *a2;
  v7 = "MID_Reminder_MiddleDay_Caution";
  result = game_menu_Dialog__CreateBind_game_menu_Dialog(v2, &v7);
  if (result != 0) {
    v6 = nullptr;
    GameRoutine_6680e0(v5, result + 1248);
    result = (__int64)v6;
    if (v6 == v5) {
      v4 = 32;
    }
    else {
      if (v6 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(void*))(*(_QWORD*)v6 + v4))((void*)v6);
  }
  return result;
}

unsigned __int64 game_GameCalendar_UpdateLatest_lambda0_Invoke(_QWORD* a1,
                                                               __int64* a2)
{
  int v2;
  unsigned __int64 v3;
  char v4;
  __int16* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int16 v28;
  __int64 v29;
  __int16 v30;
  int v31;
  __int64 v32;
  __int16 v33;
  int v34;
  __int64 v35;
  __int16 v36;
  int v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned int v49;
  unsigned __int64 v50;
  char* v53;
  __int64 v54;
  __int16* v55;
  unsigned __int64 result;
  char v57;
  int v58;
  __int16 v59;
  int v60;
  __int16 v61;

  v53 = (char*)a1[2];
  v54 = *a2;
  v55 = (__int16*)a1[3];
  result = a1[1];
  v57 = *v53;
  if (v54 == 0) {
    return result;
  }
  v2 = *(unsigned __int8*)(v54 + 80);
  if (v2 != 9) {
    goto LABEL_95;
  }
  v3 = result;
  v4 = v57;
  v5 = v55;
  v6 = v54;
  v7 = game_HashString_alt1((__int64)&GameData_1ae1d7b);
  if (v7 != 0) {
    v8 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v8 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v10 = v8 - 1;
      if ((v8 & (v8 - 1)) != 0) {
        v11 = v7;
        if (v7 >= v8) {
          v11 = v7 % v8;
        }
      }
      else {
        v11 = v10 & v7;
      }
      v12 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v11);
      if (v12 != nullptr) {
        v13 = (_QWORD*)*v12;
        if (v13 != nullptr) {
          if ((v8 & v10) == 0) {
            while (1) {
              v16 = v13[1];
              if (v16 == v7) {
                if (v13[2] == v7) {
                  goto LABEL_71;
                }
              }
              else if ((v16 & v10) != v11) {
                goto LABEL_27;
              }
              v13 = (_QWORD*)*v13;
              v15 = nullptr;
              if (v13 == nullptr) {
                goto LABEL_28;
              }
            }
          }
          do {
            v14 = v13[1];
            if (v14 == v7) {
              if (v13[2] == v7) {
              LABEL_71:
                v15 = (_QWORD*)v13[3];
                goto LABEL_28;
              }
            }
            else {
              if (v14 >= v8) {
                v14 %= v8;
              }
              if (v14 != v11) {
                break;
              }
            }
            v13 = (_QWORD*)*v13;
          } while (v13 != nullptr);
        }
      }
    }
  }
LABEL_27:
  v15 = nullptr;
LABEL_28:
  v17 = GameRoutine_9010a0(v15);
  result = game_HashString_alt1((__int64)&GameData_1a95031);
  if (result == 0) {
    return result;
  }
  v18 = *(_QWORD*)(GameData_21ca090 + 96);
  if (v18 == 0 || *(_QWORD*)(GameData_21ca090 + 112) == 0) {
    return result;
  }
  v20 = v18 - 1;
  if ((v18 & (v18 - 1)) != 0) {
    v21 = result;
    if (result >= v18) {
      v21 = result % v18;
    }
  }
  else {
    v21 = v20 & result;
  }
  v22 = *(_QWORD**)(*(_QWORD*)(GameData_21ca090 + 88) + 8 * v21);
  if (v22 == nullptr) {
    return result;
  }
  v23 = (_QWORD*)*v22;
  if (v23 == nullptr) {
    return result;
  }
  if ((v18 & v20) == 0) {
    while (1) {
      v25 = v23[1];
      if (v25 == result) {
        if (v23[2] == result) {
          goto LABEL_53;
        }
      }
      else if ((v25 & v20) != v21) {
        return result;
      }
      v23 = (_QWORD*)*v23;
      if (v23 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v24 = v23[1];
    if (v24 == result) {
      break;
    }
    if (v24 >= v18) {
      v24 %= v18;
    }
    if (v24 != v21) {
      return result;
    }
  LABEL_42:
    v23 = (_QWORD*)*v23;
    if (v23 == nullptr) {
      return result;
    }
  }
  if (v23[2] != result) {
    goto LABEL_42;
  }
LABEL_53:
  if (v17 == nullptr) {
    return result;
  }
  v26 = v23[3];
  if (v26 == 0) {
    return result;
  }
  v27 = *(_DWORD*)v5;
  v28 = v5[2];
  v60 = 0;
  v61 = 0;
  v58 = v27;
  v59 = v28;
  v29 = GameRoutine_9011a0(v17, (__int16*)&v58);
  if (v29 == 0 || *(_QWORD*)(v29 + 64) != v26) {
    v30 = v5[2];
    v31 = *(_DWORD*)v5;
    v61 = 0;
    v59 = v30;
    v58 = v31;
    v60 = 6;
    v32 = GameRoutine_9011a0(v17, (__int16*)&v58);
    if (v32 == 0 || *(_QWORD*)(v32 + 64) != v26) {
      v33 = v5[2];
      v34 = *(_DWORD*)v5;
      v61 = 0;
      v59 = v33;
      v58 = v34;
      v60 = 12;
      v35 = GameRoutine_9011a0(v17, (__int16*)&v58);
      if (v35 == 0 || *(_QWORD*)(v35 + 64) != v26) {
        v36 = v5[2];
        v37 = *(_DWORD*)v5;
        v61 = 0;
        v59 = v36;
        v58 = v37;
        v60 = 18;
        result = GameRoutine_9011a0(v17, (__int16*)&v58);
        if (result == 0 || *(_QWORD*)(result + 64) != v26) {
          return result;
        }
      }
    }
  }
  v38 = game_HashString_alt1((__int64)&GameData_1ad690f);
  v54 = v6;
  result = v3;
  if (v38 == 0) {
    goto LABEL_94;
  }
  v39 = *(_QWORD*)(GameData_21ca020 + 96);
  if (v39 == 0 || *(_QWORD*)(GameData_21ca020 + 112) == 0) {
    goto LABEL_94;
  }
  v41 = v39 - 1;
  if ((v39 & (v39 - 1)) != 0) {
    v42 = v38;
    if (v38 >= v39) {
      v42 = v38 % v39;
    }
  }
  else {
    v42 = v41 & v38;
  }
  v43 = *(_QWORD**)(*(_QWORD*)(GameData_21ca020 + 88) + 8 * v42);
  if (v43 == nullptr || (v44 = (_QWORD*)*v43) == nullptr) {
  LABEL_94:
    v2 = *(unsigned __int8*)(v6 + 80);
  LABEL_95:
    v49 = 2;
    switch (v2) {
    case 0:
      goto LABEL_107;
    case 1:
      v49 = 3;
      goto LABEL_107;
    case 2:
      v49 = 4;
      goto LABEL_107;
    case 3:
      v49 = 5;
      goto LABEL_107;
    case 4:
      v49 = 1;
      goto LABEL_107;
    case 5:
      v49 = 7;
      goto LABEL_107;
    case 6:
      v49 = 8;
      goto LABEL_107;
    case 7:
      v49 = 9;
      goto LABEL_107;
    case 8:
      v49 = 10;
      goto LABEL_107;
    case 9:
      v49 = 11;
      goto LABEL_107;
    case 10:
      v49 = 12;
    LABEL_107:
      v50 = result + 32LL * v49;
      if ((*(_BYTE*)(v50 + 24) & 1) == 0) {
        *(_BYTE*)v50 = v49;
        *(_BYTE*)(v50 + 1) = 0;
        *(_QWORD*)(v50 + 8) = v54;
        *(_QWORD*)(v50 + 16) = 0;
        *(_BYTE*)(v50 + 24) = 1;
      }
      break;
    case 11:
      *(_BYTE*)(result + 416) = 1;
      break;
    default:
      return result;
    }
    return result;
  }
  if ((v39 & v41) == 0) {
    while (1) {
      v46 = v44[1];
      if (v46 == v38) {
        if (v44[2] == v38) {
          goto LABEL_89;
        }
      }
      else if ((v46 & v41) != v42) {
        goto LABEL_94;
      }
      v44 = (_QWORD*)*v44;
      if (v44 == nullptr) {
        goto LABEL_94;
      }
    }
  }
  while (1) {
    v45 = v44[1];
    if (v45 == v38) {
      break;
    }
    if (v45 >= v39) {
      v45 %= v39;
    }
    if (v45 != v42) {
      goto LABEL_94;
    }
  LABEL_78:
    v44 = (_QWORD*)*v44;
    if (v44 == nullptr) {
      goto LABEL_94;
    }
  }
  if (v44[2] != v38) {
    goto LABEL_78;
  }
LABEL_89:
  if (v4 == 0) {
    goto LABEL_94;
  }
  v47 = v44[3];
  if (v47 == 0) {
    goto LABEL_94;
  }
  if (((*(unsigned __int8*)(v47 + 144) >> (v4 - 1)) & 1) == 0) {
    goto LABEL_94;
  }
  v48 = ((__int64)v5[1] << 24) + ((__int64)*v5 << 32) + ((__int64)v5[2] << 18) +
        ((__int64)v5[3] << 12) + ((__int64)v5[4] << 6) + v5[5];
  if (((unsigned __int64)*(unsigned __int8*)(v47 + 225) << 18) +
              ((unsigned __int64)*(unsigned __int8*)(v47 + 224) << 24) +
              0x5A900000000LL >
          v48 ||
      v48 >
          ((unsigned __int64)*(unsigned __int8*)(*(_QWORD*)(v47 + 24) + 2LL)
           << 24) +
              ((unsigned __int64)*(unsigned __int8*)(*(_QWORD*)(v47 + 24) + 3LL)
               << 18) +
              0x5A900000000LL) {
    goto LABEL_94;
  }
  return result;
}

unsigned __int64 game_GameCalendar_UpdateLatest_lambda1_Invoke(_QWORD* a1,
                                                               __int64* a2)
{
  int v2;
  unsigned __int64 v3;
  char v4;
  __int16* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int16 v28;
  __int64 v29;
  __int16 v30;
  int v31;
  __int64 v32;
  __int16 v33;
  int v34;
  __int64 v35;
  __int16 v36;
  int v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned int v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  __int16* v55;
  unsigned __int64 result;
  char v57;
  _DWORD v58[19];

  v53 = (char*)a1[2];
  v54 = *a2;
  v55 = (__int16*)a1[3];
  result = a1[1];
  v57 = *v53;
  if (v54 == 0) {
    return result;
  }
  *(_QWORD*)&v58[3] = v51;
  *(_QWORD*)&v58[5] = v52;
  v2 = *(unsigned __int8*)(v54 + 80);
  if (v2 != 9) {
    goto LABEL_95;
  }
  v3 = result;
  v4 = v57;
  v5 = v55;
  v6 = v54;
  v7 = game_HashString_alt1((__int64)&GameData_1ae1d7b);
  if (v7 != 0) {
    v8 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v8 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v10 = v8 - 1;
      if ((v8 & (v8 - 1)) != 0) {
        v11 = v7;
        if (v7 >= v8) {
          v11 = v7 % v8;
        }
      }
      else {
        v11 = v10 & v7;
      }
      v12 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v11);
      if (v12 != nullptr) {
        v13 = (_QWORD*)*v12;
        if (v13 != nullptr) {
          if ((v8 & v10) == 0) {
            while (1) {
              v16 = v13[1];
              if (v16 == v7) {
                if (v13[2] == v7) {
                  goto LABEL_71;
                }
              }
              else if ((v16 & v10) != v11) {
                goto LABEL_27;
              }
              v13 = (_QWORD*)*v13;
              v15 = nullptr;
              if (v13 == nullptr) {
                goto LABEL_28;
              }
            }
          }
          do {
            v14 = v13[1];
            if (v14 == v7) {
              if (v13[2] == v7) {
              LABEL_71:
                v15 = (_QWORD*)v13[3];
                goto LABEL_28;
              }
            }
            else {
              if (v14 >= v8) {
                v14 %= v8;
              }
              if (v14 != v11) {
                break;
              }
            }
            v13 = (_QWORD*)*v13;
          } while (v13 != nullptr);
        }
      }
    }
  }
LABEL_27:
  v15 = nullptr;
LABEL_28:
  v17 = GameRoutine_9010a0(v15);
  result = game_HashString_alt1((__int64)&GameData_1a95031);
  if (result == 0) {
    return result;
  }
  v18 = *(_QWORD*)(GameData_21ca090 + 96);
  if (v18 == 0 || *(_QWORD*)(GameData_21ca090 + 112) == 0) {
    return result;
  }
  v20 = v18 - 1;
  if ((v18 & (v18 - 1)) != 0) {
    v21 = result;
    if (result >= v18) {
      v21 = result % v18;
    }
  }
  else {
    v21 = v20 & result;
  }
  v22 = *(_QWORD**)(*(_QWORD*)(GameData_21ca090 + 88) + 8 * v21);
  if (v22 == nullptr) {
    return result;
  }
  v23 = (_QWORD*)*v22;
  if (v23 == nullptr) {
    return result;
  }
  if ((v18 & v20) == 0) {
    while (1) {
      v25 = v23[1];
      if (v25 == result) {
        if (v23[2] == result) {
          goto LABEL_53;
        }
      }
      else if ((v25 & v20) != v21) {
        return result;
      }
      v23 = (_QWORD*)*v23;
      if (v23 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v24 = v23[1];
    if (v24 == result) {
      break;
    }
    if (v24 >= v18) {
      v24 %= v18;
    }
    if (v24 != v21) {
      return result;
    }
  LABEL_42:
    v23 = (_QWORD*)*v23;
    if (v23 == nullptr) {
      return result;
    }
  }
  if (v23[2] != result) {
    goto LABEL_42;
  }
LABEL_53:
  if (v17 == nullptr) {
    return result;
  }
  v26 = v23[3];
  if (v26 == 0) {
    return result;
  }
  v27 = *(_DWORD*)v5;
  v28 = v5[2];
  *(_DWORD*)((char*)&v58[1] + 2) = 0;
  HIWORD(v58[2]) = 0;
  v58[0] = v27;
  LOWORD(v58[1]) = v28;
  v29 = GameRoutine_9011a0(v17, (__int16*)v58);
  if (v29 == 0 || *(_QWORD*)(v29 + 64) != v26) {
    v30 = v5[2];
    v31 = *(_DWORD*)v5;
    HIWORD(v58[2]) = 0;
    LOWORD(v58[1]) = v30;
    v58[0] = v31;
    *(_DWORD*)((char*)&v58[1] + 2) = 6;
    v32 = GameRoutine_9011a0(v17, (__int16*)v58);
    if (v32 == 0 || *(_QWORD*)(v32 + 64) != v26) {
      v33 = v5[2];
      v34 = *(_DWORD*)v5;
      HIWORD(v58[2]) = 0;
      LOWORD(v58[1]) = v33;
      v58[0] = v34;
      *(_DWORD*)((char*)&v58[1] + 2) = 12;
      v35 = GameRoutine_9011a0(v17, (__int16*)v58);
      if (v35 == 0 || *(_QWORD*)(v35 + 64) != v26) {
        v36 = v5[2];
        v37 = *(_DWORD*)v5;
        HIWORD(v58[2]) = 0;
        LOWORD(v58[1]) = v36;
        v58[0] = v37;
        *(_DWORD*)((char*)&v58[1] + 2) = 18;
        result = GameRoutine_9011a0(v17, (__int16*)v58);
        if (result == 0 || *(_QWORD*)(result + 64) != v26) {
          return result;
        }
      }
    }
  }
  v38 = game_HashString_alt1((__int64)&GameData_1ad690f);
  v54 = v6;
  result = v3;
  if (v38 == 0) {
    goto LABEL_94;
  }
  v39 = *(_QWORD*)(GameData_21ca020 + 96);
  if (v39 == 0 || *(_QWORD*)(GameData_21ca020 + 112) == 0) {
    goto LABEL_94;
  }
  v41 = v39 - 1;
  if ((v39 & (v39 - 1)) != 0) {
    v42 = v38;
    if (v38 >= v39) {
      v42 = v38 % v39;
    }
  }
  else {
    v42 = v41 & v38;
  }
  v43 = *(_QWORD**)(*(_QWORD*)(GameData_21ca020 + 88) + 8 * v42);
  if (v43 == nullptr || (v44 = (_QWORD*)*v43) == nullptr) {
  LABEL_94:
    v2 = *(unsigned __int8*)(v6 + 80);
  LABEL_95:
    v49 = 2;
    switch (v2) {
    case 0:
      goto LABEL_107;
    case 1:
      v49 = 3;
      goto LABEL_107;
    case 2:
      v49 = 4;
      goto LABEL_107;
    case 3:
      v49 = 5;
      goto LABEL_107;
    case 4:
      v49 = 1;
      goto LABEL_107;
    case 5:
      v49 = 7;
      goto LABEL_107;
    case 6:
      v49 = 8;
      goto LABEL_107;
    case 7:
      v49 = 9;
      goto LABEL_107;
    case 8:
      v49 = 10;
      goto LABEL_107;
    case 9:
      v49 = 11;
      goto LABEL_107;
    case 10:
      v49 = 12;
    LABEL_107:
      v50 = result + 32LL * v49;
      if ((*(_BYTE*)(v50 + 24) & 1) == 0) {
        *(_BYTE*)v50 = v49;
        *(_BYTE*)(v50 + 1) = 0;
        *(_QWORD*)(v50 + 8) = v54;
        *(_QWORD*)(v50 + 16) = 0;
        *(_BYTE*)(v50 + 24) = 1;
      }
      break;
    case 11:
      *(_BYTE*)(result + 416) = 1;
      break;
    default:
      return result;
    }
    return result;
  }
  if ((v39 & v41) == 0) {
    while (1) {
      v46 = v44[1];
      if (v46 == v38) {
        if (v44[2] == v38) {
          goto LABEL_89;
        }
      }
      else if ((v46 & v41) != v42) {
        goto LABEL_94;
      }
      v44 = (_QWORD*)*v44;
      if (v44 == nullptr) {
        goto LABEL_94;
      }
    }
  }
  while (1) {
    v45 = v44[1];
    if (v45 == v38) {
      break;
    }
    if (v45 >= v39) {
      v45 %= v39;
    }
    if (v45 != v42) {
      goto LABEL_94;
    }
  LABEL_78:
    v44 = (_QWORD*)*v44;
    if (v44 == nullptr) {
      goto LABEL_94;
    }
  }
  if (v44[2] != v38) {
    goto LABEL_78;
  }
LABEL_89:
  if (v4 == 0) {
    goto LABEL_94;
  }
  v47 = v44[3];
  if (v47 == 0) {
    goto LABEL_94;
  }
  if (((*(unsigned __int8*)(v47 + 144) >> (v4 - 1)) & 1) == 0) {
    goto LABEL_94;
  }
  v48 = ((__int64)v5[1] << 24) + ((__int64)*v5 << 32) + ((__int64)v5[2] << 18) +
        ((__int64)v5[3] << 12) + ((__int64)v5[4] << 6) + v5[5];
  if (((unsigned __int64)*(unsigned __int8*)(v47 + 225) << 18) +
              ((unsigned __int64)*(unsigned __int8*)(v47 + 224) << 24) +
              0x5A900000000LL >
          v48 ||
      v48 >
          ((unsigned __int64)*(unsigned __int8*)(*(_QWORD*)(v47 + 24) + 2LL)
           << 24) +
              ((unsigned __int64)*(unsigned __int8*)(*(_QWORD*)(v47 + 24) + 3LL)
               << 18) +
              0x5A900000000LL) {
    goto LABEL_94;
  }
  return result;
}

#pragma GCC visibility pop
