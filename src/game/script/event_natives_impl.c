#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_97ee10(_QWORD, _QWORD);
__int64 TelopParts_17cc9d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_2241720;
extern __int64 game_GameModeData_instance_;
__int64 EventNatives_162b690(__int64* a1);
__int64 GameRoutine_1046b40(_QWORD);
__int64 GameRoutine_1153ca0(__int64, __int64);
__int64 GameRoutine_11912b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1191430(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_137a3c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_16f9b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16f9d60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1767d00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_177ba70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_763df0(_QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_9d57b0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cb2f70(_QWORD, _QWORD, _QWORD);
__int64 GameSideStoryData_12b5980(_QWORD, _QWORD, _QWORD);
__int64 HubTalkNatives_e14270(_QWORD, _QWORD);
__int64 Registration_a51fe0(_QWORD, _QWORD);
__int64 Seq_1137a80(_QWORD, _QWORD);
__int64 Situation_763f30(_QWORD);
__int64 StringIsEmpty_25eef0(_QWORD);
__int64 as_string_c_str(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 game_script_StartWaitProc(_QWORD);
__int64 game_script_WaitProc(void);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212cfb0[12];
extern __int64* GameData_212e348;
extern __int64* as_g_script_manager_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char** msg_MessageManager_empty_text__ptr;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 event_TelopWinLoseRule();
__int64 event_Dialog_118d790(__int64 a1);
__int64 event_Dialog_118da50(__int64 a1, _QWORD* a2);
__int64 event_Dialog_118dd90(__int64 a1, __int64 a2, __int64 a3);
__int64 event_Dialog_118e230(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4);
__int64 event_Demo(__int64 a1);
__int64 event_SideStoryReward(__int64 a1);
__int64 event_Tutorial(__int64 a1);
__int64 event_TelopJoin(__int64 a1);
_QWORD* event_NoticeNewAction(__int64 a1);
__int64 event_TelopMessage(__int64 a1);
__int64 event_TelopMessagePosBottom(unsigned __int8* a1);
_QWORD* event_TelopSkillAcquisition(__int64 a1, __int64 a2);
_QWORD* event_StrapGuide();
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_11cc300(void);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_2130228;
extern __int64* GameData_212d460[6];
void GameRoutine_11cf5a0();
__int64 event_Talk_118e9e0(__int64 a1);
__int64 event_Talk_118ecb0(__int64 a1, __int64 a2);
__int64 event_Talk_118efc0(__int64 a1, __int64 a2, __int64 a3);
__int64 event_Talk_118f300(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 event_Movie(__int64 a1);

__int64 event_TelopWinLoseRule()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD v33[2];
  char* v34;
  _QWORD v35[2];
  char* v36;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 24) + 456LL))(
      *(_QWORD*)(v3 + 24));
  if ((result & 1) == 0) {
    return game_script_WaitProc();
  }
  v5 = *GameData_212ce90[0];
  if (*GameData_212ce90[0] != 0) {
    v6 = GameRoutine_763df0(*GameData_212ce90[0]);
    v7 = strlen(v6);
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_64;
    }
    v8 = v7;
    if (v7 >= 0x17) {
      if ((v7 | 7) == 0x17) {
        v10 = 26;
      }
      else {
        v10 = (v7 | 7) + 1;
      }
      v9 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 16, 0);
      v35[1] = v8;
      v36 = v9;
      v35[0] = v10 | 1;
    }
    else {
      LOBYTE(v35[0]) = 2 * v7;
      v9 = (char*)v35 + 1;
      if (v7 == 0) {
      LABEL_13:
        v9[v8] = 0;
        v11 = Situation_763f30(v5);
        v7 = strlen(v11);
        if (v7 < 0xFFFFFFFFFFFFFFF7LL) {
          v12 = v7;
          if (v7 >= 0x17) {
            if ((v7 | 7) == 0x17) {
              v14 = 26;
            }
            else {
              v14 = (v7 | 7) + 1;
            }
            v13 = (char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v14, 16, 0);
            v33[1] = v12;
            v34 = v13;
            v33[0] = v14 | 1;
          }
          else {
            LOBYTE(v33[0]) = 2 * v7;
            v13 = (char*)v33 + 1;
            if (v7 == 0) {
              goto LABEL_22;
            }
          }
          memmove(v13, v11, v12);
        LABEL_22:
          v13[v12] = 0;
          v15 = GameData_212cfb0[0];
          v16 = (_QWORD*)*GameData_212cfb0[0];
          if (*GameData_212cfb0[0] != 0 ||
              (v16 = *(_QWORD**)GameData_212eb20[0],
               *(_QWORD*)GameData_212eb20[0] != 0) ||
              (v16 = *(_QWORD**)GameData_212eb28,
               *(_QWORD*)GameData_212eb28 != 0)) {
            v17 = v16[10];
            if (v17 != 0) {
              v18 = *(_QWORD*)(*(_QWORD*)(v16[6] +
                                          8 * ((v17 + v16[9] - 1) / 0x33uLL)) +
                               80 * ((v17 + v16[9] - 1) % 0x33uLL) + 72);
            LABEL_30:
              if ((v35[0] & 1) != 0) {
                v19 = v36;
              }
              else {
                v19 = (char*)v35 + 1;
              }
              if ((v33[0] & 1) != 0) {
                v20 = v34;
              }
              else {
                v20 = (char*)v33 + 1;
              }
              v21 = GameRoutine_137a3c0(v18, v19, v20);
              game_script_StartWaitProc(v21);
              v22 = (_QWORD*)*v15;
              if (*v15 != 0 ||
                  (v22 = *(_QWORD**)GameData_212eb20[0],
                   *(_QWORD*)GameData_212eb20[0] != 0) ||
                  (v22 = *(_QWORD**)GameData_212eb28,
                   *(_QWORD*)GameData_212eb28 != 0)) {
                v23 = v22[10];
                if (v23 != 0) {
                  v24 = *(_QWORD*)(*(_QWORD*)(v22[6] + 8 * ((v23 + v22[9] - 1) /
                                                            0x33uLL)) +
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
                  (((v25 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                    8) != 0
                       ? (v26 = 2)
                       : (v26 = 3),
                   (v26 & v25) != 0)) {
                v27 = *(float*)(v24 + 144);
                if (v27 < 1.0) {
                  v27 = 1.0;
                }
                *(_WORD*)(v24 + 136) = *(_WORD*)(v24 + 136) & 0xFF97 | 0x20;
                *(float*)(v24 + 144) = v27;
              }
              v28 = *v0;
              v29 = *(_QWORD*)(v28 +
                               8LL * (*(unsigned int (**)(__int64))(
                                         *(_QWORD*)as_g_thread_info + 72LL))(
                                         as_g_thread_info) +
                               4384);
              v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 472LL))(v29);
              result = (*(__int64 (**)(_QWORD, _QWORD))(
                  **(_QWORD**)(v30 + 24) + 448LL))(*(_QWORD*)(v30 + 24), 0);
              if ((v33[0] & 1) != 0 && v34 != nullptr) {
                v31 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v31 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v34);
              }
              if ((v35[0] & 1) != 0 && v36 != nullptr) {
                v32 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v32 = 56;
                }
                return nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v36);
              }
              return result;
            }
          }
          else if (game_hub_ProcHubSeqView_instance_ != 0) {
            v18 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
            goto LABEL_30;
          }
          v18 = 0;
          goto LABEL_30;
        }
      LABEL_64:
        String_60a1d0(v7);
      }
    }
    memmove(v9, v6, v8);
    goto LABEL_13;
  }
  return result;
}

__int64 event_Dialog_118d790(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v22[32];
  _BYTE* v23;
  __int64 v24;

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
    return game_script_WaitProc();
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
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v9 = 0;
LABEL_11:
  v24 = as_string_c_str(a1);
  v11 = game_menu_Dialog__CreateBind_game_menu_Dialog(v9, &v24);
  if (v11 != 0) {
    v23 = nullptr;
    GameRoutine_6680e0(v22, v11 + 1248);
    if (v23 == v22) {
      v12 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_17;
      }
      v12 = 40;
    }
    (*(void (**)(void*))(*(_QWORD*)v23 + v12))((void*)v23);
  }
LABEL_17:
  game_script_StartWaitProc(v11);
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
      (((v16 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v17 = 2)
           : (v17 = 3),
       (v17 & v16) != 0)) {
    v18 = *(float*)(v15 + 144);
    if (v18 < 1.0) {
      v18 = 1.0;
    }
    *(_WORD*)(v15 + 136) = *(_WORD*)(v15 + 136) & 0xFF97 | 0x20;
    *(float*)(v15 + 144) = v18;
  }
  v19 = *v2;
  v20 = *(
      _QWORD*)(v19 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 472LL))(v20);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v21 + 24) + 448LL))(
      *(_QWORD*)(v21 + 24), 0);
}

__int64 event_Dialog_118da50(__int64 a1, _QWORD* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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
  _QWORD v29[2];
  __int64 v30;
  _BYTE v31[32];
  _BYTE* v32;
  __int64 v33;

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
  v8 = *msg_MessageManager_instance__ptr[0];
  v9 = as_string_c_str(a2);
  if (v9 != 0) {
    v10 = v9;
  }
  else {
    v10 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(v8 + 14704, v10);
  if ((*(_BYTE*)a2 & 1) != 0) {
    GameRoutine_cb2f70(v29, a2[2], a2[1]);
  }
  else {
    v11 = a2[1];
    v29[0] = *a2;
    v29[1] = v11;
    v30 = a2[2];
  }
  v13 = GameData_212cfb0[0];
  v14 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v14 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v14 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v15 = v14[10];
    if (v15 != 0) {
      v16 = *(_QWORD*)(*(_QWORD*)(v14[6] + 8 * ((v15 + v14[9] - 1) / 0x33uLL)) +
                       80 * ((v15 + v14[9] - 1) % 0x33uLL) + 72);
      goto LABEL_17;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v16 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_17;
  }
  v16 = 0;
LABEL_17:
  v33 = as_string_c_str(a1);
  v17 = as_string_c_str(v29);
  v32 = nullptr;
  v18 = GameRoutine_11912b0(v16, &v33, v17, v31);
  if (v32 == v31) {
    v19 = 32;
    goto LABEL_21;
  }
  if (v32 != nullptr) {
    v19 = 40;
  LABEL_21:
    (*(void (**)(void*))(*(_QWORD*)v32 + v19))((void*)v32);
  }
  game_script_StartWaitProc(v18);
  if ((v29[0] & 1) != 0) {
    GameRoutine_25ec90(v30, v29[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  v20 = (_QWORD*)*v13;
  if (*v13 != 0 ||
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
  v26 = *v4;
  v27 = *(
      _QWORD*)(v26 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 472LL))(v27);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v28 + 24) + 448LL))(
      *(_QWORD*)(v28 + 24), 0);
}

__int64 event_Dialog_118dd90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  char** v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  float v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v44[2];
  __int64 v45;
  _QWORD v46[2];
  __int64 v47;
  _QWORD v48[4];
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;

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
  v10 = msg_MessageManager_instance__ptr[0];
  v11 = *msg_MessageManager_instance__ptr[0];
  v12 = as_string_c_str(a2);
  v13 = msg_MessageManager_empty_text__ptr;
  if (v12 != 0) {
    v14 = v12;
  }
  else {
    v14 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(v11 + 14704, v14);
  v15 = *v10;
  v16 = as_string_c_str(a3);
  if (v16 != 0) {
    v17 = v16;
  }
  else {
    v17 = (__int64)*v13;
  }
  GameRoutine_60a020(v15 + 14728, v17);
  if ((*(_BYTE*)a2 & 1) != 0) {
    GameRoutine_cb2f70(v46, *(_QWORD*)(a2 + 16), *(_QWORD*)(a2 + 8));
    if ((*(_BYTE*)a3 & 1) != 0) {
      goto LABEL_10;
    }
  LABEL_13:
    v20 = *(_QWORD*)(a3 + 8);
    v44[0] = *(_QWORD*)a3;
    v44[1] = v20;
    v45 = *(_QWORD*)(a3 + 16);
    goto LABEL_14;
  }
  v18 = *(_QWORD*)(a2 + 8);
  v46[0] = *(_QWORD*)a2;
  v46[1] = v18;
  v47 = *(_QWORD*)(a2 + 16);
  if ((*(_BYTE*)a3 & 1) == 0) {
    goto LABEL_13;
  }
LABEL_10:
  GameRoutine_cb2f70(v44, *(_QWORD*)(a3 + 16), *(_QWORD*)(a3 + 8));
LABEL_14:
  v21 = GameData_212cfb0[0];
  v22 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v22 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v22 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v23 = v22[10];
    if (v23 != 0) {
      v24 = *(_QWORD*)(*(_QWORD*)(v22[6] + 8 * ((v23 + v22[9] - 1) / 0x33uLL)) +
                       80 * ((v23 + v22[9] - 1) % 0x33uLL) + 72);
      goto LABEL_22;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v24 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_22;
  }
  v24 = 0;
LABEL_22:
  v25 = as_string_c_str(a1);
  v26 = as_string_c_str(v46);
  v27 = as_string_c_str(v44);
  if (v25 != 0) {
    v28 = v27;
    if (v26 != 0) {
      v29 = v26;
    }
    else {
      v29 = (__int64)*v13;
    }
    GameRoutine_60a020(*v10 + 14704, v29);
    if (v28 != 0) {
      v30 = (char*)v28;
    }
    else {
      v30 = *v13;
    }
    GameRoutine_60a020(*v10 + 14728, v30);
    v31 = *v10;
    v50 = -1;
    v51 = -1;
    v52 = -1;
    v53 = -1;
    v54 = -1;
    v55 = -1;
    v56 = -1;
    v57 = -1;
    v58 = -1;
    v59 = -1;
    v60 = -1;
    v61 = -1;
    v48[0] = GameData_212e348 + 2;
    v48[1] = 0xFFFF0001FFFF0000LL;
    v48[2] = 0xFFFF0004FFFF0002LL;
    v48[3] = 0xFFFF0006FFFF0005LL;
    v62 = 8;
    v49 = (_QWORD*)0xFFFF0008FFFF0007LL;
    v32 = GameRoutine_a4dbe0(v31, v25, 0, v48);
  }
  else {
    v32 = 0;
  }
  v48[0] = v32;
  v33 = HubTalkNatives_e14270(v24, v48);
  if (v33 != 0) {
    v49 = nullptr;
    GameRoutine_6680e0(v48, v33 + 1248);
    if (v49 == v48) {
      v34 = 32;
    }
    else {
      if (v49 == nullptr) {
        goto LABEL_37;
      }
      v34 = 40;
    }
    (*(void (**)(void*))(*v49 + v34))(v49);
  }
LABEL_37:
  game_script_StartWaitProc(v33);
  if ((v44[0] & 1) == 0) {
    if ((v46[0] & 1) == 0) {
      goto LABEL_39;
    }
  LABEL_42:
    GameRoutine_25ec90(v47, v46[0] & 0xFFFFFFFFFFFFFFFELL);
    v35 = (_QWORD*)*v21;
    if (*v21 != 0) {
      goto LABEL_45;
    }
    goto LABEL_43;
  }
  GameRoutine_25ec90(v45, v44[0] & 0xFFFFFFFFFFFFFFFELL);
  if ((v46[0] & 1) != 0) {
    goto LABEL_42;
  }
LABEL_39:
  v35 = (_QWORD*)*v21;
  if (*v21 == 0) {
  LABEL_43:
    v35 = *(_QWORD**)GameData_212eb20[0];
    if (*(_QWORD*)GameData_212eb20[0] == 0) {
      v35 = *(_QWORD**)GameData_212eb28;
      if (*(_QWORD*)GameData_212eb28 == 0) {
        v37 = game_hub_ProcHubSeqView_instance_;
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v37 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
        }
        goto LABEL_48;
      }
    }
  }
LABEL_45:
  v36 = v35[10];
  if (v36 != 0) {
    v37 = *(_QWORD*)(*(_QWORD*)(v35[6] + 8 * ((v36 + v35[9] - 1) / 0x33uLL)) +
                     80 * ((v36 + v35[9] - 1) % 0x33uLL) + 72);
  }
  else {
    v37 = 0;
  }
LABEL_48:
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v38 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v39 = 2)
           : (v39 = 3),
       (v39 & v38) != 0)) {
    v40 = *(float*)(v37 + 144);
    if (v40 < 1.0) {
      v40 = 1.0;
    }
    *(_WORD*)(v37 + 136) = *(_WORD*)(v37 + 136) & 0xFF97 | 0x20;
    *(float*)(v37 + 144) = v40;
  }
  v41 = *v6;
  v42 = *(
      _QWORD*)(v41 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v43 = (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 472LL))(v42);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v43 + 24) + 448LL))(
      *(_QWORD*)(v43 + 24), 0);
}

__int64 event_Dialog_118e230(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  char** v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  float v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD v45[2];
  __int64 v46;
  _QWORD v47[2];
  __int64 v48;
  _QWORD v49[2];
  __int64 v50;
  _BYTE v51[32];
  _BYTE* v52;
  __int64 v53;

  v8 = as_g_script_manager_ptr;
  v9 = *as_g_script_manager_ptr;
  v10 = *(
      _QWORD*)(v9 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 472LL))(v10);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v11 + 24) + 456LL))(
           *(_QWORD*)(v11 + 24)) &
       1) == 0) {
    return game_script_WaitProc();
  }
  v12 = msg_MessageManager_instance__ptr[0];
  v13 = *msg_MessageManager_instance__ptr[0];
  v14 = as_string_c_str(a2);
  v15 = msg_MessageManager_empty_text__ptr;
  if (v14 != 0) {
    v16 = v14;
  }
  else {
    v16 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(v13 + 14704, v16);
  v17 = *v12;
  v18 = as_string_c_str(a3);
  if (v18 != 0) {
    v19 = v18;
  }
  else {
    v19 = (__int64)*v15;
  }
  GameRoutine_60a020(v17 + 14728, v19);
  v20 = *v12;
  v21 = as_string_c_str(a4);
  if (v21 != 0) {
    v22 = v21;
  }
  else {
    v22 = (__int64)*v15;
  }
  GameRoutine_60a020(v20 + 14752, v22);
  if ((*(_BYTE*)a2 & 1) == 0) {
    v23 = a2[1];
    v49[0] = *a2;
    v49[1] = v23;
    v50 = a2[2];
    if ((*(_BYTE*)a3 & 1) != 0) {
      goto LABEL_13;
    }
  LABEL_17:
    v25 = *(_QWORD*)(a3 + 8);
    v47[0] = *(_QWORD*)a3;
    v47[1] = v25;
    v48 = *(_QWORD*)(a3 + 16);
    if ((*(_BYTE*)a4 & 1) != 0) {
      goto LABEL_14;
    }
  LABEL_18:
    v26 = *(_QWORD*)(a4 + 8);
    v45[0] = *(_QWORD*)a4;
    v45[1] = v26;
    v46 = *(_QWORD*)(a4 + 16);
    goto LABEL_19;
  }
  GameRoutine_cb2f70(v49, a2[2], a2[1]);
  if ((*(_BYTE*)a3 & 1) == 0) {
    goto LABEL_17;
  }
LABEL_13:
  GameRoutine_cb2f70(v47, *(_QWORD*)(a3 + 16), *(_QWORD*)(a3 + 8));
  if ((*(_BYTE*)a4 & 1) == 0) {
    goto LABEL_18;
  }
LABEL_14:
  GameRoutine_cb2f70(v45, *(_QWORD*)(a4 + 16), *(_QWORD*)(a4 + 8));
LABEL_19:
  v27 = GameData_212cfb0[0];
  v28 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v28 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v28 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v29 = v28[10];
    if (v29 != 0) {
      v30 = *(_QWORD*)(*(_QWORD*)(v28[6] + 8 * ((v29 + v28[9] - 1) / 0x33uLL)) +
                       80 * ((v29 + v28[9] - 1) % 0x33uLL) + 72);
      goto LABEL_27;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v30 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_27;
  }
  v30 = 0;
LABEL_27:
  v53 = as_string_c_str(a1);
  v31 = as_string_c_str(v49);
  v32 = as_string_c_str(v47);
  v33 = as_string_c_str(v45);
  v52 = nullptr;
  v34 = GameRoutine_1191430(v30, &v53, v31, v32, v33, v51);
  if (v52 == v51) {
    v35 = 32;
  }
  else {
    if (v52 == nullptr) {
      goto LABEL_32;
    }
    v35 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)v52 + v35))((void*)v52);
LABEL_32:
  game_script_StartWaitProc(v34);
  if ((v45[0] & 1) != 0) {
    GameRoutine_25ec90(v46, v45[0] & 0xFFFFFFFFFFFFFFFELL);
    if ((v47[0] & 1) == 0) {
    LABEL_34:
      if ((v49[0] & 1) == 0) {
        goto LABEL_35;
      }
    LABEL_39:
      GameRoutine_25ec90(v50, v49[0] & 0xFFFFFFFFFFFFFFFELL);
      v36 = (_QWORD*)*v27;
      if (*v27 != 0) {
        goto LABEL_42;
      }
      goto LABEL_40;
    }
  }
  else if ((v47[0] & 1) == 0) {
    goto LABEL_34;
  }
  GameRoutine_25ec90(v48, v47[0] & 0xFFFFFFFFFFFFFFFELL);
  if ((v49[0] & 1) != 0) {
    goto LABEL_39;
  }
LABEL_35:
  v36 = (_QWORD*)*v27;
  if (*v27 == 0) {
  LABEL_40:
    v36 = *(_QWORD**)GameData_212eb20[0];
    if (*(_QWORD*)GameData_212eb20[0] == 0) {
      v36 = *(_QWORD**)GameData_212eb28;
      if (*(_QWORD*)GameData_212eb28 == 0) {
        v38 = game_hub_ProcHubSeqView_instance_;
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v38 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
        }
        goto LABEL_45;
      }
    }
  }
LABEL_42:
  v37 = v36[10];
  if (v37 != 0) {
    v38 = *(_QWORD*)(*(_QWORD*)(v36[6] + 8 * ((v37 + v36[9] - 1) / 0x33uLL)) +
                     80 * ((v37 + v36[9] - 1) % 0x33uLL) + 72);
  }
  else {
    v38 = 0;
  }
LABEL_45:
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v39 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v40 = 2)
           : (v40 = 3),
       (v40 & v39) != 0)) {
    v41 = *(float*)(v38 + 144);
    if (v41 < 1.0) {
      v41 = 1.0;
    }
    *(_WORD*)(v38 + 136) = *(_WORD*)(v38 + 136) & 0xFF97 | 0x20;
    *(float*)(v38 + 144) = v41;
  }
  v42 = *v8;
  v43 = *(
      _QWORD*)(v42 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v44 = (*(__int64 (**)(__int64))(*(_QWORD*)v43 + 472LL))(v43);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v44 + 24) + 448LL))(
      *(_QWORD*)(v44 + 24), 0);
}

__int64 event_Talk_118e9e0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

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
    return game_script_WaitProc();
  }
  v6 = GameData_212cfb0[0];
  v7 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] == 0) {
    v7 = *(_QWORD**)GameData_212eb20[0];
    if (*(_QWORD*)GameData_212eb20[0] == 0) {
      v7 = *(_QWORD**)GameData_212eb28;
      if (*(_QWORD*)GameData_212eb28 == 0) {
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          goto LABEL_11;
        }
      LABEL_10:
        v9 = 0;
        goto LABEL_11;
      }
    }
  }
  v8 = v7[10];
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = *(_QWORD*)(*(_QWORD*)(v7[6] + 8 * ((v8 + v7[9] - 1) / 0x33uLL)) +
                  80 * ((v8 + v7[9] - 1) % 0x33uLL) + 72);
LABEL_11:
  v11 = as_string_c_str(a1);
  v12 = *GameData_212d460[0];
  if (*GameData_212d460[0] == 0) {
    if (v11 != 0) {
      v13 = v11;
      v12 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v12, v13, 0);
      ProcInst_657850(v12, GameData_2130228, "talk::Seq", 1, v9);
    }
    else {
      v12 = 0;
    }
  }
  game_script_StartWaitProc(v12);
  v14 = (_QWORD*)*v6;
  if (*v6 != 0 ||
      (v14 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v14 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v15 = v14[10];
    if (v15 != 0) {
      v16 = *(_QWORD*)(*(_QWORD*)(v14[6] + 8 * ((v15 + v14[9] - 1) / 0x33uLL)) +
                       80 * ((v15 + v14[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v16 = 0;
    }
  }
  else {
    v16 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v16 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v18 = 2)
           : (v18 = 3),
       (v18 & v17) != 0)) {
    v19 = *(float*)(v16 + 144);
    if (v19 < 1.0f) {
      v19 = 1.0f;
    }
    *(_WORD*)(v16 + 136) = *(_WORD*)(v16 + 136) & 0xFF97 | 0x20;
    *(float*)(v16 + 144) = v19;
  }
  v20 = *v2;
  v21 = *(
      _QWORD*)(v20 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 472LL))(v21);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v22 + 24) + 448LL))(
      *(_QWORD*)(v22 + 24), 0);
}

__int64 event_Talk_118ecb0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

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
  v8 = *msg_MessageManager_instance__ptr[0];
  v9 = as_string_c_str(a2);
  if (v9 != 0) {
    v10 = v9;
  }
  else {
    v10 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(v8 + 14824, v10);
  v11 = GameData_212cfb0[0];
  v12 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] == 0) {
    v12 = *(_QWORD**)GameData_212eb20[0];
    if (*(_QWORD*)GameData_212eb20[0] == 0) {
      v12 = *(_QWORD**)GameData_212eb28;
      if (*(_QWORD*)GameData_212eb28 == 0) {
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v14 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          goto LABEL_14;
        }
      LABEL_13:
        v14 = 0;
        goto LABEL_14;
      }
    }
  }
  v13 = v12[10];
  if (v13 == 0) {
    goto LABEL_13;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(v12[6] + 8 * ((v13 + v12[9] - 1) / 0x33uLL)) +
                   80 * ((v13 + v12[9] - 1) % 0x33uLL) + 72);
LABEL_14:
  v16 = as_string_c_str(a1);
  v17 = *GameData_212d460[0];
  if (*GameData_212d460[0] == 0) {
    if (v16 != 0) {
      v18 = v16;
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v17, v18, 0);
      ProcInst_657850(v17, GameData_2130228, "talk::Seq", 1, v14);
    }
    else {
      v17 = 0;
    }
  }
  game_script_StartWaitProc(v17);
  v19 = (_QWORD*)*v11;
  if (*v11 != 0 ||
      (v19 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v19 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v20 = v19[10];
    if (v20 != 0) {
      v21 = *(_QWORD*)(*(_QWORD*)(v19[6] + 8 * ((v20 + v19[9] - 1) / 0x33uLL)) +
                       80 * ((v20 + v19[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v21 = 0;
    }
  }
  else {
    v21 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v21 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v22 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v23 = 2)
           : (v23 = 3),
       (v23 & v22) != 0)) {
    v24 = *(float*)(v21 + 144);
    if (v24 < 1.0f) {
      v24 = 1.0f;
    }
    *(_WORD*)(v21 + 136) = *(_WORD*)(v21 + 136) & 0xFF97 | 0x20;
    *(float*)(v21 + 144) = v24;
  }
  v25 = *v4;
  v26 = *(
      _QWORD*)(v25 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 472LL))(v26);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v27 + 24) + 448LL))(
      *(_QWORD*)(v27 + 24), 0);
}

__int64 event_Talk_118efc0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  char** v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

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
  v10 = msg_MessageManager_instance__ptr[0];
  v11 = *msg_MessageManager_instance__ptr[0];
  v12 = as_string_c_str(a2);
  v13 = msg_MessageManager_empty_text__ptr;
  if (v12 != 0) {
    v14 = v12;
  }
  else {
    v14 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(v11 + 14824, v14);
  v15 = *v10;
  v16 = as_string_c_str(a3);
  if (v16 != 0) {
    v17 = v16;
  }
  else {
    v17 = (__int64)*v13;
  }
  GameRoutine_60a020(v15 + 14848, v17);
  v18 = GameData_212cfb0[0];
  v19 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] == 0) {
    v19 = *(_QWORD**)GameData_212eb20[0];
    if (*(_QWORD*)GameData_212eb20[0] == 0) {
      v19 = *(_QWORD**)GameData_212eb28;
      if (*(_QWORD*)GameData_212eb28 == 0) {
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v21 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          goto LABEL_17;
        }
      LABEL_16:
        v21 = 0;
        goto LABEL_17;
      }
    }
  }
  v20 = v19[10];
  if (v20 == 0) {
    goto LABEL_16;
  }
  v21 = *(_QWORD*)(*(_QWORD*)(v19[6] + 8 * ((v20 + v19[9] - 1) / 0x33uLL)) +
                   80 * ((v20 + v19[9] - 1) % 0x33uLL) + 72);
LABEL_17:
  v23 = as_string_c_str(a1);
  v24 = *GameData_212d460[0];
  if (*GameData_212d460[0] == 0) {
    if (v23 != 0) {
      v25 = v23;
      v24 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v24, v25, 0);
      ProcInst_657850(v24, GameData_2130228, "talk::Seq", 1, v21);
    }
    else {
      v24 = 0;
    }
  }
  game_script_StartWaitProc(v24);
  v26 = (_QWORD*)*v18;
  if (*v18 != 0 ||
      (v26 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v26 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v27 = v26[10];
    if (v27 != 0) {
      v28 = *(_QWORD*)(*(_QWORD*)(v26[6] + 8 * ((v27 + v26[9] - 1) / 0x33uLL)) +
                       80 * ((v27 + v26[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v28 = 0;
    }
  }
  else {
    v28 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v28 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v29 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v30 = 2)
           : (v30 = 3),
       (v30 & v29) != 0)) {
    v31 = *(float*)(v28 + 144);
    if (v31 < 1.0f) {
      v31 = 1.0f;
    }
    *(_WORD*)(v28 + 136) = *(_WORD*)(v28 + 136) & 0xFF97 | 0x20;
    *(float*)(v28 + 144) = v31;
  }
  v32 = *v6;
  v33 = *(
      _QWORD*)(v32 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 472LL))(v33);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v34 + 24) + 448LL))(
      *(_QWORD*)(v34 + 24), 0);
}

__int64 event_Talk_118f300(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  char** v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
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

  v8 = as_g_script_manager_ptr;
  v9 = *as_g_script_manager_ptr;
  v10 = *(
      _QWORD*)(v9 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 472LL))(v10);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v11 + 24) + 456LL))(
           *(_QWORD*)(v11 + 24)) &
       1) == 0) {
    return game_script_WaitProc();
  }
  v12 = msg_MessageManager_instance__ptr[0];
  v13 = *msg_MessageManager_instance__ptr[0];
  v14 = as_string_c_str(a2);
  v15 = msg_MessageManager_empty_text__ptr;
  if (v14 != 0) {
    v16 = v14;
  }
  else {
    v16 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(v13 + 14824, v16);
  v17 = *v12;
  v18 = as_string_c_str(a3);
  if (v18 != 0) {
    v19 = v18;
  }
  else {
    v19 = (__int64)*v15;
  }
  GameRoutine_60a020(v17 + 14848, v19);
  v20 = *v12;
  v21 = as_string_c_str(a4);
  if (v21 != 0) {
    v22 = v21;
  }
  else {
    v22 = (__int64)*v15;
  }
  GameRoutine_60a020(v20 + 14872, v22);
  v23 = GameData_212cfb0[0];
  v24 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] == 0) {
    v24 = *(_QWORD**)GameData_212eb20[0];
    if (*(_QWORD*)GameData_212eb20[0] == 0) {
      v24 = *(_QWORD**)GameData_212eb28;
      if (*(_QWORD*)GameData_212eb28 == 0) {
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v26 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          goto LABEL_20;
        }
      LABEL_19:
        v26 = 0;
        goto LABEL_20;
      }
    }
  }
  v25 = v24[10];
  if (v25 == 0) {
    goto LABEL_19;
  }
  v26 = *(_QWORD*)(*(_QWORD*)(v24[6] + 8 * ((v25 + v24[9] - 1) / 0x33uLL)) +
                   80 * ((v25 + v24[9] - 1) % 0x33uLL) + 72);
LABEL_20:
  v28 = as_string_c_str(a1);
  v29 = *GameData_212d460[0];
  if (*GameData_212d460[0] == 0) {
    if (v28 != 0) {
      v30 = v28;
      v29 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v29, v30, 0);
      ProcInst_657850(v29, GameData_2130228, "talk::Seq", 1, v26);
    }
    else {
      v29 = 0;
    }
  }
  game_script_StartWaitProc(v29);
  v31 = (_QWORD*)*v23;
  if (*v23 != 0 ||
      (v31 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v31 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v32 = v31[10];
    if (v32 != 0) {
      v33 = *(_QWORD*)(*(_QWORD*)(v31[6] + 8 * ((v32 + v31[9] - 1) / 0x33uLL)) +
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
  v37 = *v8;
  v38 = *(
      _QWORD*)(v37 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 472LL))(v38);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v39 + 24) + 448LL))(
      *(_QWORD*)(v39 + 24), 0);
}

__int64 event_Demo(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

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
    return game_script_WaitProc();
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
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v9 = 0;
LABEL_11:
  v11 = as_string_c_str(a1);
  v12 = GameRoutine_1153ca0(v9, v11);
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
      (((v16 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v17 = 2)
           : (v17 = 3),
       (v17 & v16) != 0)) {
    v18 = *(float*)(v15 + 144);
    if (v18 < 1.0) {
      v18 = 1.0;
    }
    *(_WORD*)(v15 + 136) = *(_WORD*)(v15 + 136) & 0xFF97 | 0x20;
    *(float*)(v15 + 144) = v18;
  }
  v19 = *v2;
  v20 = *(
      _QWORD*)(v19 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 472LL))(v20);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v21 + 24) + 448LL))(
      *(_QWORD*)(v21 + 24), 0);
}

__int64 event_Movie(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  char v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

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
    return game_script_WaitProc();
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
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v9 = 0;
LABEL_11:
  v11 = as_string_c_str(a1);
  v12 = GameRoutine_11cc300();
  v13 = ((__int64 (*)(__int64, __int64, _QWORD, _QWORD))GameRoutine_11cf5a0)(
      v9, v11, v12 & 1, 0);
  game_script_StartWaitProc(v13);
  v14 = (_QWORD*)*v6;
  if (*v6 != 0 ||
      (v14 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v14 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v15 = v14[10];
    if (v15 != 0) {
      v16 = *(_QWORD*)(*(_QWORD*)(v14[6] + 8 * ((v15 + v14[9] - 1) / 0x33uLL)) +
                       80 * ((v15 + v14[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v16 = 0;
    }
  }
  else {
    v16 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v16 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v18 = 2)
           : (v18 = 3),
       (v18 & v17) != 0)) {
    v19 = *(float*)(v16 + 144);
    if (v19 < 1.0f) {
      v19 = 1.0f;
    }
    *(_WORD*)(v16 + 136) = *(_WORD*)(v16 + 136) & 0xFF97 | 0x20;
    *(float*)(v16 + 144) = v19;
  }
  v20 = *v2;
  v21 = *(
      _QWORD*)(v20 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 472LL))(v21);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v22 + 24) + 448LL))(
      *(_QWORD*)(v22 + 24), 0);
}

__int64 event_SideStoryReward(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE v23[8];

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
    return game_script_WaitProc();
  }
  v6 = *(_QWORD*)GameData_212c7b8[0];
  v7 = GameData_212cfb0[0];
  v8 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v8 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v8 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v9 = v8[10];
    if (v9 != 0) {
      v10 = *(_QWORD*)(*(_QWORD*)(v8[6] + 8 * ((v9 + v8[9] - 1) / 0x33uLL)) +
                       80 * ((v9 + v8[9] - 1) % 0x33uLL) + 72);
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v10 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v10 = 0;
LABEL_11:
  v12 = as_string_c_str(a1);
  Registration_a51fe0(v23, v12);
  v13 = GameSideStoryData_12b5980(v6, v10, v23);
  game_script_StartWaitProc(v13);
  v14 = (_QWORD*)*v7;
  if (*v7 != 0 ||
      (v14 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v14 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v15 = v14[10];
    if (v15 != 0) {
      v16 = *(_QWORD*)(*(_QWORD*)(v14[6] + 8 * ((v15 + v14[9] - 1) / 0x33uLL)) +
                       80 * ((v15 + v14[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v16 = 0;
    }
  }
  else {
    v16 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v16 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v18 = 2)
           : (v18 = 3),
       (v18 & v17) != 0)) {
    v19 = *(float*)(v16 + 144);
    if (v19 < 1.0) {
      v19 = 1.0;
    }
    *(_WORD*)(v16 + 136) = *(_WORD*)(v16 + 136) & 0xFF97 | 0x20;
    *(float*)(v16 + 144) = v19;
  }
  v20 = *v2;
  v21 = *(
      _QWORD*)(v20 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 472LL))(v21);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v22 + 24) + 448LL))(
      *(_QWORD*)(v22 + 24), 0);
}

__int64 event_Tutorial(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v22[8];

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
    return game_script_WaitProc();
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
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v9 = 0;
LABEL_11:
  v11 = as_string_c_str(a1);
  GameRoutine_887920(v22, v11);
  v12 = GameRoutine_162aea0(v9, v22);
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
      (((v16 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v17 = 2)
           : (v17 = 3),
       (v17 & v16) != 0)) {
    v18 = *(float*)(v15 + 144);
    if (v18 < 1.0) {
      v18 = 1.0;
    }
    *(_WORD*)(v15 + 136) = *(_WORD*)(v15 + 136) & 0xFF97 | 0x20;
    *(float*)(v15 + 144) = v18;
  }
  v19 = *v2;
  v20 = *(
      _QWORD*)(v19 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 472LL))(v20);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v21 + 24) + 448LL))(
      *(_QWORD*)(v21 + 24), 0);
}

__int64 event_TelopJoin(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  result = StringIsEmpty_25eef0(a1);
  if ((result & 1) != 0) {
    return result;
  }
  v3 = as_g_script_manager_ptr;
  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 24) + 456LL))(
           *(_QWORD*)(v6 + 24)) &
       1) == 0) {
    return game_script_WaitProc();
  }
  v7 = as_string_c_str(a1);
  v8 = game_HashString(v7);
  if (v8 != 0) {
    v9 = *(_QWORD*)(*GameData_212c890[0] + 96);
    if (v9 != 0 && *(_QWORD*)(*GameData_212c890[0] + 112) != 0) {
      v11 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v12 = v8;
        if (v8 >= v9) {
          v12 = v8 % v9;
        }
      }
      else {
        v12 = v11 & v8;
      }
      v13 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v12);
      if (v13 != nullptr) {
        v14 = (_QWORD*)*v13;
        if (v14 != nullptr) {
          if ((v9 & v11) == 0) {
            while (1) {
              v17 = v14[1];
              if (v17 == v8) {
                if (v14[2] == v8) {
                  goto LABEL_55;
                }
              }
              else if ((v17 & v11) != v12) {
                goto LABEL_28;
              }
              v14 = (_QWORD*)*v14;
              v16 = 0;
              if (v14 == nullptr) {
                goto LABEL_29;
              }
            }
          }
          do {
            v15 = v14[1];
            if (v15 == v8) {
              if (v14[2] == v8) {
              LABEL_55:
                v16 = v14[3];
                goto LABEL_29;
              }
            }
            else {
              if (v15 >= v9) {
                v15 %= v9;
              }
              if (v15 != v12) {
                break;
              }
            }
            v14 = (_QWORD*)*v14;
          } while (v14 != nullptr);
        }
      }
    }
  }
LABEL_28:
  v16 = 0;
LABEL_29:
  v18 = GameData_212cfb0[0];
  v19 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v19 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v19 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v20 = v19[10];
    if (v20 != 0) {
      v21 = *(_QWORD*)(*(_QWORD*)(v19[6] + 8 * ((v20 + v19[9] - 1) / 0x33uLL)) +
                       80 * ((v20 + v19[9] - 1) % 0x33uLL) + 72);
      goto LABEL_37;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v21 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_37;
  }
  v21 = 0;
LABEL_37:
  v22 = GameRoutine_177ba70(v21, v16, 1);
  game_script_StartWaitProc(v22);
  v23 = (_QWORD*)*v18;
  if (*v18 != 0 ||
      (v23 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v23 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v24 = v23[10];
    if (v24 != 0) {
      v25 = *(_QWORD*)(*(_QWORD*)(v23[6] + 8 * ((v24 + v23[9] - 1) / 0x33uLL)) +
                       80 * ((v24 + v23[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v25 = 0;
    }
  }
  else {
    v25 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v25 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v26 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v27 = 2)
           : (v27 = 3),
       (v27 & v26) != 0)) {
    v28 = *(float*)(v25 + 144);
    if (v28 < 1.0) {
      v28 = 1.0;
    }
    *(_WORD*)(v25 + 136) = *(_WORD*)(v25 + 136) & 0xFF97 | 0x20;
    *(float*)(v25 + 144) = v28;
  }
  v29 = *v3;
  v30 = *(
      _QWORD*)(v29 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 472LL))(v30);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v31 + 24) + 448LL))(
      *(_QWORD*)(v31 + 24), 0);
}

_QWORD* event_NoticeNewAction(__int64 a1)
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
  _BYTE v26[8];

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
  if (*GameData_212cfb0[0] != 0 ||
      (v7 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v7 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v8 = v7[10];
    if (v8 != 0) {
      v9 = *(_QWORD*)(*(_QWORD*)(v7[6] + 8 * ((v8 + v7[9] - 1) / 0x33uLL)) +
                      80 * ((v8 + v7[9] - 1) % 0x33uLL) + 72);
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v9 = 0;
LABEL_11:
  v11 = as_string_c_str(a1);
  Seq_1137a80(v26, v11);
  v12 = GameRoutine_9d57b0(v9, v26);
  if (v12 != 0) {
    game_script_StartWaitProc(v12);
    v13 = (_QWORD*)*v6;
    if (*v6 != 0 ||
        (v13 = *(_QWORD**)GameData_212eb20[0],
         *(_QWORD*)GameData_212eb20[0] != 0) ||
        (v13 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
      v14 = v13[10];
      if (v14 != 0) {
        v15 =
            *(_QWORD*)(*(_QWORD*)(v13[6] + 8 * ((v14 + v13[9] - 1) / 0x33uLL)) +
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
      if (v21 < 1.0f) {
        v21 = 1.0f;
      }
      *(_WORD*)(v15 + 136) = *(_WORD*)(v15 + 136) & 0xFF97 | 0x20;
      *(float*)(v15 + 144) = v21;
    }
    v22 = *v2;
    v23 = *(_QWORD*)(v22 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 472LL))(v23);
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)(v24 + 24) + 448LL))(*(_QWORD*)(v24 + 24), 0);
  }
  else {
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
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v25))((__int64)result);
  }
}

__int64 event_TelopMessage(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[2];
  _QWORD v22[2];

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
    return game_script_WaitProc();
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
      goto LABEL_11;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_11;
  }
  v9 = 0;
LABEL_11:
  v22[0] = as_string_c_str(a1);
  v22[1] = strlen(v22[0]);
  v21[0] = &GameData_1a9f09e;
  v21[1] = 0;
  v11 = GameRoutine_16f9b50(v9, v22, v21);
  *(_BYTE*)(v11 + 332) = 1;
  game_script_StartWaitProc(v11);
  v12 = (_QWORD*)*v6;
  if (*v6 != 0 ||
      (v12 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v12 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v13 = v12[10];
    if (v13 != 0) {
      v14 = *(_QWORD*)(*(_QWORD*)(v12[6] + 8 * ((v13 + v12[9] - 1) / 0x33uLL)) +
                       80 * ((v13 + v12[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v14 = 0;
    }
  }
  else {
    v14 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v14 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v15 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v16 = 2)
           : (v16 = 3),
       (v16 & v15) != 0)) {
    v17 = *(float*)(v14 + 144);
    if (v17 < 1.0) {
      v17 = 1.0;
    }
    *(_WORD*)(v14 + 136) = *(_WORD*)(v14 + 136) & 0xFF97 | 0x20;
    *(float*)(v14 + 144) = v17;
  }
  v18 = *v2;
  v19 = *(
      _QWORD*)(v18 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 472LL))(v19);
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v20 + 24) + 448LL))(
      *(_QWORD*)(v20 + 24), 0);
}

__int64 event_TelopMessagePosBottom(unsigned __int8* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v11;
  unsigned __int8* v12;
  bool v13;
  unsigned __int64 v14;
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
  _QWORD v25[2];
  _QWORD v26[2];

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
    return game_script_WaitProc();
  }
  v6 = GameData_212cfb0[0];
  v7 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] == 0) {
    v7 = *(_QWORD**)GameData_212eb20[0];
    if (*(_QWORD*)GameData_212eb20[0] == 0) {
      v7 = *(_QWORD**)GameData_212eb28;
      if (*(_QWORD*)GameData_212eb28 == 0) {
        if (game_hub_ProcHubSeqView_instance_ != 0) {
          v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          goto LABEL_11;
        }
      LABEL_10:
        v9 = 0;
        goto LABEL_11;
      }
    }
  }
  v8 = v7[10];
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = *(_QWORD*)(*(_QWORD*)(v7[6] + 8 * ((v8 + v7[9] - 1) / 0x33uLL)) +
                  80 * ((v8 + v7[9] - 1) % 0x33uLL) + 72);
LABEL_11:
  v11 = *a1;
  v12 = *((unsigned __int8**)a1 + 2);
  v13 = (v11 & 1) == 0;
  v14 = v11 >> 1;
  if (v13) {
    v12 = a1 + 1;
  }
  if (!v13) {
    v14 = *((_QWORD*)a1 + 1);
  }
  v26[0] = v12;
  v26[1] = v14;
  v25[0] = &GameData_1a9f09e;
  v25[1] = 0;
  v15 = GameRoutine_16f9d60(v9, v26, v25);
  *(_BYTE*)(v15 + 332) = 1;
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
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v24 + 24) + 448LL))(
      *(_QWORD*)(v24 + 24), 0);
}

_QWORD* event_TelopSkillAcquisition(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* result;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

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
    return (_QWORD*)game_script_WaitProc();
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
  }
  v8 = GameData_212cfb0[0];
  v9 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v9 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v9 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v10 = v9[10];
    if (v10 != 0) {
      v11 = *(_QWORD*)(*(_QWORD*)(v9[6] + 8 * ((v10 + v9[9] - 1) / 0x33uLL)) +
                       80 * ((v10 + v9[9] - 1) % 0x33uLL) + 72);
      goto LABEL_14;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v11 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_14;
  }
  v11 = 0;
LABEL_14:
  v28 = as_string_c_str(a1);
  v27 = as_string_c_str(a2);
  v13 = GameRoutine_1767d00(v11, &v28, &v27);
  if (v13 != 0) {
    game_script_StartWaitProc(v13);
    v14 = (_QWORD*)*v8;
    if (*v8 != 0 ||
        (v14 = *(_QWORD**)GameData_212eb20[0],
         *(_QWORD*)GameData_212eb20[0] != 0) ||
        (v14 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
      v15 = v14[10];
      if (v15 != 0) {
        v16 =
            *(_QWORD*)(*(_QWORD*)(v14[6] + 8 * ((v15 + v14[9] - 1) / 0x33uLL)) +
                       80 * ((v15 + v14[9] - 1) % 0x33uLL) + 72);
      }
      else {
        v16 = 0;
      }
    }
    else {
      v16 = game_hub_ProcHubSeqView_instance_;
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        v16 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
      }
    }
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v20 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v21 = 2)
             : (v21 = 3),
         (v21 & v20) != 0)) {
      v22 = *(float*)(v16 + 144);
      if (v22 < 1.0f) {
        v22 = 1.0f;
      }
      *(_WORD*)(v16 + 136) = *(_WORD*)(v16 + 136) & 0xFF97 | 0x20;
      *(float*)(v16 + 144) = v22;
    }
    v23 = *v4;
    v24 = *(_QWORD*)(v23 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 472LL))(v24);
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)(v25 + 24) + 448LL))(*(_QWORD*)(v25 + 24), 0);
  }
  else {
    v17 = *v4;
    v18 = *(_QWORD*)(v17 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v18 != 0) {
      v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 472LL))(v18);
    }
    else {
      v19 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v19 + 24) + 448LL))(
        *(_QWORD*)(v19 + 24), 1);
    result = *(_QWORD**)(v19 + 2240);
    *(_QWORD*)(v19 + 2240) = 0;
    if (result == (_QWORD*)(v19 + 2208)) {
      v26 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v26 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v26))((__int64)result);
  }
}

_QWORD* event_StrapGuide()
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
  v9 = GameRoutine_1046b40(v7);
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

__int64 EventNatives_162b690(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;

  v1 = *a1;
  if (*a1 == 0) {
    return 0;
  }
  v3 = *a1;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_7;
  }
  v4 = a1;
  v5 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   v1);
  if (v5 != 0 && *(_BYTE*)(v5 + 32) != 0) {
    return 0;
  }
  v3 = *v4;
  if (*v4 != 0) {
  LABEL_7:
    GameRoutine_97ee10(v3, 1);
  }
  v7 = **(__int64***)(v1 + 40);
  if ((int)((*(_QWORD*)(*(_QWORD*)(v1 + 40) + 8LL) - (_QWORD)v7) >> 3) >= 1 &&
      (v8 = *v7) != 0) {
    v9 = *(_QWORD*)(v8 + 40);
  }
  else {
    v9 = 0;
  }
  if (GameData_2241720 != 0) {
    TelopParts_17cc9d0(GameData_2241720, "MID_Sys_InfoTelop_Tutorial_Add", 1,
                       v9, 0, 0, 0, 0);
  }
  return 1;
}

#pragma GCC visibility pop
