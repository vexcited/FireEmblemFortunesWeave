#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6b94d0(void);
__int64 GameRoutine_73b790(_QWORD, _QWORD);
__int64 Situation_7651e0(_QWORD, _QWORD);
__int64 as_string_c_str(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_script_StartWaitProc(_QWORD);
__int64 game_script_WaitProc(void);
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 GameData_21ca260;
extern __int64 as_g_thread_info;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212cfb0[12];
extern __int64* GameData_21309c8[5];
extern __int64* as_g_script_manager_ptr;
void __attribute__((noreturn)) GameRoutine_1174210(void);
__int64 map_Dispos(__int64 a1, __int16 a2, __int64 a3);
__int64 map_DisposSingle(__int64 a1, char a2, char a3, __int16 a4, __int64 a5);
__int64 map_DisposGetDataNum(__int64 a1);
__int64 map_DisposIsEnable(__int64 a1, int a2);
__int64 map_DisposGetPosX(__int64 a1, int a2);
__int64 map_DisposGetPosZ(__int64 a1, int a2);
_QWORD* map_SetRainEnable(char a1);

__int64 map_Dispos(__int64 a1, __int16 a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;
  __int16 v27;
  __int64 v28;

  v6 = as_g_script_manager_ptr;
  v7 = *as_g_script_manager_ptr;
  v8 = *(
      _QWORD*)(v7 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 472LL))(v8);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v9 + 24) + 456LL))(
           *(_QWORD*)(v9 + 24)) &
       1) == 0) {
    return game_script_WaitProc();
  }
  v10 = GameData_212cfb0[0];
  v11 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v11 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v11 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v12 = v11[10];
    if (v12 != 0) {
      v13 = *(_QWORD*)(*(_QWORD*)(v11[6] + 8 * ((v12 + v11[9] - 1) / 0x33uLL)) +
                       80 * ((v12 + v11[9] - 1) % 0x33uLL) + 72);
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v13 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v13 = 0;
LABEL_11:
  v25 = as_string_c_str(a1);
  v27 = a2;
  v26 = -1;
  v28 = as_string_c_str(a3);
  v15 = GameRoutine_73b790(v13, &v25);
  game_script_StartWaitProc(v15);
  v16 = (_QWORD*)*v10;
  if (*v10 != 0 ||
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
      (((v19 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v20 = 2)
           : (v20 = 3),
       (v20 & v19) != 0)) {
    v21 = *(float*)(v18 + 144);
    if (v21 < 1.0) {
      v21 = 1.0;
    }
    *(_WORD*)(v18 + 136) = *(_WORD*)(v18 + 136) & 0xFF97 | 0x20;
    *(float*)(v18 + 144) = v21;
  }
  v22 = *v6;
  v23 = *(
      _QWORD*)(v22 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 472LL))(v23);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v24 + 24) + 448LL))(
      *(_QWORD*)(v24 + 24), 0);
}

__int64 map_DisposSingle(__int64 a1, char a2, char a3, __int16 a4, __int64 a5)
{
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  char v31;
  __int16 v32;
  __int64 v33;

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
    return game_script_WaitProc();
  }
  v14 = GameData_212cfb0[0];
  v15 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v15 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v15 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v16 = v15[10];
    if (v16 != 0) {
      v17 = *(_QWORD*)(*(_QWORD*)(v15[6] + 8 * ((v16 + v15[9] - 1) / 0x33uLL)) +
                       80 * ((v16 + v15[9] - 1) % 0x33uLL) + 72);
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v17 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v17 = 0;
LABEL_11:
  v29 = as_string_c_str(a1);
  v30 = a2;
  v31 = a3;
  v32 = a4;
  v33 = as_string_c_str(a5);
  v19 = GameRoutine_73b790(v17, &v29);
  game_script_StartWaitProc(v19);
  v20 = (_QWORD*)*v14;
  if (*v14 != 0 ||
      (v20 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v20 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v21 = v20[10];
    if (v21 != 0) {
      v22 = *(_QWORD*)(*(_QWORD*)(v20[6] + 8 * ((v21 + v20[9] - 1) / 0x33uLL)) +
                       80 * ((v21 + v20[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v22 = 0;
    }
  }
  else {
    v22 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v22 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v23 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v24 = 2)
           : (v24 = 3),
       (v24 & v23) != 0)) {
    v25 = *(float*)(v22 + 144);
    if (v25 < 1.0) {
      v25 = 1.0;
    }
    *(_WORD*)(v22 + 136) = *(_WORD*)(v22 + 136) & 0xFF97 | 0x20;
    *(float*)(v22 + 144) = v25;
  }
  v26 = *v10;
  v27 = *(
      _QWORD*)(v26 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 472LL))(v27);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v28 + 24) + 448LL))(
      *(_QWORD*)(v28 + 24), 0);
}

__int64 map_DisposGetDataNum(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = as_string_c_str(a1);
  v2 = game_HashString(v1);
  if (v2 == 0) {
    goto LABEL_28;
  }
  v3 = *(_QWORD*)(GameData_21ca260 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21ca260 + 112) == 0) {
    goto LABEL_28;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = v2;
    if (v2 >= v3) {
      v6 = v2 % v3;
    }
  }
  else {
    v6 = v5 & v2;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21ca260 + 88) + 8 * v6);
  if (v7 == nullptr) {
    goto LABEL_28;
  }
  v8 = (_QWORD*)*v7;
  if (v8 == nullptr) {
    goto LABEL_28;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v11 = v8[1];
      if (v11 == v2) {
        if (v8[2] == v2) {
          goto LABEL_26;
        }
      }
      else if ((v11 & v5) != v6) {
        goto LABEL_28;
      }
      v8 = (_QWORD*)*v8;
      LODWORD(v10) = -1;
      if (v8 == nullptr) {
        return (unsigned int)v10;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v2) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      goto LABEL_28;
    }
  LABEL_15:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      goto LABEL_28;
    }
  }
  if (v8[2] != v2) {
    goto LABEL_15;
  }
LABEL_26:
  v12 = v8[3];
  if (v12 == 0) {
  LABEL_28:
    LODWORD(v10) = -1;
    return (unsigned int)v10;
  }
  return (unsigned int)((*(_QWORD*)(*(_QWORD*)(v12 + 40) + 8LL) -
                         **(_QWORD**)(v12 + 40)) >>
                        3);
}

__int64 map_DisposIsEnable(__int64 a1, int a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v3 = as_string_c_str(a1);
  v4 = game_HashString(v3);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(GameData_21ca260 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21ca260 + 112) == 0) {
    return 0;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
  }
  v9 = *(_QWORD**)(*(_QWORD*)(GameData_21ca260 + 88) + 8 * v8);
  if (v9 == nullptr) {
    return 0;
  }
  v10 = (_QWORD*)*v9;
  if (v10 == nullptr) {
    return 0;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v12 = v10[1];
      if (v12 == v4) {
        if (v10[2] == v4) {
          goto LABEL_26;
        }
      }
      else if ((v12 & v7) != v8) {
        return 0;
      }
      v10 = (_QWORD*)*v10;
      if (v10 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= v5) {
      v11 %= v5;
    }
    if (v11 != v8) {
      return 0;
    }
  LABEL_15:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      return 0;
    }
  }
  if (v10[2] != v4) {
    goto LABEL_15;
  }
LABEL_26:
  v13 = v10[3];
  if (v13 != 0) {
    v14 = **(_QWORD**)(v13 + 40);
    if (a2 >=
        (unsigned __int64)((*(_QWORD*)(*(_QWORD*)(v13 + 40) + 8LL) - v14) >>
                           3)) {
      GameRoutine_1174210();
    }
    if (*(_QWORD*)(v14 + 8LL * a2) != 0) {
      return GameRoutine_6b94d0();
    }
  }
  return 0;
}

__int64 map_DisposGetPosX(__int64 a1, int a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = as_string_c_str(a1);
  v4 = game_HashString(v3);
  if (v4 == 0) {
    return (unsigned int)-1;
  }
  v5 = *(_QWORD*)(GameData_21ca260 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21ca260 + 112) == 0) {
    return (unsigned int)-1;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
  }
  v9 = *(_QWORD**)(*(_QWORD*)(GameData_21ca260 + 88) + 8 * v8);
  if (v9 == nullptr) {
    return (unsigned int)-1;
  }
  v10 = (_QWORD*)*v9;
  if (v10 == nullptr) {
    return (unsigned int)-1;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v13 = v10[1];
      if (v13 == v4) {
        if (v10[2] == v4) {
          goto LABEL_26;
        }
      }
      else if ((v13 & v7) != v8) {
        return (unsigned int)-1;
      }
      v10 = (_QWORD*)*v10;
      v12 = -1;
      if (v10 == nullptr) {
        return v12;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= v5) {
      v11 %= v5;
    }
    if (v11 != v8) {
      return (unsigned int)-1;
    }
  LABEL_15:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      return (unsigned int)-1;
    }
  }
  if (v10[2] != v4) {
    goto LABEL_15;
  }
LABEL_26:
  v14 = v10[3];
  if (v14 == 0) {
    return (unsigned int)-1;
  }
  v15 = **(_QWORD**)(v14 + 40);
  if (a2 >=
      (unsigned __int64)((*(_QWORD*)(*(_QWORD*)(v14 + 40) + 8LL) - v15) >> 3)) {
    GameRoutine_1174210();
  }
  v16 = *(_QWORD*)(v15 + 8LL * a2);
  if (v16 == 0) {
    return (unsigned int)-1;
  }
  return (unsigned int)*(char*)(v16 + 54);
}

__int64 map_DisposGetPosZ(__int64 a1, int a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = as_string_c_str(a1);
  v4 = game_HashString(v3);
  if (v4 == 0) {
    return (unsigned int)-1;
  }
  v5 = *(_QWORD*)(GameData_21ca260 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21ca260 + 112) == 0) {
    return (unsigned int)-1;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
  }
  v9 = *(_QWORD**)(*(_QWORD*)(GameData_21ca260 + 88) + 8 * v8);
  if (v9 == nullptr) {
    return (unsigned int)-1;
  }
  v10 = (_QWORD*)*v9;
  if (v10 == nullptr) {
    return (unsigned int)-1;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v13 = v10[1];
      if (v13 == v4) {
        if (v10[2] == v4) {
          goto LABEL_26;
        }
      }
      else if ((v13 & v7) != v8) {
        return (unsigned int)-1;
      }
      v10 = (_QWORD*)*v10;
      v12 = -1;
      if (v10 == nullptr) {
        return v12;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= v5) {
      v11 %= v5;
    }
    if (v11 != v8) {
      return (unsigned int)-1;
    }
  LABEL_15:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      return (unsigned int)-1;
    }
  }
  if (v10[2] != v4) {
    goto LABEL_15;
  }
LABEL_26:
  v14 = v10[3];
  if (v14 == 0) {
    return (unsigned int)-1;
  }
  v15 = **(_QWORD**)(v14 + 40);
  if (a2 >=
      (unsigned __int64)((*(_QWORD*)(*(_QWORD*)(v14 + 40) + 8LL) - v15) >> 3)) {
    GameRoutine_1174210();
  }
  v16 = *(_QWORD*)(v15 + 8LL * a2);
  if (v16 == 0) {
    return (unsigned int)-1;
  }
  return (unsigned int)*(char*)(v16 + 55);
}

_QWORD* map_SetRainEnable(char a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

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
  if (*GameData_212ce90[0] == 0) {
    v11 = *v2;
    v12 = *(_QWORD*)(v11 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v12 != 0) {
      v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
    }
    else {
      v13 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v13 + 24) + 448LL))(
        *(_QWORD*)(v13 + 24), 1);
    result = *(_QWORD**)(v13 + 2240);
    *(_QWORD*)(v13 + 2240) = 0;
    if (result == (_QWORD*)(v13 + 2208)) {
      v14 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v14 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v14))(result);
  }
  v6 = GameData_212cfb0[0];
  v7 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v7 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v7 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v8 = v7[10];
    if (v8 != 0) {
      v9 = *(_QWORD*)(*(_QWORD*)(v7[6] + 8 * ((v8 + v7[9] - 1) / 0x33uLL)) +
                      80 * ((v8 + v7[9] - 1) % 0x33uLL) + 72);
      goto LABEL_20;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_20;
  }
  v9 = 0;
LABEL_20:
  v15 = Situation_7651e0(v9, a1 & 1);
  game_script_StartWaitProc(v15);
  v16 = (_QWORD*)*v6;
  if (*v6 != 0 ||
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
      (((v19 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v20 = 2)
           : (v20 = 3),
       (v20 & v19) != 0)) {
    v21 = *(float*)(v18 + 144);
    if (v21 < 1.0) {
      v21 = 1.0;
    }
    *(_WORD*)(v18 + 136) = *(_WORD*)(v18 + 136) & 0xFF97 | 0x20;
    *(float*)(v18 + 144) = v21;
  }
  v22 = *v2;
  v23 = *(
      _QWORD*)(v22 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 472LL))(v23);
  result = (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v24 + 24) + 448LL))(*(_QWORD*)(v24 + 24), 0);
  v25 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v25 + 8) == 1 &&
      (*(_BYTE*)(v25 + 9) & 1) == 0) {
    *(_DWORD*)(v25 + 12) |= 0x4000u;
  }
  return result;
}

#pragma GCC visibility pop
