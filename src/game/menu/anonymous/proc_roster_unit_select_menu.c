#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_975940(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitPool_GetFirst(int*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*game_menu_anonymous_RosterUnitGridMenuItem_vtable[])();
extern __int64 GameData_2131bb8[5];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 ProcRosterUnitSelectMenu_Unknown128(_QWORD* a1);

__int64 ProcRosterUnitSelectMenu_Unknown128(_QWORD* a1)
{
  int v1;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;

  v1 = 241;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v1 = 177;
    }
    else {
      v1 = 241;
    }
  }
  v19 = v1;
  result = game_UnitPool_GetFirst(&v19);
  v4 = 241;
  v5 = result;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v4 = 177;
    }
    else {
      v4 = 241;
    }
  }
  if (result != 0) {
    v6 = *(_QWORD*)(result + 432);
    if (v6 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 != 0) {
        v7 = *(unsigned __int8*)(v6 + 16);
        if (v7 < 9) {
          while (1) {
            v18 = v7 + 1;
            if (((v4 >> v7) & 2) != 0) {
              v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v7 + 1) + 556000);
              if (v6 != 0) {
                break;
              }
            }
            v7 = v18;
            if (v18 == 9) {
              goto LABEL_13;
            }
          }
        }
        else {
        LABEL_13:
          v6 = 0;
        }
      }
    }
    v8 = GameData_2131bb8[0] + 16;
    while (1) {
    LABEL_16:
      v9 = v6;
      v10 = *(_QWORD*)(v5 + 392);
      if (v10 != 0) {
        result = *(_QWORD*)(v10 + 288);
        if (result != 0) {
          result = GameRoutine_975940(result);
          if (result != 0) {
            v11 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
            *(_WORD*)(v11 + 16) = 0;
            *(_DWORD*)(v11 + 40) = 0;
            v12 = v11;
            *(_QWORD*)(v11 + 48) = 0;
            *(_QWORD*)(v11 + 56) = 0;
            *(_QWORD*)(v11 + 64) = 0;
            *(_QWORD*)(v11 + 72) = 0;
            *(_QWORD*)(v11 + 88) = v5;
            *(_QWORD*)v11 = v8;
            *(_QWORD*)(v11 + 8) = 0;
            *(_WORD*)(v11 + 80) = 257;
            *(_BYTE*)(v11 + 82) = 1;
            v20 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                             game_g_shared_system_skills_ptr) &
                  0xFFF;
            v13 = false;
            if ((game_HasSkill((_QWORD*)(v5 + 1744), (unsigned int*)&v20) &
                 1) == 0) {
              if (*(_WORD*)(v5 + 492) != 0 || *(_BYTE*)(v5 + 496) != 0 ||
                  (v21 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF,
                   (game_HasSkill((_QWORD*)(v5 + 1744), (unsigned int*)&v21) &
                    1) == 0)) {
                v13 = true;
              }
            }
            *(_BYTE*)(v12 + 82) = v13;
            *(_QWORD*)v12 = game_menu_anonymous_RosterUnitGridMenuItem_vtable;
            result = (__int64)BasicMenuCursor_16e0c00(a1, v12);
          }
        }
      }
      if (game_GameModeData_instance_ != 0) {
        if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          v14 = 177;
        }
        else {
          v14 = 241;
        }
        if (v9 == 0) {
          return result;
        }
      }
      else {
        v14 = 241;
        if (v9 == 0) {
          return result;
        }
      }
      v6 = *(_QWORD*)(v9 + 432);
      v5 = v9;
      if (v6 == 0) {
        v15 = *(_QWORD*)(v9 + 440);
        v5 = v9;
        if (v15 != 0) {
          v16 = *(unsigned __int8*)(v15 + 16);
          v6 = 0;
          v5 = v9;
          if (v16 <= 8) {
            while (1) {
              v17 = v16 + 1;
              if (((v14 >> v16) & 2) != 0) {
                v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v16 + 1) + 556000);
                if (v6 != 0) {
                  break;
                }
              }
              ++v16;
              if (v17 == 9) {
                v6 = 0;
                v5 = v9;
                goto LABEL_16;
              }
            }
            v5 = v9;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
