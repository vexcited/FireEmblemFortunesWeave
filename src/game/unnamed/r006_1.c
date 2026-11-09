#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a8dc68;

extern _UNKNOWN GameData_1aa4628;

extern _UNKNOWN GameData_1ae9559;

extern __int64 (*GameData_2013a98[3])();

extern __int64 GameData_212bf68;

extern __int64 (*GameData_212e3c0)();

extern __int64 GameData_21c99c8;

extern __int64 GameData_21c9f60;

extern int GameData_220f854;

extern _UNKNOWN GameData_220f858;

extern __int64 GameData_22336e0;

__int64 GameRoutine_10c910(_QWORD, _QWORD);

__int64 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_1120d0(_QWORD);

__int64 GameRoutine_112290(_QWORD, long double);

__int64 GameRoutine_11970a0(_QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6eac40(_QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameRoutine_7d1480(_QWORD, long double);

__int64 GameRoutine_7e7620(_QWORD, _QWORD);

__int64 GameRoutine_7e7b20(_QWORD, _QWORD);

__int64 GameRoutine_7e8000(_QWORD);

__int64 GameRoutine_7e95e0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_7e9880(_QWORD);

__int64 GameRoutine_7ec8a0(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_c8c1e0(_QWORD);

__int64 GameRoutine_d2b5f0(_QWORD);

__int64 GameHr_112e3e0(__int64 a1, _BYTE* a2, char*** a3, _BYTE* a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  char** v25;
  char** v26;
  char** v27;
  unsigned __int64 v28;
  char** v29;
  bool v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  void* v36;
  __int64 v37;
  long double v38;
  __int64 v39;
  void* v40;
  _BYTE v41[336];
  __int64 v42;

  if (a4 == nullptr || *a4 == 0) {
    if (a2 != nullptr && *a2 != 0) {
      v10 = GameRoutine_7a86e0(a2);
      if (v10 != 0) {
        v11 = *(_QWORD*)(GameData_21c99c8 + 96);
        if (v11 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
          v13 = v11 - 1;
          if ((v11 & (v11 - 1)) != 0) {
            v14 = v10;
            if (v10 >= v11) {
              v14 = v10 % v11;
            }
          }
          else {
            v14 = v13 & v10;
          }
          v19 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v14);
          if (v19 != nullptr) {
            v20 = (_QWORD*)*v19;
            if (v20 != nullptr) {
              if ((v11 & v13) == 0) {
                while (1) {
                  v22 = v20[1];
                  if (v22 == v10) {
                    if (v20[2] == v10) {
                      goto LABEL_57;
                    }
                  }
                  else if ((v22 & v13) != v14) {
                    return 0;
                  }
                  v20 = (_QWORD*)*v20;
                  if (v20 == nullptr) {
                    return 0;
                  }
                }
              }
              do {
                v21 = v20[1];
                if (v21 == v10) {
                  if (v20[2] == v10) {
                  LABEL_57:
                    v24 = v20[3];
                    if (v24 == 0) {
                      return 0;
                    }
                    GameRoutine_7e9880(v41);
                    if (a3 != nullptr && a3[1] != *a3) {
                      GameRoutine_7ec8a0(v41, 64);
                      v25 = *a3;
                      v26 = a3[1];
                      if (v25 != v26) {
                        v27 = v25 + 2;
                        do {
                          v29 = v27 - 2;
                          v28 = *((unsigned __int8*)v27 - 16);
                          v30 = (v28 & 1) == 0;
                          if ((v28 & 1) != 0) {
                            v31 = (unsigned __int64)*(v27 - 1);
                          }
                          else {
                            v31 = v28 >> 1;
                          }
                          if (v31 != 0) {
                            if (v30) {
                              v32 = (char*)v27 - 15;
                            }
                            else {
                              v32 = *v27;
                            }
                            v40 = v32;
                            v39 = GameRoutine_7a86e0(v32);
                            GameRoutine_7e7b20(v41, &v39);
                          }
                          v27 += 3;
                        } while (v29 + 3 != v26);
                      }
                    }
                    v39 = v24;
                    v33 = GameRoutine_6eac40(&v39);
                    if (v33 != 0) {
                      v34 = GameRoutine_7e7620(v41, v33);
                    }
                    else {
                      v34 = GameRoutine_7e95e0(v41, v24, 0);
                    }
                    if (GameData_22336e0 != 0) {
                      v40 = &GameData_1aa4628;
                      v39 = GameRoutine_7a86e0(&GameData_1aa4628);
                      v34 = GameRoutine_7e7b20(v41, &v39);
                    }
                    v35 = GameRoutine_11970a0(v34);
                    if (v35 == 2) {
                      v36 = &GameData_1a8dc68;
                    LABEL_82:
                      v40 = v36;
                      v39 = GameRoutine_7a86e0(v36);
                      GameRoutine_7e7b20(v41, &v39);
                    }
                    else if (v35 == 1) {
                      v36 = &GameData_1ae9559;
                      goto LABEL_82;
                    }
                    GameRoutine_7e8000(v41);
                    v37 = v42;
                    GameRoutine_7d1480(v41, v38);
                    return v37;
                  }
                }
                else {
                  if (v21 >= v11) {
                    v21 %= v11;
                  }
                  if (v21 != v14) {
                    return 0;
                  }
                }
                v20 = (_QWORD*)*v20;
              } while (v20 != nullptr);
            }
          }
        }
      }
    }
    return 0;
  }
  v4 = GameRoutine_7a86e0(a4);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(GameData_21c9f60 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21c9f60 + 112) == 0) {
    return 0;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
  }
  v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f60 + 88) + 8 * v8);
  if (v15 == nullptr) {
    return 0;
  }
  v16 = (_QWORD*)*v15;
  if (v16 == nullptr) {
    return 0;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == v4) {
        if (v16[2] == v4) {
          goto LABEL_55;
        }
      }
      else if ((v18 & v7) != v8) {
        return 0;
      }
      v16 = (_QWORD*)*v16;
      if (v16 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == v4) {
      break;
    }
    if (v17 >= v5) {
      v17 %= v5;
    }
    if (v17 != v8) {
      return 0;
    }
  LABEL_27:
    v16 = (_QWORD*)*v16;
    if (v16 == nullptr) {
      return 0;
    }
  }
  if (v16[2] != v4) {
    goto LABEL_27;
  }
LABEL_55:
  result = v16[3];
  if (result == 0) {
    return 0;
  }
  return result;
}

_QWORD* GameHr_116c400(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  int v10;
  __int64 (*v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)GameRoutine_60a270(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  v3[4] = 0;
  v3[5] = 0;
  v3[3] = 0;
  v6 = a2[3];
  v7 = a2[4];
  v8 = v7 - v6;
  if (v7 != v6) {
    if (v8 < 0) {
      GameRoutine_c8c1e0(result);
    }
    result =
        (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v7 - v6, 16, 0);
    v9 = result;
    v3[3] = result;
    v3[4] = result;
    v3[5] = (char*)result + v8;
    do {
      *(_BYTE*)v9 = 0;
      *((_DWORD*)v9 + 6) = -1;
      v10 = *(_DWORD*)(v6 + 24);
      if (v10 != -1) {
        v11 = GameData_2013a98[v10];
        v15 = v9;
        result = (_QWORD*)((__int64 (*)(_QWORD**, __int64))v11)(&v15, v6);
        *((_DWORD*)v9 + 6) = v10;
      }
      v6 += 32;
      v9 += 4;
    } while (v6 != v7);
    v3[4] = v9;
  }
  v12 = a2[6];
  *((_DWORD*)v3 + 14) = *((_DWORD*)a2 + 14);
  v3[6] = v12;
  if ((a2[8] & 1) != 0) {
    return (_QWORD*)GameRoutine_60a270(v3 + 8, a2[10], a2[9]);
  }
  v13 = a2[8];
  v14 = a2[10];
  v3[9] = a2[9];
  v3[10] = v14;
  v3[8] = v13;
  return result;
}

__int64 GameHr_11736e0(__int64 a1, unsigned int a2)
{
  __int64 result;
  long double v5;
  __int64 v6;
  _BYTE v7[200];

  result = GameRoutine_1120d0(a1);
  if ((result & 1) != 0) {
    v6 = GameRoutine_112290(a1, v5);
    GameRoutine_10c910(v7, a2);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v6 - 5592) + 248LL))(v6 - 5592, v7, 0, 0.0);
    return GameRoutine_10cff0(v7);
  }
  return result;
}

bool GameHr_118a5a0(_BOOL8 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;

  if (result != 0) {
    v1 = *(_QWORD*)(result + 232);
    if (v1 != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f858,
                                memory_order_acquire) &
           1) == 0) {
        v13 = v1;
        v12 = GameRoutine_1a09fd0(&GameData_220f858);
        v1 = v13;
        if (v12 != 0) {
          GameData_220f854 = GameRoutine_540(0, "CharacterAnimator", 17);
          GameRoutine_1a09fe0(&GameData_220f858);
          v1 = v13;
        }
      }
      v3 = *(_QWORD*)(v1 + 504);
      v2 = *(_QWORD*)(v1 + 512);
      v4 = v2;
      v5 = v2;
      do {
        if (v5 == v3) {
          return 0;
        }
        v6 = *(_DWORD*)(v5 - 16);
        v5 -= 16;
        v4 -= 16;
      } while (v6 != GameData_220f854);
      if (v2 == v4) {
        return 0;
      }
      v7 = *(_QWORD*)(v4 + 8);
      if (v7 == 0) {
        return 0;
      }
      v8 = *(_QWORD*)(v7 + 96);
      if (v8 == 0) {
        return 0;
      }
      v9 = GameRoutine_d2b5f0(*(_QWORD*)(v8 + 32) + 72LL);
      if ((v9 & 0x100000000LL) == 0) {
        return 0;
      }
      v10 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 24) + 72LL) + 104LL * (int)v9);
      if (v10 == 0) {
        return 0;
      }
      v11 = *(_QWORD*)(v10 + 16);
      return v11 == 0 || *(_QWORD*)(v11 + 16) != (_QWORD)GameData_212e3c0;
    }
    else {
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
