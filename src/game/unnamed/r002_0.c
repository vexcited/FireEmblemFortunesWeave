#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1b01648[4];

extern __int64 (*GameData_1f999c8[])();

extern __int64 (*GameData_1f99a48[])();

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

extern __int64* GameData_212c868;

extern __int64* GameData_212c880[5];

extern __int64* GameData_212ce90[3];

extern __int64* GameData_212ce98[2];

extern __int64* GameData_212cfc0[10];

extern __int64* GameData_212cfd0[8];

extern __int64* GameData_212d000[2];

extern __int64 GameData_212d270;

extern __int64* GameData_212d660[5];

extern __int64* GameData_212d668[4];

extern __int64* GameData_212d6a8;

extern _UNKNOWN* GameData_212d6b0;

extern __int64* GameData_2132010[2];

extern int GameData_21668d0;

extern __int64 GameData_21c9988;

extern __int64 GameData_21c99b0;

extern __int64 GameData_21c99b8;

extern __int64 GameData_21caab0;

extern __int64 GameData_21cd108;

extern __int64 GameData_21cd120;

extern __int64 GameData_21cd128;

extern __int64 GameData_21cd130;

extern __int64 GameData_21cd138;

extern __int64 GameData_21cd140;

extern __int64 GameData_21cd158;

extern __int64 GameData_21d1e40;

extern __int64 GameData_21d1e50;

extern int GameData_21d87f8;

extern __int64 GameData_21d8800;

extern __int64 GameData_21d8808;

extern int GameData_21d8828;

extern __int64 GameData_21d8830;

extern __int64 GameData_21d8838;

extern __int64 GameData_21d99a8;

extern __int64 GameData_21d99b0;

extern __int64 GameData_21d9c88;

extern __int64 GameData_21d9cb8;

extern __int64 GameData_21d9cc8;

extern __int64 GameData_21d9ce8;

extern __int64 GameData_21d9d00;

extern __int64 GameData_21d9d18;

extern __int64 GameData_21d9d60;

extern int GameData_21d9d7c;

extern __int64 GameData_21ee240;

extern __int64 GameData_21ee260;

extern __int64 GameData_21eea58;

extern __int64 GameData_21f1648;

extern __int64 GameData_21f2288;

extern __int64 GameData_21f2290;

extern __int64 GameData_21f49b8;

extern __int64 GameData_22400f8;

extern __int64 GameData_2258ba8;

extern __int64 GameData_2265ef8;

__int64 GameRoutine_10cb00(_QWORD, _QWORD);

__int64 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_122ece0(_QWORD);

__int64 GameRoutine_122f000(_QWORD);

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

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_66aae0(_QWORD);

__int64 GameRoutine_682780(_QWORD);

__int64 GameRoutine_6e2a20(_QWORD);

__int64 GameRoutine_6e2b60(_QWORD);

__int64 GameRoutine_6ea8c0(_QWORD);

__int64 GameRoutine_6ead60(_QWORD, _QWORD);

__int64 GameRoutine_6fc510(_QWORD);

__int64 GameRoutine_6fcdd0(_QWORD, _QWORD);

__int64 GameRoutine_7150e0(void);

__int64 GameRoutine_716d80(_QWORD, _QWORD);

__int64 GameRoutine_718130(_QWORD, _QWORD);

__int64 GameRoutine_72a260(_QWORD);

__int64 GameRoutine_72b4a0(_QWORD);

__int64 GameRoutine_72b6c0(_QWORD);

__int64 GameRoutine_76bcd0(_QWORD, _QWORD, _QWORD, float);

__int64 GameRoutine_7a86e0(_QWORD, _QWORD);

__int64 GameRoutine_7aa840(__int64 result, __int64, double, double, double,
                           double, double, long double);

__int64 GameRoutine_7cb0c0(_QWORD);

__int64 GameRoutine_7d2180(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_7d6200(_QWORD, _QWORD);

__int64 GameRoutine_7e73c0(_QWORD);

__int64 GameRoutine_7ea0c0(__int64 result);

__int64 GameRoutine_7ea4e0(_QWORD);

__int64 GameRoutine_7ea680(_QWORD);

__int64 GameRoutine_7ea800(__int64 result);

__int64 GameRoutine_7f2a20(_QWORD, _QWORD);

__int64 GameRoutine_7f2ec0(_QWORD);

__int64 GameRoutine_7fe910(_QWORD, _QWORD);

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

__int64 GameRoutine_9bcfa0(_QWORD, _QWORD);

__int64 GameRoutine_9bd480(_QWORD);

__int64 GameRoutine_a2d080(_QWORD);

__int64 GameRoutine_a2d1c0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a2f660(_QWORD);

__int64 GameRoutine_c8b5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);

__int64 GameRoutine_d2f6f0(_QWORD);

__int64 GameHr_7b60f0(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  _QWORD v13[4];
  _QWORD* v14;

  v1 = result;
  if (GameData_21caab0 != 0) {
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d1e50);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      return result;
    }
    if (GameData_21caab0 != 0) {
      result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                  &GameData_21d1e50);
      if ((result == 0 || *(_DWORD*)(result + 32) == 0) &&
          GameData_21caab0 != 0) {
        result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                    &GameData_21d1e40);
        if (result != 0 && *(_DWORD*)(result + 32) != 0) {
          return result;
        }
      }
    }
  }
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v2 = *(_DWORD*)(GameData_21ee240 + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return result;
    }
  }
  result = GameData_21cd108;
  if ((*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF) == 0) {
    return result;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                  8LL * (*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF));
  if (v4 == 0 || *(_QWORD*)(v4 + 96) == 0) {
    return result;
  }
  result = GameData_21cd108 + 8;
  if (*(_BYTE*)(GameData_21cd108 + 8) != 0 &&
      (result = GameRoutine_6ea8c0(result)) != 0 &&
      (v5 = *(_QWORD*)(result + 440)) != 0) {
    v6 = *(_BYTE*)(v5 + 16);
  }
  else {
    v6 = 9;
  }
  if (((1 << v6) & 6) == 0 || *(_QWORD*)(v4 + 96) == 0) {
    return result;
  }
  v7 = GameRoutine_9bd480(v1);
  v13[0] = GameData_1f999c8;
  v14 = v13;
  v8 = GameRoutine_9bcfa0(v7, v13);
  v11[0] = GameData_1f99a48;
  v11[1] = v4;
  v12 = v11;
  GameRoutine_9bcfa0(v8, v11);
  if (v12 == v11) {
    v9 = 32;
    goto LABEL_30;
  }
  if (v12 != nullptr) {
    v9 = 40;
  LABEL_30:
    (*(void (**)(void))(*v12 + v9))();
  }
  result = (__int64)v14;
  if (v14 == v13) {
    v10 = 32;
  }
  else {
    if (v14 == nullptr) {
      return result;
    }
    v10 = 40;
  }
  return (*(__int64 (**)(void))(*v14 + v10))();
}

__int64 GameHr_7b6ce0(__int64 result, __int64 a2, unsigned __int64 a3,
                      double a4, double a5, double a6, double a7, double a8,
                      long double a9)
{
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  int v14;
  unsigned __int8* v15;
  _DWORD* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  bool v23;

  v9 = GameData_212c880[0];
  v10 = *(_DWORD*)a3 & 0xFFF;
  v11 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v12 = *(_QWORD*)(*(_QWORD*)(v11 + 8 * v10) + 832LL);
  if (v12 != 0 && *(_WORD*)(v12 + 32) != 0) {
    v13 = **(_BYTE***)(v12 + 40);
    if (v13 != nullptr && a2 != 0 && *(_BYTE*)(result + 23032) != 0) {
      v14 = (unsigned __int8)*v13;
      if (*v13 != 0) {
        v15 = v13 + 1;
        v16 = (_DWORD*)a3;
        LODWORD(a3) = 0;
        do {
          a3 = (unsigned int)(v14 - a3 + 32 * a3);
          v17 = *v15++;
          v14 = v17;
        } while (v17 != 0);
      }
      else {
        v16 = (_DWORD*)a3;
        a3 = 0;
      }
      v18 = result;
      v19 = a2;
      GameRoutine_76bcd0(result, a2, a3,
                         *(float*)(*(_QWORD*)GameData_212d270 + 456LL));
      result = v18;
      a2 = v19;
      v11 = *(_QWORD*)(*v9 + 64);
      v10 = *v16 & 0xFFF;
    }
  }
  v20 = *(_QWORD*)(v11 + 8 * v10);
  v21 = *(_QWORD*)(v20 + 856);
  v22 = *(unsigned __int16*)(v20 + 656);
  v23 = v21 != 0 && v22 == 0;
  if (v23 && a2 != 0 && *(_BYTE*)(result + 23032) != 0) {
    return GameRoutine_7aa840(v21, a2, a4, a5, a6, a7, a8, a9);
  }
  return result;
}

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

__int64 GameHr_7d2100(__int64 a1, unsigned int* a2, unsigned int* a3)
{
  __int64 result;

  result = GameRoutine_7d2180(*(_QWORD*)(a1 + 8), *a2, *a3,
                              *(_QWORD*)(*(_QWORD*)(a1 + 16) + 56LL));
  if ((result & 1) == 0) {
    **(_BYTE**)(a1 + 24) = 0;
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

__int64 GameHr_7fd6e0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      __int64 a6)
{
  _WORD* v6;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  unsigned __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  signed int v23;
  int v24;
  int v25;
  signed int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  signed int v41;
  int v42;
  int v43;
  int v44;
  signed int v45;
  unsigned int v46;
  int v47;
  signed int v48;
  int v49;
  int v50;
  int v51;
  signed int v52;
  unsigned int v53;
  int v54;
  signed int v55;
  int v56;
  int v57;
  int v58;
  signed int v59;
  unsigned int v60;
  int v61;
  signed int v62;
  int v63;
  int v64;
  int v65;
  signed int v66;
  unsigned int v67;
  int v68;
  signed int v69;
  int v70;
  int v71;
  int v72;
  signed int v73;
  unsigned int v74;
  int v75;
  signed int v76;
  int v77;
  int v78;
  int v79;
  signed int v80;
  unsigned int v81;
  int v82;
  signed int v83;
  int v84;
  int v85;
  int v86;
  signed int v87;
  unsigned int v88;
  int v89;
  signed int v90;
  int v91;
  int v92;
  int v93;
  signed int v94;
  unsigned int v95;
  int v96;
  signed int v97;
  int v98;
  int v99;
  int v100;
  signed int v101;
  unsigned int v102;
  int v103;
  signed int v104;
  int v105;
  int v106;
  int v107;
  signed int v108;
  unsigned int v109;
  int v110;
  signed int v111;
  int v112;
  int v113;
  int v114;
  signed int v115;
  unsigned int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  unsigned int v121;
  int v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  int v126;
  int v127;
  int* v128;
  int v129;
  unsigned __int64 v130;
  int v131;
  __int64 v132;
  signed int v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  signed int v142;
  unsigned int v143;
  int v144;
  __int64 v145;
  __int64 v146;
  int v147;
  int* v148;
  int v149;
  unsigned __int64 v150;
  int v151;
  __int64 v152;
  signed int v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  signed int v162;
  unsigned int v163;
  int v164;
  int v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int16 v170;
  __int64 v171;
  int v172;
  int* v173;
  unsigned __int64 v174;
  int v175;
  __int64 v176;
  int v177;
  signed int v178;
  int v179;
  int v180;
  signed int v181;
  unsigned int v182;
  int v183;
  __int64 v184;
  __int64 v185;
  int v186;
  int v187;
  int v188;
  signed int v189;
  int v190;
  int v191;
  signed int v192;
  unsigned int v193;
  int v194;
  __int64 v195;
  __int64 v196;
  int v197;
  int v198;
  int v199;
  signed int v200;
  int v201;
  int v202;
  signed int v203;
  unsigned int v204;
  int v205;
  __int64 v206;
  __int64 v207;
  int v208;
  int v209;
  int v210;
  signed int v211;
  int v212;
  int v213;
  signed int v214;
  unsigned int v215;
  int v216;
  __int64 v217;
  __int64 v218;
  int v219;
  int v220;
  int v221;
  signed int v222;
  int v223;
  int v224;
  signed int v225;
  unsigned int v226;
  int v227;
  __int64 v228;
  __int64 v229;
  int v230;
  int v231;
  int v232;
  signed int v233;
  int v234;
  int v235;
  signed int v236;
  unsigned int v237;
  int v238;
  __int64 v239;
  __int64 v240;
  int v241;
  int v242;
  int v243;
  signed int v244;
  int v245;
  int v246;
  signed int v247;
  unsigned int v248;
  int v249;
  __int64 v250;
  __int64 v251;
  int v252;
  int v253;
  int v254;
  signed int v255;
  int v256;
  int v257;
  signed int v258;
  unsigned int v259;
  int v260;
  __int64 v261;
  __int64 v262;
  int v263;
  int v264;
  int v265;
  signed int v266;
  int v267;
  int v268;
  signed int v269;
  unsigned int v270;
  int v271;
  __int64 v272;
  __int64 v273;
  int v274;
  int v275;
  int v276;
  signed int v277;
  int v278;
  int v279;
  signed int v280;
  unsigned int v281;
  int v282;
  __int64 v283;
  __int64 v284;
  int v285;
  int v286;
  int v287;
  signed int v288;
  int v289;
  int v290;
  signed int v291;
  unsigned int v292;
  int v293;
  __int64 v294;
  __int64 v295;
  int v296;
  int v297;
  int v298;
  signed int v299;
  int v300;
  int v301;
  signed int v302;
  unsigned int v303;
  int v304;
  __int64 v305;
  __int64 v306;
  int v307;
  int v308;
  int v309;
  int v310;
  int v311;
  int v312;
  unsigned int v313;
  int v314;
  __int64 v315;
  __int64 v316;
  int v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int16 v323;
  int v325;

  *(_QWORD*)(a1 + 2) = 0;
  v6 = (_WORD*)(a1 + 2);
  *(_QWORD*)(a1 + 33) = 0;
  *(_QWORD*)(a1 + 18) = 0;
  *(_QWORD*)(a1 + 26) = 0;
  *(_QWORD*)(a1 + 10) = 0;
  if (*GameData_212c868 != 0) {
    v11 = *(_QWORD*)(a1 + 48);
    v10 = a1 + 48;
    v12 = (*(_QWORD*)(a1 + 56) - v11) >> 1;
    v13 = (int)((__int64)(*(_QWORD*)(*GameData_212c868 + 72) -
                          *(_QWORD*)(*GameData_212c868 + 64)) >>
                3);
    if (v13 != v12) {
      if (v13 <= v12) {
        if (v13 < v12) {
          *(_QWORD*)(a1 + 56) = v11 + 2 * v13;
        }
      }
      else {
        GameRoutine_7fe910(v10, v13 - v12);
      }
    }
  }
  v14 = *(_QWORD*)(a1 + 48);
  v15 = *(_QWORD*)(a1 + 56);
  if (v14 != v15) {
    GameRoutine_1a0ba50(v14, 0, v15 - v14, a4, a5, a6);
  }
  v16 = (int*)GameData_21d99a8;
  v17 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v17 >= 12) {
    v18 = 12;
  }
  else {
    v18 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  }
  v19 = GameData_21d99a8 + 4LL * v18;
  v20 = *(_DWORD*)(v19 - 4);
  v21 = v20 & (v20 >> 31);
  *(_WORD*)(a1 + 2) = v20 & (v20 >> 31);
  if ((int)v17 <= 0) {
    *(_BYTE*)(a1 + 28) = 0;
    LOBYTE(v29) = 0;
    v30 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 29) = 0;
    *(_WORD*)(a1 + 4) = v30 & (v30 >> 31);
    v31 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 30) = 0;
    *(_WORD*)(a1 + 6) = v31 & (v31 >> 31);
    v32 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 31) = 0;
    *(_WORD*)(a1 + 8) = v32 & (v32 >> 31);
    v33 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 32) = 0;
    *(_WORD*)(a1 + 10) = v33 & (v33 >> 31);
    v34 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 33) = 0;
    *(_WORD*)(a1 + 12) = v34 & (v34 >> 31);
    v35 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 34) = 0;
    *(_WORD*)(a1 + 14) = v35 & (v35 >> 31);
    v36 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 35) = 0;
    *(_WORD*)(a1 + 16) = v36 & (v36 >> 31);
    v37 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 36) = 0;
    *(_WORD*)(a1 + 18) = v37 & (v37 >> 31);
    v38 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 37) = 0;
    *(_WORD*)(a1 + 20) = v38 & (v38 >> 31);
    v39 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 38) = 0;
    *(_WORD*)(a1 + 22) = v39 & (v39 >> 31);
    v40 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 39) = 0;
    *(_WORD*)(a1 + 24) = v40 & (v40 >> 31);
    *(_WORD*)(a1 + 26) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
  }
  else {
    v22 = v17 - 1;
    v23 = 0;
    v24 = v16[(unsigned int)(v17 - 1)];
    if (v24 >= v21) {
      v24 = v21;
    }
    if (v21 >= *v16) {
      v25 = v24;
    }
    else {
      v25 = *v16;
    }
    v26 = v17;
    while (1) {
      v27 = (unsigned int)(v23 + v26) >> 1;
      v28 = v16[v27];
      if (v25 == v28) {
        break;
      }
      if (v25 < v28) {
        v26 = (unsigned int)(v23 + v26) >> 1;
      }
      else {
        v23 = v27 + 1;
      }
      if (v23 >= v26) {
        goto LABEL_27;
      }
    }
    LOBYTE(v23) = v27 + 1;
  LABEL_27:
    *(_BYTE*)(a1 + 28) = v23;
    v41 = 0;
    v42 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 4) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v43 = v16[v22];
    if (v43 >= v42) {
      v43 = v42;
    }
    if (v42 >= *v16) {
      v44 = v43;
    }
    else {
      v44 = *v16;
    }
    v45 = v17;
    while (1) {
      v46 = (unsigned int)(v41 + v45) >> 1;
      v47 = v16[v46];
      if (v44 == v47) {
        break;
      }
      if (v44 < v47) {
        v45 = (unsigned int)(v41 + v45) >> 1;
      }
      else {
        v41 = v46 + 1;
      }
      if (v41 >= v45) {
        goto LABEL_40;
      }
    }
    LOBYTE(v41) = v46 + 1;
  LABEL_40:
    *(_BYTE*)(a1 + 29) = v41;
    v48 = 0;
    v49 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 6) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v50 = v16[v22];
    if (v50 >= v49) {
      v50 = v49;
    }
    if (v49 >= *v16) {
      v51 = v50;
    }
    else {
      v51 = *v16;
    }
    v52 = v17;
    while (1) {
      v53 = (unsigned int)(v48 + v52) >> 1;
      v54 = v16[v53];
      if (v51 == v54) {
        break;
      }
      if (v51 < v54) {
        v52 = (unsigned int)(v48 + v52) >> 1;
      }
      else {
        v48 = v53 + 1;
      }
      if (v48 >= v52) {
        goto LABEL_53;
      }
    }
    LOBYTE(v48) = v53 + 1;
  LABEL_53:
    *(_BYTE*)(a1 + 30) = v48;
    v55 = 0;
    v56 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 8) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v57 = v16[v22];
    if (v57 >= v56) {
      v57 = v56;
    }
    if (v56 >= *v16) {
      v58 = v57;
    }
    else {
      v58 = *v16;
    }
    v59 = v17;
    while (1) {
      v60 = (unsigned int)(v55 + v59) >> 1;
      v61 = v16[v60];
      if (v58 == v61) {
        break;
      }
      if (v58 < v61) {
        v59 = (unsigned int)(v55 + v59) >> 1;
      }
      else {
        v55 = v60 + 1;
      }
      if (v55 >= v59) {
        goto LABEL_66;
      }
    }
    LOBYTE(v55) = v60 + 1;
  LABEL_66:
    *(_BYTE*)(a1 + 31) = v55;
    v62 = 0;
    v63 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 10) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v64 = v16[v22];
    if (v64 >= v63) {
      v64 = v63;
    }
    if (v63 >= *v16) {
      v65 = v64;
    }
    else {
      v65 = *v16;
    }
    v66 = v17;
    while (1) {
      v67 = (unsigned int)(v62 + v66) >> 1;
      v68 = v16[v67];
      if (v65 == v68) {
        break;
      }
      if (v65 < v68) {
        v66 = (unsigned int)(v62 + v66) >> 1;
      }
      else {
        v62 = v67 + 1;
      }
      if (v62 >= v66) {
        goto LABEL_79;
      }
    }
    LOBYTE(v62) = v67 + 1;
  LABEL_79:
    *(_BYTE*)(a1 + 32) = v62;
    v69 = 0;
    v70 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 12) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v71 = v16[v22];
    if (v71 >= v70) {
      v71 = v70;
    }
    if (v70 >= *v16) {
      v72 = v71;
    }
    else {
      v72 = *v16;
    }
    v73 = v17;
    while (1) {
      v74 = (unsigned int)(v69 + v73) >> 1;
      v75 = v16[v74];
      if (v72 == v75) {
        break;
      }
      if (v72 < v75) {
        v73 = (unsigned int)(v69 + v73) >> 1;
      }
      else {
        v69 = v74 + 1;
      }
      if (v69 >= v73) {
        goto LABEL_92;
      }
    }
    LOBYTE(v69) = v74 + 1;
  LABEL_92:
    *(_BYTE*)(a1 + 33) = v69;
    v76 = 0;
    v77 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 14) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v78 = v16[v22];
    if (v78 >= v77) {
      v78 = v77;
    }
    if (v77 >= *v16) {
      v79 = v78;
    }
    else {
      v79 = *v16;
    }
    v80 = v17;
    while (1) {
      v81 = (unsigned int)(v76 + v80) >> 1;
      v82 = v16[v81];
      if (v79 == v82) {
        break;
      }
      if (v79 < v82) {
        v80 = (unsigned int)(v76 + v80) >> 1;
      }
      else {
        v76 = v81 + 1;
      }
      if (v76 >= v80) {
        goto LABEL_105;
      }
    }
    LOBYTE(v76) = v81 + 1;
  LABEL_105:
    *(_BYTE*)(a1 + 34) = v76;
    v83 = 0;
    v84 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 16) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v85 = v16[v22];
    if (v85 >= v84) {
      v85 = v84;
    }
    if (v84 >= *v16) {
      v86 = v85;
    }
    else {
      v86 = *v16;
    }
    v87 = v17;
    while (1) {
      v88 = (unsigned int)(v83 + v87) >> 1;
      v89 = v16[v88];
      if (v86 == v89) {
        break;
      }
      if (v86 < v89) {
        v87 = (unsigned int)(v83 + v87) >> 1;
      }
      else {
        v83 = v88 + 1;
      }
      if (v83 >= v87) {
        goto LABEL_118;
      }
    }
    LOBYTE(v83) = v88 + 1;
  LABEL_118:
    *(_BYTE*)(a1 + 35) = v83;
    v90 = 0;
    v91 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 18) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v92 = v16[v22];
    if (v92 >= v91) {
      v92 = v91;
    }
    if (v91 >= *v16) {
      v93 = v92;
    }
    else {
      v93 = *v16;
    }
    v94 = v17;
    while (1) {
      v95 = (unsigned int)(v90 + v94) >> 1;
      v96 = v16[v95];
      if (v93 == v96) {
        break;
      }
      if (v93 < v96) {
        v94 = (unsigned int)(v90 + v94) >> 1;
      }
      else {
        v90 = v95 + 1;
      }
      if (v90 >= v94) {
        goto LABEL_131;
      }
    }
    LOBYTE(v90) = v95 + 1;
  LABEL_131:
    *(_BYTE*)(a1 + 36) = v90;
    v97 = 0;
    v98 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 20) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v99 = v16[v22];
    if (v99 >= v98) {
      v99 = v98;
    }
    if (v98 >= *v16) {
      v100 = v99;
    }
    else {
      v100 = *v16;
    }
    v101 = v17;
    while (1) {
      v102 = (unsigned int)(v97 + v101) >> 1;
      v103 = v16[v102];
      if (v100 == v103) {
        break;
      }
      if (v100 < v103) {
        v101 = (unsigned int)(v97 + v101) >> 1;
      }
      else {
        v97 = v102 + 1;
      }
      if (v97 >= v101) {
        goto LABEL_144;
      }
    }
    LOBYTE(v97) = v102 + 1;
  LABEL_144:
    *(_BYTE*)(a1 + 37) = v97;
    v104 = 0;
    v105 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 22) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v106 = v16[v22];
    if (v106 >= v105) {
      v106 = v105;
    }
    if (v105 >= *v16) {
      v107 = v106;
    }
    else {
      v107 = *v16;
    }
    v108 = v17;
    while (1) {
      v109 = (unsigned int)(v104 + v108) >> 1;
      v110 = v16[v109];
      if (v107 == v110) {
        break;
      }
      if (v107 < v110) {
        v108 = (unsigned int)(v104 + v108) >> 1;
      }
      else {
        v104 = v109 + 1;
      }
      if (v104 >= v108) {
        goto LABEL_157;
      }
    }
    LOBYTE(v104) = v109 + 1;
  LABEL_157:
    *(_BYTE*)(a1 + 38) = v104;
    v111 = 0;
    v112 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 24) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v113 = v16[v22];
    if (v113 >= v112) {
      v113 = v112;
    }
    if (v112 >= *v16) {
      v114 = v113;
    }
    else {
      v114 = *v16;
    }
    v115 = v17;
    while (1) {
      v116 = (unsigned int)(v111 + v115) >> 1;
      v117 = v16[v116];
      if (v114 == v117) {
        break;
      }
      if (v114 < v117) {
        v115 = (unsigned int)(v111 + v115) >> 1;
      }
      else {
        v111 = v116 + 1;
      }
      if (v111 >= v115) {
        goto LABEL_170;
      }
    }
    LOBYTE(v111) = v116 + 1;
  LABEL_170:
    *(_BYTE*)(a1 + 39) = v111;
    v29 = 0;
    v118 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 26) = v118;
    v119 = v16[v22];
    if (v119 >= v118) {
      v119 = v118;
    }
    if (v118 >= *v16) {
      v120 = v119;
    }
    else {
      v120 = *v16;
    }
    while (1) {
      v121 = (unsigned int)(v29 + v17) >> 1;
      v122 = v16[v121];
      if (v120 == v122) {
        break;
      }
      if (v120 < v122) {
        LODWORD(v17) = (unsigned int)(v29 + v17) >> 1;
      }
      else {
        v29 = v121 + 1;
      }
      if (v29 >= (int)v17) {
        goto LABEL_182;
      }
    }
    LOBYTE(v29) = v121 + 1;
  }
LABEL_182:
  *(_BYTE*)(a1 + 40) = v29;
  v123 = a1 + 28;
  v325 = 0;
  (*(void (**)(__int64, int*))(*(_QWORD*)a2 + 16LL))(a2, &v325);
  if (a3 < 34) {
    v145 = *(int*)(a2 + 20);
    v146 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v145 + 1;
    v147 = *(unsigned __int8*)(v146 + v145);
    if (a3 <= 25) {
      *(_DWORD*)(a2 + 20) = v145 + 2;
      v172 = v147 | (*(unsigned __int8*)(v146 + v145 + 1) << 8);
      v173 = (int*)GameData_21d99a8;
      v174 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v174 >= 12) {
        v175 = 12;
      }
      else {
        v175 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      }
      v176 = GameData_21d99a8 + 4LL * v175;
      v177 = *(_DWORD*)(v176 - 4);
      if (v177 >= v172) {
        v177 = v172;
      }
      *v6 = v177;
      if ((int)v174 < 1) {
        LOBYTE(v178) = 0;
      }
      else {
        v178 = 0;
        v179 = v173[(unsigned int)(v174 - 1)];
        if (v179 >= v177) {
          v179 = v177;
        }
        if (v177 >= *v173) {
          v180 = v179;
        }
        else {
          v180 = *v173;
        }
        v181 = v174;
        while (1) {
          v182 = (unsigned int)(v178 + v181) >> 1;
          v183 = v173[v182];
          if (v180 == v183) {
            break;
          }
          if (v180 < v183) {
            v181 = (unsigned int)(v178 + v181) >> 1;
          }
          else {
            v178 = v182 + 1;
          }
          if (v178 >= v181) {
            goto LABEL_257;
          }
        }
        LOBYTE(v178) = v182 + 1;
      }
    LABEL_257:
      *(_BYTE*)(a1 + 28) = v178;
      v184 = *(int*)(a2 + 20);
      v185 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v184 + 1;
      v186 = *(unsigned __int8*)(v185 + v184);
      *(_DWORD*)(a2 + 20) = v184 + 2;
      v187 = *(_DWORD*)(v176 - 4);
      v188 = v186 | (*(unsigned __int8*)(v185 + v184 + 1) << 8);
      if (v187 >= v188) {
        v187 = v188;
      }
      *(_WORD*)(a1 + 4) = v187;
      if ((int)v174 < 1) {
        LOBYTE(v189) = 0;
      }
      else {
        v189 = 0;
        v190 = v173[(unsigned int)(v174 - 1)];
        if (v190 >= v187) {
          v190 = v187;
        }
        if (v187 >= *v173) {
          v191 = v190;
        }
        else {
          v191 = *v173;
        }
        v192 = v174;
        while (1) {
          v193 = (unsigned int)(v189 + v192) >> 1;
          v194 = v173[v193];
          if (v191 == v194) {
            break;
          }
          if (v191 < v194) {
            v192 = (unsigned int)(v189 + v192) >> 1;
          }
          else {
            v189 = v193 + 1;
          }
          if (v189 >= v192) {
            goto LABEL_274;
          }
        }
        LOBYTE(v189) = v193 + 1;
      }
    LABEL_274:
      *(_BYTE*)(a1 + 29) = v189;
      v195 = *(int*)(a2 + 20);
      v196 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v195 + 1;
      v197 = *(unsigned __int8*)(v196 + v195);
      *(_DWORD*)(a2 + 20) = v195 + 2;
      v198 = *(_DWORD*)(v176 - 4);
      v199 = v197 | (*(unsigned __int8*)(v196 + v195 + 1) << 8);
      if (v198 >= v199) {
        v198 = v199;
      }
      *(_WORD*)(a1 + 6) = v198;
      if ((int)v174 < 1) {
        LOBYTE(v200) = 0;
      }
      else {
        v200 = 0;
        v201 = v173[(unsigned int)(v174 - 1)];
        if (v201 >= v198) {
          v201 = v198;
        }
        if (v198 >= *v173) {
          v202 = v201;
        }
        else {
          v202 = *v173;
        }
        v203 = v174;
        while (1) {
          v204 = (unsigned int)(v200 + v203) >> 1;
          v205 = v173[v204];
          if (v202 == v205) {
            break;
          }
          if (v202 < v205) {
            v203 = (unsigned int)(v200 + v203) >> 1;
          }
          else {
            v200 = v204 + 1;
          }
          if (v200 >= v203) {
            goto LABEL_291;
          }
        }
        LOBYTE(v200) = v204 + 1;
      }
    LABEL_291:
      *(_BYTE*)(a1 + 30) = v200;
      v206 = *(int*)(a2 + 20);
      v207 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v206 + 1;
      v208 = *(unsigned __int8*)(v207 + v206);
      *(_DWORD*)(a2 + 20) = v206 + 2;
      v209 = *(_DWORD*)(v176 - 4);
      v210 = v208 | (*(unsigned __int8*)(v207 + v206 + 1) << 8);
      if (v209 >= v210) {
        v209 = v210;
      }
      *(_WORD*)(a1 + 8) = v209;
      if ((int)v174 < 1) {
        LOBYTE(v211) = 0;
      }
      else {
        v211 = 0;
        v212 = v173[(unsigned int)(v174 - 1)];
        if (v212 >= v209) {
          v212 = v209;
        }
        if (v209 >= *v173) {
          v213 = v212;
        }
        else {
          v213 = *v173;
        }
        v214 = v174;
        while (1) {
          v215 = (unsigned int)(v211 + v214) >> 1;
          v216 = v173[v215];
          if (v213 == v216) {
            break;
          }
          if (v213 < v216) {
            v214 = (unsigned int)(v211 + v214) >> 1;
          }
          else {
            v211 = v215 + 1;
          }
          if (v211 >= v214) {
            goto LABEL_308;
          }
        }
        LOBYTE(v211) = v215 + 1;
      }
    LABEL_308:
      *(_BYTE*)(a1 + 31) = v211;
      v217 = *(int*)(a2 + 20);
      v218 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v217 + 1;
      v219 = *(unsigned __int8*)(v218 + v217);
      *(_DWORD*)(a2 + 20) = v217 + 2;
      v220 = *(_DWORD*)(v176 - 4);
      v221 = v219 | (*(unsigned __int8*)(v218 + v217 + 1) << 8);
      if (v220 >= v221) {
        v220 = v221;
      }
      *(_WORD*)(a1 + 10) = v220;
      if ((int)v174 < 1) {
        LOBYTE(v222) = 0;
      }
      else {
        v222 = 0;
        v223 = v173[(unsigned int)(v174 - 1)];
        if (v223 >= v220) {
          v223 = v220;
        }
        if (v220 >= *v173) {
          v224 = v223;
        }
        else {
          v224 = *v173;
        }
        v225 = v174;
        while (1) {
          v226 = (unsigned int)(v222 + v225) >> 1;
          v227 = v173[v226];
          if (v224 == v227) {
            break;
          }
          if (v224 < v227) {
            v225 = (unsigned int)(v222 + v225) >> 1;
          }
          else {
            v222 = v226 + 1;
          }
          if (v222 >= v225) {
            goto LABEL_325;
          }
        }
        LOBYTE(v222) = v226 + 1;
      }
    LABEL_325:
      *(_BYTE*)(a1 + 32) = v222;
      v228 = *(int*)(a2 + 20);
      v229 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v228 + 1;
      v230 = *(unsigned __int8*)(v229 + v228);
      *(_DWORD*)(a2 + 20) = v228 + 2;
      v231 = *(_DWORD*)(v176 - 4);
      v232 = v230 | (*(unsigned __int8*)(v229 + v228 + 1) << 8);
      if (v231 >= v232) {
        v231 = v232;
      }
      *(_WORD*)(a1 + 12) = v231;
      if ((int)v174 < 1) {
        LOBYTE(v233) = 0;
      }
      else {
        v233 = 0;
        v234 = v173[(unsigned int)(v174 - 1)];
        if (v234 >= v231) {
          v234 = v231;
        }
        if (v231 >= *v173) {
          v235 = v234;
        }
        else {
          v235 = *v173;
        }
        v236 = v174;
        while (1) {
          v237 = (unsigned int)(v233 + v236) >> 1;
          v238 = v173[v237];
          if (v235 == v238) {
            break;
          }
          if (v235 < v238) {
            v236 = (unsigned int)(v233 + v236) >> 1;
          }
          else {
            v233 = v237 + 1;
          }
          if (v233 >= v236) {
            goto LABEL_342;
          }
        }
        LOBYTE(v233) = v237 + 1;
      }
    LABEL_342:
      *(_BYTE*)(a1 + 33) = v233;
      v239 = *(int*)(a2 + 20);
      v240 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v239 + 1;
      v241 = *(unsigned __int8*)(v240 + v239);
      *(_DWORD*)(a2 + 20) = v239 + 2;
      v242 = *(_DWORD*)(v176 - 4);
      v243 = v241 | (*(unsigned __int8*)(v240 + v239 + 1) << 8);
      if (v242 >= v243) {
        v242 = v243;
      }
      *(_WORD*)(a1 + 14) = v242;
      if ((int)v174 < 1) {
        LOBYTE(v244) = 0;
      }
      else {
        v244 = 0;
        v245 = v173[(unsigned int)(v174 - 1)];
        if (v245 >= v242) {
          v245 = v242;
        }
        if (v242 >= *v173) {
          v246 = v245;
        }
        else {
          v246 = *v173;
        }
        v247 = v174;
        while (1) {
          v248 = (unsigned int)(v244 + v247) >> 1;
          v249 = v173[v248];
          if (v246 == v249) {
            break;
          }
          if (v246 < v249) {
            v247 = (unsigned int)(v244 + v247) >> 1;
          }
          else {
            v244 = v248 + 1;
          }
          if (v244 >= v247) {
            goto LABEL_359;
          }
        }
        LOBYTE(v244) = v248 + 1;
      }
    LABEL_359:
      *(_BYTE*)(a1 + 34) = v244;
      v250 = *(int*)(a2 + 20);
      v251 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v250 + 1;
      v252 = *(unsigned __int8*)(v251 + v250);
      *(_DWORD*)(a2 + 20) = v250 + 2;
      v253 = *(_DWORD*)(v176 - 4);
      v254 = v252 | (*(unsigned __int8*)(v251 + v250 + 1) << 8);
      if (v253 >= v254) {
        v253 = v254;
      }
      *(_WORD*)(a1 + 16) = v253;
      if ((int)v174 < 1) {
        LOBYTE(v255) = 0;
      }
      else {
        v255 = 0;
        v256 = v173[(unsigned int)(v174 - 1)];
        if (v256 >= v253) {
          v256 = v253;
        }
        if (v253 >= *v173) {
          v257 = v256;
        }
        else {
          v257 = *v173;
        }
        v258 = v174;
        while (1) {
          v259 = (unsigned int)(v255 + v258) >> 1;
          v260 = v173[v259];
          if (v257 == v260) {
            break;
          }
          if (v257 < v260) {
            v258 = (unsigned int)(v255 + v258) >> 1;
          }
          else {
            v255 = v259 + 1;
          }
          if (v255 >= v258) {
            goto LABEL_376;
          }
        }
        LOBYTE(v255) = v259 + 1;
      }
    LABEL_376:
      *(_BYTE*)(a1 + 35) = v255;
      v261 = *(int*)(a2 + 20);
      v262 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v261 + 1;
      v263 = *(unsigned __int8*)(v262 + v261);
      *(_DWORD*)(a2 + 20) = v261 + 2;
      v264 = *(_DWORD*)(v176 - 4);
      v265 = v263 | (*(unsigned __int8*)(v262 + v261 + 1) << 8);
      if (v264 >= v265) {
        v264 = v265;
      }
      *(_WORD*)(a1 + 18) = v264;
      if ((int)v174 < 1) {
        LOBYTE(v266) = 0;
      }
      else {
        v266 = 0;
        v267 = v173[(unsigned int)(v174 - 1)];
        if (v267 >= v264) {
          v267 = v264;
        }
        if (v264 >= *v173) {
          v268 = v267;
        }
        else {
          v268 = *v173;
        }
        v269 = v174;
        while (1) {
          v270 = (unsigned int)(v266 + v269) >> 1;
          v271 = v173[v270];
          if (v268 == v271) {
            break;
          }
          if (v268 < v271) {
            v269 = (unsigned int)(v266 + v269) >> 1;
          }
          else {
            v266 = v270 + 1;
          }
          if (v266 >= v269) {
            goto LABEL_393;
          }
        }
        LOBYTE(v266) = v270 + 1;
      }
    LABEL_393:
      *(_BYTE*)(a1 + 36) = v266;
      v272 = *(int*)(a2 + 20);
      v273 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v272 + 1;
      v274 = *(unsigned __int8*)(v273 + v272);
      *(_DWORD*)(a2 + 20) = v272 + 2;
      v275 = *(_DWORD*)(v176 - 4);
      v276 = v274 | (*(unsigned __int8*)(v273 + v272 + 1) << 8);
      if (v275 >= v276) {
        v275 = v276;
      }
      *(_WORD*)(a1 + 20) = v275;
      if ((int)v174 < 1) {
        LOBYTE(v277) = 0;
      }
      else {
        v277 = 0;
        v278 = v173[(unsigned int)(v174 - 1)];
        if (v278 >= v275) {
          v278 = v275;
        }
        if (v275 >= *v173) {
          v279 = v278;
        }
        else {
          v279 = *v173;
        }
        v280 = v174;
        while (1) {
          v281 = (unsigned int)(v277 + v280) >> 1;
          v282 = v173[v281];
          if (v279 == v282) {
            break;
          }
          if (v279 < v282) {
            v280 = (unsigned int)(v277 + v280) >> 1;
          }
          else {
            v277 = v281 + 1;
          }
          if (v277 >= v280) {
            goto LABEL_410;
          }
        }
        LOBYTE(v277) = v281 + 1;
      }
    LABEL_410:
      *(_BYTE*)(a1 + 37) = v277;
      v283 = *(int*)(a2 + 20);
      v284 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v283 + 1;
      v285 = *(unsigned __int8*)(v284 + v283);
      *(_DWORD*)(a2 + 20) = v283 + 2;
      v286 = *(_DWORD*)(v176 - 4);
      v287 = v285 | (*(unsigned __int8*)(v284 + v283 + 1) << 8);
      if (v286 >= v287) {
        v286 = v287;
      }
      *(_WORD*)(a1 + 22) = v286;
      if ((int)v174 < 1) {
        LOBYTE(v288) = 0;
      }
      else {
        v288 = 0;
        v289 = v173[(unsigned int)(v174 - 1)];
        if (v289 >= v286) {
          v289 = v286;
        }
        if (v286 >= *v173) {
          v290 = v289;
        }
        else {
          v290 = *v173;
        }
        v291 = v174;
        while (1) {
          v292 = (unsigned int)(v288 + v291) >> 1;
          v293 = v173[v292];
          if (v290 == v293) {
            break;
          }
          if (v290 < v293) {
            v291 = (unsigned int)(v288 + v291) >> 1;
          }
          else {
            v288 = v292 + 1;
          }
          if (v288 >= v291) {
            goto LABEL_427;
          }
        }
        LOBYTE(v288) = v292 + 1;
      }
    LABEL_427:
      *(_BYTE*)(a1 + 38) = v288;
      v294 = *(int*)(a2 + 20);
      v295 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v294 + 1;
      v296 = *(unsigned __int8*)(v295 + v294);
      *(_DWORD*)(a2 + 20) = v294 + 2;
      v297 = *(_DWORD*)(v176 - 4);
      v298 = v296 | (*(unsigned __int8*)(v295 + v294 + 1) << 8);
      if (v297 >= v298) {
        v297 = v298;
      }
      *(_WORD*)(a1 + 24) = v297;
      if ((int)v174 < 1) {
        LOBYTE(v299) = 0;
      }
      else {
        v299 = 0;
        v300 = v173[(unsigned int)(v174 - 1)];
        if (v300 >= v297) {
          v300 = v297;
        }
        if (v297 >= *v173) {
          v301 = v300;
        }
        else {
          v301 = *v173;
        }
        v302 = v174;
        while (1) {
          v303 = (unsigned int)(v299 + v302) >> 1;
          v304 = v173[v303];
          if (v301 == v304) {
            break;
          }
          if (v301 < v304) {
            v302 = (unsigned int)(v299 + v302) >> 1;
          }
          else {
            v299 = v303 + 1;
          }
          if (v299 >= v302) {
            goto LABEL_444;
          }
        }
        LOBYTE(v299) = v303 + 1;
      }
    LABEL_444:
      *(_BYTE*)(a1 + 39) = v299;
      v305 = *(int*)(a2 + 20);
      v306 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v305 + 1;
      v307 = *(unsigned __int8*)(v306 + v305);
      *(_DWORD*)(a2 + 20) = v305 + 2;
      v308 = *(_DWORD*)(v176 - 4);
      v309 = v307 | (*(unsigned __int8*)(v306 + v305 + 1) << 8);
      if (v308 < v309) {
        v309 = v308;
      }
      *(_WORD*)(a1 + 26) = v309;
      if ((int)v174 < 1) {
        *(_BYTE*)(a1 + 40) = 0;
      }
      else {
        v310 = 0;
        v311 = v173[(unsigned int)(v174 - 1)];
        if (v311 >= v309) {
          v311 = v309;
        }
        if (v309 >= *v173) {
          v312 = v311;
        }
        else {
          v312 = *v173;
        }
        while (1) {
          v313 = (unsigned int)(v310 + v174) >> 1;
          v314 = v173[v313];
          if (v312 == v314) {
            break;
          }
          if (v312 < v314) {
            LODWORD(v174) = (unsigned int)(v310 + v174) >> 1;
          }
          else {
            v310 = v313 + 1;
          }
          if (v310 >= (int)v174) {
            goto LABEL_460;
          }
        }
        LOBYTE(v310) = v313 + 1;
      LABEL_460:
        *(_BYTE*)(a1 + 40) = v310;
      }
    }
    else if (*(_BYTE*)(v146 + v145) != 0) {
      v148 = (int*)GameData_21d99a8;
      v149 = 0;
      v150 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v150 >= 12) {
        v151 = 12;
      }
      else {
        v151 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      }
      v152 = GameData_21d99a8 + 4LL * v151;
      do {
        v154 = *(int*)(a2 + 20);
        v155 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v154 + 1;
        v156 = *(unsigned __int8*)(v155 + v154);
        *(_DWORD*)(a2 + 20) = v154 + 2;
        v157 = *(unsigned __int8*)(v155 + v154 + 1);
        *(_DWORD*)(a2 + 20) = v154 + 3;
        v158 = v157 | (*(unsigned __int8*)(v155 + v154 + 2) << 8);
        v159 = *(_DWORD*)(v152 - 4);
        if (v159 >= v158) {
          v159 = v158;
        }
        v6[v156] = v159;
        if ((int)v150 < 1) {
          LOBYTE(v153) = 0;
        }
        else {
          v160 = v148[(unsigned int)(v150 - 1)];
          v153 = 0;
          if (v160 >= v159) {
            v160 = v159;
          }
          if (v159 >= *v148) {
            v161 = v160;
          }
          else {
            v161 = *v148;
          }
          v162 = v150;
          while (1) {
            v163 = (unsigned int)(v153 + v162) >> 1;
            v164 = v148[v163];
            if (v161 == v164) {
              break;
            }
            if (v161 < v164) {
              v162 = (unsigned int)(v153 + v162) >> 1;
            }
            else {
              v153 = v163 + 1;
            }
            if (v153 >= v162) {
              goto LABEL_213;
            }
          }
          LOBYTE(v153) = v163 + 1;
        }
      LABEL_213:
        ++v149;
        *(_BYTE*)(v123 + v156) = v153;
      } while (v149 != v147);
    }
    v315 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v315 + 1;
    v316 = *(_QWORD*)(a2 + 8);
    v317 = *(unsigned __int8*)(v316 + v315);
    if (*(_BYTE*)(v316 + v315) != 0) {
      do {
        while (1) {
          v318 = GameRoutine_6e2b60(a2);
          if (v318 != 0) {
            break;
          }
          *(_DWORD*)(a2 + 20) += 2;
          if (--v317 == 0) {
            return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2,
                                                                           0);
          }
        }
        v319 = *(int*)(a2 + 20);
        v320 = *(_QWORD*)(a2 + 8);
        v321 = *(unsigned __int16*)(v318 + 16);
        v322 = *(_QWORD*)(a1 + 48);
        *(_DWORD*)(a2 + 20) = v319 + 1;
        v323 = *(unsigned __int8*)(v320 + v319);
        *(_DWORD*)(a2 + 20) = v319 + 2;
        *(_WORD*)(v322 + 2 * v321) =
            v323 | (*(unsigned __int8*)(v320 + v319 + 1) << 8);
        --v317;
      } while (v317 != 0);
    }
  }
  else {
    v124 = *(int*)(a2 + 20);
    v125 = *(_QWORD*)(a2 + 8);
    v126 = v124 + 1;
    *(_DWORD*)(a2 + 20) = v124 + 1;
    v127 = *(unsigned __int8*)(v125 + v124);
    if (v127 != 0) {
      v128 = (int*)GameData_21d99a8;
      v129 = 0;
      v130 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v130 >= 12) {
        v131 = 12;
      }
      else {
        v131 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      }
      v132 = GameData_21d99a8 + 4LL * v131;
      do {
        v134 = *(int*)(a2 + 20);
        v135 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v134 + 1;
        v136 = *(unsigned __int8*)(v135 + v134);
        *(_DWORD*)(a2 + 20) = v134 + 2;
        v137 = *(unsigned __int8*)(v135 + v134 + 1);
        *(_DWORD*)(a2 + 20) = v134 + 3;
        v138 = v137 | (*(unsigned __int8*)(v135 + v134 + 2) << 8);
        v139 = *(_DWORD*)(v132 - 4);
        if (v139 >= v138) {
          v139 = v138;
        }
        v6[v136] = v139;
        if ((int)v130 < 1) {
          LOBYTE(v133) = 0;
        }
        else {
          v140 = v128[(unsigned int)(v130 - 1)];
          v133 = 0;
          if (v140 >= v139) {
            v140 = v139;
          }
          if (v139 >= *v128) {
            v141 = v140;
          }
          else {
            v141 = *v128;
          }
          v142 = v130;
          while (1) {
            v143 = (unsigned int)(v133 + v142) >> 1;
            v144 = v128[v143];
            if (v141 == v144) {
              break;
            }
            if (v141 < v144) {
              v142 = (unsigned int)(v133 + v142) >> 1;
            }
            else {
              v133 = v143 + 1;
            }
            if (v133 >= v142) {
              goto LABEL_189;
            }
          }
          LOBYTE(v133) = v143 + 1;
        }
      LABEL_189:
        ++v129;
        *(_BYTE*)(v123 + v136) = v133;
      } while (v129 != v127);
      v126 = *(_DWORD*)(a2 + 20);
      v125 = *(_QWORD*)(a2 + 8);
    }
    *(_DWORD*)(a2 + 20) = v126 + 1;
    v165 = *(unsigned __int8*)(v125 + v126);
    if (*(_BYTE*)(v125 + v126) != 0) {
      do {
        while (1) {
          v171 = GameRoutine_6e2a20(a2);
          if (v171 == 0) {
            break;
          }
          v166 = *(int*)(a2 + 20);
          v167 = *(_QWORD*)(a2 + 8);
          v168 = *(unsigned __int16*)(v171 + 16);
          v169 = *(_QWORD*)(a1 + 48);
          *(_DWORD*)(a2 + 20) = v166 + 1;
          v170 = *(unsigned __int8*)(v167 + v166);
          *(_DWORD*)(a2 + 20) = v166 + 2;
          *(_WORD*)(v169 + 2 * v168) =
              v170 | (*(unsigned __int8*)(v167 + v166 + 1) << 8);
          if (--v165 == 0) {
            return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2,
                                                                           0);
          }
        }
        *(_DWORD*)(a2 + 20) += 2;
        --v165;
      } while (v165 != 0);
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
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

__int64 GameHr_847c20()
{
  __int64 v0;
  __int64** v1;
  __int64** v2;
  __int64* v3;
  __int64 v4;
  char v5;
  char v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[7];
  __int16 v11;

  memset(v10, 0, sizeof(v10));
  if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) != 0) {
    GameRoutine_122ece0(v10);
  }
  v0 = *(_QWORD*)(GameData_21cd158 + 16);
  v1 = *(__int64***)(v0 + 32);
  v2 = *(__int64***)(v0 + 40);
  if (v1 == v2) {
    v5 = 0;
  }
  else {
    do {
      v3 = *v1;
      if ((*(int (**)(__int64*))(**v1 + 248))(*v1) > 0 ||
          (v4 = *v3, v11 = 64,
           ((*(__int64 (**)(__int64*, __int16*))(v4 + 784))(v3, &v11) & 1) !=
               0) &&
              (*(int (**)(__int64*))(*v3 + 256))(v3) > 0) {
        v5 = 1;
        goto LABEL_12;
      }
      ++v1;
    } while (v1 != v2);
    v5 = 0;
  LABEL_12:
    v0 = *(_QWORD*)(GameData_21cd158 + 16);
  }
  v6 = GameRoutine_7cb0c0(v0);
  v7 = *GameData_212ce98[0];
  v8 = *(_QWORD*)(*GameData_212ce98[0] + 96);
  GameRoutine_72b4a0(v8);
  GameRoutine_72b6c0(v8);
  GameRoutine_72a260(*(_QWORD*)(v7 + 152));
  if (((v5 & 1) != 0 || (v6 & 1) != 0) && GameData_22400f8 != 0 &&
      *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
  }
  return GameRoutine_122f000(v10);
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
