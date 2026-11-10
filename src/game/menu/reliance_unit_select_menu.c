#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_184e6b0(__int64, unsigned int);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* RelianceUnitSelectMenu_184f060(__int64 a1, unsigned int a2);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_149e3e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15997d0(_QWORD);
__int64 GameRoutine_906440(_QWORD, _QWORD);
__int64 UnitUtil_12122d0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_menu_UnitGridSelectMenu_Unknown88(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64* RelianceSelectMenu_1852b80(__int64* result, __int64, __int64);
extern __int64 GameData_20e8388;
extern __int64 GameData_2131520;
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 RelianceUnitSelectMenu_184e860(__int64 a1);
__int64 RelianceUnitSelectMenu_184fb20(__int64 a1);
__int64 RelianceUnitSelectMenu_184fca0(__int64 result, __int64* a2);
__int64 game_menu_RelianceUnitSelectMenu_RelianceUnitSelectMenu_lambda0_Invoke(
    __int64 a1, __int64* a2);
__int64 RelianceUnitSelectMenu_1854000(__int64 a1, _QWORD* a2);

__int64 RelianceUnitSelectMenu_184e860(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned int v4;
  unsigned __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  _QWORD v31[2];

  LODWORD(v31[0]) = 241;
  result = game_UnitPool_GetFirst(v31);
  if (result == 0) {
    v7 = nullptr;
    v6 = nullptr;
    goto LABEL_36;
  }
  v3 = *(_QWORD*)(result + 432);
  if (v3 == 0) {
    v3 = *(_QWORD*)(result + 440);
    if (v3 != 0) {
      v4 = *(unsigned __int8*)(v3 + 16);
      if (v4 < 9) {
        while (1) {
          v29 = v4 + 1;
          if (((2 << v4) & 0xF0) != 0) {
            v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                            24LL * (unsigned __int8)(v4 + 1) + 556000);
            if (v3 != 0) {
              break;
            }
          }
          v4 = v29;
          if (v29 == 9) {
            goto LABEL_5;
          }
        }
      }
      else {
      LABEL_5:
        v3 = 0;
      }
    }
  }
  v30 = a1;
  v5 = 0;
  v6 = nullptr;
  v7 = nullptr;
LABEL_8:
  while (1) {
    v8 = *(_QWORD*)(result + 392);
    v9 = v3;
    if ((unsigned __int64)v6 >= v5) {
      break;
    }
    *(_QWORD*)v6 = v8;
    v6 += 8;
    if (v3 == 0) {
      goto LABEL_34;
    }
  LABEL_26:
    v3 = *(_QWORD*)(v9 + 432);
    result = v9;
    if (v3 == 0) {
      v18 = *(_QWORD*)(v9 + 440);
      result = v9;
      if (v18 != 0) {
        v19 = *(unsigned __int8*)(v18 + 16);
        v3 = 0;
        result = v9;
        if (v19 <= 8) {
          while (1) {
            v20 = v19 + 1;
            if (((2 << v19) & 0xF0) != 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v19 + 1) + 556000);
              if (v3 != 0) {
                break;
              }
            }
            ++v19;
            if (v20 == 9) {
              v3 = 0;
              result = v9;
              goto LABEL_8;
            }
          }
          result = v9;
        }
      }
    }
  }
  v10 = (char*)(v6 - v7);
  v11 = (v6 - v7) >> 3;
  v12 = v11 + 1;
  if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
    GameRoutine_688200(result);
  }
  if ((__int64)(v5 - (_QWORD)v7) >> 2 > v12) {
    v12 = (__int64)(v5 - (_QWORD)v7) >> 2;
  }
  if (v5 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
    v13 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v13 = v12;
  }
  if (v13 != 0) {
    if (v13 >> 61 != 0) {
      GameRoutine_60a210(result);
    }
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v13, 16, 0);
  }
  else {
    v14 = 0;
  }
  v5 = v14 + 8 * v13;
  v15 = (char*)(v6 - v7);
  v16 = (__int64)&v10[v14 + -8 * v11];
  *(_QWORD*)&v10[v14] = v8;
  v6 = &v10[v14 + 8];
  result = memcpy(v16, v7, v15);
  if (v7 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v7);
  }
  v7 = (char*)v16;
  if (v9 != 0) {
    goto LABEL_26;
  }
LABEL_34:
  a1 = v30;
LABEL_36:
  if (game_GameModeData_instance_ != 0) {
    v21 = (__int64*)GameData_21c9ac0;
    v22 = GameData_21c9ac8;
    if (GameData_21c9ac0 != GameData_21c9ac8) {
      if (v7 == v6) {
        while (1) {
          v27 = *v21;
          v31[0] = 0;
          v31[1] = v27;
          result = GameRoutine_906440(game_GameModeData_instance_ + 136, v31);
          if ((unsigned __int8)result != 2) {
            if ((unsigned __int8)result == 3) {
              if (v27 == 0) {
                goto LABEL_60;
              }
            }
            else if (game_GameModeData_instance_ != 0) {
              result = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48),
                  *(_QWORD*)(v27 + 24) + 1272LL);
              if (result != 0 && *(_DWORD*)(result + 32) != 0) {
                goto LABEL_60;
              }
            }
            if (*(_QWORD*)(*(_QWORD*)(v27 + 24) + 1784LL) != 0) {
              v31[0] = *(_QWORD*)(*(_QWORD*)(v27 + 24) + 1784LL);
              result = UnitUtil_12122d0(v31);
              if ((result & 1) != 0 && (*(_BYTE*)(v27 + 49) & 1) != 0) {
                v26 = *(_QWORD*)(a1 + 32);
                v31[0] = v27;
                if (v26 == 0) {
                  goto LABEL_72;
                }
                result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v26 +
                                                            48LL))(v26, v31);
              }
            }
          }
        LABEL_60:
          if (++v21 == (__int64*)v22) {
            goto LABEL_73;
          }
        }
      }
      do {
        v23 = *v21;
        v24 = v7;
        while (v23 == 0 ||
               *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v24 + 24LL) + 1672LL) !=
                   *(_QWORD*)(*(_QWORD*)(v23 + 24) + 1672LL)) {
          v24 += 8;
          if (v24 == v6) {
            v31[0] = 0;
            v31[1] = v23;
            result = GameRoutine_906440(game_GameModeData_instance_ + 136, v31);
            if ((unsigned __int8)result == 2) {
              break;
            }
            if ((unsigned __int8)result == 3) {
              if (v23 == 0) {
                break;
              }
            }
            else if (game_GameModeData_instance_ != 0) {
              result = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48),
                  *(_QWORD*)(v23 + 24) + 1272LL);
              if (result != 0 && *(_DWORD*)(result + 32) != 0) {
                break;
              }
            }
            if (*(_QWORD*)(*(_QWORD*)(v23 + 24) + 1784LL) != 0) {
              v31[0] = *(_QWORD*)(*(_QWORD*)(v23 + 24) + 1784LL);
              result = UnitUtil_12122d0(v31);
              if ((result & 1) != 0 && (*(_BYTE*)(v23 + 49) & 1) != 0) {
                v26 = *(_QWORD*)(a1 + 32);
                v31[0] = v23;
                if (v26 == 0) {
                LABEL_72:
                  GameRoutine_60a310(v26, v25);
                }
                result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v26 +
                                                            48LL))(v26, v31);
              }
            }
            break;
          }
        }
        ++v21;
      } while (v21 != (__int64*)v22);
    }
  }
LABEL_73:
  if (v7 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v7);
  }
  return result;
}

_QWORD* RelianceUnitSelectMenu_184f060(__int64 a1, unsigned int a2)
{
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;

  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1200, 16, 0);
  GameRoutine_184e6b0((__int64)v4, a2);
  GameRoutine_657850(v4, GameData_212c730, "RelianceUnitSelectMenu", 1, a1);
  v6 = (_QWORD*)v4[32];
  v5 = (_QWORD*)v4[33];
  v4[42] = 0;
  while (v6 != v5) {
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
      v5 = (_QWORD*)v4[33];
    }
    ++v6;
  }
  v7 = v4[43];
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    v4[43] = 0;
  }
  v4[33] = v4[32];
  v4[30] = v4[29];
  (*(void (**)(_QWORD*))(*v4 + 1024LL))(v4);
  (*(void (**)(_QWORD*))(*v4 + 1032LL))(v4);
  return v4;
}

__int64 RelianceUnitSelectMenu_184fb20(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  game_menu_UnitGridSelectMenu_Unknown88();
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20e8388, 0);
    if (result != 0) {
      GameRoutine_1560070((void*)&v5, a1 + 848, "L_UnitInfoDetail");
      result = v6;
      if (v6 != 0) {
        v3 = std___1___shared_weak_count_lock(v6);
        v4 = v5;
        result = v6;
        if (v6 != 0) {
          result = std___1___shared_weak_count___release_weak(v6);
        }
        if (v3 != 0 && v4 != 0) {
          result = GameRoutine_15997d0(v4);
        }
        else if (v3 == 0) {
          return result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          return std___1___shared_weak_count___release_weak(v3);
        }
      }
    }
  }
  return result;
}

__int64 RelianceUnitSelectMenu_184fca0(__int64 result, __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  if (*(_DWORD*)(result + 1184) == 0 && (*(_BYTE*)(result + 1188) & 1) != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 192LL))(result);
    v3 = a2[1];
    v4 = a2[2];
    if (v3 >= v4) {
      v6 = *a2;
      v7 = v3 - *a2;
      v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
      if (v8 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v4 - v6) >> 3);
      if (2 * v10 > v8) {
        v8 = 2 * v10;
      }
      if (v10 >= 0x333333333333333LL) {
        v11 = 0x666666666666666LL;
      }
      else {
        v11 = v8;
      }
      if (v11 != 0) {
        if (v11 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v12 = result;
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
        LODWORD(result) = v12;
      }
      else {
        v13 = 0;
      }
      v14 = v13 + v7;
      *(_QWORD*)v14 = &GameData_1a9f09e;
      *(_QWORD*)(v14 + 8) = "MID_KeyHelp_AllRead";
      *(_BYTE*)(v14 + 28) = 0;
      *(_QWORD*)(v14 + 32) = 0;
      *(_BYTE*)(v14 + 16) = 1;
      v15 = v13 + 40 * v11;
      v5 = v13 + v7 + 40;
      *(_DWORD*)(v14 + 20) = 6;
      *(_DWORD*)(v14 + 24) = result;
      result = memcpy(v13, v6, v7);
      *a2 = v13;
      a2[1] = v5;
      a2[2] = v15;
      if (v6 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16, v6);
      }
    }
    else {
      *(_BYTE*)(v3 + 28) = 0;
      *(_QWORD*)(v3 + 32) = 0;
      *(_QWORD*)v3 = &GameData_1a9f09e;
      *(_QWORD*)(v3 + 8) = "MID_KeyHelp_AllRead";
      v5 = v3 + 40;
      *(_BYTE*)(v3 + 16) = 1;
      *(_DWORD*)(v3 + 20) = 6;
      *(_DWORD*)(v3 + 24) = result;
    }
    a2[1] = v5;
  }
  return result;
}

__int64 game_menu_RelianceUnitSelectMenu_RelianceUnitSelectMenu_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  int v4;

  v2 = *a2;
  result = game_GetHero(9);
  if (result == 0 || *(_QWORD*)(*(_QWORD*)(v2 + 24) + 1672LL) !=
                         *(_QWORD*)(*(_QWORD*)(result + 24) + 1672LL)) {
    v4 = 0;
    return GameRoutine_149e3e0(*(_QWORD*)GameData_2131520, v2, &v4);
  }
  return result;
}

__int64 RelianceUnitSelectMenu_1854000(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2) & 1) != 0) {
    v4 = *(_QWORD*)(v2 + 88);
    if (v4 != 0) {
      v5 = (__int64*)GameData_21c9ac0;
      v6 = GameData_21c9ac8;
      while (v5 != (__int64*)v6) {
        v7 = *v5++;
        RelianceSelectMenu_1852b80(*(__int64**)(a1 + 8), *(_QWORD*)(v4 + 392),
                                   v7);
      }
    }
  }
  return 0;
}

#pragma GCC visibility pop
