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
__int64 GameRoutine_97f1e0(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_21f4cc8[];
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn)) String_60a1d0();
__int64* Tutorial_f9a8c0_alt1(__int64 a1,
                              unsigned __int8 a2) __asm__("Tutorial_f9a8c0");
__int64 GameRoutine_97f0c0_alt1(__int64 result) __asm__("GameRoutine_97f0c0");
__int64 ProcList_9bd480_alt1(__int64) __asm__("ProcList_9bd480");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_ProcList_Call_9bcfa0_alt1(__int64,
                               __int64) __asm__("game_ProcList_Call_9bcfa0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn))
GameRoutine_9829b0_alt1() __asm__("GameRoutine_9829b0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Tutorial_f9a8c0(__int64 a1, unsigned __int8 a2);

__int64* game_Tutorial_CreateBind(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
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
  __int64* v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v42;
  struct {
    _QWORD v43[4];
    _QWORD* v44;
  } v43_;

  v3 = *a2;
  v2 = a2[1];
  if (v2 == *a2) {
    return nullptr;
  }
  v4 = &GameData_21ca000;
  v6 = 0;
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
    v12 = game_HashString_alt1(v11);
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
                    if ((GameRoutine_97f0c0_alt1(v18[3]) & 1) != 0) {
                      if ((unsigned __int64)v7 < v8) {
                        *(_QWORD*)v7 = v21;
                        v7 += 8;
                      }
                      else {
                        v22 = (__int64*)v10;
                        v23 = &v7[-v6];
                        v42 = a1;
                        v24 = (__int64)&v7[-v6] >> 3;
                        v25 = v24 + 1;
                        if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
                          GameRoutine_9829b0_alt1();
                        }
                        if ((__int64)(v8 - v6) >> 2 > v25) {
                          v25 = (__int64)(v8 - v6) >> 2;
                        }
                        if (v8 - v6 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v26 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v26 = v25;
                        }
                        if (v26 != 0) {
                          if (v26 >> 61 != 0) {
                            GameRoutine_60a210_alt1();
                          }
                          v27 = fw_memory_HeapManager_Allocate_alt1(
                              *v22, 8 * v26, 16, 0);
                        }
                        else {
                          v27 = 0;
                        }
                        v8 = v27 + 8 * v26;
                        v33 = (unsigned __int64)&v7[-v6];
                        v34 = (__int64)&v23[v27 + -8 * v24];
                        *(_QWORD*)&v23[v27] = v21;
                        v7 = &v23[v27 + 8];
                        memcpy_alt1(v34, v6, v33);
                        if (v6 != 0) {
                          v10 = (__int64)v22;
                          v35 = 128;
                          if (*(_QWORD*)(*v22 + 200) == 0) {
                            v35 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(*v22 + v35, v6);
                          v6 = v34;
                        }
                        else {
                          v6 = v34;
                          v10 = (__int64)v22;
                        }
                        a1 = v42;
                        v4 = &GameData_21ca000;
                      }
                    }
                    else {
                      v28 = **(__int64***)(v21 + 40);
                      if ((int)((*(_QWORD*)(*(_QWORD*)(v21 + 40) + 8LL) -
                                 (_QWORD)v28) >>
                                3) >= 1) {
                        v29 = *v28;
                        if (v29 != 0 && *(_BYTE*)(v29 + 99) == 2) {
                          v30 = *(_QWORD*)(v29 + 24);
                          v32 = game_GameModeData_instance_ != 0 &&
                                (v31 = game_GameVariableTable_Find_alt1(
                                     *(_QWORD**)(game_GameModeData_instance_ +
                                                 48),
                                     (unsigned __int64*)v21)) != 0 &&
                                *(_BYTE*)(v31 + 32) != 0;
                          game_VariableManager_SetFlag_alt1(v30, v32);
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
  if (v7 == (char*)v6) {
    v39 = 1;
    if (v6 == 0) {
      goto LABEL_73;
    }
  LABEL_70:
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v40, v6);
    goto LABEL_73;
  }
  v4 = (__int64*)ProcList_9bd480_alt1(a1);
  if (v4 == nullptr) {
    v39 = 1;
    if (v6 == 0) {
      goto LABEL_73;
    }
    goto LABEL_70;
  }
  v36 = (char*)v6;
  do {
    v38 = *(_QWORD*)v36;
    v43_.v44 = v43_.v43;
    v43_.v43[0] = GameData_1ff8c58;
    v43_.v43[1] = v38;
    game_ProcList_Call_9bcfa0_alt1((__int64)v4, (__int64)v43_.v43);
    if (v43_.v44 == v43_.v43) {
      v37 = 32;
    LABEL_64:
      (*(void (**)(__int64))(*v43_.v44 + v37))((__int64)v43_.v44);
      goto LABEL_65;
    }
    if (v43_.v44 != nullptr) {
      v37 = 40;
      goto LABEL_64;
    }
  LABEL_65:
    v36 += 8;
  } while (v36 != v7);
  v39 = 0;
  if (v6 != 0) {
    goto LABEL_70;
  }
LABEL_73:
  if (v39 != 0) {
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

void Tutorial_f9a8c0(__int64 a1, unsigned __int8 a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  const char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 (*v21)(_QWORD);
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  struct {
    __int64 v48;
    unsigned __int64 v49;
    char* v50;
  } v48_;
  struct {
    __int64 v51;
    __int64 v52;
    unsigned __int64 v53;
  } v51_;

  v51_.v52 = 0;
  v51_.v53 = 0;
  v51_.v51 = 0;
  v2 = &GameData_21f4cc8[3 * a2];
  v3 = (__int64*)*v2;
  v4 = (__int64*)v2[1];
  if ((__int64*)*v2 == v4) {
    game_Tutorial_CreateBind(a1, &v51_.v51);
    return;
  }
  v5 = 0;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  do {
    v8 = *v3;
    v9 = GameRoutine_97f1e0(*v3);
    if ((v9 & 1) != 0) {
      v10 = *(const char**)(v8 + 8);
      v11 = strlen_alt1(v10);
      if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v12 = v11;
      if (v11 >= 0x17) {
        if ((v11 | 7) == 0x17) {
          v24 = 26;
        }
        else {
          v24 = (v11 | 7) + 1;
        }
        v13 = (char*)fw_memory_HeapManager_Allocate_alt1(*v6, v24, 16, 0);
        v48_.v49 = v12;
        v48_.v50 = v13;
        v48_.v48 = v24 | 1;
      }
      else {
        v13 = (char*)&v48_.v48 + 1;
        LOBYTE(v48_.v48) = 2 * v11;
        if (v11 == 0) {
        LABEL_28:
          v25 = (_QWORD*)v51_.v52;
          v26 = v51_.v53;
          v13[v12] = 0;
          if ((unsigned __int64)v25 < v26) {
            v7 = v48_.v49;
            v5 = (__int64)(v25 + 3);
            v51_.v52 = (__int64)(v25 + 3);
            *v25 = v48_.v48;
            v25[1] = v7;
            v25[2] = v48_.v50;
          }
          else {
            v27 = v51_.v51;
            v28 = (unsigned __int64)v25 - v51_.v51;
            v29 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v25 - v51_.v51) >> 3) + 1;
            if (v29 > 0xAAAAAAAAAAAAAAALL) {
              GameRoutine_64aa00();
            }
            v30 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v26 - v51_.v51) >> 3);
            if (2 * v30 > v29) {
              v29 = 2 * v30;
            }
            if (v30 >= 0x555555555555555LL) {
              v31 = 0xAAAAAAAAAAAAAAALL;
            }
            else {
              v31 = v29;
            }
            if (v31 != 0) {
              if (v31 > 0xAAAAAAAAAAAAAAALL) {
                GameRoutine_60a210_alt1();
              }
              v32 = fw_memory_HeapManager_Allocate_alt1(*v6, 24 * v31, 16, 0);
            }
            else {
              v32 = 0;
            }
            v33 = (__int64*)(v32 + v28);
            v34 = v32 + 24 * v31;
            v35 = v48_.v49;
            v5 = v32 + v28 + 24;
            *v33 = v48_.v48;
            v33[1] = v35;
            v33[2] = (__int64)v48_.v50;
            memcpy_alt1(v32, v27, v28);
            v51_.v51 = v32;
            v51_.v53 = v34;
            if (v27 != 0) {
              v36 = 128;
              if (*(_QWORD*)(*v6 + 200) == 0) {
                v36 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v6 + v36, v27);
            }
            v51_.v52 = v32 + v28 + 24;
          }
          goto LABEL_4;
        }
      }
      memmove_alt1((__int64)v13, (__int64)v10, v12);
      goto LABEL_28;
    }
    v14 = **(__int64***)(v8 + 40);
    if ((int)((*(_QWORD*)(*(_QWORD*)(v8 + 40) + 8LL) - (_QWORD)v14) >> 3) >=
        1) {
      v15 = *v14;
      if (v15 != 0) {
        v16 = *(_QWORD*)(v15 + 24);
        v17 = *(_QWORD*)(v16 + 88);
        v18 = *(_QWORD*)(v16 + 96);
        if (v18 == v17) {
        LABEL_46:
          if (*(_BYTE*)(v15 + 99) == 2) {
            v38 = *(_QWORD*)(v15 + 24);
            v40 = game_GameModeData_instance_ != 0 &&
                  (v39 = game_GameVariableTable_Find_alt1(
                       *(_QWORD**)(game_GameModeData_instance_ + 48),
                       (unsigned __int64*)v8)) != 0 &&
                  *(_BYTE*)(v39 + 32) != 0;
            game_VariableManager_SetFlag_alt1(v38, v40);
          }
        }
        else {
          while (1) {
            if (*(_QWORD*)v17 != 0) {
              v19 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v20 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v17);
                if (v20 != 0) {
                  v21 = *(__int64 (**)(_QWORD))(v20 + 72);
                  v22 = *(_QWORD*)(v20 + 80);
                  v23 = (_QWORD*)(v20 + (v22 >> 1));
                  if ((v22 & 1) != 0) {
                    v21 = *(__int64 (**)(_QWORD))((char*)v21 + *v23);
                  }
                  v9 = v21(v23);
                }
                else {
                  v9 = 1;
                }
              }
              if (*(_BYTE*)(v17 + 16) != ((v19 == 0) | v9 & 1)) {
                break;
              }
            }
            v17 += 24;
            if (v17 == v18) {
              v37 = **(__int64***)(v8 + 40);
              if ((int)((*(_QWORD*)(*(_QWORD*)(v8 + 40) + 8LL) - (_QWORD)v37) >>
                        3) < 1) {
                break;
              }
              v15 = *v37;
              if (v15 == 0) {
                break;
              }
              goto LABEL_46;
            }
          }
        }
      }
    }
  LABEL_4:
    ++v3;
  } while (v3 != v4);
  v41 = v51_.v51;
  game_Tutorial_CreateBind(a1, &v51_.v51);
  if (v41 != 0) {
    if (v41 != v5) {
      v42 = v5;
      do {
        v43 = *(_BYTE*)(v42 - 24);
        v42 -= 24;
        if ((v43 & 1) != 0) {
          v44 = *(_QWORD*)(v5 - 8);
          if (v44 != 0) {
            if (*(_QWORD*)(*v6 + 200) != 0) {
              v45 = 128;
            }
            else {
              v45 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v6 + v45, v44);
          }
        }
        v5 = v42;
      } while (v42 != v41);
    }
    v46 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v46, v41);
  }
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
