#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_961d00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_9629e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9a4ac0(_QWORD, _QWORD);
__int64 as_string_c_str(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_script_StartWaitProc(_QWORD);
__int64 game_script_WaitProc(void);
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 as_g_thread_info;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_map_effect_g_sequence;
extern __int64* GameData_212cfb0[12];
extern __int64* as_g_script_manager_ptr;
_QWORD* map_effect_PreloadAndWait(_QWORD* result);
_QWORD* map_effect_Shoot_1168c00(_QWORD* result, unsigned int a2,
                                 unsigned int a3, unsigned int a4,
                                 unsigned int a5, char a6);
_QWORD* map_effect_Shoot_1168f80(_QWORD* result, unsigned int a2,
                                 unsigned int a3, int a4, char a5);

_QWORD* map_effect_PreloadAndWait(_QWORD* result)
{
  _QWORD* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if (game_script_map_effect_g_sequence == 0) {
    return result;
  }
  v1 = result;
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
    return (_QWORD*)game_script_WaitProc();
  }
  v6 = GameData_212cfb0[0];
  v7 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0) {
    v8 = v7[10];
    v9 = v1;
    if (v8 == 0) {
      goto LABEL_13;
    }
    goto LABEL_10;
  }
  v9 = v1;
  v7 = *(_QWORD**)GameData_212eb20[0];
  if (*(_QWORD*)GameData_212eb20[0] == 0) {
    v7 = *(_QWORD**)GameData_212eb28;
    if (*(_QWORD*)GameData_212eb28 == 0) {
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        v10 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
        goto LABEL_14;
      }
    LABEL_13:
      v10 = 0;
      goto LABEL_14;
    }
  }
  v8 = v7[10];
  if (v8 == 0) {
    goto LABEL_13;
  }
LABEL_10:
  v10 = *(_QWORD*)(*(_QWORD*)(v7[6] + 8 * ((v8 + v7[9] - 1) / 0x33uLL)) +
                   80 * ((v8 + v7[9] - 1) % 0x33uLL) + 72);
LABEL_14:
  v11 = as_string_c_str(v9);
  v12 = GameRoutine_9a4ac0(v10, v11);
  if (v12 == 0) {
    v16 = *v2;
    v17 = *(_QWORD*)(v16 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v17 != 0) {
      v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 472LL))(v17);
    }
    else {
      v18 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v18 + 24) + 448LL))(
        *(_QWORD*)(v18 + 24), 1);
    result = *(_QWORD**)(v18 + 2240);
    *(_QWORD*)(v18 + 2240) = 0;
    if (result == (_QWORD*)(v18 + 2208)) {
      v25 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v25 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(void))(*result + v25))();
  }
  game_script_StartWaitProc(v12);
  v13 = (_QWORD*)*v6;
  if (*v6 != 0 ||
      (v13 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v13 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v14 = v13[10];
    if (v14 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(v13[6] + 8 * ((v14 + v13[9] - 1) / 0x33uLL)) +
                       80 * ((v14 + v13[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v15 = 0;
    }
  }
  else {
    v15 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v15 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v19 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v20 = 2)
           : (v20 = 3),
       (v20 & v19) != 0)) {
    v21 = *(float*)(v15 + 144);
    if (v21 < 1.0) {
      v21 = 1.0;
    }
    *(_WORD*)(v15 + 136) = *(_WORD*)(v15 + 136) & 0xFF97 | 0x20;
    *(float*)(v15 + 144) = v21;
  }
  v22 = *v2;
  v23 = *(
      _QWORD*)(v22 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 472LL))(v23);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v24 + 24) + 448LL))(*(_QWORD*)(v24 + 24), 0);
}

_QWORD* map_effect_Shoot_1168c00(_QWORD* result, unsigned int a2,
                                 unsigned int a3, unsigned int a4,
                                 unsigned int a5, char a6)
{
  _QWORD* v6;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  if (game_script_map_effect_g_sequence == 0) {
    return result;
  }
  v6 = result;
  v12 = as_g_script_manager_ptr;
  v13 = *as_g_script_manager_ptr;
  v14 = *(
      _QWORD*)(v13 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v15 + 24) + 456LL))(
           *(_QWORD*)(v15 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  v16 = GameData_212cfb0[0];
  v17 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0) {
    v18 = v17[10];
    v19 = v6;
    if (v18 == 0) {
      goto LABEL_13;
    }
    goto LABEL_10;
  }
  v19 = v6;
  v17 = *(_QWORD**)GameData_212eb20[0];
  if (*(_QWORD*)GameData_212eb20[0] == 0) {
    v17 = *(_QWORD**)GameData_212eb28;
    if (*(_QWORD*)GameData_212eb28 == 0) {
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        v20 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
        goto LABEL_14;
      }
    LABEL_13:
      v20 = 0;
      goto LABEL_14;
    }
  }
  v18 = v17[10];
  if (v18 == 0) {
    goto LABEL_13;
  }
LABEL_10:
  v20 = *(_QWORD*)(*(_QWORD*)(v17[6] + 8 * ((v18 + v17[9] - 1) / 0x33uLL)) +
                   80 * ((v18 + v17[9] - 1) % 0x33uLL) + 72);
LABEL_14:
  v35 = as_string_c_str(v19);
  v21 = GameRoutine_961d00(v20, &v35, a2, a3, a4, a5, a6 & 1);
  if (v21 == 0) {
    v25 = *v12;
    v26 = *(_QWORD*)(v25 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v26 != 0) {
      v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 472LL))(v26);
    }
    else {
      v27 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v27 + 24) + 448LL))(
        *(_QWORD*)(v27 + 24), 1);
    result = *(_QWORD**)(v27 + 2240);
    *(_QWORD*)(v27 + 2240) = 0;
    if (result == (_QWORD*)(v27 + 2208)) {
      v34 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v34 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(void))(*result + v34))();
  }
  game_script_StartWaitProc(v21);
  v22 = (_QWORD*)*v16;
  if (*v16 != 0 ||
      (v22 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v22 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v23 = v22[10];
    if (v23 != 0) {
      v24 = *(_QWORD*)(*(_QWORD*)(v22[6] + 8 * ((v23 + v22[9] - 1) / 0x33uLL)) +
                       80 * ((v23 + v22[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v24 = 0;
    }
  }
  else {
    v24 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v24 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v28 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v29 = 2)
           : (v29 = 3),
       (v29 & v28) != 0)) {
    v30 = *(float*)(v24 + 144);
    if (v30 < 1.0) {
      v30 = 1.0;
    }
    *(_WORD*)(v24 + 136) = *(_WORD*)(v24 + 136) & 0xFF97 | 0x20;
    *(float*)(v24 + 144) = v30;
  }
  v31 = *v12;
  v32 = *(
      _QWORD*)(v31 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 472LL))(v32);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v33 + 24) + 448LL))(*(_QWORD*)(v33 + 24), 0);
}

_QWORD* map_effect_Shoot_1168f80(_QWORD* result, unsigned int a2,
                                 unsigned int a3, int a4, char a5)
{
  _QWORD* v5;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35[4];

  if (game_script_map_effect_g_sequence == 0) {
    return result;
  }
  v5 = result;
  v10 = as_g_script_manager_ptr;
  v11 = *as_g_script_manager_ptr;
  v12 = *(
      _QWORD*)(v11 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v13 + 24) + 456LL))(
           *(_QWORD*)(v13 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  if (a4 < 0) {
    v14 = 0;
  }
  else {
    v35[0] = a4;
    v14 = game_UnitPool_Get(v35);
  }
  v15 = v5;
  v16 = GameData_212cfb0[0];
  v17 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] == 0) {
    v17 = *(_QWORD**)GameData_212eb20[0];
    if (*(_QWORD*)GameData_212eb20[0] == 0) {
      v17 = *(_QWORD**)GameData_212eb28;
      if (*(_QWORD*)GameData_212eb28 == 0) {
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v19 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          goto LABEL_15;
        }
      LABEL_14:
        v19 = 0;
        goto LABEL_15;
      }
    }
  }
  v18 = v17[10];
  if (v18 == 0) {
    goto LABEL_14;
  }
  v19 = *(_QWORD*)(*(_QWORD*)(v17[6] + 8 * ((v18 + v17[9] - 1) / 0x33uLL)) +
                   80 * ((v18 + v17[9] - 1) % 0x33uLL) + 72);
LABEL_15:
  v34 = as_string_c_str(v15);
  v20 = GameRoutine_9629e0(v19, &v34, a2, a3, v14, a5 & 1);
  if (v20 == 0) {
    v24 = *v10;
    v25 = *(_QWORD*)(v24 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v25 != 0) {
      v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 472LL))(v25);
    }
    else {
      v26 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v26 + 24) + 448LL))(
        *(_QWORD*)(v26 + 24), 1);
    result = *(_QWORD**)(v26 + 2240);
    *(_QWORD*)(v26 + 2240) = 0;
    if (result == (_QWORD*)(v26 + 2208)) {
      v33 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v33 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(void))(*result + v33))();
  }
  game_script_StartWaitProc(v20);
  v21 = (_QWORD*)*v16;
  if (*v16 != 0 ||
      (v21 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v21 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v22 = v21[10];
    if (v22 != 0) {
      v23 = *(_QWORD*)(*(_QWORD*)(v21[6] + 8 * ((v22 + v21[9] - 1) / 0x33uLL)) +
                       80 * ((v22 + v21[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v23 = 0;
    }
  }
  else {
    v23 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v23 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v27 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v28 = 2)
           : (v28 = 3),
       (v28 & v27) != 0)) {
    v29 = *(float*)(v23 + 144);
    if (v29 < 1.0) {
      v29 = 1.0;
    }
    *(_WORD*)(v23 + 136) = *(_WORD*)(v23 + 136) & 0xFF97 | 0x20;
    *(float*)(v23 + 144) = v29;
  }
  v30 = *v10;
  v31 = *(
      _QWORD*)(v30 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 472LL))(v31);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v32 + 24) + 448LL))(*(_QWORD*)(v32 + 24), 0);
}

#pragma GCC visibility pop
