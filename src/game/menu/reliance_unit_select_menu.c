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
__int64 RelianceUnitSelectMenu_184e860_alt1(__int64 a1) __asm__(
    "RelianceUnitSelectMenu_184e860");
__int64 RelianceUnitSelectMenu_184fb20(__int64 a1);
__int64 RelianceUnitSelectMenu_184fca0_alt1(
    __int64 result, __int64* a2) __asm__("RelianceUnitSelectMenu_184fca0");
__int64 game_menu_RelianceUnitSelectMenu_RelianceUnitSelectMenu_lambda0_Invoke(
    __int64 a1, __int64* a2);
__int64 RelianceUnitSelectMenu_1854000(__int64 a1, _QWORD* a2);
__int64 GameSituation_906440(__int64, __int64*);
__int64 UnitUtil_12122d0_alt1(__int64*) __asm__("UnitUtil_12122d0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RelianceUnitSelectMenu_184e860(__int64 a1);
void RelianceUnitSelectMenu_184fca0(__int64 a1, __int64* a2);
_QWORD* MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
extern __int64 (*GameData_20e8fb8[])();
extern __int64 (*GameData_20e90c8[])();
__int64 game_menu_RelianceUnitSelectMenu_ZLCall(__int64 a1);

void RelianceUnitSelectMenu_184e860(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  unsigned int v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35[2];

  LODWORD(v35[0]) = 241;
  v2 = (_QWORD*)game_UnitPool_GetFirst_alt1((int*)v35);
  if (v2 == nullptr) {
    v7 = 0;
    v6 = nullptr;
    goto LABEL_36;
  }
  v3 = v2[54];
  if (v3 == 0) {
    v3 = v2[55];
    if (v3 != 0) {
      v4 = *(unsigned __int8*)(v3 + 16);
      if (v4 < 9) {
        while (1) {
          v33 = v4 + 1;
          if (((2 << v4) & 0xF0) != 0) {
            v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                            24LL * (unsigned __int8)(v4 + 1) + 556000);
            if (v3 != 0) {
              break;
            }
          }
          v4 = v33;
          if (v33 == 9) {
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
  v34 = a1;
  v5 = 0;
  v6 = nullptr;
  v7 = 0;
LABEL_8:
  while (1) {
    v8 = v2[49];
    v9 = (_QWORD*)v3;
    if ((unsigned __int64)v6 >= v5) {
      break;
    }
    *(_QWORD*)v6 = v8;
    v6 += 8;
    if (v3 == 0) {
      goto LABEL_34;
    }
  LABEL_26:
    v3 = v9[54];
    v2 = v9;
    if (v3 == 0) {
      v18 = v9[55];
      v2 = v9;
      if (v18 != 0) {
        v19 = *(unsigned __int8*)(v18 + 16);
        v3 = 0;
        v2 = v9;
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
              v2 = v9;
              goto LABEL_8;
            }
          }
          v2 = v9;
        }
      }
    }
  }
  v10 = &v6[-v7];
  v11 = (__int64)&v6[-v7] >> 3;
  v12 = v11 + 1;
  if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
    GameRoutine_688200_alt1();
  }
  if ((__int64)(v5 - v7) >> 2 > v12) {
    v12 = (__int64)(v5 - v7) >> 2;
  }
  if (v5 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
    v13 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v13 = v12;
  }
  if (v13 != 0) {
    if (v13 >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
  }
  else {
    v14 = 0;
  }
  v5 = v14 + 8 * v13;
  v15 = (unsigned __int64)&v6[-v7];
  v16 = (__int64)&v10[v14 + -8 * v11];
  *(_QWORD*)&v10[v14] = v8;
  v6 = &v10[v14 + 8];
  memcpy_alt1(v16, v7, v15);
  if (v7 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v7);
  }
  v7 = v16;
  if (v9 != nullptr) {
    goto LABEL_26;
  }
LABEL_34:
  a1 = v34;
LABEL_36:
  if (game_GameModeData_instance_ != 0) {
    v21 = (__int64*)GameData_21c9ac0;
    v22 = GameData_21c9ac8;
    if (GameData_21c9ac0 != GameData_21c9ac8) {
      if ((char*)v7 == v6) {
        while (1) {
          v28 = *v21;
          v35[0] = 0;
          v35[1] = v28;
          v29 = (unsigned __int8)GameSituation_906440(
              game_GameModeData_instance_ + 136, v35);
          if (v29 != 2) {
            if (v29 == 3) {
              if (v28 == 0) {
                goto LABEL_60;
              }
            }
            else if (game_GameModeData_instance_ != 0) {
              v30 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)(*(_QWORD*)(v28 + 24) + 1272LL));
              if (v30 != 0 && *(_DWORD*)(v30 + 32) != 0) {
                goto LABEL_60;
              }
            }
            if (*(_QWORD*)(*(_QWORD*)(v28 + 24) + 1784LL) != 0) {
              v35[0] = *(_QWORD*)(*(_QWORD*)(v28 + 24) + 1784LL);
              if ((UnitUtil_12122d0_alt1(v35) & 1) != 0 &&
                  (*(_BYTE*)(v28 + 49) & 1) != 0) {
                v31 = *(_QWORD*)(a1 + 32);
                v35[0] = v28;
                if (v31 == 0) {
                  goto LABEL_72;
                }
                (*(void (**)(__int64, __int64*))(*(_QWORD*)v31 + 48LL))(v31,
                                                                        v35);
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
        v24 = (_QWORD*)v7;
        while (v23 == 0 || *(_QWORD*)(*(_QWORD*)(*v24 + 24LL) + 1672LL) !=
                               *(_QWORD*)(*(_QWORD*)(v23 + 24) + 1672LL)) {
          if (++v24 == (_QWORD*)v6) {
            v35[0] = 0;
            v35[1] = v23;
            v25 = (unsigned __int8)GameSituation_906440(
                game_GameModeData_instance_ + 136, v35);
            if (v25 == 2) {
              break;
            }
            if (v25 == 3) {
              if (v23 == 0) {
                break;
              }
            }
            else if (game_GameModeData_instance_ != 0) {
              v26 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)(*(_QWORD*)(v23 + 24) + 1272LL));
              if (v26 != 0 && *(_DWORD*)(v26 + 32) != 0) {
                break;
              }
            }
            if (*(_QWORD*)(*(_QWORD*)(v23 + 24) + 1784LL) != 0) {
              v35[0] = *(_QWORD*)(*(_QWORD*)(v23 + 24) + 1784LL);
              if ((UnitUtil_12122d0_alt1(v35) & 1) != 0 &&
                  (*(_BYTE*)(v23 + 49) & 1) != 0) {
                v27 = *(_QWORD*)(a1 + 32);
                v35[0] = v23;
                if (v27 == 0) {
                LABEL_72:
                  GameRoutine_60a310_alt1();
                }
                (*(void (**)(__int64, __int64*))(*(_QWORD*)v27 + 48LL))(v27,
                                                                        v35);
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
  if (v7 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v7);
  }
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

__int64 game_menu_RelianceUnitSelectMenu_ZLCall(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  struct {
    _BYTE v6[32];
    _BYTE* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  const char* v12;

  v1 = 0;
  if (*(_DWORD*)(a1 + 1184) == 0 && (*(_BYTE*)(a1 + 1188) & 1) != 0) {
    v6_.v7 = nullptr;
    v12 = "MID_RelianceMenu_AllRead_Confirm";
    v8_.v9 = v8_.v8;
    v10_.v10[0] = GameData_20e8fb8;
    v10_.v10[1] = a1;
    v10_.v11 = v10_.v10;
    v8_.v8[0] = GameData_20e90c8;
    MapSortieMenu_871860(a1, (__int64)&v12, (__int64)v10_.v10, (__int64)v8_.v8,
                         (__int64)v6_.v6);
    if (v6_.v7 == v6_.v6) {
      v2 = 32;
    }
    else {
      if (v6_.v7 == nullptr) {
        goto LABEL_8;
      }
      v2 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v6_.v7 + v2))((__int64)v6_.v7);
  LABEL_8:
    if (v8_.v9 == v8_.v8) {
      v3 = 32;
    }
    else {
      if (v8_.v9 == nullptr) {
        goto LABEL_13;
      }
      v3 = 40;
    }
    (*(void (**)(__int64))(*v8_.v9 + v3))((__int64)v8_.v9);
  LABEL_13:
    if (v10_.v11 == v10_.v10) {
      v4 = 32;
    }
    else {
      if (v10_.v11 == nullptr) {
        return 12;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v10_.v11 + v4))((__int64)v10_.v11);
    return 12;
  }
  return v1;
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

void RelianceUnitSelectMenu_184fca0(__int64 a1, __int64* a2)
{
  int v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  if (*(_DWORD*)(a1 + 1184) == 0 && (*(_BYTE*)(a1 + 1188) & 1) != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
    v4 = a2[1];
    v5 = a2[2];
    if (v4 >= v5) {
      v7 = *a2;
      v8 = v4 - *a2;
      v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
      if (v9 > 0x666666666666666LL) {
        GameRoutine_874520_alt1();
      }
      v10 = fw_memory_g_heap_manager_ptr;
      v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
      if (2 * v11 > v9) {
        v9 = 2 * v11;
      }
      if (v11 >= 0x333333333333333LL) {
        v12 = 0x666666666666666LL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 > 0x666666666666666LL) {
          GameRoutine_60a210_alt1();
        }
        v13 = v3;
        v14 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
        v3 = v13;
      }
      else {
        v14 = 0;
      }
      v15 = v14 + v8;
      *(_QWORD*)v15 = &GameData_1a9f09e;
      *(_QWORD*)(v15 + 8) = "MID_KeyHelp_AllRead";
      *(_BYTE*)(v15 + 28) = 0;
      *(_QWORD*)(v15 + 32) = 0;
      *(_BYTE*)(v15 + 16) = 1;
      v16 = v14 + 40 * v12;
      v6 = v14 + v8 + 40;
      *(_DWORD*)(v15 + 20) = 6;
      *(_DWORD*)(v15 + 24) = v3;
      memcpy_alt1(v14, v7, v8);
      *a2 = v14;
      a2[1] = v6;
      a2[2] = v16;
      if (v7 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v17, v7);
      }
    }
    else {
      *(_BYTE*)(v4 + 28) = 0;
      *(_QWORD*)(v4 + 32) = 0;
      *(_QWORD*)v4 = &GameData_1a9f09e;
      *(_QWORD*)(v4 + 8) = "MID_KeyHelp_AllRead";
      v6 = v4 + 40;
      *(_BYTE*)(v4 + 16) = 1;
      *(_DWORD*)(v4 + 20) = 6;
      *(_DWORD*)(v4 + 24) = v3;
    }
    a2[1] = v6;
  }
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
