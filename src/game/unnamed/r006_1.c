#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a8dc68;
extern _UNKNOWN GameData_1aa4628;
extern _UNKNOWN GameData_1ae9559;
extern __int64 (*GameData_2013a98[3])();
extern __int64 GameData_212bf68;
extern __int64 (*GameData_212e3c0)();
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9f40;
extern __int64 GameData_21c9f60;
extern __int64 GameData_21f3d10;
extern int GameData_220f854;
extern _UNKNOWN GameData_220f858;
extern __int64 GameData_22336e0;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_1079e10(__int64);
void GameRoutine_10a6ac0(__int64);
__int64 GameRoutine_10c910(_QWORD, _QWORD);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112290(_QWORD, long double);
__int64 GameRoutine_11970a0(_QWORD);
__int64 GameRoutine_18f4a00(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
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

__int64 GameHr_1037620(unsigned __int8* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  _QWORD* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int8* v43;
  _BYTE* v44;
  __int64 v45;
  __int64 v47;
  unsigned __int64 v48;
  char* v49;
  _QWORD v50[2];
  char* v51;

  v2 = a1[24];
  if ((v2 & 1) != 0) {
    v3 = *((_QWORD*)a1 + 4);
  }
  else {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    v4 = *(unsigned __int8*)(a2 + 8);
    v5 = *(_QWORD*)(a2 + 16);
    if ((v4 & 1) == 0) {
      v5 = v4 >> 1;
    }
    if (v5 != v3 ||
        ((v4 & 1) != 0 ? (v8 = *(_QWORD*)(a2 + 24)) : (v8 = a2 + 9),
         (v2 & 1) != 0 ? (v9 = *((unsigned __int8**)a1 + 5)) : (v9 = a1 + 25),
         (unsigned int)GameRoutine_1a09cf0(v8, v9) != 0)) {
      v10 = *(unsigned __int8*)(GameData_21f3d10 + 40);
      v11 = (v10 & 1) == 0;
      v12 = v10 >> 1;
      if (v11) {
        v13 = v12;
      }
      else {
        v13 = *(_QWORD*)(GameData_21f3d10 + 48);
      }
      if (v11) {
        v14 = GameData_21f3d10 + 41;
      }
      else {
        v14 = *(_QWORD*)(GameData_21f3d10 + 56);
      }
      v15 = v13 + 1;
      if (v13 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0();
      }
      if (v15 >= 0x17) {
        if ((v15 | 7) == 0x17) {
          v18 = 26;
        }
        else {
          v18 = (v15 | 7) + 1;
        }
        v16 = (char*)GameRoutine_651b90(GameData_2265ee0, v18, 16, 0);
        v48 = v13 + 1;
        v49 = v16;
        v47 = v18 | 1;
      }
      else {
        v48 = 0;
        v49 = nullptr;
        v47 = (unsigned __int8)(2 * v15);
        v16 = (char*)&v47 + 1;
        if (v13 == 0) {
          goto LABEL_31;
        }
      }
      GameRoutine_1a0b940(v16, v14, v13);
    LABEL_31:
      *(_WORD*)&v16[v13] = 95;
      v19 = *a1;
      v20 = (v19 & 1) == 0;
      v21 = v19 >> 1;
      if (v20) {
        v22 = a1 + 1;
      }
      else {
        v22 = *((unsigned __int8**)a1 + 2);
      }
      if (v20) {
        v23 = v21;
      }
      else {
        v23 = *((_QWORD*)a1 + 1);
      }
      v24 = (_QWORD*)GameRoutine_1a09ce0(&v47, v22, v23);
      v26 = v24[1];
      v25 = (char*)v24[2];
      v50[0] = *v24;
      v50[1] = v26;
      v51 = v25;
      v24[1] = 0;
      v24[2] = 0;
      *v24 = 0;
      if ((v47 & 1) != 0 && v49 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v27 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v27);
      }
      if ((v50[0] & 1) != 0) {
        v28 = v51;
      }
      else {
        v28 = (char*)v50 + 1;
      }
      v29 = GameRoutine_7a86e0(v28);
      if (v29 == 0) {
        goto LABEL_87;
      }
      v30 = *(_QWORD*)(GameData_21c9f40 + 96);
      if (v30 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
        goto LABEL_87;
      }
      v32 = v30 - 1;
      if ((v30 & (v30 - 1)) != 0) {
        v33 = v29;
        if (v29 >= v30) {
          v33 = v29 % v30;
        }
      }
      else {
        v33 = v32 & v29;
      }
      v34 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v33);
      if (v34 == nullptr) {
        goto LABEL_87;
      }
      v35 = (_QWORD*)*v34;
      if (v35 == nullptr) {
        goto LABEL_87;
      }
      if ((v30 & v32) == 0) {
        while (1) {
          v37 = v35[1];
          if (v37 == v29) {
            if (v35[2] == v29) {
              goto LABEL_70;
            }
          }
          else if ((v37 & v32) != v33) {
            goto LABEL_87;
          }
          v35 = (_QWORD*)*v35;
          LODWORD(v17) = 0;
          if (v35 == nullptr) {
            goto LABEL_88;
          }
        }
      }
      while (1) {
        v36 = v35[1];
        if (v36 == v29) {
          break;
        }
        if (v36 >= v30) {
          v36 %= v30;
        }
        if (v36 != v33) {
          goto LABEL_87;
        }
      LABEL_59:
        v35 = (_QWORD*)*v35;
        if (v35 == nullptr) {
          goto LABEL_87;
        }
      }
      if (v35[2] != v29) {
        goto LABEL_59;
      }
    LABEL_70:
      v17 = v35[3];
      if (v17 != 0) {
        v38 = *(unsigned __int8*)(a2 + 8);
        if ((v38 & 1) != 0) {
          v39 = *(_QWORD*)(a2 + 16);
        }
        else {
          v39 = v38 >> 1;
        }
        v40 = a1[24];
        v41 = *((_QWORD*)a1 + 4);
        if ((v40 & 1) == 0) {
          v41 = v40 >> 1;
        }
        if (v39 != v41 ||
            ((v38 & 1) != 0 ? (v42 = *(_QWORD*)(a2 + 24)) : (v42 = a2 + 9),
             (v40 & 1) != 0 ? (v43 = *((unsigned __int8**)a1 + 5))
                            : (v43 = a1 + 25),
             (unsigned int)GameRoutine_1a09cf0(v42, v43) != 0)) {
          v44 = (_BYTE*)GameRoutine_18f4a00(v17);
          if (v44 != nullptr) {
            LODWORD(v17) = *v44 == 0;
            if ((v50[0] & 1) != 0) {
              goto LABEL_89;
            }
          }
          else {
            LODWORD(v17) = 1;
            if ((v50[0] & 1) != 0) {
              goto LABEL_89;
            }
          }
          return (unsigned int)v17;
        }
      LABEL_87:
        LODWORD(v17) = 0;
      }
    LABEL_88:
      if ((v50[0] & 1) != 0) {
      LABEL_89:
        if (v51 != nullptr) {
          v45 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v45 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v45);
        }
      }
      return (unsigned int)v17;
    }
  }
  LODWORD(v17) = 1;
  return (unsigned int)v17;
}

void GameHr_10d8b10(__int64 a1)
{
  int v2;
  int v4;

  if ((GameRoutine_1079e10(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL)) & 1) != 0) {
    v2 = *(_DWORD*)(a1 + 16);
    if (v2 != 1 && v2 != 3) {
      if (v2 == 2) {
        v4 = 3;
      }
      else {
        v4 = 1;
      }
      *(_DWORD*)(a1 + 16) = v4;
    }
    GameRoutine_10a6ac0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL) + 128LL));
  }
}

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

bool GameHr_118a440(_BOOL8 result)
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
      return v11 == 0 || *(__int64 (**)())(v11 + 16) != GameData_212e3c0 ||
             *(float*)v11 < *(float*)(v11 + 8);
    }
    else {
      return 0;
    }
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
