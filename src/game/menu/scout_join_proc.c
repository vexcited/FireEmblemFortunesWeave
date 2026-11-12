#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameSubquestData_1259ea0(_QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125c2c0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212c7b0[11];
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ScoutJoinProc_f6ca00_alt1(__int64 a1) __asm__("ScoutJoinProc_f6ca00");
_QWORD* HubTalkNatives_e13380(__int64, unsigned __int8**, _QWORD*, _QWORD*,
                              __int64, __int64, __int64, __int64);
__int64 BasicInfo_15e5fa0(void);
__int64 GameRoutine_120f3d0(__int64 result);
__int64 GameRoutine_120f3d0_alt1(_QWORD) __asm__("GameRoutine_120f3d0");
__int64 GameRoutine_166c870(__int64);
__int64 GameRoutine_177d0e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c47b0(__int64, _BYTE*, char, char);
__int64 GameRoutine_6c47b0_alt1(_QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_6c47b0");
__int64 GameRoutine_7152e0();
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HasSkill_alt1(_QWORD, _QWORD) __asm__("game_HasSkill");
__n128 Unit_6d8180(__int64, __int64, int);
char* GameRoutine_67ed20(_QWORD*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1ff6cb8[])();
extern __int64 (*GameData_1ff6d38[])();
extern __int64 (*GameData_1ff6db8[])();
extern __int64* GameData_2131b20[4];
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
void* game_97b2f0(__int64);
__int64 game_menu_ScoutJoinProc_RunAutoGrowthDialog(__int64 result);
__int64 game_menu_ScoutJoinProc_RunAutoGrowthDialog_closure_Invoke(__int64 a1,
                                                                   __int64* a2);
__int64 game_menu_ScoutJoinProc_RunAutoGrowthDialog_closure0_Invoke(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void GameSubquestData_1259ea0_alt1(__int64, __int64*,
                                   char) __asm__("GameSubquestData_1259ea0");
void GameSubquestData_125c2c0_alt1(__int64, __int64, __int64,
                                   int) __asm__("GameSubquestData_125c2c0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ScoutJoinProc_f6ca00(__int64 a1);

__int64 game_menu_ScoutJoinProc_RunAutoGrowthDialog(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  char v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  const char* v24;
  const char* v25;
  const char* v26;

  LOBYTE(v22_.v22[0]) = 8;
  v1 = *(_QWORD*)(GameData_21ca310 + 56);
  v2 = *(_QWORD*)(v1 + 556216);
  if (v2 != 0) {
    v3 = result;
    GameRoutine_6c47b0(*(_QWORD*)(v1 + 556216), v22_.v22, 1, 0);
    Unit_6d8180(v2, *(_QWORD*)(v3 + 152), 0);
    v4 = *(unsigned __int8*)(v2 + 498);
    result = GameRoutine_7152e0();
    if ((int)result > v4) {
      LOBYTE(v22_.v22[0]) = 8;
      v5 = *(_QWORD*)(GameData_21ca310 + 56);
      v6 = *(_QWORD*)(v5 + 556216);
      if (v6 == 0) {
        return result;
      }
      GameRoutine_6c47b0(*(_QWORD*)(v5 + 556216), v22_.v22, 1, 0);
      v7 = *(_QWORD*)(v3 + 152);
      v8 = GameRoutine_7152e0();
      Unit_6d8180(v6, v7, v8);
      v9 = GameRoutine_166c870(v3);
      *(_QWORD*)(v9 + 224) = v2;
      *(_QWORD*)(v9 + 232) = v6;
      v25 = "MID_RouteSelectMenu_AutoGrow_Yes";
      v26 = "MID_Joyn_AutoGrow_Confirm";
      v24 = "MID_RouteSelectMenu_AutoGrow_Yes_NotGrow";
      if (*(_BYTE*)(v2 + 2136) != 0) {
        v10 = game_97b2f0(v2 + 2104);
      }
      else {
        v10 = GameRoutine_67ed20(*(_QWORD**)(v2 + 392));
      }
      v22_.v22[1] = v6;
      v22_.v22[2] = v2;
      v20_.v20[2] = v2;
      v22_.v23 = v22_.v22;
      v22_.v22[0] = GameData_1ff6cb8;
      v20_.v20[0] = GameData_1ff6d38;
      v20_.v20[1] = v6;
      v20_.v21 = v20_.v20;
      v18_.v19 = v18_.v18;
      v18_.v18[0] = GameData_1ff6db8;
      v13 = HubTalkNatives_e13380(v3, (unsigned __int8**)&v26, &v25, &v24,
                                  (__int64)v10, (__int64)v22_.v22,
                                  (__int64)v20_.v20, (__int64)v18_.v18);
      if (v18_.v19 == v18_.v18) {
        v14 = 32;
      }
      else {
        if (v18_.v19 == nullptr) {
          goto LABEL_19;
        }
        v14 = 40;
      }
      (*(void (**)(__int64))(*v18_.v19 + v14))((__int64)v18_.v19);
    LABEL_19:
      if (v20_.v21 == v20_.v20) {
        v15 = 32;
      }
      else {
        if (v20_.v21 == nullptr) {
          goto LABEL_24;
        }
        v15 = 40;
      }
      (*(void (**)(__int64))(*v20_.v21 + v15))((__int64)v20_.v21);
    LABEL_24:
      result = (__int64)v22_.v23;
      if (v22_.v23 == v22_.v22) {
        v16 = 32;
      }
      else {
        if (v22_.v23 == nullptr) {
          goto LABEL_29;
        }
        v16 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v22_.v23 + v16))((__int64)v22_.v23);
    LABEL_29:
      if (v13 != nullptr) {
        v17 = *((_DWORD*)v13 + 89);
        *((_DWORD*)v13 + 93) = 0;
        *((_DWORD*)v13 + 89) = v17 | 1;
        *(_QWORD*)((char*)v13 + 364) = 0xC35C000000000000LL;
      }
      return result;
    }
    LOBYTE(v20_.v20[0]) = 4;
    v11 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v11 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    if (*(_QWORD*)(v2 + 392) == v11 || (*(_BYTE*)(v2 + 418) & 8) != 0) {
      v12 = 0;
    }
    else {
      LODWORD(v22_.v22[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                        game_g_shared_system_skills_ptr) &
                             0xFFF;
      v12 = game_HasSkill((_QWORD*)(v2 + 1744), (unsigned int*)v22_.v22) ^ 1;
    }
    GameRoutine_6c47b0(v2, v20_.v20, v12 & 1, 0);
    return GameRoutine_120f3d0(v2);
  }
  return result;
}

void ScoutJoinProc_f6ca00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
    __int64 v13;
  } v11_;
  _QWORD v14[3];

  if (*(_QWORD*)(a1 + 152) != 0) {
    v2 = *(_QWORD*)GameData_212c7b0[0];
    if (*(_QWORD*)GameData_212c7b0[0] != 0) {
      v11_.v12 = 0;
      v11_.v13 = 0;
      v11_.v11 = 0;
      GameSubquestData_1259ea0_alt1(v2, &v11_.v11, 1);
      v3 = v11_.v11;
      v4 = v11_.v12;
      if (v11_.v11 != v11_.v12) {
        v5 = (__int64*)fw_memory_g_heap_manager_ptr;
        do {
          v6 = *(_QWORD*)v3;
          if (*(_QWORD*)(**(_QWORD**)v3 + 408LL) == *(_QWORD*)(a1 + 152)) {
            v7 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 8, 16, 0);
            *v7 = v6;
            v8 = (__int64)v7;
            v14[0] = v7;
            v14[1] = v7 + 1;
            v14[2] = v7 + 1;
            GameSubquestData_125c2c0_alt1((__int64)v7, 0, (__int64)v14, 0);
            if (*(_QWORD*)(*v5 + 200) != 0) {
              v9 = 128;
            }
            else {
              v9 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v5 + v9, v8);
          }
          v3 += 8;
        } while (v3 != v4);
        v3 = v11_.v11;
      }
      if (v3 != 0) {
        v11_.v12 = v3;
        v10 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v3);
      }
    }
  }
}

__int64 game_menu_ScoutJoinProc_RunAutoGrowthDialog_closure_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  char v13[4];
  char v14[4];
  int v15;
  int v16;

  v2 = *a2;
  if (*GameData_2131b20[0] != 0) {
    BasicInfo_15e5fa0();
  }
  v4 = *(_QWORD*)(v2 + 8);
  if (*(_QWORD*)(v4 + 152) != 0) {
    v4 = *(_QWORD*)(v4 + 152);
  }
  GameRoutine_177d0e0(*(_QWORD*)(v4 + 32),
                      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 392LL),
                      *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 498LL));
  v5 = *(_QWORD*)(a1 + 16);
  v14[0] = 9;
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v6 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  if (*(_QWORD*)(v5 + 392) != v6 && (*(_BYTE*)(v5 + 418) & 8) == 0) {
    v7 = v5;
    v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    game_HasSkill_alt1(v5 + 1744, &v15);
    v5 = v7;
  }
  GameRoutine_6c47b0_alt1(v5, v14, 1, 0);
  v8 = *(_QWORD*)(a1 + 8);
  v9 = game_GameModeData_instance_;
  v13[0] = 4;
  if (game_GameModeData_instance_ != 0) {
    v9 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  if (*(_QWORD*)(v8 + 392) == v9 || (*(_BYTE*)(v8 + 418) & 8) != 0) {
    v11 = 0;
  }
  else {
    v10 = v8;
    v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    v11 = game_HasSkill_alt1(v8 + 1744, &v16) ^ 1;
    v8 = v10;
  }
  GameRoutine_6c47b0_alt1(v8, v13, v11 & 1, 0);
  GameRoutine_120f3d0_alt1(*(_QWORD*)(a1 + 8));
  return 2;
}

__int64 game_menu_ScoutJoinProc_RunAutoGrowthDialog_closure0_Invoke(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v10[4];
  char v11[4];
  int v12;
  int v13;

  if (*GameData_2131b20[0] != 0) {
    BasicInfo_15e5fa0();
  }
  v2 = *(_QWORD*)(a1 + 8);
  v11[0] = 9;
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  if (*(_QWORD*)(v2 + 392) != v3 && (*(_BYTE*)(v2 + 418) & 8) == 0) {
    v4 = v2;
    v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    game_HasSkill_alt1(v2 + 1744, &v12);
    v2 = v4;
  }
  GameRoutine_6c47b0_alt1(v2, v11, 1, 0);
  v5 = *(_QWORD*)(a1 + 16);
  v6 = game_GameModeData_instance_;
  v10[0] = 4;
  if (game_GameModeData_instance_ != 0) {
    v6 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  if (*(_QWORD*)(v5 + 392) == v6 || (*(_BYTE*)(v5 + 418) & 8) != 0) {
    v8 = 0;
  }
  else {
    v7 = v5;
    v13 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    v8 = game_HasSkill_alt1(v5 + 1744, &v13) ^ 1;
    v5 = v7;
  }
  GameRoutine_6c47b0_alt1(v5, v10, v8 & 1, 0);
  GameRoutine_120f3d0_alt1(*(_QWORD*)(a1 + 16));
  return 2;
}

#pragma GCC visibility pop
