#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_82ce80(_QWORD, _QWORD);
__int64 GameRoutine_88d500(__int64 result, __int64, char);
__int64 GameRoutine_898dc0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_1f9caf8;
extern __int64 (*GameData_1fa7d28[])();
extern __int64 GameData_21c9c18;
extern __int64 GameData_21f1670;
extern __int64 GameData_21f1678;
extern __int64 GameData_21f1680;
extern __int64 GameData_21f1688;
extern __int64 GameData_21f1698;
extern __int64 GameData_21f16a0;
extern __int64 GameData_21f16b0;
extern __int64 GameData_21f16b8;
extern __int64 GameData_21f16e0;
extern __int64 GameData_21f16e8;
extern __int64 GameData_21f16f0;
extern __int64 GameData_21f16f8;
extern __int64 GameData_21f1708;
extern __int64 GameData_21f1710;
extern __int64 GameData_21f1720;
extern __int64 GameData_21f1728;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 TimelineFile_Unknown5();
__int64 TimelineFile_890160(__int64 a1);
__int64 TimelineFile_890280(__int64 a1, __int64 a2);
__int16* TimelineFile_890840(__int16* result);
__int64 TimelineFile_890a20(__int64* a1);
__int64 TimelineFile_890c00(unsigned __int8 a1);
__int64 game_TimelineFile_GetFromBattle_lambda0_Invoke(__int64 result,
                                                       _QWORD* a2);

__int64 TimelineFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  if (GameData_21f1688 != 0) {
    v0 = (_QWORD*)GameData_21f1680;
    if (GameData_21f1680 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v3);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f1680 = 0;
    if (GameData_21f1678 != 0) {
      v5 = GameData_21f1678 & 7;
      if ((unsigned __int64)GameData_21f1678 >= 8) {
        v7 = GameData_21f1678 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21f1670 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21f1670 + 8 * v6 + 48) = 0;
          v8 = GameData_21f1670 + 8 * v6;
          v6 += 8;
          *(_QWORD*)(v8 + 56) = 0;
        } while (v7 != v6);
      }
      else {
        v6 = 0;
      }
      if (v5 != 0) {
        v9 = 8 * v6;
        do {
          --v5;
          *(_QWORD*)(GameData_21f1670 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21f1688 = 0;
  }
  GameData_21f16a0 = GameData_21f1698;
  GameData_21f16b8 = GameData_21f16b0;
  if (GameData_21f16f8 != 0) {
    v10 = (_QWORD*)GameData_21f16f0;
    if (GameData_21f16f0 != 0) {
      v11 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = v10;
        v10 = (_QWORD*)*v10;
        if ((v13[2] & 1) != 0 && v13[4] != 0) {
          if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v14);
        }
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v12);
      } while (v10 != nullptr);
    }
    GameData_21f16f0 = 0;
    if (GameData_21f16e8 != 0) {
      v15 = GameData_21f16e8 & 7;
      if ((unsigned __int64)GameData_21f16e8 >= 8) {
        v17 = GameData_21f16e8 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = 0;
        do {
          *(_QWORD*)(GameData_21f16e0 + 8 * v16) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 8) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 16) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 24) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 32) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 40) = 0;
          *(_QWORD*)(GameData_21f16e0 + 8 * v16 + 48) = 0;
          v18 = GameData_21f16e0 + 8 * v16;
          v16 += 8;
          *(_QWORD*)(v18 + 56) = 0;
        } while (v17 != v16);
      }
      else {
        v16 = 0;
      }
      if (v15 != 0) {
        v19 = 8 * v16;
        do {
          --v15;
          *(_QWORD*)(GameData_21f16e0 + v19) = 0;
          v19 += 8;
        } while (v15 != 0);
      }
    }
    GameData_21f16f8 = 0;
  }
  GameData_21f1710 = GameData_21f1708;
  GameData_21f1728 = GameData_21f1720;
  return result;
}

__int64 TimelineFile_890160(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  _QWORD v9[2];
  char* v10;

  v2 = strlen(a1);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v9[1] = v3;
    v10 = v4;
    v9[0] = v5 | 1;
  }
  else {
    LOBYTE(v9[0]) = 2 * v2;
    v4 = (char*)v9 + 1;
    if (v2 == 0) {
      goto LABEL_10;
    }
  }
  memcpy(v4, a1, v3);

LABEL_10:
  v4[v3] = 0;
  result = GameRoutine_898dc0(&GameData_21f16e0, v9);
  if ((v9[0] & 1) != 0 && v10 != nullptr) {
    v7 = result;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    result = v7;
  }
  if (result != 0) {
    return *(_QWORD*)(result + 40);
  }
  return result;
}

__int64 TimelineFile_890280(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  __int64 v13;
  __int64 v14;

  v3 = v11;
  v13 = 0;
  v11[0] = GameData_1fa7d28;
  v11[1] = &v13;
  v12 = v11;
  if (a1 == 0) {
    goto LABEL_14;
  }
  v4 = *(_QWORD*)(GameData_21c9c18 + 64);
  v5 = *(_QWORD*)(GameData_21c9c18 + 72);
  if (v4 == v5) {
    v3 = v11;
  LABEL_14:
    v9 = 32;
    goto LABEL_15;
  }
  do {
    v6 = *(__int64***)(*(_QWORD*)v4 + 40LL);
    v7 = *v6;
    v8 = v6[1];
    while (v7 != v8) {
      if (*(_QWORD*)(*v7 + 136) == a1) {
        v14 = *v7;
        if (v12 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        (*(void (**)(_QWORD*, __int64*))(*v12 + 48LL))(v12, &v14);
      }
      ++v7;
    }
    v4 += 8;
  } while (v4 != v5);
  v3 = v12;
  if (v12 == v11) {
    goto LABEL_14;
  }
  if (v12 != nullptr) {
    v9 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v3 + v9))(v3, a2);
  }
  return v13;
}

__int16* TimelineFile_890840(__int16* result)
{
  __int16* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int16* v10;
  __int64 v11;

  if (result[1] * *result * result[2] != 0) {
    v1 = result;
    v2 = GameData_21f1698;
    v3 = GameData_21f16a0;
    if (GameData_21f1698 != GameData_21f16a0) {
      do {
        v4 = *(_QWORD*)v2;
        if (*(_BYTE*)(*(_QWORD*)v2 + 32LL) == 0) {
          v5 = game_GameModeData_instance_;
          *(_BYTE*)(*(_QWORD*)(game_GameModeData_instance_ + 48) + 3932768LL) |=
              8u;
          v6 = *(_QWORD*)(v4 + 24);
          v7 = *(_QWORD*)(v6 + 112);
          v8 = *(_QWORD*)(v6 + 120);
          if (v7 != v8) {
            do {
              game_VariableManager_SetFlag(v7, 0);
              v7 += 16;
            } while (v7 != v8);
            v5 = game_GameModeData_instance_;
          }
          *(_BYTE*)(*(_QWORD*)(v5 + 48) + 3932768LL) &= ~8u;
        }
        v2 += 8;
      } while (v2 != v3);
      v2 = GameData_21f1698;
      v3 = GameData_21f16a0;
    }
    while (v2 != v3) {
      v9 = *(_QWORD*)v2;
      v10 = *(__int16**)(*(_QWORD*)v2 + 24LL);
      if (((__int64)v10[49] << 24) + ((__int64)v10[48] << 32) +
                  ((__int64)v10[50] << 18) + ((__int64)v10[51] << 12) +
                  ((__int64)v10[52] << 6) <
              (unsigned __int64)(((__int64)v1[1] << 24) + ((__int64)*v1 << 32) +
                                 ((__int64)v1[2] << 18) +
                                 ((__int64)v1[3] << 12) +
                                 ((__int64)v1[4] << 6)) &&
          *(_BYTE*)(v9 + 32) == 0) {
        GameRoutine_88d500(v9, 0, 0);
      }
      v2 += 8;
    }
    if (game_GameModeData_instance_ != 0) {
      v11 = game_GameModeData_instance_ + 40;
    }
    else {
      v11 = 0;
    }
    *(_BYTE*)(*(_QWORD*)(v11 + 8) + 3932768LL) |= 8u;
    result = (__int16*)GameRoutine_82ce80(*(_QWORD*)(v11 + 8), v1);
    *(_BYTE*)(*(_QWORD*)(v11 + 8) + 3932768LL) &= ~8u;
  }
  return result;
}

__int64 TimelineFile_890a20(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  int v21;

  v1 = *a1;
  v21 = 0;
  if (((*(__int64 (**)(__int64*, int*))(v1 + 16))(a1, &v21) & 1) == 0) {
  LABEL_24:
    v5 = 0;
    goto LABEL_25;
  }
  v3 = *((int*)a1 + 5);
  v4 = a1[1];
  v5 = 0;
  *((_DWORD*)a1 + 5) = v3 + 2;
  v6 = *(unsigned __int8*)(v4 + v3 + 1);
  *((_DWORD*)a1 + 5) = v3 + 3;
  v7 = v6 | ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 2) << 8);
  *((_DWORD*)a1 + 5) = v3 + 4;
  v8 = v7 | ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 3) << 16);
  *((_DWORD*)a1 + 5) = v3 + 5;
  v9 = v8 | ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 4) << 24);
  *((_DWORD*)a1 + 5) = v3 + 6;
  v10 = v9 | ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 5) << 32);
  *((_DWORD*)a1 + 5) = v3 + 7;
  v11 = v10 | ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 6) << 40);
  *((_DWORD*)a1 + 5) = v3 + 8;
  v12 = *(unsigned __int8*)(v4 + v3 + 7);
  *((_DWORD*)a1 + 5) = v3 + 9;
  v13 = v11 | (v12 << 48) |
        ((unsigned __int64)*(unsigned __int8*)(v4 + v3 + 8) << 56);
  if (v13 != 0 && GameData_21f1678 != 0 && GameData_21f1688 != 0) {
    v14 = GameData_21f1678 - 1;
    if ((GameData_21f1678 & (GameData_21f1678 - 1)) != 0) {
      v15 = v13;
      if (v13 >= GameData_21f1678) {
        v15 = v13 % GameData_21f1678;
      }
    }
    else {
      v15 = v14 & v13;
    }
    v16 = *(_QWORD**)(GameData_21f1670 + 8 * v15);
    if (v16 != nullptr) {
      v17 = (_QWORD*)*v16;
      if (v17 != nullptr) {
        if ((GameData_21f1678 & v14) == 0) {
          while (1) {
            v19 = v17[1];
            if (v13 == v19) {
              if (v17[2] == v13) {
                goto LABEL_26;
              }
            }
            else if ((v19 & v14) != v15) {
              goto LABEL_24;
            }
            v17 = (_QWORD*)*v17;
            v5 = 0;
            if (v17 == nullptr) {
              goto LABEL_25;
            }
          }
        }
        while (1) {
          v18 = v17[1];
          if (v13 == v18) {
            if (v17[2] == v13) {
            LABEL_26:
              v5 = v17[3];
              goto LABEL_25;
            }
          }
          else {
            if (v18 >= GameData_21f1678) {
              v18 %= (unsigned __int64)GameData_21f1678;
            }
            if (v18 != v15) {
              goto LABEL_24;
            }
          }
          v17 = (_QWORD*)*v17;
          v5 = 0;
          if (v17 == nullptr) {
            goto LABEL_25;
          }
        }
      }
    }
    goto LABEL_24;
  }

LABEL_25:
  (*(void (**)(__int64*, _QWORD))(*a1 + 24))(a1, 0);
  return v5;
}

__int64 TimelineFile_890c00(unsigned __int8 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = game_HashString(*(&GameData_1f9caf8 + a1));
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21c9c18 + 96);
    if (v2 != 0 && *(_QWORD*)(GameData_21c9c18 + 112) != 0) {
      v4 = v2 - 1;
      if ((v2 & (v2 - 1)) != 0) {
        v5 = v1;
        if (v1 >= v2) {
          v5 = v1 % v2;
        }
      }
      else {
        v5 = v4 & v1;
      }
      v6 = *(_QWORD**)(*(_QWORD*)(GameData_21c9c18 + 88) + 8 * v5);
      if (v6 != nullptr) {
        v7 = (_QWORD*)*v6;
        if (v7 != nullptr) {
          if ((v2 & v4) == 0) {
            while (1) {
              v10 = v7[1];
              if (v10 == v1) {
                if (v7[2] == v1) {
                  return v7[3];
                }
              }
              else if ((v10 & v4) != v5) {
                return 0;
              }
              v7 = (_QWORD*)*v7;
              v9 = 0;
              if (v7 == nullptr) {
                return v9;
              }
            }
          }
          do {
            v8 = v7[1];
            if (v8 == v1) {
              if (v7[2] == v1) {
                return v7[3];
              }
            }
            else {
              if (v8 >= v2) {
                v8 %= v2;
              }
              if (v8 != v5) {
                return 0;
              }
            }
            v7 = (_QWORD*)*v7;
          } while (v7 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 game_TimelineFile_GetFromBattle_lambda0_Invoke(__int64 result,
                                                       _QWORD* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(result + 8);
  if (*v2 == 0) {
    *v2 = *a2;
  }
  return result;
}

#pragma GCC visibility pop
