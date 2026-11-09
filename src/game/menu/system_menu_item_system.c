#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern __int64 (*game_menu_anonymous_SystemMenuItem_Config_vtable[])();
extern __int64 (*game_menu_anonymous_SystemMenuItem_ExitTitle_vtable[])();
extern __int64 (*game_menu_anonymous_SystemMenuItem_MouseGuide_vtable[])();

extern __int64 (
    *game_menu_anonymous_SystemMenuItem_RestartBeforeBattle_vtable[])();
extern __int64 (*game_menu_anonymous_SystemMenuItem_Restart_vtable[])();
extern __int64 GameData_1ad2a61;
extern __int64 GameData_20ecfd8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_script_map_effect_g_sequence;
extern __int64* GameData_212e030[4];
__int64 SystemMenuItem_System_Unknown25(__int64 a1);

__int64 SystemMenuItem_System_Unknown25(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  int v15;
  int v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];

  v1 = *(unsigned __int8*)(a1 + 82);
  result = 1;
  if (v1 != 1) {
    return result;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v27 = a1;
  LODWORD(v28[0]) = 1;
  v5 = *(_QWORD*)(v4 + 152);
  *(_QWORD*)((char*)v28 + 4) = 0;
  if (v5 != 0) {
    v4 = v5;
  }
  v6 = GameRoutine_16eb960(v4, &v27);
  v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      160, 16, 0);
  v9 = *(_BYTE*)(a1 + 83);
  *(_WORD*)(v8 + 16) = 0;
  *(_DWORD*)(v8 + 40) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 0;
  *(_BYTE*)(v8 + 82) = 1;
  *(_QWORD*)(v8 + 128) = 0;
  *(_WORD*)(v8 + 80) = 257;
  *(_QWORD*)v8 = game_menu_anonymous_SystemMenuItem_Config_vtable;
  *(_QWORD*)(v8 + 8) = 0;
  *(_BYTE*)(v8 + 144) = v9;
  GameRoutine_16e0c00(v6, v8);
  v10 = fw_memory_HeapManager_Allocate(*v7, 144, 16, 0);
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 80) = 0;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 17) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 257;
  *(_BYTE*)(v10 + 82) = 1;
  *(_QWORD*)v10 = game_menu_anonymous_SystemMenuItem_MouseGuide_vtable;
  *(_QWORD*)(v10 + 8) = 0;
  GameRoutine_16e0c00(v6, v10);
  v11 = fw_memory_HeapManager_Allocate(*v7, 160, 16, 0);
  *(_BYTE*)(v11 + 80) = 1;
  *(_BYTE*)(v11 + 82) = 1;
  v12 = v11;
  *(_WORD*)(v11 + 16) = 0;
  *(_DWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_QWORD*)(v11 + 128) = 0;
  *(_BYTE*)(v11 + 144) = 0;
  *(_QWORD*)v11 = game_menu_anonymous_SystemMenuItem_Restart_vtable;
  *(_QWORD*)(v11 + 8) = 0;
  v28[0] = &GameData_1ad2a61;
  v27 = game_HashString(&GameData_1ad2a61);
  if (game_GameModeData_instance_ == 0 ||
      (v13 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v27)) == 0 ||
      *(_DWORD*)(v13 + 32) == 0) {
    v14 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_21;
    }
    v15 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    switch (v15) {
    case 3:
      v17 = *(_DWORD*)(game_GameModeData_instance_ + 64) <= 1;
      goto LABEL_15;
    case 2:
    LABEL_20:
      v14 = 1;
      goto LABEL_21;
    case 1:
      v16 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      if ((unsigned int)(v16 - 2) < 3) {
        v17 = *(_DWORD*)(game_GameModeData_instance_ + 64) <= 3;
        goto LABEL_15;
      }
      if (v16 != 1) {
        goto LABEL_20;
      }
      v17 = *(_DWORD*)(game_GameModeData_instance_ + 64) <= 2;
    LABEL_15:
      v14 = !v17;
    LABEL_21:
      *(_BYTE*)(v12 + 81) = v14;
      GameRoutine_16e0c00(v6, v12);
      v18 = fw_memory_HeapManager_Allocate(*v7, 144, 16, 0);
      v19 = *(_QWORD*)(a1 + 8);
      v21 = v19 != 0 &&
            (v20 = __dynamic_cast(v19, GameData_212e030[0], &GameData_20ecfd8,
                                  0)) != 0 &&
            (*(_DWORD*)(v20 + 1068) & 0xFFFFFFFE) == 4;
      *(_WORD*)(v18 + 16) = 0;
      *(_DWORD*)(v18 + 40) = 0;
      *(_QWORD*)(v18 + 48) = 0;
      *(_QWORD*)(v18 + 56) = 0;
      *(_QWORD*)(v18 + 64) = 0;
      *(_QWORD*)(v18 + 72) = 0;
      *(_QWORD*)(v18 + 128) = 0;
      *(_BYTE*)(v18 + 80) = 1;
      *(_BYTE*)(v18 + 82) = 1;
      *(_QWORD*)v18 =
          game_menu_anonymous_SystemMenuItem_RestartBeforeBattle_vtable;
      *(_QWORD*)(v18 + 8) = 0;
      if (v21 == 0) {
        goto LABEL_38;
      }
      v21 = *(_DWORD*)(game_GameRestartData_unknown_ + 1756);
      if (v21 == 0) {
        goto LABEL_38;
      }
      if (game_gmap_GmapClock_instance_ != 0 &&
          *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                  *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                  *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
              0) {
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_36;
        }
        if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
            game_script_map_effect_g_sequence == 0) {
          if (game_script_map_effect_g_sequence != 0) {
            goto LABEL_35;
          }
        LABEL_36:
          LOBYTE(v21) = 0;
          goto LABEL_38;
        }
        if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
        LABEL_35:
          if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x40) == 0) {
            goto LABEL_36;
          }
        }
      }
      LOBYTE(v21) = 1;
    LABEL_38:
      *(_BYTE*)(v18 + 81) = v21;
      GameRoutine_16e0c00(v6, v18);
      v22 = fw_memory_HeapManager_Allocate(*v7, 160, 16, 0);
      v23 = *(_QWORD*)(a1 + 8);
      v25 = v23 != 0 &&
            (v24 = __dynamic_cast(v23, GameData_212e030[0], &GameData_20ecfd8,
                                  0)) != 0 &&
            *(_DWORD*)(v24 + 1068) == 4;
      *(_WORD*)(v22 + 16) = 0;
      *(_DWORD*)(v22 + 40) = 0;
      *(_QWORD*)(v22 + 48) = 0;
      *(_QWORD*)(v22 + 56) = 0;
      *(_QWORD*)(v22 + 64) = 0;
      *(_QWORD*)(v22 + 72) = 0;
      *(_QWORD*)(v22 + 128) = 0;
      *(_QWORD*)v22 = game_menu_anonymous_SystemMenuItem_Restart_vtable;
      *(_QWORD*)(v22 + 8) = 0;
      *(_BYTE*)(v22 + 81) = v25;
      *(_BYTE*)(v22 + 80) = 1;
      *(_BYTE*)(v22 + 82) = 1;
      *(_BYTE*)(v22 + 144) = 1;
      GameRoutine_16e0c00(v6, v22);
      v26 = fw_memory_HeapManager_Allocate(*v7, 144, 16, 0);
      *(_QWORD*)(v26 + 80) = 0;
      *(_QWORD*)(v26 + 88) = 0;
      *(_QWORD*)(v26 + 16) = 0;
      *(_QWORD*)(v26 + 24) = 0;
      *(_QWORD*)(v26 + 32) = 0;
      *(_QWORD*)(v26 + 40) = 0;
      *(_QWORD*)(v26 + 96) = 0;
      *(_QWORD*)(v26 + 104) = 0;
      *(_QWORD*)(v26 + 112) = 0;
      *(_QWORD*)(v26 + 120) = 0;
      *(_QWORD*)(v26 + 128) = 0;
      *(_QWORD*)(v26 + 136) = 0;
      *(_BYTE*)(v26 + 17) = 0;
      *(_QWORD*)(v26 + 48) = 0;
      *(_QWORD*)(v26 + 56) = 0;
      *(_QWORD*)(v26 + 64) = 0;
      *(_QWORD*)(v26 + 72) = 0;
      *(_BYTE*)(v26 + 82) = 1;
      *(_WORD*)(v26 + 80) = 257;
      *(_QWORD*)v26 = game_menu_anonymous_SystemMenuItem_ExitTitle_vtable;
      *(_QWORD*)(v26 + 8) = 0;
      GameRoutine_16e0c00(v6, v26);
      return 10;
    default:
      break;
    }
  }
  v14 = 0;
  goto LABEL_21;
}

#pragma GCC visibility pop
