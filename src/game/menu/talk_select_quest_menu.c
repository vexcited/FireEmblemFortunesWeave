#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8679c0(_QWORD);
__int64 GameSubquestData_1267be0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_1267cf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_2130b28;
extern _UNKNOWN* GameData_2130b30;
extern __int64 (*GameData_20fd598[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130b40[2];
void __attribute__((noreturn)) GameRoutine_1267e70(_QWORD);
_QWORD*
game_menu_TalkSelectQuestMenu_CreateBindNoChoice_lambda0_Clone(__int64 a1);
__int64 game_menu_TalkSelectQuestMenu_CreateBindNoChoice_lambda0_CloneInto(
    __int64 result, _QWORD* a2);
__int64 game_menu_TalkSelectQuestMenu_CreateBindNoChoice_lambda0_Invoke(
    __int64 result, __int64* a2, _BYTE** a3);
__int64 game_menu_TalkSelectQuestMenu_CreateBindNoChoice_lambda1_Invoke(
    __int64 a1, __int64* a2, __int64* a3);
_QWORD*

game_menu_TalkSelectQuestMenu_CreateBindNoChoice_lambda0_Clone(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v4 = v3;
  v3[2] = 0;
  v3[3] = 0;
  *v3 = GameData_20fd598;
  v3[1] = 0;
  v6 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 16);
  v7 = v5 - v6;
  if (v5 != v6) {
    if (v7 < 0) {
      GameRoutine_1267e70(v3);
    }
    v8 = fw_memory_HeapManager_Allocate(*v2, v5 - v6, 16, 0);
    v9 = v8 + v7;
    v4[1] = v8;
    v4[3] = v8 + v7;
    memcpy(v8, v6, v7);
    v4[2] = v9;
  }
  return v4;
}

__int64 game_menu_TalkSelectQuestMenu_CreateBindNoChoice_lambda0_CloneInto(
    __int64 result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  a2[2] = 0;
  a2[3] = 0;
  *a2 = GameData_20fd598;
  a2[1] = 0;
  v3 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  v4 = v2 - v3;
  if (v2 != v3) {
    if (v4 < 0) {
      GameRoutine_1267e70(result);
    }
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v2 - v3, 16, 0);
    v7 = v6 + v4;
    a2[1] = v6;
    a2[2] = v6;
    a2[3] = v6 + v4;
    result = memcpy(v6, v3, v4);
    a2[2] = v7;
  }
  return result;
}

__int64 game_menu_TalkSelectQuestMenu_CreateBindNoChoice_lambda0_Invoke(
    __int64 result, __int64* a2, _BYTE** a3)
{
  _BYTE* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE v8[32];
  _BYTE* v9;
  _BYTE v10[4];

  v3 = *a3;
  v9 = nullptr;
  v4 = *a2;
  if (v3[9] == 3) {
    v3[9] = 4;
    v10[0] = 1;
    if ((*(_BYTE*)(*(_QWORD*)v3 + 161LL) & 4) != 0) {
      GameSubquestData_1267be0(v3, result + 8, v8, v10);
    }
    else {
      v5 = result;
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
      GameSubquestData_1267cf0(v6, v3, v5 + 8, v8, v10);
      ProcInst_657850(v6, GameData_2130b30, "ProcReward", 1, v4);
    }
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
    return (*(__int64 (**)(void*))(*(_QWORD*)v9 + v7))((void*)v9);
  }
  return result;
}

__int64 game_menu_TalkSelectQuestMenu_CreateBindNoChoice_lambda1_Invoke(
    __int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;

  v3 = *a2;
  v4 = *a3;
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 8, 16, 0);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *v7 = v4;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = v8 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  v9 = game_ProcInst_Register(v6);
  v10 = GameData_2130b40[0];
  *(_QWORD*)(v6 + 152) = v7;
  *(_QWORD*)(v6 + 160) = v7 + 1;
  *(_QWORD*)(v6 + 168) = v7 + 1;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_BYTE*)(v6 + 200) = 0;
  *(_QWORD*)v6 = v10 + 2;
  GameRoutine_8679c0(v9);
  return ProcInst_657850(v6, GameData_2130b28, "ProcAccept", 1, v3);
}

#pragma GCC visibility pop
