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
__int64* BattleTarget_8fe340_alt1(__int64) __asm__("BattleTarget_8fe340");
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_7fec70(__int64, __int64);
__int64 GameRoutine_7ffa50(__int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca2e8;
float Height_7c4d10(__int64, float, float);
bool BattleTarget_8fe640(__int64 a1, _DWORD* a2);
__attribute__((swiftcall)) void BattleTarget_8fe8e0(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void BattleTarget_8ff080(PSEUDO_X8 x8_, __int64 a1);
__int64 BattleTarget_9001a0(__int64 a1);
__int64 BattleTarget_8ffa20(__int64 a1, __int64 a2);
__int64 UnitActor_81ab40(__int64, float, float);
extern __int128 GameData_1a83090;
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
__int64 BattleTarget_8ff670(__int64 a1, __int64 a2);

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

bool BattleTarget_8fe640(__int64 a1, _DWORD* a2)
{
  __int64* v4;
  __int64* v5;
  __int64 v6;
  _BYTE* v8;
  int v9;
  __int64* v10;
  int v12;
  int v13;
  int v14;

  v4 = BattleTarget_8fe340_alt1(a1);
  if (v4 == nullptr) {
    return true;
  }
  v5 = v4;
  v6 = game_g_shared_system_skills_ptr;
  v13 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill(v4 + 218, (unsigned int*)&v13) & 1) != 0) {
    return true;
  }
  if (*((_WORD*)v5 + 246) == 0 && *((_BYTE*)v5 + 496) == 0) {
    v14 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v6) & 0xFFF;
    if ((game_HasSkill(v5 + 218, (unsigned int*)&v14) & 1) != 0) {
      return true;
    }
  }
  v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4CLL) + v6) & 0xFFF;
  if ((game_HasSkill(v5 + 218, (unsigned int*)&v12) & 1) != 0) {
    return true;
  }
  v9 = *(unsigned __int8*)(a1 + 8);
  v8 = (_BYTE*)(a1 + 8);
  if (v9 == 0) {
    return true;
  }
  v10 = game_UnitPool_Get_alt1(v8);
  return v10 == nullptr || (v10[52] & 8) != 0 ||
         (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                               8LL * (*a2 & 0xFFF)) +
                    248LL) &
          0x1000) != 0;
}

__attribute__((swiftcall)) void BattleTarget_8fe8e0(PSEUDO_X8 x8_, __int64 a1)
{
  _OWORD* a2 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  _BYTE* v3;
  int v4;
  int v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  bool v9;
  _BYTE* v10;
  int v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  bool v16;
  float v17;
  float v18;
  float v19;
  __int128 v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  char* v38;
  __int64 v39;
  int v40;
  __int64 v41;
  char* v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  int v49;
  __int64 v50;
  char* v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  int v59;
  char* v60;
  int v61;
  int v62;
  int v63;
  int v64;
  char* v65;
  __int64 v66;
  __int64 v67;
  int v68;
  char* v69;
  int v70;
  int v71;
  int v72;
  int v73;
  float v74;

  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v3 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v3 != nullptr) {
      goto LABEL_3;
    }
  LABEL_15:
    v5 = *(_DWORD*)(a1 + 12);
    goto LABEL_16;
  }
  v6 = *(unsigned __int16*)(a1 + 32);
  if (*(_WORD*)(a1 + 32) == 0) {
    v6 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v6);
  v3 = *(_BYTE**)(v7 + 192);
  v8 = *(unsigned __int8*)(v7 + 72);
  v9 = v3 == nullptr || v8 > 7;
  if (v9 || v3[105] == 0 || v3[104] == 2) {
    goto LABEL_15;
  }
LABEL_3:
  v4 = (unsigned __int8)v3[250];
  switch (v4) {
  case 30:
    if (*(_BYTE*)(a1 + 8) != 0) {
      v32 = a1;
      v33 = game_UnitPool_Get(a1 + 8);
      if (v33 != 0) {
        LOBYTE(v5) = *(_BYTE*)(v33 + 584);
      }
      else {
        LOBYTE(v5) = 0;
      }
      a1 = v32;
    }
    else {
      LOBYTE(v5) = 0;
    }
    break;
  case 16:
    v5 = *(_DWORD*)(a1 + 12);
    v21 = *(_DWORD*)(a1 + 20);
    v22 = *(_DWORD*)(a1 + 12356);
    v23 = v5;
    v24 = v5;
    if (v22 != 0) {
      v25 = v22 & 7;
      if (v22 >= 8) {
        v38 = (char*)(a1 + 81);
        v39 = 0;
        v23 = *(_DWORD*)(a1 + 12);
        do {
          v39 -= 8;
          if (v23 >= *(v38 - 12)) {
            v23 = *(v38 - 12);
          }
          if (v23 >= *v38) {
            v23 = *v38;
          }
          if (v23 >= v38[12]) {
            v23 = v38[12];
          }
          if (v23 >= v38[24]) {
            v23 = v38[24];
          }
          if (v23 >= v38[36]) {
            v23 = v38[36];
          }
          if (v23 >= v38[48]) {
            v23 = v38[48];
          }
          if (v23 >= v38[60]) {
            v23 = v38[60];
          }
          v40 = v38[72];
          v38 += 96;
          if (v23 >= v40) {
            v23 = v40;
          }
        } while (-(__int64)(v22 & 0xFFFFFFF8) != v39);
        v26 = -v39;
      }
      else {
        v26 = 0;
        v23 = *(_DWORD*)(a1 + 12);
      }
      if ((v22 & 7) != 0) {
        v41 = v22 & 7;
        v42 = (char*)(a1 + 12 * v26 + 69);
        do {
          v44 = *v42;
          v42 += 12;
          v43 = v44;
          if (v23 >= v44) {
            v23 = v43;
          }
          --v41;
        } while (v41 != 0);
      }
      v45 = v22 & 7;
      if (v22 >= 8) {
        v56 = (char*)(a1 + 81);
        v57 = 0;
        v24 = *(_DWORD*)(a1 + 12);
        v58 = -(__int64)(v22 & 0xFFFFFFF8);
        do {
          v57 -= 8;
          if (v24 <= *(v56 - 12)) {
            v24 = *(v56 - 12);
          }
          if (v24 <= *v56) {
            v24 = *v56;
          }
          if (v24 <= v56[12]) {
            v24 = v56[12];
          }
          if (v24 <= v56[24]) {
            v24 = v56[24];
          }
          if (v24 <= v56[36]) {
            v24 = v56[36];
          }
          if (v24 <= v56[48]) {
            v24 = v56[48];
          }
          if (v24 <= v56[60]) {
            v24 = v56[60];
          }
          v59 = v56[72];
          v56 += 96;
          if (v24 <= v59) {
            v24 = v59;
          }
        } while (v58 != v57);
        v46 = -v57;
      }
      else {
        v46 = 0;
        v24 = *(_DWORD*)(a1 + 12);
      }
      if (v45 != 0) {
        v60 = (char*)(a1 + 12 * v46 + 69);
        do {
          v62 = *v60;
          v60 += 12;
          v61 = v62;
          if (v24 <= v62) {
            v24 = v61;
          }
          --v25;
        } while (v25 != 0);
      }
    }
    if (v21 <= 1) {
      v21 = 1;
    }
    v63 = (v24 - v5 + v23 - v5) * (v24 - v23);
    if (v63 != 0) {
      v64 = v24 - v21 + 1;
      if (v63 < 0) {
        if (v64 >= v23) {
          LOBYTE(v5) = v23;
        }
        else {
          LOBYTE(v5) = v64;
        }
      }
      else if (v64 >= v24) {
        LOBYTE(v5) = v24;
      }
      else {
        LOBYTE(v5) = v64;
      }
    }
    break;
  case 15:
    LOBYTE(v5) = *(_BYTE*)(a1 + 53);
    break;
  default:
    goto LABEL_15;
  }
LABEL_16:
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v10 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v10 != nullptr) {
      goto LABEL_18;
    }
  LABEL_30:
    v12 = *(_DWORD*)(a1 + 16);
    goto LABEL_31;
  }
  v13 = *(unsigned __int16*)(a1 + 32);
  if (*(_WORD*)(a1 + 32) == 0) {
    v13 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v13);
  v10 = *(_BYTE**)(v14 + 192);
  v15 = *(unsigned __int8*)(v14 + 72);
  v16 = v10 == nullptr || v15 > 7;
  if (v16 || v10[105] == 0 || v10[104] == 2) {
    goto LABEL_30;
  }
LABEL_18:
  v11 = (unsigned __int8)v10[250];
  switch (v11) {
  case 30:
    v35 = *(unsigned __int8*)(a1 + 8);
    v34 = a1 + 8;
    LOBYTE(v12) = v35;
    if (v35 != 0) {
      v36 = game_UnitPool_Get(v34);
      if (v36 != 0) {
        LOBYTE(v12) = *(_BYTE*)(v36 + 585);
      }
      else {
        LOBYTE(v12) = 0;
      }
    }
    break;
  case 16:
    v12 = *(_DWORD*)(a1 + 16);
    v27 = *(_DWORD*)(a1 + 20);
    v28 = *(_DWORD*)(a1 + 12356);
    if (v28 != 0) {
      v29 = v28 & 7;
      if (v28 >= 8) {
        v47 = (char*)(a1 + 82);
        v48 = 0;
        v31 = *(_DWORD*)(a1 + 16);
        do {
          v48 -= 8;
          if (v31 >= *(v47 - 12)) {
            v31 = *(v47 - 12);
          }
          if (v31 >= *v47) {
            v31 = *v47;
          }
          if (v31 >= v47[12]) {
            v31 = v47[12];
          }
          if (v31 >= v47[24]) {
            v31 = v47[24];
          }
          if (v31 >= v47[36]) {
            v31 = v47[36];
          }
          if (v31 >= v47[48]) {
            v31 = v47[48];
          }
          if (v31 >= v47[60]) {
            v31 = v47[60];
          }
          v49 = v47[72];
          v47 += 96;
          if (v31 >= v49) {
            v31 = v49;
          }
        } while (-(__int64)(v28 & 0xFFFFFFF8) != v48);
        v30 = -v48;
      }
      else {
        v30 = 0;
        v31 = *(_DWORD*)(a1 + 16);
      }
      if ((v28 & 7) != 0) {
        v50 = v28 & 7;
        v51 = (char*)(a1 + 12 * v30 + 70);
        do {
          v53 = *v51;
          v51 += 12;
          v52 = v53;
          if (v31 >= v53) {
            v31 = v52;
          }
          --v50;
        } while (v50 != 0);
      }
      v54 = v28 & 7;
      if (v28 >= 8) {
        v65 = (char*)(a1 + 82);
        v66 = 0;
        v67 = -(__int64)(v28 & 0xFFFFFFF8);
        v37 = *(_DWORD*)(a1 + 16);
        do {
          v66 -= 8;
          if (v37 <= *(v65 - 12)) {
            v37 = *(v65 - 12);
          }
          if (v37 <= *v65) {
            v37 = *v65;
          }
          if (v37 <= v65[12]) {
            v37 = v65[12];
          }
          if (v37 <= v65[24]) {
            v37 = v65[24];
          }
          if (v37 <= v65[36]) {
            v37 = v65[36];
          }
          if (v37 <= v65[48]) {
            v37 = v65[48];
          }
          if (v37 <= v65[60]) {
            v37 = v65[60];
          }
          v68 = v65[72];
          v65 += 96;
          if (v37 <= v68) {
            v37 = v68;
          }
        } while (v67 != v66);
        v55 = -v66;
      }
      else {
        v55 = 0;
        v37 = *(_DWORD*)(a1 + 16);
      }
      if (v54 != 0) {
        v69 = (char*)(a1 + 12 * v55 + 70);
        do {
          v71 = *v69;
          v69 += 12;
          v70 = v71;
          if (v37 <= v71) {
            v37 = v70;
          }
          --v29;
        } while (v29 != 0);
      }
    }
    else {
      v31 = *(_DWORD*)(a1 + 16);
      v37 = v31;
    }
    if (v27 <= 1) {
      v27 = 1;
    }
    v72 = (v37 - v12 + v31 - v12) * (v37 - v31);
    v73 = v37 - v27 + 1;
    if (v73 < v37) {
      LOBYTE(v37) = v73;
    }
    if (v73 >= v31) {
      LOBYTE(v73) = v31;
    }
    if (v72 >= 0) {
      LOBYTE(v73) = v37;
    }
    if (v72 != 0) {
      LOBYTE(v12) = v73;
    }
    break;
  case 15:
    LOBYTE(v12) = *(_BYTE*)(a1 + 54);
    break;
  default:
    goto LABEL_30;
  }
LABEL_31:
  v17 = (float)((float)((float)(unsigned int)((char)v5 + 256) * 5.0f) + 2.5f) +
        -0x1.4000000000000p+10f;
  v18 = (float)((float)((float)(unsigned int)((char)v12 + 256) * 5.0f) + 2.5f) +
        -0x1.4000000000000p+10f;
  if (GameData_21ca2e8 != 0) {
    v74 =
        (float)((float)((float)(unsigned int)((char)v12 + 256) * 5.0f) + 2.5f) +
        -0x1.4000000000000p+10f;
    v19 = Height_7c4d10(
        *(_QWORD*)(GameData_21ca2e8 + 61456),
        (float)((float)((float)(unsigned int)((char)v5 + 256) * 5.0f) + 2.5f) +
            -0x1.4000000000000p+10f,
        v18);
    v17 =
        (float)((float)((float)(unsigned int)((char)v5 + 256) * 5.0f) + 2.5f) +
        -0x1.4000000000000p+10f;
    v18 = v74;
  }
  else {
    v19 = 0.0f;
  }
  *(_QWORD*)&v20 = __PAIR64__(LODWORD(v19), LODWORD(v17));
  *((_QWORD*)&v20 + 1) = LODWORD(v18);
  *a2 = v20;
}

__attribute__((swiftcall)) void BattleTarget_8ff080(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  _BYTE* v3;
  _BYTE* v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  bool v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int128 v21;
  _BYTE* v22;
  __int64 v23;
  __int64 v24;
  _BYTE* v25;
  __int64 v26;
  int v27;
  float v28;
  float v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  bool v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  char* v56;
  int v57;
  int v58;
  float v59;
  float v60;
  float v61;
  int v62;
  __int128 v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;

  v3 = (_BYTE*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) != 0 && game_UnitPool_Get(a1 + 8) != 0) {
    if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
      v5 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                      8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
      if (v5 != nullptr) {
        v6 = (unsigned __int8)v5[105];
        goto LABEL_6;
      }
    }
    else {
      v12 = *(unsigned __int16*)(a1 + 32);
      if (*(_WORD*)(a1 + 32) == 0) {
        v12 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v13 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v12);
      v5 = *(_BYTE**)(v13 + 192);
      v14 = *(unsigned __int8*)(v13 + 72);
      v15 = v5 == nullptr || v14 > 7;
      if (!v15) {
        v6 = (unsigned __int8)v5[105];
        if (v5[105] != 0 && v5[104] != 2) {
        LABEL_6:
          if (v6 != 3 || v5[279] != 0) {
            LOBYTE(v7) = *(_BYTE*)(a1 + 53);
            LOBYTE(v8) = *(_BYTE*)(a1 + 54);
            v9 = *(_DWORD*)(a1 + 12356);
            if (v9 == 0) {
            LABEL_41:
              v7 = (char)v7;
              v16 = 2.5f;
              v17 = 5.0f;
              v8 = (char)v8;
              goto LABEL_20;
            }
            v10 = v9 & 3;
            if (v9 < 4) {
              v11 = 0;
            LABEL_36:
              if (v10 != 0) {
                v25 = (_BYTE*)(a1 + 12 * v11 + 72);
                do {
                  if ((*v25 & 4) != 0) {
                    LOBYTE(v7) = *(v25 - 3);
                    LOBYTE(v8) = *(v25 - 2);
                  }
                  v25 += 12;
                  --v10;
                } while (v10 != 0);
              }
              goto LABEL_41;
            }
            v22 = (_BYTE*)(a1 + 108);
            v23 = 0;
            v24 = -(__int64)(v9 & 0xFFFFFFFC);
            while (1) {
              if ((*(v22 - 36) & 4) != 0) {
                LOBYTE(v7) = *(v22 - 39);
                LOBYTE(v8) = *(v22 - 38);
                if ((*(v22 - 24) & 4) == 0) {
                LABEL_28:
                  if ((*(v22 - 12) & 4) == 0) {
                    goto LABEL_29;
                  }
                  goto LABEL_33;
                }
              }
              else if ((*(v22 - 24) & 4) == 0) {
                goto LABEL_28;
              }
              LOBYTE(v7) = *(v22 - 27);
              LOBYTE(v8) = *(v22 - 26);
              if ((*(v22 - 12) & 4) == 0) {
              LABEL_29:
                if ((*v22 & 4) != 0) {
                  goto LABEL_34;
                }
                goto LABEL_25;
              }
            LABEL_33:
              LOBYTE(v7) = *(v22 - 15);
              LOBYTE(v8) = *(v22 - 14);
              if ((*v22 & 4) != 0) {
              LABEL_34:
                LOBYTE(v7) = *(v22 - 3);
                LOBYTE(v8) = *(v22 - 2);
              }
            LABEL_25:
              v23 -= 4;
              v22 += 48;
              if (v24 == v23) {
                v11 = -v23;
                goto LABEL_36;
              }
            }
          }
          if (*v3 != 0) {
            v26 = game_UnitPool_Get(v3);
            if (v26 != 0) {
              if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
                if (*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                               8LL * (*(_DWORD*)(a1 + 40) & 0xFFF)) != 0) {
                LABEL_46:
                  v27 = *(_DWORD*)(v26 + 592);
                  v28 = (float)(v27 + 2 * *(char*)(v26 + 584)) * 2.5f;
                  v29 = (float)(v27 + 2 * *(char*)(v26 + 585)) * 2.5f;
                  goto LABEL_56;
                }
              }
              else {
                v30 = *(unsigned __int16*)(a1 + 32);
                if (*(_WORD*)(a1 + 32) == 0) {
                  v30 = *(unsigned __int16*)game_g_empty_item_ptr;
                }
                v31 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v30);
                v32 = *(_QWORD*)(v31 + 192);
                v33 = *(unsigned __int8*)(v31 + 72);
                v34 = v32 == 0 || v33 > 7;
                if (!v34 && *(_BYTE*)(v32 + 105) != 0 &&
                    *(_BYTE*)(v32 + 104) != 2) {
                  goto LABEL_46;
                }
              }
            }
          }
          v28 = (float)((float)((float)(*(_DWORD*)(a1 + 12) + 256) * 5.0f) +
                        2.5f) +
                -0x1.4000000000000p+10f;
          v29 = (float)((float)((float)(*(_DWORD*)(a1 + 16) + 256) * 5.0f) +
                        2.5f) +
                -0x1.4000000000000p+10f;
        LABEL_56:
          v35 = *(_DWORD*)(a1 + 12356);
          v36 = GameData_21ca2e8;
          if (v35 < 1) {
            LOBYTE(v40) = *(_BYTE*)(a1 + 53);
            LOBYTE(v41) = *(_BYTE*)(a1 + 54);
            v43 = 1;
            v44 = 1;
          }
          else {
            v37 = v35 & 3;
            if ((unsigned int)v35 >= 4) {
              v45 = (char*)(a1 + 106);
              v39 = -100;
              v41 = 100;
              v46 = 0;
              v42 = -100;
              v47 = -(__int64)(v35 & 0x7FFFFFFC);
              v40 = 100;
              do {
                v48 = *(v45 - 37);
                v49 = *(v45 - 36);
                v46 -= 4;
                if (v40 >= v48) {
                  v40 = *(v45 - 37);
                }
                if (v41 >= v49) {
                  v41 = *(v45 - 36);
                }
                if (v39 <= v48) {
                  v39 = *(v45 - 37);
                }
                v50 = *(v45 - 25);
                if (v42 <= v49) {
                  v42 = *(v45 - 36);
                }
                v51 = *(v45 - 24);
                if (v40 >= v50) {
                  v40 = *(v45 - 25);
                }
                if (v41 >= v51) {
                  v41 = *(v45 - 24);
                }
                if (v39 <= v50) {
                  v39 = *(v45 - 25);
                }
                v52 = *(v45 - 13);
                if (v42 <= v51) {
                  v42 = *(v45 - 24);
                }
                v53 = *(v45 - 12);
                if (v40 >= v52) {
                  v40 = *(v45 - 13);
                }
                if (v41 >= v53) {
                  v41 = *(v45 - 12);
                }
                if (v39 <= v52) {
                  v39 = *(v45 - 13);
                }
                v54 = *(v45 - 1);
                if (v42 <= v53) {
                  v42 = *(v45 - 12);
                }
                v55 = *v45;
                v45 += 48;
                if (v40 >= v54) {
                  v40 = v54;
                }
                if (v41 >= v55) {
                  v41 = v55;
                }
                if (v39 <= v54) {
                  v39 = v54;
                }
                if (v42 <= v55) {
                  v42 = v55;
                }
              } while (v47 != v46);
              v38 = -v46;
            }
            else {
              v38 = 0;
              v39 = -100;
              v40 = 100;
              v41 = 100;
              v42 = -100;
            }
            if (v37 != 0) {
              v56 = (char*)(a1 + 12 * v38 + 70);
              do {
                v57 = *(v56 - 1);
                v58 = *v56;
                v56 += 12;
                if (v40 >= v57) {
                  v40 = v57;
                }
                if (v41 >= v58) {
                  v41 = v58;
                }
                if (v39 <= v57) {
                  v39 = v57;
                }
                if (v42 <= v58) {
                  v42 = v58;
                }
                --v37;
              } while (v37 != 0);
            }
            v43 = (char)(v39 - v40 + 1);
            v44 = (char)(v42 - v41 + 1);
          }
          v59 = (float)(v43 + 2 * (char)v40) * 2.5f;
          v60 = (float)(v44 + 2 * (char)v41) * 2.5f;
          if (GameData_21ca2e8 != 0) {
            v73 = v29;
            v69 = (float)(v44 + 2 * (char)v41) * 2.5f;
            v71 = (float)(v43 + 2 * (char)v40) * 2.5f;
            v61 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456), v59, v60);
            v60 = v69;
            v59 = v71;
            v29 = v73;
          }
          else {
            v61 = 0.0f;
          }
          HIDWORD(v63) = 0;
          v62 = *(_DWORD*)(a1 + 16);
          *(_QWORD*)&v63 = __PAIR64__(LODWORD(v61), LODWORD(v59));
          v64 = *(char*)(a1 + 53) - *(_DWORD*)(a1 + 12);
          v65 = *(char*)(a1 + 54);
          v15 = v65 <= v62;
          v66 = ((unsigned int)v64 >> 30) & 2 | (v65 - v62 < 0);
          v67 = v66 | 4;
          if (v15) {
            v67 = v66;
          }
          *((float*)&v63 + 2) = v60;
          if (v64 <= 0) {
            v68 = v67;
          }
          else {
            v68 = v67 | 8;
          }
          *(_OWORD*)a2 = v63;
          if (v68 > 3) {
            if (v68 != 4) {
              if (v68 != 8) {
                goto LABEL_124;
              }
              goto LABEL_122;
            }
          }
          else if (v68 != 1) {
            if (v68 != 2) {
            LABEL_124:
              if (v36 != 0) {
                *(float*)(a2 + 4) = Height_7c4d10(
                    *(_QWORD*)(v36 + 61456), COERCE_FLOAT(*(_OWORD*)a2),
                    COERCE_FLOAT(*(_QWORD*)(a2 + 8)));
              }
              else {
                *(_DWORD*)(a2 + 4) = 0;
              }
              return;
            }
          LABEL_122:
            *((_QWORD*)&v63 + 1) = LODWORD(v29);
            *(_OWORD*)a2 = v63;
            goto LABEL_124;
          }
          *(float*)a2 = v28;
          goto LABEL_124;
        }
      }
    }
  }
  v7 = *(char*)(a1 + 53);
  v16 = 2.5f;
  v17 = 5.0f;
  v8 = *(char*)(a1 + 54);
LABEL_20:
  v18 = (float)(v16 + (float)((float)(unsigned int)(v7 + 256) * v17)) +
        -0x1.4000000000000p+10f;
  v19 = (float)(v16 + (float)((float)(unsigned int)(v8 + 256) * v17)) +
        -0x1.4000000000000p+10f;
  if (GameData_21ca2e8 != 0) {
    v72 = v19;
    v70 = v18;
    v20 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456), v18, v19);
    v18 = v70;
    v19 = v72;
  }
  else {
    v20 = 0.0f;
  }
  *(_QWORD*)&v21 = __PAIR64__(LODWORD(v20), LODWORD(v18));
  *((_QWORD*)&v21 + 1) = LODWORD(v19);
  *(_OWORD*)a2 = v21;
}

__int64 BattleTarget_8ff670(__int64 a1, __int64 a2)
{
  int v2;
  int v3;
  _BYTE* v5;
  float32x4_t v6;
  float32x2_t v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  bool v11;
  __int64 v12;
  __int64* v13;
  int v14;
  int v15;
  int v16;
  float v17;
  float v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  bool v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float v29;
  float32x4_t v30;
  int8x16_t v31;
  float v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  unsigned __int64 v39;
  float32x4_t v40;
  unsigned __int64 v41;
  float32x4_t v42;
  float32x4_t v43;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(char*)(a1 + 53) - *(_DWORD*)(a1 + 12);
  v3 = *(char*)(a1 + 54) - *(_DWORD*)(a1 + 16);
  if (((v3 * v3) | (v2 * v2)) == 0) {
    return 0;
  }
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v5 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v5 == nullptr) {
      goto LABEL_15;
    }
  }
  else {
    v8 = *(unsigned __int16*)(a1 + 32);
    if (*(_WORD*)(a1 + 32) == 0) {
      v8 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v9 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v8);
    v5 = *(_BYTE**)(v9 + 192);
    v10 = *(unsigned __int8*)(v9 + 72);
    v11 = v5 == nullptr || v10 > 7;
    if (v11 || v5[105] == 0 || v5[104] == 2) {
      goto LABEL_15;
    }
  }
  if (v5[250] == 16) {
    LANES128(v6).n128_u32[1] = 0;
    LANES128(v6).n128_u32[3] = 0;
    LANES128(v6).n128_f32[0] = (float)v2;
    LANES128(v6).n128_f32[2] = (float)v3;
    LANES64(v7).n64_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(
                    COERCE_AS(float32x2_t, COERCE_UNSIGNED_INT((float)v3)),
                    COERCE_AS(float32x2_t, COERCE_UNSIGNED_INT((float)v3))),
                vmul_f32(
                    COERCE_AS(float32x2_t, COERCE_UNSIGNED_INT((float)v2)),
                    COERCE_AS(float32x2_t, COERCE_UNSIGNED_INT((float)v2)))))
            .n64_u64[0];
    goto LABEL_30;
  }
LABEL_15:
  if (*(_BYTE*)(a1 + 8) == 0) {
    goto LABEL_28;
  }
  v12 = a1;
  v13 = game_UnitPool_Get_alt1((_BYTE*)(a1 + 8));
  a1 = v12;
  if (v13 == nullptr) {
    goto LABEL_28;
  }
  if ((*(_DWORD*)(v12 + 40) & 0xFFF) == 0) {
    v19 = *(unsigned __int16*)(v12 + 32);
    if (*(_WORD*)(v12 + 32) == 0) {
      v19 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v20 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v19);
    v21 = *(_QWORD*)(v20 + 192);
    v22 = *(unsigned __int8*)(v20 + 72);
    v23 = v21 == 0 || v22 > 7;
    if (!v23 && *(_BYTE*)(v21 + 105) != 0 && *(_BYTE*)(v21 + 104) != 2) {
      goto LABEL_19;
    }
  LABEL_28:
    v17 = (float)((float)((float)(*(_DWORD*)(a1 + 12) + 256) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    v18 = (float)((float)((float)(*(_DWORD*)(a1 + 16) + 256) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    goto LABEL_29;
  }
  if (*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                 8LL * (*(_DWORD*)(v12 + 40) & 0xFFF)) == 0) {
    goto LABEL_28;
  }
LABEL_19:
  v14 = *((char*)v13 + 584);
  v15 = *((char*)v13 + 585);
  v16 = *((_DWORD*)v13 + 148);
  v17 = (float)(v16 + 2 * v14) * 0x1.4000000000000p+1f;
  v18 = (float)(v16 + 2 * v15) * 0x1.4000000000000p+1f;
LABEL_29:
  LANES128(v24).n128_u64[0] = LODWORD(v17);
  LANES128(v24).n128_u64[1] = LODWORD(v18);
  v40 = v24;
  BattleTarget_8ff080((void*)((__int64)&v43), a1);
  v6 = vsubq_f32(v43, v40);
  LANES128(v6).n128_u32[1] = 0;
  v25 = vmulq_f32(v6, v6);
  LANES64(v7).n64_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
          .n64_u64[0];
LABEL_30:
  LANES128(v26).n128_u64[0] = LANES64_OF(vpadd_f32(v7, v7)).n64_u64[0];
  if (LANES128(v26).n128_f32[0] > 0x0.0p+0f) {
    LANES128(v26).n128_u64[1] = LANES128(v26).n128_u64[0];
    v27 = vrsqrteq_f32(v26);
    v28 = vmulq_f32(v27, vrsqrtsq_f32(v27, vmulq_f32(v26, v27)));
    v6 = vbicq_s8(
        vmulq_f32(v6, vmulq_f32(v28, vrsqrtsq_f32(v28, vmulq_f32(v26, v28)))),
        vceqzq_f32(v26));
  }
  if ((float)(vmuls_lane_f32(LANES128(v6).n128_f32[2], v6, 2) +
              (float)(LANES128(v6).n128_f32[0] * LANES128(v6).n128_f32[0])) <
      0x1.0000000000000p-4f) {
    return 0;
  }
  v29 = 0x0.0p+0f;
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                           COERCE_AS(float32x2_t, 1065353216LL)))
          .n64_f32[0] > 0x0.0p+0f) {
    LANES128(v30).n128_u64[0] = LANES128(v6).n128_u32[0];
    LANES128(v30).n128_u64[1] = LANES128(v6).n128_u32[2];
    v31 = vmulq_f32(v30, v30);
    LANES128(v31).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
            .n64_f32[0] > 0x0.0p+0f) {
      v42 = v30;
      v39 = LANES128(v6).n128_u32[2];
      v41 = LANES128(v6).n128_u32[0];
      v43 = COERCE_AS(float32x4_t, GameData_1a83090);
      v32 = math_Vec3_Angle(&v43, &v42);
      LANES128(v33).n128_u64[0] = v41;
      LANES128(v33).n128_u64[1] = v39;
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v35).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v36).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v34).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v37).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v35).n128_i8[8] =
          vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v37).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                    COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v36).n128_i8[8] =
          vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      if (LANES128_OF(vmlsq_f32(vmulq_f32(v34, v35), v36, v37)).n128_f32[1] <
          0x0.0p+0f) {
        v32 = -v32;
      }
      v29 = v32 * 0x1.ca5dc00000000p+5f;
    }
  }
  return UnitActor_81ab40(a2, v29, -0x1.0000000000000p+0f);
}

__int64 BattleTarget_8ffa20(__int64 a1, __int64 a2)
{
  _BYTE* v2;
  __int64 result;
  int v6;
  int v7;
  __int64* v8;
  int v9;
  _BYTE* v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  bool v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  char* v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  int v36;
  char* v37;
  int v38;
  int v39;
  int v40;
  int v41;
  _BYTE* v42;
  int v43;
  int v44;
  unsigned int v45;
  __int64 v46;
  unsigned int v47;
  bool v48;
  int v49;
  int v50;
  unsigned int v51;
  __int64 v52;
  int v53;
  int v54;
  char v55;
  int v56;
  int v57;
  __int64 v58;
  int v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  bool v71;
  int v72;
  unsigned int v73;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  char* v80;
  __int64 v81;
  int v82;
  __int64 v83;
  char* v84;
  int v85;
  int v86;
  __int64 v87;
  __int64 v88;
  char* v89;
  __int64 v90;
  __int64 v91;
  int v92;
  char* v93;
  int v94;
  int v95;
  int v96;

  v2 = (_BYTE*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) == 0) {
    return 0;
  }
  result = game_UnitPool_Get(a1 + 8);
  if (result == 0) {
    return result;
  }
  v6 = *(_DWORD*)(a1 + 12);
  v7 = *(_DWORD*)(a1 + 16);
  v8 = GameData_212c880[0];
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v9 = *(_DWORD*)(a1 + 12);
    v10 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v10 == nullptr) {
      goto LABEL_87;
    }
    goto LABEL_5;
  }
  v12 = *(unsigned __int16*)(a1 + 32);
  v9 = *(_DWORD*)(a1 + 12);
  if (*(_WORD*)(a1 + 32) == 0) {
    v12 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v13 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v12);
  v10 = *(_BYTE**)(v13 + 192);
  v14 = *(unsigned __int8*)(v13 + 72);
  v15 = v10 == nullptr || v14 > 7;
  if (!v15) {
    v9 = *(_DWORD*)(a1 + 12);
    if (v10[105] != 0) {
      v9 = *(_DWORD*)(a1 + 12);
      if (v10[104] != 2) {
      LABEL_5:
        v11 = (unsigned __int8)v10[250];
        if (v11 == 30) {
          if (*v2 != 0) {
            v22 = result;
            v23 = game_UnitPool_Get(v2);
            if (v23 != 0) {
              v9 = *(char*)(v23 + 584);
            }
            else {
              v9 = 0;
            }
            result = v22;
          }
          else {
            v9 = 0;
          }
        }
        else if (v11 == 16) {
          v16 = *(_DWORD*)(a1 + 20);
          v17 = *(_DWORD*)(a1 + 12356);
          v18 = *(_DWORD*)(a1 + 12);
          v19 = v18;
          if (v17 != 0) {
            v20 = v17 & 7;
            if (v17 >= 8) {
              v24 = (char*)(a1 + 81);
              v25 = 0;
              v18 = *(_DWORD*)(a1 + 12);
              do {
                v25 -= 8;
                if (v18 >= *(v24 - 12)) {
                  v18 = *(v24 - 12);
                }
                if (v18 >= *v24) {
                  v18 = *v24;
                }
                if (v18 >= v24[12]) {
                  v18 = v24[12];
                }
                if (v18 >= v24[24]) {
                  v18 = v24[24];
                }
                if (v18 >= v24[36]) {
                  v18 = v24[36];
                }
                if (v18 >= v24[48]) {
                  v18 = v24[48];
                }
                if (v18 >= v24[60]) {
                  v18 = v24[60];
                }
                v26 = v24[72];
                v24 += 96;
                if (v18 >= v26) {
                  v18 = v26;
                }
              } while (-(__int64)(v17 & 0xFFFFFFF8) != v25);
              v21 = -v25;
            }
            else {
              v21 = 0;
              v18 = *(_DWORD*)(a1 + 12);
            }
            if ((v17 & 7) != 0) {
              v27 = v17 & 7;
              v28 = (char*)(a1 + 12 * v21 + 69);
              do {
                v30 = *v28;
                v28 += 12;
                v29 = v30;
                if (v18 >= v30) {
                  v18 = v29;
                }
                --v27;
              } while (v27 != 0);
            }
            v31 = v17 & 7;
            if (v17 >= 8) {
              v33 = (char*)(a1 + 81);
              v34 = 0;
              v19 = *(_DWORD*)(a1 + 12);
              v35 = -(__int64)(v17 & 0xFFFFFFF8);
              do {
                v34 -= 8;
                if (v19 <= *(v33 - 12)) {
                  v19 = *(v33 - 12);
                }
                if (v19 <= *v33) {
                  v19 = *v33;
                }
                if (v19 <= v33[12]) {
                  v19 = v33[12];
                }
                if (v19 <= v33[24]) {
                  v19 = v33[24];
                }
                if (v19 <= v33[36]) {
                  v19 = v33[36];
                }
                if (v19 <= v33[48]) {
                  v19 = v33[48];
                }
                if (v19 <= v33[60]) {
                  v19 = v33[60];
                }
                v36 = v33[72];
                v33 += 96;
                if (v19 <= v36) {
                  v19 = v36;
                }
              } while (v35 != v34);
              v32 = -v34;
            }
            else {
              v32 = 0;
              v19 = *(_DWORD*)(a1 + 12);
            }
            if (v31 != 0) {
              v37 = (char*)(a1 + 12 * v32 + 69);
              do {
                v39 = *v37;
                v37 += 12;
                v38 = v39;
                if (v19 <= v39) {
                  v19 = v38;
                }
                --v20;
              } while (v20 != 0);
            }
          }
          v9 = *(_DWORD*)(a1 + 12);
          if (v16 <= 1) {
            v16 = 1;
          }
          v40 = (v19 - v6 + v18 - v6) * (v19 - v18);
          if (v40 != 0) {
            v41 = v19 - v16 + 1;
            if (v40 < 0) {
              if (v41 >= v18) {
                v9 = v18;
              }
              else {
                v9 = v41;
              }
            }
            else if (v41 >= v19) {
              v9 = v19;
            }
            else {
              v9 = v41;
            }
          }
        }
        else {
          v9 = *(_DWORD*)(a1 + 12);
          if (v11 == 15) {
            v9 = *(char*)(a1 + 53);
          }
        }
      }
    }
  }
LABEL_87:
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v42 =
        *(_BYTE**)(*(_QWORD*)(*v8 + 64) + 8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v42 != nullptr) {
      goto LABEL_89;
    }
  LABEL_101:
    v44 = *(_DWORD*)(a1 + 16);
    goto LABEL_102;
  }
  v45 = *(unsigned __int16*)(a1 + 32);
  if (*(_WORD*)(a1 + 32) == 0) {
    v45 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v46 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v45);
  v42 = *(_BYTE**)(v46 + 192);
  v47 = *(unsigned __int8*)(v46 + 72);
  v48 = v42 == nullptr || v47 > 7;
  if (v48 || v42[105] == 0 || v42[104] == 2) {
    goto LABEL_101;
  }
LABEL_89:
  v43 = (unsigned __int8)v42[250];
  switch (v43) {
  case 30:
    v44 = (unsigned __int8)*v2;
    if (*v2 != 0) {
      v78 = result;
      v79 = game_UnitPool_Get(v2);
      if (v79 != 0) {
        v44 = *(char*)(v79 + 585);
      }
      else {
        v44 = 0;
      }
      result = v78;
    }
    break;
  case 16:
    v44 = *(_DWORD*)(a1 + 16);
    v72 = *(_DWORD*)(a1 + 20);
    v73 = *(_DWORD*)(a1 + 12356);
    v74 = v44;
    v75 = v44;
    if (v73 != 0) {
      v76 = v73 & 7;
      if (v73 >= 8) {
        v80 = (char*)(a1 + 82);
        v81 = 0;
        v74 = *(_DWORD*)(a1 + 16);
        do {
          v81 -= 8;
          if (v74 >= *(v80 - 12)) {
            v74 = *(v80 - 12);
          }
          if (v74 >= *v80) {
            v74 = *v80;
          }
          if (v74 >= v80[12]) {
            v74 = v80[12];
          }
          if (v74 >= v80[24]) {
            v74 = v80[24];
          }
          if (v74 >= v80[36]) {
            v74 = v80[36];
          }
          if (v74 >= v80[48]) {
            v74 = v80[48];
          }
          if (v74 >= v80[60]) {
            v74 = v80[60];
          }
          v82 = v80[72];
          v80 += 96;
          if (v74 >= v82) {
            v74 = v82;
          }
        } while (-(__int64)(v73 & 0xFFFFFFF8) != v81);
        v77 = -v81;
      }
      else {
        v77 = 0;
        v74 = *(_DWORD*)(a1 + 16);
      }
      if ((v73 & 7) != 0) {
        v83 = v73 & 7;
        v84 = (char*)(a1 + 12 * v77 + 70);
        do {
          v86 = *v84;
          v84 += 12;
          v85 = v86;
          if (v74 >= v86) {
            v74 = v85;
          }
          --v83;
        } while (v83 != 0);
      }
      v87 = v73 & 7;
      if (v73 >= 8) {
        v89 = (char*)(a1 + 82);
        v90 = 0;
        v75 = *(_DWORD*)(a1 + 16);
        v91 = -(__int64)(v73 & 0xFFFFFFF8);
        do {
          v90 -= 8;
          if (v75 <= *(v89 - 12)) {
            v75 = *(v89 - 12);
          }
          if (v75 <= *v89) {
            v75 = *v89;
          }
          if (v75 <= v89[12]) {
            v75 = v89[12];
          }
          if (v75 <= v89[24]) {
            v75 = v89[24];
          }
          if (v75 <= v89[36]) {
            v75 = v89[36];
          }
          if (v75 <= v89[48]) {
            v75 = v89[48];
          }
          if (v75 <= v89[60]) {
            v75 = v89[60];
          }
          v92 = v89[72];
          v89 += 96;
          if (v75 <= v92) {
            v75 = v92;
          }
        } while (v91 != v90);
        v88 = -v90;
      }
      else {
        v88 = 0;
        v75 = *(_DWORD*)(a1 + 16);
      }
      if (v87 != 0) {
        v93 = (char*)(a1 + 12 * v88 + 70);
        do {
          v95 = *v93;
          v93 += 12;
          v94 = v95;
          if (v75 <= v95) {
            v75 = v94;
          }
          --v76;
        } while (v76 != 0);
      }
    }
    if (v72 <= 1) {
      v72 = 1;
    }
    v96 = (v75 - v44 + v74 - v44) * (v75 - v74);
    if (v96 != 0) {
      v44 = v75 - v72 + 1;
      if (v96 < 0) {
        if (v44 >= v74) {
          v44 = v74;
        }
      }
      else if (v44 >= v75) {
        v44 = v75;
      }
    }
    break;
  case 15:
    v44 = *(char*)(a1 + 54);
    break;
  default:
    goto LABEL_101;
  }
LABEL_102:
  v49 = v9 - v6;
  v50 = v44 - v7;
  v15 = v44 <= v7;
  v51 = ((unsigned int)(v9 - v6) >> 30) & 2 | (v44 - v7 < 0);
  if (!v15) {
    v51 |= 4u;
  }
  if (v49 > 0) {
    v51 |= 8u;
  }
  if (v51 == 0) {
    return 0;
  }
  v52 = *(_QWORD*)(result + 440);
  v53 = v49 >= 0 ? v9 - v6 : v6 - v9;
  v54 = v50 >= 0 ? v50 : -v50;
  v55 = v52 != 0 ? *(_BYTE*)(v52 + 16) : 9;
  v56 = *(_DWORD*)(result + 592);
  *(_BYTE*)(a2 + 176) = 0;
  *(_DWORD*)(a2 + 168) = v7;
  *(_DWORD*)(a2 + 172) = 0;
  *(_DWORD*)(a2 + 160) = v7;
  *(_DWORD*)(a2 + 164) = v6;
  *(_DWORD*)(a2 + 152) = v7;
  *(_DWORD*)(a2 + 156) = v6;
  *(_BYTE*)(a2 + 140) = v55;
  *(_DWORD*)(a2 + 136) = 0;
  *(_DWORD*)(a2 + 144) = v56;
  *(_DWORD*)(a2 + 148) = v6;
  if ((v54 | v53) == 0) {
    return 0;
  }
  if (v50 < 0) {
    v50 = -v50;
  }
  if (v49 < 0) {
    v49 = v6 - v9;
  }
  if (v50 <= (unsigned int)v49) {
    v57 = v49;
  }
  else {
    v57 = v50;
  }
  v58 = a2 + 8;
  v59 = v57 & 7;
  if ((unsigned int)(v57 - 1) >= 7) {
    v60 = v57 & 0xFFFFFFF8;
    do {
      v61 = *(int*)(a2 + 136);
      v60 -= 8;
      *(_DWORD*)(a2 + 136) = v61 + 1;
      *(_BYTE*)(v58 + v61) = v51;
      v62 = *(int*)(a2 + 136);
      *(_DWORD*)(a2 + 136) = v62 + 1;
      *(_BYTE*)(v58 + v62) = v51;
      v63 = *(int*)(a2 + 136);
      *(_DWORD*)(a2 + 136) = v63 + 1;
      *(_BYTE*)(v58 + v63) = v51;
      v64 = *(int*)(a2 + 136);
      *(_DWORD*)(a2 + 136) = v64 + 1;
      *(_BYTE*)(v58 + v64) = v51;
      v65 = *(int*)(a2 + 136);
      *(_DWORD*)(a2 + 136) = v65 + 1;
      *(_BYTE*)(v58 + v65) = v51;
      v66 = *(int*)(a2 + 136);
      *(_DWORD*)(a2 + 136) = v66 + 1;
      *(_BYTE*)(v58 + v66) = v51;
      v67 = *(int*)(a2 + 136);
      *(_DWORD*)(a2 + 136) = v67 + 1;
      *(_BYTE*)(v58 + v67) = v51;
      v68 = *(int*)(a2 + 136);
      *(_DWORD*)(a2 + 136) = v68 + 1;
      *(_BYTE*)(v58 + v68) = v51;
    } while (v60 != 0);
  }
  if (v59 != 0) {
    v69 = -v59;
    do {
      v70 = *(int*)(a2 + 136);
      v71 = __CFADD__(v69++, 1);
      *(_DWORD*)(a2 + 136) = v70 + 1;
      *(_BYTE*)(v58 + v70) = v51;
    } while (!v71);
  }
  return *(_DWORD*)(a2 + 136) > 0;
}

__int64 BattleTarget_9001a0(__int64 a1)
{
  int v1;
  __int64* v3;
  _BYTE* v4;
  __int64 v5;
  __int16* v6;
  _BYTE* v7;
  __int64* v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  _BYTE* v13;
  __int64* v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  bool v21;
  __int64 v22;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  bool v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  struct {
    __int64 v34;
    int v35;
  } v34_;
  struct {
    _QWORD v36[2];
    __int64 v37;
    __int64 v38;
    __int16 v39;
    char gap58_[2];
    int v40;
  } v36_;

  v1 = *(_DWORD*)(a1 + 40);
  v3 = GameData_212c880[0];
  if ((v1 & 0xFFF) != 0) {
    v4 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v1 & 0xFFF));
    if (v4 == nullptr) {
      goto LABEL_21;
    }
  }
  else {
    v9 = *(unsigned __int16*)(a1 + 32);
    if (*(_WORD*)(a1 + 32) == 0) {
      v9 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v9);
    v4 = *(_BYTE**)(v10 + 192);
    v11 = *(unsigned __int8*)(v10 + 72);
    v12 = v4 == nullptr || v11 > 7;
    if (v12 || v4[105] == 0 || v4[104] == 2) {
      goto LABEL_21;
    }
  }
  if (*(_BYTE*)(a1 + 57) != 0 || (*(__int16*)(a1 + 58) & 0x80000000) == 0) {
    goto LABEL_21;
  }
  v5 = *(unsigned int*)(a1 + 12356);
  if ((_DWORD)v5 != 0) {
    v6 = (__int16*)(a1 + 74);
    while (*((_BYTE*)v6 - 1) == 0 && *v6 < 0) {
      v6 += 6;
      if (--v5 == 0) {
        goto LABEL_10;
      }
    }
  LABEL_21:
    v13 = (_BYTE*)(a1 + 8);
    if (*(_BYTE*)(a1 + 8) != 0) {
      v14 = game_UnitPool_Get_alt1(v13);
      v1 = *(_DWORD*)(a1 + 40);
    }
    else {
      v14 = nullptr;
    }
    v15 = *(unsigned __int16*)(a1 + 32);
    v16 = v1 & 0xFFF;
    if (v16 != 0) {
      v17 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * v16);
      if (v17 == 0) {
      LABEL_36:
        v36_.v40 = 0;
        v36_.v36[0] = v14;
        v36_.v36[1] = 0;
        v34_.v34 = 0xC86432000001LL;
        v34_.v35 = 51300;
        v36_.v39 = 256;
        if (v15 == 0) {
          v15 = *(unsigned __int16*)game_g_empty_item_ptr;
        }
        v22 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v15);
        v36_.v37 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v17);
        v36_.v38 = v22;
        goto LABEL_39;
      }
    }
    else {
      v18 = *(unsigned __int16*)game_g_empty_item_ptr;
      if (*(_WORD*)(a1 + 32) != 0) {
        v18 = *(unsigned __int16*)(a1 + 32);
      }
      v19 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v18);
      v17 = *(_QWORD*)(v19 + 192);
      v20 = *(unsigned __int8*)(v19 + 72);
      v21 = v17 == 0 || v20 > 7;
      if (v21 || *(_BYTE*)(v17 + 105) == 0 || *(_BYTE*)(v17 + 104) == 2) {
        v17 = 0;
        goto LABEL_36;
      }
    }
    v17 = *(_WORD*)(v17 + 16) & 0xFFF;
    goto LABEL_36;
  }
LABEL_10:
  if (v4[106] == 6) {
    v7 = (_BYTE*)(a1 + 8);
    if (*(_BYTE*)(a1 + 8) != 0) {
      v8 = game_UnitPool_Get_alt1(v7);
      v1 = *(_DWORD*)(a1 + 40);
    }
    else {
      v8 = nullptr;
    }
    v24 = *(unsigned __int16*)(a1 + 32);
    if ((v1 & 0xFFF) != 0) {
      v25 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * (v1 & 0xFFF));
      if (v25 == 0) {
      LABEL_54:
        v30 = *GameData_212c878[0];
        v31 = *(unsigned __int16*)game_g_empty_item_ptr;
        v36_.v40 = 0;
        v36_.v36[0] = v8;
        v36_.v36[1] = 0;
        v34_.v34 = 0xC86432000001LL;
        v32 = *(_QWORD*)(v30 + 64);
        if (v24 == 0) {
          v24 = v31;
        }
        v34_.v35 = 51300;
        v36_.v39 = 256;
        v33 = *(_QWORD*)(v32 + 8LL * v24);
        v36_.v37 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v25);
        v36_.v38 = v33;
      LABEL_39:
        GameRoutine_7fec70((__int64)&v34_.v34, (__int64)v36_.v36);
        return GameRoutine_7ffa50(&v34_.v34);
      }
    }
    else {
      v26 = *(unsigned __int16*)game_g_empty_item_ptr;
      if (*(_WORD*)(a1 + 32) != 0) {
        v26 = *(unsigned __int16*)(a1 + 32);
      }
      v27 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v26);
      v25 = *(_QWORD*)(v27 + 192);
      v28 = *(unsigned __int8*)(v27 + 72);
      v29 = v25 == 0 || v28 > 7;
      if (v29 || *(_BYTE*)(v25 + 105) == 0 || *(_BYTE*)(v25 + 104) == 2) {
        v25 = 0;
        goto LABEL_54;
      }
    }
    v25 = *(_WORD*)(v25 + 16) & 0xFFF;
    goto LABEL_54;
  }
  return 0;
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
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[6] = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *v4 + 16LL))((void*)v4, v4, v3));
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
