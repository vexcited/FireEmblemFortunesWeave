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
unsigned __int64 MapEventObject_c8c4c0(__int64 a1, __int64* a2);

unsigned __int64 MapEventObject_c8c4c0(__int64 a1, __int64* a2)
{
  unsigned __int64 result;
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
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  char* v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  char* v42;
  unsigned __int64 v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  struct {
    __int64 v47[2];
    char* v48;
  } v47_;
  struct {
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v49_;

  result = a1 + 32;
  if ((__int64*)result != a2) {
    v4 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)result & 1) != 0) {
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
      result = (unsigned __int64)SpineModel_64dde0((__int64*)result, v10, v11);
    }
    else if ((v4 & 1) != 0) {
      result =
          (unsigned __int64)GameRoutine_64df20((_QWORD*)result, a2[2], a2[1]);
    }
    else {
      v5 = *a2;
      v6 = a2[2];
      *(_QWORD*)(result + 8) = a2[1];
      *(_QWORD*)(result + 16) = v6;
      *(_QWORD*)result = v5;
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
      v49_.v50 = v13 + 5;
      v49_.v51 = v17;
      v49_.v49 = v18 | 1;
      v16 = v18 | 1;
    }
    else {
      v16 = 2 * v14;
      v17 = 0;
      v49_.v50 = 0;
      v49_.v51 = 0;
      v49_.v49 = (unsigned __int8)(2 * v14);
    }
    if ((v16 & 1) != 0) {
      v19 = (char*)v17;
    }
    else {
      v19 = (char*)&v49_.v49 + 1;
    }
    v19[4] = 32;
    *(_DWORD*)v19 = 1819242338;
    if ((v16 & 1) != 0) {
      v20 = (char*)(v17 + 5);
    }
    else {
      v20 = (char*)&v49_.v49 + 6;
    }
    memmove(v20, v15, v13);
    v20[v13] = 0;
    result = GameRoutine_1a09ce0(&v49_.v49, "()", 2);
    v22 = *(_QWORD*)result;
    v21 = *(_QWORD*)(result + 8);
    v23 = *(_QWORD*)(result + 16);
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = 0;
    *(_QWORD*)(result + 16) = 0;
    if ((v49_.v49 & 1) != 0 && v49_.v51 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
    }
    v25 = GameData_21cd150;
    if ((v22 & 1) != 0) {
      result = fw_text_String_CopyTerminated(v47_.v47, v23, v21);
    }
    else {
      v47_.v47[0] = v22;
      v47_.v47[1] = v21;
      v47_.v48 = (char*)v23;
    }
    v26 = *(unsigned int*)(v25 + 24);
    if ((_DWORD)v26 != 0x2000 &&
        (v27 = (_QWORD*)((char*)&as_g_context_slots + 16 * v26))[1] != 0 &&
        *v27 == *(_QWORD*)(v25 + 16)) {
      if ((v47_.v47[0] & 1) != 0) {
        v28 = v47_.v48;
      }
      else {
        v28 = (char*)v47_.v47 + 1;
      }
      result =
          GameRoutine_62cf40(*as_g_script_manager_ptr, v25 + 16, (__int64)v28);
      v29 = result != 0;
      if ((v47_.v47[0] & 1) == 0) {
        goto LABEL_54;
      }
    }
    else {
      v29 = false;
      if ((v47_.v47[0] & 1) == 0) {
      LABEL_54:
        if (v29) {
          goto LABEL_106;
        }
        if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
          v31 = *(_QWORD*)(a1 + 48);
        }
        else {
          v31 = a1 + 33;
        }
        v49_.v50 = v31;
        result = game_HashString_alt1(v31);
        v49_.v49 = result;
        if (result != 0) {
          v32 = *(_QWORD**)(game_GameModeData_instance_ + 48);
          v33 = v32[2];
          if (v33 != 0 && v32[4] != 0) {
            v34 = v33 - 1;
            if ((v33 & (v33 - 1)) != 0) {
              v35 = result;
              if (result >= v33) {
                v35 = result % v33;
              }
            }
            else {
              v35 = v34 & result;
            }
            v36 = *(_QWORD**)(v32[1] + 8 * v35);
            if (v36 != nullptr) {
              v37 = (_QWORD*)*v36;
              if (v37 != nullptr) {
                if ((v33 & v34) == 0) {
                  while (1) {
                    v39 = v37[1];
                    if (result == v39) {
                      if (v37[2] == result) {
                        goto LABEL_106;
                      }
                    }
                    else if ((v39 & v34) != v35) {
                      goto LABEL_80;
                    }
                    v37 = (_QWORD*)*v37;
                    if (v37 == nullptr) {
                      goto LABEL_80;
                    }
                  }
                }
                do {
                  v38 = v37[1];
                  if (result == v38) {
                    if (v37[2] == result) {
                      goto LABEL_106;
                    }
                  }
                  else {
                    if (v38 >= v33) {
                      v38 %= v33;
                    }
                    if (v38 != v35) {
                      break;
                    }
                  }
                  v37 = (_QWORD*)*v37;
                } while (v37 != nullptr);
              }
            }
          }
        }
      LABEL_80:
        result = (unsigned __int64)GameVariable_826e40(
            game_GameModeData_instance_ + 40, 1u, (unsigned __int64*)&v49_.v49,
            0, 0, 0, 99999, 0);
        if (GameData_22400f8 == 0) {
          goto LABEL_106;
        }
        if (*(_BYTE*)(GameData_22400f8 + 8) != 1) {
          goto LABEL_106;
        }
        if ((*(_BYTE*)(GameData_22400f8 + 9) & 1) != 0) {
          goto LABEL_106;
        }
        if (v49_.v49 == 0) {
          goto LABEL_106;
        }
        result = GameRoutine_123efa0((unsigned __int64*)&v49_.v49);
        if ((result & 1) != 0) {
          goto LABEL_106;
        }
        v40 = GameData_2240178;
        if (GameData_2240178 != 0) {
          v42 = *(char**)(GameData_2240178 + 48);
          v41 = *(char**)(GameData_2240178 + 56);
          if (v42 == v41) {
            goto LABEL_102;
          }
          v43 = v41 - v42 - 8;
          if ((~(_BYTE)v43 & 0x18) != 0) {
            v44 = ((unsigned __int8)((unsigned int)v43 >> 3) + 1) & 3;
            while (*(_QWORD*)v42 != v49_.v49) {
              v42 += 8;
              if (--v44 == 0) {
                goto LABEL_91;
              }
            }
          LABEL_102:
            if (v42 != v41) {
              goto LABEL_104;
            }
            goto LABEL_103;
          }
        LABEL_91:
          if (v43 >= 0x18) {
            v42 += 16;
            while (1) {
              if (*((_QWORD*)v42 - 2) == v49_.v49) {
                v42 -= 16;
                goto LABEL_102;
              }
              if (*((_QWORD*)v42 - 1) == v49_.v49) {
                v42 -= 8;
                goto LABEL_102;
              }
              if (*(_QWORD*)v42 == v49_.v49) {
                goto LABEL_102;
              }
              if (*((_QWORD*)v42 + 1) == v49_.v49) {
                break;
              }
              v45 = v42 + 16;
              v42 += 32;
              if (v45 == v41) {
                goto LABEL_103;
              }
            }
            v42 += 8;
            goto LABEL_102;
          }
        }
      LABEL_103:
        result = GameRoutine_123ee60(1, (unsigned __int64*)&v49_.v49);
        v40 = GameData_2240178;
      LABEL_104:
        if (v40 != 0) {
          *(_BYTE*)(v40 + 41) |= 1u;
        }
      LABEL_106:
        if ((v22 & 1) != 0 && v23 != 0) {
          v46 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v46 = 56;
          }
          return nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
        }
        return result;
      }
    }
    if (v47_.v48 != nullptr) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
    }
    goto LABEL_54;
  }
  return result;
}

__int64 MapEventObject_c8c9c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  _QWORD v38[2];
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44[4];

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
  v42 = v1;
  v43 = v2;
  v28 = (v4 & 1) == 0;
  v6 = v3[9];
  v7 = a1 + 33;
  v8 = v3;
  if (v28) {
    v10 = a1 + 33;
  }
  else {
    v10 = *(_QWORD*)(a1 + 48);
  }
  if (v6 != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)(v3[5] + 8 * ((v6 + v3[8] - 1) / 0x33uLL)) +
                     80 * ((v6 + v3[8] - 1) % 0x33uLL) + 72);
  }
  else {
    v11 = 0;
  }
  v13 = strlen(v10);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v14 = GameRoutine_1195900(v8, v11, v10, v13, &v39, v44);
  v16 = v39;
  v17 = v14;
  if (v39 != 0) {
    v18 = v40;
    if (v39 == v40) {
      goto LABEL_21;
    }
    do {
      v19 = *(unsigned int*)(v18 - 8);
      v20 = v18 - 32;
      if ((_DWORD)v19 != -1) {
        ((void (*)(_QWORD*, __int64))decltype_c81af0_ptr[v19])(v38, v18 - 32);
      }
      *(_DWORD*)(v18 - 8) = -1;
      v18 -= 32;
    } while (v20 != v16);
    v40 = v16;
    v16 = v39;
    if (v39 != 0) {
    LABEL_21:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v16, v15);
    }
  }
  GameRoutine_1196940(v8 + 4);
  if ((v17 & 1) != 0) {
    v22 = v44[0];
    return v22 & 1;
  }
  v23 = game_GameModeData_instance_;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 48);
  }
  else {
    v24 = v7;
  }
  v25 = game_HashString(v24);
  if (v25 == 0) {
    goto LABEL_61;
  }
  v26 = *(_QWORD**)(v23 + 48);
  v27 = v26[2];
  v28 = v27 == 0 || v26[4] == 0;
  if (v28) {
    goto LABEL_61;
  }
  v29 = v27 - 1;
  if ((v27 & (v27 - 1)) != 0) {
    v30 = v25;
    if (v25 >= v27) {
      v30 = v25 % v27;
    }
  }
  else {
    v30 = v29 & v25;
  }
  v31 = *(_QWORD**)(v26[1] + 8 * v30);
  if (v31 == nullptr || (v32 = (_QWORD*)*v31) == nullptr) {
  LABEL_61:
    v22 = 0;
    return v22 & 1;
  }
  if ((v27 & v29) == 0) {
    while (1) {
      v34 = v32[1];
      if (v25 == v34) {
        if (v32[2] == v25) {
          goto LABEL_54;
        }
      }
      else if ((v34 & v29) != v30) {
        goto LABEL_61;
      }
      v32 = (_QWORD*)*v32;
      if (v32 == nullptr) {
        goto LABEL_61;
      }
    }
  }
  while (1) {
    v33 = v32[1];
    if (v25 == v33) {
      break;
    }
    if (v33 >= v27) {
      v33 %= v27;
    }
    if (v33 != v30) {
      goto LABEL_61;
    }
  LABEL_43:
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_61;
    }
  }
  if (v32[2] != v25) {
    goto LABEL_43;
  }
LABEL_54:
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v35 = *(_QWORD*)(a1 + 48);
  }
  else {
    v35 = v7;
  }
  v38[1] = v35;
  v38[0] = game_HashString(v35);
  v36 = game_GameVariableTable_Find(*(_QWORD*)(v23 + 48), v38);
  if (v36 != 0) {
    v37 = *(_DWORD*)(v36 + 32);
  }
  else {
    v37 = 0;
  }
  if (v37 == (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1)) {
    goto LABEL_61;
  }
  v22 = 1;
  return v22 & 1;
}

unsigned __int64 MapEventObject_c8c9e0(unsigned __int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
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
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 i;
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];
  __int64 v29;

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
    result = game_HashString(v6);
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
                  v28[1] = v16;
                  v17 = game_HashString(v16);
                  v18 = *(_QWORD*)v4;
                  v28[0] = v17;
                  v19 = (*(__int64 (**)(unsigned __int64))(v18 + 80))(v4);
                  v20 = *(_QWORD*)(v5 + 48);
                  v21 = v19;
                  v22 = game_GameVariableTable_Find(v20, v28);
                  if (v22 != 0) {
                    v24 = v22;
                    if (*(_DWORD*)(v22 + 32) != v21) {
                      *(_DWORD*)(v22 + 32) = v21;
                      if ((*(_BYTE*)(v20 + 3932768) & 0xAE) == 0 &&
                          GameData_22400f8 != 0) {
                        GameRoutine_12274e0(GameData_22400f8, v22);
                      }
                      v26 = *(_QWORD*)(v24 + 88);
                      for (i = *(_QWORD*)(v24 + 96); v26 != i; v26 += 48) {
                        v29 = v24;
                        v27 = *(_QWORD*)(v26 + 32);
                        if (v27 == 0) {
                          GameRoutine_60a310(0, v23);
                        }
                        (*(void (**)(__int64, __int64*))(*(_QWORD*)v27 + 48LL))(
                            v27, &v29);
                      }
                    }
                  }
                  result = GameData_22400f8;
                  if (GameData_22400f8 != 0) {
                    return GameRoutine_12274e0(GameData_22400f8, v28);
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
