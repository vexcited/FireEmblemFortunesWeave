#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1aabf6c;

extern _UNKNOWN GameData_1abf89f;

extern _UNKNOWN GameData_1ad653b;

extern _UNKNOWN* GameData_1f9caf8;

extern __int64 GameData_212bf68;

extern __int64 GameData_21caab0;

extern _UNKNOWN GameData_21f8620;

_QWORD* GameRoutine_19bb9c0(__int64);

__int64 GameRoutine_19e22c0(_QWORD, _QWORD);

__int64 GameRoutine_19e2a20(void);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_682bc0(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_6e5a20(_QWORD);

__int64 GameRoutine_82e3a0(_QWORD);

__int64 GameRoutine_890160(_QWORD);

__int64 GameRoutine_8e7ca0(_QWORD, _QWORD);

__int64 GameRoutine_975940(_QWORD);

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);

__int64 GameHr_1562680(__int64 result, const char*, float);

__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);

__int64 LayoutAccessor_1562cf0(__int64 result, const char*);

__int64 LayoutAccessor_1562f00(__int64 result, __int64, float);

__int64 LayoutAccessor_1563030(__int64 result, __int64, char);

__int64 UnitUtil_15e0120(__int64);

__int64 UnitUtil_15e0200(__int64);

__int64 UnitUtil_15e04f0(__int64 result);

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 game_GetHero(unsigned __int8);

__int64 game_menu_PageTab_SetupLabel(__int64, __int64*, __int64, int, int, int);

__int64 std___1___shared_weak_count___release_weak(__int64);

__int64 std___1___shared_weak_count_lock(__int64);

__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);

__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);

__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);

double ui_LayoutAccessor_GetPaneTranslate(__int64*, __int64);

extern __int64 fw_memory_g_heap_manager_ptr;

float LayoutAccessor_15638b0(__int64*, const char*, char);

float ui_LayoutAccessor_SetPaneTranslate(__int64*, __int64, __int64);

void GameHr_198e400(__int64, __int64);

void nn_mem_StandardAllocator_Free(__int64, __int64);

void GameHr_198f8e0(_QWORD* a1);

__int64 GameHr_19c1c60(__int64 a1);

__int64 GameHr_19c2380(__int64 a1);

__int64 GameHr_19c2580(__int64 a1);

__int64 GameHr_19c28a0(__int64 a1);

void GameHr_19e20c0(__int64* a1);

const char* GameHr_19e3b70(const char* a1);

void GameHr_198f8e0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  if (a1[3] != 0) {
    v1 = (_QWORD*)a1[2];
    if (v1 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v5 = (__int64)v1;
        v1 = (_QWORD*)*v1;
        v7 = (__int64*)(v5 + 40);
        v6 = *(_QWORD*)(v5 + 40);
        if (v6 != 0) {
          GameHr_198e400(v5 + 40, v6);
          if (*v7 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, *v7);
          }
        }
        if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
          v9 = *(_QWORD*)(v5 + 32);
          if (v9 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v10 = 128;
            }
            else {
              v10 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v9);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v5);
      } while (v1 != nullptr);
    }
    v11 = a1[1];
    a1[2] = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(*a1 + 8 * v13) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 8) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 16) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 24) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 32) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 40) = 0;
          *(_QWORD*)(*a1 + 8 * v13 + 48) = 0;
          v15 = *a1 + 8 * v13;
          v13 += 8;
          *(_QWORD*)(v15 + 56) = 0;
        } while (v14 != v13);
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v16 = 8 * v13;
        do {
          --v12;
          *(_QWORD*)(*a1 + v16) = 0;
          v16 += 8;
        } while (v12 != 0);
      }
    }
    a1[3] = 0;
  }
}

_QWORD* GameHr_19bbae0(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  _BYTE* v8;
  _QWORD* v9;
  _QWORD* v10;
  _BYTE* v11;
  __int64 v12;

  if (*a1 != 0) {
    v2 = a1[2];
    if (v2 == 0) {
      v3 = GameData_21caab0;
      GameRoutine_682bc0(&v12, *(_QWORD*)(*a1 + 32));
      if ((GameRoutine_8e7ca0(*(_QWORD*)(v3 + 176), v12) & 1) != 0) {
        goto LABEL_10;
      }
    LABEL_6:
      v4 = a1[1];
      if (v4 != 0) {
        v5 = *(_QWORD*)(v4 + 24);
        if (v5 != 0) {
          result = *(_QWORD**)(v5 + 80);
          if (result != nullptr && *(_BYTE*)result != 0) {
            return result;
          }
        }
      }
      goto LABEL_10;
    }
    if ((*(_BYTE*)(v2 + 416) & 8) != 0) {
      goto LABEL_6;
    }
  }
LABEL_10:
  v7 = a1[2];
  if (v7 != 0) {
    v8 = *(
        _BYTE**)(GameRoutine_975940(*(_QWORD*)(*(_QWORD*)(v7 + 392) + 288LL)) +
                 80);
    if (v8 != nullptr && *v8 != 0) {
      v9 = *(_QWORD**)(a1[2] + 392);
      return *(_QWORD**)(GameRoutine_975940(v9[36]) + 80);
    }
  }
  result = GameRoutine_19bb9c0(*a1);
  if (result == nullptr) {
    return result;
  }
  v10 = GameRoutine_19bb9c0(*a1);
  v11 = *(_BYTE**)(GameRoutine_975940(v10[36]) + 80);
  if (v11 != nullptr && *v11 != 0) {
    v9 = GameRoutine_19bb9c0(*a1);
    return *(_QWORD**)(GameRoutine_975940(v9[36]) + 80);
  }
  return nullptr;
}

void GameHr_19e20c0(__int64* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = (_QWORD*)a1[2];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v5 = (_QWORD*)*v1;
      v6 = v1[6];
      if (v6 != 0) {
        v7 = *(_QWORD*)v3;
        v1[7] = v6;
        if (*(_QWORD*)(v7 + 200) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(v7 + v8, v6);
      }
      v9 = v1[3];
      if (v9 != 0) {
        v10 = *(_QWORD*)v3;
        v1[4] = v9;
        if (*(_QWORD*)(v10 + 200) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(v10 + v11, v9);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, (__int64)v1);
      v1 = v5;
    } while (v5 != nullptr);
  }
  v12 = *a1;
  *a1 = 0;
  if (v12 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, v12);
  }
}

__int64 GameHr_19e21d0(char a1)
{
  unsigned int v2;

  if ((GameRoutine_82e3a0(1) & 1) != 0 || (GameRoutine_82e3a0(3) & 1) != 0) {
    v2 = 1;
    if ((GameRoutine_19e22c0(9, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(1, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(2, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(3, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(4, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(5, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(6, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(7, a1 & 1) & 1) == 0) {
      return GameRoutine_19e22c0(8, a1 & 1);
    }
  }
  else {
    return 0;
  }
  return v2;
}

bool GameHr_19e22c0(__int64 a1, char a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  char v14;
  void* v15;
  unsigned int v16;
  unsigned int v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v27;
  __int64 v28;
  char* v30;
  unsigned __int64 v31;
  char* v32;
  __int64* v33;

  v3 = GameRoutine_19e2a20();
  v4 = 24;
  if ((a2 & 1) == 0) {
    v4 = 0;
  }
  v5 = v3 + v4;
  v33 = (__int64*)(v3 + v4);
  v6 = *(_QWORD*)(v3 + v4);
  if (*(_QWORD*)(v5 + 8) == v6) {
    v27 = true;
  }
  else {
    v7 = 0;
    v30 = nullptr;
    v31 = 0;
    v32 = nullptr;
    do {
      v8 = (char*)&GameData_21f8620 + 24 * *(unsigned __int8*)(v6 + 24 * v7);
      v9 = *(__int64**)v8;
      v10 = *((__int64**)v8 + 1);
      while (v9 != v10) {
        v11 = *v9;
        if (*v9 != 0) {
          v12 = *(_QWORD**)(v11 + 96);
          v13 = *(_QWORD**)(v11 + 104);
          if (v12 != v13) {
            v14 = 0;
            do {
              LOBYTE(v16) = GameData_21caab0;
              if (GameData_21caab0 != 0) {
                v3 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                        *v12 + 16LL);
                if (v3 != 0) {
                  v17 = *(_DWORD*)(v3 + 32);
                  v16 =
                      v17 / 0x21B7900 -
                      11 * ((390451573 * (unsigned __int64)(v17 / 0x21B7900)) >>
                            32);
                  if (v16 != 0) {
                    v18 = (v17 / 0x86DE40uLL) & 3;
                    if ((int)v18 > 1) {
                      if ((_DWORD)v18 == 3) {
                        v15 = &GameData_1aabf6c;
                      }
                      else {
                        v15 = &GameData_1ad653b;
                      }
                    }
                    else {
                      v15 = &GameData_1abf89f;
                      if ((_DWORD)v18 != 0) {
                        v15 = *(&GameData_1f9caf8 + v16);
                      }
                    }
                    v3 = GameRoutine_890160(v15);
                    LOBYTE(v16) = 1;
                  }
                }
                else {
                  LOBYTE(v16) = 0;
                }
              }
              ++v12;
              v14 |= v16;
            } while (v12 != v13);
            if ((v14 & 1) != 0) {
              if ((unsigned __int64)v32 < v31) {
                *(_DWORD*)v32 = v7;
                v32 += 4;
              }
              else {
                v19 = (char*)(v32 - v30);
                v20 = (v32 - v30) >> 2;
                v21 = v20 + 1;
                if ((unsigned __int64)(v20 + 1) >> 62 != 0) {
                  GameRoutine_6e5a20(v3);
                }
                if ((__int64)(v31 - (_QWORD)v30) >> 1 > v21) {
                  v21 = (__int64)(v31 - (_QWORD)v30) >> 1;
                }
                if (v31 - (unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFFCLL) {
                  v22 = 0x3FFFFFFFFFFFFFFFLL;
                }
                else {
                  v22 = v21;
                }
                if (v22 != 0) {
                  if (v22 >> 62 != 0) {
                    GameRoutine_60a210(v3);
                  }
                  v23 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 4 * v22,
                                           16, 0);
                }
                else {
                  v23 = 0;
                }
                v24 = v23 + 4 * v22;
                v25 = (__int64)&v19[v23 + -4 * v20];
                *(_DWORD*)&v19[v23] = v7;
                v31 = v24;
                v32 = &v19[v23 + 4];
                v3 = GameRoutine_1a0b950(v25, v30, v19);
                if (v30 != nullptr) {
                  v26 = 128;
                  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                    v26 = 56;
                  }
                  v3 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v26,
                                           (_QWORD)(v30));
                }
                v30 = (char*)v25;
              }
              break;
            }
          }
        }
        ++v9;
      }
      ++v7;
      v6 = *v33;
    } while (0xAAAAAAAAAAAAAAABLL * ((v33[1] - *v33) >> 3) > v7);
    v27 = v30 == v32;
    if (v30 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v28 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v28, (_QWORD)(v30));
    }
  }
  return !v27;
}

#pragma GCC visibility pop
