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
