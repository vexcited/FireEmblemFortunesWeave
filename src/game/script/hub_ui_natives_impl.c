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
