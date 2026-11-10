#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_script_WaitProc();
__int64* game_820d50(int);
__int64* game_UnitPool_Get(_BYTE*);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 as_string_c_str(_QWORD);
__int64 game_820d50_alt1(_QWORD) __asm__("game_820d50");
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GameVariableTable_Find_alt1(_QWORD, _QWORD) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HasSkill_alt1(_QWORD, _QWORD) __asm__("game_HasSkill");
__int64 game_Unit_SetPollution(__int64, int);
__int64 game_Unit_SetPollution_alt1(_QWORD,
                                    _QWORD) __asm__("game_Unit_SetPollution");
__int64 game_map_76c260(__int64, __int64);
__int64 game_map_76c260_alt1(_QWORD, _QWORD) __asm__("game_map_76c260");
__int64 game_script_StartWaitProc(__int64);
__int64
game_script_StartWaitProc_alt1(void) __asm__("game_script_StartWaitProc");
__int64 game_script_WaitProc_alt1(void) __asm__("game_script_WaitProc");
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64* GameData_212cfb0[12];
extern __int64* GameData_21309c8[5];
extern __int64* as_g_script_manager_ptr;
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 GameData_21ca310;
extern __int64 as_g_thread_info;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_map_UnitFlags_instance_;
_QWORD* unit_ability_SetPollution_1179d70(int a1, int a2);
_QWORD* unit_ability_SetPollution_117a1a0(__int64 a1, int a2);

_QWORD* unit_ability_SetPollution_1179d70(int a1, int a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  _QWORD* result;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  unsigned int v19;
  bool v20;
  bool v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _BYTE v41[4];
  int v42;

  v4 = as_g_script_manager_ptr;
  v5 = *as_g_script_manager_ptr;
  v6 = *(
      _QWORD*)(v5 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 472LL))(v6);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v7 + 24) + 456LL))(
           *(_QWORD*)(v7 + 24)) &
       1) == 0) {
    return game_script_WaitProc();
  }
  if (a1 < 0) {
    goto LABEL_55;
  }
  v41[0] = a1;
  v8 = game_UnitPool_Get(v41);
  if (v8 == nullptr || v8[49] == 0) {
    goto LABEL_55;
  }
  v9 = GameData_212cfb0[0];
  v10 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v10 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v10 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v11 = v10[10];
    if (v11 == 0) {
      goto LABEL_55;
    }
    v12 = *(_QWORD*)(*(_QWORD*)(v10[6] + 8 * ((v11 + v10[9] - 1) / 0x33uLL)) +
                     80 * ((v11 + v10[9] - 1) % 0x33uLL) + 72);
    if (v12 == 0) {
      goto LABEL_55;
    }
  }
  else {
    if (game_hub_ProcHubSeqView_instance_ == 0) {
      goto LABEL_55;
    }
    v12 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    if (v12 == 0) {
      goto LABEL_55;
    }
  }
  v13 = v8[55];
  if (v13 != 0) {
    v14 = *(_BYTE*)(v13 + 16);
  }
  else {
    v14 = 9;
  }
  if (((1 << v14) & 0xF1) != 0) {
    v16 = v8;
    v17 = game_820d50(2);
    if (game_GameModeData_instance_ != 0 &&
        (v18 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v17)) != 0 &&
        *(_DWORD*)(v18 + 32) != 0) {
      v19 = 0;
      v8 = v16;
    }
    else {
      v42 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      v20 = (game_HasSkill(v16 + 218, (unsigned int*)&v42) & 1) == 0;
      v8 = v16;
      if (v20) {
        v19 = 6;
      }
      else {
        v19 = 12;
      }
    }
  }
  else {
    v19 = 0;
  }
  if (v19 >= a2) {
    v19 = a2;
  }
  v21 = a2 < 0;
  v22 = (__int64)v8;
  if (v21) {
    v23 = 0;
  }
  else {
    v23 = v19;
  }
  game_Unit_SetPollution((__int64)v8, v23);
  v24 = game_map_76c260(v12, v22);
  v25 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v25 + 8) == 1 &&
      (*(_BYTE*)(v25 + 9) & 1) == 0) {
    v26 = *(_QWORD*)(v22 + 440);
    if (v26 != 0 && *(unsigned __int8*)(v26 + 16) <= 8u &&
        game_map_UnitFlags_instance_ != 0) {
      v27 = *(unsigned __int8*)(v22 + 2088);
      if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v27) & 1) != 0) {
        *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v27) |= 2u;
      }
    }
  }
  if (v24 != 0) {
    game_script_StartWaitProc(v24);
    v28 = (_QWORD*)*v9;
    if (*v9 != 0 ||
        (v28 = *(_QWORD**)GameData_212eb20[0],
         *(_QWORD*)GameData_212eb20[0] != 0) ||
        (v28 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
      v29 = v28[10];
      if (v29 != 0) {
        v30 =
            *(_QWORD*)(*(_QWORD*)(v28[6] + 8 * ((v29 + v28[9] - 1) / 0x33uLL)) +
                       80 * ((v29 + v28[9] - 1) % 0x33uLL) + 72);
      }
      else {
        v30 = 0;
      }
    }
    else {
      v30 = game_hub_ProcHubSeqView_instance_;
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        v30 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
      }
    }
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v31 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v32 = 2)
             : (v32 = 3),
         (v32 & v31) != 0)) {
      v33 = *(float*)(v30 + 144);
      if (v33 < 0x1.0000000000000p+0f) {
        v33 = 0x1.0000000000000p+0f;
      }
      *(_WORD*)(v30 + 136) = *(_WORD*)(v30 + 136) & 0xFF97 | 0x20;
      *(float*)(v30 + 144) = v33;
    }
    v34 = *v4;
    v35 = *(_QWORD*)(v34 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 472LL))(v35);
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)(v36 + 24) + 448LL))(*(_QWORD*)(v36 + 24), 0);
  }
LABEL_55:
  v37 = *v4;
  v38 = *(
      _QWORD*)(v37 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v38 != 0) {
    v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 472LL))(v38);
  }
  else {
    v39 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v39 + 24) + 448LL))(
      *(_QWORD*)(v39 + 24), 1);
  result = *(_QWORD**)(v39 + 2240);
  *(_QWORD*)(v39 + 2240) = 0;
  if (result == (_QWORD*)(v39 + 2208)) {
    v40 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v40 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v40))((__int64)result);
}

_QWORD* unit_ability_SetPollution_117a1a0(__int64 a1, int a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* result;
  __int64* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;

  v4 = as_g_script_manager_ptr;
  v5 = *as_g_script_manager_ptr;
  v6 = *(
      _QWORD*)(v5 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 472LL))(v6);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v7 + 24) + 456LL))(
           *(_QWORD*)(v7 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc_alt1();
  }
  v8 = (_BYTE*)as_string_c_str(a1);
  if (*v8 == 0) {
    goto LABEL_73;
  }
  GameRoutine_682bc0(&v44, v8);
  if (v44 == 0) {
    goto LABEL_73;
  }
  v9 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v9 == 0) {
    goto LABEL_73;
  }
  v10 = 250;
  while (1) {
    v11 = *(_QWORD*)(v9 + 440);
    if (v11 != 0) {
      v12 = *(unsigned __int8*)(v11 + 16);
      if (v12 != 9 && *(_QWORD*)(v9 + 392) == v44) {
        break;
      }
    }
    v13 = *(_QWORD*)(v9 + 2664);
    if (v13 != 0) {
      v12 = *(unsigned __int8*)(v13 + 16);
      if (v12 != 9 && *(_QWORD*)(v9 + 2616) == v44) {
        v9 += 2224;
        break;
      }
    }
    v14 = *(_QWORD*)(v9 + 4888);
    if (v14 != 0) {
      v12 = *(unsigned __int8*)(v14 + 16);
      if (v12 != 9 && *(_QWORD*)(v9 + 4840) == v44) {
        v17 = 4448;
        goto LABEL_27;
      }
    }
    v15 = *(_QWORD*)(v9 + 7112);
    if (v15 != 0) {
      v12 = *(unsigned __int8*)(v15 + 16);
      if (v12 != 9 && *(_QWORD*)(v9 + 7064) == v44) {
        v17 = 6672;
        goto LABEL_27;
      }
    }
    v16 = *(_QWORD*)(v9 + 9336);
    if (v16 != 0) {
      v12 = *(unsigned __int8*)(v16 + 16);
      if (v12 != 9 && *(_QWORD*)(v9 + 9288) == v44) {
        v17 = 8896;
      LABEL_27:
        v9 += v17;
        break;
      }
    }
    v9 += 11120;
    v10 -= 5;
    if (v10 == 0) {
      goto LABEL_73;
    }
  }
  v19 = GameData_212cfb0[0];
  v20 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v20 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v20 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v21 = v20[10];
    if (v21 == 0) {
      goto LABEL_73;
    }
    v22 = *(_QWORD*)(*(_QWORD*)(v20[6] + 8 * ((v21 + v20[9] - 1) / 0x33uLL)) +
                     80 * ((v21 + v20[9] - 1) % 0x33uLL) + 72);
    if (v22 == 0) {
      goto LABEL_73;
    }
  }
  else {
    if (game_hub_ProcHubSeqView_instance_ == 0) {
      goto LABEL_73;
    }
    v22 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    if (v22 == 0) {
      goto LABEL_73;
    }
  }
  if (((1 << v12) & 0xF1) == 0 ||
      (v23 = game_820d50_alt1(2), game_GameModeData_instance_ != 0) &&
          (v24 = game_GameVariableTable_Find_alt1(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v23)) != 0 &&
          *(_DWORD*)(v24 + 32) != 0) {
    v25 = 0;
  }
  else {
    v45 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    if ((game_HasSkill_alt1(v9 + 1744, &v45) & 1) != 0) {
      v25 = 12;
    }
    else {
      v25 = 6;
    }
  }
  if (v25 >= a2) {
    v25 = a2;
  }
  if (a2 >= 0) {
    v26 = v25;
  }
  else {
    v26 = 0;
  }
  game_Unit_SetPollution_alt1(v9, v26);
  v27 = game_map_76c260_alt1(v22, v9);
  v28 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v28 + 8) == 1 &&
      (*(_BYTE*)(v28 + 9) & 1) == 0) {
    v29 = *(_QWORD*)(v9 + 440);
    if (v29 != 0 && *(unsigned __int8*)(v29 + 16) <= 8u &&
        game_map_UnitFlags_instance_ != 0) {
      v30 = *(unsigned __int8*)(v9 + 2088);
      if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v30) & 1) != 0) {
        *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v30) |= 2u;
      }
    }
  }
  if (v27 != 0) {
    game_script_StartWaitProc_alt1();
    v31 = (_QWORD*)*v19;
    if (*v19 != 0 ||
        (v31 = *(_QWORD**)GameData_212eb20[0],
         *(_QWORD*)GameData_212eb20[0] != 0) ||
        (v31 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
      v32 = v31[10];
      if (v32 != 0) {
        v33 =
            *(_QWORD*)(*(_QWORD*)(v31[6] + 8 * ((v32 + v31[9] - 1) / 0x33uLL)) +
                       80 * ((v32 + v31[9] - 1) % 0x33uLL) + 72);
      }
      else {
        v33 = 0;
      }
    }
    else {
      v33 = game_hub_ProcHubSeqView_instance_;
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        v33 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
      }
    }
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v34 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v35 = 2)
             : (v35 = 3),
         (v35 & v34) != 0)) {
      v36 = *(float*)(v33 + 144);
      if (v36 < 1.0f) {
        v36 = 1.0f;
      }
      *(_WORD*)(v33 + 136) = *(_WORD*)(v33 + 136) & 0xFF97 | 0x20;
      *(float*)(v33 + 144) = v36;
    }
    v37 = *v4;
    v38 = *(_QWORD*)(v37 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 472LL))(v38);
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)(v39 + 24) + 448LL))(*(_QWORD*)(v39 + 24), 0);
  }
LABEL_73:
  v40 = *v4;
  v41 = *(
      _QWORD*)(v40 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v41 != 0) {
    v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 472LL))(v41);
  }
  else {
    v42 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v42 + 24) + 448LL))(
      *(_QWORD*)(v42 + 24), 1);
  result = *(_QWORD**)(v42 + 2240);
  *(_QWORD*)(v42 + 2240) = 0;
  if (result == (_QWORD*)(v42 + 2208)) {
    v43 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v43 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v43))((__int64)result);
}

#pragma GCC visibility pop
