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

#pragma GCC visibility pop
