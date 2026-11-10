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
__int64** game_8aef60(__int64**, unsigned __int16*);
__int64* GameRoutine_d8bae0_alt1(__int64**, unsigned __int8*, __int64,
                                 __int64**) __asm__("GameRoutine_d8bae0");
__int64 GameRoutine_1377920(__int64, __int64);
__int64 GameRoutine_162aea0(__int64, _QWORD*);
__int64 GameRoutine_d859a0_alt1(unsigned __int8*) __asm__("GameRoutine_d859a0");
__int64 GameRoutine_d8b9c0_alt1(__int64,
                                unsigned __int8*) __asm__("GameRoutine_d8b9c0");
__int64 ItemSeq_8af940(__int64, unsigned __int16**, __int64, char**, char**,
                       char);
__int64 UnitItem_6e8800(__int64 result, unsigned __int64*);
__int64 as_string_c_str(__int64);
__int64 game_HashString(__int64 result);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64* game_vstring_kEmpty_ptr[2];
unsigned __int64 GameRoutine_887920_alt1(_QWORD*,
                                         __int64) __asm__("GameRoutine_887920");
__n128 hub_ui_RunReminderTelop();
void hub_ui_GainItemCount(__int64 a1, int a2);
__n128 hub_ui_TutorialForceShow(__int64 a1);

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

__n128 hub_ui_RunReminderTelop()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  void (*v15)(void);
  __n128 result;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  struct {
    _BYTE v20[16];
    __int64 v21;
  } v20_;
  __int64* v22;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 24) + 456LL))(
           *(_QWORD*)(v3 + 24)) &
       1) != 0) {
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
    }
    if (game_GameModeData_instance_ != 0) {
      v4 = *(_QWORD*)(game_GameModeData_instance_ + 24);
      if (v4 != 0) {
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v5 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
          do {
            v6 = v5;
            v5 = *(_QWORD*)(v5 + 40);
          } while (v5 != 0);
          if (GameRoutine_1377920(v6, v4) == 0) {
            goto LABEL_23;
          }
        }
        else if (GameRoutine_1377920(0, v4) == 0) {
          goto LABEL_23;
        }
        v7 = game_hub_ProcHubSeqView_instance_;
        v20_.v20[0] = 26;
        strcpy(&v20_.v20[1], "ReminderTelop");
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          GameRoutine_d8b9c0_alt1(game_hub_ProcHubSeqView_instance_ + 424,
                                  v20_.v20),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v8 = *(_QWORD*)(*(_QWORD*)(v7 + 416) + 40LL);
          if (v8 != 0) {
            v9 = 0;
            do {
              v8 = *(_QWORD*)(v8 + 40);
              ++v9;
            } while (v8 != 0);
            v22 = (__int64*)v20_.v20;
            *((_DWORD*)GameRoutine_d8bae0_alt1(
                  (__int64**)(v7 + 424), v20_.v20,
                  (__int64)std___1_piecewise_construct_ptr, &v22) +
              14) = v9,
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
          v10 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v10),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
    }
  }
LABEL_23:
  v20_.v20[0] = 26;
  strcpy(&v20_.v20[1], "ReminderTelop");
  v11 = GameRoutine_d859a0_alt1(v20_.v20),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v12 = *v0;
  v13 = *(
      _QWORD*)(v12 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v13 != 0) {
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 472LL))(v13),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v14 = 0;
  }
  v15 = *(void (**)(void))(**(_QWORD**)(v14 + 24) + 448LL),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v11 & 1) == 0) {
    v15(), result = COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
    v17 = *(_QWORD**)(v14 + 2240);
    *(_QWORD*)(v14 + 2240) = 0;
    if (v17 == (_QWORD*)(v14 + 2208)) {
      v18 = 32;
    }
    else {
      if (v17 == nullptr) {
        goto LABEL_33;
      }
      v18 = 40;
    }
    (*(void (**)(__int64))(*v17 + v18))((__int64)v17),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_33;
  }
  v15(), result =
             COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_33:
  if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  return result;
}

void hub_ui_GainItemCount(__int64 a1, int a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  void (*v26)(void);
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  struct {
    unsigned __int16* v33[2];
    __int64 v34;
  } v33_;
  unsigned __int16** v35;

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
    goto LABEL_33;
  }
  v32 = 0;
  v33_.v33[1] = (unsigned __int16*)as_string_c_str(a1);
  v33_.v33[0] = (unsigned __int16*)game_HashString((__int64)v33_.v33[1]);
  UnitItem_6e8800((__int64)&v32, (unsigned __int64*)v33_.v33);
  if ((_WORD)v32 != 0) {
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
    }
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v10 = v9;
        v9 = *(_QWORD*)(v9 + 40);
      } while (v9 != 0);
    }
    else {
      v10 = 0;
    }
    v14 = __OFSUB__(a2, 1);
    v15 = a2 - 1;
    v33_.v33[1] = nullptr;
    v33_.v34 = 0;
    v33_.v33[0] = nullptr;
    if (v15 < 0 == v14) {
    LABEL_14:
      game_8aef60((__int64**)v33_.v33, (unsigned __int16*)&v32);
      while (v15 != 0) {
        --v15;
        if ((_WORD)v32 != 0) {
          goto LABEL_14;
        }
      }
    }
    v16 = ItemSeq_8af940(v10, v33_.v33, 0, (char**)game_vstring_kEmpty_ptr[0],
                         (char**)game_vstring_kEmpty_ptr[0], 0);
    if (v33_.v33[0] != nullptr) {
      v33_.v33[1] = v33_.v33[0];
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
    }
    if (v16 != 0) {
      v18 = game_hub_ProcHubSeqView_instance_;
      LOBYTE(v33_.v33[0]) = 26;
      strcpy((char*)v33_.v33 + 1, "GainItemCount");
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        GameRoutine_d8b9c0_alt1(game_hub_ProcHubSeqView_instance_ + 424,
                                (unsigned __int8*)v33_.v33);
        v19 = *(_QWORD*)(*(_QWORD*)(v18 + 416) + 40LL);
        if (v19 != 0) {
          v20 = 0;
          do {
            v19 = *(_QWORD*)(v19 + 40);
            ++v20;
          } while (v19 != 0);
          v35 = v33_.v33;
          *((_DWORD*)GameRoutine_d8bae0_alt1(
                (__int64**)(v18 + 424), (unsigned __int8*)v33_.v33,
                (__int64)std___1_piecewise_construct_ptr, (__int64**)&v35) +
            14) = v20;
        }
      }
      if (((__int64)v33_.v33[0] & 1) != 0 && v33_.v34 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
      }
    }
  LABEL_33:
    LOBYTE(v33_.v33[0]) = 26;
    strcpy((char*)v33_.v33 + 1, "GainItemCount");
    v22 = GameRoutine_d859a0_alt1((unsigned __int8*)v33_.v33);
    v23 = *v4;
    v24 = *(_QWORD*)(v23 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v24 != 0) {
      v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 472LL))(v24);
    }
    else {
      v25 = 0;
    }
    v26 = *(void (**)(void))(**(_QWORD**)(v25 + 24) + 448LL);
    if ((v22 & 1) != 0) {
      v26();
    LABEL_43:
      if (((__int64)v33_.v33[0] & 1) != 0 && v33_.v34 != 0) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
      }
      return;
    }
    v26();
    v27 = *(_QWORD**)(v25 + 2240);
    *(_QWORD*)(v25 + 2240) = 0;
    if (v27 == (_QWORD*)(v25 + 2208)) {
      v28 = 32;
    }
    else {
      if (v27 == nullptr) {
        goto LABEL_43;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v27 + v28))((__int64)v27);
    goto LABEL_43;
  }
  v11 = *v4;
  v12 = *(
      _QWORD*)(v11 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v12 != 0) {
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
  }
  else {
    v13 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v13 + 24) + 448LL))(
      *(_QWORD*)(v13 + 24), 1);
  v30 = *(_QWORD**)(v13 + 2240);
  *(_QWORD*)(v13 + 2240) = 0;
  if (v30 == (_QWORD*)(v13 + 2208)) {
    v31 = 32;
  }
  else {
    if (v30 == nullptr) {
      return;
    }
    v31 = 40;
  }
  (*(void (**)(__int64))(*v30 + v31))((__int64)v30);
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
    result = (_QWORD*)(*(__int64 (**)(void*))(*result + v20))(result);
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

__n128 hub_ui_TutorialForceShow(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  void (*v17)(void);
  __n128 result;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  struct {
    _QWORD v22[2];
    __int64 v23;
  } v22_;
  __int64* v24;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v7 = v6;
        v6 = *(_QWORD*)(v6 + 40);
      } while (v6 != 0);
    }
    else {
      v7 = 0;
    }
    v8 = as_string_c_str(a1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_887920_alt1(v22_.v22, v8),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (GameRoutine_162aea0(v7, v22_.v22) != 0) {
      v9 = game_hub_ProcHubSeqView_instance_;
      LOBYTE(v22_.v22[0]) = 24;
      strcpy((char*)v22_.v22 + 1, "TutorialInfo");
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        GameRoutine_d8b9c0_alt1(game_hub_ProcHubSeqView_instance_ + 424,
                                (unsigned __int8*)v22_.v22),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v10 = *(_QWORD*)(*(_QWORD*)(v9 + 416) + 40LL);
        if (v10 != 0) {
          v11 = 0;
          do {
            v10 = *(_QWORD*)(v10 + 40);
            ++v11;
          } while (v10 != 0);
          v24 = v22_.v22;
          *((_DWORD*)GameRoutine_d8bae0_alt1(
                (__int64**)(v9 + 424), (unsigned __int8*)v22_.v22,
                (__int64)std___1_piecewise_construct_ptr, &v24) +
            14) = v11,
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      if ((v22_.v22[0] & 1) != 0 && v22_.v23 != 0) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
  LOBYTE(v22_.v22[0]) = 24;
  strcpy((char*)v22_.v22 + 1, "TutorialInfo");
  v13 = GameRoutine_d859a0_alt1((unsigned __int8*)v22_.v22),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v14 = *v2;
  v15 = *(
      _QWORD*)(v14 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v15 != 0) {
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 472LL))(v15),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v16 = 0;
  }
  v17 = *(void (**)(void))(**(_QWORD**)(v16 + 24) + 448LL),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v13 & 1) == 0) {
    v17(), result = COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
    v19 = *(_QWORD**)(v16 + 2240);
    *(_QWORD*)(v16 + 2240) = 0;
    if (v19 == (_QWORD*)(v16 + 2208)) {
      v20 = 32;
    }
    else {
      if (v19 == nullptr) {
        goto LABEL_28;
      }
      v20 = 40;
    }
    (*(void (**)(__int64))(*v19 + v20))((__int64)v19),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_28;
  }
  v17(), result =
             COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_28:
  if ((v22_.v22[0] & 1) != 0 && v22_.v23 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
  }
  return result;
}

#pragma GCC visibility pop
