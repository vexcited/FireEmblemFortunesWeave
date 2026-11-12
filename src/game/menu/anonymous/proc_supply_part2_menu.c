#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
_DWORD* ProcSupplyPart2Menu_Unknown139(_DWORD* result, __int64* a2);
__int64 GameRoutine_1308480(void);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
extern __int64 (*GameData_20d3c58[])();
extern __int64 (*GameData_20d3cd8[])();
__int64 game_menu_anonymous_ProcSupplyPart2Menu_CreateBind(__int64 a1,
                                                           __int64* a2);
__int64
game_menu_anonymous_ProcSupplyPart2Menu_CreateBind_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
__int64 GameRoutine_17ab880(__int64);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
extern __int64 (*GameData_20d43b8[])();
extern __int64 (*GameData_20d4438[])();
__int64 game_menu_anonymous_ProcSupplyPart2Menu_BCall(__int64 a1);

__int64 game_menu_anonymous_ProcSupplyPart2Menu_CreateBind(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v2 = *a2;
  GameRoutine_1308480();
  result = ProcList_9bd480(v2);
  if (result == 0) {
    return result;
  }
  v4 = result;
  v7[0] = GameData_20d3c58;
  v8 = v7;
  game_ProcList_Call_9bcfa0(result, v7);
  if (v8 == v7) {
    v5 = 32;
    goto LABEL_6;
  }
  if (v8 != nullptr) {
    v5 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v8 + v5))((__int64)v8);
  }
  v7[0] = GameData_20d3cd8;
  v8 = v7;
  game_ProcList_Call_9bcfa0(v4, v7);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

__int64

game_menu_anonymous_ProcSupplyPart2Menu_CreateBind_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _BYTE v5[32];
  _BYTE* v6;
  const char* v7;

  v2 = *a2;
  v7 = "MID_Menu_Part2Sortie_Message";
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

__int64 game_menu_anonymous_ProcSupplyPart2Menu_BCall(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  const char* v12;

  result = GameRoutine_17ab880(a1);
  if ((_DWORD)result == 3) {
    v12 = "MID_Menu_Part2Sortie_Confirm";
    v10_.v10[0] = GameData_20d43b8;
    v6_.v7 = v6_.v6;
    v10_.v11 = v10_.v10;
    v8_.v9 = v8_.v8;
    v8_.v8[0] = GameData_20d4438;
    v6_.v6[0] = GameData_20d4438;
    MapSortieMenu_871860(a1, (__int64)&v12, (__int64)v10_.v10, (__int64)v8_.v8,
                         (__int64)v6_.v6);
    if (v6_.v7 == v6_.v6) {
      v3 = 32;
    }
    else {
      if (v6_.v7 == nullptr) {
        goto LABEL_7;
      }
      v3 = 40;
    }
    (*(void (**)(__int64))(*v6_.v7 + v3))((__int64)v6_.v7);
  LABEL_7:
    if (v8_.v9 == v8_.v8) {
      v4 = 32;
    }
    else {
      if (v8_.v9 == nullptr) {
        goto LABEL_12;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
  LABEL_12:
    if (v10_.v11 == v10_.v10) {
      v5 = 32;
    }
    else {
      if (v10_.v11 == nullptr) {
        return 11;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
    return 11;
  }
  return result;
}

_DWORD* ProcSupplyPart2Menu_Unknown139(_DWORD* result, __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  if (result[296] != 1) {
    result =
        (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 192LL))(result);
    v3 = a2[1];
    v4 = a2[2];
    if (v3 >= v4) {
      v6 = *a2;
      v7 = v3 - *a2;
      v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
      if (v8 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v4 - v6) >> 3);
      if (2 * v10 > v8) {
        v8 = 2 * v10;
      }
      if (v10 >= 0x333333333333333LL) {
        v11 = 0x666666666666666LL;
      }
      else {
        v11 = v8;
      }
      if (v11 != 0) {
        if (v11 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v12 = (int)result;
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
        LODWORD(result) = v12;
      }
      else {
        v13 = 0;
      }
      v14 = v13 + v7;
      *(_QWORD*)v14 = &GameData_1a9f09e;
      *(_QWORD*)(v14 + 8) = "MID_KeyHelp_Next";
      *(_BYTE*)(v14 + 28) = 0;
      *(_QWORD*)(v14 + 32) = 0;
      *(_BYTE*)(v14 + 16) = 1;
      v15 = v13 + 40 * v11;
      *(_DWORD*)(v14 + 20) = 1;
      *(_DWORD*)(v14 + 24) = (_DWORD)result;
      v5 = v13 + v7 + 40;
      result = (_DWORD*)memcpy(v13, v6, v7);
      *a2 = v13;
      a2[1] = v5;
      a2[2] = v15;
      if (v6 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
          v16 = 56;
        }
        result = (_DWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16, v6);
      }
    }
    else {
      *(_BYTE*)(v3 + 28) = 0;
      *(_QWORD*)(v3 + 32) = 0;
      *(_QWORD*)v3 = &GameData_1a9f09e;
      *(_QWORD*)(v3 + 8) = "MID_KeyHelp_Next";
      v5 = v3 + 40;
      *(_BYTE*)(v3 + 16) = 1;
      *(_DWORD*)(v3 + 20) = 1;
      *(_DWORD*)(v3 + 24) = (_DWORD)result;
    }
    a2[1] = v5;
  }
  return result;
}

#pragma GCC visibility pop
