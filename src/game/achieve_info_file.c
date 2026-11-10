#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9afc60(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_PrefixedLabel_Set(_QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a8d504;
extern _UNKNOWN GameData_1a94dae;
extern __int64 GameData_21c9c20;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);
__int64 AchieveInfoFile_Unknown4();
__int64 GameRoutine_66cf00(_QWORD);
__int64 GameRoutine_66d660(_QWORD);
__int64 game_FlagCondition_Append(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern __int64 GameData_21c9760;
extern __int64 GameData_21c9768;
extern __int64 GameData_21c9770;
extern __int64 GameData_21c9780;
extern __int64 GameData_21c9788;
extern __int64 GameData_21c9790;
extern __int64 GameData_21c9798;
extern __int64 GameData_21c97a0;
extern __int64 GameData_21c97b0;
extern __int64 GameData_21c97b8;
extern __int64 GameData_21c97c0;
extern __int64 GameData_21c97c8;
extern __int64 GameData_21c97d0;
extern __int64 GameData_21c97e0;
extern __int64 GameData_21c97e8;
extern char GameData_1a9f09e;
__int64 AchieveInfoFile_991460(__int64 result);

__int64 AchieveInfoFile_Unknown4()
{
  _QWORD* v0;
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  char v40;
  char* v41;
  unsigned __int64 v42;
  char* v43;
  char* v44;
  __int64 v45;
  _QWORD* v47;
  _QWORD* v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  char* v53;

  v0 = *(_QWORD**)(GameData_21c9c20 + 64);
  v1 = *(_QWORD**)(GameData_21c9c20 + 72);
  if (v0 != v1) {
    v2 = nullptr;
    do {
      v3 = v2;
      v2 = (_QWORD*)*v0;
      if (v3 != nullptr) {
        v4 = v3[3];
        v5 = *(_QWORD*)(v4 + 16);
        if (v5 != 0 && v5 == *(_QWORD*)(v2[3] + 16LL)) {
          *(_QWORD*)(v4 + 8) = v2;
          *(_QWORD*)v2[3] = v3;
        }
      }
      ++v0;
    } while (v0 != v1);
    v0 = *(_QWORD**)(GameData_21c9c20 + 64);
    v1 = *(_QWORD**)(GameData_21c9c20 + 72);
  }
  if (v0 != v1) {
    v47 = v1;
    v6 = (char*)&v51 + 1;
    while (1) {
      v48 = v0;
      v49 = (_QWORD*)*v0;
      if (*(_QWORD*)*v0 == 0) {
        goto LABEL_11;
      }
      v7 = v49[1];
      v8 = v49[3];
      v9 = strlen(v7);
      if (v9 > 0xFFFFFFFFFFFFFFF6LL) {
      LABEL_96:
        GameRoutine_60a1d0(v9, v10, v11, v12, v13);
      }
      v14 = v9;
      if (v9 >= 0x17) {
        break;
      }
      v15 = (char*)&v51 + 1;
      LOBYTE(v51) = 2 * v9;
      if (v9 != 0) {
        goto LABEL_21;
      }
    LABEL_22:
      v15[v14] = 0;
      if ((v51 & 1) != 0) {
        v17 = v53;
      }
      else {
        v17 = (char*)&v51 + 1;
      }
      game_PrefixedLabel_Set(v8 + 32, &GameData_1a94dae, v17);
      if (v49[12] != 0) {
        if ((v51 & 1) != 0) {
          v18 = v53;
        }
        else {
          v18 = (char*)&v51 + 1;
        }
        game_PrefixedLabel_Set(v8 + 72, &GameData_1a8d504, v18);
      }
      if ((v51 & 1) != 0 && v53 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v19);
      }
      v20 = *(_QWORD*)(v49[3] + 8LL);
      if (v20 != 0) {
        v21 = 1;
        do {
          v22 = *(_QWORD*)(v20 + 24);
          v23 = v49[1];
          v9 = strlen(v23);
          if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_96;
          }
          v24 = v9;
          v50 = v22;
          if (v9 >= 0x17) {
            if ((v9 | 7) == 0x17) {
              v26 = 26;
            }
            else {
              v26 = (v9 | 7) + 1;
            }
            v25 = (char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v26, 16, 0);
            v52 = v24;
            v53 = v25;
            v51 = v26 | 1;
          }
          else {
            v25 = (char*)&v51 + 1;
            LOBYTE(v51) = 2 * v9;
            if (v9 == 0) {
              goto LABEL_47;
            }
          }
          memmove(v25, v23, v24);
        LABEL_47:
          v25[v24] = 0;
          v27 = game_util_Format("_%d", v21);
          v9 = strlen(v27);
          v28 = v9;
          v29 = (v51 & 0xFFFFFFFFFFFFFFFELL) - 1;
          if ((v51 & 1) != 0) {
            v30 = v52;
          }
          else {
            v29 = 22;
            v30 = (unsigned __int8)v51 >> 1;
          }
          if (v29 - v30 >= v9) {
            v38 = v53;
            if (v9 != 0) {
              if ((v51 & 1) != 0) {
                v41 = v53;
              }
              else {
                v41 = (char*)&v51 + 1;
              }
              memmove(&v41[v30], v27, v9);
              v42 = v30 + v28;
              if ((v51 & 1) != 0) {
                v52 = v30 + v28;
              }
              else {
                LOBYTE(v51) = 2 * v42;
              }
              v41[v42] = 0;
              v40 = v51;
              v38 = v53;
            }
            else {
              v40 = v51;
            }
          }
          else {
            v31 = v30 + v9;
            if (v30 + v9 - v29 > -10LL - v29) {
              goto LABEL_96;
            }
            v32 = 2 * v29;
            if ((v51 & 1) != 0) {
              v6 = v53;
            }
            if (v31 > 2 * v29) {
              v32 = v30 + v9;
            }
            if ((v32 | 7) == 0x17) {
              v33 = 26;
            }
            else {
              v33 = (v32 | 7) + 1;
            }
            v34 = v32 >= 0x17;
            v35 = 23;
            if (v34) {
              v35 = v33;
            }
            if (v29 <= 0x7FFFFFFFFFFFFFF2LL) {
              v36 = v35;
            }
            else {
              v36 = -9;
            }
            v37 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v36,
                                                 16, 0);
            v38 = (char*)v37;
            if (v30 != 0) {
              memmove(v37, v6, v30);
            }
            memcpy(&v38[v30], v27, v28);
            if ((v51 & 1) != 0 && v6 != nullptr) {
              v39 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v39 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v39);
            }
            v6 = (char*)&v51 + 1;
            v52 = v30 + v28;
            v53 = v38;
            v38[v31] = 0;
            v51 = v36 | 1;
            v40 = v36 | 1;
          }
          if ((v40 & 1) != 0) {
            v43 = v38;
          }
          else {
            v43 = (char*)&v51 + 1;
          }
          game_PrefixedLabel_Set(v50 + 32, &GameData_1a94dae, v43);
          if (*(_QWORD*)(v20 + 96) != 0) {
            if ((v51 & 1) != 0) {
              v44 = v53;
            }
            else {
              v44 = (char*)&v51 + 1;
            }
            game_PrefixedLabel_Set(v50 + 72, &GameData_1a8d504, v44);
          }
          if ((v51 & 1) != 0 && v53 != nullptr) {
            v45 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v45 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
          }
          ++v21;
          v20 = *(_QWORD*)(*(_QWORD*)(v20 + 24) + 8LL);
        } while (v20 != 0);
      }
    LABEL_11:
      v0 = v48 + 1;
      if (v48 + 1 == v47) {
        return GameRoutine_9afc60();
      }
    }
    if ((v9 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v9 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                16, 0);
    v52 = v14;
    v53 = v15;
    v51 = v16 | 1;
  LABEL_21:
    memmove(v15, v7, v14);
    goto LABEL_22;
  }
  return GameRoutine_9afc60();
}

__int64 AchieveInfoFile_991460(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  unsigned __int64 v21;
  __int64 v22;
  _QWORD* v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  if ((*(_BYTE*)(result + 248) & 1) == 0) {
    v1 = *(_QWORD**)(result + 8);
    v2 = result;
    if (*(_QWORD**)(result + 16) == v1) {
      v3 = 0;
    }
    else {
      v3 = *v1 + 16LL;
    }
    v4 = GameData_21c9768;
    v5 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v5 = 0;
    }
    v6 = GameData_21c9788 + GameData_21c9780;
    if (v5 == GameData_21c9788 + GameData_21c9780) {
      GameRoutine_66cf00(&GameData_21c9760);
      v4 = GameData_21c9768;
      v6 = GameData_21c9788 + GameData_21c9780;
    }
    *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF)) = v3;
    ++GameData_21c9788;
    v7 = *(_QWORD*)(v2 + 32);
    if (*(_QWORD*)(v2 + 40) == v7) {
      v8 = 0;
    }
    else {
      v8 = *(_QWORD*)(*(_QWORD*)v7 + 8LL);
    }
    v9 = GameData_21c9798;
    v10 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v10 = 0;
    }
    v11 = GameData_21c97b8 + GameData_21c97b0;
    if (v10 == GameData_21c97b8 + GameData_21c97b0) {
      GameRoutine_66cf00(&GameData_21c9790);
      v9 = GameData_21c9798;
      v11 = GameData_21c97b8 + GameData_21c97b0;
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v11 >> 9)) + 8 * (v11 & 0x1FF)) = v8;
    v12 = *(__int64**)(v2 + 56);
    v13 = *(__int64**)(v2 + 64);
    ++GameData_21c97b8;
    if (v12 != v13) {
      v14 = GameData_21c97c8;
      v15 = GameData_21c97d0;
      v16 = GameData_21c97e0;
      v17 = GameData_21c97e8;
      do {
        v18 = v15 - v14;
        v19 = *v12;
        v20 = v15 == v14;
        v21 = v17 + v16;
        v22 = (v18 << 6) - 1;
        if (v20) {
          v22 = 0;
        }
        if (v22 == v21) {
          GameRoutine_66d660(&GameData_21c97c0);
          v14 = GameData_21c97c8;
          v21 = GameData_21c97e8 + GameData_21c97e0;
        }
        *(_QWORD*)(*(_QWORD*)(v14 + 8 * (v21 >> 9)) + 8 * (v21 & 0x1FF)) = v19;
        ++GameData_21c97e8;
        v23 = *(_QWORD**)(v19 + 24);
        if (v23 != nullptr) {
          v24 = *(char**)(v19 + 48);
          if (v24 == nullptr) {
            goto LABEL_28;
          }
        }
        else {
          v23 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
          *v23 = 0;
          v23[1] = 0;
          v23[2] = 0;
          v23[3] = &GameData_1a9f09e;
          v23[4] = 0;
          v23[5] = &GameData_1a9f09e;
          v23[6] = 0;
          v23[7] = 0;
          v23[8] = 0;
          v23[9] = 0;
          v23[10] = &GameData_1a9f09e;
          v23[11] = 0;
          v23[12] = 0;
          v23[13] = 0;
          v23[14] = 0;
          v23[15] = 0;
          v23[16] = 0;
          v23[17] = 0;
          v23[18] = 0;
          v23[19] = 0;
          v23[20] = 0;
          v23[21] = 0;
          v23[22] = 0;
          v23[23] = 0;
          v23[24] = 0;
          v23[25] = 0;
          *(_QWORD*)(v19 + 24) = v23;
          v24 = *(char**)(v19 + 48);
          if (v24 == nullptr) {
          LABEL_28:
            v25 = 0;
            v24 = &GameData_1a9f09e;
            goto LABEL_29;
          }
        }
        v25 = game_HashString(v24);
      LABEL_29:
        v23[2] = v25;
        v23[3] = v24;
        v23[15] = v23[14];
        v23[18] = v23[17];
        game_FlagCondition_Append(v23 + 14, v19 + 88);
        v23[21] = v23[20];
        v23[24] = v23[23];
        game_FlagCondition_Append(v23 + 20, v19 + 72);
        *v23 = 0;
        v23[1] = 0;
        v14 = GameData_21c97c8;
        v15 = GameData_21c97d0;
        v16 = GameData_21c97e0;
        v26 = GameData_21c97e8;
        if (GameData_21c97d0 == GameData_21c97c8) {
          v27 = 0;
        }
        else {
          v27 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
        }
        v17 = --GameData_21c97e8;
        if ((unsigned __int64)(v27 - (v26 + GameData_21c97e0) + 1) >= 0x400) {
          if (*(_QWORD*)(GameData_21c97d0 - 8) != 0) {
            v28 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
            v14 = GameData_21c97c8;
            v15 = GameData_21c97d0;
            v16 = GameData_21c97e0;
            v17 = GameData_21c97e8;
          }
          v15 -= 8;
          GameData_21c97d0 = v15;
        }
        ++v12;
      } while (v12 != v13);
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2);
    v29 = GameData_21c9770;
    v30 = GameData_21c9770 - GameData_21c9768;
    v20 = GameData_21c9770 == GameData_21c9768;
    *(_BYTE*)(v2 + 248) = 1;
    v31 = GameData_21c9788;
    v32 = (v30 << 6) - 1;
    if (v20) {
      v32 = 0;
    }
    --GameData_21c9788;
    if ((unsigned __int64)(v32 - (v31 + GameData_21c9780) + 1) >= 0x400) {
      if (*(_QWORD*)(v29 - 8) != 0) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
        v29 = GameData_21c9770;
      }
      GameData_21c9770 = v29 - 8;
    }
    v34 = GameData_21c97a0;
    v35 = GameData_21c97b8;
    v36 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v36 = 0;
    }
    --GameData_21c97b8;
    if ((unsigned __int64)(v36 - (v35 + GameData_21c97b0) + 1) >= 0x400) {
      if (*(_QWORD*)(GameData_21c97a0 - 8) != 0) {
        v37 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v37 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v37);
        v34 = GameData_21c97a0;
      }
      GameData_21c97a0 = v34 - 8;
    }
  }
  return result;
}

#pragma GCC visibility pop
