#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_d799f0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_220b6e0;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 game_GameModeData_instance_;
extern __int64* as_g_script_manager_ptr;
_QWORD* HubUiNatives_10da250();
__int64 HubUiNatives_10db830(__int64 a1);
__int64 GameRoutine_d859a0(_QWORD);
__int64 GameRoutine_d8b9c0(_QWORD, _QWORD);
__int64 GameRoutine_d8bae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a070b0(_QWORD, _QWORD, _QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
_QWORD* hub_ui_GainGoldFund(unsigned int a1);

_QWORD* HubUiNatives_10da250()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  int v6;

  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  result = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (result == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);

LABEL_9:
  v5 = GameData_220b6e0;
  if (*(_BYTE*)(GameData_220b6e0 + 162) != 0) {
    v6 = *(_DWORD*)(GameData_220b6e0 + 192);
    *(_BYTE*)(GameData_220b6e0 + 162) = 0;
    *(_DWORD*)(v5 + 192) = --v6;
    if (v6 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v5 + 184) + 8LL))(v5 + 184);
    }
    return (_QWORD*)GameRoutine_d799f0(v5);
  }
  return result;
}

_QWORD* hub_ui_GainGoldFund(unsigned int a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  void (*v18)(void);
  _QWORD* result;
  __int64 v20;
  __int64 v21;
  char v22[16];
  __int64 v23;
  char v24;
  char* v25;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    goto LABEL_26;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v7 = v6;
      v6 = *(_QWORD*)(v6 + 40);
    } while (v6 != 0);
    if (a1 == 0) {
      goto LABEL_26;
    }
  }
  else {
    v7 = 0;
    if (a1 == 0) {
      goto LABEL_26;
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v8 = (*(_DWORD*)(game_GameModeData_instance_ + 72) + a1) &
         ~((int)(*(_DWORD*)(game_GameModeData_instance_ + 72) + a1) >> 31);
    if (v8 >= 9999999) {
      v8 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v8;
  }
  if (v7 != 0) {
    v9 = ObeliskDestinyMenuItem_1a070b0(v7, a1, "MID_Menu_FundGet_Message");
    Se_80e330(v9, "FF_Positive1");
    v10 = game_hub_ProcHubSeqView_instance_;
    v22[0] = 24;
    strcpy(&v22[1], "GainGoldFund");
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, v22);
      v11 = *(_QWORD*)(*(_QWORD*)(v10 + 416) + 40LL);
      if (v11 != 0) {
        v12 = 0;
        do {
          v11 = *(_QWORD*)(v11 + 40);
          ++v12;
        } while (v11 != 0);
        v25 = v22;
        *(_DWORD*)(GameRoutine_d8bae0(v10 + 424, v22,
                                      std___1_piecewise_construct_ptr, &v25,
                                      &v24) +
                   56) = v12;
      }
    }
    if ((v22[0] & 1) != 0 && v23 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v13);
    }
  }
LABEL_26:
  v22[0] = 24;
  strcpy(&v22[1], "GainGoldFund");
  v14 = GameRoutine_d859a0(v22);
  v15 = *v2;
  v16 = *(
      _QWORD*)(v15 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v16 != 0) {
    v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 472LL))(v16);
  }
  else {
    v17 = 0;
  }
  v18 = *(void (**)(void))(**(_QWORD**)(v17 + 24) + 448LL);
  if ((v14 & 1) == 0) {
    v18();
    result = *(_QWORD**)(v17 + 2240);
    *(_QWORD*)(v17 + 2240) = 0;
    if (result == (_QWORD*)(v17 + 2208)) {
      v20 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_36;
      }
      v20 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(void))(*result + v20))();
    goto LABEL_36;
  }
  result = (_QWORD*)((__int64 (*)(void))v18)();
LABEL_36:
  if ((v22[0] & 1) != 0 && v23 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
  }
  return result;
}

__int64 HubUiNatives_10db830(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);

LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 16);
  }
  else {
    v7 = a1 + 1;
  }
  GameRoutine_887920(&v12, v7);
  v9 = v12;
  if (v12 != 0) {
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v10 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v12);
      v8 = v10 != 0 && *(_BYTE*)(v10 + 32) != 0;
    }
  }
  return (v9 == 0) | (unsigned int)((v8 & 1) == 0);
}

#pragma GCC visibility pop
