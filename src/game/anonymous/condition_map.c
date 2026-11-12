#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_7f1670(void);
_QWORD* ConditionMap_7f2ec0(__int64* a1, __int64 a2);
__int64 game_anonymous_ConditionMap_Add_closure_Invoke_7f30c0(__int64 a1,
                                                              _QWORD* a2);
__int64 game_anonymous_ConditionMap_Add_closure_Invoke_7f32a0(__int64 a1,
                                                              _QWORD* a2);
__int64 ConditionMap_7f2ec0_alt1(_QWORD) __asm__("ConditionMap_7f2ec0");
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
__int64 ConditionMap_7ec520_alt1(__int64 result,
                                 __int64 a2) __asm__("ConditionMap_7ec520");
__int64* AssetTableFile_7ea4e0(__int64* result);
__int64* GameRoutine_7d6200_alt1(__int64* result,
                                 _DWORD*) __asm__("GameRoutine_7d6200");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
extern _UNKNOWN* GameData_1fb1478;
extern _UNKNOWN* GameData_1fb14a0;
extern _UNKNOWN* GameData_1fb14c0;
extern _UNKNOWN* GameData_1fb1520;
extern _UNKNOWN GameData_1a89187;
extern _UNKNOWN GameData_1a8d1fe;
extern _UNKNOWN GameData_1a90c4e;
extern _UNKNOWN GameData_1a98b9e;
extern _UNKNOWN GameData_1a9c7ea;
extern _UNKNOWN GameData_1a9c7f7;
extern _UNKNOWN GameData_1aa07d3;
extern _UNKNOWN GameData_1aa462f;
extern _UNKNOWN GameData_1aabf5f;
extern _UNKNOWN GameData_1aafdd2;
extern _UNKNOWN GameData_1aafddf;
extern _UNKNOWN GameData_1ab391d;
extern _UNKNOWN GameData_1ab392a;
extern _UNKNOWN GameData_1abf892;
extern _UNKNOWN GameData_1ad28ec;
extern _UNKNOWN GameData_1ada2ee;
extern _UNKNOWN GameData_1aed69e;
extern _UNKNOWN GameData_1af12d1;
extern _UNKNOWN GameData_21d9f48;
extern __int64 GameData_21d9b68;
extern __int64 GameData_21d9b78;
extern __int64 GameData_21d9b88;
extern __int64 GameData_21d9bd8;
extern __int64 GameData_21d9c08;
extern __int64 GameData_21d9c18;
extern __int64 GameData_21d9c28;
extern __int64 GameData_21d9c38;
extern __int64 GameData_21d9c48;
extern __int64 GameData_21d9c58;
extern __int64 GameData_21d9c68;
extern __int64 GameData_21d9c78;
extern __int64 GameData_21d9e28[];
extern __int64 GameData_21d9e30;
extern __int64 GameData_21d9e38;
extern __int64 GameData_21d9e40;
extern __int64 GameData_21d9e48;
extern __int64 GameData_21d9e50;
extern __int64 GameData_21d9e58;
extern __int64 GameData_21d9e60;
extern __int64 GameData_21d9e68;
extern __int64 GameData_21d9e70;
extern __int64 GameData_21d9e78;
extern __int64 GameData_21d9e80;
extern __int64 GameData_21d9e88;
extern __int64 GameData_21d9e90;
extern __int64 GameData_21d9e98;
extern __int64 GameData_21d9ea0;
extern __int64 GameData_21d9ea8;
extern __int64 GameData_21d9eb0;
extern __int64 GameData_21d9eb8;
extern __int64 GameData_21d9ec0;
extern __int64 GameData_21d9ec8;
extern __int64 GameData_21d9ed0;
extern __int64 GameData_21d9ed8;
extern __int64 GameData_21d9ee0;
extern __int64 GameData_21d9ee8;
extern __int64 GameData_21d9ef0;
extern __int64 GameData_21d9ef8;
extern __int64 GameData_21d9f00;
extern __int64 GameData_21d9f08;
extern __int64 GameData_21d9f10;
extern __int64 GameData_21d9f18;
extern __int64 GameData_21d9f20;
extern __int64 GameData_21d9f28;
extern __int64 GameData_21d9f30;
extern __int64 GameData_21d9f38;
extern __int64 GameData_21d9f40;
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
__int64 ConditionMap_7ea0c0(__int64 result);
__int64 ConditionMap_7ea800(__int64 result);
__int64 ConditionMap_7ec000(__int64 result);
__int64 ConditionMap_7ec520(__int64 result);
__int64* game_9a28e0(int);
__int64 GameConst_7f8980(int, __int64);
__int64 GameConst_7f8b80(int, __int64);
extern _UNKNOWN* GameData_1f9caf8;
extern __int64 (*GameData_1f9c548[])();
extern __int64 (*GameData_1f9c5c8[])();
extern __int64* GameData_212c650[5];
extern __int64 GameData_21d9ca8;
extern __int64 GameData_2216810;
extern __int64 game_GameGlobalData_unknown_;
extern __int64 game_GameModeData_instance_;
extern __int64 game_cmdbtl_ProcCmdBtlSeqView_instance_;
extern char GameData_2216858;
void AssetTableFile_7f2a20(__int64, unsigned __int64*);
void ConditionMap_7ec520_alt2(unsigned __int16*) __asm__("ConditionMap_7ec520");
void GameRoutine_7d6200_alt2(__int64*, _DWORD*) __asm__("GameRoutine_7d6200");
void game_anonymous_ConditionMap_Add_7ebae0(__int64 a1);

__int64 ConditionMap_7ea0c0(__int64 result)
{
  unsigned __int8* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  int v26;

  if (*(_BYTE*)(result + 32) != 0 && (GameData_21d9d7c & 0x80) == 0) {
    v1 = (unsigned __int8*)result;
    GameData_21d9d7c |= 0x80u;
    if (GameData_21d9bd8 != 0) {
      v3 = *(_QWORD*)(GameData_21d9d00 + 8 * (GameData_21d9bd8 & 0xFFF));
      if (v3 != 0) {
        v4 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9bd8 & 0xFFF));
        while (*v4 != GameData_21d9bd8) {
          v4 = (_QWORD*)v4[1];
          if (v4 == nullptr) {
            v5 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9bd8 & 0xFFF));
            while (*v5 != GameData_21d9bd8) {
              v5 = (_QWORD*)v5[1];
              if (v5 == nullptr) {
                do {
                  v6 = v3;
                  v3 = *(_QWORD*)(v3 + 8);
                } while (v3 != 0);
                *(_QWORD*)(v6 + 8) =
                    ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9bd8);
                goto LABEL_14;
              }
            }
            break;
          }
        }
      }
      else {
        v26 = GameData_21d9bd8 & 0xFFF;
        v2 = GameData_21d9bd8 & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 + 8 * v2) =
            ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9bd8);
        GameRoutine_7d6200_alt1(&GameData_21d9d18, &v26);
      }
    }
  LABEL_14:
    AssetTableFile_7ea4e0((__int64*)v1[32]);
    v7 = game_HashString_alt1((__int64)*(&GameData_1fb1478 + v1[33]));
    if (v7 != 0) {
      v8 = *(_QWORD*)(GameData_21d9d00 + 8 * (v7 & 0xFFF));
      if (v8 != 0) {
        v9 = *(_QWORD**)(GameData_21d9d00 + 8 * (v7 & 0xFFF));
        while (*v9 != v7) {
          v9 = (_QWORD*)v9[1];
          if (v9 == nullptr) {
            v10 = *(_QWORD**)(GameData_21d9d00 + 8 * (v7 & 0xFFF));
            while (*v10 != v7) {
              v10 = (_QWORD*)v10[1];
              if (v10 == nullptr) {
                do {
                  v11 = v8;
                  v8 = *(_QWORD*)(v8 + 8);
                } while (v8 != 0);
                *(_QWORD*)(v11 + 8) =
                    ConditionMap_7f2ec0(&GameData_21d9ce8, v7);
                goto LABEL_25;
              }
            }
            break;
          }
        }
      }
      else {
        v26 = v7 & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 + 8 * (v7 & 0xFFF)) =
            ConditionMap_7f2ec0(&GameData_21d9ce8, v7);
        GameRoutine_7d6200_alt1(&GameData_21d9d18, &v26);
      }
    }
  LABEL_25:
    v12 = game_HashString_alt1((__int64)*(&GameData_1fb14a0 + v1[34]));
    if (v12 != 0) {
      v13 = *(_QWORD*)(GameData_21d9d00 + 8 * (v12 & 0xFFF));
      if (v13 != 0) {
        v14 = *(_QWORD**)(GameData_21d9d00 + 8 * (v12 & 0xFFF));
        while (*v14 != v12) {
          v14 = (_QWORD*)v14[1];
          if (v14 == nullptr) {
            v15 = *(_QWORD**)(GameData_21d9d00 + 8 * (v12 & 0xFFF));
            while (*v15 != v12) {
              v15 = (_QWORD*)v15[1];
              if (v15 == nullptr) {
                do {
                  v16 = v13;
                  v13 = *(_QWORD*)(v13 + 8);
                } while (v13 != 0);
                *(_QWORD*)(v16 + 8) =
                    ConditionMap_7f2ec0(&GameData_21d9ce8, v12);
                goto LABEL_36;
              }
            }
            break;
          }
        }
      }
      else {
        v26 = v12 & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 + 8 * (v12 & 0xFFF)) =
            ConditionMap_7f2ec0(&GameData_21d9ce8, v12);
        GameRoutine_7d6200_alt1(&GameData_21d9d18, &v26);
      }
    }
  LABEL_36:
    v17 = game_HashString_alt1((__int64)*(&GameData_1fb14c0 + v1[35]));
    if (v17 != 0) {
      v18 = *(_QWORD*)(GameData_21d9d00 + 8 * (v17 & 0xFFF));
      if (v18 != 0) {
        v19 = *(_QWORD**)(GameData_21d9d00 + 8 * (v17 & 0xFFF));
        while (*v19 != v17) {
          v19 = (_QWORD*)v19[1];
          if (v19 == nullptr) {
            v20 = *(_QWORD**)(GameData_21d9d00 + 8 * (v17 & 0xFFF));
            while (*v20 != v17) {
              v20 = (_QWORD*)v20[1];
              if (v20 == nullptr) {
                do {
                  v21 = v18;
                  v18 = *(_QWORD*)(v18 + 8);
                } while (v18 != 0);
                *(_QWORD*)(v21 + 8) =
                    ConditionMap_7f2ec0(&GameData_21d9ce8, v17);
                goto LABEL_47;
              }
            }
            break;
          }
        }
      }
      else {
        v26 = v17 & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 + 8 * (v17 & 0xFFF)) =
            ConditionMap_7f2ec0(&GameData_21d9ce8, v17);
        GameRoutine_7d6200_alt1(&GameData_21d9d18, &v26);
      }
    }
  LABEL_47:
    result = game_HashString_alt1((__int64)*(&GameData_1fb1520 + v1[36]));
    if (result != 0) {
      v22 = *(_QWORD*)(GameData_21d9d00 + 8 * (result & 0xFFF));
      if (v22 != 0) {
        v23 = *(_QWORD**)(GameData_21d9d00 + 8 * (result & 0xFFF));
        while (*v23 != result) {
          v23 = (_QWORD*)v23[1];
          if (v23 == nullptr) {
            v24 = *(_QWORD**)(GameData_21d9d00 + 8 * (result & 0xFFF));
            while (*v24 != result) {
              v24 = (_QWORD*)v24[1];
              if (v24 == nullptr) {
                do {
                  v25 = v22;
                  v22 = *(_QWORD*)(v22 + 8);
                } while (v22 != 0);
                result =
                    (__int64)ConditionMap_7f2ec0(&GameData_21d9ce8, result);
                *(_QWORD*)(v25 + 8) = result;
                return result;
              }
            }
            return result;
          }
        }
      }
      else {
        v26 = result & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 + 8 * (result & 0xFFF)) =
            ConditionMap_7f2ec0(&GameData_21d9ce8, result);
        return (__int64)GameRoutine_7d6200_alt1(&GameData_21d9d18, &v26);
      }
    }
  }
  return result;
}

__int64 ConditionMap_7ea800(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  int v30;

  if (result == 0 || (GameData_21d9d7c & 2) != 0) {
    return result;
  }
  v1 = result;
  GameData_21d9d7c |= 2u;
  v2 = *(_QWORD*)result;
  if (*(_QWORD*)result != 0) {
    v3 = *(_QWORD*)(GameData_21d9d00 + 8 * (*(_QWORD*)result & 0xFFFLL));
    if (v3 != 0) {
      v4 = *(_QWORD**)(GameData_21d9d00 + 8 * (*(_QWORD*)result & 0xFFFLL));
      while (*v4 != v2) {
        v4 = (_QWORD*)v4[1];
        if (v4 == nullptr) {
          v5 = *(_QWORD**)(GameData_21d9d00 + 8 * (*(_QWORD*)result & 0xFFFLL));
          while (*v5 != v2) {
            v5 = (_QWORD*)v5[1];
            if (v5 == nullptr) {
              do {
                v6 = v3;
                v3 = *(_QWORD*)(v3 + 8);
              } while (v3 != 0);
              *(_QWORD*)(v6 + 8) = ConditionMap_7f2ec0(&GameData_21d9ce8, v2);
              goto LABEL_14;
            }
          }
          break;
        }
      }
    }
    else {
      v30 = *(_DWORD*)result & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * (v2 & 0xFFF)) =
          ConditionMap_7f2ec0(&GameData_21d9ce8, v2);
      GameRoutine_7d6200_alt1(&GameData_21d9d18, &v30);
    }
  }
LABEL_14:
  result = game_HashString_alt1(*(_QWORD*)(v1 + 552));
  if (result != 0) {
    v7 = *(_QWORD*)(GameData_21d9d00 + 8 * (result & 0xFFF));
    if (v7 != 0) {
      v8 = *(_QWORD**)(GameData_21d9d00 + 8 * (result & 0xFFF));
      while (*v8 != result) {
        v8 = (_QWORD*)v8[1];
        if (v8 == nullptr) {
          v9 = *(_QWORD**)(GameData_21d9d00 + 8 * (result & 0xFFF));
          while (*v9 != result) {
            v9 = (_QWORD*)v9[1];
            if (v9 == nullptr) {
              do {
                v10 = v7;
                v7 = *(_QWORD*)(v7 + 8);
              } while (v7 != 0);
              result = (__int64)ConditionMap_7f2ec0(&GameData_21d9ce8, result);
              *(_QWORD*)(v10 + 8) = result;
              goto LABEL_25;
            }
          }
          break;
        }
      }
    }
    else {
      v30 = result & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * (result & 0xFFF)) =
          ConditionMap_7f2ec0(&GameData_21d9ce8, result);
      result = (__int64)GameRoutine_7d6200_alt1(&GameData_21d9d18, &v30);
    }
  }
LABEL_25:
  v11 = *(unsigned __int8*)(v1 + 48);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9f48,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21d9f48);
    if ((_DWORD)result != 0) {
      GameData_21d9e30 = (__int64)&GameData_1ab391d;
      GameData_21d9e28[0] = game_HashString_alt1((__int64)&GameData_1ab391d);
      GameData_21d9e40 = (__int64)&GameData_1aa462f;
      GameData_21d9e38 = game_HashString_alt1((__int64)&GameData_1aa462f);
      GameData_21d9e50 = (__int64)&GameData_1aabf5f;
      GameData_21d9e48 = game_HashString_alt1((__int64)&GameData_1aabf5f);
      GameData_21d9e60 = (__int64)&GameData_1ab392a;
      GameData_21d9e58 = game_HashString_alt1((__int64)&GameData_1ab392a);
      GameData_21d9e70 = (__int64)&GameData_1a9c7ea;
      GameData_21d9e68 = game_HashString_alt1((__int64)&GameData_1a9c7ea);
      GameData_21d9e80 = (__int64)&GameData_1a89187;
      GameData_21d9e78 = game_HashString_alt1((__int64)&GameData_1a89187);
      GameData_21d9e90 = (__int64)&GameData_1aa07d3;
      GameData_21d9e88 = game_HashString_alt1((__int64)&GameData_1aa07d3);
      GameData_21d9ea0 = (__int64)&GameData_1aed69e;
      GameData_21d9e98 = game_HashString_alt1((__int64)&GameData_1aed69e);
      GameData_21d9eb0 = (__int64)&GameData_1a98b9e;
      GameData_21d9ea8 = game_HashString_alt1((__int64)&GameData_1a98b9e);
      GameData_21d9ec0 = (__int64)&GameData_1a8d1fe;
      GameData_21d9eb8 = game_HashString_alt1((__int64)&GameData_1a8d1fe);
      GameData_21d9ed0 = (__int64)&GameData_1a9c7f7;
      GameData_21d9ec8 = game_HashString_alt1((__int64)&GameData_1a9c7f7);
      GameData_21d9ee0 = (__int64)&GameData_1aafdd2;
      GameData_21d9ed8 = game_HashString_alt1((__int64)&GameData_1aafdd2);
      GameData_21d9ef0 = (__int64)&GameData_1a90c4e;
      GameData_21d9ee8 = game_HashString_alt1((__int64)&GameData_1a90c4e);
      GameData_21d9f00 = (__int64)&GameData_1aafddf;
      GameData_21d9ef8 = game_HashString_alt1((__int64)&GameData_1aafddf);
      GameData_21d9f10 = (__int64)&GameData_1ad28ec;
      GameData_21d9f08 = game_HashString_alt1((__int64)&GameData_1ad28ec);
      GameData_21d9f20 = (__int64)&GameData_1abf892;
      GameData_21d9f18 = game_HashString_alt1((__int64)&GameData_1abf892);
      GameData_21d9f30 = (__int64)&GameData_1ada2ee;
      GameData_21d9f28 = game_HashString_alt1((__int64)&GameData_1ada2ee);
      GameData_21d9f40 = (__int64)&GameData_1af12d1;
      GameData_21d9f38 = game_HashString_alt1((__int64)&GameData_1af12d1);
      result = __cxa_guard_release(&GameData_21d9f48);
    }
  }
  v12 = GameData_21d9e28[2 * v11];
  if (v12 != 0) {
    v13 =
        *(_QWORD*)(GameData_21d9d00 + 8 * (GameData_21d9e28[2 * v11] & 0xFFF));
    if (v13 != 0) {
      v14 = *(_QWORD**)(GameData_21d9d00 +
                        8 * (GameData_21d9e28[2 * v11] & 0xFFF));
      while (*v14 != v12) {
        v14 = (_QWORD*)v14[1];
        if (v14 == nullptr) {
          v15 = *(_QWORD**)(GameData_21d9d00 +
                            8 * (GameData_21d9e28[2 * v11] & 0xFFF));
          while (*v15 != v12) {
            v15 = (_QWORD*)v15[1];
            if (v15 == nullptr) {
              do {
                v16 = v13;
                v13 = *(_QWORD*)(v13 + 8);
              } while (v13 != 0);
              result = (__int64)ConditionMap_7f2ec0(&GameData_21d9ce8, v12);
              *(_QWORD*)(v16 + 8) = result;
              goto LABEL_37;
            }
          }
          break;
        }
      }
    }
    else {
      v30 = v12 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * (v12 & 0xFFF)) =
          ConditionMap_7f2ec0(&GameData_21d9ce8, v12);
      result = (__int64)GameRoutine_7d6200_alt1(&GameData_21d9d18, &v30);
    }
  }
LABEL_37:
  v17 = *(unsigned __int8*)(v1 + 417);
  switch (v17) {
  case 3:
    v18 = GameData_21d9b88;
    if (GameData_21d9b88 == 0) {
      return result;
    }
    v19 = GameData_21d9b88 & 0xFFF;
    v27 = *(_QWORD*)(GameData_21d9d00 + 8 * v19);
    if (v27 == 0) {
      goto LABEL_70;
    }
    v28 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b88 & 0xFFF));
    while (*v28 != GameData_21d9b88) {
      v28 = (_QWORD*)v28[1];
      if (v28 == nullptr) {
        v29 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b88 & 0xFFF));
        while (*v29 != GameData_21d9b88) {
          v29 = (_QWORD*)v29[1];
          if (v29 == nullptr) {
            do {
              v23 = v27;
              v27 = *(_QWORD*)(v27 + 8);
            } while (v27 != 0);
          LABEL_69:
            result = (__int64)ConditionMap_7f2ec0(&GameData_21d9ce8, v18);
            *(_QWORD*)(v23 + 8) = result;
            return result;
          }
        }
        return result;
      }
    }
    break;
  case 2:
    v18 = GameData_21d9b78;
    if (GameData_21d9b78 == 0) {
      return result;
    }
    v19 = GameData_21d9b78 & 0xFFF;
    v24 = *(_QWORD*)(GameData_21d9d00 + 8 * v19);
    if (v24 == 0) {
      goto LABEL_70;
    }
    v25 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b78 & 0xFFF));
    while (*v25 != GameData_21d9b78) {
      v25 = (_QWORD*)v25[1];
      if (v25 == nullptr) {
        v26 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b78 & 0xFFF));
        while (*v26 != GameData_21d9b78) {
          v26 = (_QWORD*)v26[1];
          if (v26 == nullptr) {
            do {
              v23 = v24;
              v24 = *(_QWORD*)(v24 + 8);
            } while (v24 != 0);
            goto LABEL_69;
          }
        }
        return result;
      }
    }
    break;
  case 1:
    v18 = GameData_21d9b68;
    if (GameData_21d9b68 == 0) {
      return result;
    }
    v19 = GameData_21d9b68 & 0xFFF;
    v20 = *(_QWORD*)(GameData_21d9d00 + 8 * v19);
    if (v20 != 0) {
      v21 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b68 & 0xFFF));
      while (*v21 != GameData_21d9b68) {
        v21 = (_QWORD*)v21[1];
        if (v21 == nullptr) {
          v22 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9b68 & 0xFFF));
          while (*v22 != GameData_21d9b68) {
            v22 = (_QWORD*)v22[1];
            if (v22 == nullptr) {
              do {
                v23 = v20;
                v20 = *(_QWORD*)(v20 + 8);
              } while (v20 != 0);
              goto LABEL_69;
            }
          }
          return result;
        }
      }
      return result;
    }
  LABEL_70:
    v30 = v18 & 0xFFF;
    *(_QWORD*)(GameData_21d9d00 + 8 * v19) =
        ConditionMap_7f2ec0(&GameData_21d9ce8, v18);
    return (__int64)GameRoutine_7d6200_alt1(&GameData_21d9d18, &v30);
  default:
    return result;
  }
  return result;
}

void game_anonymous_ConditionMap_Add_7ebae0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  struct {
    _QWORD v37[4];
    _QWORD* v38;
  } v37_;

  if (a1 == 0 || (GameData_21d9d7c & 0x20) != 0) {
    return;
  }
  GameData_21d9d7c |= 0x20u;
  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = game_HashString_alt1((__int64)*(&GameData_1f9caf8 + v1));
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_21d9d00 + 8 * (v2 & 0xFFF));
    if (v3 != 0) {
      v4 = *(_QWORD**)(GameData_21d9d00 + 8 * (v2 & 0xFFF));
      while (*v4 != v2) {
        v4 = (_QWORD*)v4[1];
        if (v4 == nullptr) {
          v5 = *(_QWORD**)(GameData_21d9d00 + 8 * (v2 & 0xFFF));
          while (*v5 != v2) {
            v5 = (_QWORD*)v5[1];
            if (v5 == nullptr) {
              do {
                v6 = v3;
                v3 = *(_QWORD*)(v3 + 8);
              } while (v3 != 0);
              *(_QWORD*)(v6 + 8) = ConditionMap_7f2ec0(&GameData_21d9ce8, v2);
              goto LABEL_16;
            }
          }
          break;
        }
      }
    }
    else {
      LODWORD(v37_.v37[0]) = v2 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * (v2 & 0xFFF)) =
          ConditionMap_7f2ec0(&GameData_21d9ce8, v2);
      GameRoutine_7d6200_alt2(&GameData_21d9d18, v37_.v37);
    }
  }
LABEL_16:
  if (game_GameModeData_instance_ != 0) {
    v7 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v7 = 0;
  }
  v37_.v37[0] = GameData_1f9c548;
  v37_.v37[1] = &GameData_21d9ce8;
  v37_.v38 = v37_.v37;
  GameConst_7f8980(v7, (__int64)v37_.v37);
  if (v37_.v38 == v37_.v37) {
    v8 = 32;
  }
  else {
    if (v37_.v38 == nullptr) {
      goto LABEL_24;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v37_.v38 + v8))((__int64)v37_.v38);
LABEL_24:
  if (game_GameModeData_instance_ != 0) {
    v9 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  }
  else {
    v9 = 0;
  }
  v37_.v37[0] = GameData_1f9c5c8;
  v37_.v37[1] = &GameData_21d9ce8;
  v37_.v38 = v37_.v37;
  GameConst_7f8b80(v9, (__int64)v37_.v37);
  if (v37_.v38 == v37_.v37) {
    v10 = 32;
  }
  else {
    if (v37_.v38 == nullptr) {
      goto LABEL_32;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v37_.v38 + v10))((__int64)v37_.v38);
LABEL_32:
  if (game_GameGlobalData_unknown_ != 0 &&
      *(_BYTE*)game_GameGlobalData_unknown_ == 1 && GameData_21d9ca8 != 0) {
    v12 = *(_QWORD*)(GameData_21d9d00 + 8 * (GameData_21d9ca8 & 0xFFF));
    if (v12 != 0) {
      v13 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9ca8 & 0xFFF));
      while (*v13 != GameData_21d9ca8) {
        v13 = (_QWORD*)v13[1];
        if (v13 == nullptr) {
          v14 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9ca8 & 0xFFF));
          while (*v14 != GameData_21d9ca8) {
            v14 = (_QWORD*)v14[1];
            if (v14 == nullptr) {
              do {
                v15 = v12;
                v12 = *(_QWORD*)(v12 + 8);
              } while (v12 != 0);
              *(_QWORD*)(v15 + 8) =
                  ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9ca8);
              goto LABEL_45;
            }
          }
          break;
        }
      }
    }
    else {
      LODWORD(v37_.v37[0]) = GameData_21d9ca8 & 0xFFF;
      v11 = GameData_21d9ca8 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * v11) =
          ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9ca8);
      GameRoutine_7d6200_alt2(&GameData_21d9d18, v37_.v37);
    }
  }
LABEL_45:
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v16 != 0) {
      v17 = game_HashString_alt1(*(_QWORD*)(v16 + 8));
      if (v17 != 0) {
        v18 = *(_QWORD*)(GameData_21d9d00 + 8 * (v17 & 0xFFF));
        if (v18 != 0) {
          v19 = *(_QWORD**)(GameData_21d9d00 + 8 * (v17 & 0xFFF));
          while (*v19 != v17) {
            v19 = (_QWORD*)v19[1];
            if (v19 == nullptr) {
              v20 = *(_QWORD**)(GameData_21d9d00 + 8 * (v17 & 0xFFF));
              while (*v20 != v17) {
                v20 = (_QWORD*)v20[1];
                if (v20 == nullptr) {
                  do {
                    v21 = v18;
                    v18 = *(_QWORD*)(v18 + 8);
                  } while (v18 != 0);
                  *(_QWORD*)(v21 + 8) =
                      ConditionMap_7f2ec0(&GameData_21d9ce8, v17);
                  goto LABEL_58;
                }
              }
              break;
            }
          }
        }
        else {
          LODWORD(v37_.v37[0]) = v17 & 0xFFF;
          *(_QWORD*)(GameData_21d9d00 + 8 * (v17 & 0xFFF)) =
              ConditionMap_7f2ec0(&GameData_21d9ce8, v17);
          GameRoutine_7d6200_alt2(&GameData_21d9d18, v37_.v37);
        }
      }
    LABEL_58:
      v22 = *(_QWORD*)(*(_QWORD*)(v16 + 24) + 24LL);
      if (v22 != 0) {
        v23 =
            *(_QWORD*)(GameData_21d9d00 +
                       8 * (*(_QWORD*)(*(_QWORD*)(v16 + 24) + 24LL) & 0xFFFLL));
        if (v23 != 0) {
          v24 = *(_QWORD**)(GameData_21d9d00 +
                            8 * (*(_QWORD*)(*(_QWORD*)(v16 + 24) + 24LL) &
                                 0xFFFLL));
          while (*v24 != v22) {
            v24 = (_QWORD*)v24[1];
            if (v24 == nullptr) {
              v25 = *(_QWORD**)(GameData_21d9d00 +
                                8 * (*(_QWORD*)(*(_QWORD*)(v16 + 24) + 24LL) &
                                     0xFFFLL));
              while (*v25 != v22) {
                v25 = (_QWORD*)v25[1];
                if (v25 == nullptr) {
                  do {
                    v26 = v23;
                    v23 = *(_QWORD*)(v23 + 8);
                  } while (v23 != 0);
                  *(_QWORD*)(v26 + 8) =
                      ConditionMap_7f2ec0(&GameData_21d9ce8, v22);
                  goto LABEL_69;
                }
              }
              break;
            }
          }
        }
        else {
          LODWORD(v37_.v37[0]) = v22 & 0xFFF;
          *(_QWORD*)(GameData_21d9d00 + 8 * (v22 & 0xFFF)) =
              ConditionMap_7f2ec0(&GameData_21d9ce8, v22);
          GameRoutine_7d6200_alt2(&GameData_21d9d18, v37_.v37);
        }
      }
    LABEL_69:
      ConditionMap_7ec520_alt2((unsigned __int16*)(v16 + 168));
    }
  }
  if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
    v27 = (__int64*)GameData_2216810;
    if (((unsigned __int8)GameData_2216858 & (GameData_2216810 != 0)) == 0) {
      v27 = GameData_212c650[0];
    }
    v28 = *v27;
    if (*v27 != 0) {
      v29 = *(_QWORD*)(GameData_21d9d00 + 8 * (*v27 & 0xFFF));
      if (v29 != 0) {
        v30 = *(_QWORD**)(GameData_21d9d00 + 8 * (v28 & 0xFFF));
        while (*v30 != v28) {
          v30 = (_QWORD*)v30[1];
          if (v30 == nullptr) {
            v31 = *(_QWORD**)(GameData_21d9d00 + 8 * (v28 & 0xFFF));
            while (*v31 != v28) {
              v31 = (_QWORD*)v31[1];
              if (v31 == nullptr) {
                do {
                  v32 = v29;
                  v29 = *(_QWORD*)(v29 + 8);
                } while (v29 != 0);
                *(_QWORD*)(v32 + 8) =
                    ConditionMap_7f2ec0(&GameData_21d9ce8, v28);
                goto LABEL_84;
              }
            }
            break;
          }
        }
      }
      else {
        LODWORD(v37_.v37[0]) = v28 & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 + 8 * (v28 & 0xFFF)) =
            ConditionMap_7f2ec0(&GameData_21d9ce8, v28);
        GameRoutine_7d6200_alt2(&GameData_21d9d18, v37_.v37);
      }
    }
  }
LABEL_84:
  if (game_GameModeData_instance_ != 0) {
    v33 = game_GameModeData_instance_ + 40;
  }
  else {
    v33 = 0;
  }
  v34 = game_9a28e0(7);
  AssetTableFile_7f2a20(v33, (unsigned __int64*)v34);
  if (game_GameModeData_instance_ != 0) {
    v35 = game_GameModeData_instance_ + 40;
  }
  else {
    v35 = 0;
  }
  v36 = game_9a28e0(8);
  AssetTableFile_7f2a20(v35, (unsigned __int64*)v36);
}

__int64 ConditionMap_7ec000(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  int v39;

  if (result != 0) {
    v1 = *(_QWORD*)result;
    v2 = result;
    if (*(_QWORD*)result != 0) {
      v3 = *(_QWORD*)(GameData_21d9d00 + 8 * (*(_QWORD*)result & 0xFFFLL));
      if (v3 != 0) {
        v4 = *(_QWORD**)(GameData_21d9d00 + 8 * (*(_QWORD*)result & 0xFFFLL));
        while (*v4 != v1) {
          v4 = (_QWORD*)v4[1];
          if (v4 == nullptr) {
            v5 = *(_QWORD**)(GameData_21d9d00 +
                             8 * (*(_QWORD*)result & 0xFFFLL));
            while (*v5 != v1) {
              v5 = (_QWORD*)v5[1];
              if (v5 == nullptr) {
                do {
                  v6 = v3;
                  v3 = *(_QWORD*)(v3 + 8);
                } while (v3 != 0);
                *(_QWORD*)(v6 + 8) = ConditionMap_7f2ec0(&GameData_21d9ce8, v1);
                goto LABEL_13;
              }
            }
            break;
          }
        }
      }
      else {
        v39 = *(_DWORD*)result & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 + 8 * (v1 & 0xFFF)) =
            ConditionMap_7f2ec0(&GameData_21d9ce8, v1);
        GameRoutine_7d6200_alt1(&GameData_21d9d18, &v39);
      }
    }
  LABEL_13:
    result = game_HashString_alt1(*(_QWORD*)(v2 + 440));
    if (result != 0) {
      v7 = *(_QWORD*)(GameData_21d9d00 + 8 * (result & 0xFFF));
      if (v7 != 0) {
        v8 = *(_QWORD**)(GameData_21d9d00 + 8 * (result & 0xFFF));
        while (*v8 != result) {
          v8 = (_QWORD*)v8[1];
          if (v8 == nullptr) {
            v9 = *(_QWORD**)(GameData_21d9d00 + 8 * (result & 0xFFF));
            while (*v9 != result) {
              v9 = (_QWORD*)v9[1];
              if (v9 == nullptr) {
                do {
                  v10 = v7;
                  v7 = *(_QWORD*)(v7 + 8);
                } while (v7 != 0);
                result =
                    (__int64)ConditionMap_7f2ec0(&GameData_21d9ce8, result);
                *(_QWORD*)(v10 + 8) = result;
                goto LABEL_24;
              }
            }
            break;
          }
        }
      }
      else {
        v39 = result & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 + 8 * (result & 0xFFF)) =
            ConditionMap_7f2ec0(&GameData_21d9ce8, result);
        result = (__int64)GameRoutine_7d6200_alt1(&GameData_21d9d18, &v39);
      }
    }
  LABEL_24:
    v11 = *(unsigned __int8*)(v2 + 72);
    if (v11 <= 7) {
      if (*(unsigned __int8*)(v2 + 72) > 3u) {
        if (*(unsigned __int8*)(v2 + 72) > 5u) {
          if (v11 == 6) {
            v12 = GameData_21d9c58;
            if (GameData_21d9c58 == 0) {
              goto LABEL_113;
            }
            v13 = GameData_21d9c58 & 0xFFF;
            v24 = *(_QWORD*)(GameData_21d9d00 + 8 * v13);
            if (v24 != 0) {
              v25 = *(_QWORD**)(GameData_21d9d00 +
                                8 * (GameData_21d9c58 & 0xFFF));
              while (*v25 != GameData_21d9c58) {
                v25 = (_QWORD*)v25[1];
                if (v25 == nullptr) {
                  v26 = *(_QWORD**)(GameData_21d9d00 +
                                    8 * (GameData_21d9c58 & 0xFFF));
                  while (*v26 != GameData_21d9c58) {
                    v26 = (_QWORD*)v26[1];
                    if (v26 == nullptr) {
                      do {
                        v17 = v24;
                        v24 = *(_QWORD*)(v24 + 8);
                      } while (v24 != 0);
                      goto LABEL_111;
                    }
                  }
                  goto LABEL_113;
                }
              }
              goto LABEL_113;
            }
          }
          else {
            v12 = GameData_21d9c78;
            if (GameData_21d9c78 == 0) {
              goto LABEL_113;
            }
            v13 = GameData_21d9c78 & 0xFFF;
            v36 = *(_QWORD*)(GameData_21d9d00 + 8 * v13);
            if (v36 != 0) {
              v37 = *(_QWORD**)(GameData_21d9d00 +
                                8 * (GameData_21d9c78 & 0xFFF));
              while (*v37 != GameData_21d9c78) {
                v37 = (_QWORD*)v37[1];
                if (v37 == nullptr) {
                  v38 = *(_QWORD**)(GameData_21d9d00 +
                                    8 * (GameData_21d9c78 & 0xFFF));
                  while (*v38 != GameData_21d9c78) {
                    v38 = (_QWORD*)v38[1];
                    if (v38 == nullptr) {
                      do {
                        v17 = v36;
                        v36 = *(_QWORD*)(v36 + 8);
                      } while (v36 != 0);
                    LABEL_111:
                      result =
                          (__int64)ConditionMap_7f2ec0(&GameData_21d9ce8, v12);
                      *(_QWORD*)(v17 + 8) = result;
                      goto LABEL_113;
                    }
                  }
                  goto LABEL_113;
                }
              }
              goto LABEL_113;
            }
          }
        }
        else if (v11 == 4) {
          v12 = GameData_21d9c48;
          if (GameData_21d9c48 == 0) {
            goto LABEL_113;
          }
          v13 = GameData_21d9c48 & 0xFFF;
          v18 = *(_QWORD*)(GameData_21d9d00 + 8 * v13);
          if (v18 != 0) {
            v19 =
                *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c48 & 0xFFF));
            while (*v19 != GameData_21d9c48) {
              v19 = (_QWORD*)v19[1];
              if (v19 == nullptr) {
                v20 = *(_QWORD**)(GameData_21d9d00 +
                                  8 * (GameData_21d9c48 & 0xFFF));
                while (*v20 != GameData_21d9c48) {
                  v20 = (_QWORD*)v20[1];
                  if (v20 == nullptr) {
                    do {
                      v17 = v18;
                      v18 = *(_QWORD*)(v18 + 8);
                    } while (v18 != 0);
                    goto LABEL_111;
                  }
                }
                goto LABEL_113;
              }
            }
            goto LABEL_113;
          }
        }
        else {
          v12 = GameData_21d9c68;
          if (GameData_21d9c68 == 0) {
            goto LABEL_113;
          }
          v13 = GameData_21d9c68 & 0xFFF;
          v30 = *(_QWORD*)(GameData_21d9d00 + 8 * v13);
          if (v30 != 0) {
            v31 =
                *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c68 & 0xFFF));
            while (*v31 != GameData_21d9c68) {
              v31 = (_QWORD*)v31[1];
              if (v31 == nullptr) {
                v32 = *(_QWORD**)(GameData_21d9d00 +
                                  8 * (GameData_21d9c68 & 0xFFF));
                while (*v32 != GameData_21d9c68) {
                  v32 = (_QWORD*)v32[1];
                  if (v32 == nullptr) {
                    do {
                      v17 = v30;
                      v30 = *(_QWORD*)(v30 + 8);
                    } while (v30 != 0);
                    goto LABEL_111;
                  }
                }
                goto LABEL_113;
              }
            }
            goto LABEL_113;
          }
        }
      }
      else if (*(unsigned __int8*)(v2 + 72) > 1u) {
        if (v11 == 2) {
          v12 = GameData_21d9c28;
          if (GameData_21d9c28 == 0) {
            goto LABEL_113;
          }
          v13 = GameData_21d9c28 & 0xFFF;
          v21 = *(_QWORD*)(GameData_21d9d00 + 8 * v13);
          if (v21 != 0) {
            v22 =
                *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c28 & 0xFFF));
            while (*v22 != GameData_21d9c28) {
              v22 = (_QWORD*)v22[1];
              if (v22 == nullptr) {
                v23 = *(_QWORD**)(GameData_21d9d00 +
                                  8 * (GameData_21d9c28 & 0xFFF));
                while (*v23 != GameData_21d9c28) {
                  v23 = (_QWORD*)v23[1];
                  if (v23 == nullptr) {
                    do {
                      v17 = v21;
                      v21 = *(_QWORD*)(v21 + 8);
                    } while (v21 != 0);
                    goto LABEL_111;
                  }
                }
                goto LABEL_113;
              }
            }
            goto LABEL_113;
          }
        }
        else {
          v12 = GameData_21d9c38;
          if (GameData_21d9c38 == 0) {
            goto LABEL_113;
          }
          v13 = GameData_21d9c38 & 0xFFF;
          v33 = *(_QWORD*)(GameData_21d9d00 + 8 * v13);
          if (v33 != 0) {
            v34 =
                *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c38 & 0xFFF));
            while (*v34 != GameData_21d9c38) {
              v34 = (_QWORD*)v34[1];
              if (v34 == nullptr) {
                v35 = *(_QWORD**)(GameData_21d9d00 +
                                  8 * (GameData_21d9c38 & 0xFFF));
                while (*v35 != GameData_21d9c38) {
                  v35 = (_QWORD*)v35[1];
                  if (v35 == nullptr) {
                    do {
                      v17 = v33;
                      v33 = *(_QWORD*)(v33 + 8);
                    } while (v33 != 0);
                    goto LABEL_111;
                  }
                }
                goto LABEL_113;
              }
            }
            goto LABEL_113;
          }
        }
      }
      else {
        if (*(_BYTE*)(v2 + 72) == 0) {
          v12 = GameData_21d9c08;
          if (GameData_21d9c08 != 0) {
            v13 = GameData_21d9c08 & 0xFFF;
            v14 = *(_QWORD*)(GameData_21d9d00 + 8 * v13);
            if (v14 != 0) {
              v15 = *(_QWORD**)(GameData_21d9d00 +
                                8 * (GameData_21d9c08 & 0xFFF));
              while (*v15 != GameData_21d9c08) {
                v15 = (_QWORD*)v15[1];
                if (v15 == nullptr) {
                  v16 = *(_QWORD**)(GameData_21d9d00 +
                                    8 * (GameData_21d9c08 & 0xFFF));
                  while (*v16 != GameData_21d9c08) {
                    v16 = (_QWORD*)v16[1];
                    if (v16 == nullptr) {
                      do {
                        v17 = v14;
                        v14 = *(_QWORD*)(v14 + 8);
                      } while (v14 != 0);
                      goto LABEL_111;
                    }
                  }
                  goto LABEL_113;
                }
              }
              goto LABEL_113;
            }
            goto LABEL_112;
          }
        LABEL_113:
          GameData_21d9d78 = *(_BYTE*)(v2 + 72);
          return result;
        }
        v12 = GameData_21d9c18;
        if (GameData_21d9c18 == 0) {
          goto LABEL_113;
        }
        v13 = GameData_21d9c18 & 0xFFF;
        v27 = *(_QWORD*)(GameData_21d9d00 + 8 * v13);
        if (v27 != 0) {
          v28 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c18 & 0xFFF));
          while (*v28 != GameData_21d9c18) {
            v28 = (_QWORD*)v28[1];
            if (v28 == nullptr) {
              v29 = *(_QWORD**)(GameData_21d9d00 +
                                8 * (GameData_21d9c18 & 0xFFF));
              while (*v29 != GameData_21d9c18) {
                v29 = (_QWORD*)v29[1];
                if (v29 == nullptr) {
                  do {
                    v17 = v27;
                    v27 = *(_QWORD*)(v27 + 8);
                  } while (v27 != 0);
                  goto LABEL_111;
                }
              }
              goto LABEL_113;
            }
          }
          goto LABEL_113;
        }
      }
    LABEL_112:
      v39 = v12 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * v13) =
          ConditionMap_7f2ec0(&GameData_21d9ce8, v12);
      result = (__int64)GameRoutine_7d6200_alt1(&GameData_21d9d18, &v39);
      goto LABEL_113;
    }
  }
  return result;
}

__int64 ConditionMap_7ec520(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  int v8;

  v1 = *(unsigned __int16*)result;
  if (*(_WORD*)result != 0) {
    v2 = result;
    v3 = 0;
    do {
      result = game_HashString_alt1(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 8 * v3));
      if (result != 0) {
        v4 = *(_QWORD**)(GameData_21d9d00 + 8 * (result & 0xFFF));
        v5 = v4;
        if (v4 != nullptr) {
          while (*v5 != result) {
            v5 = (_QWORD*)v5[1];
            if (v5 == nullptr) {
              v6 = *(_QWORD**)(GameData_21d9d00 + 8 * (result & 0xFFF));
              while (*v6 != result) {
                v6 = (_QWORD*)v6[1];
                if (v6 == nullptr) {
                  do {
                    v7 = v4;
                    v4 = (_QWORD*)v4[1];
                  } while (v4 != nullptr);
                  result =
                      (__int64)ConditionMap_7f2ec0(&GameData_21d9ce8, result);
                  v7[1] = result;
                  goto LABEL_4;
                }
              }
              break;
            }
          }
        }
        else {
          v8 = result & 0xFFF;
          *(_QWORD*)(GameData_21d9d00 + 8 * (result & 0xFFF)) =
              ConditionMap_7f2ec0(&GameData_21d9ce8, result);
          result = (__int64)GameRoutine_7d6200_alt1(&GameData_21d9d18, &v8);
        }
      }
    LABEL_4:
      ++v3;
    } while (v3 != v1);
  }
  return result;
}

_QWORD* ConditionMap_7f2ec0(__int64* a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* result;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v3 = *a1;
  v2 = (_QWORD*)a1[1];
  v4 = (__int64)v2 - *a1;
  v5 = (v4 >> 4) + 1;
  if (v4 == -16) {
    v6 = (_QWORD*)(v3 + 16 * v5);
  LABEL_5:
    a1[1] = (__int64)v6;
    goto LABEL_6;
  }
  v7 = (_QWORD*)a1[2];
  if (v7 != v2) {
    *v2 = 0;
    v2[1] = 0;
    v6 = v2 + 2;
    goto LABEL_5;
  }
  if (v5 >> 60 != 0) {
    GameRoutine_7f1670();
  }
  v9 = (unsigned __int64)v7 - v3;
  v10 = ((__int64)v7 - v3) >> 3;
  if (v10 > v5) {
    v5 = v10;
  }
  if (v9 >= 0x7FFFFFFFFFFFFFF0LL) {
    v11 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v11 = v5;
  }
  if (v11 >> 60 != 0) {
    GameRoutine_60a210(a1);
  }
  v12 = a1;
  v13 = a2;
  v14 = fw_memory_g_heap_manager_ptr;
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v11, 16, 0);
  v16 = (_QWORD*)(v15 + v4);
  v17 = v15 + 16 * v11;
  v18 = v15 + v4 - 16 * (v4 >> 4);
  *v16 = 0;
  v16[1] = 0;
  v19 = v15 + v4 + 16;
  memcpy(v18, v3, v4);
  a1 = v12;
  *v12 = v18;
  v12[1] = v19;
  v12[2] = v17;
  a2 = v13;
  if (v3 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v20, v3);
    a1 = v12;
    a2 = v13;
  }
LABEL_6:
  result = (_QWORD*)(*a1 + v4);
  *result = a2;
  result[1] = 0;
  return result;
}

__int64 game_anonymous_ConditionMap_Add_closure_Invoke_7f30c0(__int64 a1,
                                                              _QWORD* a2)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  int v8;

  v2 = *(__int64**)(a1 + 8);
  result = game_HashString(*a2, a2);
  if (result != 0) {
    v4 = *(_QWORD*)(v2[3] + 8 * (result & 0xFFF));
    if (v4 != 0) {
      v5 = *(_QWORD**)(v2[3] + 8 * (result & 0xFFF));
      while (*v5 != result) {
        v5 = (_QWORD*)v5[1];
        if (v5 == nullptr) {
          v6 = *(_QWORD**)(v2[3] + 8 * (result & 0xFFF));
          while (*v6 != result) {
            v6 = (_QWORD*)v6[1];
            if (v6 == nullptr) {
              do {
                v7 = v4;
                v4 = *(_QWORD*)(v4 + 8);
              } while (v4 != 0);
              result = (__int64)ConditionMap_7f2ec0(v2, result);
              *(_QWORD*)(v7 + 8) = result;
              return result;
            }
          }
          return result;
        }
      }
    }
    else {
      v8 = result & 0xFFF;
      *(_QWORD*)(v2[3] + 8 * (result & 0xFFF)) =
          ConditionMap_7f2ec0(v2, result);
      return GameRoutine_7d6200(v2 + 6, &v8);
    }
  }
  return result;
}

__int64 game_anonymous_ConditionMap_Add_closure_Invoke_7f32a0(__int64 a1,
                                                              _QWORD* a2)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  int v8;

  v2 = *(__int64**)(a1 + 8);
  result = game_HashString(*a2, a2);
  if (result != 0) {
    v4 = *(_QWORD*)(v2[3] + 8 * (result & 0xFFF));
    if (v4 != 0) {
      v5 = *(_QWORD**)(v2[3] + 8 * (result & 0xFFF));
      while (*v5 != result) {
        v5 = (_QWORD*)v5[1];
        if (v5 == nullptr) {
          v6 = *(_QWORD**)(v2[3] + 8 * (result & 0xFFF));
          while (*v6 != result) {
            v6 = (_QWORD*)v6[1];
            if (v6 == nullptr) {
              do {
                v7 = v4;
                v4 = *(_QWORD*)(v4 + 8);
              } while (v4 != 0);
              result = (__int64)ConditionMap_7f2ec0(v2, result);
              *(_QWORD*)(v7 + 8) = result;
              return result;
            }
          }
          return result;
        }
      }
    }
    else {
      v8 = result & 0xFFF;
      *(_QWORD*)(v2[3] + 8 * (result & 0xFFF)) =
          ConditionMap_7f2ec0(v2, result);
      return GameRoutine_7d6200(v2 + 6, &v8);
    }
  }
  return result;
}

#pragma GCC visibility pop
