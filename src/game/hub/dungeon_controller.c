#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f5f030(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
extern char GameData_2167620;
__int64 DungeonController_f5e870(__int64 a1);
__int64 GameRoutine_158fb60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_822320(_QWORD);
__int64 GameRoutine_f5ec20();
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
bool GameRoutine_f5ee40();
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a9d987;
extern _UNKNOWN GameData_1ad725f;
extern __int64 GameData_1ac302b;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212ea58;
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 DungeonController_f5f480();
bool DungeonController_f5f760();
__int64
game_hub_DungeonController_GetTreasureCounterNow_lambda0_Invoke(__int64 a1,
                                                                __int64* a2);
__int64
game_hub_DungeonController_GetTreasureCounterMax_lambda0_Invoke(__int64 result,
                                                                __int64* a2);

__int64 DungeonController_f5e870(__int64 a1)
{
  __int64 result;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_DWORD*)(a1 + 64) = 0;
  result = GameRoutine_f5f030();
  v3 = *(float*)(a1 + 64);
  v4 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v5 = *(_QWORD*)(v4 + 48);
  v6 = *(_QWORD*)(v4 + 56);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 232LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
    if (v3 > 0.0) {
      goto LABEL_5;
    }
  }
  else {
    v7 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 232LL);
    if (v3 > 0.0) {
    LABEL_5:
      *(_BYTE*)(v7 + 2184) = 1;
      *(float*)(v7 + 2180) = v3 * 0.5;
      goto LABEL_9;
    }
  }
  if (*(_BYTE*)(v7 + 2184) == 1) {
    *(_DWORD*)(v7 + 2180) = 0;
    *(_BYTE*)(v7 + 2184) = 0;
  }

LABEL_9:
  *(_DWORD*)(v7 + 2340) = v3 > 0.0;
  *(_BYTE*)(v7 + 2344) = 1;
  if (*(_BYTE*)(a1 + 68) != 0) {
    *(_BYTE*)(a1 + 68) = 0;
    GameData_2167620 = 0;
  }
  return result;
}

__int64 DungeonController_f5f480()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;

  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 232LL) & 8) == 0) {
    v0 = GameRoutine_821090(17);
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v0);
      if (result == 0) {
        return result;
      }
      if (*(int*)(result + 32) >= 1 &&
          ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) & 4) == 0 ||
           game_GameModeData_instance_ != 0 &&
               *(_BYTE*)(game_GameModeData_instance_ + 15) == 1) &&
          (GameRoutine_822320(1) & 1) != 0) {
        v23 = 16;
        result = game_UnitPool_GetFirst(&v23);
        if (result == 0) {
          return result;
        }
        v2 = *(_QWORD*)(result + 432);
        v3 = result;
        if (v2 == 0) {
          v2 = *(_QWORD*)(result + 440);
          if (v2 != 0) {
            v4 = *(unsigned __int8*)(v2 + 16);
            if (v4 <= 8) {
              v22 = v4 - 3;
              while (1) {
                if (v22 == 0) {
                  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v2 != 0) {
                    break;
                  }
                }
                if (++v22 == 6) {
                  goto LABEL_13;
                }
              }
            }
            else {
            LABEL_13:
              v2 = 0;
            }
          }
        }
        v5 = GameData_212c890[0];
      LABEL_18:
        while (2) {
          v6 = v2;
          v7 = game_HashString(&GameData_1ac302b);
          if (v7 == 0) {
            goto LABEL_42;
          }
          v8 = *(_QWORD*)(*v5 + 96);
          if (v8 == 0 || *(_QWORD*)(*v5 + 112) == 0) {
            goto LABEL_42;
          }
          v10 = v8 - 1;
          if ((v8 & (v8 - 1)) != 0) {
            v11 = v7;
            if (v7 >= v8) {
              v11 = v7 % v8;
            }
          }
          else {
            v11 = v10 & v7;
          }
          v12 = *(_QWORD**)(*(_QWORD*)(*v5 + 88) + 8 * v11);
          if (v12 == nullptr || (v13 = (_QWORD*)*v12) == nullptr) {
          LABEL_42:
            v15 = 0;
            goto LABEL_43;
          }
          if ((v8 & v10) == 0) {
            while (1) {
              v16 = v13[1];
              if (v16 == v7) {
                if (v13[2] == v7) {
                  goto LABEL_55;
                }
              }
              else if ((v16 & v10) != v11) {
                goto LABEL_42;
              }
              v13 = (_QWORD*)*v13;
              v15 = 0;
              if (v13 == nullptr) {
                goto LABEL_43;
              }
            }
          }
          while (1) {
            v14 = v13[1];
            if (v14 == v7) {
              break;
            }
            if (v14 >= v8) {
              v14 %= v8;
            }
            if (v14 != v11) {
              goto LABEL_42;
            }
          LABEL_32:
            v13 = (_QWORD*)*v13;
            if (v13 == nullptr) {
              goto LABEL_42;
            }
          }
          if (v13[2] != v7) {
            goto LABEL_32;
          }
        LABEL_55:
          v15 = v13[3];
        LABEL_43:
          v17 = *(_QWORD*)(v3 + 392);
          result = v17 == v15;
          if (v17 != v15 && v6 != 0) {
            v2 = *(_QWORD*)(v6 + 432);
            v3 = v6;
            if (v2 == 0) {
              v19 = *(_QWORD*)(v6 + 440);
              v3 = v6;
              if (v19 != 0) {
                v20 = *(unsigned __int8*)(v19 + 16);
                v2 = 0;
                v3 = v6;
                if (v20 <= 8) {
                  v21 = v20 - 3;
                  while (1) {
                    if (v21 == 0) {
                      v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                      556096LL);
                      if (v2 != 0) {
                        break;
                      }
                    }
                    if (++v21 == 6) {
                      v2 = 0;
                      v3 = v6;
                      goto LABEL_18;
                    }
                  }
                  v3 = v6;
                }
              }
            }
            continue;
          }
          return result;
        }
      }
    }
  }
  return 0;
}

bool DungeonController_f5f760()
{
  __int64 v0;
  __int64* v2;
  __int64* v3;
  int v4;
  int v5;
  _DWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  int v20;

  if (GameRoutine_f5ee40()) {
    return false;
  }
  v19 = (__int64*)&GameData_1a9d987;
  v18 = game_HashString(&GameData_1a9d987);
  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v18);
    if (v0 != 0 && *(_DWORD*)(v0 + 32) != 0) {
      return false;
    }
  }
  if ((unsigned __int64)GameRoutine_f5ec20() >> 32 == 0) {
    return false;
  }
  GameRoutine_158fb60(*GameData_212ea58 == 0, 0, 0xFFFFFFFFLL);
  v2 = (__int64*)v18;
  v3 = v19;
  if ((__int64*)v18 != v19) {
    v4 = 0;
    v5 = 0;
    v6 = (_DWORD*)game_g_shared_system_skills_ptr;
    do {
      v7 = *v2;
      v8 = *v2 + 1744;
      v20 = *v6 & 0xFFF;
      if ((game_HasSkill(v8, &v20) & 1) == 0 ||
          ((v9 = *(_QWORD*)(v7 + 440)) == 0 ? (v10 = 9)
                                            : (v10 = *(_BYTE*)(v9 + 16)),
           ((1 << v10) & 0xF1) == 0)) {
        ++v5;
        v4 += *(unsigned __int8*)(v7 + 498);
      }
      ++v2;
    } while (v2 != v3);
    if (v5 > 0) {
      v4 /= v5;
    }
    v11 = (__int64*)v18;
    if (v18 == 0) {
      goto LABEL_23;
    }
    goto LABEL_20;
  }
  v4 = 0;
  v11 = (__int64*)v18;
  if (v18 != 0) {
  LABEL_20:
    v19 = v11;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
LABEL_23:
  v13 = GameRoutine_f5ec20();
  if (HIDWORD(v13) == 0) {
    GameRoutine_8123d0(v13);
  }
  v14 = v13;
  v19 = (__int64*)&GameData_1ad725f;
  v15 = game_HashString(&GameData_1ad725f);
  v16 = game_GameModeData_instance_;
  v18 = v15;
  if (game_GameModeData_instance_ != 0) {
    v17 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v18);
    if (v17 != 0) {
      v16 = *(_DWORD*)(v17 + 32);
    }
    else {
      v16 = 0;
    }
  }
  return v4 >= v16 + v14;
}

__int64

game_hub_DungeonController_GetTreasureCounterNow_lambda0_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  result = *(_QWORD*)(v2 + 736);
  if (*(_DWORD*)(v2 + 216) == 1 && result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
    if ((result & 1) == 0) {
      ++**(_DWORD**)(a1 + 8);
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64

game_hub_DungeonController_GetTreasureCounterMax_lambda0_Invoke(__int64 result,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_DWORD*)(v2 + 216);
  v5 = *(_QWORD*)(v2 + 736);
  if (v4 == 1 && v5 != 0) {
    ++**(_DWORD**)(result + 8);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
