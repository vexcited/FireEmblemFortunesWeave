#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1b01648[4];

extern __int64 (*GameData_1f9c648[])();

extern __int64 (*GameData_1fa2638[])();

extern __int64 (*GameData_1fa2ad0[])();

extern __int64 (*GameData_1fa2ba0[])();

extern __int64 (*GameData_1fa2c50[])();

extern __int64 (*GameData_1fa2eb0[])();

extern __int64 (*GameData_1fa3370[])();

extern __int64 GameData_1fa3820;

extern __int64 (*GameData_1fa3a90[])();

extern __int64 (*GameData_1fa3cf8[])();

extern __int64 GameData_212bf68;

extern __int64 GameData_212c470;

extern _UNKNOWN* GameData_212c730;

extern __int64* GameData_212c790;

extern __int64* GameData_212c880[5];

extern __int64* GameData_212cfc0[10];

extern __int64* GameData_212cfd0[8];

extern __int64* GameData_212d000[2];

extern __int64* GameData_212d660[5];

extern __int64* GameData_212d668[4];

extern __int64* GameData_212d6a8;

extern _UNKNOWN* GameData_212d6b0;

extern __int64* GameData_2132010[2];

extern int GameData_21668d0;

extern __int64 GameData_21c9988;

extern __int64 GameData_21c99b8;

extern __int64 GameData_21caab0;

extern __int64 GameData_21cd120;

extern __int64 GameData_21cd128;

extern __int64 GameData_21cd130;

extern __int64 GameData_21cd138;

extern __int64 GameData_21cd140;

extern int GameData_21d87f8;

extern __int64 GameData_21d8800;

extern __int64 GameData_21d8808;

extern int GameData_21d8828;

extern __int64 GameData_21d8830;

extern __int64 GameData_21d8838;

extern __int64 GameData_21d9c88;

extern __int64 GameData_21d9cb8;

extern __int64 GameData_21d9cc8;

extern __int64 GameData_21d9ce8;

extern __int64 GameData_21d9d00;

extern __int64 GameData_21d9d18;

extern __int64 GameData_21d9d60;

extern int GameData_21d9d7c;

extern __int64 GameData_21ee260;

extern __int64 GameData_21eea58;

extern __int64 GameData_21f1648;

extern __int64 GameData_21f2288;

extern __int64 GameData_21f2290;

extern __int64 GameData_21f49b8;

extern __int64 GameData_2258ba8;

extern __int64 GameData_2265ef8;

__int64 GameRoutine_10cb00(_QWORD, _QWORD);

__int64 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_127be60(_QWORD);

__int64 GameRoutine_13305c0(void);

__int64 GameRoutine_1341d60(_QWORD, _QWORD);

__int64 GameRoutine_134a4a0(_QWORD);

_QWORD* GameRoutine_134b820(_QWORD* __return_ptr, _QWORD);

__int64 GameRoutine_134c680(void);

__int64 GameRoutine_134d2e0(_QWORD);

__int64 GameRoutine_134e220(_QWORD);

__int64 GameRoutine_15317a0(_QWORD);

__int64 GameRoutine_1567000(_QWORD, _QWORD);

__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_16dea40(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);

__int64 GameRoutine_1990fb0(_QWORD);

__int64 GameRoutine_1a070b0(void);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0a6f0(_QWORD);

__int64 GameRoutine_1a0a700(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_66aae0(_QWORD);

__int64 GameRoutine_682780(_QWORD);

__int64 GameRoutine_6ea8c0(_QWORD);

__int64 GameRoutine_6ead60(_QWORD, _QWORD);

__int64 GameRoutine_6fc510(_QWORD);

__int64 GameRoutine_6fcdd0(_QWORD, _QWORD);

__int64 GameRoutine_7150e0(void);

__int64 GameRoutine_716d80(_QWORD, _QWORD);

__int64 GameRoutine_718130(_QWORD, _QWORD);

__int64 GameRoutine_7a86e0(_QWORD, _QWORD);

__int64 GameRoutine_7d6200(_QWORD, _QWORD);

__int64 GameRoutine_7e73c0(_QWORD);

__int64 GameRoutine_7ea0c0(__int64 result);

__int64 GameRoutine_7ea4e0(_QWORD);

__int64 GameRoutine_7ea680(_QWORD);

__int64 GameRoutine_7ea800(__int64 result);

__int64 GameRoutine_7f2a20(_QWORD, _QWORD);

__int64 GameRoutine_7f2ec0(_QWORD);

__int64 GameRoutine_80e330(_QWORD, _QWORD);

__int64 GameRoutine_825040(_QWORD, _QWORD);

__int64 GameRoutine_834ea0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_8350c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);

__int64 GameRoutine_84ebe0(_QWORD, _QWORD);

__int64 GameRoutine_85a540(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_876070(_QWORD, _QWORD);

__int64 GameRoutine_8767a0(_QWORD);

__int64 GameRoutine_8768e0(_QWORD);

__int64 GameRoutine_877680(_QWORD);

bool GameRoutine_877f00(_QWORD*, __int64, __int64);

__int64 GameRoutine_8c77c0(_QWORD);

__int64 GameRoutine_96de20(void);

__int64 GameRoutine_972290(_QWORD);

__int64 GameRoutine_9723f0(_QWORD);

__int64 GameRoutine_9a28e0(_QWORD);

__int64 GameRoutine_a2d080(_QWORD);

__int64 GameRoutine_a2d1c0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a2f660(_QWORD);

__int64 GameRoutine_c8b5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);

__int64 GameRoutine_d2f6f0(_QWORD);

__int64 GameHr_7bd090(__int64 a1)
{
  __int64 result;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *GameData_212d000[0] != 0) {
      return GameRoutine_c8b5a0(
          a1, 27, result, *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL),
          0, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_7bd110(__int64 a1)
{
  __int64 result;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *GameData_212d000[0] != 0) {
      return GameRoutine_c8b5a0(
          a1, 28, result, *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL),
          0, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_7bd4f0(__int64 a1)
{
  __int64 result;
  bool v3;
  __int64 v4;
  __int64 v5;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    v3 = result == 0 || *GameData_212d000[0] == 0;
    if (!v3 && (*(_BYTE*)(result + 416) & 1) != 0) {
      v4 = *(_QWORD*)(result + 440);
      if (v4 != 0) {
        v5 = *(unsigned __int8*)(v4 + 16);
      }
      else {
        v5 = 9;
      }
      return GameRoutine_c8b5a0(
          a1, 31, result, *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL),
          v5, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_7c6310()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return GameRoutine_825040(GameData_21cd128, 16);
  }
  return result;
}

__int64 GameHr_7c68c0()
{
  __int64 v0;
  int v1;
  __int64 result;
  int v3;

  GameRoutine_d2f6f0(GameData_21cd138);
  v0 = GameData_21cd140;
  v1 = *(_DWORD*)(GameData_21cd140 + 424) - 1;
  *(_DWORD*)(GameData_21cd140 + 424) = v1;
  if (v1 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v0 + 416) + 8LL))(v0 + 416);
  }
  result = GameData_21cd130;
  v3 = *(_DWORD*)(GameData_21cd130 + 40) - 1;
  *(_DWORD*)(GameData_21cd130 + 40) = v3;
  if (v3 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(result + 32) + 8LL))(result +
                                                                     32);
  }
  return result;
}

__int64* GameHr_7eae80(__int64* result, unsigned int a2)
{
  __int64* v3;
  __int64* i;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int16 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD** v45;
  _QWORD** v46;
  _QWORD* v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD v56[4];
  __int64* v57;
  int v58;

  if (result == nullptr) {
    return result;
  }
  v3 = result;
  if ((GameData_21d9d7c & 0x80) == 0) {
    for (i = result; i != nullptr; i = (__int64*)i[78]) {
      v5 = i;
    }
    if (*((_BYTE*)v5 + 441) != 3) {
      goto LABEL_12;
    }
    v6 = (__int64*)result[78];
    if (v6 == nullptr) {
      v6 = result;
    }
    v56[0] = v6;
    v58 = 241;
    v7 = GameRoutine_6ead60(v56, &v58);
    if (v7 != 0) {
      result = (__int64*)(v7 + 2104);
      goto LABEL_13;
    }
    v8 = *(_QWORD*)(GameData_21caab0 + 176);
    if (*(_BYTE*)(v8 + 144) != 0) {
      result = (__int64*)(v8 + 112);
    }
    else {
    LABEL_12:
      result = &GameData_21f49b8;
    }
  LABEL_13:
    if (*((_BYTE*)result + 32) != 0) {
      result = (__int64*)GameRoutine_7ea0c0((__int64)result);
    }
  }
  if ((GameData_21d9d7c & 1) != 0) {
    return result;
  }
  GameData_21d9d7c |= 1u;
  v9 = *v3;
  if (*v3 != 0) {
    v10 = *(_QWORD*)(GameData_21d9d00 + 8 * (*v3 & 0xFFF));
    if (v10 != 0) {
      v11 = *(_QWORD**)(GameData_21d9d00 + 8 * (*v3 & 0xFFF));
      while (*v11 != v9) {
        v11 = (_QWORD*)v11[1];
        if (v11 == nullptr) {
          v12 = *(_QWORD**)(GameData_21d9d00 + 8 * (*v3 & 0xFFF));
          while (*v12 != v9) {
            v12 = (_QWORD*)v12[1];
            if (v12 == nullptr) {
              do {
                v13 = v10;
                v10 = *(_QWORD*)(v10 + 8);
              } while (v10 != 0);
              *(_QWORD*)(v13 + 8) = GameRoutine_7f2ec0(&GameData_21d9ce8);
              goto LABEL_27;
            }
          }
          break;
        }
      }
    }
    else {
      LODWORD(v56[0]) = v9 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * (v9 & 0xFFF)) =
          GameRoutine_7f2ec0(&GameData_21d9ce8);
      GameRoutine_7d6200(&GameData_21d9d18, v56);
    }
  }
LABEL_27:
  GameRoutine_7ea4e0(*((unsigned __int8*)v3 + 441));
  v14 = v3[42];
  if (v14 != 0) {
    v14 = GameRoutine_96de20();
  }
  GameRoutine_7ea680(v14);
  v16 = GameRoutine_7a86e0(v3[79], v15);
  if (v16 != 0) {
    v17 = *(_QWORD*)(GameData_21d9d00 + 8 * (v16 & 0xFFF));
    if (v17 != 0) {
      v18 = *(_QWORD**)(GameData_21d9d00 + 8 * (v16 & 0xFFF));
      while (*v18 != v16) {
        v18 = (_QWORD*)v18[1];
        if (v18 == nullptr) {
          v19 = *(_QWORD**)(GameData_21d9d00 + 8 * (v16 & 0xFFF));
          while (*v19 != v16) {
            v19 = (_QWORD*)v19[1];
            if (v19 == nullptr) {
              do {
                v20 = v17;
                v17 = *(_QWORD*)(v17 + 8);
              } while (v17 != 0);
              *(_QWORD*)(v20 + 8) = GameRoutine_7f2ec0(&GameData_21d9ce8);
              goto LABEL_40;
            }
          }
          break;
        }
      }
    }
    else {
      LODWORD(v56[0]) = v16 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * (v16 & 0xFFF)) =
          GameRoutine_7f2ec0(&GameData_21d9ce8);
      GameRoutine_7d6200(&GameData_21d9d18, v56);
    }
  }
LABEL_40:
  result = (__int64*)v3[81];
  if (result != nullptr) {
    v56[0] = GameData_1f9c648;
    v56[1] = &GameData_21d9ce8;
    v57 = v56;
    GameRoutine_85a540(result, a2, v56);
    result = v57;
    if (v57 == v56) {
      v21 = 32;
    }
    else {
      if (v57 == nullptr) {
        goto LABEL_46;
      }
      v21 = 40;
    }
    result = (__int64*)(*(__int64 (**)(void))(*v57 + v21))();
  }
LABEL_46:
  v22 = v3[8];
  if (v22 != 0) {
    if (*(_QWORD*)(v22 + 88) != 0) {
      v23 = *(_QWORD*)(v22 + 88);
    }
    else {
      v23 = v3[8];
    }
    result = (__int64*)GameRoutine_7ea800(v23);
  }
  if (v3[83] != 0) {
    GameData_21d9d60 = v3[83];
  }
  v24 = v3[3];
  if (*(_QWORD*)(v24 + 1392) == 0) {
    goto LABEL_93;
  }
  result = (__int64*)GameRoutine_9a28e0(40);
  if (GameData_21caab0 == 0) {
    goto LABEL_93;
  }
  v25 = *(_QWORD*)(GameData_21caab0 + 48);
  result = (__int64*)GameRoutine_65c580(v25, result);
  if (result != nullptr && *((_DWORD*)result + 8) != 0) {
    goto LABEL_93;
  }
  result = (__int64*)GameRoutine_65c580(v25, v24 + 1392);
  if (result == nullptr) {
    goto LABEL_93;
  }
  v26 = *((unsigned __int8*)result + 32);
  if (v26 == 2) {
    if (GameData_21d9cc8 != 0) {
      v34 = *(_QWORD*)(GameData_21d9d00 + 8 * (GameData_21d9cc8 & 0xFFF));
      if (v34 != 0) {
        v35 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9cc8 & 0xFFF));
        while (*v35 != GameData_21d9cc8) {
          v35 = (_QWORD*)v35[1];
          if (v35 == nullptr) {
            v36 =
                *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9cc8 & 0xFFF));
            while (*v36 != GameData_21d9cc8) {
              v36 = (_QWORD*)v36[1];
              if (v36 == nullptr) {
                do {
                  v37 = v34;
                  v34 = *(_QWORD*)(v34 + 8);
                } while (v34 != 0);
                result = (__int64*)GameRoutine_7f2ec0(&GameData_21d9ce8);
                *(_QWORD*)(v37 + 8) = result;
                goto LABEL_81;
              }
            }
            break;
          }
        }
      }
      else {
        LODWORD(v56[0]) = GameData_21d9cc8 & 0xFFF;
        v33 = GameData_21d9cc8 & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 + 8 * v33) =
            GameRoutine_7f2ec0(&GameData_21d9ce8);
        result = (__int64*)GameRoutine_7d6200(&GameData_21d9d18, v56);
      }
    }
  LABEL_81:
    v27 = GameData_21d9c88;
    if (GameData_21d9c88 == 0) {
      goto LABEL_92;
    }
    v28 = GameData_21d9c88 & 0xFFF;
    v38 = *(_QWORD*)(GameData_21d9d00 + 8 * v28);
    if (v38 != 0) {
      v39 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c88 & 0xFFF));
      while (*v39 != GameData_21d9c88) {
        v39 = (_QWORD*)v39[1];
        if (v39 == nullptr) {
          v40 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c88 & 0xFFF));
          while (*v40 != GameData_21d9c88) {
            v40 = (_QWORD*)v40[1];
            if (v40 == nullptr) {
              do {
                v32 = v38;
                v38 = *(_QWORD*)(v38 + 8);
              } while (v38 != 0);
            LABEL_90:
              result = (__int64*)GameRoutine_7f2ec0(&GameData_21d9ce8);
              *(_QWORD*)(v32 + 8) = result;
              goto LABEL_92;
            }
          }
          goto LABEL_92;
        }
      }
      goto LABEL_92;
    }
  LABEL_91:
    LODWORD(v56[0]) = v27 & 0xFFF;
    *(_QWORD*)(GameData_21d9d00 + 8 * v28) =
        GameRoutine_7f2ec0(&GameData_21d9ce8);
    result = (__int64*)GameRoutine_7d6200(&GameData_21d9d18, v56);
    goto LABEL_92;
  }
  if (v26 != 1) {
    goto LABEL_93;
  }
  v27 = GameData_21d9cb8;
  if (GameData_21d9cb8 != 0) {
    v28 = GameData_21d9cb8 & 0xFFF;
    v29 = *(_QWORD*)(GameData_21d9d00 + 8 * v28);
    if (v29 != 0) {
      v30 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9cb8 & 0xFFF));
      while (*v30 != GameData_21d9cb8) {
        v30 = (_QWORD*)v30[1];
        if (v30 == nullptr) {
          v31 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9cb8 & 0xFFF));
          while (*v31 != GameData_21d9cb8) {
            v31 = (_QWORD*)v31[1];
            if (v31 == nullptr) {
              do {
                v32 = v29;
                v29 = *(_QWORD*)(v29 + 8);
              } while (v29 != 0);
              goto LABEL_90;
            }
          }
          goto LABEL_92;
        }
      }
      goto LABEL_92;
    }
    goto LABEL_91;
  }
LABEL_92:
  GameData_21d9d7c |= 0x100u;
LABEL_93:
  v41 = GameData_21d9d7c;
  if ((GameData_21d9d7c & 0x100) == 0) {
    v41 = GameData_21d9d7c | 0x100;
    GameData_21d9d7c |= 0x100u;
    if (GameData_21caab0 != 0) {
      v42 = *(unsigned int*)(GameData_21caab0 + 60);
      v43 = (unsigned int)v42 > 3 ? 1712LL : GameData_1b01648[v42];
    }
    else {
      v43 = 1760;
    }
    v44 = v3[3] + v43;
    v45 = *(_QWORD***)v44;
    v46 = *(_QWORD***)(v44 + 8);
    if (*(_QWORD***)v44 != v46) {
      do {
        v47 = *(_QWORD**)(GameData_21d9d00 + 8 * (**v45 & 0xFFFLL));
        if (v47 != nullptr) {
          while (*v47 != **v45) {
            v47 = (_QWORD*)v47[1];
            if (v47 == nullptr) {
              goto LABEL_102;
            }
          }
          if (GameData_21d9c88 != 0) {
            v49 =
                *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c88 & 0xFFF));
            v50 = v49;
            if (v49 != nullptr) {
              while (*v50 != GameData_21d9c88) {
                v50 = (_QWORD*)v50[1];
                if (v50 == nullptr) {
                  v51 = *(_QWORD**)(GameData_21d9d00 +
                                    8 * (GameData_21d9c88 & 0xFFF));
                  while (*v51 != GameData_21d9c88) {
                    v51 = (_QWORD*)v51[1];
                    if (v51 == nullptr) {
                      do {
                        v52 = v49;
                        v49 = (_QWORD*)v49[1];
                      } while (v49 != nullptr);
                      result = (__int64*)GameRoutine_7f2ec0(&GameData_21d9ce8);
                      v52[1] = result;
                      goto LABEL_102;
                    }
                  }
                  break;
                }
              }
            }
            else {
              LODWORD(v56[0]) = GameData_21d9c88 & 0xFFF;
              v48 = GameData_21d9c88 & 0xFFF;
              *(_QWORD*)(GameData_21d9d00 + 8 * v48) =
                  GameRoutine_7f2ec0(&GameData_21d9ce8);
              result = (__int64*)GameRoutine_7d6200(&GameData_21d9d18, v56);
            }
          }
        }
      LABEL_102:
        ++v45;
      } while (v45 != v46);
      v41 = GameData_21d9d7c;
    }
  }
  if ((v41 & 0x40) == 0) {
    GameData_21d9d7c = v41 | 0x40;
    result = (__int64*)GameRoutine_7e73c0(v3);
    v53 = *result;
    v54 = result[1];
    if (*result != v54) {
      do {
        if (GameData_21caab0 != 0) {
          v55 = GameData_21caab0 + 40;
        }
        else {
          v55 = 0;
        }
        result = (__int64*)GameRoutine_7f2a20(v55, v53);
        v53 += 16;
      } while (v53 != v54);
    }
  }
  return result;
}

__int64 GameHr_834c40(__int64 result, __int64* a2,
                      __int64 (**a3)(__int64, __int64), unsigned __int64 a4,
                      __int64* a5, signed __int64 a6)
{
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (a4 >= 2) {
    v8 = (_QWORD*)result;
    if (a4 == 2) {
      result = (*a3)(*(a2 - 1), *(_QWORD*)result);
      if ((result & 1) != 0) {
        v9 = *v8;
        *v8 = *(a2 - 1);
        *(a2 - 1) = v9;
      }
    }
    else if ((__int64)a4 > 128) {
      v18 = a4 >> 1;
      v19 = a5;
      v20 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        GameRoutine_834ea0(result, result + 8 * v18, a3, a4 >> 1, a5);
        v23 = &v19[v18];
        result = GameRoutine_834ea0(&v8[v18], a2, a3, v20, v23);
        v24 = &v19[a4];
        v25 = v23;
        while (v25 != v24) {
          result = (*a3)(*v25, *v19);
          if ((result & 1) != 0) {
            v26 = v25;
          }
          else {
            v26 = v19;
          }
          if ((result & 1) != 0) {
            v27 = 0;
          }
          else {
            v27 = 8;
          }
          v28 = *v26;
          v19 = (__int64*)((char*)v19 + v27);
          if ((result & 1) != 0) {
            v29 = 8;
          }
          else {
            v29 = 0;
          }
          v25 = (__int64*)((char*)v25 + v29);
          *v8++ = v28;
          if (v19 == v23) {
            while (v25 != v24) {
              v31 = *v25++;
              *v8++ = v31;
            }
            return result;
          }
        }
        while (v19 != v23) {
          v30 = *v19++;
          *v8++ = v30;
        }
      }
      else {
        GameHr_834c40(result, result + 8 * v18, a3, a4 >> 1, a5, a6);
        GameHr_834c40(&v8[v18], a2, a3, v20, v19, a6);
        return GameRoutine_8350c0(v8, &v8[v18], a2, a3, v18, v20, v19, a6);
      }
    }
    else if ((__int64*)result != a2) {
      v10 = (__int64*)(result + 8);
      if ((__int64*)(result + 8) != a2) {
        v11 = 0;
        v12 = (__int64*)result;
        do {
          v15 = *v12;
          v14 = v12[1];
          v12 = v10;
          result = (*a3)(v14, v15);
          if ((result & 1) != 0) {
            v16 = *v12;
            v17 = v11;
            do {
              *(_QWORD*)((char*)v8 + v17 + 8) = *(_QWORD*)((char*)v8 + v17);
              if (v17 == 0) {
                v13 = v8;
                goto LABEL_11;
              }
              result = (*a3)(v16, *(_QWORD*)((char*)v8 + v17 - 8));
              v17 -= 8;
            } while ((result & 1) != 0);
            v13 = (_QWORD*)((char*)v8 + v17 + 8);
          LABEL_11:
            *v13 = v16;
          }
          v10 = v12 + 1;
          v11 += 8;
        } while (v12 + 1 != a2);
      }
    }
  }
  return result;
}

__int64 GameHr_843780(_DWORD* a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BOOL4 v20;
  int v21;
  int v22;
  unsigned int v23;

  if (a2 == 0) {
    return 0;
  }
  if ((*a1 & 0xFFF) == 0) {
    return 0;
  }
  v4 = GameData_212c880[0];
  v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a1 & 0xFFF));
  if ((GameRoutine_6fc510(v5) & 1) != 0) {
    return 0;
  }
  if (*(_BYTE*)(v5 + 273) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8 * (*a1 & 0xFFFLL));
    v9 = *(unsigned __int8*)(v8 + 104);
    v10 = *(unsigned __int8*)(v8 + 273);
    v11 = (unsigned int)(v9 - 5) >= 2 ? 0 : (*a1 >> 19) & 0x1F;
    if (v11 - ((*a1 >> 12) & 0x7F) + v10 < 1) {
      return 0;
    }
  }
  v12 = *(_QWORD*)(v5 + 24);
  if (*(_BYTE*)(v12 + 1122) == 1) {
    v13 = *(_QWORD*)(v12 + 800);
    v14 = *(_QWORD*)(v12 + 808);
    if (v14 != v13) {
      while (
          (unsigned int)GameRoutine_84ebe0(v13, a2 + 1744) !=
          (unsigned int)((*(_QWORD*)(v13 + 40) - *(_QWORD*)(v13 + 32)) >> 2)) {
        v13 += 96;
        v6 = 0;
        if (v13 == v14) {
          return v6;
        }
      }
    }
    v15 = *(_QWORD*)(v12 + 824);
    v16 = *(_QWORD*)(v12 + 832);
    if (v16 != v15) {
      while (
          (unsigned int)GameRoutine_84ebe0(v15, a2 + 1744) !=
          (unsigned int)((*(_QWORD*)(v15 + 40) - *(_QWORD*)(v15 + 32)) >> 2)) {
        v15 += 96;
        if (v15 == v16) {
          goto LABEL_19;
        }
      }
      return 0;
    }
  }
LABEL_19:
  v6 = 1;
  v17 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*a1 & 0xFFF)) + 24LL);
  v18 = *(_QWORD*)(v17 + 1040);
  v19 = *(_QWORD*)(v17 + 1048);
  while (v18 != v19) {
    if (*(_BYTE*)(v18 + 4) != 0) {
      v21 = GameRoutine_6fcdd0(a2, *(unsigned __int16*)(v18 + 2));
      v22 = GameRoutine_6fcdd0(a2, *(unsigned __int16*)(v18 + 6));
      v23 = *(unsigned __int8*)(v18 + 4);
      v20 = false;
      if (v23 > 3) {
        switch (v23) {
        case 4u:
          v20 = v21 >= v22;
          break;
        case 5u:
          v20 = v21 < v22;
          break;
        case 6u:
          v20 = v21 > v22;
          break;
        default:
          break;
        }
      }
      else {
        switch (v23) {
        case 1u:
          v20 = v21 == v22;
          break;
        case 2u:
          v20 = v21 != v22;
          break;
        case 3u:
          v20 = v21 <= v22;
          break;
        default:
          break;
        }
      }
    }
    else {
      v20 = true;
    }
    v6 &= v20;
    v18 += 8;
  }
  return v6;
}

__int64 GameHr_86c160(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  _QWORD* v18;
  _QWORD* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v26;
  __int64 v27;

  v2 = (_QWORD*)GameData_212bf68;
  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1312, 16, 0);
  v26 = 0;
  v27 = 0;
  GameRoutine_16dcd30(v3, "MapSystemMenu", &v26, 0);
  v4 = GameData_212d6a8;
  v5 = v27;
  *(_QWORD*)v3 = GameData_212d6a8 + 2;
  *(_QWORD*)(v3 + 176) = v4 + 143;
  *(_QWORD*)(v3 + 1056) = v4 + 169;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50(v5);
  }
  *(_BYTE*)(v3 + 1064) = 0;
  *(_DWORD*)(v3 + 1280) = 0;
  *(_QWORD*)(v3 + 1080) = 0;
  *(_QWORD*)(v3 + 1088) = 0;
  *(_DWORD*)(v3 + 1068) = 4;
  *(_QWORD*)(v3 + 1096) = 0;
  *(_QWORD*)(v3 + 1104) = 0;
  *(_QWORD*)(v3 + 1112) = 0;
  *(_QWORD*)(v3 + 1120) = 0;
  *(_QWORD*)(v3 + 1128) = 0;
  *(_QWORD*)(v3 + 1136) = 0;
  *(_QWORD*)(v3 + 1144) = 0;
  *(_QWORD*)(v3 + 1152) = 0;
  *(_QWORD*)(v3 + 1160) = 0;
  *(_QWORD*)(v3 + 1168) = 0;
  *(_QWORD*)(v3 + 1176) = 0;
  *(_QWORD*)(v3 + 1184) = 0;
  *(_QWORD*)(v3 + 1192) = 0;
  *(_QWORD*)(v3 + 1200) = 0;
  *(_QWORD*)(v3 + 1208) = 0;
  *(_QWORD*)(v3 + 1216) = 0;
  *(_QWORD*)(v3 + 1224) = 0;
  *(_QWORD*)(v3 + 1232) = 0;
  *(_QWORD*)(v3 + 1240) = 0;
  *(_QWORD*)(v3 + 1248) = 0;
  *(_QWORD*)(v3 + 1256) = 0;
  *(_QWORD*)(v3 + 1264) = 0;
  *(_QWORD*)(v3 + 1284) = 0x4100000041C00000LL;
  v6 = (char*)GameData_212d6b0 + 16;
  *(_DWORD*)(v3 + 1272) = 0;
  *(_WORD*)(v3 + 1296) = 0;
  *(_DWORD*)(v3 + 1300) = 0;
  *(_QWORD*)(v3 + 1072) = v6;
  *(_QWORD*)v3 = GameData_1fa2638;
  *(_QWORD*)(v3 + 176) = GameData_1fa2ad0;
  *(_QWORD*)(v3 + 1056) = GameData_1fa2ba0;
  GameRoutine_657850(v3, GameData_212c730, "MapSystemMenu", 1, a1);
  v7 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_BYTE*)(v7 + 17) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_BYTE*)(v7 + 82) = 1;
  *(_WORD*)(v7 + 80) = 257;
  *(_QWORD*)v7 = GameData_1fa2c50;
  *(_QWORD*)(v7 + 8) = 0;
  GameRoutine_16e0c00(v3, v7);
  v8 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v8 + 72) = 0;
  *(_QWORD*)(v8 + 80) = 0;
  *(_QWORD*)(v8 + 16) = 0;
  *(_QWORD*)(v8 + 24) = 0;
  *(_QWORD*)(v8 + 32) = 0;
  *(_QWORD*)(v8 + 40) = 0;
  *(_BYTE*)(v8 + 17) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_WORD*)(v8 + 80) = 257;
  *(_BYTE*)(v8 + 82) = 1;
  *(_QWORD*)v8 = GameData_1fa2eb0;
  *(_QWORD*)(v8 + 8) = 0;
  GameRoutine_16e0c00(v3, v8);
  v9 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_BYTE*)(v9 + 17) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_WORD*)(v9 + 80) = 257;
  *(_BYTE*)(v9 + 82) = 1;
  *(_QWORD*)v9 = GameData_1fa3370;
  *(_QWORD*)(v9 + 8) = 0;
  GameRoutine_16e0c00(v3, v9);
  v10 =
      GameData_21caab0 != 0 && *(unsigned __int8*)(GameData_21caab0 + 13) == 2;
  v11 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v11 + 72) = 0;
  *(_QWORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_BYTE*)(v11 + 17) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_WORD*)(v11 + 80) = 257;
  *(_BYTE*)(v11 + 82) = 1;
  v12 = GameData_212d660[0];
  if (v10) {
    v12 = &GameData_1fa3820;
  }
  *(_QWORD*)v11 = v12 + 2;
  *(_QWORD*)(v11 + 8) = 0;
  GameRoutine_16e0c00(v3, v11);
  v13 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v13 + 72) = 0;
  *(_QWORD*)(v13 + 80) = 0;
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 24) = 0;
  *(_QWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_BYTE*)(v13 + 17) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_WORD*)(v13 + 80) = 257;
  *(_BYTE*)(v13 + 82) = 1;
  *(_QWORD*)v13 = GameData_212d668[0] + 2;
  *(_QWORD*)(v13 + 8) = 0;
  GameRoutine_16e0c00(v3, v13);
  v14 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_WORD*)(v14 + 16) = 0;
  *(_DWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_DWORD*)(v14 + 80) = 65793;
  *(_QWORD*)v14 = GameData_2132010[0] + 2;
  *(_QWORD*)(v14 + 8) = 0;
  GameRoutine_16e0c00(v3, v14);
  v15 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v15 + 72) = 0;
  *(_QWORD*)(v15 + 80) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)(v15 + 24) = 0;
  *(_QWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_BYTE*)(v15 + 17) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_WORD*)(v15 + 80) = 257;
  *(_BYTE*)(v15 + 82) = 1;
  *(_QWORD*)v15 = GameData_1fa3a90;
  *(_QWORD*)(v15 + 8) = 0;
  GameRoutine_16e0c00(v3, v15);
  v16 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 80) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 24) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_BYTE*)(v16 + 17) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_WORD*)(v16 + 80) = 257;
  *(_BYTE*)(v16 + 82) = 1;
  *(_QWORD*)v16 = GameData_1fa3cf8;
  *(_QWORD*)(v16 + 8) = 0;
  GameRoutine_16e0c00(v3, v16);
  v17 = GameData_21668d0;
  if ((GameData_21668d0 & 0x80000000) == 0) {
    v18 = *(_QWORD**)(v3 + 232);
    v19 = *(_QWORD**)(v3 + 240);
    if (v18 != v19) {
      v20 = 0;
      do {
        v21 = *v18;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v18 + 48LL))(*v18) & 1) != 0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 40LL))(v21) & 1) != 0) {
          if (v17 == v20) {
            goto LABEL_18;
          }
          ++v20;
        }
        ++v18;
      } while (v18 != v19);
    }
    v21 = 0;
  LABEL_18:
    v22 = *(_QWORD*)(v3 + 336);
    if (v22 != v21) {
      if (v22 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 168LL))(v22);
      }
      *(_QWORD*)(v3 + 336) = v21;
      GameRoutine_16dea40(v3, 0, 1, 0);
      v23 = *(_QWORD*)(v3 + 336);
      if (v23 == 0) {
        v24 = 4;
      LABEL_28:
        *(_DWORD*)(v3 + 356) = *(_DWORD*)(v3 + 356) & 0xFFFFFFFB | v24;
        return v3;
      }
      (*(void (**)(__int64))(*(_QWORD*)v23 + 160LL))(v23);
      GameRoutine_1990fb0(*(_QWORD*)GameData_212c470 + 712LL);
      v22 = *(_QWORD*)(v3 + 336);
    }
    v24 = 4;
    if (v22 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 120LL))(v22) & 1) != 0) {
        v24 = 4;
      }
      else {
        v24 = 0;
      }
    }
    goto LABEL_28;
  }
  return v3;
}

__int64 GameHr_86f2b0()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    result = GameRoutine_825040(GameData_21cd128, 2);
  }
  *(_BYTE*)(*GameData_212cfc0[0] + 24) = 1;
  *(_BYTE*)(GameData_21cd120 + 5554) = 1;
  return result;
}

__int64 GameHr_86fbf0()
{
  __int64 result;

  result = GameData_2258ba8;
  if (GameData_2258ba8 != 0) {
    return GameRoutine_1567000(GameData_2258ba8, 0);
  }
  return result;
}

__int64 GameHr_86fc30()
{
  __int64 v0;
  __int64 result;
  _BYTE v2[200];

  v0 = GameData_2265ef8;
  if (GameData_2265ef8 != 0) {
    GameRoutine_10cb00(v2, "FadeTime_BGM_Prepare_Out");
    GameRoutine_a2d1c0(v0, v2, (*(_BYTE*)(GameData_2265ef8 + 2848) & 1) == 0);
    return GameRoutine_10cff0(v2);
  }
  return result;
}

bool GameHr_8789c0(_QWORD* a1)
{
  bool v1;
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 ProgramTotalActiveTimeEv;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;

  v1 = GameRoutine_877f00(a1, GameData_21eea58 + 208, GameData_21eea58 + 336);
  if (v1) {
    if (GameData_21caab0 != 0) {
      LOBYTE(v19) = *(_BYTE*)(GameData_21caab0 + 14);
      BYTE4(v19) = *(_BYTE*)(GameData_21caab0 + 15) == 9;
    }
    else {
      v19 = 0;
    }
    v2 = GameData_21d87f8;
    v3 = GameData_21d8828;
    v4 = GameRoutine_8767a0(GameData_21eea58 + 592);
    GameRoutine_66aae0(v4);
    v5 = GameData_21eea58;
    *(_WORD*)(GameData_21eea58 + 96) = 0;
    v5 += 96;
    *(_QWORD*)(v5 + 4) = 0x10000000000LL;
    *(_BYTE*)(v5 + 12) = 0;
    *(_QWORD*)(v5 + 14) = 0;
    *(_QWORD*)(v5 + 22) = 0;
    *(_QWORD*)(v5 + 30) = 0;
    *(_DWORD*)(v5 + 37) = 0;
    *(_QWORD*)(v5 + 42) = 0;
    *(_DWORD*)(v5 + 50) = 0;
    *(_DWORD*)(v5 + 72) = 0;
    *(_BYTE*)(v5 + 76) = 0;
    *(_DWORD*)(v5 + 78) = 0;
    *(_DWORD*)(v5 + 84) = 0;
    *(_WORD*)(v5 + 88) = 0;
    *(_QWORD*)(v5 + 96) = 0;
    *(_BYTE*)(v5 + 104) = 0;
    *(_QWORD*)(v5 + 63) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    GameRoutine_876070(v5, v5 + 112);
    v6 = GameRoutine_877680(v5 + 240);
    v7 = *(unsigned __int16*)(v5 + 60);
    v8 = *(unsigned __int8*)(v5 + 62);
    LODWORD(v5) = *(unsigned __int8*)(v5 + 63);
    ProgramTotalActiveTimeEv = GameRoutine_1a0a6f0(v6);
    GameData_21d8800 = GameRoutine_1a0a700(ProgramTotalActiveTimeEv);
    GameData_21d8808 = 0;
    LOWORD(GameData_21d87f8) = v7;
    BYTE2(GameData_21d87f8) = v8;
    HIBYTE(GameData_21d87f8) = v5;
    GameData_21d8808 = GameRoutine_1a0a700(
        1000000000LL * (unsigned int)(3600 * v7 + 60 * v8 + v5));
    v10 = GameRoutine_8768e0(GameData_21eea58 + 592);
    if (*(_BYTE*)(GameData_21eea58 + 96) != 0) {
      v11 = GameData_21caab0;
      if (GameData_21caab0 != 0) {
        v11 = *(unsigned __int16*)(GameData_21caab0 + 2720);
      }
      if (v11 != *(unsigned __int16*)(GameData_21eea58 + 184)) {
        v12 = *(_QWORD*)(GameData_21eea58 + 192);
        v10 = GameRoutine_682780(9);
        if (v10 != 0) {
          v13 = v10;
          if (*(_QWORD*)(v10 + 304) == 0 ||
              (v20 = *(_QWORD*)(v10 + 304),
               (v10 = GameRoutine_127be60(&v20)) == 0)) {
            if (*(_QWORD*)(v13 + 64) != 0) {
              v10 = *(_QWORD*)(v13 + 64);
            }
            else {
              v10 = GameData_21c9988;
            }
          }
        }
        if (v12 != v10) {
          v10 = GameRoutine_7150e0();
        }
      }
    }
    if (GameData_21caab0 != 0) {
      v14 = BYTE4(v19) ^ 1;
      if (*(_BYTE*)(GameData_21caab0 + 15) != 9) {
        v14 = 1;
      }
      if ((v14 & 1) == 0) {
        *(_BYTE*)(GameData_21caab0 + 14) = v19;
      }
    }
    v15 = GameRoutine_1a0a6f0(v10);
    v16 = GameRoutine_1a0a700(v15);
    GameData_21d87f8 = v2;
    GameData_21d8800 = v16;
    GameData_21d8808 = 0;
    GameData_21d8808 = GameRoutine_1a0a700(
        1000000000LL *
        (HIBYTE(v2) + 3600 * (unsigned __int16)v2 + 60 * BYTE2(v2)));
    v17 = GameRoutine_1a0a6f0(GameData_21d8808);
    GameData_21d8830 = GameRoutine_1a0a700(v17);
    GameData_21d8838 = 0;
    GameData_21d8828 = v3;
    GameData_21d8838 = GameRoutine_1a0a700(
        1000000000LL *
        (HIBYTE(v3) + 3600 * (unsigned __int16)v3 + 60 * BYTE2(v3)));
  }
  return v1;
}

__int64 GameHr_882300(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64** v12;
  __int64** v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int* v23;
  int v24;
  _QWORD* v25;
  _QWORD* v26;

  v1 = GameData_21caab0;
  if (GameData_21caab0 != 0 && (*(_DWORD*)(GameData_21caab0 + 92) & 2) != 0) {
    v2 = result;
    *(_BYTE*)(result + 309) = (*(_DWORD*)(GameData_21caab0 + 92) & 0x10) != 0;
    v3 = GameData_212c790;
    if ((*(_BYTE*)(v1 + 92) & 2) == 0) {
      goto LABEL_39;
    }
    if (*(_DWORD*)(v1 + 60) == 3) {
      v4 = GameRoutine_13305c0();
      if (v4 != 0) {
        v5 = *v3;
        v6 = *(_QWORD*)(*v3 + 8);
        v7 = *(_QWORD*)(v6 + 8);
        v8 = *(_QWORD*)(v6 + 16);
        while (v7 != v8) {
          if (**(_QWORD**)v7 == v4) {
            v9 = *(_QWORD*)(*(_QWORD*)v7 + 96LL);
            if (v9 != 0 && *(_BYTE*)(v9 + 32) == 1) {
              if (GameData_21caab0 != 0 &&
                  (*(_BYTE*)(GameData_21caab0 + 92) & 0x18) != 0) {
                goto LABEL_18;
              }
              goto LABEL_39;
            }
          }
          v7 += 8;
        }
      }
    }
    if (GameData_21caab0 == 0 || (*(_BYTE*)(GameData_21caab0 + 92) & 8) == 0) {
      goto LABEL_39;
    }
    v5 = *v3;
  LABEL_18:
    *(_BYTE*)(v2 + 309) = 0;
    v10 = *(_QWORD*)(v5 + 8);
    v11 = *(_DWORD*)(v10 + 56);
    v12 = *(__int64***)(v10 + 8);
    v13 = *(__int64***)(v10 + 16);
    if (v11 < 0) {
      for (; v12 != v13; ++v12) {
        v14 = *v12;
        if ((*v12)[12] == 0 && v14[69] == 0) {
          goto LABEL_28;
        }
      }
    }
    else if (v12 != v13) {
      while (1) {
        v15 = *v12++;
        v14 = v15;
        if (*((_DWORD*)v15 + 21) == v11) {
          break;
        }
        if (v12 == v13) {
          goto LABEL_24;
        }
      }
    LABEL_28:
      v16 = *v14;
      goto LABEL_29;
    }
  LABEL_24:
    v16 = GameRoutine_13305c0();
  LABEL_29:
    GameRoutine_134b820(&v25, v16);
    v17 = v25;
    v18 = v26;
    if (v25 != v26) {
      do {
        v19 = *v17;
        if ((*(_DWORD*)(*v17 + 84LL) & 0x80000000) == 0) {
          GameRoutine_1341d60(*v17, 0);
          GameRoutine_9723f0(*(unsigned int*)(v19 + 84));
        }
        ++v17;
      } while (v17 != v18);
      v17 = v25;
    }
    if (v17 != nullptr) {
      v26 = v17;
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v20 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v20, v17);
    }
  LABEL_39:
    if (*v3 != 0) {
      GameRoutine_134a4a0(*(_QWORD*)(*v3 + 8));
    }
    GameRoutine_972290(0);
    GameRoutine_972290(1);
    GameRoutine_972290(2);
    GameRoutine_972290(3);
    GameRoutine_972290(4);
    GameRoutine_972290(5);
    GameRoutine_972290(6);
    GameRoutine_972290(7);
    GameRoutine_972290(8);
    v21 = GameData_21caab0;
    if (GameData_21caab0 != 0) {
      v22 = *(_DWORD*)(GameData_21caab0 + 92);
      *(_QWORD*)(GameData_21caab0 + 16) = 0;
      *(_DWORD*)(v21 + 92) = v22 & 0xFFFFF861;
    }
    result = GameRoutine_134d2e0(*(_QWORD*)(*v3 + 8));
    if ((*(_BYTE*)(v2 + 309) & 1) == 0 &&
        (GameData_21ee260 == 0 ||
         *(__int16*)(GameData_21ee260 + 22) *
                 *(__int16*)(GameData_21ee260 + 20) *
                 *(__int16*)(GameData_21ee260 + 24) ==
             0 ||
         ((__int64)*(__int16*)(GameData_21ee260 + 10) << 24) +
                 ((__int64)*(__int16*)(GameData_21ee260 + 8) << 32) +
                 ((__int64)*(__int16*)(GameData_21ee260 + 12) << 18) +
                 ((__int64)*(__int16*)(GameData_21ee260 + 14) << 12) +
                 ((__int64)*(__int16*)(GameData_21ee260 + 16) << 6) +
                 *(__int16*)(GameData_21ee260 + 18) <
             (unsigned __int64)(((__int64)*(__int16*)(GameData_21ee260 + 22)
                                 << 24) +
                                ((__int64)*(__int16*)(GameData_21ee260 + 20)
                                 << 32) +
                                ((__int64)*(__int16*)(GameData_21ee260 + 24)
                                 << 18) +
                                ((__int64)*(__int16*)(GameData_21ee260 + 26)
                                 << 12) +
                                ((__int64)*(__int16*)(GameData_21ee260 + 28)
                                 << 6) +
                                *(__int16*)(GameData_21ee260 + 30)))) {
      result = GameRoutine_134e220(result);
      if ((result & 1) != 0) {
        *(_DWORD*)(v2 + 152) = 6;
        return result;
      }
      result = GameRoutine_134c680();
      if (result != 0) {
        result = GameRoutine_718130(result, 0);
        if ((result & 1) != 0) {
          *(_DWORD*)(v2 + 152) = 5;
          return result;
        }
      }
    }
    if (GameData_21ee260 != 0) {
      v23 = (int*)(v2 + 152);
      if (*(__int16*)(GameData_21ee260 + 22) *
              *(__int16*)(GameData_21ee260 + 20) *
              *(__int16*)(GameData_21ee260 + 24) !=
          0) {
        v24 = 2;
      LABEL_54:
        *v23 = v24;
        return result;
      }
    }
    else {
      v23 = (int*)(v2 + 152);
    }
    v24 = 4;
    goto LABEL_54;
  }
  return result;
}

__int64 GameHr_887e60()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21f1648 + 8);
  result = GameRoutine_a2f660(GameData_2265ef8);
  *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 0;
  *(_BYTE*)(v0 + 56) = 1;
  return result;
}

__int64 GameHr_888030()
{
  __int64 v0;
  __int64 v1;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21f1648 + 8);
  GameRoutine_a2d080(GameData_2265ef8);
  v1 = GameData_21f1648;
  *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 1;
  result = GameRoutine_15317a0(*(_QWORD*)(v1 + 8) + 40LL);
  *(_BYTE*)(v0 + 56) = 0;
  return result;
}

int* GameHr_89ef30(int* result, int* a2, int* a3, int* a4, __int64 a5)
{
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v5 = *a2;
  v6 = *result;
  v7 = *(_QWORD*)(*(_QWORD*)a5 + 8LL);
  v8 = *(_QWORD*)(GameData_21c99b8 + 64);
  v9 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v8 +
                                        8LL * *(unsigned __int16*)(v7 +
                                                                   12LL * *a2 +
                                                                   4)) +
                             24LL) +
                  608LL);
  v10 = *a3;
  v11 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v8 +
                                         8LL * *(unsigned __int16*)(v7 +
                                                                    12LL * *a3 +
                                                                    4)) +
                              24LL) +
                   608LL);
  if (v9 >=
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v8 +
                                       8LL *
                                           *(unsigned __int16*)(v7 +
                                                                12LL * *result +
                                                                4)) +
                            24LL) +
                 608LL)) {
    if (v11 >= v9) {
      v12 = *a3;
      goto LABEL_13;
    }
    *a2 = v10;
    *a3 = v5;
    v13 = *result;
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL * *a2 +
                                                                  4)) +
                              24LL) +
                   608LL) >=
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL *
                                                                      *result +
                                                                  4)) +
                              24LL) +
                   608LL)) {
      v12 = v5;
      v10 = v5;
      goto LABEL_13;
    }
    *result = *a2;
    *a2 = v13;
    v10 = *a3;
    goto LABEL_11;
  }
  v12 = *result;
  if (v11 >= v9) {
    *result = v5;
    *a2 = v6;
    v10 = *a3;
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL * *a3 +
                                                                  4)) +
                              24LL) +
                   608LL) <
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL * v6 +
                                                                  4)) +
                              24LL) +
                   608LL)) {
      *a2 = v10;
      goto LABEL_9;
    }
  LABEL_11:
    v12 = v10;
    goto LABEL_13;
  }
  *result = v10;
LABEL_9:
  *a3 = v6;
  v10 = v6;
LABEL_13:
  if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL *
                                           *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                               a5 +
                                                                           8LL) +
                                                                12LL * *a4 +
                                                                4)) +
                            24LL) +
                 608LL) <
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL *
                                           *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                               a5 +
                                                                           8LL) +
                                                                12LL * v12 +
                                                                4)) +
                            24LL) +
                 608LL)) {
    *a3 = *a4;
    *a4 = v10;
    v14 = *a2;
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL * *a3 +
                                                                  4)) +
                              24LL) +
                   608LL) <
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL * *a2 +
                                                                  4)) +
                              24LL) +
                   608LL)) {
      *a2 = *a3;
      *a3 = v14;
      v15 = *result;
      if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                   a5 +
                                                                               8LL) +
                                                                    12LL * *a2 +
                                                                    4)) +
                                24LL) +
                     608LL) <
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                   a5 +
                                                                               8LL) +
                                                                    12LL *
                                                                        *result +
                                                                    4)) +
                                24LL) +
                     608LL)) {
        *result = *a2;
        *a2 = v15;
      }
    }
  }
  return result;
}

__int64 GameHr_8b0370(__int64 result, int a2)
{
  int v2;
  __int64 v3;

  if (a2 == 0) {
    return 0;
  }
  if (GameData_21caab0 != 0) {
    v2 = (*(_DWORD*)(GameData_21caab0 + 72) + a2) &
         ~((*(_DWORD*)(GameData_21caab0 + 72) + a2) >> 31);
    if (v2 >= 9999999) {
      v2 = 9999999;
    }
    *(_DWORD*)(GameData_21caab0 + 72) = v2;
  }
  if (result != 0) {
    v3 = GameRoutine_1a070b0();
    GameRoutine_80e330(v3, "FF_Positive1");
    return v3;
  }
  return result;
}

__int64 GameHr_8c9b80()
{
  __int64* v0;
  __int64 v1;
  int v2;
  char v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;

  if (GameData_21caab0 == 0) {
    goto LABEL_20;
  }
  v0 = (__int64*)GameData_21f2288;
  v1 = GameData_21f2290;
  if (GameData_21f2288 == GameData_21f2290) {
    v3 = 0;
    v2 = 0;
  }
  else {
    v2 = 0;
    v3 = 0;
    do {
      v4 = *v0;
      v6 = GameData_21caab0 != 0 &&
           (v5 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                    *(_QWORD*)(v4 + 24) + 40LL)) != 0 &&
           *(_DWORD*)(v5 + 32) != 0;
      v7 = (unsigned __int16)GameRoutine_8c77c0(v4);
      if (v6 || v7 == 0) {
        v3 |= v7 == 0;
        v2 += 1 << (10 * *(_BYTE*)(v4 + 64) - 10);
      }
      ++v0;
    } while (v0 != (__int64*)v1);
  }
  v8 = GameRoutine_9a28e0(14);
  v9 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    v10 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v8);
    if (v10 == 0) {
      if (v2 > 0) {
        goto LABEL_18;
      }
    LABEL_20:
      v3 = 0;
      return v3 & 1;
    }
    v9 = *(_DWORD*)(v10 + 32);
  }
  if (v9 >= v2) {
    goto LABEL_20;
  }
LABEL_18:
  v11 = GameRoutine_9a28e0(14);
  GameRoutine_716d80(v11, (unsigned int)v2);
  return v3 & 1;
}

#pragma GCC visibility pop
