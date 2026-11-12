#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_9bd480(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
extern __int64 (*GameData_20fba30[])();
extern __int64 (*GameData_20fbab0[])();
extern __int64 (*GameData_20fbb30[])();
extern __int64 (*GameData_20fbbb0[])();
extern __int64 (*GameData_20fbc30[])();
extern __int64 (*GameData_20fbcb0[])();
extern __int64 game_GameModeData_instance_;
__int64 AcceptMenuItem_Yes_Unknown25(__int64 a1);
bool AcceptMenuItem_Yes_Unknown58(__int64 a1);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_187d070(__int64, __int64);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_717fc0(_QWORD, _QWORD);
__int64 GameRoutine_8679c0(_QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 MapSortieMenu_871860(_QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ad0ee4;
extern _UNKNOWN GameData_1aebe59;
extern _UNKNOWN* GameData_2130b28;
extern __int64 (*GameData_20fbd20[])();
extern __int64 (*GameData_20fbda0[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130b40[2];
__int64
game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure_Invoke(__int64 a1,
                                                            __int64* a2);
__int64
game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure0_Invoke(__int64 a1,
                                                             __int64* a2);
__int64
game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure1_Invoke(__int64 a1,
                                                             __int64* a2);
__int64
game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure2_Invoke(__int64 a1,
                                                             __int64* a2);
__int64
game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure3_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 game_menu_anonymous_AcceptMenuItem_Yes_ACall(__int64 result,
                                                     __int64* a2);
__int64
game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure4_Invoke(__int64 a1);
__int64* game_821090(int);
__int64 MapSortieMenu_871860_alt1(__int64, __int64, __int64, __int64,
                                  __int64) __asm__("MapSortieMenu_871860");
__int64 ProcList_9bd480(__int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64
game_ProcList_Call_9bcfa0_alt1(__int64,
                               __int64) __asm__("game_ProcList_Call_9bcfa0");

__int64 AcceptMenuItem_Yes_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  __int64 v6;
  int v8;
  __int64 (**v10)();
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;

  if (*(_BYTE*)(*(_QWORD*)(a1 + 88) + 9LL) == 1) {
    v1 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(v1 + 152) != 0) {
      v1 = *(_QWORD*)(v1 + 152);
    }
    v3 = ProcList_9bd480(*(_QWORD*)(v1 + 32));
    if (v3 != 0) {
      v4 = *(_BYTE**)(a1 + 88);
      v5 = v3;
      v17_.v18 = v17_.v17;
      v17_.v17[0] = GameData_20fba30;
      v17_.v17[1] = v4;
      game_ProcList_Call_9bcfa0_alt1(v3, (__int64)v17_.v17);
      if (v17_.v18 == v17_.v17) {
        v6 = 32;
      }
      else {
        if (v17_.v18 == nullptr) {
          goto LABEL_11;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*v17_.v18 + v6))((__int64)v17_.v18);
    LABEL_11:
      if (v4[9] == 1) {
        v8 = *(unsigned __int8*)(*(_QWORD*)v4 + 113LL);
        if (v8 != 1 && v8 != 5 &&
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)v4 + 112LL) - 5 >= 3) {
          v17_.v17[0] = GameData_20fbab0;
          v17_.v18 = v17_.v17;
          game_ProcList_Call_9bcfa0_alt1(v5, (__int64)v17_.v17);
          if (v17_.v18 == v17_.v17) {
            v13 = 32;
          }
          else {
            if (v17_.v18 == nullptr) {
            LABEL_35:
              v14 = game_821090(37);
              if (game_GameModeData_instance_ != 0) {
                v15 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v14);
                if (v15 != 0 && *(int*)(v15 + 32) > 0) {
                  goto LABEL_23;
                }
              }
              v17_.v17[0] = GameData_20fbb30;
              v17_.v18 = v17_.v17;
              game_ProcList_Call_9bcfa0_alt1(v5, (__int64)v17_.v17);
              if (v17_.v18 == v17_.v17) {
                v16 = 32;
              }
              else {
                if (v17_.v18 == nullptr) {
                LABEL_43:
                  v10 = GameData_20fbbb0;
                  goto LABEL_18;
                }
                v16 = 40;
              }
              (*(void (**)(__int64))(*v17_.v18 + v16))((__int64)v17_.v18);
              goto LABEL_43;
            }
            v13 = 40;
          }
          (*(void (**)(__int64))(*v17_.v18 + v13))((__int64)v17_.v18);
          goto LABEL_35;
        }
      }
      v10 = GameData_20fbc30;
    LABEL_18:
      v17_.v17[0] = v10;
      v17_.v18 = v17_.v17;
      game_ProcList_Call_9bcfa0_alt1(v5, (__int64)v17_.v17);
      if (v17_.v18 == v17_.v17) {
        v11 = 32;
      }
      else {
        if (v17_.v18 == nullptr) {
          goto LABEL_23;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v17_.v18 + v11))((__int64)v17_.v18);
    LABEL_23:
      v17_.v17[0] = GameData_20fbcb0;
      v17_.v17[1] = v4;
      v17_.v18 = v17_.v17;
      game_ProcList_Call_9bcfa0_alt1(v5, (__int64)v17_.v17);
      if (v17_.v18 == v17_.v17) {
        v12 = 32;
        goto LABEL_27;
      }
      if (v17_.v18 != nullptr) {
        v12 = 40;
      LABEL_27:
        (*(void (**)(__int64))(*v17_.v18 + v12))((__int64)v17_.v18);
      }
      return 2;
    }
  }
  return 1;
}

bool AcceptMenuItem_Yes_Unknown58(__int64 a1)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 88) + 9LL) == 1;
}

__int64 game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure_Invoke(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 8, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *v6 = v2;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)v5 = v7 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  v8 = game_ProcInst_Register(v5);
  v9 = GameData_2130b40[0];
  *(_QWORD*)(v5 + 152) = v6;
  *(_QWORD*)(v5 + 160) = v6 + 1;
  *(_QWORD*)(v5 + 168) = v6 + 1;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)v5 = v9 + 2;
  *(_BYTE*)(v5 + 200) = 1;
  GameRoutine_8679c0(v8);
  return ProcInst_657850(v5, GameData_2130b28, "ProcAccept", 1, v3);
}

__int64

game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure0_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  char v4;

  v2 = *a2;
  GameRoutine_887920(&v4, &GameData_1aebe59);
  return GameRoutine_162aea0(v2, &v4);
}

__int64

game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure1_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  const char* v8;

  v2 = *a2;
  v8 = "LGV_XXX_Notice_Unlock_Quest_001";
  v6 = *(_QWORD*)(GameRoutine_821090(37) + 8);
  v5 = game_HashString(v6);
  result = GameRoutine_717fc0(&v5, 1);
  if ((result & 1) != 0) {
    result = game_menu_Dialog__CreateBind_game_menu_Dialog(v2, &v8);
    if (result != 0) {
      v7 = nullptr;
      GameRoutine_6680e0(&v5, result + 1248);
      result = (__int64)v7;
      if (v7 == &v5) {
        v4 = 32;
      }
      else {
        if (v7 == nullptr) {
          return result;
        }
        v4 = 40;
      }
      return (*(__int64 (**)(void*))(*v7 + v4))(v7);
    }
  }
  return result;
}

__int64

game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure2_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  char v4;

  v2 = *a2;
  GameRoutine_887920(&v4, &GameData_1ad0ee4);
  return GameRoutine_162aea0(v2, &v4);
}

__int64

game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure3_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  char v4;

  v2 = *a2;
  GameRoutine_887920(&v4, &GameData_1aebe59);
  return GameRoutine_162aea0(v2, &v4);
}

__int64 game_menu_anonymous_AcceptMenuItem_Yes_ACall(__int64 result,
                                                     __int64* a2)
{
  _BYTE* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  const char* v17;

  v4 = *(_BYTE**)(result + 8);
  if (v4[9] != 3 || (*(_BYTE*)(*(_QWORD*)v4 + 161LL) & 0x40) != 0) {
    return result;
  }
  v5 = *a2;
  v13_.v13[2] = v4;
  v17 = "MID_QuestMenu_AcceptReport_Confirm";
  v11_.v11[0] = GameData_20fbda0;
  v9_.v9[0] = GameData_20fbda0;
  v9_.v10 = v9_.v9;
  v13_.v13[0] = GameData_20fbd20;
  v13_.v13[1] = v5;
  v13_.v14 = v13_.v13;
  v11_.v12 = v11_.v11;
  MapSortieMenu_871860_alt1(v5, (__int64)&v17, (__int64)v13_.v13,
                            (__int64)v11_.v11, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v6 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_8;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v6))((__int64)v9_.v10);
LABEL_8:
  if (v11_.v12 == v11_.v11) {
    v7 = 32;
    goto LABEL_12;
  }
  if (v11_.v12 != nullptr) {
    v7 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v11_.v12 + v7))((__int64)v11_.v12);
  }
  result = (__int64)v13_.v14;
  if (v13_.v14 == v13_.v13) {
    v8 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v13_.v14 + v8))((__int64)v13_.v14);
}

__int64 game_menu_anonymous_AcceptMenuItem_Yes_ACall_closure4_Invoke(__int64 a1)
{
  GameRoutine_187d070(*(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16));
  return 2;
}

#pragma GCC visibility pop
