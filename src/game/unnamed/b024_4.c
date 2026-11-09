#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (**GameData_2166ce8)();

extern __int64 GameData_21c9ac0;

extern __int64 GameData_21c9ac8;

extern __int64 GameData_21caab0;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_12122d0(_QWORD);

__int64 GameRoutine_16dd9a0(_QWORD);

__int64 GameRoutine_16e8d70(_QWORD);

__int64 GameRoutine_184bc70(__int64);

__int64 GameRoutine_184d1f0(__int64, __int64);

__int64 GameRoutine_184d360(__int64 result, __int64*);

bool GameRoutine_184e500(__int64, __int64);

bool GameRoutine_18515e0(__int64*);

__int64 GameRoutine_1852b80(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1852da0(_QWORD);

__int64 GameRoutine_1854cf0(_QWORD*);

__int64 GameRoutine_19ef790(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_716d80(_QWORD, _QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

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

#pragma GCC visibility pop
