#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11311f0(__int64, __int64, int);
__int64 GameRoutine_1139a00(_QWORD);
__int64 GameRoutine_113b8c0(_QWORD, _QWORD);
__int64 GameRoutine_113be80(_QWORD, _QWORD);
__int64 GameRoutine_114ed00(_QWORD);
__int64 GameRoutine_11511f0(void);
__int64 GameRoutine_1151340(_QWORD);
__int64 GameRoutine_11516e0(void);
__int64 GameRoutine_1196e60(_QWORD);
__int64 GameRoutine_1197100(_QWORD);
__int64 GameRoutine_119a200(_QWORD, _QWORD);
__int64 GameRoutine_11de9c0(_QWORD);
__int64 GameRoutine_135a2e0(_QWORD, _QWORD);
__int64 GameRoutine_140bb40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_62c840(_QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_658d60(_QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_824ca0(void);
__int64 GameRoutine_82dd50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8679c0(void);
__int64 GameRoutine_9d57b0(_QWORD, _QWORD);
__int64 GameRoutine_9e6800(_QWORD, _QWORD);
__int64 GameRoutine_a4f6c0(_QWORD, _QWORD);
__int64 GameRoutine_a4f800(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4fa80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51280(_QWORD, _QWORD);
__int64 GameRoutine_a51640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f86840(_QWORD);
__int64 GameRoutine_f87240(_QWORD);
__int64 GameRoutine_f87cd0(_QWORD);
__int64 GameSubquestData_125d800(_QWORD, _QWORD);
__int64 MapInfo_824f10(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD, long double);
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212d750;
extern __int64 GameData_212dce8;
extern __int64 GameData_21c9fe0;
extern __int64 GameData_21cd128;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21fa5e0;
extern __int64 GameData_22190b8;
extern __int64 GameData_22197d8;
extern __int64 GameData_221b2e8;
extern __int64 GameData_22336e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212d460[6];
extern __int64* GameData_212fc38[2];
extern __int64* as_g_script_manager_ptr;
extern __int64* game_talk_g_window_layout_ptr[5];
extern __int64* msg_MessageManager_instance__ptr[2];
void __attribute__((noreturn)) GameRoutine_1138d60(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64* Seq_1132580(__int64* result, _QWORD* a2);
__int64 Seq_1133320(__int64 result);
__int64 Seq_11333e0(__int64 a1);
__int64 Seq_1133880(__int64 a1);
void Seq_1133a20(__int64 a1);
__int64 Seq_1133ad0(__int64 result);
__int64 Seq_1133d20(__int64 result);
_QWORD* Seq_1134340(_QWORD* result);
void Seq_11351f0();
__int64 Seq_1135d20(__int64 result);
__int64 Seq_1136ff0(__int64 a1);
__int64 Seq_1137060(__int64 a1);
__int64 Seq_11370d0(__int64 a1);
__int64 Seq_1137230(__int64 result);
__int64 Seq_11372b0(__int64 result);
__int64 Seq_1137330(__int64 a1);
__int64 Seq_11373a0(__int64 a1);
__int64 Seq_1137500(__int64 result);
__int64 Seq_11375e0(__int64 result);
__int64 Seq_1137710(__int64 a1);
__int64 Seq_1137760();
__int64 Seq_1137780(__int64 result);
__int64 Seq_11378c0(__int64 result);
__int64 Seq_1137a00(__int64 result);
unsigned __int64 Seq_1137a80(_QWORD* a1, __int64 a2);
__int64 Seq_1137d60(__int64 result);
__int64 Seq_Unknown4_1137da0();
__int64 Seq_Unknown5_1137e30();
__int64 Seq_Unknown12_1137fa0(__int64 a1);
void Seq_Unknown10();

__int64* Seq_1132580(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v4 = result;
  if ((unsigned __int64)v2 >= v3) {
    v8 = *result;
    v9 = (__int64)v2 - *result;
    v10 = 1 - 0x5555555555555555LL * (v9 >> 3);
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1138d60();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x555555555555555LL) {
      v13 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v14 = a2;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v13, 16, 0);
      a2 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = (_QWORD*)(v15 + v9);
    v17 = v15 + 24 * v13;
    v18 = a2[1];
    v7 = v15 + v9 + 24;
    *v16 = *a2;
    v16[1] = v18;
    v16[2] = a2[2];
    result = (__int64*)memcpy(v15, v8, v9);
    *v4 = v15;
    v4[1] = v7;
    v4[2] = v17;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v19 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v19, v8);
    }
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
  }
  v4[1] = v7;
  return result;
}

__int64 Seq_1133320(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  float v6;

  v1 = game_ProcGameSkipView_instance_;
  if (*(_BYTE*)(result + 205) == 1) {
    if (game_ProcGameSkipView_instance_ != 0) {
      v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v2 & 0x10) == 0) {
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v2 & 0xFFFFFFEE;
        result = GameRoutine_8224a0(25);
        if (game_GameModeData_instance_ != 0 &&
            (result = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), result)) != 0) {
          v3 = *(_DWORD*)(v1 + 156);
          if (*(_DWORD*)(result + 32) == 1) {
            if ((v3 & 4) != 0) {
              return result;
            }
            v4 = v3 | 4;
            goto LABEL_15;
          }
        }
        else {
          v3 = *(_DWORD*)(v1 + 156);
        }
        if ((v3 & 4) == 0) {
          return result;
        }
        v4 = v3 & 0xFFFFFFFB;
        goto LABEL_15;
      }
    }
  }
  else if (game_ProcGameSkipView_instance_ != 0) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v5 & 0x10) == 0) {
      v4 = v5 & 0xFFFFFFE2 | 1;
    LABEL_15:
      v6 = *(float*)(v1 + 224);
      *(_DWORD*)(v1 + 156) = v4;
      if (v6 > 0.0) {
        *(_DWORD*)(v1 + 224) = 0;
      }
    }
  }
  return result;
}

__int64 Seq_11333e0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  bool v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  char* v29;
  int v30;
  unsigned int v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  unsigned int v44;
  __int64 v45;
  int v46;
  float v47;
  float v48;
  __int64 v49;
  __int64 v50;
  char* v51;

  if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 1136);
  }
  else {
    v2 = a1 + 1121;
  }
  result = strncmp(v2, "MID_", 4);
  if ((_DWORD)result == 0) {
    v4 = msg_MessageManager_instance__ptr[0];
    result = GameRoutine_a4f6c0(*msg_MessageManager_instance__ptr[0], v2);
    v5 = *(unsigned __int8*)result;
    v6 = (v5 & 1) != 0 ? *(_QWORD*)(result + 8) : v5 >> 1;
    if (v6 != 0) {
      v7 = (_QWORD*)(a1 + 1096);
      if (a1 + 1096 != result) {
        if ((*(_BYTE*)v7 & 1) != 0) {
          if ((v5 & 1) != 0) {
            v10 = *(_QWORD*)(result + 16);
          }
          else {
            v10 = result + 1;
          }
          GameRoutine_64dde0(a1 + 1096, v10, v6);
        }
        else if ((v5 & 1) != 0) {
          GameRoutine_64df20(a1 + 1096, *(_QWORD*)(result + 16),
                             *(_QWORD*)(result + 8));
        }
        else {
          v8 = *(_QWORD*)result;
          v9 = *(_QWORD*)(result + 16);
          *(_QWORD*)(a1 + 1104) = *(_QWORD*)(result + 8);
          *(_QWORD*)(a1 + 1112) = v9;
          *v7 = v8;
        }
      }
      v11 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112) : a1 + 1097;
      result = GameRoutine_a4fa80(*v4, v11, v2);
      *(_DWORD*)(a1 + 1168) = result;
      if ((result & 0x80000000) == 0) {
        result = GameRoutine_a51280(*v4, v2);
        if ((unsigned int)(result - 1) <= 2) {
          v12 = *(_DWORD*)(a1 + 200);
          goto LABEL_26;
        }
        if ((_DWORD)result == 0) {
          v13 = (_DWORD*)(a1 + 200);
          v12 = *(_DWORD*)(a1 + 200);
          if (v12 == 0) {
            *v13 = 1;
            goto LABEL_27;
          }
        LABEL_26:
          v13 = (_DWORD*)(a1 + 200);
          if ((unsigned int)(v12 - 1) <= 1) {
          LABEL_27:
            result = GameRoutine_a51640(*v4, v2, v2);
          }
          GameRoutine_11de9c0(result);
          if ((unsigned int)(*v13 - 1) < 2) {
            goto LABEL_77;
          }
          v14 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112)
                                                : a1 + 1097;
          v15 = GameRoutine_a4fa80(*v4, v14, v2);
          v16 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112)
                                                : a1 + 1097;
          v17 = (__int64*)GameRoutine_a4f800(*v4, v16, (unsigned int)(v15 + 1));
          if ((*(_BYTE*)v17 & 1) != 0) {
            fw_text_String_CopyTerminated(&v49, v17[2], v17[1]);
          }
          else {
            v18 = *v17;
            v19 = (char*)v17[2];
            v50 = v17[1];
            v51 = v19;
            v49 = v18;
          }
          v20 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112)
                                                : a1 + 1097;
          if ((GameRoutine_11311f0(a1, v20, v15 + 1) & 1) != 0) {
            v21 = 1;
          }
          else {
            v22 = v15 + 2;
            do {
              if ((v49 & 1) != 0) {
                v29 = v51;
              }
              else {
                v29 = (char*)&v49 + 1;
              }
              v30 = GameRoutine_a51280(*v4, v29);
              v31 = ((unsigned int)(v30 - 9) < 0xC) & (0x80Fu >> (v30 - 9));
              if (v31 != 0) {
                break;
              }
              if ((*(_BYTE*)(a1 + 1096) & 1) != 0) {
                v32 = *(_QWORD*)(a1 + 1112);
              }
              else {
                v32 = a1 + 1097;
              }
              v33 = (__int64*)GameRoutine_a4f800(*v4, v32, v22);
              if (&v49 != v33) {
                v34 = *(unsigned __int8*)v33;
                if ((v49 & 1) != 0) {
                  v23 = (v34 & 1) == 0;
                  v24 = v34 >> 1;
                  if (v23) {
                    v25 = (char*)v33 + 1;
                  }
                  else {
                    v25 = (char*)v33[2];
                  }
                  if (v23) {
                    v26 = v24;
                  }
                  else {
                    v26 = v33[1];
                  }
                  GameRoutine_64dde0(&v49, v25, v26);
                }
                else if ((v34 & 1) != 0) {
                  GameRoutine_64df20(&v49, v33[2], v33[1]);
                }
                else {
                  v35 = *v33;
                  v36 = (char*)v33[2];
                  v50 = v33[1];
                  v51 = v36;
                  v49 = v35;
                }
              }
              v27 = v22;
              v28 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112)
                                                    : a1 + 1097;
              ++v22;
            } while ((GameRoutine_11311f0(a1, v28, v27) & 1) == 0);
            v21 = v31 ^ 1;
          }
          if ((v49 & 1) != 0 && v51 != nullptr) {
            v37 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v37 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v51);
          }
          if (v21 != 0) {
          LABEL_77:
            *(_BYTE*)(a1 + 206) = 0;
          }
          v38 = *(_DWORD*)(a1 + 200);
          *(_BYTE*)(a1 + 205) = v38 != 2;
          if (GameData_21fa5e0 != 0) {
            *(_BYTE*)(a1 + 205) = 1;
          }
          else if (v38 == 2) {
            v45 = game_ProcGameSkipView_instance_;
            if (game_ProcGameSkipView_instance_ != 0) {
              v46 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
              if ((v46 & 0x10) == 0) {
                v47 = *(float*)(game_ProcGameSkipView_instance_ + 224);
                *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
                    v46 & 0xFFFFFFE2 | 1;
                if (v47 > 0.0) {
                  *(_DWORD*)(v45 + 224) = 0;
                }
              }
            }
            goto LABEL_97;
          }
          v39 = game_ProcGameSkipView_instance_;
          if (game_ProcGameSkipView_instance_ == 0) {
            goto LABEL_97;
          }
          v40 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
          if ((v40 & 0x10) != 0) {
            goto LABEL_97;
          }
          *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v40 & 0xFFFFFFEE;
          v41 = GameRoutine_8224a0(25);
          if (game_GameModeData_instance_ != 0 &&
              (v42 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48), v41)) != 0) {
            v43 = *(_DWORD*)(v39 + 156);
            if (*(_DWORD*)(v42 + 32) == 1) {
              if ((v43 & 4) == 0) {
                v44 = v43 | 4;
                goto LABEL_95;
              }
              goto LABEL_97;
            }
          }
          else {
            v43 = *(_DWORD*)(v39 + 156);
          }
          if ((v43 & 4) != 0) {
            v44 = v43 & 0xFFFFFFFB;
          LABEL_95:
            v48 = *(float*)(v39 + 224);
            *(_DWORD*)(v39 + 156) = v44;
            if (v48 > 0.0) {
              *(_DWORD*)(v39 + 224) = 0;
            }
          }
        LABEL_97:
          GameRoutine_60a020(a1 + 1144, v2);
          GameRoutine_1139a00(a1 + 400);
          GameRoutine_1197100(a1 + 536);
          *(_BYTE*)(a1 + 776) = 0;
          result = GameRoutine_f86840(a1 + 784);
          if ((*(_BYTE*)(a1 + 1092) & 1) == 0) {
            result = GameRoutine_1553130(19);
            *(_DWORD*)(a1 + 1088) = 19;
            *(_BYTE*)(a1 + 1092) = 1;
          }
          return result;
        }
      }
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    return GameRoutine_657a50(a1, 1);
  }
  return result;
}

__int64 Seq_1133880(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(_BYTE*)(a1 + 1092) == 1) {
    GameRoutine_1553220(*(unsigned int*)(a1 + 1088));
    if (*(_BYTE*)(a1 + 1092) == 1) {
      *(_BYTE*)(a1 + 1092) = 0;
    }
  }
  if (GameData_21ec7b8 != 0 && game_gameui_Footer_instance_ != 0) {
    GameRoutine_1567000(game_gameui_Footer_instance_, 0);
  }
  result = GameRoutine_1196e60(a1 + 536);
  if (GameData_21fa5e0 == 0) {
    if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
      v3 = *(_QWORD*)(a1 + 1136);
    }
    else {
      v3 = a1 + 1121;
    }
    v6 = v3;
    v5 = game_HashString(v3);
    if (game_GameModeData_instance_ != 0) {
      GameRoutine_82dd50(game_GameModeData_instance_ + 40, &v5, 1);
    }
    if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 1136);
    }
    else {
      v4 = a1 + 1121;
    }
    v6 = v4;
    v5 = game_HashString(v4);
    return GameRoutine_9e6800(&v5, 1);
  }
  return result;
}

void Seq_1133a20(__int64 a1)
{
  __int64 v2;
  float v3;
  __int64 v4;
  float (**v5)(__int64);
  float v6;
  float v7;
  float v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  if (*GameData_212cfc8[0] == 0) {
    goto LABEL_6;
  }
  v2 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  v3 = *(float*)(v2 + 252);
  if (v3 == *(float*)(v2 + 248)) {
    goto LABEL_6;
  }
  v5 = *(float (***)(__int64))(v2 + 240);
  v4 = v2 + 240;
  v6 = (*v5)(v4);
  v7 = *(float*)(v4 + 8);
  v8 = v3 + v6;
  if (v7 < v8) {
    v8 = *(float*)(v4 + 8);
  }
  if (v8 == v7) {
  LABEL_6:
    v9 = *(unsigned __int8**)(a1 + 16);
    if (v9 != nullptr) {
      v10 = *v9;
      v11 = v10 > 0x10;
      v12 = (1 << v10) & 0x1CE00;
      if (!v11 && v12 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

__int64 Seq_1133ad0(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  v1 = *(unsigned __int8**)(result + 16);
  if (v1 != nullptr) {
    v2 = *v1;
    v3 = v2 > 0x10;
    v4 = (1 << v2) & 0x1CE00;
    if (!v3 && v4 != 0) {
      *(_WORD*)(result + 136) |= 0x80u;
    }
  }
  *(_WORD*)(result + 136) |= 8u;
  return result;
}

__int64 Seq_1133d20(__int64 result)
{
  int v1;
  __int64 v2;

  if (GameData_22336e0 != 0) {
    v1 = 2;
  }
  else {
    v1 = 0;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

_QWORD* Seq_1134340(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;

  if ((*((_BYTE*)result + 204) & 1) == 0 &&
      (GameData_21ec7b8 == 0 || (*(_BYTE*)(GameData_21ec7b8 + 288) & 1) == 0)) {
    v1 = result[12];
    v2 = result[13];
    v3 = ((v2 - v1) << 6) - 1;
    if (v2 == v1) {
      v3 = 0;
    }
    v4 = result[16] + result[15];
    if (v3 == v4) {
      v5 = result;
      GameRoutine_658d60(result + 11);
      v1 = v5[12];
      result = v5;
      v4 = v5[16] + v5[15];
    }
    *(_QWORD*)(*(_QWORD*)(v1 + 8 * (v4 >> 9)) + 8 * (v4 & 0x1FF)) = result[2];
    ++result[16];
    v6 = result[1];
    if (v6 != 0) {
      while (1) {
        if (*(_BYTE*)v6 == 2) {
          if (*(_DWORD*)(v6 + 32) == 4) {
            result[2] = v6;
            *((_WORD*)result + 68) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v6 == 0) {
          return result;
        }
        v6 += 64;
      }
    }
  }
  return result;
}

void Seq_11351f0()
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
  long double v9;
  __int64 v10;
  _BOOL8 v11;
  __int64* v12;
  long double v13;
  const char* v14;

  v0 = GameData_212d460[0];
  if (*GameData_212d460[0] == 0 ||
      *(_DWORD*)(*GameData_212d460[0] + 200) != 2) {
    v1 = GameRoutine_8224a0(19);
    if (game_GameModeData_instance_ != 0 &&
        (v2 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v1)) != 0 &&
        *(_DWORD*)(v2 + 32) == 1) {
      v3 = GameRoutine_8224a0(19);
      if (game_GameModeData_instance_ == 0) {
        return;
      }
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
      if (v4 == 0 || *(_DWORD*)(v4 + 32) != 1 ||
          (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 6) == 0) {
        return;
      }
      v5 = GameRoutine_8224a0(19);
      v6 = 0;
    }
    else {
      if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 4) == 0) {
        return;
      }
      v5 = GameRoutine_8224a0(19);
      v6 = 1;
    }
    game_VariableManager_SetFlag(v5, v6);
    v7 = *v0;
    if (v7 != 0) {
      v8 = GameRoutine_8224a0(19);
      v11 = game_GameModeData_instance_ != 0 &&
            (v10 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v8)) != 0 &&
            *(_DWORD*)(v10 + 32) == 1;
      *(_BYTE*)(v7 + 289) = v11;
      v12 = game_talk_g_window_layout_ptr[0];
      ui_LayoutAccessor_SetPaneVisible(game_talk_g_window_layout_ptr[0],
                                       "N_Auto", v11, v9);
      ui_LayoutAccessor_SetPaneVisible(v12, "N_Next",
                                       (*(_BYTE*)(v7 + 289) & 1) == 0, v13);
      if (*(_BYTE*)(v7 + 289) != 0) {
        v14 = "Auto";
      }
      else {
        v14 = "Wait";
      }
      GameRoutine_1562680(v12, v14, 1.0);
    }
  }
}

__int64 Seq_1135d20(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  __int16 v9;
  unsigned __int8* v10;
  unsigned int v11;
  int v12;
  __int16 v14;
  unsigned __int8* v15;
  unsigned int v16;
  int v17;

  if ((*(_BYTE*)(result + 1072) & 1) == 0) {
    v10 = *(unsigned __int8**)(result + 16);
    if (v10 != nullptr) {
      v11 = *v10;
      v6 = v11 > 0x10;
      v12 = (1 << v11) & 0x1CE00;
      if (!v6 && v12 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    v14 = *(_WORD*)(result + 136);
    goto LABEL_24;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v2 = (v1 & 8) != 0 ? 2 : 3;
    if ((v2 & v1) == 0) {
      v15 = *(unsigned __int8**)(result + 16);
      if (v15 != nullptr) {
        v16 = *v15;
        v6 = v16 > 0x10;
        v17 = (1 << v16) & 0x1CE00;
        if (!v6 && v17 != 0) {
          *(_WORD*)(result + 136) |= 0x80u;
        }
      }
      v14 = *(_WORD*)(result + 136);
      *(_BYTE*)(result + 1072) = 0;
    LABEL_24:
      *(_WORD*)(result + 136) = v14 | 8;
      return result;
    }
  }
  v3 = result;
  result = GameRoutine_1563280(game_talk_g_window_layout_ptr[0], "Out", 1);
  if ((result & 1) == 0) {
    result =
        GameRoutine_1563280(game_talk_g_window_layout_ptr[0], "FaceOut", 1);
    if ((result & 1) == 0) {
      v4 = *(unsigned __int8**)(v3 + 16);
      if (v4 != nullptr) {
        v5 = *v4;
        v6 = v5 > 0x10;
        v7 = (1 << v5) & 0x1CE00;
        if (!v6 && v7 != 0) {
          *(_WORD*)(v3 + 136) |= 0x80u;
        }
      }
      v9 = *(_WORD*)(v3 + 136);
      *(_BYTE*)(v3 + 1072) = 0;
      *(_WORD*)(v3 + 136) = v9 | 8;
    }
  }
  return result;
}

__int64 Seq_1136ff0(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_113b8c0(a1 + 400, a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137060(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_113be80(a1 + 400, a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_11370d0(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_119a200(a1 + 536, a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137230(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = result;
  if (*(_QWORD*)GameData_212d750 == 0 ||
      ((result = GameRoutine_135a2e0(result + 728, result + 728)) & 1) != 0) {
    v2 = *(unsigned __int8**)(v1 + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_11372b0(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = result;
  if (*(_QWORD*)GameData_212d750 == 0 ||
      ((result = GameRoutine_135a2e0(result + 728, result + 752)) & 1) != 0) {
    v2 = *(unsigned __int8**)(v1 + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137330(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_f87240(a1 + 784);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_11373a0(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_f87cd0(a1 + 784);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137500(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;
  bool v12;
  int v13;
  _BYTE v15[32];
  _BYTE* v16;

  v1 = result;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    v2 = *(unsigned __int8*)(result + 968);
    v3 = *(_QWORD*)(result + 984);
    v4 = result + 1016;
    v16 = nullptr;
    v5 = (v2 & 1) == 0;
    v6 = v2 >> 1;
    if (v5) {
      v7 = v1 + 969;
    }
    else {
      v7 = v3;
    }
    if (v5) {
      v8 = v6;
    }
    else {
      v8 = *(_QWORD*)(v1 + 976);
    }
    GameRoutine_140bb40(v4, v7, v8, v15);
    result = (__int64)v16;
    if (v16 == v15) {
      v9 = 32;
    }
    else {
      if (v16 == nullptr) {
        goto LABEL_13;
      }
      v9 = 40;
    }
    result = (*(__int64 (**)(void))(*(_QWORD*)v16 + v9))();
  }

LABEL_13:
  v10 = *(unsigned __int8**)(v1 + 16);
  if (v10 != nullptr) {
    v11 = *v10;
    v12 = v11 > 0x10;
    v13 = (1 << v11) & 0x1CE00;
    if (!v12 && v13 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v1 + 136) |= 8u;
  return result;
}

__int64 Seq_11375e0(__int64 result)
{
  unsigned int v1;
  int v2;
  int v3;
  bool v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;

  if (game_ProcGameSkipView_instance_ == 0 ||
      (v1 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) - 1) >
          2 ||
      (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v3 = 2)
           : (v3 = 3),
       (v3 & v2) == 0 ? (v4 = v1 >= 2) : (v4 = true), v4)) {
    v5 = *(unsigned __int8**)(result + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137710(__int64 a1)
{
  __int64* v2;
  __int64 result;

  v2 = GameData_212fc38[0];
  result = *GameData_212fc38[0];
  if (*GameData_212fc38[0] != 0) {
    *(_DWORD*)(result + 208) = *(_DWORD*)(a1 + 1168);
    GameRoutine_11511f0();
    return GameRoutine_1151340(*v2);
  }
  return result;
}

__int64 Seq_1137760()
{
  __int64 result;

  result = GameData_22336e0;
  if (GameData_22336e0 != 0) {
    return GameRoutine_11516e0();
  }
  return result;
}

__int64 Seq_1137780(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  int v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  v1 = GameData_22336e0;
  if (GameData_22336e0 == 0) {
    return result;
  }
  v2 = result;
  result = GameRoutine_114ed00(GameData_22336e0);
  if ((result & 1) != 0) {
    return result;
  }
  while (1) {
    do {
      v3 = *(unsigned int*)(v1 + 264);
      v5 = *(_QWORD*)(v1 + 216);
      v4 = *(_QWORD*)(v1 + 224);
      if ((v3 & 0x80000000) != 0 ||
          0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v3 ||
          (v6 = v5 + 160LL * (unsigned int)v3,
           (result = *(_QWORD*)(v6 + 80)) == 0)) {
        v7 = false;
        goto LABEL_10;
      }
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 48LL))(
          result, v5 + 160LL * (unsigned int)v3);
      ++*(_DWORD*)(v6 + 144);
    } while ((_DWORD)result == 2);
    if ((_DWORD)result == 3) {
      return result;
    }
    LODWORD(v3) = *(_DWORD*)(v1 + 264);
    v5 = *(_QWORD*)(v1 + 216);
    v4 = *(_QWORD*)(v1 + 224);
    v7 = (_DWORD)result == 1;
  LABEL_10:
    v8 = v3 + 1;
    *(_DWORD*)(v1 + 264) = v8;
    if (0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v8) {
      break;
    }
    if (v7) {
      return result;
    }
  }
  *(_DWORD*)(v1 + 264) = 0;
  v9 = *(unsigned __int8**)(v2 + 16);
  if (v9 != nullptr) {
    v10 = *v9;
    v11 = v10 > 0x10;
    v12 = (1 << v10) & 0x1CE00;
    if (!v11 && v12 != 0) {
      *(_WORD*)(v2 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v2 + 136) |= 8u;
  return result;
}

__int64 Seq_11378c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  int v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  v1 = GameData_22336e0;
  if (GameData_22336e0 == 0) {
    return result;
  }
  v2 = result;
  result = GameRoutine_114ed00(GameData_22336e0);
  if ((result & 1) != 0) {
    return result;
  }
  while (1) {
    do {
      v3 = *(unsigned int*)(v1 + 264);
      v5 = *(_QWORD*)(v1 + 240);
      v4 = *(_QWORD*)(v1 + 248);
      if ((v3 & 0x80000000) != 0 ||
          0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v3 ||
          (v6 = v5 + 160LL * (unsigned int)v3,
           (result = *(_QWORD*)(v6 + 80)) == 0)) {
        v7 = false;
        goto LABEL_10;
      }
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 48LL))(
          result, v5 + 160LL * (unsigned int)v3);
      ++*(_DWORD*)(v6 + 144);
    } while ((_DWORD)result == 2);
    if ((_DWORD)result == 3) {
      return result;
    }
    LODWORD(v3) = *(_DWORD*)(v1 + 264);
    v5 = *(_QWORD*)(v1 + 240);
    v4 = *(_QWORD*)(v1 + 248);
    v7 = (_DWORD)result == 1;
  LABEL_10:
    v8 = v3 + 1;
    *(_DWORD*)(v1 + 264) = v8;
    if (0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v8) {
      break;
    }
    if (v7) {
      return result;
    }
  }
  *(_DWORD*)(v1 + 264) = 0;
  v9 = *(unsigned __int8**)(v2 + 16);
  if (v9 != nullptr) {
    v10 = *v9;
    v11 = v10 > 0x10;
    v12 = (1 << v10) & 0x1CE00;
    if (!v11 && v12 != 0) {
      *(_WORD*)(v2 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v2 + 136) |= 8u;
  return result;
}

__int64 Seq_1137a00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;

  if ((GameData_21fa5e0 | *GameData_212fc38[0]) == 0) {
    v1 = result;
    if ((*(_BYTE*)(result + 1120) & 1) != 0) {
      v2 = *(_QWORD*)(result + 1136);
    }
    else {
      v2 = result + 1121;
    }
    Seq_1137a80(&v3, v2);
    return GameRoutine_9d57b0(v1, &v3);
  }
  return result;
}

unsigned __int64 Seq_1137a80(_QWORD* a1, __int64 a2)
{
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  result = game_HashString(a2);
  if (result != 0) {
    v4 = *(_QWORD*)(GameData_21c9fe0 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21c9fe0 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c9fe0 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v12 == result) {
                if (v9[2] == result) {
                  goto LABEL_27;
                }
              }
              else if ((v12 & v6) != v7) {
                goto LABEL_25;
              }
              v9 = (_QWORD*)*v9;
              v11 = 0;
              if (v9 == nullptr) {
                goto LABEL_26;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_27:
                v11 = v9[3];
                goto LABEL_26;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                break;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v11 = 0;

LABEL_26:
  *a1 = v11;
  return result;
}

__int64 Seq_1137d60(__int64 result)
{
  __int64 v1;

  if ((GameData_21fa5e0 | *GameData_212fc38[0]) == 0) {
    v1 = result;
    result = *(_QWORD*)GameData_212c7b0[0];
    if (*(_QWORD*)GameData_212c7b0[0] != 0) {
      return GameSubquestData_125d800(result, v1);
    }
  }
  return result;
}

__int64 Seq_Unknown4_1137da0()
{
  if (GameData_21cd128 != 0) {
    MapInfo_824f10();
  }
  if (GameData_22190b8 != 0) {
    *(_BYTE*)(GameData_22190b8 + 32) = 0;
    (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 32LL))(
        GameData_221b2e8);
    (*(void (**)(__int64))(*(_QWORD*)GameData_22197d8 + 32LL))(
        GameData_22197d8);
  }
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  return GameRoutine_8679c0();
}

__int64 Seq_Unknown5_1137e30()
{
  __int64 result;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (GameData_21cd128 != 0) {
    result = GameRoutine_824ca0();
  }
  if (GameData_22190b8 != 0 &&
      (GameData_21ec7b0 == 0 || (v1 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
       (*(_BYTE*)(v1 + 115) & 0x10) == 0) &&
      (*(_BYTE*)(GameData_22190b8 + 124) & 1) == 0) {
    *(_BYTE*)(GameData_22190b8 + 32) = 1;
    (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 24LL))(
        GameData_221b2e8);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_22197d8 + 24LL))(
        GameData_22197d8);
  }
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v7 = v5 == v6;
    v8 = v3 - 1 + v4;
    v9 = v8 >> 7;
    v10 = v8 & 0x7F;
    v11 = 16 * (v5 - v6) - 1;
    v12 = *(_QWORD*)(v6 + 8 * v9);
    if (v7) {
      v11 = 0;
    }
    v13 = v12 + 32 * v10;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v13 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v13 + 24);
    v14 = *(_QWORD*)(v13 + 16);
    v2[27] = v3 - 1;
    v2[20] = v14;
    if ((unsigned __int64)(v11 - (v3 + v4) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v15 = *(_QWORD*)(v5 - 8);
      if (v15 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
        v5 = v2[24];
      }
      v2[24] = v5 - 8;
    }
  }
  return result;
}

__int64 Seq_Unknown12_1137fa0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _BOOL4 v6;

  v2 = *(_QWORD*)(a1 + 40);
  if (v2 != 0 && (*(_WORD*)(v2 + 136) & 1) == 0) {
    GameRoutine_657a50(v2, 1);
  }
  result = GameRoutine_62c840(*as_g_script_manager_ptr, 0);
  if (*(_BYTE*)(a1 + 1092) == 1) {
    result = GameRoutine_1553220(*(unsigned int*)(a1 + 1088));
    if (*(_BYTE*)(a1 + 1092) == 1) {
      *(_BYTE*)(a1 + 1092) = 0;
    }
  }
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 16);
  if (v4 > v5) {
  LABEL_10:
    v6 = true;
    if (v4 == 0) {
      return result;
    }
  }
  else {
    while (*(_BYTE*)v5 != 2) {
      v5 -= 64LL;
      if (v4 > v5) {
        goto LABEL_10;
      }
    }
    v6 = *(_DWORD*)(v5 + 32) != 5;
    if (v4 == 0) {
      return result;
    }
  }
  if (v6) {
    while (1) {
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == 5) {
          *(_QWORD*)(a1 + 16) = v4;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v4 == 0) {
        return result;
      }
      v4 += 64LL;
    }
  }
  return result;
}

void Seq_Unknown10()
{
  __int64 v0;

  v0 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 0) {
    *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) = 1;
    *(_DWORD*)(v0 + 156) &= ~2u;
  }
}

#pragma GCC visibility pop
