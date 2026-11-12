#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameSituation_906320(__int64, __int64*);
__int64 UnitUtil_1212be0(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_ScoutBaseProc_ShowItemDialog(__int64*, __int64, char);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ec7b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_2262914;
extern int GameData_222e468;
extern int game_script_hub_talk_g_choice_menu_result;
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
void game_menu_1a06840(__int64, __int64, int, int);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_menu_anonymous_f6ff80(__int64 a1);
void game_menu_anonymous_fe0d20(__int64 a1);

void game_menu_anonymous_f6ff80(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v32;
  __int64 v33;
  int v34;
  struct {
    __int64 v35[2];
    char gap16_[48];
    __int64 v36;
  } v35_;
  __int64 v37;

  v2 = (__int64*)(a1 + 152);
  v1 = *(_QWORD*)(a1 + 152);
  v35_.v35[0] = 0;
  v35_.v35[1] = v1;
  GameSituation_906320(game_GameModeData_instance_ + 136, v35_.v35);
  v4 = GameData_212c878[0];
  if ((((0x10000000000LL << *(_BYTE*)(*(_QWORD*)(v35_.v36 + 88) + 72LL)) |
        (1LL << *(_BYTE*)(*(_QWORD*)(v35_.v36 + 88) + 73LL))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    v5 = *v2;
    v35_.v35[0] = 0;
    v35_.v35[1] = v5;
    GameSituation_906320(game_GameModeData_instance_ + 136, v35_.v35);
    v37 = 0;
    v7 = *(_QWORD*)(v35_.v36 + 88);
    if (v7 != 0) {
      v8 = *(unsigned __int16*)(v7 + 16);
      HIDWORD(v37) = 1;
      v9 = *v4;
      LOWORD(v37) = v8;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v8) + 73LL) == 17) {
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v10 = game_map_MapRandom_instance__ptr[0];
        v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v13 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v10 + 1) = v11;
        v14 = (v13 >> 8) ^ (v12 >> 19) ^ v13 ^ v12;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10) = v12;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10 + 4) = v14;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        HIDWORD(v37) =
            (16 * ((_WORD)v14 -
                   1000 * (unsigned __int16)((v14 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
    v15 = UnitUtil_1212be0((__int64)&v37, 0);
    v16 = *v2;
    v17 = v15;
    v35_.v35[0] = 0;
    v35_.v35[1] = v16;
    GameSituation_906320(game_GameModeData_instance_ + 136, v35_.v35);
    if (v17 >= *(unsigned __int16*)(v35_.v36 + 96)) {
      *(_BYTE*)(a1 + 168) = 1;
    }
  }
  v18 = game_menu_ScoutBaseProc_ShowItemDialog(v2, a1, *(_BYTE*)(a1 + 168));
  v19 = *(_QWORD*)(a1 + 152);
  v20 = v18;
  v35_.v35[0] = 0;
  v35_.v35[1] = v19;
  GameSituation_906320(game_GameModeData_instance_ + 136, v35_.v35);
  v21 = *(_QWORD*)(v35_.v36 + 88);
  v22 = *(_QWORD*)(a1 + 152);
  v35_.v35[0] = 0;
  v35_.v35[1] = v22;
  GameSituation_906320(game_GameModeData_instance_ + 136, v35_.v35);
  v37 = 0;
  v24 = *(_QWORD*)(v35_.v36 + 88);
  if (v24 != 0) {
    v25 = *(unsigned __int16*)(v24 + 16);
    HIDWORD(v37) = 1;
    v26 = *v4;
    LOWORD(v37) = v25;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v26 + 64) + 8 * v25) + 73LL) == 17) {
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v27 = game_map_MapRandom_instance__ptr[0];
      v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v30 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v27 + 1) = v28;
      v31 = (v30 >> 8) ^ (v29 >> 19) ^ v30 ^ v29;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27) = v29;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27 + 4) = v31;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      HIDWORD(v37) =
          (16 * ((_WORD)v31 -
                 1000 * (unsigned __int16)((v31 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  v32 = UnitUtil_1212be0((__int64)&v37, 0);
  v33 = *v2;
  v34 = v32;
  v35_.v35[0] = 0;
  v35_.v35[1] = v33;
  GameSituation_906320(game_GameModeData_instance_ + 136, v35_.v35);
  game_menu_1a06840(v20 + 1496, v21, v34, *(unsigned __int16*)(v35_.v36 + 96));
}

void game_menu_anonymous_fe0d20(__int64 a1)
{
  __int64* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  bool v12;
  int v13;
  __int64* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  _BYTE* v26;
  char v27;
  __int64 v28;
  __int64 v29[10];

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = (__int64*)fw_memory_g_heap_manager_ptr;
    v3 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v3, "MID_LGV_Scout_Negotiation_SP_No_Tia_m02");
    if (GameData_21ec7b8 == 0) {
      v4 = fw_memory_HeapManager_Allocate(*v2, 1376, 16, 0);
      GameRoutine_1130770(v4, v3, nullptr);
      v5 = *(_QWORD*)(a1 + 40);
      if (v5 != 0) {
        *(_QWORD*)(v5 + 48) = v4;
        *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v4;
      *(_QWORD*)(v4 + 24) = "talk::Seq";
      *(_QWORD*)(v4 + 32) = a1;
      *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32("talk::Seq");
      *(_QWORD*)(v4 + 64) = 0;
      *(_QWORD*)(v4 + 72) = 24;
      *(_QWORD*)(v4 + 80) = 1;
      *(_QWORD*)(v4 + 8) = &GameData_216de68;
      *(_QWORD*)(v4 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
          (*(_WORD*)(v4 + 136) & 0x100) == 0) {
        *(_WORD*)(v4 + 136) |= 0x100u;
      }
      v6 = *(_BYTE**)(v4 + 32);
      v7 = v6[138];
      if (v7 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
        v7 = v6[138];
      }
      v6[138] = v7 + 1;
      *(_WORD*)(v4 + 136) |= 2u;
    }
    v8 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v8, (__int64)v3);
    GameData_222e468 = 2;
    return;
  }
  v9 = *(_QWORD*)(a1 + 152);
  v29[0] = 0;
  v29[1] = v9;
  GameSituation_906320(game_GameModeData_instance_ + 136, v29);
  v10 = *(unsigned __int16*)(v29[8] + 96);
  if (*(_BYTE*)(a1 + 172) == 1) {
    *(_BYTE*)(a1 + 172) = 0;
    GameData_2262914 = 0;
  }
  if (game_GameModeData_instance_ != 0) {
    v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    v12 = __OFSUB__(v11, v10);
    v13 = v11 - v10;
    if (v13 < 0 == v12) {
      if ((unsigned int)v13 >= 0x98967F) {
        v13 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v13;
    LABEL_40:
      v22 = (__int64*)fw_memory_g_heap_manager_ptr;
      v23 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
      strcpy(v23, "MID_LGV_Scout_Negotiation_SP_Reason_Tia_m02");
      if (GameData_21ec7b8 == 0) {
        v24 = fw_memory_HeapManager_Allocate(*v22, 1376, 16, 0);
        GameRoutine_1130770(v24, v23, nullptr);
        v25 = *(_QWORD*)(a1 + 40);
        if (v25 != 0) {
          *(_QWORD*)(v25 + 48) = v24;
          *(_QWORD*)(v24 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v24;
        *(_QWORD*)(v24 + 24) = "talk::Seq";
        *(_QWORD*)(v24 + 32) = a1;
        *(_DWORD*)(v24 + 140) = (unsigned int)game_HashString32("talk::Seq");
        *(_QWORD*)(v24 + 64) = 0;
        *(_QWORD*)(v24 + 72) = 24;
        *(_QWORD*)(v24 + 80) = 1;
        *(_QWORD*)(v24 + 8) = &GameData_216de68;
        *(_QWORD*)(v24 + 16) = &GameData_216de68;
        (*(void (**)(__int64))(*(_QWORD*)v24 + 32LL))(v24);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 136LL))(v24) & 1) != 0 &&
            (*(_WORD*)(v24 + 136) & 0x100) == 0) {
          *(_WORD*)(v24 + 136) |= 0x100u;
        }
        v26 = *(_BYTE**)(v24 + 32);
        v27 = v26[138];
        if (v27 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v26 + 64LL))(*(_QWORD*)(v24 + 32));
          v27 = v26[138];
        }
        v26[138] = v27 + 1;
        *(_WORD*)(v24 + 136) |= 2u;
      }
      v28 = 128;
      if (*(_QWORD*)(*v22 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v22 + v28, (__int64)v23);
      v21 = *(_QWORD*)(a1 + 8);
      if (v21 != 0) {
        while (1) {
          if (*(_BYTE*)v21 == 2) {
            if (*(_DWORD*)(v21 + 32) == 2) {
              goto LABEL_58;
            }
          }
          else if (*(_BYTE*)v21 == 0) {
            return;
          }
          v21 += 64;
        }
      }
      return;
    }
  }
  else if (v10 == 0) {
    goto LABEL_40;
  }
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  v15 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v15, "MID_LGV_Scout_Negotiation_SP_NoMoney_Tia_m01");
  if (GameData_21ec7b8 == 0) {
    v16 = fw_memory_HeapManager_Allocate(*v14, 1376, 16, 0);
    GameRoutine_1130770(v16, v15, nullptr);
    v17 = *(_QWORD*)(a1 + 40);
    if (v17 != 0) {
      *(_QWORD*)(v17 + 48) = v16;
      *(_QWORD*)(v16 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v16;
    *(_QWORD*)(v16 + 24) = "talk::Seq";
    *(_QWORD*)(v16 + 32) = a1;
    *(_DWORD*)(v16 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v16 + 64) = 0;
    *(_QWORD*)(v16 + 72) = 24;
    *(_QWORD*)(v16 + 80) = 1;
    *(_QWORD*)(v16 + 8) = &GameData_216de68;
    *(_QWORD*)(v16 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v16 + 136LL))(v16) & 1) != 0 &&
        (*(_WORD*)(v16 + 136) & 0x100) == 0) {
      *(_WORD*)(v16 + 136) |= 0x100u;
    }
    v18 = *(_BYTE**)(v16 + 32);
    v19 = v18[138];
    if (v19 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v18 + 64LL))(*(_QWORD*)(v16 + 32));
      v19 = v18[138];
    }
    v18[138] = v19 + 1;
    *(_WORD*)(v16 + 136) |= 2u;
  }
  v20 = 128;
  if (*(_QWORD*)(*v14 + 200) == 0) {
    v20 = 56;
  }
  nn_mem_StandardAllocator_Free(*v14 + v20, (__int64)v15);
  v21 = *(_QWORD*)(a1 + 8);
  if (v21 != 0) {
    while (1) {
      if (*(_BYTE*)v21 == 2) {
        if (*(_DWORD*)(v21 + 32) == 3) {
        LABEL_58:
          *(_QWORD*)(a1 + 16) = v21;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v21 == 0) {
        return;
      }
      v21 += 64;
    }
  }
}

#pragma GCC visibility pop
