#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_97ef20(_QWORD);
__int64 GameRoutine_97f0c0(_QWORD);
__int64 GameRoutine_97f300(_QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff8c58[])();
extern __int64 GameData_21ca000;
extern __int64 GameData_21ca0a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212cc70[57];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_9829b0(void);
__int64* game_Tutorial_CreateBind(__int64 a1, __int64* a2);
__int64 Tutorial_f9a740(__int64 a1, __int64 a2);
__int64 game_Tutorial_CreateBind_lambda0_Invoke(__int64 a1, __int64* a2);

__int64* game_Tutorial_CreateBind(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _BOOL8 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v43;
  _QWORD v44[4];
  _QWORD* v45;

  v3 = *a2;
  v2 = a2[1];
  if (v2 == *a2) {
    return nullptr;
  }
  v4 = &GameData_21ca000;
  v6 = nullptr;
  v7 = nullptr;
  v8 = 0;
  v9 = GameData_212cc70[0];
  v10 = fw_memory_g_heap_manager_ptr;
  do {
    if ((*(_BYTE*)v3 & 1) != 0) {
      v11 = *(_QWORD*)(v3 + 16);
    }
    else {
      v11 = v3 + 1;
    }
    v12 = game_HashString(v11);
    if (v12 != 0) {
      v13 = *(_QWORD*)(*v9 + 96);
      if (v13 != 0 && *(_QWORD*)(*v9 + 112) != 0) {
        v15 = v13 - 1;
        if ((v13 & (v13 - 1)) != 0) {
          v16 = v12;
          if (v12 >= v13) {
            v16 = v12 % v13;
          }
        }
        else {
          v16 = v15 & v12;
        }
        v17 = *(_QWORD**)(*(_QWORD*)(*v9 + 88) + 8 * v16);
        if (v17 != nullptr) {
          v18 = (_QWORD*)*v17;
          if (v18 != nullptr) {
            if ((v13 & v15) == 0) {
              while (1) {
                v20 = v18[1];
                if (v20 == v12) {
                  if (v18[2] == v12) {
                    goto LABEL_33;
                  }
                }
                else if ((v20 & v15) != v16) {
                  goto LABEL_4;
                }
                v18 = (_QWORD*)*v18;
                if (v18 == nullptr) {
                  goto LABEL_4;
                }
              }
            }
            do {
              v19 = v18[1];
              if (v19 == v12) {
                if (v18[2] == v12) {
                LABEL_33:
                  v21 = v18[3];
                  if (v21 != 0) {
                    v22 = GameRoutine_97f0c0(v18[3]);
                    if ((v22 & 1) != 0) {
                      if ((unsigned __int64)v7 < v8) {
                        *(_QWORD*)v7 = v21;
                        v7 += 8;
                      }
                      else {
                        v23 = (_QWORD*)v10;
                        v24 = (char*)(v7 - v6);
                        v43 = a1;
                        v25 = (v7 - v6) >> 3;
                        v26 = v25 + 1;
                        if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
                          GameRoutine_9829b0();
                        }
                        if ((__int64)(v8 - (_QWORD)v6) >> 2 > v26) {
                          v26 = (__int64)(v8 - (_QWORD)v6) >> 2;
                        }
                        if (v8 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v27 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v27 = v26;
                        }
                        if (v27 != 0) {
                          if (v27 >> 61 != 0) {
                            GameRoutine_60a210(v22);
                          }
                          v28 = fw_memory_HeapManager_Allocate(*v23, 8 * v27,
                                                               16, 0);
                        }
                        else {
                          v28 = 0;
                        }
                        v8 = v28 + 8 * v27;
                        v34 = (char*)(v7 - v6);
                        v35 = (__int64)&v24[v28 + -8 * v25];
                        *(_QWORD*)&v24[v28] = v21;
                        v7 = &v24[v28 + 8];
                        memcpy(v35, v6, v34);
                        if (v6 != nullptr) {
                          v10 = (__int64)v23;
                          v36 = 128;
                          if (*(_QWORD*)(*v23 + 200LL) == 0) {
                            v36 = 56;
                          }
                          nn_mem_StandardAllocator_Free(*v23 + v36);
                          v6 = (char*)v35;
                        }
                        else {
                          v6 = (char*)v35;
                          v10 = (__int64)v23;
                        }
                        a1 = v43;
                        v4 = &GameData_21ca000;
                      }
                    }
                    else {
                      v29 = **(__int64***)(v21 + 40);
                      if ((int)((*(_QWORD*)(*(_QWORD*)(v21 + 40) + 8LL) -
                                 (_QWORD)v29) >>
                                3) >= 1) {
                        v30 = *v29;
                        if (v30 != 0 && *(_BYTE*)(v30 + 99) == 2) {
                          v31 = *(_QWORD*)(v30 + 24);
                          v33 =
                              game_GameModeData_instance_ != 0 &&
                              (v32 = game_GameVariableTable_Find(
                                   *(_QWORD*)(game_GameModeData_instance_ + 48),
                                   v21)) != 0 &&
                              *(_BYTE*)(v32 + 32) != 0;
                          game_VariableManager_SetFlag(v31, v33);
                          v10 = fw_memory_g_heap_manager_ptr;
                        }
                      }
                    }
                  }
                  break;
                }
              }
              else {
                if (v19 >= v13) {
                  v19 %= v13;
                }
                if (v19 != v16) {
                  break;
                }
              }
              v18 = (_QWORD*)*v18;
            } while (v18 != nullptr);
          }
        }
      }
    }
  LABEL_4:
    v3 += 24;
  } while (v3 != v2);
  if (v7 == v6) {
    v40 = 1;
    if (v6 == nullptr) {
      goto LABEL_73;
    }
  LABEL_70:
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v41);
    goto LABEL_73;
  }
  v4 = (__int64*)ProcList_9bd480(a1);
  if (v4 == nullptr) {
    v40 = 1;
    if (v6 == nullptr) {
      goto LABEL_73;
    }
    goto LABEL_70;
  }
  v37 = v6;
  do {
    v39 = *(_QWORD*)v37;
    v45 = v44;
    v44[0] = GameData_1ff8c58;
    v44[1] = v39;
    game_ProcList_Call_9bcfa0(v4, v44);
    if (v45 == v44) {
      v38 = 32;
    LABEL_64:
      (*(void (**)(void))(*v45 + v38))();
      goto LABEL_65;
    }
    if (v45 != nullptr) {
      v38 = 40;
      goto LABEL_64;
    }
  LABEL_65:
    v37 += 8;
  } while (v37 != v7);
  v40 = 0;
  if (v6 != nullptr) {
    goto LABEL_70;
  }
LABEL_73:
  if (v40 != 0) {
    return nullptr;
  }
  return v4;
}

__int64 Tutorial_f9a740(__int64 a1, __int64 a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;

  v3 = game_HashString(a2);
  if (v3 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(GameData_21ca0a8 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21ca0a8 + 112) == 0) {
    return 0;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = v3;
    if (v3 >= v4) {
      v7 = v3 % v4;
    }
  }
  else {
    v7 = v6 & v3;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(GameData_21ca0a8 + 88) + 8 * v7);
  if (v8 == nullptr) {
    return 0;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    return 0;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v12 = v9[1];
      if (v12 == v3) {
        if (v9[2] == v3) {
          goto LABEL_26;
        }
      }
      else if ((v12 & v6) != v7) {
        return 0;
      }
      v9 = (_QWORD*)*v9;
      v11 = 0;
      if (v9 == nullptr) {
        return v11;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v3) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      return 0;
    }
  LABEL_15:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      return 0;
    }
  }
  if (v9[2] != v3) {
    goto LABEL_15;
  }
LABEL_26:
  v13 = v9[3];
  if (v13 == 0) {
    return 0;
  }
  if ((GameRoutine_97f0c0(v9[3]) & 1) == 0) {
    if ((GameRoutine_97f300(v13) & 1) != 0) {
      GameRoutine_97ef20(v13);
    }
    return 0;
  }
  v15 = v13;
  return GameRoutine_162aea0(a1, &v15);
}

__int64 game_Tutorial_CreateBind_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v5 = v2;
  return GameRoutine_162aea0(v3, &v5);
}

#pragma GCC visibility pop
