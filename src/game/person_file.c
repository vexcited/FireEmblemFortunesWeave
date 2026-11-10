#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21c99d0;
extern __int64 GameData_21c99d8;
extern __int64 GameData_21c99e8;
extern __int64 GameData_21c99f0;
extern __int64 GameData_21c99f8;
extern __int64 GameData_21c9a00;
extern __int64 GameData_21c9a38;
extern __int64 GameData_21c9a40;
extern __int64 GameData_21c9a48;
extern __int64 GameData_21c9a50;
extern __int64 GameData_21c9a60;
extern __int64 GameData_21c9a68;
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 GameData_21c9a90;
extern __int64 GameData_21c9a98;
extern __int64 GameData_21c9aa8;
extern __int64 GameData_21c9ab0;
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 GameData_21c9ad8;
extern __int64 GameData_21c9ae0;
extern __int64 GameData_21c9ae8;
extern __int64 GameData_21c9af0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 PersonFile_Unknown5();
__int64 GameRoutine_68d9a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* game_g_hero_ids;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9a70;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(void);
unsigned __int64 game_PersonFile_OnBuild_lambda1_Invoke(__int64 a1, char* a2);

__int64 PersonFile_Unknown5()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  _QWORD* i;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;

  v1 = GameData_21c99d0;
  v0 = GameData_21c99d8;
  v2 = fw_memory_g_heap_manager_ptr;
  if (GameData_21c99d0 != GameData_21c99d8) {
    v3 = GameData_21c99d8;
    do {
      v4 = *(_BYTE*)(v3 - 24);
      v3 -= 24;
      if ((v4 & 1) != 0) {
        v5 = *(_QWORD*)(v0 - 8);
        if (v5 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
        }
      }
      v0 = v3;
    } while (v3 != v1);
  }
  GameData_21c99d8 = v1;
  if (GameData_21c9a00 != 0) {
    for (i = (_QWORD*)GameData_21c99f8; i != nullptr;
         result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, v10)) {
      v10 = i;
      i = (_QWORD*)*i;
      if ((v10[2] & 1) != 0 && v10[4] != 0) {
        v11 = v10;
        v12 = v10[4];
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v13, v12);
        v10 = v11;
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
    }
    GameData_21c99f8 = 0;
    if (GameData_21c99f0 != 0) {
      v14 = GameData_21c99f0 & 7;
      if ((unsigned __int64)GameData_21c99f0 >= 8) {
        v16 = GameData_21c99f0 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(GameData_21c99e8 + 8 * v15) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 8) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 16) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 24) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 32) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 40) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 48) = 0;
          v17 = GameData_21c99e8 + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(GameData_21c99e8 + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    GameData_21c9a00 = 0;
  }
  if (GameData_21c9a50 != 0) {
    v19 = (_QWORD*)GameData_21c9a48;
    if (GameData_21c9a48 != 0) {
      do {
        v20 = (_QWORD*)*v19;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v21, v19);
        v19 = v20;
      } while (v20 != nullptr);
    }
    GameData_21c9a48 = 0;
    if (GameData_21c9a40 != 0) {
      v22 = GameData_21c9a40 & 7;
      if ((unsigned __int64)GameData_21c9a40 >= 8) {
        v24 = GameData_21c9a40 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = 0;
        do {
          *(_QWORD*)(GameData_21c9a38 + 8 * v23) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 8) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 16) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 24) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 32) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 40) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 48) = 0;
          v25 = GameData_21c9a38 + 8 * v23;
          v23 += 8;
          *(_QWORD*)(v25 + 56) = 0;
        } while (v24 != v23);
      }
      else {
        v23 = 0;
      }
      if (v22 != 0) {
        v26 = 8 * v23;
        do {
          --v22;
          *(_QWORD*)(GameData_21c9a38 + v26) = 0;
          v26 += 8;
        } while (v22 != 0);
      }
    }
    GameData_21c9a50 = 0;
  }
  GameData_21c9a68 = GameData_21c9a60;
  GameData_21c9a80 = GameData_21c9a78;
  GameData_21c9a98 = GameData_21c9a90;
  GameData_21c9ab0 = GameData_21c9aa8;
  GameData_21c9ac8 = GameData_21c9ac0;
  if (GameData_21c9af0 != 0) {
    v27 = (_QWORD*)GameData_21c9ae8;
    if (GameData_21c9ae8 != 0) {
      do {
        v28 = (_QWORD*)*v27;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v29 = 128;
        }
        else {
          v29 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v29, v27);
        v27 = v28;
      } while (v28 != nullptr);
    }
    GameData_21c9ae8 = 0;
    if (GameData_21c9ae0 != 0) {
      v30 = GameData_21c9ae0 & 7;
      if ((unsigned __int64)GameData_21c9ae0 >= 8) {
        v32 = GameData_21c9ae0 & 0xFFFFFFFFFFFFFFF8LL;
        v31 = 0;
        do {
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 8) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 16) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 24) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 32) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 40) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 48) = 0;
          v33 = GameData_21c9ad8 + 8 * v31;
          v31 += 8;
          *(_QWORD*)(v33 + 56) = 0;
        } while (v32 != v31);
      }
      else {
        v31 = 0;
      }
      if (v30 != 0) {
        v34 = 8 * v31;
        do {
          --v30;
          *(_QWORD*)(GameData_21c9ad8 + v34) = 0;
          v34 += 8;
        } while (v30 != 0);
      }
    }
    GameData_21c9af0 = 0;
  }
  return result;
}

unsigned __int64 game_PersonFile_OnBuild_lambda1_Invoke(__int64 a1, char* a2)
{
  __int64 v2;
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  char v27[4];

  v2 = (__int64)*(&game_g_hero_ids + (unsigned __int8)*a2);
  v27[0] = *a2;
  result = game_HashString(v2);
  if (result != 0) {
    v4 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
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
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v11 = v9[1];
              if (v11 == result) {
                if (v9[2] == result) {
                  goto LABEL_26;
                }
              }
              else if ((v11 & v6) != v7) {
                return result;
              }
              v9 = (_QWORD*)*v9;
              if (v9 == nullptr) {
                return result;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_26:
                v12 = (int*)v9[3];
                if (v12 != nullptr) {
                  v13 = GameData_21c9a68;
                  if (GameData_21c9a68 >= (unsigned __int64)GameData_21c9a70) {
                    v15 = GameData_21c9a60;
                    v16 = GameData_21c9a68 - GameData_21c9a60;
                    v17 = (GameData_21c9a68 - GameData_21c9a60) >> 3;
                    v18 = v17 + 1;
                    if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
                      GameRoutine_688200();
                    }
                    v19 = GameData_21c9a70 - GameData_21c9a60;
                    v20 = fw_memory_g_heap_manager_ptr;
                    if ((GameData_21c9a70 - GameData_21c9a60) >> 2 > v18) {
                      v18 = v19 >> 2;
                    }
                    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v21 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v21 = v18;
                    }
                    if (v21 != 0) {
                      if (v21 >> 61 != 0) {
                        GameRoutine_60a210(result);
                      }
                      v22 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v21, 16,
                          0);
                    }
                    else {
                      v22 = 0;
                    }
                    v23 = v22 + 8 * v21;
                    v24 = v22 + v16 - 8 * v17;
                    *(_QWORD*)(v22 + v16) = v12;
                    v14 = v22 + v16 + 8;
                    memcpy(v24, v15, v16);
                    GameData_21c9a60 = v24;
                    GameData_21c9a68 = v14;
                    GameData_21c9a70 = v23;
                    if (v15 != 0) {
                      v25 = 128;
                      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
                        v25 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v25, v15);
                    }
                  }
                  else {
                    *(_QWORD*)GameData_21c9a68 = v12;
                    v14 = v13 + 8;
                  }
                  GameData_21c9a68 = v14;
                  v26 = *v12;
                  return GameRoutine_68d9a0(&v26, &v26, v27);
                }
                return result;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                return result;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
