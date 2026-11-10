#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int16* GameRoutine_8450e0(__int64, __int16, __int16);
__int64 GameRoutine_775580(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_844950(_QWORD, _QWORD);
__int64 GameRoutine_844bf0(_QWORD, _QWORD);
__int64 GameRoutine_845560(_QWORD);
__int64 ITarget_772f60(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_map_BattleUtil_GetRevengeSkill(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1face80[])();
extern __int64 (*GameData_1facf00[])();
extern __int64 (*GameData_1facf80[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21cd158;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
bool game_map_BattleTarget_Commit_8fdae0(__int64 a1, __int64 a2);
__int64 game_map_BattleTarget_Commit_8fdda0(__int64 a1, char a2, __int64 a3,
                                            __int64 a4, __int64 a5);
__int64 BattleTarget_8fe0e0(__int64 a1, __int64 a2);
__int64 game_map_BattleTarget_EachTrick(__int64 a1, __int64 a2);
__int64 BattleTarget_8fe340(__int64 a1);
__int64 BattleTarget_8fe520(__int64 a1, __int64 a2);
_QWORD* game_map_BattleTarget_EachTrick_lambda0_Clone(__int64 a1);
__int64 game_map_BattleTarget_EachTrick_lambda0_Invoke(__int64 result,
                                                       __int64 a2);

bool game_map_BattleTarget_Commit_8fdae0(__int64 a1, __int64 a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  bool v18;
  int v19;
  int v21;
  int v22;
  int v23;
  int v24;
  __int16* v25;
  _QWORD* v26;
  _QWORD v28[4];
  _QWORD* v29;

  ITarget_772f60();
  if (a2 == 0) {
    return a2 != 0;
  }
  v4 = *(_QWORD*)(a1 + 12384);
  *(_DWORD*)(a1 + 12356) = 0;
  if (v4 != 0) {
    v5 = *(_QWORD**)(a1 + 12376);
    if (v5 != nullptr) {
      v6 = fw_memory_g_heap_manager_ptr;
      do {
        v7 = (_QWORD*)*v5;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8, v5);
        v5 = v7;
      } while (v7 != nullptr);
    }
    v9 = *(_QWORD*)(a1 + 12368);
    *(_QWORD*)(a1 + 12376) = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v11) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v11 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v11 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v11 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v11 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v11 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v11 + 48) = 0;
          v13 = *(_QWORD*)(a1 + 12360) + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(*(_QWORD*)(a1 + 12360) + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    *(_QWORD*)(a1 + 12384) = 0;
  }
  *(_DWORD*)(a1 + 12400) = 0;
  *(_BYTE*)(a1 + 53) = *(_BYTE*)(a2 + 313);
  *(_BYTE*)(a1 + 54) = *(_BYTE*)(a2 + 314);
  *(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 320);
  *(_BYTE*)(a1 + 57) = *(_BYTE*)(a2 + 317);
  *(_WORD*)(a1 + 58) = *(_WORD*)(a2 + 318);
  *(_BYTE*)(a1 + 55) = *(_BYTE*)(a2 + 315);
  *(_BYTE*)(a1 + 56) = *(_BYTE*)(a2 + 316);
  if (*(int*)(a2 + 12620) >= 1) {
    v28[0] = GameData_1face80;
    v28[1] = a1;
    v29 = v28;
    GameRoutine_775580(a1, a2 + 312, v28);
    if (v29 == v28) {
      v15 = 32;
    }
    else {
      if (v29 == nullptr) {
        goto LABEL_24;
      }
      v15 = 40;
    }
    (*(void (**)(__int64))(*v29 + v15))((__int64)v29);
  }
LABEL_24:
  GameRoutine_845560(a1 + 64);
  if ((*(_DWORD*)(a2 + 56) & 0xFFF) != 0) {
    v16 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)(a2 + 56) & 0xFFF));
    if (v16 != 0) {
      v17 = *(unsigned __int8*)(v16 + 104);
      v18 = v17 > 6;
      v19 = (1 << v17) & 0x68;
      if (!v18 && v19 != 0 && *(_DWORD*)(a1 + 12356) == 0) {
        v21 = *(char*)(a1 + 53);
        if ((v21 & 0x80000000) == 0) {
          v22 = *(char*)(a1 + 54);
          if ((v22 & 0x80000000) == 0) {
            if ((unsigned int)*(unsigned __int8*)(v16 + 250) - 13 > 3) {
              *(_DWORD*)(a1 + 12400) |= *(_DWORD*)(a1 + 60);
              v25 = GameRoutine_8450e0(a1 + 64, v21, v22);
              v26 = (_QWORD*)(a1 + 52);
            }
            else {
              v23 = *(_DWORD*)(a1 + 12);
              v24 = *(_DWORD*)(a1 + 16);
              LOBYTE(v28[0]) = 0;
              HIWORD(v28[0]) = -1;
              LODWORD(v28[1]) = 0;
              BYTE5(v28[0]) = 0;
              *(_WORD*)((char*)v28 + 3) = 9;
              BYTE1(v28[0]) = v23;
              BYTE2(v28[0]) = v24;
              v25 = GameRoutine_8450e0(a1 + 64, (char)v23, (char)v24);
              v26 = v28;
            }
            GameRoutine_844950(v25, v26);
          }
        }
      }
    }
  }
  return a2 != 0;
}

__int64 game_map_BattleTarget_Commit_8fdda0(__int64 a1, char a2, __int64 a3,
                                            __int64 a4, __int64 a5)
{
  int v7;
  int v8;
  bool v9;
  unsigned int v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  char v24;
  __int64 v25;
  char v26;
  __int64 v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int16* v33;
  _QWORD* v34;
  _QWORD v36[4];
  _QWORD* v37;

  *(_BYTE*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 17) = 0;
  *(_DWORD*)(a1 + 28) = -1;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0xFFFFFFFF00000000LL;
  if (a3 != 0) {
    *(_BYTE*)(a1 + 8) = *(_BYTE*)(a3 + 2088);
    *(_DWORD*)(a1 + 20) = *(_DWORD*)(a3 + 592);
    v7 = *(char*)(a3 + 585);
    *(_DWORD*)(a1 + 12) = *(char*)(a3 + 584);
    *(_DWORD*)(a1 + 16) = v7;
  }
  *(_BYTE*)(a1 + 24) = a2;
  *(_DWORD*)(a1 + 40) = 0;
  if (a5 != 0) {
    v8 = *(_WORD*)(a5 + 16) & 0xFFF;
  }
  else {
    v8 = 0;
  }
  *(_DWORD*)(a1 + 40) = v8;
  v9 = a3 == 0 || a4 == 0;
  v10 = !v9;
  if (!v9) {
    v11 = *(_QWORD*)(a1 + 12384);
    *(_DWORD*)(a1 + 12356) = 0;
    if (v11 != 0) {
      v12 = *(_QWORD**)(a1 + 12376);
      v13 = a4;
      if (v12 != nullptr) {
        v14 = fw_memory_g_heap_manager_ptr;
        do {
          v15 = (_QWORD*)*v12;
          if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v16, v12);
          v12 = v15;
        } while (v15 != nullptr);
      }
      v17 = *(_QWORD*)(a1 + 12368);
      *(_QWORD*)(a1 + 12376) = 0;
      a4 = v13;
      if (v17 != 0) {
        v18 = v17 & 7;
        if (v17 >= 8) {
          v20 = v17 & 0xFFFFFFFFFFFFFFF8LL;
          v19 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v19) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v19 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v19 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v19 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v19 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v19 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 12360) + 8 * v19 + 48) = 0;
            v21 = *(_QWORD*)(a1 + 12360) + 8 * v19;
            v19 += 8;
            *(_QWORD*)(v21 + 56) = 0;
          } while (v20 != v19);
        }
        else {
          v19 = 0;
        }
        if (v18 != 0) {
          v22 = 8 * v19;
          do {
            --v18;
            *(_QWORD*)(*(_QWORD*)(a1 + 12360) + v22) = 0;
            v22 += 8;
          } while (v18 != 0);
        }
      }
      *(_QWORD*)(a1 + 12384) = 0;
    }
    *(_DWORD*)(a1 + 12400) = 0;
    v23 = *(_BYTE*)(a4 + 584);
    v24 = *(_BYTE*)(a4 + 585);
    v25 = *(_QWORD*)(a4 + 440);
    if (v25 != 0) {
      v26 = *(_BYTE*)(v25 + 16);
    }
    else {
      v26 = 9;
    }
    *(_BYTE*)(a1 + 57) = *(_BYTE*)(a4 + 2088);
    *(_BYTE*)(a1 + 53) = v23;
    *(_BYTE*)(a1 + 54) = v24;
    *(_DWORD*)(a1 + 60) = 0;
    *(_BYTE*)(a1 + 55) = v26;
    *(_BYTE*)(a1 + 56) = 0;
    *(_WORD*)(a1 + 58) = -1;
    if (a5 == 0) {
      GameRoutine_845560(a1 + 64);
      return v10;
    }
    v36[0] = GameData_1facf00;
    v36[1] = a1;
    v37 = v36;
    GameRoutine_775580(a1, a1 + 52, v36);
    if (v37 == v36) {
      v27 = 32;
    }
    else {
      if (v37 == nullptr) {
      LABEL_39:
        GameRoutine_845560(a1 + 64);
        v28 = *(unsigned __int8*)(a5 + 104);
        if (v28 <= 6 && ((1 << v28) & 0x68) != 0 &&
            *(_DWORD*)(a1 + 12356) == 0) {
          v29 = *(char*)(a1 + 53);
          if ((v29 & 0x80000000) == 0) {
            v30 = *(char*)(a1 + 54);
            if ((v30 & 0x80000000) == 0) {
              if ((unsigned int)*(unsigned __int8*)(a5 + 250) - 13 > 3) {
                *(_DWORD*)(a1 + 12400) |= *(_DWORD*)(a1 + 60);
                v33 = GameRoutine_8450e0(a1 + 64, v29, v30);
                v34 = (_QWORD*)(a1 + 52);
              }
              else {
                v31 = *(_DWORD*)(a1 + 12);
                v32 = *(_DWORD*)(a1 + 16);
                LOBYTE(v36[0]) = 0;
                HIWORD(v36[0]) = -1;
                LODWORD(v36[1]) = 0;
                BYTE5(v36[0]) = 0;
                *(_WORD*)((char*)v36 + 3) = 9;
                BYTE1(v36[0]) = v31;
                BYTE2(v36[0]) = v32;
                v33 = GameRoutine_8450e0(a1 + 64, (char)v31, (char)v32);
                v34 = v36;
              }
              GameRoutine_844950(v33, v34);
            }
          }
        }
        return v10;
      }
      v27 = 40;
    }
    (*(void (**)(__int64))(*v37 + v27))((__int64)v37);
    goto LABEL_39;
  }
  return v10;
}

__int64 BattleTarget_8fe0e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  if (*(int*)(a1 + 12356) >= 1) {
    v4 = a1 + 68;
    v5 = 0;
    while (1) {
      v6 = *(_QWORD*)(a2 + 32);
      if (v6 == 0) {
        break;
      }
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v6 + 48LL))(v6, v4);
      ++v5;
      v4 += 12;
      if (v5 >= *(int*)(a1 + 12356)) {
        return result;
      }
    }
  LABEL_8:
    GameRoutine_60a310(v6, a2);
  }
  v6 = *(_QWORD*)(a2 + 32);
  if (v6 == 0) {
    goto LABEL_8;
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v6 + 48LL))(v6, a1 + 52);
}

__int64 game_map_BattleTarget_EachTrick(__int64 a1, __int64 a2)
{
  __int64 v3;
  _BYTE* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  _BYTE v12[32];
  _BYTE* v13;

  v3 = *(_QWORD*)(a2 + 32);
  if (v3 != 0) {
    if (v3 == a2) {
      v13 = v12;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v3 + 24LL))(v3, v12);
      v4 = v13;
    }
    else {
      v4 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      v13 = v4;
    }
  }
  else {
    v4 = nullptr;
    v13 = nullptr;
  }
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v6 = v5;
  *v5 = GameData_1facf80;
  v7 = v5 + 2;
  if (v4 != nullptr) {
    if (v4 == v12) {
      v5[6] = v7;
      (*(void (**)(_BYTE*))(*(_QWORD*)v4 + 24LL))(v4);
    }
    else {
      v5[6] = (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v4 + 16LL))(v4, v7);
    }
  }
  else {
    v5[6] = 0;
  }
  if (*(int*)(a1 + 12356) <= 0) {
    (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, a1 + 52);
  }
  else {
    v8 = a1 + 68;
    v9 = 0;
    do {
      (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v8);
      ++v9;
      v8 += 12;
    } while (v9 < *(int*)(a1 + 12356));
  }
  (*(void (**)(_QWORD*))(*v6 + 40LL))(v6);
  result = (__int64)v13;
  if (v13 == v12) {
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v13 + v11))((__int64)v13);
}

__int64 BattleTarget_8fe340(__int64 a1)
{
  __int64 v1;
  _BYTE* i;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;

  v1 = *(unsigned int*)(a1 + 12356);
  if ((int)v1 >= 1) {
    for (i = (_BYTE*)(a1 + 73);; i += 12) {
      if (*i == 0) {
        goto LABEL_4;
      }
      v4 = game_UnitPool_Get(i);
      if (v4 == 0 || (*(_BYTE*)(v4 + 416) & 8) != 0) {
        goto LABEL_4;
      }
      if (*(_BYTE*)(a1 + 8) == 0) {
        goto LABEL_14;
      }
      v5 = v4;
      v6 = game_UnitPool_Get(a1 + 8);
      if (v6 != 0) {
        break;
      }
      v8 = 9;
      v4 = v5;
      v9 = *(_QWORD*)(v5 + 440);
      if (v9 == 0) {
      LABEL_12:
        v10 = 9;
        if (v8 == 9) {
          goto LABEL_4;
        }
        goto LABEL_16;
      }
    LABEL_15:
      v10 = *(unsigned __int8*)(v9 + 16);
      if (v8 != v10) {
      LABEL_16:
        if (v8 != 0) {
          if (v8 != 3 || v10 != 0) {
          LABEL_3:
            if (game_map_BattleUtil_GetRevengeSkill(v4) != 0) {
              goto LABEL_43;
            }
          }
        }
        else if (v10 != 3) {
          goto LABEL_3;
        }
      }
    LABEL_4:
      if (--v1 == 0) {
        return 0;
      }
    }
    v7 = *(_QWORD*)(v6 + 440);
    v4 = v5;
    if (v7 != 0) {
      v8 = *(unsigned __int8*)(v7 + 16);
      v9 = *(_QWORD*)(v5 + 440);
      if (v9 == 0) {
        goto LABEL_12;
      }
      goto LABEL_15;
    }
  LABEL_14:
    v8 = 9;
    v9 = *(_QWORD*)(v4 + 440);
    if (v9 == 0) {
      goto LABEL_12;
    }
    goto LABEL_15;
  }
  i = (_BYTE*)(a1 + 57);
  if (*(_BYTE*)(a1 + 57) == 0) {
    return 0;
  }
  v11 = game_UnitPool_Get(a1 + 57);
  if (v11 == 0 || (*(_BYTE*)(v11 + 416) & 8) != 0) {
    return 0;
  }
  v13 = *(unsigned __int8*)(a1 + 8);
  v12 = a1 + 8;
  if (v13 != 0) {
    v14 = v11;
    v15 = game_UnitPool_Get(v12);
    if (v15 == 0) {
      v17 = 9;
      v11 = v14;
      v18 = *(_QWORD*)(v14 + 440);
      if (v18 == 0) {
        goto LABEL_36;
      }
      goto LABEL_33;
    }
    v16 = *(_QWORD*)(v15 + 440);
    v11 = v14;
    if (v16 != 0) {
      v17 = *(unsigned __int8*)(v16 + 16);
      v18 = *(_QWORD*)(v14 + 440);
      if (v18 == 0) {
      LABEL_36:
        v19 = 9;
        if (v17 == 9) {
          return 0;
        }
        goto LABEL_37;
      }
    LABEL_33:
      v19 = *(unsigned __int8*)(v18 + 16);
      if (v17 == v19) {
        return 0;
      }
    LABEL_37:
      if (v17 != 0) {
        if (v17 == 3 && v19 == 0) {
          return 0;
        }
      }
      else if (v19 == 3) {
        return 0;
      }
      if (game_map_BattleUtil_GetRevengeSkill(v11) != 0) {
      LABEL_43:
        if (*i != 0) {
          return game_UnitPool_Get(i);
        }
      }
      return 0;
    }
  }
  v17 = 9;
  v18 = *(_QWORD*)(v11 + 440);
  if (v18 == 0) {
    goto LABEL_36;
  }
  goto LABEL_33;
}

__int64 BattleTarget_8fe520(__int64 a1, __int64 a2)
{
  _BYTE* v2;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 i;

  if (a2 == 0) {
    return 0;
  }
  v2 = (_BYTE*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) == 0) {
    goto LABEL_10;
  }
  if (a2 == game_UnitPool_Get(a1 + 8)) {
    v10 = a1;
    v11 = *(unsigned int*)(a1 + 12356);
    if ((int)v11 >= 1) {
      for (i = v10 + 68; (GameRoutine_844bf0(i, a2) & 1) == 0; i += 12) {
        if (--v11 == 0) {
          return 0;
        }
      }
      return 1;
    }
    return (GameRoutine_844bf0(v10 + 52, a2) & 1) != 0;
  }
  if (*v2 != 0 && (v5 = game_UnitPool_Get(v2)) != 0 &&
      (v6 = *(_QWORD*)(v5 + 440)) != 0) {
    v7 = *(unsigned __int8*)(v6 + 16);
    v8 = *(_QWORD*)(a2 + 440);
    if (v8 == 0) {
      goto LABEL_8;
    }
  }
  else {
  LABEL_10:
    v7 = 9;
    v8 = *(_QWORD*)(a2 + 440);
    if (v8 == 0) {
    LABEL_8:
      v9 = 9;
      if (v7 == 9) {
        return 0;
      }
      goto LABEL_12;
    }
  }
  v9 = *(unsigned __int8*)(v8 + 16);
  if (v7 == v9) {
    return 0;
  }
LABEL_12:
  if (v7 != 0) {
    return v7 != 3 || v9 != 0;
  }
  return v9 != 3;
}

_QWORD* game_map_BattleTarget_EachTrick_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1facf80;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[6] = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *v4 + 16LL))(v4, v4, v3);
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_map_BattleTarget_EachTrick_lambda0_Invoke(__int64 result,
                                                       __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if ((*(__int16*)(a2 + 6) & 0x8000000000000000LL) == 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL);
    if (v2 != 0) {
      v3 = *(_QWORD*)(result + 48);
      v4 = v2 + 144LL * *(__int16*)(a2 + 6);
      if (v3 == 0) {
        GameRoutine_60a310(0, a2);
      }
      return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v4);
    }
  }
  return result;
}

#pragma GCC visibility pop
