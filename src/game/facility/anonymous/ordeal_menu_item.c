#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_120e900(void);
__int64 GameRoutine_17ab020(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9608;
extern __int64 GameData_2243f70;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char game_facility_g_unknown_2174af0;
extern char game_facility_g_unknown_2259368;
void OrdealMenuItem_Unknown24();
__int64 OrdealMenuItem_Unknown38(_QWORD* a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_120e900();
__int64 game_menu_anonymous_ProcCmdBtlEquipUnitSelectMenu_CreateBind(__int64,
                                                                     int*,
                                                                     __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* game_facility_15e7650(_QWORD* result, int, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_16ef100(_QWORD*, const char*);
__int64 GameRoutine_1735a70(__int64*, __int64, const char*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e348;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
unsigned __int64 GameHr_16ee370(__int64, __int64, const char*);
void GameHr_1585490(__int64*, unsigned __int16*, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void GameRoutine_16ee520(__int64);
void GameRoutine_16ef210(_QWORD*, _QWORD*);
void OrdealMenuItem_Unknown73(__int64 a1);

void OrdealMenuItem_Unknown24()
{
  game_facility_g_unknown_2174af0 = 1;
  game_facility_g_unknown_2259368 = 0;
}

__int64 OrdealMenuItem_Unknown38(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  struct {
    int v11;
    char gap4_[4];
    _QWORD* v12;
    _QWORD* v13;
    _QWORD* v14;
  } v11_;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 0;
  }
  game_facility_g_unknown_2259368 = 1;
  game_facility_g_unknown_2174af0 = 0;
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  if (GameData_2243f70 != 0 && GameData_21c9608 != 0) {
    v4 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v4 & 8) == 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v4 | 8;
      game_120e900();
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v5 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  else {
    v5 = 0;
  }
  v11_.v11 = 5;
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v8 = v5;
  v9 = (__int64)v8;
  v11_.v12 = v8;
  v11_.v13 = v8 + 1;
  v11_.v14 = v8 + 1;
  game_menu_anonymous_ProcCmdBtlEquipUnitSelectMenu_CreateBind(v3, &v11_.v11,
                                                               0);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v10, v9);
  return 9;
}

void OrdealMenuItem_Unknown73(__int64 a1)
{
  __int64 v2;
  const char* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  const char* v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  char* v37;
  const char* v38;
  __int64 v39;
  char* v40;
  int v41;
  int v42;
  __int64* v43;
  __int64 v44[20];
  struct {
    _QWORD v45[2];
    unsigned __int64 v46;
    unsigned __int64 v47;
    unsigned __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
  } v45_;

  if (*(_QWORD*)(a1 + 104) != 0) {
    ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 8) + 848LL,
                                     (__int64)"N_HelpDetail", 1);
    GameHr_1562680(*(_QWORD*)(a1 + 8) + 848LL, "Type_Ordeal",
                   0x1.0000000000000p+0f);
    v2 = ui_LayoutAccessor_FindAlignment((__int64*)(*(_QWORD*)(a1 + 8) + 848LL),
                                         "A_Title");
    if (v2 != 0) {
      Alignment_56b600(v2);
    }
    LayoutAccessor_1562060((char*)(*(_QWORD*)(a1 + 8) + 848LL),
                           (__int64)"T_Txt", **(const char***)(a1 + 104));
    GameRoutine_1735a70((__int64*)(*(_QWORD*)(a1 + 8) + 848LL),
                        (__int64)"T_Clear", "MID_TempleMenu_Trial_Clear");
    if (*(_BYTE*)(a1 + 96) == 4) {
      v3 = "State_Clear";
    }
    else {
      v3 = "State_Default";
    }
    GameHr_1562680(*(_QWORD*)(a1 + 8) + 848LL, v3, 0x1.0000000000000p+0f);
    v4 = *(unsigned __int8*)(*(_QWORD*)(a1 + 104) + 16LL);
    v5 = ui_LayoutAccessor_FindPane((__int64*)(*(_QWORD*)(a1 + 8) + 848LL),
                                    (__int64)"T_RecommendNum");
    if (v5 != 0) {
      v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d690, 0);
      if (v6 != 0) {
        GameRoutine_156c910(v6, "%d", 1, v4);
      }
    }
    v7 = *(_QWORD*)(a1 + 8);
    v8 = game_util_Format("N_Rewards%02d", 0);
    ui_LayoutAccessor_SetPaneVisible(v7 + 848, (__int64)v8, 0);
    v9 = *(_QWORD*)(a1 + 8);
    v10 = game_util_Format("N_Rewards%02d", 1);
    ui_LayoutAccessor_SetPaneVisible(v9 + 848, (__int64)v10, 0);
    v11 = *(_QWORD*)(a1 + 8);
    v12 = game_util_Format("N_Rewards%02d", 2);
    ui_LayoutAccessor_SetPaneVisible(v11 + 848, (__int64)v12, 0);
    v13 = *(_QWORD*)(a1 + 104);
    v14 = *(unsigned __int16*)(v13 + 24);
    if (*(_WORD*)(v13 + 24) != 0) {
      v15 = 0;
      v16 = (__int64*)(*(_QWORD*)(v13 + 32) + 8LL);
      do {
        v17 = *(_QWORD*)(a1 + 8);
        v18 = game_util_Format("N_Rewards%02d", (unsigned int)v15);
        ui_LayoutAccessor_SetPaneVisible(v17 + 848, (__int64)v18, 1);
        v19 = *(_QWORD*)(a1 + 8);
        v20 = game_util_Format("L_Rewards%02d", v15);
        LayoutAccessor_1560070((void*)(&v43), (__int64*)(v19 + 848), v20);
        if (v44[0] != 0) {
          v21 = std___1___shared_weak_count_lock(v44[0]);
          v22 = v43;
          if (v44[0] != 0) {
            std___1___shared_weak_count___release_weak(v44[0]);
          }
          if (v21 != 0 && v22 != nullptr) {
            v23 = *v16;
            v43 = nullptr;
            if (v23 != 0) {
              v24 = *(unsigned __int16*)(v23 + 16);
              HIDWORD(v43) = 1;
              LOWORD(v43) = v24;
              if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8 * v24) +
                            73LL) == 17) {
                nn_os_LockMutex((__int64)&game_g_random_mutex);
                v25 = game_map_MapRandom_instance__ptr[0];
                v26 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((_UNKNOWN**)0x8LL));
                v27 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                v28 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                      (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                    *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                *((_DWORD*)v25 + 1) = v26;
                v29 = (v28 >> 8) ^ (v27 >> 19) ^ v28 ^ v27;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v25) = v27;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v25 + 4) = v29;
                nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                HIDWORD(v43) =
                    HIDWORD(v43) & 0xFFFFC00F |
                    (16 * (((16 * (v29 - 1000 * ((v29 & 0x7FFFFFFFu) / 0x3E8)) +
                             16) >>
                            4) &
                           0x3FF));
              }
            }
            GameHr_1585490(v22, (unsigned __int16*)&v43, 1);
          LABEL_23:
            if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
              std___1___shared_weak_count___release_weak(v21);
            }
            goto LABEL_12;
          }
          if (v21 != 0) {
            goto LABEL_23;
          }
        }
      LABEL_12:
        ++v15;
        v16 += 2;
      } while (v14 != v15);
    }
  }
  v30 = *(_QWORD*)(a1 + 8);
  if (v30 != 0 && (v31 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                        GameData_212dff0[0], 0)) != 0) {
    v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 1112LL))(v31);
  }
  else {
    v32 = v30 + 848;
  }
  GameHr_16ee370((__int64)&v43, v32, &GameData_1a9f09e);
  v33 = *(const char**)(*(_QWORD*)(*(_QWORD*)(a1 + 88) + 112LL) + 32LL);
  v45_.v49 = -1;
  v45_.v50 = -1;
  v45_.v51 = -1;
  v45_.v52 = -1;
  v34 = msg_MessageManager_instance__ptr[0];
  v45_.v53 = -1;
  v45_.v54 = -1;
  v45_.v55 = -1;
  v45_.v56 = -1;
  v45_.v57 = -1;
  v45_.v58 = -1;
  v35 = *msg_MessageManager_instance__ptr[0];
  v45_.v59 = -1;
  v45_.v60 = -1;
  v45_.v46 = 0xFFFF0004FFFF0002LL;
  v45_.v47 = 0xFFFF0006FFFF0005LL;
  v45_.v61 = 8;
  v45_.v48 = 0xFFFF0008FFFF0007LL;
  v36 = GameData_212e348 + 2;
  v45_.v45[0] = GameData_212e348 + 2;
  v45_.v45[1] = 0xFFFF0001FFFF0000LL;
  v37 = GameRoutine_a4dbe0(v35, v33, 0);
  if (v37 != nullptr) {
    v38 = v37;
  }
  else {
    v38 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*v34 + 14704, v38);
  v39 = *v34;
  v45_.v49 = -1;
  v45_.v50 = -1;
  v45_.v51 = -1;
  v45_.v52 = -1;
  v45_.v53 = -1;
  v45_.v54 = -1;
  v45_.v55 = -1;
  v45_.v56 = -1;
  v45_.v57 = -1;
  v45_.v58 = -1;
  v45_.v59 = -1;
  v45_.v60 = -1;
  v45_.v45[0] = v36;
  v45_.v45[1] = 0xFFFF0001FFFF0000LL;
  v45_.v46 = 0xFFFF0004FFFF0002LL;
  v45_.v47 = 0xFFFF0006FFFF0005LL;
  v45_.v61 = 8;
  v45_.v48 = 0xFFFF0008FFFF0007LL;
  v40 = GameRoutine_a4dbe0(v39, "MID_TempleMenu_Trial_Help", 0);
  GameRoutine_60a020((__int64)v44, v40);
  if (*(_BYTE*)(a1 + 96) != 4) {
    v41 = *(_DWORD*)(a1 + 84);
    v45_.v48 = 0;
    game_facility_15e7650(&v43, v41, (__int64)v45_.v45);
    if (*(_BYTE*)(a1 + 96) == 3) {
      GameHr_16ef100(&v43, "MID_Menu_Cause_NotMainTemple");
    }
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0) {
    v42 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
        *(_QWORD*)(a1 + 8));
    BYTE4(v45_.v47) = 0;
    v45_.v48 = 0;
    v45_.v45[0] = &GameData_1a9f09e;
    v45_.v45[1] = "MID_SysMenu_Inventory";
    LOBYTE(v45_.v46) = 1;
    HIDWORD(v45_.v46) = 11;
    LODWORD(v45_.v47) = v42;
    GameRoutine_16ef210(&v43, v45_.v45);
  }
  GameRoutine_16ee520((__int64)&v43);
}

#pragma GCC visibility pop
