#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1195900(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1196940(_QWORD);
__int64 GameRoutine_12274e0(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*decltype_c81af0_ptr[3])();
extern __int64 GameData_21cd150;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 MapEventObject_c8c9c0(__int64 a1);
unsigned __int64 MapEventObject_c8c9e0(unsigned __int64 result);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameVariable_826e40(__int64, unsigned int, unsigned __int64*, int, int,
                            int, int, char);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_123ee60(__int64 result, unsigned __int64*);
__int64 GameRoutine_123efa0(unsigned __int64*);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_62cf40(__int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN as_g_context_slots;
extern __int64* as_g_script_manager_ptr;
extern __int64 GameData_2240178;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0();
unsigned __int64
MapEventObject_c8c4c0_alt1(__int64 a1,
                           __int64* a2) __asm__("MapEventObject_c8c4c0");
__int64 GameRoutine_1195900_alt1(__int64, __int64, __int64, unsigned __int64,
                                 __int64*,
                                 __int64) __asm__("GameRoutine_1195900");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_1196940_alt1(_QWORD*) __asm__("GameRoutine_1196940");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64
GameRoutine_12274e0_alt1(__int64 result,
                         unsigned __int64*) __asm__("GameRoutine_12274e0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
void MapEventObject_c8c4c0(__int64 a1, __int64* a2);

void MapEventObject_c8c4c0(__int64 a1, __int64* a2)
{
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  char* v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  char* v44;
  unsigned __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  struct {
    __int64 v49[2];
    char* v50;
  } v49_;
  struct {
    __int64 v51;
    __int64 v52;
    __int64 v53;
  } v51_;

  v3 = (__int64*)(a1 + 32);
  if (v3 != a2) {
    v4 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)v3 & 1) != 0) {
      v7 = a2[1];
      v8 = (v4 & 1) == 0;
      v9 = v4 >> 1;
      if (v8) {
        v10 = (__int64)a2 + 1;
      }
      else {
        v10 = a2[2];
      }
      if (v8) {
        v11 = v9;
      }
      else {
        v11 = v7;
      }
      SpineModel_64dde0(v3, v10, v11);
    }
    else if ((v4 & 1) != 0) {
      GameRoutine_64df20(v3, a2[2], a2[1]);
    }
    else {
      v5 = *a2;
      v6 = a2[2];
      v3[1] = a2[1];
      v3[2] = v6;
      *v3 = v5;
    }
  }
  v12 = *(unsigned __int8*)(a1 + 32);
  if ((v12 & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 40);
  }
  else {
    v13 = v12 >> 1;
  }
  if (v13 != 0) {
    v14 = v13 + 5;
    if ((v12 & 1) != 0) {
      v15 = *(_QWORD*)(a1 + 48);
    }
    else {
      v15 = a1 + 33;
    }
    if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (v14 > 0x16) {
      if ((v14 | 7) == 0x17) {
        v18 = 26;
      }
      else {
        v18 = (v14 | 7) + 1;
      }
      v17 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18, 16, 0);
      v51_.v52 = v13 + 5;
      v51_.v53 = v17;
      v51_.v51 = v18 | 1;
      v16 = v18 | 1;
    }
    else {
      v16 = 2 * v14;
      v17 = 0;
      v51_.v52 = 0;
      v51_.v53 = 0;
      v51_.v51 = (unsigned __int8)(2 * v14);
    }
    if ((v16 & 1) != 0) {
      v19 = (char*)v17;
    }
    else {
      v19 = (char*)&v51_.v51 + 1;
    }
    v19[4] = 32;
    *(_DWORD*)v19 = 1819242338;
    if ((v16 & 1) != 0) {
      v20 = (char*)(v17 + 5);
    }
    else {
      v20 = (char*)&v51_.v51 + 6;
    }
    memmove_alt1((__int64)v20, v15, v13);
    v20[v13] = 0;
    v21 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v51_.v51, "()", 2u);
    v23 = *v21;
    v22 = v21[1];
    v24 = v21[2];
    *v21 = 0;
    v21[1] = 0;
    v21[2] = 0;
    if ((v51_.v51 & 1) != 0 && v51_.v53 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v51_.v53);
    }
    v26 = GameData_21cd150;
    if ((v23 & 1) != 0) {
      fw_text_String_CopyTerminated(v49_.v49, v24, v22);
    }
    else {
      v49_.v49[0] = v23;
      v49_.v49[1] = v22;
      v49_.v50 = (char*)v24;
    }
    v27 = *(unsigned int*)(v26 + 24);
    if ((_DWORD)v27 != 0x2000 &&
        (v28 = (_QWORD*)((char*)&as_g_context_slots + 16 * v27))[1] != 0 &&
        *v28 == *(_QWORD*)(v26 + 16)) {
      if ((v49_.v49[0] & 1) != 0) {
        v29 = v49_.v50;
      }
      else {
        v29 = (char*)v49_.v49 + 1;
      }
      v30 = GameRoutine_62cf40(*as_g_script_manager_ptr, v26 + 16,
                               (__int64)v29) != 0;
      if ((v49_.v49[0] & 1) == 0) {
        goto LABEL_54;
      }
    }
    else {
      v30 = false;
      if ((v49_.v49[0] & 1) == 0) {
      LABEL_54:
        if (v30) {
          goto LABEL_106;
        }
        if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
          v32 = *(_QWORD*)(a1 + 48);
        }
        else {
          v32 = a1 + 33;
        }
        v51_.v52 = v32;
        v33 = game_HashString_alt1(v32);
        v51_.v51 = v33;
        if (v33 != 0) {
          v34 = *(_QWORD**)(game_GameModeData_instance_ + 48);
          v35 = v34[2];
          if (v35 != 0 && v34[4] != 0) {
            v36 = v35 - 1;
            if ((v35 & (v35 - 1)) != 0) {
              v37 = v33;
              if (v33 >= v35) {
                v37 = v33 % v35;
              }
            }
            else {
              v37 = v36 & v33;
            }
            v38 = *(_QWORD**)(v34[1] + 8 * v37);
            if (v38 != nullptr) {
              v39 = (_QWORD*)*v38;
              if (v39 != nullptr) {
                if ((v35 & v36) == 0) {
                  while (1) {
                    v41 = v39[1];
                    if (v33 == v41) {
                      if (v39[2] == v33) {
                        goto LABEL_106;
                      }
                    }
                    else if ((v41 & v36) != v37) {
                      goto LABEL_80;
                    }
                    v39 = (_QWORD*)*v39;
                    if (v39 == nullptr) {
                      goto LABEL_80;
                    }
                  }
                }
                do {
                  v40 = v39[1];
                  if (v33 == v40) {
                    if (v39[2] == v33) {
                      goto LABEL_106;
                    }
                  }
                  else {
                    if (v40 >= v35) {
                      v40 %= v35;
                    }
                    if (v40 != v37) {
                      break;
                    }
                  }
                  v39 = (_QWORD*)*v39;
                } while (v39 != nullptr);
              }
            }
          }
        }
      LABEL_80:
        GameVariable_826e40(game_GameModeData_instance_ + 40, 1u,
                            (unsigned __int64*)&v51_.v51, 0, 0, 0, 99999, 0);
        if (GameData_22400f8 == 0 || *(_BYTE*)(GameData_22400f8 + 8) != 1 ||
            (*(_BYTE*)(GameData_22400f8 + 9) & 1) != 0 || v51_.v51 == 0 ||
            (GameRoutine_123efa0((unsigned __int64*)&v51_.v51) & 1) != 0) {
          goto LABEL_106;
        }
        v42 = GameData_2240178;
        if (GameData_2240178 != 0) {
          v44 = *(char**)(GameData_2240178 + 48);
          v43 = *(char**)(GameData_2240178 + 56);
          if (v44 == v43) {
            goto LABEL_102;
          }
          v45 = v43 - v44 - 8;
          if ((~(_BYTE)v45 & 0x18) != 0) {
            v46 = ((unsigned __int8)((unsigned int)v45 >> 3) + 1) & 3;
            while (*(_QWORD*)v44 != v51_.v51) {
              v44 += 8;
              if (--v46 == 0) {
                goto LABEL_91;
              }
            }
          LABEL_102:
            if (v44 != v43) {
              goto LABEL_104;
            }
            goto LABEL_103;
          }
        LABEL_91:
          if (v45 >= 0x18) {
            v44 += 16;
            while (1) {
              if (*((_QWORD*)v44 - 2) == v51_.v51) {
                v44 -= 16;
                goto LABEL_102;
              }
              if (*((_QWORD*)v44 - 1) == v51_.v51) {
                v44 -= 8;
                goto LABEL_102;
              }
              if (*(_QWORD*)v44 == v51_.v51) {
                goto LABEL_102;
              }
              if (*((_QWORD*)v44 + 1) == v51_.v51) {
                break;
              }
              v47 = v44 + 16;
              v44 += 32;
              if (v47 == v43) {
                goto LABEL_103;
              }
            }
            v44 += 8;
            goto LABEL_102;
          }
        }
      LABEL_103:
        GameRoutine_123ee60(1, (unsigned __int64*)&v51_.v51);
        v42 = GameData_2240178;
      LABEL_104:
        if (v42 != 0) {
          *(_BYTE*)(v42 + 41) |= 1u;
        }
      LABEL_106:
        if ((v23 & 1) != 0 && v24 != 0) {
          v48 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v24);
        }
        return;
      }
    }
    if (v49_.v50 != nullptr) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v49_.v50);
    }
    goto LABEL_54;
  }
}

__int64 MapEventObject_c8c9c0(__int64 a1)
{
  _QWORD* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  const char* v10;
  __int64 v11;
  unsigned __int64 v13;
  char v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  bool v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  unsigned __int64 v37[2];
  struct {
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v38_;
  char v43[4];

  if (GameData_21cd150 != 0) {
    v3 = (_QWORD*)(GameData_21cd150 + 8);
  }
  else {
    v3 = nullptr;
  }
  v4 = *(unsigned __int8*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 40);
  if ((v4 & 1) == 0) {
    v5 = v4 >> 1;
  }
  if (v5 == 0) {
    return 1;
  }
  v27 = (v4 & 1) == 0;
  v6 = v3[9];
  v7 = a1 + 33;
  v8 = (__int64)v3;
  if (v27) {
    v10 = (const char*)(a1 + 33);
  }
  else {
    v10 = *(const char**)(a1 + 48);
  }
  if (v6 != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)(v3[5] + 8 * ((v6 + v3[8] - 1) / 0x33uLL)) +
                     80 * ((v6 + v3[8] - 1) % 0x33uLL) + 72);
  }
  else {
    v11 = 0;
  }
  v13 = strlen_alt1(v10);
  v38_.v38 = 0;
  v38_.v39 = 0;
  v38_.v40 = 0;
  v14 = GameRoutine_1195900_alt1(v8, v11, (__int64)v10, v13, &v38_.v38,
                                 (__int64)v43);
  v15 = v38_.v38;
  v16 = v14;
  if (v38_.v38 != 0) {
    v17 = v38_.v39;
    if (v38_.v38 == v38_.v39) {
      goto LABEL_21;
    }
    do {
      v18 = *(unsigned int*)(v17 - 8);
      v19 = v17 - 32;
      if ((_DWORD)v18 != -1) {
        ((void (*)(unsigned __int64*, __int64))decltype_c81af0_ptr[v18])(
            v37, v17 - 32);
      }
      *(_DWORD*)(v17 - 8) = -1;
      v17 -= 32;
    } while (v19 != v15);
    v38_.v39 = v15;
    v15 = v38_.v38;
    if (v38_.v38 != 0) {
    LABEL_21:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v15);
    }
  }
  GameRoutine_1196940_alt1((_QWORD*)(v8 + 32));
  if ((v16 & 1) != 0) {
    v21 = v43[0];
    return v21 & 1;
  }
  v22 = game_GameModeData_instance_;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 48);
  }
  else {
    v23 = v7;
  }
  v24 = game_HashString_alt1(v23);
  if (v24 == 0) {
    goto LABEL_61;
  }
  v25 = *(_QWORD**)(v22 + 48);
  v26 = v25[2];
  v27 = v26 == 0 || v25[4] == 0;
  if (v27) {
    goto LABEL_61;
  }
  v28 = v26 - 1;
  if ((v26 & (v26 - 1)) != 0) {
    v29 = v24;
    if (v24 >= v26) {
      v29 = v24 % v26;
    }
  }
  else {
    v29 = v28 & v24;
  }
  v30 = *(_QWORD**)(v25[1] + 8 * v29);
  if (v30 == nullptr || (v31 = (_QWORD*)*v30) == nullptr) {
  LABEL_61:
    v21 = 0;
    return v21 & 1;
  }
  if ((v26 & v28) == 0) {
    while (1) {
      v33 = v31[1];
      if (v24 == v33) {
        if (v31[2] == v24) {
          goto LABEL_54;
        }
      }
      else if ((v33 & v28) != v29) {
        goto LABEL_61;
      }
      v31 = (_QWORD*)*v31;
      if (v31 == nullptr) {
        goto LABEL_61;
      }
    }
  }
  while (1) {
    v32 = v31[1];
    if (v24 == v32) {
      break;
    }
    if (v32 >= v26) {
      v32 %= v26;
    }
    if (v32 != v29) {
      goto LABEL_61;
    }
  LABEL_43:
    v31 = (_QWORD*)*v31;
    if (v31 == nullptr) {
      goto LABEL_61;
    }
  }
  if (v31[2] != v24) {
    goto LABEL_43;
  }
LABEL_54:
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v34 = *(_QWORD*)(a1 + 48);
  }
  else {
    v34 = v7;
  }
  v37[1] = v34;
  v37[0] = game_HashString_alt1(v34);
  v35 = game_GameVariableTable_Find_alt1(*(_QWORD**)(v22 + 48), v37);
  if (v35 != 0) {
    v36 = *(_DWORD*)(v35 + 32);
  }
  else {
    v36 = 0;
  }
  if (v36 == (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1)) {
    goto LABEL_61;
  }
  v21 = 1;
  return v21 & 1;
}

unsigned __int64 MapEventObject_c8c9e0(unsigned __int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 i;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27[2];
  __int64 v28;

  v1 = *(unsigned __int8*)(result + 32);
  v2 = *(_QWORD*)(result + 40);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = result + 33;
    v4 = result;
    v5 = game_GameModeData_instance_;
    v6 = (v1 & 1) != 0 ? *(_QWORD*)(result + 48) : result + 33;
    result = game_HashString_alt1(v6);
    if (result != 0) {
      v7 = *(_QWORD**)(v5 + 48);
      v8 = v7[2];
      if (v8 != 0 && v7[4] != 0) {
        v10 = v8 - 1;
        if ((v8 & (v8 - 1)) != 0) {
          v11 = result;
          if (result >= v8) {
            v11 = result % v8;
          }
        }
        else {
          v11 = v10 & result;
        }
        v12 = *(_QWORD**)(v7[1] + 8 * v11);
        if (v12 != nullptr) {
          v13 = (_QWORD*)*v12;
          if (v13 != nullptr) {
            if ((v8 & v10) == 0) {
              while (1) {
                v15 = v13[1];
                if (result == v15) {
                  if (v13[2] == result) {
                    goto LABEL_32;
                  }
                }
                else if ((v15 & v10) != v11) {
                  return result;
                }
                v13 = (_QWORD*)*v13;
                if (v13 == nullptr) {
                  return result;
                }
              }
            }
            do {
              v14 = v13[1];
              if (result == v14) {
                if (v13[2] == result) {
                LABEL_32:
                  if ((*(_BYTE*)(v4 + 32) & 1) != 0) {
                    v16 = *(_QWORD*)(v4 + 48);
                  }
                  else {
                    v16 = v3;
                  }
                  v27[1] = v16;
                  v17 = game_HashString_alt1(v16);
                  v18 = *(_QWORD*)v4;
                  v27[0] = v17;
                  v19 = (*(__int64 (**)(unsigned __int64))(v18 + 80))(v4);
                  v20 = *(_QWORD*)(v5 + 48);
                  v21 = v19;
                  v22 = game_GameVariableTable_Find_alt1((_QWORD*)v20, v27);
                  if (v22 != 0) {
                    v23 = v22;
                    if (*(_DWORD*)(v22 + 32) != v21) {
                      *(_DWORD*)(v22 + 32) = v21;
                      if ((*(_BYTE*)(v20 + 3932768) & 0xAE) == 0 &&
                          GameData_22400f8 != 0) {
                        GameRoutine_12274e0_alt1(GameData_22400f8,
                                                 (unsigned __int64*)v22);
                      }
                      v25 = *(_QWORD*)(v23 + 88);
                      for (i = *(_QWORD*)(v23 + 96); v25 != i; v25 += 48) {
                        v28 = v23;
                        v26 = *(_QWORD*)(v25 + 32);
                        if (v26 == 0) {
                          GameRoutine_60a310_alt1();
                        }
                        (*(void (**)(__int64, __int64*))(*(_QWORD*)v26 + 48LL))(
                            v26, &v28);
                      }
                    }
                  }
                  result = GameData_22400f8;
                  if (GameData_22400f8 != 0) {
                    return GameRoutine_12274e0_alt1(GameData_22400f8, v27);
                  }
                  return result;
                }
              }
              else {
                if (v14 >= v8) {
                  v14 %= v8;
                }
                if (v14 != v11) {
                  return result;
                }
              }
              v13 = (_QWORD*)*v13;
            } while (v13 != nullptr);
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
