#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7c5ed0(_QWORD, _QWORD);
__int64 GameRoutine_7c6120(_QWORD);
__int64 game_script_StartWaitProc(_QWORD);
__int64 game_script_WaitProc(void);
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 as_g_thread_info;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212cfb0[12];
extern __int64* as_g_script_manager_ptr;
_QWORD* map_zoom_In();
_QWORD* map_zoom_Out();

_QWORD* map_zoom_In()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* result;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 24) + 456LL))(
           *(_QWORD*)(v3 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  v4 = GameData_212cfb0[0];
  v5 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v5 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v5 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v6 = v5[10];
    if (v6 != 0) {
      v7 = *(_QWORD*)(*(_QWORD*)(v5[6] + 8 * ((v6 + v5[9] - 1) / 0x33uLL)) +
                      80 * ((v6 + v5[9] - 1) % 0x33uLL) + 72);
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v7 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v7 = 0;
LABEL_11:
  v9 = GameRoutine_7c5ed0(v7, 0);
  if (v9 == 0) {
    v13 = *v0;
    v14 = *(_QWORD*)(v13 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v14 != 0) {
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
    }
    else {
      v15 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v15 + 24) + 448LL))(
        *(_QWORD*)(v15 + 24), 1);
    result = *(_QWORD**)(v15 + 2240);
    *(_QWORD*)(v15 + 2240) = 0;
    if (result == (_QWORD*)(v15 + 2208)) {
      v22 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v22 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v22))(result);
  }
  game_script_StartWaitProc(v9);
  v10 = (_QWORD*)*v4;
  if (*v4 != 0 ||
      (v10 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v10 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v11 = v10[10];
    if (v11 != 0) {
      v12 = *(_QWORD*)(*(_QWORD*)(v10[6] + 8 * ((v11 + v10[9] - 1) / 0x33uLL)) +
                       80 * ((v11 + v10[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v12 = 0;
    }
  }
  else {
    v12 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v12 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v16 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v17 = 2)
           : (v17 = 3),
       (v17 & v16) != 0)) {
    v18 = *(float*)(v12 + 144);
    if (v18 < 1.0) {
      v18 = 1.0;
    }
    *(_WORD*)(v12 + 136) = *(_WORD*)(v12 + 136) & 0xFF97 | 0x20;
    *(float*)(v12 + 144) = v18;
  }
  v19 = *v0;
  v20 = *(
      _QWORD*)(v19 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 472LL))(v20);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v21 + 24) + 448LL))(*(_QWORD*)(v21 + 24), 0);
}

_QWORD* map_zoom_Out()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* result;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 24) + 456LL))(
           *(_QWORD*)(v3 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  v4 = GameData_212cfb0[0];
  v5 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v5 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v5 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v6 = v5[10];
    if (v6 != 0) {
      v7 = *(_QWORD*)(*(_QWORD*)(v5[6] + 8 * ((v6 + v5[9] - 1) / 0x33uLL)) +
                      80 * ((v6 + v5[9] - 1) % 0x33uLL) + 72);
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v7 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v7 = 0;
LABEL_11:
  v9 = GameRoutine_7c6120(v7);
  if (v9 == 0) {
    v13 = *v0;
    v14 = *(_QWORD*)(v13 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v14 != 0) {
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
    }
    else {
      v15 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v15 + 24) + 448LL))(
        *(_QWORD*)(v15 + 24), 1);
    result = *(_QWORD**)(v15 + 2240);
    *(_QWORD*)(v15 + 2240) = 0;
    if (result == (_QWORD*)(v15 + 2208)) {
      v22 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v22 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v22))(result);
  }
  game_script_StartWaitProc(v9);
  v10 = (_QWORD*)*v4;
  if (*v4 != 0 ||
      (v10 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v10 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v11 = v10[10];
    if (v11 != 0) {
      v12 = *(_QWORD*)(*(_QWORD*)(v10[6] + 8 * ((v11 + v10[9] - 1) / 0x33uLL)) +
                       80 * ((v11 + v10[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v12 = 0;
    }
  }
  else {
    v12 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v12 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v16 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v17 = 2)
           : (v17 = 3),
       (v17 & v16) != 0)) {
    v18 = *(float*)(v12 + 144);
    if (v18 < 1.0) {
      v18 = 1.0;
    }
    *(_WORD*)(v12 + 136) = *(_WORD*)(v12 + 136) & 0xFF97 | 0x20;
    *(float*)(v12 + 144) = v18;
  }
  v19 = *v0;
  v20 = *(
      _QWORD*)(v19 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 472LL))(v20);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v21 + 24) + 448LL))(*(_QWORD*)(v21 + 24), 0);
}

#pragma GCC visibility pop
