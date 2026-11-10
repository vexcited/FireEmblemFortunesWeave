#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7a98a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_script_StartWaitProc(void);
__int64 game_script_WaitProc(void);
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 as_g_thread_info;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212cfb0[12];
extern __int64* as_g_script_manager_ptr;
_QWORD* map_battle_Battle(int a1, int a2, unsigned int a3);

_QWORD* map_battle_Battle(int a1, int a2, unsigned int a3)
{
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* result;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _BYTE v29[4];
  _BYTE v30[4];

  if (a1 < 0) {
    v5 = 0;
    if ((a2 & 0x80000000) == 0) {
      goto LABEL_3;
    }
  }
  else {
    v29[0] = a1;
    v5 = game_UnitPool_Get(v29);
    if ((a2 & 0x80000000) == 0) {
    LABEL_3:
      v30[0] = a2;
      v6 = game_UnitPool_Get(v30);
      goto LABEL_6;
    }
  }
  v6 = 0;
LABEL_6:
  v7 = as_g_script_manager_ptr;
  v8 = *as_g_script_manager_ptr;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v10 + 24) + 456LL))(
           *(_QWORD*)(v10 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  v11 = GameData_212cfb0[0];
  v12 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v12 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v12 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v13 = v12[10];
    if (v13 != 0) {
      v14 = *(_QWORD*)(*(_QWORD*)(v12[6] + 8 * ((v13 + v12[9] - 1) / 0x33uLL)) +
                       80 * ((v13 + v12[9] - 1) % 0x33uLL) + 72);
      goto LABEL_16;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v14 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_16;
  }
  v14 = 0;
LABEL_16:
  if (GameRoutine_7a98a0(v14, v5, v6, a3) == 0) {
    v19 = *v7;
    v20 = *(_QWORD*)(v19 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v20 != 0) {
      v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 472LL))(v20);
    }
    else {
      v21 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v21 + 24) + 448LL))(
        *(_QWORD*)(v21 + 24), 1);
    result = *(_QWORD**)(v21 + 2240);
    *(_QWORD*)(v21 + 2240) = 0;
    if (result == (_QWORD*)(v21 + 2208)) {
      v28 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v28 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v28))(result);
  }
  game_script_StartWaitProc();
  v16 = (_QWORD*)*v11;
  if (*v11 != 0 ||
      (v16 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v16 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v17 = v16[10];
    if (v17 != 0) {
      v18 = *(_QWORD*)(*(_QWORD*)(v16[6] + 8 * ((v17 + v16[9] - 1) / 0x33uLL)) +
                       80 * ((v17 + v16[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v18 = 0;
    }
  }
  else {
    v18 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v18 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v22 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v23 = 2)
           : (v23 = 3),
       (v23 & v22) != 0)) {
    v24 = *(float*)(v18 + 144);
    if (v24 < 1.0) {
      v24 = 1.0;
    }
    *(_WORD*)(v18 + 136) = *(_WORD*)(v18 + 136) & 0xFF97 | 0x20;
    *(float*)(v18 + 144) = v24;
  }
  v25 = *v7;
  v26 = *(
      _QWORD*)(v25 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 472LL))(v26);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v27 + 24) + 448LL))(*(_QWORD*)(v27 + 24), 0);
}

#pragma GCC visibility pop
