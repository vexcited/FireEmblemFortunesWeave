#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1ad89f9;
extern _UNKNOWN GameData_1aef9e3;
extern __int64 (*GameData_20ea2c8[])();
extern __int64 (*GameData_20ea528[])();
extern __int64 (*GameData_20ea788[])();
extern __int64 (*GameData_20ea9e8[])();
extern __int64 GameData_20ecfd8;
extern __int64 GameData_212bf68;
extern __int64* GameData_212c970[153];
extern __int64* GameData_212e030[4];
extern __int64 (**GameData_2166ce8)();
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 GameData_21caab0;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_12122d0(_QWORD);
__int64 GameRoutine_16dd9a0(_QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16e8d70(_QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 GameRoutine_184bc70(__int64);
__int64 GameRoutine_184d1f0(__int64, __int64);
__int64 GameRoutine_184d360(__int64 result, __int64*);
bool GameRoutine_184e500(__int64, __int64);
bool GameRoutine_18515e0(__int64*);
__int64 GameRoutine_1852b80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1852da0(_QWORD);
__int64 GameRoutine_1854cf0(_QWORD*);
__int64 GameRoutine_18560c0(int);
__int64 GameRoutine_19ef790(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_716d80(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_828700(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8c77c0(_QWORD);
__int64 GameRoutine_8c9820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8ca200(_QWORD);
__int64 GameRoutine_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_906440(_QWORD, _QWORD);
__int64 GameRoutine_9d5920(_QWORD, _QWORD);
__int64 GameRoutine_9e60d0(_QWORD);

__int64 GameHr_1851d60(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];

  if (*(_DWORD*)(a1 + 96) != 0) {
    return 1;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 88) + 392LL);
  if (v2 != 0) {
    v3 = (__int64*)GameData_21c9ac0;
    v4 = GameData_21c9ac8;
    if (GameData_21c9ac0 != GameData_21c9ac8) {
      while (1) {
        v6 = *v3;
        v12[0] = 0;
        v12[1] = v6;
        v7 = (unsigned __int8)GameRoutine_906440(GameData_21caab0 + 136, v12);
        if (v7 != 2 &&
            (v7 == 3 || GameData_21caab0 == 0 ||
             (v8 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                      *(_QWORD*)(v6 + 24) + 1272LL)) == 0 ||
             *(_DWORD*)(v8 + 32) == 0) &&
            GameRoutine_184e500(v2, v6)) {
          break;
        }
        if (++v3 == (__int64*)v4) {
          return 0;
        }
      }
      v9 = *(_QWORD*)(a1 + 88);
      if (v9 != 0) {
        v10 = *(_QWORD*)(v9 + 392);
        v12[0] = v10;
        if (v10 != 0 && GameData_21caab0 != 0) {
          if (*(_DWORD*)(GameData_21caab0 + 60) == 1) {
            if ((GameRoutine_12122d0(v12) & 1) == 0) {
              return 0;
            }
          }
          else {
            v11 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                     *(_QWORD*)(v10 + 24) + 1032LL);
            if (v11 == 0 || *(_DWORD*)(v11 + 32) == 0) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

__int64 GameHr_18528c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[5];
  _QWORD v35[2];

  v1 = *(_QWORD*)(a1 + 8);
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v2 = *(_QWORD*)(v1 + 1072);
  v28 = nullptr;
  v29 = nullptr;
  if (v2 != 0) {
    v3 = (__int64*)GameData_21c9ac0;
    v4 = GameData_21c9ac8;
    while (v3 != (__int64*)v4) {
      v5 = *v3++;
      GameRoutine_1852b80(&v28, *(_QWORD*)(*(_QWORD*)(v1 + 1072) + 392LL), v5);
    }
  }
  GameRoutine_1852da0(&v28);
  v6 = v28;
  v7 = v29;
  if (v28 != v29) {
    v8 = v28;
    do {
      if (*((_BYTE*)v8 + 16) != 0) {
        v9 = *v8;
        v10 = v8[1];
        if (*v8 != 0 && v10 != 0) {
          v34[0] = GameRoutine_8c9820(*v8, v8[1], 0);
          v34[1] = GameRoutine_8c9820(v9, v10, 1);
          v34[2] = GameRoutine_8c9820(v9, v10, 2);
          v34[3] = GameRoutine_8c9820(v9, v10, 3);
          v12 = GameRoutine_8c9820(v9, v10, 4);
          v13 = *((unsigned __int8*)v8 + 16);
          v34[4] = v12;
          v14 = v34;
          v15 = v13 + 1;
          do {
            v17 = *v14++;
            v16 = v17;
            if (v17 != 0) {
              GameRoutine_716d80(*(_QWORD*)(v16 + 24) + 40LL, 1);
              v18 = *(_QWORD*)(v16 + 128);
              if (v18 != 0) {
                v35[1] = *(_QWORD*)(v16 + 128);
                v35[0] = GameRoutine_7a86e0(v18);
                if (GameData_21caab0 != 0) {
                  GameRoutine_828700(GameData_21caab0 + 40, v35, 1);
                }
              }
            }
            --v15;
          } while (v15 != 0);
        }
      }
      v8 += 3;
    } while (v8 != v7);
  }
  v19 = v31;
  if (v31 != v32) {
    GameRoutine_9d5920(v1, &v31);
  }
  v20 = *(_QWORD*)(v1 + 1072);
  *(_BYTE*)(v1 + 1080) = 0;
  if (v20 != 0) {
    v21 = *(_QWORD*)(v20 + 392);
    if (v21 != 0) {
      v23 = (__int64*)GameData_21c9ac0;
      v22 = GameData_21c9ac8;
      if (GameData_21c9ac0 != GameData_21c9ac8) {
        while (1) {
          v24 = *v23++;
          if ((unsigned int)GameRoutine_184d1f0(v21, v24) == 1) {
            break;
          }
          if (v23 == (__int64*)v22) {
            goto LABEL_27;
          }
        }
        *(_BYTE*)(v1 + 1080) = 1;
      }
    }
  }
LABEL_27:
  GameRoutine_16dd9a0(v1);
  GameRoutine_16e8d70(v1 + 1056);
  GameRoutine_184bc70(v1);
  if (v19 != 0) {
    v25 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v25 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v25, v19);
  }
  if (v6 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v26 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v26, v6);
  }
  return 2;
}

__int64 GameHr_1852da0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)result;
  v2 = *(_QWORD*)(result + 8);
  v3 = (__int64*)result;
  if (*(_QWORD*)result == v2) {
    goto LABEL_69;
  }
  do {
    v5 = *(_QWORD*)v1;
    v6 = *(_QWORD*)(v1 + 8);
    *(_BYTE*)(v1 + 16) = 0;
    result = GameRoutine_184d1f0(v5, v6);
    if ((_DWORD)result != 1) {
      goto LABEL_5;
    }
    v7 = *(_QWORD*)v1;
    v8 = *(_QWORD*)(v1 + 8);
    if (*(_QWORD*)v1 == 0 || v8 == 0) {
      goto LABEL_5;
    }
    v10 = GameRoutine_8c9820(*(_QWORD*)v1, *(_QWORD*)(v1 + 8), 0);
    v4 = GameRoutine_8c9820(v7, v8, 1);
    v11 = GameRoutine_8c9820(v7, v8, 2);
    v12 = GameRoutine_8c9820(v7, v8, 3);
    result = GameRoutine_8c9820(v7, v8, 4);
    v13 = result;
    if (v10 == 0) {
      goto LABEL_17;
    }
    if (GameData_21caab0 != 0) {
      result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                  *(_QWORD*)(v10 + 24) + 40LL);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        goto LABEL_16;
      }
    }
    if (*(_BYTE*)(v10 + 64) == 4) {
      goto LABEL_16;
    }
    result = GameRoutine_9e60d0(*(_QWORD*)(v10 + 24));
    if ((result & 1) == 0) {
      goto LABEL_5;
    }
    result = GameRoutine_9e60d0(*(_QWORD*)(v10 + 24));
    if ((result & 1) == 0 ||
        (_WORD)(result = GameRoutine_8c77c0(v10)) != 0 &&
            (_DWORD)(result = GameRoutine_8c77c0(v10)) != 256) {
    LABEL_16:
      LODWORD(v10) = 0;
    LABEL_17:
      if (v4 == 0) {
        goto LABEL_23;
      }
      goto LABEL_18;
    }
    LODWORD(v10) = 1;
    if (v4 != 0) {
    LABEL_18:
      if (GameData_21caab0 != 0) {
        result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                    *(_QWORD*)(v4 + 24) + 40LL);
        if (result != 0 && *(_DWORD*)(result + 32) != 0) {
          goto LABEL_22;
        }
      }
      if (*(_BYTE*)(v4 + 64) == 4) {
        goto LABEL_22;
      }
      result = GameRoutine_9e60d0(*(_QWORD*)(v4 + 24));
      if ((result & 1) == 0) {
        LOBYTE(v4) = 0;
        goto LABEL_65;
      }
      result = GameRoutine_9e60d0(*(_QWORD*)(v4 + 24));
      if ((result & 1) == 0 ||
          (_WORD)(result = GameRoutine_8c77c0(v4)) != 0 &&
              (_DWORD)(result = GameRoutine_8c77c0(v4)) != 256) {
      LABEL_22:
        LOBYTE(v4) = 0;
      }
      else {
        LODWORD(v10) = 1;
        LOBYTE(v4) = 1;
      }
    }
  LABEL_23:
    if (v11 != 0 &&
        (GameData_21caab0 == 0 ||
         (result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                      *(_QWORD*)(v11 + 24) + 40LL)) == 0 ||
         *(_DWORD*)(result + 32) == 0) &&
        *(_BYTE*)(v11 + 64) != 4) {
      result = GameRoutine_9e60d0(*(_QWORD*)(v11 + 24));
      if ((result & 1) == 0) {
        goto LABEL_65;
      }
      result = GameRoutine_9e60d0(*(_QWORD*)(v11 + 24));
      if ((result & 1) != 0) {
        result = GameRoutine_8c77c0(v11);
        if ((_WORD)result == 0 ||
            (_DWORD)(result = GameRoutine_8c77c0(v11)) == 256) {
          LOBYTE(v4) = 2;
          LODWORD(v10) = 1;
        }
      }
    }
    if (v12 == 0) {
      goto LABEL_33;
    }
    if (GameData_21caab0 != 0) {
      result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                  *(_QWORD*)(v12 + 24) + 40LL);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        goto LABEL_33;
      }
    }
    if (*(_BYTE*)(v12 + 64) == 4) {
      goto LABEL_33;
    }
    result = GameRoutine_9e60d0(*(_QWORD*)(v12 + 24));
    if ((result & 1) != 0) {
      result = GameRoutine_9e60d0(*(_QWORD*)(v12 + 24));
      if ((result & 1) != 0) {
        result = GameRoutine_8c77c0(v12);
        if ((_WORD)result == 0 ||
            (_DWORD)(result = GameRoutine_8c77c0(v12)) == 256) {
          LOBYTE(v4) = 3;
          LODWORD(v10) = 1;
        }
      }
    LABEL_33:
      if (v13 != 0 &&
          (GameData_21caab0 == 0 ||
           (result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                        *(_QWORD*)(v13 + 24) + 40LL)) == 0 ||
           *(_DWORD*)(result + 32) == 0) &&
          *(_BYTE*)(v13 + 64) != 4) {
        result = GameRoutine_9e60d0(*(_QWORD*)(v13 + 24));
        if ((result & 1) != 0) {
          result = GameRoutine_9e60d0(*(_QWORD*)(v13 + 24));
          if ((result & 1) != 0) {
            result = GameRoutine_8c77c0(v13);
            if ((_WORD)result == 0 ||
                (_DWORD)(result = GameRoutine_8c77c0(v13)) == 256) {
              LOBYTE(v4) = 4;
            LABEL_4:
              *(_BYTE*)(v1 + 16) = v4;
              goto LABEL_5;
            }
          }
        }
      }
    }
  LABEL_65:
    if ((_DWORD)v10 != 0) {
      goto LABEL_4;
    }
  LABEL_5:
    v1 += 24;
  } while (v1 != v2);
  v1 = *v3;
  v2 = v3[1];
LABEL_69:
  while (v1 != v2) {
    result = GameRoutine_184d360(v1, v3 + 3);
    v1 += 24;
  }
  return result;
}

__int64 GameHr_18537d0(_QWORD* a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _BOOL8 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  __int64 v27;
  unsigned int v28;
  __int64 (***v29)();
  __int64 result;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD v35[3];
  _QWORD v36[2];
  __int64 v37;

  v33 = 0;
  v34 = 0;
  v32 = 0;
  v8 = GameRoutine_821090(1);
  if (GameData_21caab0 == 0 ||
      (v9 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v8)) == 0 ||
      (*(int*)(v9 + 32) >= 1 ? (v10 = *(_BYTE*)(a3 + 164) == 0) : (v10 = false),
       !v10 || (v11 = GameRoutine_8ca200(a3 + 104)) == 0 ||
           *(_BYTE*)(v11 + 64) == 4 ||
           GameData_21caab0 != 0 &&
               (v12 = v11,
                v13 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                         *(_QWORD*)(v11 + 24) + 40LL),
                v11 = v12, v13 != 0) &&
               *(_DWORD*)(v13 + 32) != 0 ||
           (unsigned __int16)GameRoutine_8c77c0(v11) != 0)) {
    v14 = 0x7FFFFFFF;
  }
  else if (GameRoutine_18515e0((__int64*)(a3 + 104))) {
    v14 = 2147483645;
  }
  else {
    v14 = 2147483646;
  }
  GameRoutine_19ef790(&v32, v14, 32);
  if (a2 == 2) {
    LOBYTE(v17) = 0;
    if (*(_QWORD*)(a3 + 104) != 0 && *(_QWORD*)(a3 + 112) != 0) {
      v17 = *(_QWORD*)(a3 + 128);
      if (v17 != 0) {
        LOBYTE(v17) = *(_BYTE*)(v17 + 64) != 4;
      }
      v18 = *(_QWORD*)(a3 + 136);
      if (v18 != 0 && *(_BYTE*)(v18 + 64) != 4) {
        LOBYTE(v17) = 2;
      }
      v19 = *(_QWORD*)(a3 + 144);
      if (v19 != 0 && *(_BYTE*)(v19 + 64) != 4) {
        LOBYTE(v17) = 3;
      }
      v20 = *(_QWORD*)(a3 + 152);
      if (v20 != 0 && *(_BYTE*)(v20 + 64) != 4) {
        LOBYTE(v17) = 4;
      }
    }
    GameRoutine_19ef790(&v32, (unsigned __int8)~(_BYTE)v17, 8);
  LABEL_34:
    v21 = *(_QWORD*)(a3 + 104);
    v22 = 0x7FFFFFFF;
    if (v21 != 0) {
      v23 = *(_QWORD*)(a3 + 112);
      if (v23 != 0) {
        v36[0] = 0;
        v36[1] = v21;
        v24 = *(_QWORD*)(v21 + 24);
        v35[0] = 0;
        v35[1] = v23;
        v25 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v23 + 24) + 1784LL) + 272LL);
        v37 = *(_QWORD*)(*(_QWORD*)(v24 + 1784) + 272LL);
        v35[2] = v25;
        v26 = v37 == 0 || v25 == 0;
        if (v26 ||
            (v27 = *(_QWORD*)(GameData_21caab0 + 128),
             ((v28 = GameRoutine_8e17a0(v27, v36, v35)) & 0x80000000) != 0)) {
          v29 = &GameData_2166ce8;
        }
        else {
          v29 = (__int64 (***)())(*(_QWORD*)(v27 + 8) + 56LL * v28);
        }
        v22 = *((unsigned __int16*)v29 + 6) ^ 0x7FFFFFFFLL;
      }
    }
    GameRoutine_19ef790(&v32, v22, 32);
    if ((*(_BYTE*)(a4 + 416) & 8) == 0) {
      goto LABEL_18;
    }
  LABEL_45:
    v16 = false;
    goto LABEL_47;
  }
  if (a2 == 1) {
    goto LABEL_34;
  }
  if ((*(_BYTE*)(a4 + 416) & 8) != 0) {
    goto LABEL_45;
  }
LABEL_18:
  v15 = *(_QWORD*)(a4 + 440);
  v16 = v15 == 0 || *(unsigned __int8*)(v15 + 16) != 6;
LABEL_47:
  result = GameRoutine_19ef790(&v32, v16, 32);
  v31 = v33;
  *a1 = v32;
  a1[1] = v31;
  a1[2] = v34;
  return result;
}

__int64 GameHr_1854e30(__int64 a1)
{
  __int64 v2;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void))(*(_QWORD*)a1 + v2))();
  return GameRoutine_1854cf0((_QWORD*)a1);
}

__int64 GameHr_1856300(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  bool v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;

  v1 = *(unsigned __int8*)(a1 + 84);
  result = 1;
  if (v1 != 1 || (*(_BYTE*)(a1 + 82) & 1) == 0) {
    return result;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v47 = a1;
  v49 = 0;
  v5 = *(_QWORD*)(v4 + 152);
  v48 = 1;
  if (v5 != 0) {
    v6 = v5;
  }
  else {
    v6 = v4;
  }
  v7 = GameRoutine_16eb960(v6, &v47);
  v8 = (_QWORD*)GameData_212bf68;
  v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 160, 16, 0);
  *(_WORD*)(v9 + 16) = 0;
  *(_DWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_BYTE*)(v9 + 82) = 1;
  *(_QWORD*)(v9 + 128) = 0;
  *(_WORD*)(v9 + 80) = 257;
  *(_QWORD*)v9 = GameData_20ea2c8;
  *(_QWORD*)(v9 + 8) = 0;
  v10 = GameRoutine_7a86e0(&GameData_1ad89f9);
  v11 = GameData_212c970[0];
  if (v10 == 0) {
    goto LABEL_30;
  }
  v12 = *(_QWORD*)(*GameData_212c970[0] + 96);
  if (v12 == 0 || *(_QWORD*)(*GameData_212c970[0] + 112) == 0) {
    goto LABEL_30;
  }
  v14 = v12 - 1;
  if ((v12 & (v12 - 1)) != 0) {
    v15 = v10;
    if (v10 >= v12) {
      v15 = v10 % v12;
    }
  }
  else {
    v15 = v14 & v10;
  }
  v16 = *(_QWORD**)(*(_QWORD*)(*GameData_212c970[0] + 88) + 8 * v15);
  if (v16 == nullptr || (v17 = (_QWORD*)*v16) == nullptr) {
  LABEL_30:
    v19 = 0;
    goto LABEL_31;
  }
  if ((v12 & v14) == 0) {
    while (1) {
      v20 = v17[1];
      if (v20 == v10) {
        if (v17[2] == v10) {
          goto LABEL_88;
        }
      }
      else if ((v20 & v14) != v15) {
        goto LABEL_30;
      }
      v17 = (_QWORD*)*v17;
      v19 = 0;
      if (v17 == nullptr) {
        goto LABEL_31;
      }
    }
  }
  while (1) {
    v18 = v17[1];
    if (v18 == v10) {
      break;
    }
    if (v18 >= v12) {
      v18 %= v12;
    }
    if (v18 != v15) {
      goto LABEL_30;
    }
  LABEL_20:
    v17 = (_QWORD*)*v17;
    if (v17 == nullptr) {
      goto LABEL_30;
    }
  }
  if (v17[2] != v10) {
    goto LABEL_20;
  }
LABEL_88:
  v19 = v17[3];
LABEL_31:
  *(_QWORD*)(v9 + 144) = v19;
  v21 = GameRoutine_820d50(16);
  if (GameData_21caab0 == 0) {
    goto LABEL_38;
  }
  v22 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v21);
  if (v22 != 0 && *(_DWORD*)(v22 + 32) != 0) {
    goto LABEL_39;
  }
  if (GameData_21caab0 == 0) {
    goto LABEL_38;
  }
  v23 = *(_DWORD*)(GameData_21caab0 + 60);
  if (v23 == 2) {
  LABEL_39:
    v24 = false;
  }
  else {
    if (v23 == 3) {
      v24 = *(_DWORD*)(GameData_21caab0 + 64) != 1;
      goto LABEL_40;
    }
  LABEL_38:
    v24 = true;
  }
LABEL_40:
  *(_BYTE*)(v9 + 81) = v24;
  *(_BYTE*)(v9 + 82) = *(_QWORD*)(v9 + 144) != 0;
  GameRoutine_16e0c00(v7, v9);
  v25 = GameRoutine_651b90(*v8, 160, 16, 0);
  *(_WORD*)(v25 + 16) = 0;
  *(_DWORD*)(v25 + 40) = 0;
  *(_QWORD*)(v25 + 48) = 0;
  *(_QWORD*)(v25 + 56) = 0;
  *(_QWORD*)(v25 + 64) = 0;
  *(_QWORD*)(v25 + 72) = 0;
  *(_BYTE*)(v25 + 82) = 1;
  *(_QWORD*)(v25 + 128) = 0;
  *(_WORD*)(v25 + 80) = 257;
  *(_QWORD*)v25 = GameData_20ea528;
  *(_QWORD*)(v25 + 8) = 0;
  v26 = GameRoutine_7a86e0(&GameData_1aef9e3);
  if (v26 == 0) {
    goto LABEL_64;
  }
  v27 = *(_QWORD*)(*v11 + 96);
  if (v27 == 0 || *(_QWORD*)(*v11 + 112) == 0) {
    goto LABEL_64;
  }
  v29 = v27 - 1;
  if ((v27 & (v27 - 1)) != 0) {
    v30 = v26;
    if (v26 >= v27) {
      v30 = v26 % v27;
    }
  }
  else {
    v30 = v29 & v26;
  }
  v31 = *(_QWORD**)(*(_QWORD*)(*v11 + 88) + 8 * v30);
  if (v31 == nullptr || (v32 = (_QWORD*)*v31) == nullptr) {
  LABEL_64:
    v34 = 0;
    goto LABEL_65;
  }
  if ((v27 & v29) == 0) {
    while (1) {
      v35 = v32[1];
      if (v35 == v26) {
        if (v32[2] == v26) {
          goto LABEL_89;
        }
      }
      else if ((v35 & v29) != v30) {
        goto LABEL_64;
      }
      v32 = (_QWORD*)*v32;
      v34 = 0;
      if (v32 == nullptr) {
        goto LABEL_65;
      }
    }
  }
  while (2) {
    v33 = v32[1];
    if (v33 != v26) {
      if (v33 >= v27) {
        v33 %= v27;
      }
      if (v33 != v30) {
        goto LABEL_64;
      }
    }
    else if (v32[2] == v26) {
    LABEL_89:
      v34 = v32[3];
    LABEL_65:
      *(_QWORD*)(v25 + 144) = v34;
      v36 = GameRoutine_820d50(17);
      if (GameData_21caab0 == 0) {
        goto LABEL_72;
      }
      v37 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v36);
      if (v37 != 0 && *(_DWORD*)(v37 + 32) != 0) {
        goto LABEL_73;
      }
      if (GameData_21caab0 == 0) {
        goto LABEL_72;
      }
      v38 = *(_DWORD*)(GameData_21caab0 + 60);
      if (v38 == 2) {
      LABEL_73:
        v39 = false;
      }
      else {
        if (v38 == 3) {
          v39 = *(_DWORD*)(GameData_21caab0 + 64) != 1;
          goto LABEL_74;
        }
      LABEL_72:
        v39 = true;
      }
    LABEL_74:
      *(_BYTE*)(v25 + 81) = v39;
      *(_BYTE*)(v25 + 82) = v34 != 0;
      GameRoutine_16e0c00(v7, v25);
      v40 = GameRoutine_651b90(*v8, 144, 16, 0);
      *(_WORD*)(v40 + 16) = 0;
      *(_DWORD*)(v40 + 40) = 0;
      *(_QWORD*)(v40 + 48) = 0;
      *(_QWORD*)(v40 + 56) = 0;
      *(_QWORD*)(v40 + 64) = 0;
      *(_QWORD*)(v40 + 72) = 0;
      *(_BYTE*)(v40 + 80) = 1;
      *(_BYTE*)(v40 + 82) = 1;
      *(_QWORD*)(v40 + 128) = 0;
      *(_QWORD*)v40 = GameData_20ea788;
      *(_QWORD*)(v40 + 8) = 0;
      v41 = GameRoutine_821090(9);
      v42 = GameData_21caab0;
      if (GameData_21caab0 != 0) {
        v43 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v41);
        if (v43 == 0 || *(int*)(v43 + 32) < 1) {
          goto LABEL_81;
        }
        if (GameData_21caab0 == 0) {
          goto LABEL_82;
        }
        v44 = *(_DWORD*)(GameData_21caab0 + 60);
        if (v44 == 2) {
        LABEL_81:
          v42 = 0;
        }
        else {
          if (v44 == 3) {
            v42 = *(_DWORD*)(GameData_21caab0 + 64) != 1;
            goto LABEL_83;
          }
        LABEL_82:
          v42 = 1;
        }
      }
    LABEL_83:
      *(_BYTE*)(v40 + 81) = v42;
      GameRoutine_16e0c00(v7, v40);
      v45 = GameRoutine_651b90(*v8, 144, 16, 0);
      v46 = *(_QWORD*)(a1 + 8);
      if (v46 != 0) {
        v46 =
            GameRoutine_1a0a6c0(v46, GameData_212e030[0], &GameData_20ecfd8, 0);
        if (v46 != 0) {
          LODWORD(v46) = *(_DWORD*)(v46 + 1068);
        }
      }
      *(_WORD*)(v45 + 16) = 0;
      *(_DWORD*)(v45 + 40) = 0;
      *(_QWORD*)(v45 + 48) = 0;
      *(_QWORD*)(v45 + 56) = 0;
      *(_QWORD*)(v45 + 64) = 0;
      *(_QWORD*)(v45 + 72) = 0;
      *(_QWORD*)(v45 + 128) = 0;
      *(_BYTE*)(v45 + 80) = 1;
      *(_BYTE*)(v45 + 82) = 1;
      *(_QWORD*)v45 = GameData_20ea9e8;
      *(_QWORD*)(v45 + 8) = 0;
      *(_BYTE*)(v45 + 81) = GameRoutine_18560c0(v46) & 1;
      GameRoutine_16e0c00(v7, v45);
      return 10;
    }
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_64;
    }
    continue;
  }
}

#pragma GCC visibility pop
