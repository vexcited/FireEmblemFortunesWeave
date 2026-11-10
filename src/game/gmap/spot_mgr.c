#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1325de0(__int64);
__int64 GameRoutine_13261c0(__int64);
__int64 GameRoutine_1326420(__int64);
__int64 GameRoutine_1326c00(__int64 result, __int64);
__int64 GameRoutine_1328d60(__int64);
__int64 GameRoutine_828f50(_QWORD, _QWORD);
__int64 GameRoutine_ae07e0(_QWORD, _QWORD);
__int64 TroopMgr_1345be0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(void);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 game_gmap_TroopMgr_CountPlayerTroop_1349100(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a86d15;
extern _UNKNOWN GameData_1aa9d24;
extern _UNKNOWN GameData_1aad978;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1ad7ce3;
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_202bd38[])();
extern __int64 (*GameData_202bdb8[])();
extern __int64 (*GameData_202bee8[])();
extern __int64 (*GameData_202c4e8[])();
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9e28;
extern __int64 GameData_21c9ef0;
extern __int64 GameData_2241428;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212ca10[133];
extern __int64* GameData_212ca70[121];
void GameRoutine_1329500(__int64, char*, char, char);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8875e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_892740(void);
__int64 SpotMgr_Unknown3(__int64 a1);
__int64 SpotMgr_132fca0(__int64 result);
__int64 SpotMgr_132ffa0(unsigned int* a1);
__int64 SpotMgr_13301a0(__int64 a1);
__int64 SpotMgr_13304c0(unsigned int* a1);
void SpotMgr_1333820(__int64 a1, __int64 a2);
void SpotMgr_13338e0(__int64 a1, __int64 a2);
void SpotMgr_1333b80();
bool SpotMgr_1333c60(__int64 a1, __int64 a2);
bool SpotMgr_1333de0(__int64 a1, __int64 a2);
_QWORD* SpotMgr_1334160(_QWORD* result, __int64 a2);
_QWORD* SpotMgr_1334360(_QWORD* result, __int64 a2);
_QWORD* SpotMgr_1334560(_QWORD* result);
_QWORD* SpotMgr_1334d40(_QWORD* result);
void SpotMgr_1335280(char a1);
__int64 SpotMgr_1335920();
_QWORD* SpotMgr_1336ec0();
void SpotMgr_13370c0();
__int64 SpotMgr_13381e0(__int64 result);
__int64 SpotMgr_1338da0(__int64 result, __int64* a2, __int64 a3, char a4);
bool SpotMgr_133a380(__int64* a1, __int64* a2);
__int64 game_gmap_SpotMgr_EachSpotAttachment_lambda0_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_gmap_SpotMgr_CheckWrongAttachment_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 game_gmap_SpotMgr_OnEnterGmap_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 Dir_70df40(_QWORD, _QWORD);
__int64 GameRoutine_14b4b70(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 GameData_21c96e8;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
void __attribute__((noreturn))
GameRoutine_60a210_alt1(_QWORD) __asm__("GameRoutine_60a210");
__int64 game_gmap_SpotMgr_GetAroundSpot_lambda0_Invoke(__int64 result,
                                                       __int64** a2);
__int16* game_gmap_SpotMgr_TryPlayAppearAnimal_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);

__int64 SpotMgr_Unknown3(__int64 a1)
{
  __int64 result;

  SpotMgr_132fca0(*(_QWORD*)(a1 + 8));
  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 SpotMgr_132fca0(__int64 result)
{
  __int64* v1;
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD** v10;
  _QWORD** v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;

  v1 = *(__int64**)(result + 48);
  v2 = *(__int64**)(result + 56);
  v3 = (_QWORD*)result;
  if (v1 != v2) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v6 = *v1;
      v7 = *(_QWORD**)(*v1 + 48);
      v8 = *(_QWORD**)(*v1 + 56);
      while (v7 != v8) {
        if (*v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9);
        }
        ++v7;
      }
      v10 = *(_QWORD***)(v6 + 72);
      v11 = *(_QWORD***)(v6 + 80);
      while (v10 != v11) {
        v13 = *v10;
        if (*v10 != nullptr) {
          v14 = v13[3];
          if (v14 != 0) {
            v15 = *(_QWORD*)v4;
            v13[4] = v14;
            if (*(_QWORD*)(v15 + 200) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free(v15 + v16);
          }
          if (*v13 != 0) {
            v17 = *(_QWORD*)v4;
            v13[1] = *v13;
            if (*(_QWORD*)(v17 + 200) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(v17 + v18);
          }
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12);
        }
        ++v10;
      }
      GameRoutine_1325de0(v6);
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5);
      ++v1;
    } while (v1 != v2);
  }
  v19 = (__int64*)v3[15];
  v20 = (__int64*)v3[16];
  if (v19 != v20) {
    v21 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v19 != 0) {
        GameRoutine_1325de0(*v19);
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v22);
      }
      ++v19;
    } while (v19 != v20);
  }
  v3[7] = v3[6];
  if (v3[4] != 0) {
    v23 = (_QWORD*)v3[3];
    if (v23 != nullptr) {
      v24 = fw_memory_g_heap_manager_ptr;
      do {
        v25 = (_QWORD*)*v23;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v26);
        v23 = v25;
      } while (v25 != nullptr);
    }
    v27 = v3[2];
    v3[3] = 0;
    if (v27 != 0) {
      v28 = v27 & 7;
      if (v27 >= 8) {
        v30 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        v29 = 0;
        do {
          *(_QWORD*)(v3[1] + 8 * v29) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 8) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 16) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 24) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 32) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 40) = 0;
          *(_QWORD*)(v3[1] + 8 * v29 + 48) = 0;
          v31 = v3[1] + 8 * v29;
          v29 += 8;
          *(_QWORD*)(v31 + 56) = 0;
        } while (v30 != v29);
      }
      else {
        v29 = 0;
      }
      if (v28 != 0) {
        v32 = 8 * v29;
        do {
          --v28;
          *(_QWORD*)(v3[1] + v32) = 0;
          v32 += 8;
        } while (v28 != 0);
      }
    }
    v3[4] = 0;
  }
  v3[10] = v3[9];
  v3[13] = v3[12];
  v3[19] = v3[18];
  v3[22] = v3[21];
  v3[16] = v3[15];
  return result;
}

__int64 SpotMgr_132ffa0(unsigned int* a1)
{
  _QWORD* v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;

  v1 = *(_QWORD**)(GameData_21c9700 + 8);
  v2 = v1[2];
  if (v2 == 0 || v1[4] == 0) {
    return 0;
  }
  v4 = *a1;
  v5 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v6 = *a1;
    if (v2 <= v4) {
      v6 = (unsigned int)v4 % (unsigned int)v2;
    }
  }
  else {
    v6 = ((_DWORD)v2 - 1) & (unsigned int)v4;
  }
  v7 = *(__int64***)(v1[1] + 8 * v6);
  if (v7 == nullptr) {
    return 0;
  }
  v8 = *v7;
  if (v8 == nullptr) {
    return 0;
  }
  if ((v2 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == v4) {
        if (*((_DWORD*)v8 + 4) == (_DWORD)v4) {
          return v8[3];
        }
      }
      else if ((v10 & v5) != v6) {
        return 0;
      }
      v8 = (__int64*)*v8;
      if (v8 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v4) {
      break;
    }
    if (v9 >= v2) {
      v9 %= v2;
    }
    if (v9 != v6) {
      return 0;
    }
  LABEL_14:
    v8 = (__int64*)*v8;
    if (v8 == nullptr) {
      return 0;
    }
  }
  if (*((_DWORD*)v8 + 4) != (_DWORD)v4) {
    goto LABEL_14;
  }
  return v8[3];
}

__int64 SpotMgr_13301a0(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  unsigned __int64 v6;
  char* v7;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  char v14;
  __int64 v15;
  char* v16;
  unsigned int v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  __int64 v22;
  __int64** v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 result;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;

  v2 = strlen(a1);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_69;
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
    v34 = v3;
    v35 = v4;
    v33 = v5 | 1;
  }
  else {
    LOBYTE(v33) = 2 * v2;
    v4 = (char*)&v33 + 1;
    if (v2 == 0) {
      goto LABEL_10;
    }
  }
  v2 = memcpy(v4, a1, v3);

LABEL_10:
  v4[v3] = 0;
  v6 = (unsigned __int64)(unsigned __int8)v33 >> 1;
  if ((v33 & 1) != 0) {
    v7 = v35;
  }
  else {
    v7 = (char*)&v33 + 1;
  }
  if ((v33 & 1) != 0) {
    v6 = v34;
  }
  v8 = v6;
  do {
    if (v8 == 0) {
      v10 = 0;
      goto LABEL_21;
    }
    v9 = (unsigned __int8)v7[--v8];
  } while (v9 != 95);
  v10 = v8 + 1;
  if (v8 + 1 > v6) {
    GameRoutine_60a230(v2);
  }

LABEL_21:
  v11 = v6 - v10;
  if (v6 - v10 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_69:
    GameRoutine_60a1d0();
  }
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v11 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                16, 0);
    v31 = v11;
    v32 = v12;
    v30 = v13 | 1;
  }
  else {
    LOBYTE(v30) = 2 * v11;
    v12 = (char*)&v30 + 1;
    if (v6 == v10) {
      goto LABEL_30;
    }
  }
  memmove(v12, &v7[v10], v11);

LABEL_30:
  v14 = v33;
  v12[v11] = 0;
  if ((v14 & 1) != 0 && v35 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  v33 = v30;
  v34 = v31;
  if ((v30 & 1) != 0) {
    v16 = v32;
  }
  else {
    v16 = (char*)&v33 + 1;
  }
  v35 = v32;
  v17 = game_HashString(v16);
  v18 = *(_QWORD**)(GameData_21c9700 + 8);
  v19 = v18[2];
  if (v19 != 0 && v18[4] != 0) {
    v21 = v19 - 1;
    if ((v19 & (v19 - 1)) != 0) {
      v22 = v17;
      if (v19 <= v17) {
        v22 = v17 % (unsigned int)v19;
      }
    }
    else {
      v22 = ((_DWORD)v19 - 1) & v17;
    }
    v23 = *(__int64***)(v18[1] + 8 * v22);
    if (v23 != nullptr) {
      v24 = *v23;
      if (v24 != nullptr) {
        if ((v19 & v21) == 0) {
          while (1) {
            v26 = v24[1];
            if (v26 == v17) {
              if (*((_DWORD*)v24 + 4) == v17) {
                goto LABEL_67;
              }
            }
            else if ((v26 & v21) != v22) {
              goto LABEL_61;
            }
            v24 = (__int64*)*v24;
            if (v24 == nullptr) {
              goto LABEL_61;
            }
          }
        }
        do {
          v25 = v24[1];
          if (v25 == v17) {
            if (*((_DWORD*)v24 + 4) == v17) {
            LABEL_67:
              result = v24[3];
              if ((v33 & 1) == 0) {
                return result;
              }
              goto LABEL_62;
            }
          }
          else {
            if (v25 >= v19) {
              v25 %= v19;
            }
            if (v25 != v22) {
              break;
            }
          }
          v24 = (__int64*)*v24;
        } while (v24 != nullptr);
      }
    }
  }

LABEL_61:
  result = 0;
  if ((v33 & 1) == 0) {
    return result;
  }

LABEL_62:
  if (v35 != nullptr) {
    v28 = result;
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
    return v28;
  }
  return result;
}

__int64 SpotMgr_13304c0(unsigned int* a1)
{
  _QWORD* v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;

  v1 = *(_QWORD**)(GameData_21c9700 + 8);
  v2 = v1[2];
  if (v2 == 0 || v1[4] == 0) {
    return 0;
  }
  v4 = *a1;
  v5 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v6 = *a1;
    if (v2 <= v4) {
      v6 = (unsigned int)v4 % (unsigned int)v2;
    }
  }
  else {
    v6 = ((_DWORD)v2 - 1) & (unsigned int)v4;
  }
  v7 = *(__int64***)(v1[1] + 8 * v6);
  if (v7 == nullptr) {
    return 0;
  }
  v8 = *v7;
  if (v8 == nullptr) {
    return 0;
  }
  if ((v2 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == v4) {
        if (*((_DWORD*)v8 + 4) == (_DWORD)v4) {
          return v8[3];
        }
      }
      else if ((v10 & v5) != v6) {
        return 0;
      }
      v8 = (__int64*)*v8;
      if (v8 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v4) {
      break;
    }
    if (v9 >= v2) {
      v9 %= v2;
    }
    if (v9 != v6) {
      return 0;
    }
  LABEL_14:
    v8 = (__int64*)*v8;
    if (v8 == nullptr) {
      return 0;
    }
  }
  if (*((_DWORD*)v8 + 4) != (_DWORD)v4) {
    goto LABEL_14;
  }
  return v8[3];
}

void SpotMgr_1333820(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* i;
  __int64 v6;
  char v7;
  int v8;
  __int64 v9;

  v2 = GameData_21c9700;
  if (GameData_21c9700 != 0) {
    *(_BYTE*)(*(_QWORD*)(GameData_21c9700 + 8) + 208LL) = 1;
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(__int64**)(v3 + 48);
    for (i = *(__int64**)(v3 + 56); v4 != i; ++v4) {
      v6 = *v4;
      v7 = *(_BYTE*)(*v4 + 112);
      v8 = *(unsigned __int8*)(*v4 + 176);
      *(_BYTE*)(*v4 + 177) = 0;
      if (v8 == 3 && ((v7 == 0) | v7 & 1) != 0) {
        v9 = *(_QWORD*)(v6 + 120);
        if (v9 != 0) {
          if ((*(_WORD*)(v9 + 258) & 0x80) == 0) {
            *(_WORD*)(v6 + 176) = 770;
            if (*(_QWORD*)GameRoutine_ae07e0(v9, a2) != 0) {
              game_VariableManager_SetFlag();
            }
          }
        }
        else {
          *(_WORD*)(v6 + 176) = 770;
        }
      }
    }
  }
}

void SpotMgr_13338e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* i;
  __int64 v6;
  int v7;
  __int64 v8;
  bool v9;
  bool v10;
  char v11;

  v2 = GameData_21c9700;
  if (GameData_21c9700 != 0) {
    *(_BYTE*)(*(_QWORD*)(GameData_21c9700 + 8) + 208LL) = 0;
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(__int64**)(v3 + 48);
    for (i = *(__int64**)(v3 + 56); v4 != i; ++v4) {
      v6 = *v4;
      v7 = *(unsigned __int8*)(*v4 + 177);
      if (*(_BYTE*)(*v4 + 177) != 0) {
        if (*(unsigned __int8*)(v6 + 176) != v7) {
          v8 = *(_QWORD*)(v6 + 120);
          v9 = v7 == 1 || v8 == 0;
          if (v9 || (*(_WORD*)(v8 + 258) & 0x80) == 0) {
            *(_BYTE*)(v6 + 176) = v7;
            if (v7 == 2) {
              *(_BYTE*)(v6 + 177) = 3;
            }
            v10 = v7 == 1 || v8 == 0;
            if (!v10 && *(_QWORD*)GameRoutine_ae07e0(v8, a2) != 0) {
              game_VariableManager_SetFlag();
            }
          }
        }
        if (*(_QWORD*)(v6 + 120) != 0) {
          GameRoutine_1329500((__int64)&v11, (char*)v6, 0, 1);
        }
      }
    }
  }
}

void SpotMgr_1333b80()
{
  __int64 v0;
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;

  if (GameData_21c9700 != 0) {
    v0 = *(_QWORD*)(GameData_21c9700 + 8);
    v1 = *(__int64**)(v0 + 48);
    for (i = *(__int64**)(v0 + 56); v1 != i; *(_BYTE*)(v3 + 116) = 0) {
      v3 = *v1;
      if (*(_BYTE*)(*v1 + 176) != 1) {
        *(_BYTE*)(v3 + 176) = 1;
      }
      v4 = *(_QWORD*)(v3 + 120);
      *(_BYTE*)(v3 + 178) = 0;
      if (v4 != 0) {
        GameRoutine_1329500((__int64)&v6, (char*)v3, 0, 1);
      }
      v5 = *(_QWORD*)(v3 + 280);
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
        *(_QWORD*)(v3 + 280) = 0;
      }
      ++v1;
    }
  }
  if (GameData_2241428 != 0) {
    *(_QWORD*)(GameData_2241428 + 16) = *(_QWORD*)(GameData_2241428 + 8);
  }
}

bool SpotMgr_1333c60(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BOOL4 v14;
  __int64 v15;
  _QWORD v17[4];
  _QWORD* v18;
  __int64 v19;

  v2 = v17;
  v17[0] = GameData_202bee8;
  v18 = v17;
  v3 = *(_QWORD*)(GameData_21c9700 + 8);
  v4 = *(__int64**)(v3 + 72);
  v5 = *(__int64**)(v3 + 80);
  if (v4 == v5) {
    v14 = false;
  LABEL_23:
    v15 = 32;
    goto LABEL_24;
  }
  v6 = 0;
  do {
    v7 = *v4;
    v8 = *(_QWORD*)(*v4 + 120);
    v9 = v8 != 0 && *(_BYTE*)(*v4 + 176) == 1;
    if (v9 && *(_WORD*)(v8 + 120) != 0) {
      v10 = *(__int64**)(v8 + 24);
      v11 = *v10;
      v12 = v10[1];
      if (v12 == *v10) {
      LABEL_3:
        v19 = v7;
        if (v18 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        LOBYTE(v2) =
            (*(__int64 (**)(_QWORD*, __int64*))(*v18 + 48LL))(v18, &v19);
        ++v6;
      }
      else {
        while (1) {
          if (*(_QWORD*)v11 != 0) {
            v13 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              LOBYTE(v2) =
                  GameRoutine_828f50(game_GameModeData_instance_ + 40, v11);
            }
            if (*(_BYTE*)(v11 + 16) != ((v13 == 0) | (unsigned __int8)v2 & 1)) {
              break;
            }
          }
          v11 += 24;
          if (v11 == v12) {
            goto LABEL_3;
          }
        }
      }
    }
    ++v4;
  } while (v4 != v5);
  v2 = v18;
  v14 = v6 > 0;
  if (v18 == v17) {
    goto LABEL_23;
  }
  if (v18 != nullptr) {
    v15 = 40;
  LABEL_24:
    (*(void (**)(_QWORD*))(*v2 + v15))(v2);
  }
  return v14;
}

bool SpotMgr_1333de0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;

  v2 = *(_QWORD*)(GameData_21c9700 + 8);
  v3 = *(__int64**)(v2 + 72);
  v4 = *(__int64**)(v2 + 80);
  if (v3 == v4) {
    return false;
  }
  v5 = a1;
  v6 = 0;
  do {
    v8 = *v3;
    v9 = *(_QWORD*)(*v3 + 120);
    v10 = v9 != 0 && *(_BYTE*)(*v3 + 176) == 1;
    if (v10 && *(_WORD*)(v9 + 120) != 0) {
      v11 = *(__int64**)(v9 + 24);
      v12 = *v11;
      v13 = v11[1];
      if (v13 == *v11) {
      LABEL_3:
        v7 = *(_QWORD*)(v5 + 32);
        v16 = v8;
        if (v7 == 0) {
          GameRoutine_60a310(0, a2);
        }
        LOBYTE(a1) =
            (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v16);
        ++v6;
      }
      else {
        while (1) {
          if (*(_QWORD*)v12 != 0) {
            v14 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              LOBYTE(a1) =
                  GameRoutine_828f50(game_GameModeData_instance_ + 40, v12);
            }
            if (*(_BYTE*)(v12 + 16) != ((v14 == 0) | a1 & 1)) {
              break;
            }
          }
          v12 += 24;
          if (v12 == v13) {
            goto LABEL_3;
          }
        }
      }
    }
    ++v3;
  } while (v3 != v4);
  return v6 > 0;
}

_QWORD* SpotMgr_1334160(_QWORD* result, __int64 a2)
{
  char* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if (a2 == 0) {
    return result;
  }
  v2 = (char*)result[18];
  v3 = (char*)result[19];
  v4 = v2;
  if (v2 == v3) {
    goto LABEL_18;
  }
  v5 = v3 - v2 - 8;
  v4 = (char*)result[18];
  if ((~(_BYTE)v5 & 0x18) != 0) {
    v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
    v4 = (char*)result[18];
    while (*(_QWORD*)v4 != a2) {
      v4 += 8;
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v4 != v3) {
      return result;
    }
    goto LABEL_19;
  }

LABEL_7:
  if (v5 >= 0x18) {
    v4 += 16;
    while (1) {
      if (*((_QWORD*)v4 - 2) == a2) {
        if (v4 - 16 != v3) {
          return result;
        }
        goto LABEL_19;
      }
      if (*((_QWORD*)v4 - 1) == a2) {
        v4 -= 8;
        goto LABEL_18;
      }
      if (*(_QWORD*)v4 == a2) {
        goto LABEL_18;
      }
      if (*((_QWORD*)v4 + 1) == a2) {
        break;
      }
      v7 = v4 + 16;
      v4 += 32;
      if (v7 == v3) {
        goto LABEL_19;
      }
    }
    if (v4 + 8 != v3) {
      return result;
    }
  }

LABEL_19:
  v8 = result[20];
  if ((unsigned __int64)v3 >= v8) {
    v10 = (char*)(v3 - v2);
    v11 = (v3 - v2) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_8875e0(result);
    }
    v13 = v8 - (_QWORD)v2;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v16 = result;
      v17 = a2;
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
      a2 = v17;
    }
    else {
      v16 = result;
      v18 = 0;
    }
    v19 = v18 + 8 * v15;
    v20 = (__int64)&v10[v18 + -8 * v11];
    *(_QWORD*)&v10[v18] = a2;
    v9 = (__int64)&v10[v18 + 8];
    memcpy(v20, v2, v10);
    result = v16;
    v16[18] = v20;
    v16[19] = v9;
    v16[20] = v19;
    if (v2 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v21);
      result = v16;
    }
  }
  else {
    *(_QWORD*)v3 = a2;
    v9 = (__int64)(v3 + 8);
  }
  result[19] = v9;
  return result;
}

_QWORD* SpotMgr_1334360(_QWORD* result, __int64 a2)
{
  char* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if (a2 == 0) {
    return result;
  }
  v2 = (char*)result[21];
  v3 = (char*)result[22];
  v4 = v2;
  if (v2 == v3) {
    goto LABEL_18;
  }
  v5 = v3 - v2 - 8;
  v4 = (char*)result[21];
  if ((~(_BYTE)v5 & 0x18) != 0) {
    v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
    v4 = (char*)result[21];
    while (*(_QWORD*)v4 != a2) {
      v4 += 8;
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v4 != v3) {
      return result;
    }
    goto LABEL_19;
  }

LABEL_7:
  if (v5 >= 0x18) {
    v4 += 16;
    while (1) {
      if (*((_QWORD*)v4 - 2) == a2) {
        if (v4 - 16 != v3) {
          return result;
        }
        goto LABEL_19;
      }
      if (*((_QWORD*)v4 - 1) == a2) {
        v4 -= 8;
        goto LABEL_18;
      }
      if (*(_QWORD*)v4 == a2) {
        goto LABEL_18;
      }
      if (*((_QWORD*)v4 + 1) == a2) {
        break;
      }
      v7 = v4 + 16;
      v4 += 32;
      if (v7 == v3) {
        goto LABEL_19;
      }
    }
    if (v4 + 8 != v3) {
      return result;
    }
  }

LABEL_19:
  v8 = result[23];
  if ((unsigned __int64)v3 >= v8) {
    v10 = (char*)(v3 - v2);
    v11 = (v3 - v2) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_8875e0(result);
    }
    v13 = v8 - (_QWORD)v2;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v16 = result;
      v17 = a2;
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
      a2 = v17;
    }
    else {
      v16 = result;
      v18 = 0;
    }
    v19 = v18 + 8 * v15;
    v20 = (__int64)&v10[v18 + -8 * v11];
    *(_QWORD*)&v10[v18] = a2;
    v9 = (__int64)&v10[v18 + 8];
    memcpy(v20, v2, v10);
    result = v16;
    v16[21] = v20;
    v16[22] = v9;
    v16[23] = v19;
    if (v2 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v21);
      result = v16;
    }
  }
  else {
    *(_QWORD*)v3 = a2;
    v9 = (__int64)(v3 + 8);
  }
  result[22] = v9;
  return result;
}

_QWORD* SpotMgr_1334560(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  char* v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 i;
  unsigned int* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64** v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64* v43;
  __int64 v44;
  char* v45;
  char* v46;
  unsigned __int64 v47;
  __int64 v48;
  char* v49;
  signed __int64 v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  char* v54;
  char* v55;
  unsigned __int64 v56;
  __int64 v57;
  char* v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64* v64;
  char* v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char* v76;
  unsigned __int64 v77;
  int v78;
  __int64* v79;
  __int64 v80;
  unsigned __int64 v81;
  _QWORD v82[4];
  _QWORD* v83;

  v1 = result[6];
  v2 = result[7];
  if (v1 == v2) {
    return result;
  }
  v3 = result;
  v4 = nullptr;
  v5 = nullptr;
  v6 = 0;
  v76 = nullptr;
  v77 = 0;
  v7 = nullptr;
  v74 = result[7];
  do {
    result = *(_QWORD**)v1;
    v8 = *(_QWORD*)(*(_QWORD*)v1 + 120LL);
    if (v8 != 0 && *(_WORD*)(v8 + 152) != 0) {
      v82[0] = GameData_202bd38;
      v83 = v82;
      v78 = ((__int64 (*)(void))game_gmap_TroopMgr_CountPlayerTroop_1349100)();
      result = v83;
      if (v83 == v82) {
        v9 = 32;
      }
      else {
        if (v83 == nullptr) {
          goto LABEL_12;
        }
        v9 = 40;
      }
      result = (_QWORD*)(*(__int64 (**)(void))(*v83 + v9))();
    LABEL_12:
      v75 = v1;
      v80 = *(unsigned __int16*)(v8 + 152);
      if (*(_WORD*)(v8 + 152) != 0) {
        for (i = 0; i != v80; ++i) {
          v11 = *(unsigned int**)(*(_QWORD*)(v8 + 160) + 16 * i + 8);
          if (v11 == nullptr) {
            goto LABEL_40;
          }
          v12 = *(_QWORD**)(GameData_21c9700 + 8);
          v13 = v12[2];
          if (v13 == 0 || v12[4] == 0) {
            goto LABEL_40;
          }
          v15 = *v11;
          v16 = v13 - 1;
          if ((v13 & (v13 - 1)) != 0) {
            v17 = v15;
            if (v13 <= v15) {
              v17 = (unsigned int)v15 % (unsigned int)v13;
            }
          }
          else {
            v17 = ((_DWORD)v13 - 1) & (unsigned int)v15;
          }
          v18 = *(__int64***)(v12[1] + 8 * v17);
          if (v18 == nullptr || (v19 = *v18) == nullptr) {
          LABEL_40:
            v21 = 0;
            goto LABEL_41;
          }
          if ((v13 & v16) == 0) {
            while (1) {
              v22 = v19[1];
              if (v22 == v15) {
                if (*((_DWORD*)v19 + 4) == (_DWORD)v15) {
                  goto LABEL_75;
                }
              }
              else if ((v22 & v16) != v17) {
                goto LABEL_40;
              }
              v19 = (__int64*)*v19;
              v21 = 0;
              if (v19 == nullptr) {
                goto LABEL_41;
              }
            }
          }
          while (1) {
            v20 = v19[1];
            if (v20 == v15) {
              break;
            }
            if (v20 >= v13) {
              v20 %= v13;
            }
            if (v20 != v17) {
              goto LABEL_40;
            }
          LABEL_30:
            v19 = (__int64*)*v19;
            if (v19 == nullptr) {
              goto LABEL_40;
            }
          }
          if (*((_DWORD*)v19 + 4) != (_DWORD)v15) {
            goto LABEL_30;
          }
        LABEL_75:
          v21 = v19[3];
        LABEL_41:
          v82[0] = GameData_202bdb8;
          v83 = v82;
          v23 = game_gmap_TroopMgr_CountPlayerTroop_1349100(v21, v82);
          result = v83;
          if (v83 == v82) {
            v24 = 32;
          LABEL_45:
            result = (_QWORD*)(*(__int64 (**)(void))(*v83 + v24))();
          }
          else if (v83 != nullptr) {
            v24 = 40;
            goto LABEL_45;
          }
          if (v23 != 0 || v78 >= 1) {
            if ((unsigned __int64)v5 < v6) {
              *(_QWORD*)v5 = v21;
              v5 += 8;
              continue;
            }
            v25 = (char*)(v5 - (char*)v4);
            v26 = (v5 - (char*)v4) >> 3;
            v27 = v26 + 1;
            if ((unsigned __int64)(v26 + 1) >> 61 == 0) {
              v28 = v7;
              if ((__int64)(v6 - (_QWORD)v4) >> 2 > v27) {
                v27 = (__int64)(v6 - (_QWORD)v4) >> 2;
              }
              if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
                v29 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v29 = v27;
              }
              if (v29 != 0) {
                if (v29 >> 61 != 0) {
                  goto LABEL_161;
                }
                v30 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0);
              }
              else {
                v30 = 0;
              }
              v6 = v30 + 8 * v29;
              v31 = (__int64)&v25[v30 + -8 * v26];
              *(_QWORD*)&v25[v30] = v21;
              v32 = (__int64)&v25[v30 + 8];
              result = (_QWORD*)memcpy(v31, v4, v25);
              if (v4 != nullptr) {
                v33 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v33 = 56;
                }
                result = (_QWORD*)nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
              }
              v4 = (__int64*)v31;
              v7 = v28;
              v5 = (char*)v32;
              continue;
            }
          LABEL_160:
            GameRoutine_8875e0(result);
          }
          if ((unsigned __int64)v7 < v77) {
            *(_QWORD*)v7 = v21;
            v7 += 8;
            continue;
          }
          v34 = (char*)(v7 - v76);
          v35 = (v7 - v76) >> 3;
          v36 = v35 + 1;
          if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
            goto LABEL_160;
          }
          if ((__int64)(v77 - (_QWORD)v76) >> 2 > v36) {
            v36 = (__int64)(v77 - (_QWORD)v76) >> 2;
          }
          if (v77 - (unsigned __int64)v76 >= 0x7FFFFFFFFFFFFFF8LL) {
            v37 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v37 = v36;
          }
          if (v37 != 0) {
            if (v37 >> 61 != 0) {
              goto LABEL_161;
            }
            v38 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v37, 16, 0);
          }
          else {
            v38 = 0;
          }
          v39 = v38 + 8 * v37;
          *(_QWORD*)&v34[v38] = v21;
          v7 = &v34[v38 + 8];
          v40 = (__int64)&v34[v38 + -8 * v35];
          v77 = v39;
          result = (_QWORD*)memcpy(v40, v76, v34);
          if (v76 != nullptr) {
            v41 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v41 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
          }
          v76 = (char*)v40;
        }
      }
      v79 = (__int64*)v5;
      v81 = v6;
      v42 = v76;
      if (v76 != v7) {
        while (1) {
          v52 = *(_QWORD*)v42;
          if (*(_BYTE*)(*(_QWORD*)v42 + 176LL) == 1) {
            goto LABEL_114;
          }
          v53 = (char*)v3[21];
          v54 = (char*)v3[22];
          v55 = v53;
          if (v53 == v54) {
            goto LABEL_132;
          }
          v56 = v54 - v53 - 8;
          v55 = (char*)v3[21];
          if ((~(_BYTE)v56 & 0x18) != 0) {
            break;
          }
        LABEL_121:
          if (v56 < 0x18) {
            goto LABEL_133;
          }
          v55 += 16;
          while (1) {
            if (*((_QWORD*)v55 - 2) == v52) {
              if (v55 - 16 == v54) {
                goto LABEL_133;
              }
              goto LABEL_114;
            }
            if (*((_QWORD*)v55 - 1) == v52) {
              v55 -= 8;
              goto LABEL_132;
            }
            if (*(_QWORD*)v55 == v52) {
              goto LABEL_132;
            }
            if (*((_QWORD*)v55 + 1) == v52) {
              break;
            }
            v58 = v55 + 16;
            v55 += 32;
            if (v58 == v54) {
              goto LABEL_133;
            }
          }
          if (v55 + 8 != v54) {
            goto LABEL_114;
          }
        LABEL_133:
          v59 = v3[23];
          if ((unsigned __int64)v54 < v59) {
            *(_QWORD*)v54 = v52;
            v51 = (__int64)(v54 + 8);
            goto LABEL_113;
          }
          v60 = (char*)(v54 - v53);
          v61 = (v54 - v53) >> 3;
          v62 = v61 + 1;
          if ((unsigned __int64)(v61 + 1) >> 61 != 0) {
            goto LABEL_160;
          }
          v63 = v59 - (_QWORD)v53;
          v64 = v4;
          v65 = v7;
          if (v63 >> 2 > v62) {
            v62 = v63 >> 2;
          }
          if ((unsigned __int64)v63 >= 0x7FFFFFFFFFFFFFF8LL) {
            v66 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v66 = v62;
          }
          if (v66 != 0) {
            if (v66 >> 61 == 0) {
              v67 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v66, 16, 0);
              goto LABEL_144;
            }
          LABEL_161:
            GameRoutine_60a210();
          }
          v67 = 0;
        LABEL_144:
          v68 = v67 + 8 * v66;
          v69 = (char*)(v54 - v53);
          v70 = (__int64)&v60[v67 + -8 * v61];
          *(_QWORD*)&v60[v67] = v52;
          v51 = (__int64)&v60[v67 + 8];
          result = (_QWORD*)memcpy(v70, v53, v69);
          v3[21] = v70;
          v3[22] = v51;
          v3[23] = v68;
          if (v53 != nullptr) {
            v71 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v71 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
          }
          v7 = v65;
          v4 = v64;
          v6 = v81;
        LABEL_113:
          v3[22] = v51;
        LABEL_114:
          v42 += 8;
          if (v42 == v7) {
            goto LABEL_83;
          }
        }
        v57 = ((unsigned __int8)((unsigned int)v56 >> 3) + 1) & 3;
        v55 = (char*)v3[21];
        while (*(_QWORD*)v55 != v52) {
          v55 += 8;
          if (--v57 == 0) {
            goto LABEL_121;
          }
        }
      LABEL_132:
        if (v55 == v54) {
          goto LABEL_133;
        }
        goto LABEL_114;
      }
    LABEL_83:
      v5 = (char*)v79;
      v2 = v74;
      v43 = v4;
      if (v4 == v79) {
      LABEL_3:
        v1 = v75;
        goto LABEL_4;
      }
      while (1) {
        v44 = *v43;
        if (*(_BYTE*)(*v43 + 176) != 3 && (*(_BYTE*)(v44 + 112) & 1) == 0 &&
            (v3[26] & 1) == 0) {
          result = SpotMgr_1334160(v3, *v43);
        }
        v46 = (char*)v3[21];
        v45 = (char*)v3[22];
        if (v46 != v45) {
          v47 = v45 - v46 - 8;
          if ((~(_BYTE)v47 & 0x18) == 0) {
          LABEL_96:
            if (v47 >= 0x18) {
              v46 += 16;
              while (1) {
                if (*((_QWORD*)v46 - 2) == v44) {
                  v46 -= 16;
                  if (v46 != v45) {
                    goto LABEL_108;
                  }
                  goto LABEL_86;
                }
                if (*((_QWORD*)v46 - 1) == v44) {
                  v46 -= 8;
                  goto LABEL_107;
                }
                if (*(_QWORD*)v46 == v44) {
                  goto LABEL_107;
                }
                if (*((_QWORD*)v46 + 1) == v44) {
                  break;
                }
                v49 = v46 + 16;
                v46 += 32;
                if (v49 == v45) {
                  goto LABEL_86;
                }
              }
              v46 += 8;
              if (v46 != v45) {
                goto LABEL_108;
              }
            }
            goto LABEL_86;
          }
          v48 = ((unsigned __int8)((unsigned int)v47 >> 3) + 1) & 3;
          while (*(_QWORD*)v46 != v44) {
            v46 += 8;
            if (--v48 == 0) {
              goto LABEL_96;
            }
          }
        }
      LABEL_107:
        if (v46 != v45) {
        LABEL_108:
          v50 = v45 - (v46 + 8);
          if (v45 != v46 + 8) {
            result = (_QWORD*)memmove(v46, v46 + 8, v45 - (v46 + 8));
          }
          v3[22] = &v46[v50];
        }
      LABEL_86:
        if (++v43 == v79) {
          goto LABEL_3;
        }
      }
    }
  LABEL_4:
    v1 += 8;
  } while (v1 != v2);
  if (v76 != nullptr) {
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v72 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v72);
  }
  if (v4 != nullptr) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v73);
  }
  return result;
}

_QWORD* SpotMgr_1334d40(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned int* v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = result[15];
  if (v1 != 0) {
    v2 = *(unsigned __int16*)(v1 + 168);
    if (*(_WORD*)(v1 + 168) != 0) {
      v3 = 0;
      v4 = GameData_212c780;
      do {
        v5 = *(unsigned int**)(*(_QWORD*)(v1 + 176) + 16 * v3 + 8);
        if (v5 != nullptr) {
          result = *(_QWORD**)(*v4 + 8);
          v6 = result[2];
          if (v6 != 0 && result[4] != 0) {
            v8 = *v5;
            v9 = v6 - 1;
            if ((v6 & (v6 - 1)) != 0) {
              v10 = v8;
              if (v6 <= v8) {
                v10 = (unsigned int)v8 % (unsigned int)v6;
              }
            }
            else {
              v10 = ((_DWORD)v6 - 1) & (unsigned int)v8;
            }
            v11 = *(__int64***)(result[1] + 8 * v10);
            if (v11 != nullptr) {
              v12 = *v11;
              if (v12 != nullptr) {
                if ((v6 & v9) == 0) {
                  while (1) {
                    v14 = v12[1];
                    if (v14 == v8) {
                      if (*((_DWORD*)v12 + 4) == (_DWORD)v8) {
                        goto LABEL_30;
                      }
                    }
                    else if ((v14 & v9) != v10) {
                      goto LABEL_4;
                    }
                    v12 = (__int64*)*v12;
                    if (v12 == nullptr) {
                      goto LABEL_4;
                    }
                  }
                }
                do {
                  v13 = v12[1];
                  if (v13 == v8) {
                    if (*((_DWORD*)v12 + 4) == (_DWORD)v8) {
                    LABEL_30:
                      v15 = v12[3];
                      if (v15 != 0 && *(_BYTE*)(v15 + 176) == 1 &&
                          (*(_BYTE*)(v15 + 112) & 1) == 0) {
                        result = SpotMgr_1334160(result, v15);
                      }
                      break;
                    }
                  }
                  else {
                    if (v13 >= v6) {
                      v13 %= v6;
                    }
                    if (v13 != v10) {
                      break;
                    }
                  }
                  v12 = (__int64*)*v12;
                } while (v12 != nullptr);
              }
            }
          }
        }
      LABEL_4:
        ++v3;
      } while (v3 != v2);
    }
  }
  return result;
}

void SpotMgr_1335280(char a1)
{
  __int64 v2;
  char** v3;
  char** v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64* i;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  char** v64;
  char** v65;
  bool v66;
  char* v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  bool v74;
  __int64 v75;
  void* v76;

  v2 = *(_QWORD*)(*GameData_212c780 + 8);
  v3 = *(char***)(v2 + 48);
  v4 = *(char***)(v2 + 56);
  while (v3 != v4) {
    v5 = *v3;
    v6 = *((_QWORD*)*v3 + 15);
    (*v3)[112] = 0;
    if (v6 != 0) {
      GameRoutine_1329500((__int64)&v75, v5, 0, a1 & 1);
    }
    ++v3;
  }
  v76 = &GameData_1abbb2b;
  v75 = game_HashString(&GameData_1abbb2b);
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v75);
    if (v7 != 0 && *(_DWORD*)(v7 + 32) != 0) {
      v8 = game_HashString(&GameData_1abbb2b);
      if (v8 != 0) {
        v9 = *(_QWORD*)(GameData_21c9e28 + 96);
        v10 = v9 == 0 || *(_QWORD*)(GameData_21c9e28 + 112) == 0;
        if (!v10) {
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
          v59 = *(_QWORD**)(*(_QWORD*)(GameData_21c9e28 + 88) + 8 * v12);
          if (v59 != nullptr) {
            v60 = (_QWORD*)*v59;
            if (v60 != nullptr) {
              if ((v9 & v11) == 0) {
                while (1) {
                  v62 = v60[1];
                  if (v62 == v8) {
                    if (v60[2] == v8) {
                      goto LABEL_136;
                    }
                  }
                  else if ((v62 & v11) != v12) {
                    return;
                  }
                  v60 = (_QWORD*)*v60;
                  if (v60 == nullptr) {
                    return;
                  }
                }
              }
              while (1) {
                v61 = v60[1];
                if (v61 == v8) {
                  if (v60[2] == v8) {
                  LABEL_136:
                    v63 = v60[3];
                    if (v63 != 0) {
                      v64 = *(char***)(v2 + 48);
                      v65 = *(char***)(v2 + 56);
                      while (v64 != v65) {
                        v67 = *v64;
                        v68 = *((_QWORD*)*v64 + 15);
                        if (v68 != 0) {
                          if (*(_WORD*)(v63 + 32) != 0) {
                            v69 = *(unsigned __int16*)(v63 + 32) - 1LL;
                            v70 = (__int64*)(*(_QWORD*)(v63 + 40) + 8LL);
                            do {
                              v72 = *v70;
                              v70 += 2;
                              v71 = v72;
                              v74 = v69-- != 0;
                              v10 = v71 == v68;
                              v66 = v71 != v68;
                            } while (!v10 && v74);
                          }
                          else {
                            v66 = true;
                          }
                          v67[112] = v66;
                          GameRoutine_1329500((__int64)&v75, v67, 0, a1 & 1);
                        }
                        ++v64;
                      }
                    }
                    return;
                  }
                }
                else {
                  if (v61 >= v9) {
                    v61 %= v9;
                  }
                  if (v61 != v12) {
                    return;
                  }
                }
                v60 = (_QWORD*)*v60;
                if (v60 == nullptr) {
                  return;
                }
              }
            }
          }
        }
      }
      return;
    }
  }
  v76 = &GameData_1ad7ce3;
  v75 = game_HashString(&GameData_1ad7ce3);
  if (game_GameModeData_instance_ != 0) {
    v13 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v75);
    if (v13 != 0 && *(_DWORD*)(v13 + 32) != 0) {
      return;
    }
  }
  v14 = game_HashString(&GameData_1a86d15);
  if (v14 == 0) {
    goto LABEL_44;
  }
  v15 = *(_QWORD*)(GameData_21c9ef0 + 96);
  if (v15 == 0 || *(_QWORD*)(GameData_21c9ef0 + 112) == 0) {
    goto LABEL_44;
  }
  v17 = v15 - 1;
  if ((v15 & (v15 - 1)) != 0) {
    v18 = v14;
    if (v14 >= v15) {
      v18 = v14 % v15;
    }
  }
  else {
    v18 = v17 & v14;
  }
  v19 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ef0 + 88) + 8 * v18);
  if (v19 == nullptr || (v20 = (_QWORD*)*v19) == nullptr) {
  LABEL_44:
    v22 = 0;
    goto LABEL_45;
  }
  if ((v15 & v17) == 0) {
    while (1) {
      v23 = v20[1];
      if (v23 == v14) {
        if (v20[2] == v14) {
          goto LABEL_133;
        }
      }
      else if ((v23 & v17) != v18) {
        goto LABEL_44;
      }
      v20 = (_QWORD*)*v20;
      v22 = 0;
      if (v20 == nullptr) {
        goto LABEL_45;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v14) {
      break;
    }
    if (v21 >= v15) {
      v21 %= v15;
    }
    if (v21 != v18) {
      goto LABEL_44;
    }
  LABEL_34:
    v20 = (_QWORD*)*v20;
    if (v20 == nullptr) {
      goto LABEL_44;
    }
  }
  if (v20[2] != v14) {
    goto LABEL_34;
  }

LABEL_133:
  v22 = v20[3];

LABEL_45:
  v24 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v25 = v22;
  v26 = game_HashString(&GameData_1aad978);
  if (v26 == 0) {
    goto LABEL_69;
  }
  v27 = *(_QWORD*)(GameData_21c9ef0 + 96);
  if (v27 == 0 || *(_QWORD*)(GameData_21c9ef0 + 112) == 0) {
    goto LABEL_69;
  }
  v29 = v27 - 1;
  if ((v27 & (v27 - 1)) != 0) {
    v30 = v26;
    if (v26 >= v27) {
      v30 = v26 % v27;
    }
  }
  else {
    v30 = v29 & v26;
  }
  v31 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ef0 + 88) + 8 * v30);
  if (v31 == nullptr || (v32 = (_QWORD*)*v31) == nullptr) {
  LABEL_69:
    v34 = 0;
    goto LABEL_70;
  }
  if ((v27 & v29) == 0) {
    while (1) {
      v35 = v32[1];
      if (v35 == v26) {
        if (v32[2] == v26) {
          goto LABEL_134;
        }
      }
      else if ((v35 & v29) != v30) {
        goto LABEL_69;
      }
      v32 = (_QWORD*)*v32;
      v34 = 0;
      if (v32 == nullptr) {
        goto LABEL_70;
      }
    }
  }
  while (2) {
    v33 = v32[1];
    if (v33 != v26) {
      if (v33 >= v27) {
        v33 %= v27;
      }
      if (v33 != v30) {
        goto LABEL_69;
      }
    }
    else if (v32[2] == v26) {
      break;
    }
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_69;
    }
    continue;
  }

LABEL_134:
  v34 = v32[3];

LABEL_70:
  v36 = (_QWORD*)fw_memory_HeapManager_Allocate(*v24, 16, 16, 0);
  *v36 = *v25;
  v36[1] = v34;
  v37 = 128;
  if (*(_QWORD*)(*v24 + 200LL) == 0) {
    v37 = 56;
  }
  nn_mem_StandardAllocator_Free(*v24 + v37);
  v38 = game_HashString(&GameData_1aa9d24);
  if (v38 == 0) {
    goto LABEL_96;
  }
  v39 = *(_QWORD*)(GameData_21c9ef0 + 96);
  if (v39 == 0 || *(_QWORD*)(GameData_21c9ef0 + 112) == 0) {
    goto LABEL_96;
  }
  v41 = v39 - 1;
  if ((v39 & (v39 - 1)) != 0) {
    v42 = v38;
    if (v38 >= v39) {
      v42 = v38 % v39;
    }
  }
  else {
    v42 = v41 & v38;
  }
  v43 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ef0 + 88) + 8 * v42);
  if (v43 == nullptr || (v44 = (_QWORD*)*v43) == nullptr) {
  LABEL_96:
    v46 = 0;
    goto LABEL_97;
  }
  if ((v39 & v41) == 0) {
    while (1) {
      v47 = v44[1];
      if (v47 == v38) {
        if (v44[2] == v38) {
          goto LABEL_135;
        }
      }
      else if ((v47 & v41) != v42) {
        goto LABEL_96;
      }
      v44 = (_QWORD*)*v44;
      v46 = 0;
      if (v44 == nullptr) {
        goto LABEL_97;
      }
    }
  }
  while (2) {
    v45 = v44[1];
    if (v45 != v38) {
      if (v45 >= v39) {
        v45 %= v39;
      }
      if (v45 != v42) {
        goto LABEL_96;
      }
    }
    else if (v44[2] == v38) {
      break;
    }
    v44 = (_QWORD*)*v44;
    if (v44 == nullptr) {
      goto LABEL_96;
    }
    continue;
  }

LABEL_135:
  v46 = v44[3];

LABEL_97:
  v48 = (_QWORD*)fw_memory_HeapManager_Allocate(*v24, 32, 16, 0);
  v49 = v36[1];
  v50 = v48;
  *v48 = *v36;
  v51 = *v24;
  v48[1] = v49;
  v48[2] = v46;
  v52 = 128;
  if (*(_QWORD*)(v51 + 200) == 0) {
    v52 = 56;
  }
  nn_mem_StandardAllocator_Free(v51 + v52);
  v54 = *(__int64**)(v2 + 48);
  for (i = *(__int64**)(v2 + 56); v54 != i; ++v54) {
    v55 = *v54;
    if ((*(_BYTE*)(*v54 + 113) & 1) != 0 || (*(_BYTE*)(v55 + 114) & 1) == 0) {
      v56 = (unsigned __int8)GameRoutine_13261c0(*v54) == 4
                ? 0LL
                : *(_QWORD*)(v55 + 136);
      if (*v50 != v56 && v50[1] != v56 && v50[2] != v56) {
        continue;
      }
    }
    v57 = *(_QWORD*)(v55 + 120);
    *(_BYTE*)(v55 + 112) = 1;
    if (v57 != 0) {
      GameRoutine_1329500((__int64)&v75, (char*)v55, 0, a1 & 1);
    }
  }
  v58 = 128;
  if (*(_QWORD*)(*v24 + 200LL) == 0) {
    v58 = 56;
  }
  nn_mem_StandardAllocator_Free(*v24 + v58);
}

__int64 SpotMgr_1335920()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64** v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64* v72;
  char v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  _QWORD v77[2];

  v0 = GameData_212c780;
  if ((*(_BYTE*)(*(_QWORD*)(*GameData_212c780 + 8) + 208LL) & 1) == 0) {
    v77[1] = &GameData_1ade186;
    v1 = game_HashString(&GameData_1ade186);
    v77[0] = v1;
    if (game_GameModeData_instance_ != 0) {
      v1 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v77);
      if (v1 != 0 && *(int*)(v1 + 32) >= 1) {
        v2 = *(_QWORD*)TroopMgr_1345be0();
        if (v2 == 0) {
          goto LABEL_99;
        }
      LABEL_19:
        if (*(_QWORD*)(v2 + 120) != 0 &&
            (game_GameModeData_instance_ == 0 ||
             (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x10) == 0)) {
          if ((unsigned __int8)GameRoutine_13261c0(v2) != 4) {
            v14 = *(_QWORD*)(v2 + 120);
            v15 = *(unsigned __int16*)(v14 + 136);
            if (*(_WORD*)(v14 + 136) == 0) {
              goto LABEL_99;
            }
            v16 = 0;
            v13 = 0;
            do {
              v17 = *(unsigned int**)(*(_QWORD*)(v14 + 144) + 16 * v16 + 8);
              if (v17 != nullptr) {
                v18 = *(_QWORD**)(*v0 + 8);
                v19 = v18[2];
                if (v19 != 0 && v18[4] != 0) {
                  v21 = *v17;
                  v22 = v19 - 1;
                  if ((v19 & (v19 - 1)) != 0) {
                    v23 = v21;
                    if (v19 <= v21) {
                      v23 = (unsigned int)v21 % (unsigned int)v19;
                    }
                  }
                  else {
                    v23 = ((_DWORD)v19 - 1) & (unsigned int)v21;
                  }
                  v24 = *(__int64***)(v18[1] + 8 * v23);
                  if (v24 != nullptr) {
                    v25 = *v24;
                    if (v25 != nullptr) {
                      if ((v19 & v22) == 0) {
                        while (1) {
                          v27 = v25[1];
                          if (v27 == v21) {
                            if (*((_DWORD*)v25 + 4) == (_DWORD)v21) {
                              goto LABEL_59;
                            }
                          }
                          else if ((v27 & v22) != v23) {
                            goto LABEL_33;
                          }
                          v25 = (__int64*)*v25;
                          if (v25 == nullptr) {
                            goto LABEL_33;
                          }
                        }
                      }
                      do {
                        v26 = v25[1];
                        if (v26 == v21) {
                          if (*((_DWORD*)v25 + 4) == (_DWORD)v21) {
                          LABEL_59:
                            v28 = v25[3];
                            if (v28 != 0 && *(_BYTE*)(v28 + 176) == 1 &&
                                (*(_BYTE*)(v28 + 112) & 1) == 0) {
                              GameRoutine_1326c00(v25[3], 3);
                              v13 = 1;
                              if (*(_QWORD*)(v28 + 120) != 0) {
                                GameRoutine_1329500((__int64)v77, (char*)v28, 1,
                                                    1);
                              }
                            }
                            break;
                          }
                        }
                        else {
                          if (v26 >= v19) {
                            v26 %= v19;
                          }
                          if (v26 != v23) {
                            break;
                          }
                        }
                        v25 = (__int64*)*v25;
                      } while (v25 != nullptr);
                    }
                  }
                }
              }
            LABEL_33:
              ++v16;
            } while (v16 != v15);
          LABEL_97:
            if ((v13 & 1) != 0) {
              return 1;
            }
            goto LABEL_99;
          }
          if ((unsigned __int8)GameRoutine_13261c0(v2) != 4 ||
              (*(_BYTE*)(v2 + 178) & 2) != 0) {
            v10 = GameRoutine_1326420(v2);
            if (v10 != 0) {
              v11 = *(unsigned __int16*)(v10 + 32);
              if (*(_WORD*)(v10 + 32) != 0) {
                v12 = 0;
                v13 = 0;
                do {
                  v29 = *(unsigned int**)(*(_QWORD*)(v10 + 40) + 16 * v12 + 8);
                  if (v29 != nullptr) {
                    v30 = *(_QWORD**)(*v0 + 8);
                    v31 = v30[2];
                    if (v31 != 0 && v30[4] != 0) {
                      v33 = *v29;
                      v34 = v31 - 1;
                      if ((v31 & (v31 - 1)) != 0) {
                        v35 = v33;
                        if (v31 <= v33) {
                          v35 = (unsigned int)v33 % (unsigned int)v31;
                        }
                      }
                      else {
                        v35 = ((_DWORD)v31 - 1) & (unsigned int)v33;
                      }
                      v36 = *(__int64***)(v30[1] + 8 * v35);
                      if (v36 != nullptr) {
                        v37 = *v36;
                        if (v37 != nullptr) {
                          if ((v31 & v34) == 0) {
                            while (1) {
                              v39 = v37[1];
                              if (v39 == v33) {
                                if (*((_DWORD*)v37 + 4) == (_DWORD)v33) {
                                  goto LABEL_92;
                                }
                              }
                              else if ((v39 & v34) != v35) {
                                goto LABEL_66;
                              }
                              v37 = (__int64*)*v37;
                              if (v37 == nullptr) {
                                goto LABEL_66;
                              }
                            }
                          }
                          do {
                            v38 = v37[1];
                            if (v38 == v33) {
                              if (*((_DWORD*)v37 + 4) == (_DWORD)v33) {
                              LABEL_92:
                                v40 = v37[3];
                                if (v40 != 0 && *(_BYTE*)(v40 + 176) == 1 &&
                                    (*(_BYTE*)(v40 + 112) & 1) == 0) {
                                  v41 = v10;
                                  GameRoutine_1326c00(v37[3], 3);
                                  v13 = 1;
                                  if (*(_QWORD*)(v40 + 120) != 0) {
                                    GameRoutine_1329500((__int64)v77,
                                                        (char*)v40, 1, 1);
                                  }
                                  v10 = v41;
                                }
                                break;
                              }
                            }
                            else {
                              if (v38 >= v31) {
                                v38 %= v31;
                              }
                              if (v38 != v35) {
                                break;
                              }
                            }
                            v37 = (__int64*)*v37;
                          } while (v37 != nullptr);
                        }
                      }
                    }
                  }
                LABEL_66:
                  ++v12;
                } while (v12 != v11);
                goto LABEL_97;
              }
            }
          }
        }
      LABEL_99:
        v43 = *(_QWORD*)(*v0 + 8);
        v45 = *(__int64**)(v43 + 72);
        v44 = *(__int64**)(v43 + 80);
        if (v45 != v44) {
          v76 = *(__int64**)(v43 + 80);
          while (1) {
            v46 = *v45;
            if (*(_BYTE*)(*v45 + 176) == 3 && (*(_BYTE*)(v46 + 112) & 1) == 0) {
              v47 = *(_QWORD*)(v46 + 120);
              if (v47 != 0 && *(_WORD*)(v47 + 184) != 0) {
                v48 = 8;
                v49 = 0;
                v50 = nullptr;
                v51 = 0;
                v52 = nullptr;
                do {
                  v53 = *(_QWORD*)(*(_QWORD*)(v47 + 192) + v48);
                  if ((unsigned __int64)v50 < v49) {
                    *(_QWORD*)v50 = v53;
                    v50 += 8;
                  }
                  else {
                    v54 = (char*)(v50 - v52);
                    v55 = (v50 - v52) >> 3;
                    v56 = v55 + 1;
                    if ((unsigned __int64)(v55 + 1) >> 61 != 0) {
                      GameRoutine_892740();
                    }
                    if ((__int64)(v49 - (_QWORD)v52) >> 2 > v56) {
                      v56 = (__int64)(v49 - (_QWORD)v52) >> 2;
                    }
                    if (v49 - (unsigned __int64)v52 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v57 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v57 = v56;
                    }
                    if (v57 != 0) {
                      if (v57 >> 61 != 0) {
                        GameRoutine_60a210();
                      }
                      v58 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v57, 16,
                          0);
                    }
                    else {
                      v58 = 0;
                    }
                    v49 = v58 + 8 * v57;
                    v59 = (char*)(v50 - v52);
                    v60 = (__int64)&v54[v58 + -8 * v55];
                    *(_QWORD*)&v54[v58] = v53;
                    v50 = &v54[v58 + 8];
                    memcpy(v60, v52, v59);
                    if (v52 != nullptr) {
                      v61 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v61 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
                    }
                    v52 = (char*)v60;
                  }
                  ++v51;
                  v48 += 16;
                } while (v51 < *(unsigned __int16*)(v47 + 184));
                if (v50 == v52) {
                LABEL_144:
                  v73 = 0;
                }
                else {
                  v62 = 0;
                  v63 = game_GameModeData_instance_;
                  v64 = GameData_212c780;
                  while (1) {
                    if (v63 != 0) {
                      v66 = game_GameVariableTable_Find(
                          *(_QWORD*)(v63 + 48),
                          *(_QWORD*)(*(_QWORD*)(v47 + 24) + 72LL) +
                              16LL * (int)v62);
                      v63 = game_GameModeData_instance_;
                      if (v66 != 0 && *(_DWORD*)(v66 + 32) != 0) {
                        v68 = *(_QWORD*)(*v64 + 8);
                        v69 = **(unsigned int**)&v52[8 * v62];
                        v70 = *(_QWORD*)(v68 + 16);
                        if ((v70 & (v70 - 1)) != 0) {
                          v71 = **(unsigned int**)&v52[8 * v62];
                          if (v70 <= v69) {
                            v71 = (unsigned int)v69 % (unsigned int)v70;
                          }
                          v72 = *(__int64**)(*(_QWORD*)(v68 + 8) + 8 * v71);
                          do {
                            do {
                              v72 = (__int64*)*v72;
                            } while (v72[1] != v69);
                          } while (*((_DWORD*)v72 + 4) != (_DWORD)v69);
                        }
                        else {
                          v72 = *(__int64**)(*(_QWORD*)(v68 + 8) +
                                             8LL * (((_DWORD)v70 - 1) &
                                                    (unsigned int)v69));
                          do {
                            do {
                              v72 = (__int64*)*v72;
                            } while (v72[1] != v69);
                          } while (*((_DWORD*)v72 + 4) != (_DWORD)v69);
                        }
                        v65 = v72[3];
                        if (*(_BYTE*)(v65 + 176) == 1) {
                          break;
                        }
                      }
                    }
                    if (++v62 == (v50 - v52) >> 3) {
                      goto LABEL_144;
                    }
                  }
                  v75 = *(_QWORD*)(v65 + 120);
                  if (v75 != 0) {
                    if ((*(_WORD*)(v75 + 258) & 0x80) == 0) {
                      *(_BYTE*)(v65 + 176) = 3;
                      if (*(_QWORD*)GameRoutine_ae07e0(v75, v67) != 0) {
                        game_VariableManager_SetFlag();
                      }
                    }
                    v73 = 1;
                    if (*(_QWORD*)(v65 + 120) != 0) {
                      GameRoutine_1329500((__int64)v77, (char*)v65, 1, 0);
                    }
                  }
                  else {
                    v73 = 1;
                    *(_BYTE*)(v65 + 176) = 3;
                  }
                }
                if (v52 != nullptr) {
                  v74 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v74 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v74);
                  v44 = v76;
                  if ((v73 & 1) != 0) {
                    return 1;
                  }
                }
                else {
                  v44 = v76;
                  if ((v73 & 1) != 0) {
                    return 1;
                  }
                }
              }
            }
            if (++v45 == v44) {
              return 0;
            }
          }
        }
        return 0;
      }
    }
    v3 = *(_QWORD*)(*GameData_212c790 + 8);
    v4 = *(_DWORD*)(v3 + 56);
    v5 = *(__int64***)(v3 + 8);
    v6 = *(__int64***)(v3 + 16);
    if (v4 < 0) {
      if (v5 != v6) {
        while (1) {
          v7 = *v5;
          if ((*v5)[12] == 0 && v7[69] == 0) {
            break;
          }
          if (++v5 == v6) {
            goto LABEL_13;
          }
        }
      LABEL_18:
        v2 = *v7;
        if (*v7 == 0) {
          goto LABEL_99;
        }
        goto LABEL_19;
      }
    }
    else {
      while (v5 != v6) {
        v8 = *v5++;
        v7 = v8;
        if (*((_DWORD*)v8 + 21) == v4) {
          goto LABEL_18;
        }
      }
    }
  LABEL_13:
    v2 = game_gmap_SpotMgr_GetCurrentSpot(v1);
    if (v2 == 0) {
      goto LABEL_99;
    }
    goto LABEL_19;
  }
  return 0;
}

_QWORD* SpotMgr_1336ec0()
{
  _QWORD* v0;
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;

  v0 = v14;
  v14[0] = GameData_202c4e8;
  v15 = v14;
  v1 = GameData_212c780;
  v2 = *(_QWORD*)(*GameData_212c780 + 8);
  v3 = *(__int64**)(v2 + 48);
  v4 = *(__int64**)(v2 + 56);
  if (v3 == v4) {
    goto LABEL_14;
  }
  do {
    v5 = *v3;
    v6 = *(_QWORD*)(*v3 + 280);
    if (v6 != 0 &&
        ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6) != 1 ||
         ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 280) + 112LL))(
              *(_QWORD*)(v5 + 280)) &
          1) == 0) &&
        *(_QWORD*)(v5 + 280) != 0) {
      v16 = v5;
      if (v15 == nullptr) {
        GameRoutine_60a310(0, v7);
      }
      (*(void (**)(_QWORD*, __int64*))(*v15 + 48LL))(v15, &v16);
    }
    ++v3;
  } while (v3 != v4);
  v0 = v15;
  if (v15 == v14) {
  LABEL_14:
    v8 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*))(*v0 + v8))(v0);

LABEL_16:
  v9 = *(_QWORD**)(*v1 + 8);
  v10 = (__int64*)v9[6];
  v11 = (__int64*)v9[7];
  if (v10 != v11) {
    do {
      v12 = *v10++;
      GameRoutine_1328d60(v12);
    } while (v10 != v11);
    v9 = *(_QWORD**)(*v1 + 8);
  }
  return SpotMgr_1334560(v9);
}

void SpotMgr_13370c0()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64** v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;

  v0 = *(_QWORD*)(*GameData_212ca70[0] + 64);
  v1 = *(_QWORD*)(*GameData_212ca70[0] + 72);
  if (v0 == v1) {
    return;
  }
  v2 = GameData_212ca10[0];
  v3 = GameData_212c780;
  while (2) {
    v4 = *(_QWORD*)(*(_QWORD*)v0 + 8LL);
    if (v4 != 0) {
      v5 = strchr(*(_QWORD*)(*(_QWORD*)v0 + 8LL), 95);
      if (v5 != 0) {
        v4 = v5 + 1;
      }
    }
    v6 = game_HashString(v4);
    if (v6 == 0) {
      goto LABEL_3;
    }
    v7 = *(_QWORD*)(*v2 + 96);
    if (v7 == 0 || *(_QWORD*)(*v2 + 112) == 0) {
      goto LABEL_3;
    }
    v9 = v7 - 1;
    if ((v7 & (v7 - 1)) != 0) {
      v10 = v6;
      if (v6 >= v7) {
        v10 = v6 % v7;
      }
    }
    else {
      v10 = v9 & v6;
    }
    v11 = *(_QWORD**)(*(_QWORD*)(*v2 + 88) + 8 * v10);
    if (v11 == nullptr) {
      goto LABEL_3;
    }
    v12 = (_QWORD*)*v11;
    if (v12 == nullptr) {
      goto LABEL_3;
    }
    if ((v7 & v9) == 0) {
      while (1) {
        v14 = v12[1];
        if (v14 == v6) {
          if (v12[2] == v6) {
            goto LABEL_32;
          }
        }
        else if ((v14 & v9) != v10) {
          goto LABEL_3;
        }
        v12 = (_QWORD*)*v12;
        if (v12 == nullptr) {
          goto LABEL_3;
        }
      }
    }
    while (1) {
      v13 = v12[1];
      if (v13 == v6) {
        break;
      }
      if (v13 >= v7) {
        v13 %= v7;
      }
      if (v13 != v10) {
        goto LABEL_3;
      }
    LABEL_21:
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        goto LABEL_3;
      }
    }
    if (v12[2] != v6) {
      goto LABEL_21;
    }
  LABEL_32:
    v15 = (unsigned int*)v12[3];
    if (v15 != nullptr) {
      v16 = *(_QWORD**)(*v3 + 8);
      v17 = v16[2];
      if (v17 != 0 && v16[4] != 0) {
        v19 = *v15;
        v20 = v17 - 1;
        if ((v17 & (v17 - 1)) != 0) {
          v21 = v19;
          if (v17 <= v19) {
            v21 = (unsigned int)v19 % (unsigned int)v17;
          }
        }
        else {
          v21 = ((_DWORD)v17 - 1) & (unsigned int)v19;
        }
        v22 = *(__int64***)(v16[1] + 8 * v21);
        if (v22 != nullptr) {
          v23 = *v22;
          if (v23 != nullptr) {
            if ((v17 & v20) == 0) {
              while (1) {
                v25 = v23[1];
                if (v25 == v19) {
                  if (*((_DWORD*)v23 + 4) == (_DWORD)v19) {
                    goto LABEL_57;
                  }
                }
                else if ((v25 & v20) != v21) {
                  goto LABEL_3;
                }
                v23 = (__int64*)*v23;
                if (v23 == nullptr) {
                  goto LABEL_3;
                }
              }
            }
            do {
              v24 = v23[1];
              if (v24 == v19) {
                if (*((_DWORD*)v23 + 4) == (_DWORD)v19) {
                LABEL_57:
                  v26 = v23[3];
                  if (v26 != 0) {
                    *(_BYTE*)(v26 + 178) |= 4u;
                  }
                  break;
                }
              }
              else {
                if (v24 >= v17) {
                  v24 %= v17;
                }
                if (v24 != v21) {
                  break;
                }
              }
              v23 = (__int64*)*v23;
            } while (v23 != nullptr);
          }
        }
      }
    }
  LABEL_3:
    v0 += 8;
    if (v0 != v1) {
      continue;
    }
    break;
  }
}

__int64 SpotMgr_13381e0(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = *(_QWORD*)(result + 48);
  v2 = (__int64*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(result + 56) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[3];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    v2[4] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = *v2;
  if (*v2 != 0) {
    v10 = v2[1];
    if (v9 == v10) {
      goto LABEL_20;
    }
    v11 = v2[1];
    do {
      v12 = *(_BYTE*)(v11 - 24);
      v11 -= 24;
      if ((v12 & 1) != 0 && *(_QWORD*)(v10 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
      }
      v10 = v11;
    } while (v11 != v9);
    v14 = *v2;
    v2[1] = v9;
    if (v14 != 0) {
    LABEL_20:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
    }
  }
  return result;
}

__int64 SpotMgr_1338da0(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  float v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  bool v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  bool v25;
  _BOOL4 v26;
  __int64 v27;
  float v28;
  float v29;
  _BOOL4 v30;
  __int64 v31;
  float v32;
  float v33;
  _BOOL4 v34;
  __int64 v35;
  float v36;
  float v37;
  _BOOL4 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  bool v44;
  __int64 v45;
  float v46;
  _BOOL4 v47;
  __int64 v48;
  __int64 v49;
  float v50;
  float v51;
  _BOOL4 v52;
  __int64 v53;
  float v54;
  float v55;
  _BOOL4 v56;
  __int64 v57;
  float v58;
  float v59;
  _BOOL4 v60;
  __int64 v61;
  __int64 v62;
  float v63;
  float v64;
  float v65;
  bool v66;
  __int64 v67;
  float v68;
  _BOOL4 v69;
  __int64 v70;
  __int64 v71;
  float v72;
  float v73;
  _BOOL4 v74;
  __int64 v75;
  float v76;
  float v77;
  _BOOL4 v78;
  __int64 v79;
  __int64 v80;
  float v81;
  float v82;
  float v83;
  bool v84;
  __int64 v85;
  float v86;
  _BOOL4 v87;
  float v88;
  float v89;
  _BOOL4 v90;
  float v91;
  float v92;
  _BOOL4 v93;
  __int64 v94;
  __int64 v95;
  float v96;
  __int128 v97;
  __int64 v98;
  float v99;
  float v100;
  bool v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  float v105;
  bool v106;
  __int64* v107;
  __int64* v108;
  __int64 v109;
  float v110;
  _BOOL4 v111;
  __int64 v112;
  float v113;
  bool v114;
  __int64 v115;
  __int64* v116;
  __int64* v117;
  float v118;
  __int128 v119;
  __int64 v120;
  float v121;
  bool v122;
  __int64 v123;
  float v124;
  _BOOL4 v125;
  __int64* v126;
  char v127;
  char v128;
  __int64 v129;
  float v130;
  bool v131;
  __int64 v132;
  float v133;
  bool v134;
  __int64* v135;
  float v136;
  _BOOL4 v137;
  __int64* v138;
  __int64 v139;
  float v140;
  bool v141;
  __int64 v142;
  __int64 v143;
  float v144;
  __int128 v145;
  __int64 v146;
  float v147;
  _BOOL4 v148;
  __int64 v149;
  float v150;
  bool v151;
  __int64* v152;
  __int64 v153;
  __int64 v154;
  float v155;
  float v156;
  float v157;
  bool v158;
  __int64 v159;
  float v160;
  _BOOL4 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  float v166;
  float v167;
  _BOOL4 v168;
  __int64 v169;
  __int64 v170;
  float v171;
  float v172;
  float v173;
  bool v174;
  __int64 v175;
  float v176;
  _BOOL4 v177;
  __int64 v178;
  __int64 v179;
  float v180;
  float v181;
  float v182;
  bool v183;
  __int64 v184;
  float v185;
  _BOOL4 v186;
  __int64* v187;
  bool v189;
  __int64 v190;
  __int64* v191;
  __int64* v192;
  __int64 v193;
  __int64 v194;
  float v195;
  float v196;
  _BOOL4 v197;
  __int64 v198;
  float v199;
  float v200;
  bool v201;
  signed __int64 v202;
  signed __int64 v203;
  signed __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64* v207;
  __int64 v208;
  __int64 v209;
  float v210;
  float v211;
  _BOOL4 v212;
  __int64* v213;
  float v214;
  __int64 v215;
  float v216;
  bool v217;
  float v218;
  float v219;
  __int64* v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  float v224;
  float v225;
  _BOOL4 v226;
  bool v227;
  __int64 v228;
  __int64 v229;
  __int64* v230;
  __int64* v231;
  __int64 v232;
  __int64 v233;
  float v234;
  float v235;
  __int64 v236;
  __int64* v237;
  __int64* v238;
  __int64 v239;
  __int64 v240;
  unsigned __int64 v241;
  unsigned __int64 v242;
  __int64 v243;
  __int64* v244;
  __int64 v245;
  float v246;
  float v247;
  _BOOL4 v248;
  __int64* v249;
  float v250;
  float v251;
  bool v252;
  float v253;
  float v254;
  _BOOL4 v255;
  __int64 v256;
  __int64 v257;
  float v258;
  float v259;
  float v260;
  _BOOL4 v261;
  bool v262;
  float v263;
  float v264;
  _BOOL4 v265;
  __int64 v266;
  __int64 v267;
  float v268;
  float v269;
  _BOOL4 v270;
  __int64* v271;
  float v272;
  float v273;
  bool v274;
  float v275;
  float v276;
  _BOOL4 v277;
  __int64 v278;
  float v279;
  float v280;
  _BOOL4 v281;
  float v282;
  float v283;
  _BOOL4 v284;
  __int64 v285;
  float v286;
  float v287;
  _BOOL4 v288;
  __int64 v289;
  float v290;
  float v291;
  _BOOL4 v292;
  float v293;
  float v294;
  _BOOL4 v295;
  float v296;
  float v297;
  _BOOL4 v298;
  __int64 v299;
  float v300;
  float v301;
  _BOOL4 v302;
  __int64 v303;
  float v304;
  float v305;
  _BOOL4 v306;
  __int64 v307;
  float v308;
  float v309;
  _BOOL4 v310;
  float v311;
  float v312;
  int v313;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v169 = *v8;
            v170 = v8[1];
            v171 = *(float*)(v170 + 40);
            v172 = *(float*)(*v8 + 40);
            v173 = *(float*)(v170 + 32);
            if ((float)((float)(v171 - v172) * (float)(v171 - v172)) <= 100.0) {
              v174 = v173 < *(float*)(*v8 + 32);
            }
            else {
              v174 = v171 < v172;
            }
            v175 = *(a2 - 1);
            v176 = *(float*)(v175 + 40);
            v177 = *(float*)(v175 + 32) < v173;
            if ((float)((float)(v176 - v171) * (float)(v176 - v171)) > 100.0) {
              v177 = v176 < v171;
            }
            if (v174) {
              if (v177) {
                *v8 = v175;
                *(a2 - 1) = v169;
              }
              else {
                *v8 = v170;
                v8[1] = v169;
                v278 = *(a2 - 1);
                v279 = *(float*)(v169 + 40);
                v280 = *(float*)(v278 + 40);
                v281 = *(float*)(v278 + 32) < *(float*)(v169 + 32);
                if ((float)((float)(v280 - v279) * (float)(v280 - v279)) >
                    100.0) {
                  v281 = v280 < v279;
                }
                if (v281) {
                  v8[1] = v278;
                  *(a2 - 1) = v169;
                }
              }
              return result;
            }
            if (!v177) {
              return result;
            }
            v8[1] = v175;
            *(a2 - 1) = v170;
            v257 = *v8;
            v256 = v8[1];
            v258 = *(float*)(v256 + 40);
            v259 = *(float*)(*v8 + 40);
            v260 = (float)(v258 - v259) * (float)(v258 - v259);
            v261 = *(float*)(v256 + 32) < *(float*)(*v8 + 32);
            v262 = v258 < v259;
          LABEL_338:
            v313 = v262;
            if (v260 > 100.0) {
              v261 = v313;
            }
            if (v261) {
              *v8 = v256;
              v8[1] = v257;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 != 5) {
              goto LABEL_10;
            }
            v154 = *v8;
            v153 = v8[1];
            v155 = *(float*)(v153 + 40);
            v156 = *(float*)(*v8 + 40);
            v157 = *(float*)(v153 + 32);
            if ((float)((float)(v155 - v156) * (float)(v155 - v156)) <= 100.0) {
              v158 = v157 < *(float*)(*v8 + 32);
            }
            else {
              v158 = v155 < v156;
            }
            v159 = v8[2];
            v160 = *(float*)(v159 + 40);
            v161 = *(float*)(v159 + 32) < v157;
            if ((float)((float)(v160 - v155) * (float)(v160 - v155)) > 100.0) {
              v161 = v160 < v155;
            }
            if (v158) {
              if (v161) {
                *v8 = v159;
                v8[2] = v154;
                v162 = v159;
                v163 = v153;
              LABEL_297:
                v153 = v154;
              LABEL_316:
                v289 = v8[3];
                v290 = *(float*)(v153 + 40);
                v291 = *(float*)(v289 + 40);
                v292 = *(float*)(v289 + 32) < *(float*)(v153 + 32);
                if ((float)((float)(v291 - v290) * (float)(v291 - v290)) >
                    100.0) {
                  v292 = v291 < v290;
                }
                if (v292) {
                  v8[2] = v289;
                  v8[3] = v153;
                  v293 = *(float*)(v289 + 40);
                  v294 = *(float*)(v163 + 40);
                  v295 = *(float*)(v289 + 32) < *(float*)(v163 + 32);
                  if ((float)((float)(v293 - v294) * (float)(v293 - v294)) >
                      100.0) {
                    v295 = v293 < v294;
                  }
                  if (v295) {
                    v8[1] = v289;
                    v8[2] = v163;
                    v296 = *(float*)(v289 + 40);
                    v297 = *(float*)(v162 + 40);
                    v298 = *(float*)(v289 + 32) < *(float*)(v162 + 32);
                    if ((float)((float)(v296 - v297) * (float)(v296 - v297)) >
                        100.0) {
                      v298 = v296 < v297;
                    }
                    if (v298) {
                      *v8 = v289;
                      v8[1] = v162;
                    }
                  }
                }
                else {
                  v153 = v8[3];
                }
                v299 = *(a2 - 1);
                v300 = *(float*)(v153 + 40);
                v301 = *(float*)(v299 + 40);
                v302 = *(float*)(v299 + 32) < *(float*)(v153 + 32);
                if ((float)((float)(v301 - v300) * (float)(v301 - v300)) >
                    100.0) {
                  v302 = v301 < v300;
                }
                if (!v302) {
                  return result;
                }
                v8[3] = v299;
                *(a2 - 1) = v153;
                v303 = v8[2];
                v256 = v8[3];
                v304 = *(float*)(v256 + 40);
                v305 = *(float*)(v303 + 40);
                v306 = *(float*)(v256 + 32) < *(float*)(v303 + 32);
                if ((float)((float)(v304 - v305) * (float)(v304 - v305)) >
                    100.0) {
                  v306 = v304 < v305;
                }
                if (!v306) {
                  return result;
                }
                v8[2] = v256;
                v8[3] = v303;
              LABEL_334:
                v307 = v8[1];
                v308 = *(float*)(v256 + 40);
                v309 = *(float*)(v307 + 40);
                v310 = *(float*)(v256 + 32) < *(float*)(v307 + 32);
                if ((float)((float)(v308 - v309) * (float)(v308 - v309)) >
                    100.0) {
                  v310 = v308 < v309;
                }
                if (!v310) {
                  return result;
                }
                v8[1] = v256;
                v8[2] = v307;
                v257 = *v8;
                v311 = *(float*)(v256 + 40);
                v312 = *(float*)(*v8 + 40);
                v261 = *(float*)(v256 + 32) < *(float*)(*v8 + 32);
                v262 = v311 < v312;
                v260 = (float)(v311 - v312) * (float)(v311 - v312);
                goto LABEL_338;
              }
              *v8 = v153;
              v8[1] = v154;
              v275 = *(float*)(v159 + 40);
              v276 = *(float*)(v154 + 40);
              v277 = *(float*)(v159 + 32) < *(float*)(v154 + 32);
              if ((float)((float)(v275 - v276) * (float)(v275 - v276)) >
                  100.0) {
                v277 = v275 < v276;
              }
              if (v277) {
                v8[1] = v159;
                v8[2] = v154;
                v162 = v153;
                v163 = v159;
                goto LABEL_297;
              }
              v162 = v153;
              v163 = v154;
            }
            else {
              if (v161) {
                v8[1] = v159;
                v8[2] = v153;
                v253 = *(float*)(v159 + 40);
                v254 = *(float*)(v154 + 40);
                v255 = *(float*)(v159 + 32) < *(float*)(v154 + 32);
                if ((float)((float)(v253 - v254) * (float)(v253 - v254)) >
                    100.0) {
                  v255 = v253 < v254;
                }
                if (v255) {
                  *v8 = v159;
                  v8[1] = v154;
                  v162 = v159;
                  v163 = v154;
                }
                else {
                  v162 = v154;
                  v163 = v159;
                }
                goto LABEL_316;
              }
              v162 = *v8;
              v163 = v8[1];
            }
            v153 = v159;
            goto LABEL_316;
          }
          v179 = *v8;
          v178 = v8[1];
          v180 = *(float*)(v178 + 40);
          v181 = *(float*)(*v8 + 40);
          v182 = *(float*)(v178 + 32);
          if ((float)((float)(v180 - v181) * (float)(v180 - v181)) <= 100.0) {
            v183 = v182 < *(float*)(*v8 + 32);
          }
          else {
            v183 = v180 < v181;
          }
          v184 = v8[2];
          v185 = *(float*)(v184 + 40);
          v186 = *(float*)(v184 + 32) < v182;
          if ((float)((float)(v185 - v180) * (float)(v185 - v180)) > 100.0) {
            v186 = v185 < v180;
          }
          if (v183) {
            if (v186) {
              *v8 = v184;
            LABEL_307:
              v8[2] = v179;
              v178 = v179;
            LABEL_309:
              v285 = *(a2 - 1);
              v286 = *(float*)(v178 + 40);
              v287 = *(float*)(v285 + 40);
              v288 = *(float*)(v285 + 32) < *(float*)(v178 + 32);
              if ((float)((float)(v287 - v286) * (float)(v287 - v286)) >
                  100.0) {
                v288 = v287 < v286;
              }
              if (!v288) {
                return result;
              }
              v8[2] = v285;
              *(a2 - 1) = v178;
              v256 = v8[2];
              goto LABEL_334;
            }
            *v8 = v178;
            v8[1] = v179;
            v282 = *(float*)(v184 + 40);
            v283 = *(float*)(v179 + 40);
            v284 = *(float*)(v184 + 32) < *(float*)(v179 + 32);
            if ((float)((float)(v282 - v283) * (float)(v282 - v283)) > 100.0) {
              v284 = v282 < v283;
            }
            if (v284) {
              v8[1] = v184;
              goto LABEL_307;
            }
          }
          else if (v186) {
            v8[1] = v184;
            v8[2] = v178;
            v263 = *(float*)(v184 + 40);
            v264 = *(float*)(v179 + 40);
            v265 = *(float*)(v184 + 32) < *(float*)(v179 + 32);
            if ((float)((float)(v263 - v264) * (float)(v263 - v264)) > 100.0) {
              v265 = v263 < v264;
            }
            if (v265) {
              *v8 = v184;
              v8[1] = v179;
            }
            goto LABEL_309;
          }
          v178 = v184;
          goto LABEL_309;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v164 = *(a2 - 1);
          v165 = *v8;
          v166 = *(float*)(v164 + 40);
          v167 = *(float*)(*v8 + 40);
          v168 = *(float*)(v164 + 32) < *(float*)(*v8 + 32);
          if ((float)((float)(v166 - v167) * (float)(v166 - v167)) > 100.0) {
            v168 = v166 < v167;
          }
          if (v168) {
            *v8 = v164;
            *(a2 - 1) = v165;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v187 = v8 + 1;
          v189 = v8 == a2 || v187 == a2;
          if ((a4 & 1) != 0) {
            if (!v189) {
              v190 = 0;
              v191 = v8;
              do {
                v194 = *v191;
                v193 = v191[1];
                v191 = v187;
                v195 = *(float*)(v193 + 40);
                v196 = *(float*)(v194 + 40);
                v197 = *(float*)(v193 + 32) < *(float*)(v194 + 32);
                if ((float)((float)(v195 - v196) * (float)(v195 - v196)) >
                    100.0) {
                  v197 = v195 < v196;
                }
                if (v197) {
                  v198 = v190;
                  do {
                    *(__int64*)((char*)v8 + v198 + 8) = v194;
                    if (v198 == 0) {
                      v192 = v8;
                      goto LABEL_211;
                    }
                    v194 = *(__int64*)((char*)v8 + v198 - 8);
                    v199 = *(float*)(v193 + 40);
                    v198 -= 8;
                    v200 = *(float*)(v194 + 40);
                    v201 = *(float*)(v193 + 32) < *(float*)(v194 + 32);
                    if ((float)((float)(v199 - v200) * (float)(v199 - v200)) >
                        100.0) {
                      v201 = v199 < v200;
                    }
                  } while (v201);
                  v192 = (__int64*)((char*)v8 + v198 + 8);
                LABEL_211:
                  *v192 = v193;
                }
                v187 = v191 + 1;
                v190 += 8;
              } while (v191 + 1 != a2);
            }
          }
          else if (!v189) {
            do {
              v267 = *v7;
              v266 = v7[1];
              v7 = v187;
              v268 = *(float*)(v266 + 40);
              v269 = *(float*)(v267 + 40);
              v270 = *(float*)(v266 + 32) < *(float*)(v267 + 32);
              if ((float)((float)(v268 - v269) * (float)(v268 - v269)) >
                  100.0) {
                v270 = v268 < v269;
              }
              if (v270) {
                v271 = v187;
                do {
                  *v271 = v267;
                  v267 = *(v271 - 2);
                  --v271;
                  v272 = *(float*)(v266 + 40);
                  v273 = *(float*)(v267 + 40);
                  v274 = *(float*)(v266 + 32) < *(float*)(v267 + 32);
                  if ((float)((float)(v272 - v273) * (float)(v272 - v273)) >
                      100.0) {
                    v274 = v272 < v273;
                  }
                } while (v274);
                *v271 = v266;
              }
              v187 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v202 = (unsigned __int64)(v9 - 2) >> 1;
            v203 = v202;
            do {
              v204 = v203;
              if (v202 >= v203) {
                v205 = (2 * (v203 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v206 = 2 * v203 + 2;
                v207 = &v8[v205];
                v208 = *v207;
                if (v206 < v9) {
                  v209 = v207[1];
                  v210 = *(float*)(v208 + 40);
                  v211 = *(float*)(v209 + 40);
                  v212 = *(float*)(v208 + 32) < *(float*)(v209 + 32);
                  result = v210 < v211;
                  if ((float)((float)(v210 - v211) * (float)(v210 - v211)) >
                      100.0) {
                    v212 = v210 < v211;
                  }
                  if (v212) {
                    v208 = v207[1];
                    ++v207;
                    v205 = 2 * v204 + 2;
                  }
                }
                v213 = &v8[v204];
                v214 = *(float*)(v208 + 40);
                v215 = *v213;
                v216 = *(float*)(*v213 + 40);
                v217 = *(float*)(v208 + 32) < *(float*)(*v213 + 32);
                if ((float)((float)(v214 - v216) * (float)(v214 - v216)) >
                    100.0) {
                  v217 = v214 < v216;
                }
                if (!v217) {
                  do {
                    v220 = v207;
                    *v213 = v208;
                    if (v202 < v205) {
                      break;
                    }
                    v221 = (2 * v205) | 1;
                    v222 = 2 * v205 + 2;
                    v207 = &v8[v221];
                    v208 = *v207;
                    if (v222 < v9) {
                      v223 = v207[1];
                      v224 = *(float*)(v208 + 40);
                      v225 = *(float*)(v223 + 40);
                      v226 = *(float*)(v208 + 32) < *(float*)(v223 + 32);
                      if ((float)((float)(v224 - v225) * (float)(v224 - v225)) >
                          100.0) {
                        v226 = v224 < v225;
                      }
                      if (v226) {
                        v208 = v207[1];
                        ++v207;
                        v221 = v222;
                      }
                    }
                    v218 = *(float*)(v208 + 40);
                    v219 = *(float*)(v215 + 40);
                    result = (float)((float)(v218 - v219) *
                                     (float)(v218 - v219)) <= 100.0
                                 ? *(float*)(v208 + 32) < *(float*)(v215 + 32)
                                 : v218 < v219;
                    v213 = v220;
                    v205 = v221;
                  } while ((_DWORD)result != 1);
                  *v220 = v215;
                }
              }
              v203 = v204 - 1;
            } while (v204 != 0);
            do {
              v228 = *v8;
              v229 = 0;
              v230 = v8;
              do {
                v238 = &v230[v229];
                v237 = v238 + 1;
                v236 = v238[1];
                v239 = (2 * v229) | 1;
                v229 = 2 * v229 + 2;
                if (v229 < v9) {
                  v233 = v238[2];
                  v231 = v238 + 2;
                  v232 = v233;
                  v234 = *(float*)(v236 + 40);
                  v235 = *(float*)(v233 + 40);
                  LODWORD(result) = *(float*)(v236 + 32) < *(float*)(v233 + 32);
                  if ((float)((float)(v234 - v235) * (float)(v234 - v235)) <=
                      100.0) {
                    result = (unsigned int)result;
                  }
                  else {
                    result = v234 < v235;
                  }
                  if ((_DWORD)result != 0) {
                    v236 = v232;
                    v237 = v231;
                  }
                  else {
                    v229 = v239;
                  }
                }
                else {
                  v229 = v239;
                }
                *v230 = v236;
                v230 = v237;
              } while (v229 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v237 == --a2) {
                *v237 = v228;
              }
              else {
                *v237 = *a2;
                *a2 = v228;
                v240 = ((char*)v237 - (char*)v8 + 8) >> 3;
                v227 = v240 < 2;
                v241 = v240 - 2;
                if (!v227) {
                  v242 = v241 >> 1;
                  v243 = *v237;
                  v244 = &v8[v242];
                  v245 = *v244;
                  v246 = *(float*)(*v237 + 40);
                  v247 = *(float*)(*v244 + 40);
                  v248 = *(float*)(*v244 + 32) < *(float*)(*v237 + 32);
                  if ((float)((float)(v247 - v246) * (float)(v247 - v246)) >
                      100.0) {
                    v248 = v247 < v246;
                  }
                  if (v248) {
                    do {
                      v249 = v244;
                      *v237 = v245;
                      if (v242 == 0) {
                        break;
                      }
                      v250 = *(float*)(v243 + 40);
                      v242 = (v242 - 1) >> 1;
                      v244 = &v8[v242];
                      v245 = *v244;
                      v251 = *(float*)(*v244 + 40);
                      v252 = v251 < v250;
                      if ((float)((float)(v251 - v250) *
                                  (float)(v251 - v250)) <= 100.0) {
                        v252 = *(float*)(*v244 + 32) < *(float*)(v243 + 32);
                      }
                      v237 = v249;
                    } while (v252);
                    *v249 = v243;
                  }
                }
              }
              v227 = v9-- <= 2;
            } while (!v227);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(float*)(v10 + 40);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(float*)(*v11 + 40);
          v16 = *(float*)(*v8 + 40);
          v17 = *(float*)(*v11 + 32);
          v18 = v15 < v16;
          if ((float)((float)(v15 - v16) * (float)(v15 - v16)) <= 100.0) {
            v18 = v17 < *(float*)(*v8 + 32);
          }
          v19 = *(float*)(v10 + 32) < v17;
          if ((float)((float)(v12 - v15) * (float)(v12 - v15)) > 100.0) {
            v19 = v12 < v15;
          }
          if (v18) {
            if (v19) {
              *v8 = v10;
            LABEL_41:
              *(a2 - 1) = v14;
              goto LABEL_42;
            }
            *v8 = v13;
            *v11 = v14;
            v35 = *(a2 - 1);
            v36 = *(float*)(v14 + 40);
            v37 = *(float*)(v35 + 40);
            v38 = *(float*)(v35 + 32) < *(float*)(v14 + 32);
            if ((float)((float)(v37 - v36) * (float)(v37 - v36)) > 100.0) {
              v38 = v37 < v36;
            }
            if (v38) {
              *v11 = v35;
              goto LABEL_41;
            }
          }
          else if (v19) {
            *v11 = v10;
            *(a2 - 1) = v13;
            v27 = *v8;
            v28 = *(float*)(*v11 + 40);
            v29 = *(float*)(*v8 + 40);
            v30 = *(float*)(*v11 + 32) < *(float*)(*v8 + 32);
            if ((float)((float)(v28 - v29) * (float)(v28 - v29)) > 100.0) {
              v30 = v28 < v29;
            }
            if (v30) {
              *v8 = *v11;
              *v11 = v27;
            }
          }
        LABEL_42:
          v39 = *(v11 - 1);
          v40 = v8[1];
          v41 = *(float*)(v39 + 40);
          v42 = *(float*)(v40 + 40);
          v43 = *(float*)(v39 + 32);
          if ((float)((float)(v41 - v42) * (float)(v41 - v42)) <= 100.0) {
            v44 = v43 < *(float*)(v40 + 32);
          }
          else {
            v44 = v41 < v42;
          }
          v45 = *(a2 - 2);
          v46 = *(float*)(v45 + 40);
          v47 = *(float*)(v45 + 32) < v43;
          if ((float)((float)(v46 - v41) * (float)(v46 - v41)) > 100.0) {
            v47 = v46 < v41;
          }
          if (v44) {
            if (v47) {
              v8[1] = v45;
            LABEL_64:
              *(a2 - 2) = v40;
              goto LABEL_65;
            }
            v8[1] = v39;
            *(v11 - 1) = v40;
            v57 = *(a2 - 2);
            v58 = *(float*)(v40 + 40);
            v59 = *(float*)(v57 + 40);
            v60 = *(float*)(v57 + 32) < *(float*)(v40 + 32);
            if ((float)((float)(v59 - v58) * (float)(v59 - v58)) > 100.0) {
              v60 = v59 < v58;
            }
            if (v60) {
              *(v11 - 1) = v57;
              goto LABEL_64;
            }
          }
          else if (v47) {
            *(v11 - 1) = v45;
            *(a2 - 2) = v39;
            v48 = *(v11 - 1);
            v49 = v8[1];
            v50 = *(float*)(v48 + 40);
            v51 = *(float*)(v49 + 40);
            v52 = *(float*)(v48 + 32) < *(float*)(v49 + 32);
            if ((float)((float)(v50 - v51) * (float)(v50 - v51)) > 100.0) {
              v52 = v50 < v51;
            }
            if (v52) {
              v8[1] = v48;
              *(v11 - 1) = v49;
            }
          }
        LABEL_65:
          v61 = v11[1];
          v62 = v8[2];
          v63 = *(float*)(v61 + 40);
          v64 = *(float*)(v62 + 40);
          v65 = *(float*)(v61 + 32);
          if ((float)((float)(v63 - v64) * (float)(v63 - v64)) <= 100.0) {
            v66 = v65 < *(float*)(v62 + 32);
          }
          else {
            v66 = v63 < v64;
          }
          v67 = *(a2 - 3);
          v68 = *(float*)(v67 + 40);
          v69 = *(float*)(v67 + 32) < v65;
          if ((float)((float)(v68 - v63) * (float)(v68 - v63)) > 100.0) {
            v69 = v68 < v63;
          }
          if (v66) {
            if (v69) {
              v8[2] = v67;
            LABEL_82:
              *(a2 - 3) = v62;
              goto LABEL_83;
            }
            v8[2] = v61;
            v11[1] = v62;
            v75 = *(a2 - 3);
            v76 = *(float*)(v62 + 40);
            v77 = *(float*)(v75 + 40);
            v78 = *(float*)(v75 + 32) < *(float*)(v62 + 32);
            if ((float)((float)(v77 - v76) * (float)(v77 - v76)) > 100.0) {
              v78 = v77 < v76;
            }
            if (v78) {
              v11[1] = v75;
              goto LABEL_82;
            }
          }
          else if (v69) {
            v11[1] = v67;
            *(a2 - 3) = v61;
            v70 = v11[1];
            v71 = v8[2];
            v72 = *(float*)(v70 + 40);
            v73 = *(float*)(v71 + 40);
            v74 = *(float*)(v70 + 32) < *(float*)(v71 + 32);
            if ((float)((float)(v72 - v73) * (float)(v72 - v73)) > 100.0) {
              v74 = v72 < v73;
            }
            if (v74) {
              v8[2] = v70;
              v11[1] = v71;
            }
          }
        LABEL_83:
          v79 = *(v11 - 1);
          v80 = *v11;
          v81 = *(float*)(*v11 + 40);
          v82 = *(float*)(v79 + 40);
          v83 = *(float*)(*v11 + 32);
          if ((float)((float)(v81 - v82) * (float)(v81 - v82)) <= 100.0) {
            v84 = v83 < *(float*)(v79 + 32);
          }
          else {
            v84 = v81 < v82;
          }
          v85 = v11[1];
          v86 = *(float*)(v85 + 40);
          v87 = *(float*)(v85 + 32) < v83;
          if ((float)((float)(v86 - v81) * (float)(v86 - v81)) > 100.0) {
            v87 = v86 < v81;
          }
          if (v84) {
            if (v87) {
              *(v11 - 1) = v85;
              v11[1] = v79;
            LABEL_96:
              v79 = v80;
              goto LABEL_102;
            }
            *(v11 - 1) = v80;
            *v11 = v79;
            v91 = *(float*)(v85 + 40);
            v92 = *(float*)(v79 + 40);
            v93 = *(float*)(v85 + 32) < *(float*)(v79 + 32);
            if ((float)((float)(v91 - v92) * (float)(v91 - v92)) > 100.0) {
              v93 = v91 < v92;
            }
            if (!v93) {
              goto LABEL_102;
            }
            *v11 = v85;
            v11[1] = v79;
          }
          else {
            if (!v87) {
              goto LABEL_96;
            }
            *v11 = v85;
            v11[1] = v80;
            v88 = *(float*)(v85 + 40);
            v89 = *(float*)(v79 + 40);
            v90 = *(float*)(v85 + 32) < *(float*)(v79 + 32);
            if ((float)((float)(v88 - v89) * (float)(v88 - v89)) > 100.0) {
              v90 = v88 < v89;
            }
            if (v90) {
              *(v11 - 1) = v85;
              *v11 = v79;
            LABEL_102:
              v94 = *v8;
              *v8 = v79;
              *v11 = v94;
              goto LABEL_103;
            }
          }
          v79 = v85;
          goto LABEL_102;
        }
        v20 = *v8;
        v21 = *v11;
        v22 = *(float*)(*v8 + 40);
        v23 = *(float*)(*v11 + 40);
        v24 = *(float*)(*v8 + 32);
        v25 = v22 < v23;
        if ((float)((float)(v22 - v23) * (float)(v22 - v23)) <= 100.0) {
          v25 = v24 < *(float*)(*v11 + 32);
        }
        v26 = *(float*)(v10 + 32) < v24;
        if ((float)((float)(v12 - v22) * (float)(v12 - v22)) > 100.0) {
          v26 = v12 < v22;
        }
        if (v25) {
          if (v26) {
            *v11 = v10;
          LABEL_59:
            *(a2 - 1) = v21;
            goto LABEL_103;
          }
          *v11 = v20;
          *v8 = v21;
          v53 = *(a2 - 1);
          v54 = *(float*)(v21 + 40);
          v55 = *(float*)(v53 + 40);
          v56 = *(float*)(v53 + 32) < *(float*)(v21 + 32);
          if ((float)((float)(v55 - v54) * (float)(v55 - v54)) > 100.0) {
            v56 = v55 < v54;
          }
          if (v56) {
            *v8 = v53;
            goto LABEL_59;
          }
        }
        else if (v26) {
          *v8 = v10;
          *(a2 - 1) = v20;
          v31 = *v11;
          v32 = *(float*)(*v8 + 40);
          v33 = *(float*)(*v11 + 40);
          v34 = *(float*)(*v8 + 32) < *(float*)(*v11 + 32);
          if ((float)((float)(v32 - v33) * (float)(v32 - v33)) > 100.0) {
            v34 = v32 < v33;
          }
          if (v34) {
            *v11 = *v8;
            *v8 = v31;
          }
        }
      LABEL_103:
        v95 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v98 = *(v8 - 1);
        v99 = *(float*)(v95 + 40);
        v100 = *(float*)(v98 + 40);
        v97 = *(_OWORD*)(v95 + 32);
        v101 = *(float*)(v98 + 32) < *(float*)&v97;
        if ((float)((float)(v100 - v99) * (float)(v100 - v99)) > 100.0) {
          v101 = v100 < v99;
        }
        if (v101) {
          LODWORD(v96) = *(_QWORD*)(v95 + 40);
          goto LABEL_109;
        }
        v129 = *(a2 - 1);
        v130 = *(float*)(v129 + 40);
        v131 = *(float*)&v97 < *(float*)(v129 + 32);
        if ((float)((float)(v99 - v130) * (float)(v99 - v130)) > 100.0) {
          v131 = v99 < v130;
        }
        if (v131) {
          do {
            v132 = v8[1];
            ++v8;
            v133 = *(float*)(v132 + 40);
            v134 = *(float*)&v97 < *(float*)(v132 + 32);
            if ((float)((float)(v99 - v133) * (float)(v99 - v133)) > 100.0) {
              v134 = v99 < v133;
            }
          } while (!v134);
        }
        else {
          v135 = v8 + 1;
          do {
            v8 = v135;
            if (v135 >= a2) {
              break;
            }
            ++v135;
            v136 = *(float*)(*v8 + 40);
            v137 = *(float*)&v97 < *(float*)(*v8 + 32);
            if ((float)((float)(v99 - v136) * (float)(v99 - v136)) > 100.0) {
              v137 = v99 < v136;
            }
          } while (!v137);
        }
        v138 = a2;
        if (v8 < a2) {
          v138 = a2;
          do {
            v139 = *--v138;
            v140 = *(float*)(v139 + 40);
            v141 = *(float*)&v97 < *(float*)(v139 + 32);
            if ((float)((float)(v99 - v140) * (float)(v99 - v140)) > 100.0) {
              v141 = v99 < v140;
            }
          } while (v141);
        }
        if (v8 < v138) {
          v142 = *v8;
          v143 = *v138;
          do {
            *v8 = v143;
            *v138 = v142;
            v144 = *(float*)(v95 + 40);
            v145 = *(_OWORD*)(v95 + 32);
            do {
              v146 = v8[1];
              ++v8;
              v142 = v146;
              v147 = *(float*)(v146 + 40);
              v148 = *(float*)&v145 < *(float*)(v146 + 32);
              if ((float)((float)(v144 - v147) * (float)(v144 - v147)) >
                  100.0) {
                v148 = v144 < v147;
              }
            } while (!v148);
            do {
              v149 = *--v138;
              v143 = v149;
              v150 = *(float*)(v149 + 40);
              v151 = *(float*)&v145 < *(float*)(v149 + 32);
              if ((float)((float)(v144 - v150) * (float)(v144 - v150)) >
                  100.0) {
                v151 = v144 < v150;
              }
            } while (v151);
          } while (v8 < v138);
        }
        v152 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v152;
        }
        a4 = 0;
        *v152 = v95;
      }
      v96 = *(float*)(v95 + 40);
      LODWORD(v97) = *(_DWORD*)(v95 + 32);
    LABEL_109:
      v102 = 0;
      do {
        v103 = &v8[v102++];
        v104 = v103[1];
        v105 = *(float*)(v104 + 40);
        v106 = *(float*)(v104 + 32) < *(float*)&v97;
        if ((float)((float)(v105 - v96) * (float)(v105 - v96)) > 100.0) {
          v106 = v105 < v96;
        }
      } while (v106);
      v107 = &v8[v102];
      v108 = a2;
      if (v102 == 1) {
        v108 = a2;
        do {
          if (v107 >= v108) {
            break;
          }
          v112 = *--v108;
          v113 = *(float*)(v112 + 40);
          v114 = *(float*)(v112 + 32) < *(float*)&v97;
          if ((float)((float)(v113 - v96) * (float)(v113 - v96)) > 100.0) {
            v114 = v113 < v96;
          }
        } while (!v114);
      }
      else {
        do {
          v109 = *--v108;
          v110 = *(float*)(v109 + 40);
          v111 = *(float*)(v109 + 32) < *(float*)&v97;
          if ((float)((float)(v110 - v96) * (float)(v110 - v96)) > 100.0) {
            v111 = v110 < v96;
          }
        } while (!v111);
      }
      if (v107 >= v108) {
        v126 = v107 - 1;
        if (v8 == v107 - 1) {
          goto LABEL_137;
        }
      LABEL_136:
        *v8 = *v126;
        goto LABEL_137;
      }
      v115 = *v108;
      v116 = v107;
      v117 = v108;
      do {
        *v116 = v115;
        *v117 = v104;
        v118 = *(float*)(v95 + 40);
        v119 = *(_OWORD*)(v95 + 32);
        do {
          v120 = v116[1];
          ++v116;
          v104 = v120;
          v121 = *(float*)(v120 + 40);
          v122 = *(float*)(v120 + 32) < *(float*)&v119;
          if ((float)((float)(v121 - v118) * (float)(v121 - v118)) > 100.0) {
            v122 = v121 < v118;
          }
        } while (v122);
        do {
          v123 = *--v117;
          v115 = v123;
          v124 = *(float*)(v123 + 40);
          v125 = *(float*)(v123 + 32) < *(float*)&v119;
          if ((float)((float)(v124 - v118) * (float)(v124 - v118)) > 100.0) {
            v125 = v124 < v118;
          }
        } while (!v125);
      } while (v116 < v117);
      v126 = v116 - 1;
      if (v8 != v116 - 1) {
        goto LABEL_136;
      }
    LABEL_137:
      *v126 = v95;
      if (v107 < v108) {
        goto LABEL_140;
      }
      v127 = SpotMgr_133a380(v8, v126);
      v8 = v126 + 1;
      v128 = v127;
      result = SpotMgr_133a380(v126 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if ((v128 & 1) == 0) {
      LABEL_140:
        result = SpotMgr_1338da0(v7, v126, a3, a4 & 1);
        a4 = 0;
        v8 = v126 + 1;
      }
    }
    a2 = v126;
    if ((v128 & 1) == 0) {
      continue;
    }
    return result;
  }
}

bool SpotMgr_133a380(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  bool v9;
  __int64 v10;
  float v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  bool v25;
  __int64 v26;
  float v27;
  _BOOL4 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  bool v36;
  float v37;
  _BOOL4 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  bool v44;
  __int64 v45;
  float v46;
  _BOOL4 v47;
  __int64 v48;
  __int64 v49;
  float v50;
  float v51;
  float v52;
  _BOOL4 v53;
  bool v54;
  float v55;
  float v56;
  _BOOL4 v57;
  float v58;
  float v59;
  _BOOL4 v60;
  float v61;
  float v62;
  _BOOL4 v63;
  __int64 v64;
  float v65;
  float v66;
  _BOOL4 v67;
  float v68;
  float v69;
  _BOOL4 v70;
  __int64* v71;
  __int64 v72;
  int v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  float v77;
  float v78;
  _BOOL4 v79;
  __int64 v80;
  __int64 v81;
  float v82;
  float v83;
  bool v84;
  float v85;
  float v86;
  _BOOL4 v87;
  float v88;
  float v89;
  _BOOL4 v90;
  __int64 v91;
  float v92;
  float v93;
  _BOOL4 v94;
  __int64 v95;
  float v96;
  float v97;
  _BOOL4 v98;
  float v99;
  float v100;
  _BOOL4 v101;
  float v102;
  float v103;
  _BOOL4 v104;
  __int64 v105;
  float v106;
  float v107;
  _BOOL4 v108;
  __int64 v109;
  float v110;
  float v111;
  _BOOL4 v112;
  __int64 v113;
  float v114;
  float v115;
  _BOOL4 v116;
  float v117;
  float v118;
  int v119;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v20 = *a1;
      v21 = a1[1];
      v22 = *(float*)(v21 + 40);
      v23 = *(float*)(*a1 + 40);
      v24 = *(float*)(v21 + 32);
      if ((float)((float)(v22 - v23) * (float)(v22 - v23)) <= 100.0) {
        v25 = v24 < *(float*)(*a1 + 32);
      }
      else {
        v25 = v22 < v23;
      }
      v26 = *(a2 - 1);
      v27 = *(float*)(v26 + 40);
      v28 = *(float*)(v26 + 32) < v24;
      if ((float)((float)(v27 - v22) * (float)(v27 - v22)) > 100.0) {
        v28 = v27 < v22;
      }
      if (v25) {
        if (v28) {
          *a1 = v26;
        }
        else {
          *a1 = v21;
          a1[1] = v20;
          v64 = *(a2 - 1);
          v65 = *(float*)(v20 + 40);
          v66 = *(float*)(v64 + 40);
          v67 = *(float*)(v64 + 32) < *(float*)(v20 + 32);
          if ((float)((float)(v66 - v65) * (float)(v66 - v65)) > 100.0) {
            v67 = v66 < v65;
          }
          if (!v67) {
            return true;
          }
          a1[1] = v64;
        }
        *(a2 - 1) = v20;
        return true;
      }
      if (!v28) {
        return true;
      }
      a1[1] = v26;
      *(a2 - 1) = v21;
      v49 = *a1;
      v48 = a1[1];
      v50 = *(float*)(v48 + 40);
      v51 = *(float*)(*a1 + 40);
      v52 = (float)(v50 - v51) * (float)(v50 - v51);
      v53 = *(float*)(v48 + 32) < *(float*)(*a1 + 32);
      v54 = v50 < v51;
      goto LABEL_126;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_28;
      }
      v5 = *a1;
      v4 = a1[1];
      v6 = *(float*)(v4 + 40);
      v7 = *(float*)(*a1 + 40);
      v8 = *(float*)(v4 + 32);
      if ((float)((float)(v6 - v7) * (float)(v6 - v7)) <= 100.0) {
        v9 = v8 < *(float*)(*a1 + 32);
      }
      else {
        v9 = v6 < v7;
      }
      v10 = a1[2];
      v11 = *(float*)(v10 + 40);
      v12 = *(float*)(v10 + 32) < v8;
      if ((float)((float)(v11 - v6) * (float)(v11 - v6)) > 100.0) {
        v12 = v11 < v6;
      }
      if (v9) {
        if (v12) {
          *a1 = v10;
          a1[2] = v5;
          v13 = v10;
          v14 = v4;
        LABEL_88:
          v4 = v5;
        LABEL_104:
          v95 = a1[3];
          v96 = *(float*)(v4 + 40);
          v97 = *(float*)(v95 + 40);
          v98 = *(float*)(v95 + 32) < *(float*)(v4 + 32);
          if ((float)((float)(v97 - v96) * (float)(v97 - v96)) > 100.0) {
            v98 = v97 < v96;
          }
          if (v98) {
            a1[2] = v95;
            a1[3] = v4;
            v99 = *(float*)(v95 + 40);
            v100 = *(float*)(v14 + 40);
            v101 = *(float*)(v95 + 32) < *(float*)(v14 + 32);
            if ((float)((float)(v99 - v100) * (float)(v99 - v100)) > 100.0) {
              v101 = v99 < v100;
            }
            if (v101) {
              a1[1] = v95;
              a1[2] = v14;
              v102 = *(float*)(v95 + 40);
              v103 = *(float*)(v13 + 40);
              v104 = *(float*)(v95 + 32) < *(float*)(v13 + 32);
              if ((float)((float)(v102 - v103) * (float)(v102 - v103)) >
                  100.0) {
                v104 = v102 < v103;
              }
              if (v104) {
                *a1 = v95;
                a1[1] = v13;
              }
            }
          }
          else {
            v4 = a1[3];
          }
          v105 = *(a2 - 1);
          v106 = *(float*)(v4 + 40);
          v107 = *(float*)(v105 + 40);
          v108 = *(float*)(v105 + 32) < *(float*)(v4 + 32);
          if ((float)((float)(v107 - v106) * (float)(v107 - v106)) > 100.0) {
            v108 = v107 < v106;
          }
          if (!v108) {
            return true;
          }
          a1[3] = v105;
          *(a2 - 1) = v4;
          v109 = a1[2];
          v48 = a1[3];
          v110 = *(float*)(v48 + 40);
          v111 = *(float*)(v109 + 40);
          v112 = *(float*)(v48 + 32) < *(float*)(v109 + 32);
          if ((float)((float)(v110 - v111) * (float)(v110 - v111)) > 100.0) {
            v112 = v110 < v111;
          }
          if (!v112) {
            return true;
          }
          a1[2] = v48;
          a1[3] = v109;
          goto LABEL_122;
        }
        *a1 = v4;
        a1[1] = v5;
        v85 = *(float*)(v10 + 40);
        v86 = *(float*)(v5 + 40);
        v87 = *(float*)(v10 + 32) < *(float*)(v5 + 32);
        if ((float)((float)(v85 - v86) * (float)(v85 - v86)) > 100.0) {
          v87 = v85 < v86;
        }
        if (v87) {
          a1[1] = v10;
          a1[2] = v5;
          v13 = v4;
          v14 = v10;
          goto LABEL_88;
        }
        v13 = v4;
        v14 = v5;
      }
      else {
        if (v12) {
          a1[1] = v10;
          a1[2] = v4;
          v58 = *(float*)(v10 + 40);
          v59 = *(float*)(v5 + 40);
          v60 = *(float*)(v10 + 32) < *(float*)(v5 + 32);
          if ((float)((float)(v58 - v59) * (float)(v58 - v59)) > 100.0) {
            v60 = v58 < v59;
          }
          if (v60) {
            *a1 = v10;
            a1[1] = v5;
            v13 = v10;
            v14 = v5;
          }
          else {
            v13 = v5;
            v14 = v10;
          }
          goto LABEL_104;
        }
        v13 = *a1;
        v14 = a1[1];
      }
      v4 = v10;
      goto LABEL_104;
    }
    v40 = *a1;
    v39 = a1[1];
    v41 = *(float*)(v39 + 40);
    v42 = *(float*)(*a1 + 40);
    v43 = *(float*)(v39 + 32);
    if ((float)((float)(v41 - v42) * (float)(v41 - v42)) <= 100.0) {
      v44 = v43 < *(float*)(*a1 + 32);
    }
    else {
      v44 = v41 < v42;
    }
    v45 = a1[2];
    v46 = *(float*)(v45 + 40);
    v47 = *(float*)(v45 + 32) < v43;
    if ((float)((float)(v46 - v41) * (float)(v46 - v41)) > 100.0) {
      v47 = v46 < v41;
    }
    if (v44) {
      if (v47) {
        *a1 = v45;
      LABEL_94:
        a1[2] = v40;
        v39 = v40;
      LABEL_96:
        v91 = *(a2 - 1);
        v92 = *(float*)(v39 + 40);
        v93 = *(float*)(v91 + 40);
        v94 = *(float*)(v91 + 32) < *(float*)(v39 + 32);
        if ((float)((float)(v93 - v92) * (float)(v93 - v92)) > 100.0) {
          v94 = v93 < v92;
        }
        if (!v94) {
          return true;
        }
        a1[2] = v91;
        *(a2 - 1) = v39;
        v48 = a1[2];
      LABEL_122:
        v113 = a1[1];
        v114 = *(float*)(v48 + 40);
        v115 = *(float*)(v113 + 40);
        v116 = *(float*)(v48 + 32) < *(float*)(v113 + 32);
        if ((float)((float)(v114 - v115) * (float)(v114 - v115)) > 100.0) {
          v116 = v114 < v115;
        }
        if (!v116) {
          return true;
        }
        a1[1] = v48;
        a1[2] = v113;
        v49 = *a1;
        v117 = *(float*)(v48 + 40);
        v118 = *(float*)(*a1 + 40);
        v53 = *(float*)(v48 + 32) < *(float*)(*a1 + 32);
        v54 = v117 < v118;
        v52 = (float)(v117 - v118) * (float)(v117 - v118);
      LABEL_126:
        v119 = v54;
        if (v52 > 100.0) {
          v53 = v119;
        }
        if (!v53) {
          return true;
        }
        *a1 = v48;
        a1[1] = v49;
        return true;
      }
      *a1 = v39;
      a1[1] = v40;
      v88 = *(float*)(v45 + 40);
      v89 = *(float*)(v40 + 40);
      v90 = *(float*)(v45 + 32) < *(float*)(v40 + 32);
      if ((float)((float)(v88 - v89) * (float)(v88 - v89)) > 100.0) {
        v90 = v88 < v89;
      }
      if (v90) {
        a1[1] = v45;
        goto LABEL_94;
      }
    }
    else if (v47) {
      a1[1] = v45;
      a1[2] = v39;
      v61 = *(float*)(v45 + 40);
      v62 = *(float*)(v40 + 40);
      v63 = *(float*)(v45 + 32) < *(float*)(v40 + 32);
      if ((float)((float)(v61 - v62) * (float)(v61 - v62)) > 100.0) {
        v63 = v61 < v62;
      }
      if (v63) {
        *a1 = v45;
        a1[1] = v40;
      }
      goto LABEL_96;
    }
    v39 = v45;
    goto LABEL_96;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v15 = *(a2 - 1);
    v16 = *a1;
    v17 = *(float*)(v15 + 40);
    v18 = *(float*)(*a1 + 40);
    v19 = *(float*)(v15 + 32) < *(float*)(*a1 + 32);
    if ((float)((float)(v17 - v18) * (float)(v17 - v18)) > 100.0) {
      v19 = v17 < v18;
    }
    if (!v19) {
      return true;
    }
    *a1 = v15;
    *(a2 - 1) = v16;
    return true;
  }
LABEL_28:
  v29 = *a1;
  v30 = a1[1];
  v31 = a1 + 2;
  v32 = a1[2];
  v33 = *(float*)(v30 + 40);
  v34 = *(float*)(*a1 + 40);
  v35 = *(float*)(v30 + 32);
  v36 = v33 < v34;
  v37 = *(float*)(v32 + 40);
  if ((float)((float)(v33 - v34) * (float)(v33 - v34)) <= 100.0) {
    v36 = v35 < *(float*)(*a1 + 32);
  }
  v38 = *(float*)(v32 + 32) < v35;
  if ((float)((float)(v37 - v33) * (float)(v37 - v33)) > 100.0) {
    v38 = v37 < v33;
  }
  if (!v36) {
    if (v38) {
      a1[1] = v32;
      a1[2] = v30;
      v55 = *(float*)(v32 + 40);
      v56 = *(float*)(v29 + 40);
      v57 = *(float*)(v32 + 32) < *(float*)(v29 + 32);
      if ((float)((float)(v55 - v56) * (float)(v55 - v56)) > 100.0) {
        v57 = v55 < v56;
      }
      if (v57) {
        *a1 = v32;
        a1[1] = v29;
      }
    }
    goto LABEL_70;
  }
  if (v38) {
    *a1 = v32;
  }
  else {
    *a1 = v30;
    a1[1] = v29;
    v68 = *(float*)(v32 + 40);
    v69 = *(float*)(v29 + 40);
    v70 = *(float*)(v32 + 32) < *(float*)(v29 + 32);
    if ((float)((float)(v68 - v69) * (float)(v68 - v69)) > 100.0) {
      v70 = v68 < v69;
    }
    if (!v70) {
      goto LABEL_70;
    }
    a1[1] = v32;
  }
  a1[2] = v29;
LABEL_70:
  v71 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v72 = 24;
  v73 = 0;
  while (1) {
    v75 = *v71;
    v76 = *v31;
    v77 = *(float*)(*v71 + 40);
    v78 = *(float*)(v76 + 40);
    v79 = *(float*)(*v71 + 32) < *(float*)(v76 + 32);
    if ((float)((float)(v77 - v78) * (float)(v77 - v78)) > 100.0) {
      v79 = v77 < v78;
    }
    if (v79) {
      v80 = v72;
      do {
        v81 = v80 - 8;
        *(__int64*)((char*)a1 + v80) = v76;
        if (v80 == 8) {
          v74 = a1;
          goto LABEL_73;
        }
        v82 = *(float*)(v75 + 40);
        v76 = *(__int64*)((char*)a1 + v80 - 16);
        v83 = *(float*)(v76 + 40);
        v84 = v82 < v83;
        if ((float)((float)(v82 - v83) * (float)(v82 - v83)) <= 100.0) {
          v84 = *(float*)(v75 + 32) < *(float*)(v76 + 32);
        }
        v80 -= 8;
      } while (v84);
      v74 = (__int64*)((char*)a1 + v81);
    LABEL_73:
      ++v73;
      *v74 = v75;
      if (v73 == 8) {
        return v71 + 1 == a2;
      }
    }
    v31 = v71++;
    v72 += 8;
    if (v71 == a2) {
      return true;
    }
  }
}

__int64 game_gmap_SpotMgr_GetAroundSpot_lambda0_Invoke(__int64 result,
                                                       __int64** a2)
{
  __int64* v2;
  __int64 v3;
  char* v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;

  if (((*a2)[68] & 0x10) != 0) {
    return result;
  }
  v2 = *(__int64**)(result + 8);
  v3 = **a2;
  v4 = (char*)*v2;
  v5 = (char*)v2[1];
  v6 = (char*)*v2;
  if ((char*)*v2 == v5) {
    goto LABEL_18;
  }
  v7 = v5 - v4 - 8;
  v6 = (char*)*v2;
  if ((~(_BYTE)v7 & 0x18) != 0) {
    v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
    v6 = (char*)*v2;
    while (*(_QWORD*)v6 != v3) {
      v6 += 8;
      if (--v8 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v6 != v5) {
      return result;
    }
    goto LABEL_19;
  }
LABEL_7:
  if (v7 >= 0x18) {
    v6 += 16;
    while (1) {
      if (*((_QWORD*)v6 - 2) == v3) {
        v6 -= 16;
        goto LABEL_18;
      }
      if (*((_QWORD*)v6 - 1) == v3) {
        v6 -= 8;
        goto LABEL_18;
      }
      if (*(_QWORD*)v6 == v3) {
        goto LABEL_18;
      }
      if (*((_QWORD*)v6 + 1) == v3) {
        break;
      }
      v9 = v6 + 16;
      v6 += 32;
      if (v9 == v5) {
        goto LABEL_19;
      }
    }
    v6 += 8;
    goto LABEL_18;
  }
LABEL_19:
  v10 = v2[2];
  if ((unsigned __int64)v5 >= v10) {
    v12 = (char*)(v5 - v4);
    v13 = (v5 - v4) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_8875e0(result);
    }
    v15 = v10 - (_QWORD)v4;
    v16 = fw_memory_g_heap_manager_ptr;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v14;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210_alt1(result);
      }
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v17;
    v20 = (char*)(v5 - v4);
    v21 = (__int64)&v12[v18 + -8 * v13];
    *(_QWORD*)&v12[v18] = v3;
    v11 = (__int64)&v12[v18 + 8];
    result = memcpy(v21, v4, v20);
    *v2 = v21;
    v2[1] = v11;
    v2[2] = v19;
    if (v4 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v22 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v22);
    }
  }
  else {
    *(_QWORD*)v5 = v3;
    v11 = (__int64)(v5 + 8);
  }
  v2[1] = v11;
  return result;
}

__int16* game_gmap_SpotMgr_TryPlayAppearAnimal_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int16* v5;
  __int16* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int16* v18;
  __int64* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _BYTE v24[12];
  _QWORD* v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 vars0;
  __int64 vars8;

  v2 = *a2;
  v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v5 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = *(__int16**)(v2 + 280);
  if (((__int64)v5[1] << 24) + ((__int64)*v5 << 32) + ((__int64)v5[2] << 18) +
          ((__int64)v5[3] << 12) + ((__int64)v5[4] << 6) + v5[5] >=
      (unsigned __int64)(((__int64)result[5] << 24) +
                         ((__int64)result[4] << 32) +
                         ((__int64)result[6] << 18) +
                         ((__int64)result[7] << 12) +
                         ((__int64)result[8] << 6) + result[9])) {
    if ((*(unsigned __int8 (**)(__int16*))(*(_QWORD*)result + 24LL))(result) ==
        1) {
      (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
          *(_QWORD*)(v2 + 280));
    }
    v7 = *(_QWORD*)(v2 + 280);
    v8 = *(_QWORD*)(v7 + 8);
    *(_DWORD*)&v24[8] = *(_DWORD*)(v7 + 16);
    *(_QWORD*)v24 = v8;
    v9 = game_gmap_GmapClock_instance_ != 0 ? game_gmap_GmapClock_instance_ + 8
                                            : v4;
    result = (__int16*)Dir_70df40(v24, v9);
    if ((int)result < 360) {
      v10 = vars8;
      v11 = v25;
      v12 = v26;
      ++**(_DWORD**)(a1 + 16);
      result = *(__int16**)(a1 + 8);
      if (v2 != 0) {
        v27 = v11;
        v28 = v12;
        vars0 = v10;
        v13 = *(_QWORD*)(GameData_21c96e8 + 8);
        v14 = *(_QWORD**)(v13 + 8);
        v15 = *(_QWORD**)(v13 + 16);
        while (v14 != v15) {
          v16 = (_QWORD*)*v14;
          if (*(_QWORD*)*v14 == v2 && v16[12] == 0) {
            v17 = v16[69];
            if (v17 != 0 && v16[13] == 0 &&
                *((__int16*)v16 + 321) * *((__int16*)v16 + 320) *
                        *((__int16*)v16 + 322) ==
                    0 &&
                *(_QWORD*)(v17 + 352) != 0) {
              v18 = result;
              v19 = (__int64*)fw_memory_g_heap_manager_ptr;
              v20 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
              *(_QWORD*)&v24[4] = v20;
              *v20 = v16;
              v25 = v20 + 1;
              v26 = v20 + 1;
              result = (__int16*)GameRoutine_14b4b70(v18, 3, &v24[4]);
              if (*(_QWORD*)&v24[4] != 0) {
                v22 = *v19;
                v25 = *(_QWORD**)&v24[4];
                v23 = 128;
                if (*(_QWORD*)(v22 + 200) == 0) {
                  v23 = 56;
                }
                return (__int16*)nn_mem_StandardAllocator_Free_alt1(
                    v22 + v23, *(_QWORD*)&v24[4], v21);
              }
              return result;
            }
          }
          ++v14;
        }
      }
    }
  }
  return result;
}

__int64 game_gmap_SpotMgr_EachSpotAttachment_lambda0_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *a2;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 24LL))(
      *(_QWORD*)(v2 + 280));
  if (*(unsigned __int8*)(a1 + 16) == (unsigned __int8)result) {
    v6 = *(_QWORD*)(a1 + 64);
    v7 = v2;
    if (v6 == 0) {
      GameRoutine_60a310(0, v5);
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(v6, &v7);
  }
  return result;
}

__int64 game_gmap_SpotMgr_CheckWrongAttachment_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 result;
  int v5;

  v2 = *a2;
  result = *(_QWORD*)(*a2 + 280);
  if (result != 0) {
    v5 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    result = *(_QWORD*)(v2 + 280);
    if (v5 == 1) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 112LL))(result);
      if ((result & 1) != 0) {
        return result;
      }
      result = *(_QWORD*)(v2 + 280);
    }
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 104LL))(result);
      if ((result & 1) != 0) {
        result = *(_QWORD*)(v2 + 280);
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
          *(_QWORD*)(v2 + 280) = 0;
        }
        ++**(_DWORD**)(a1 + 8);
      }
    }
  }
  return result;
}

__int64 game_gmap_SpotMgr_OnEnterGmap_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 224LL))(
      *(_QWORD*)(v2 + 280));
}

#pragma GCC visibility pop
