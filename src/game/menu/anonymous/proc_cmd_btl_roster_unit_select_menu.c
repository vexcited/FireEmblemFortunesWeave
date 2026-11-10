#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_975940(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*game_menu_anonymous_CmdBtlRosterUnitGridMenuItem_vtable[])();
extern __int64 GameData_2131bb8[5];
extern __int64 GameData_21ca000;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern int GameData_21d9744;
__int64 ProcCmdBtlRosterUnitSelectMenu_Unknown128(__int64 a1);

__int64 ProcCmdBtlRosterUnitSelectMenu_Unknown128(__int64 a1)
{
  __int64* v1;
  int v2;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  bool v21;
  bool v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  int v30;
  __int64 v31;

  v1 = &GameData_21ca000;
  v2 = 241;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v2 = 177;
    }
    else {
      v2 = 241;
    }
  }
  LODWORD(v31) = v2;
  result = game_UnitPool_GetFirst(&v31);
  v5 = 241;
  v6 = result;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v5 = 177;
    }
    else {
      v5 = 241;
    }
  }
  if (result != 0) {
    v7 = *(_QWORD*)(result + 432);
    if (v7 == 0) {
      v7 = *(_QWORD*)(result + 440);
      if (v7 != 0) {
        v8 = *(unsigned __int8*)(v7 + 16);
        if (v8 <= 8) {
          while (1) {
            v28 = v8 + 1;
            if (((v5 >> v8) & 2) != 0) {
              v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v8 + 1) + 556000);
              if (v7 != 0) {
                break;
              }
            }
            v8 = v28;
            if (v28 == 9) {
              goto LABEL_13;
            }
          }
        }
        else {
        LABEL_13:
          v7 = 0;
        }
      }
    }
    v29 = GameData_2131bb8[0] + 16;
    while (1) {
    LABEL_16:
      v9 = v7;
      v10 = *(_QWORD*)(v6 + 392);
      if (v10 != 0) {
        result = *(_QWORD*)(v10 + 288);
        if (result != 0) {
          result = GameRoutine_975940(result);
          if (result != 0) {
            v11 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
            v12 = *(_QWORD*)(a1 + 1392);
            v13 = *(_QWORD*)(a1 + 1400);
            v14 = v11;
            if (v12 == v13) {
              v20 = false;
            }
            else {
              v15 = a1;
              v16 = v1;
              v17 = v12 + 8;
              do {
                v18 = *(_QWORD*)(v17 - 8);
                v30 = 16;
                v31 = v18;
                v19 = game_UnitPool_Find_6ead60(&v31, &v30);
                v20 = v6 == v19;
                v21 = v6 == v19 || v17 == v13;
                v17 += 8;
              } while (!v21);
              v1 = v16;
              a1 = v15;
            }
            *(_WORD*)(v14 + 16) = 0;
            *(_DWORD*)(v14 + 40) = 0;
            *(_QWORD*)(v14 + 48) = 0;
            *(_QWORD*)(v14 + 56) = 0;
            *(_QWORD*)(v14 + 64) = 0;
            *(_QWORD*)(v14 + 72) = 0;
            *(_QWORD*)(v14 + 88) = v6;
            *(_WORD*)(v14 + 80) = 257;
            *(_BYTE*)(v14 + 82) = 1;
            *(_QWORD*)v14 = v29;
            *(_QWORD*)(v14 + 8) = 0;
            LODWORD(v31) = GameData_21d9744 & 0xFFF;
            v22 = false;
            if ((game_HasSkill(v6 + 1744, &v31) & 1) == 0) {
              if (*(_WORD*)(v6 + 492) != 0 || *(_BYTE*)(v6 + 496) != 0 ||
                  (LODWORD(v31) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                                             game_g_shared_system_skills_ptr) &
                                  0xFFF,
                   (game_HasSkill(v6 + 1744, &v31) & 1) == 0)) {
                v22 = true;
              }
            }
            *(_BYTE*)(v14 + 82) = v22;
            *(_BYTE*)(v14 + 96) = v20;
            *(_QWORD*)v14 =
                game_menu_anonymous_CmdBtlRosterUnitGridMenuItem_vtable;
            result = BasicMenuCursor_16e0c00(a1, v14);
          }
        }
      }
      v23 = v1[342];
      if (v23 != 0) {
        if (*(_DWORD*)(v23 + 60) == 3) {
          v24 = 177;
        }
        else {
          v24 = 241;
        }
        if (v9 == 0) {
          return result;
        }
      }
      else {
        v24 = 241;
        if (v9 == 0) {
          return result;
        }
      }
      v7 = *(_QWORD*)(v9 + 432);
      v6 = v9;
      if (v7 == 0) {
        v25 = *(_QWORD*)(v9 + 440);
        v6 = v9;
        if (v25 != 0) {
          v26 = *(unsigned __int8*)(v25 + 16);
          v7 = 0;
          v6 = v9;
          if (v26 <= 8) {
            while (1) {
              v27 = v26 + 1;
              if (((v24 >> v26) & 2) != 0) {
                v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v26 + 1) + 556000);
                if (v7 != 0) {
                  break;
                }
              }
              ++v26;
              if (v27 == 9) {
                v7 = 0;
                v6 = v9;
                goto LABEL_16;
              }
            }
            v6 = v9;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
