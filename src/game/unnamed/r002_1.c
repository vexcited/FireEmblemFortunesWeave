#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1ad36ea;

extern _UNKNOWN GameData_1af8f9c;

extern _DWORD GameData_1b39518[24];

extern __int64 GameData_1fb5cb0;

extern __int64 (*GameData_1fb6260[])();

extern __int64 GameData_1fb8da0;

extern __int64 (*GameData_1fb8e38[])();

extern __int64 (*GameData_202cb08[])();

extern __int64 GameData_212bf68;

extern _UNKNOWN* GameData_212c540;

extern __int64 GameData_212c6a0[3];

extern __int64* GameData_212c790;

extern __int64* GameData_212ce80[5];

extern __int64 GameData_212cf60;

extern __int64* GameData_212d708;

extern __int64* GameData_212d728[2];

extern __int64 GameData_212dbb8[9];

extern __int64 GameData_212dc30[8];

extern __int64* GameData_212de58[3];

extern __int64* GameData_212e008[9];

extern __int128 GameData_21a6120;

extern _UNKNOWN GameData_21a6130;

extern __int64 GameData_21c9608;

extern __int64 GameData_21caab0;

extern __int64 GameData_21ee260;

extern __int64 GameData_21f1618;

extern __int64 GameData_21f3c98;

extern __int64 GameData_21f3ca8;

extern __int64 GameData_21f3cd0;

extern __int64 GameData_21f3d10;

extern __int64 GameData_21f81b0;

__int64 GameRoutine_120e900(void);

__int64 GameRoutine_1317f10(_QWORD, _QWORD);

__int64 GameRoutine_13305c0(_QWORD);

__int64 GameRoutine_1341640(_QWORD);

__int64 GameRoutine_13460a0(_QWORD);

_QWORD* GameRoutine_134bbe0(_QWORD* __return_ptr, _QWORD);

__int64 GameRoutine_134c680(void);

__int64 GameRoutine_134d2e0(_QWORD);

__int64 GameRoutine_1384630(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_14a9f60(_QWORD);

__int64 GameRoutine_17b95c0(_QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09d30(_QWORD, _QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_200();

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_6e2ce0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_716d80(_QWORD, _QWORD);

__int64 GameRoutine_718130(_QWORD, _QWORD);

__int64 GameRoutine_7a86e0(_QWORD, _QWORD);

float GameRoutine_7c4d10(__int64, float, float);

__int64 GameRoutine_828dc0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_869280(_QWORD, _QWORD);

__int64 GameRoutine_88d160(void);

__int64 GameRoutine_90c9e0(_QWORD);

__int64 GameRoutine_913ca0(_QWORD, _QWORD);

__int64 GameRoutine_960f80(_QWORD);

__int64 GameRoutine_995200(_QWORD);

__int64 GameRoutine_9d3c00(_QWORD);

__int64 GameRoutine_9db9e0(_QWORD, _QWORD);

__int64 GameRoutine_9dbdc0(_QWORD);

__int64 GameRoutine_d54c90(_QWORD);

__int64 GameRoutine_d55030(_QWORD);

__int64 GameRoutine_d551a0(_QWORD);

__int64 GameRoutine_d7ad40(_QWORD);

__int64 GameHr_884920(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* i;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64** v20;
  __int64** v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 (**v25)();
  __int64 (**v26)();
  __int64 (**v27)();
  __int64 (*v28)();
  __int64 (*v29)();
  __int64 v30;
  __int64 v31;
  bool v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 (**v55)();
  __int64 (**v56)();
  __int64 (***v57)();

  v1 = result;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    for (i = v5 + 1;; ++i) {
      v6 = (_QWORD*)*(i - 1);
      if (v6[12] == 0 && v6[69] == 0) {
        break;
      }
    }
  }
  else {
    v6 = (_QWORD*)*v5;
    if (*(_DWORD*)(*v5 + 84) != v4) {
      v7 = v5 + 1;
      do {
        v8 = *v7++;
        v6 = (_QWORD*)v8;
      } while (*(_DWORD*)(v8 + 84) != v4);
    }
  }
  if (v6[1] == 0) {
    *(_DWORD*)(result + 152) = 13;
    return result;
  }
  if (*(_BYTE*)(result + 309) == 1) {
    v10 = *(__int64**)(v3 + 16);
    if (v4 < 0) {
      for (; v5 != v10; ++v5) {
        v11 = (__int64*)*v5;
        if (*(_QWORD*)(*v5 + 96) == 0 && v11[69] == 0) {
          goto LABEL_34;
        }
      }
    }
    else if (v5 != v10) {
      while (1) {
        v12 = *v5++;
        v11 = (__int64*)v12;
        if (*(_DWORD*)(v12 + 84) == v4) {
          break;
        }
        if (v5 == v10) {
          goto LABEL_30;
        }
      }
    LABEL_34:
      v24 = *v11;
      goto LABEL_35;
    }
  LABEL_30:
    v24 = GameRoutine_13305c0(result);
  LABEL_35:
    GameRoutine_134bbe0(&v55, v24);
    v25 = v55;
    v26 = v56;
    if (v55 != v56) {
      v27 = v55;
      do {
        v28 = *v27;
        GameRoutine_1341640(*v27);
        v29 = v28;
        if (*((_QWORD*)v28 + 4) != *((_QWORD*)v28 + 3)) {
          if ((v30 = *((_QWORD*)v28 + 12), v31 = *((_QWORD*)v28 + 69),
               (v30 | v31) == 0) ||
              v30 == 0 &&
                  (v31 != 0 ? (v32 = *((_QWORD*)v28 + 13) == 0) : (v32 = false),
                   v32 &&
                       *((__int16*)v28 + 321) * *((__int16*)v28 + 320) *
                               *((__int16*)v28 + 322) ==
                           0 &&
                       *(_QWORD*)(v31 + 352) == 0) ||
              (v29 = v28, (*((_WORD*)v28 + 272) & 3) != 2)) {
            v29 = *((__int64 (**)())v28 + 3);
          }
        }
        if (*(_BYTE*)(*(_QWORD*)v29 + 113LL) == 1 &&
            *((_BYTE*)v28 + 512) != 0) {
          v33 = GameData_21f1618;
          *((_BYTE*)v28 + 512) = 0;
          if (v33 != 0) {
            GameRoutine_995200((char*)v28 + 112);
          }
        }
        ++v27;
      } while (v27 != v26);
    }
    if (v25 != nullptr) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v34 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v34, v25);
    }
    goto LABEL_81;
  }
  if (v4 < 0) {
    do {
      do {
        v16 = *v5++;
      } while (*(_QWORD*)(v16 + 96) != 0);
    } while (*(_QWORD*)(v16 + 552) != 0);
  }
  else {
    v14 = (__int64*)*v5;
    v13 = v5 + 1;
    if (*((_DWORD*)v14 + 21) != v4) {
      do {
        v15 = *v13++;
      } while (*(_DWORD*)(v15 + 84) != v4);
    }
  }
  v17 = ((__int64 (*)(void))GameRoutine_1341640)();
  v18 = *(_QWORD*)(*v2 + 8);
  v19 = *(_DWORD*)(v18 + 56);
  v20 = *(__int64***)(v18 + 8);
  v21 = *(__int64***)(v18 + 16);
  if (v19 < 0) {
    for (; v20 != v21; ++v20) {
      v22 = *v20;
      if ((*v20)[12] == 0 && v22[69] == 0) {
        goto LABEL_63;
      }
    }
  LABEL_59:
    v35 = GameRoutine_13305c0(v17);
    goto LABEL_64;
  }
  if (v20 == v21) {
    goto LABEL_59;
  }
  while (1) {
    v23 = *v20++;
    v22 = v23;
    if (*((_DWORD*)v23 + 21) == v19) {
      break;
    }
    if (v20 == v21) {
      goto LABEL_59;
    }
  }
LABEL_63:
  v35 = *v22;
LABEL_64:
  if (*(_BYTE*)(v35 + 113) != 1) {
    goto LABEL_81;
  }
  v36 = *(_QWORD*)(*v2 + 8);
  v37 = *(_DWORD*)(v36 + 56);
  v38 = *(__int64**)(v36 + 8);
  v39 = *(__int64**)(v36 + 16);
  if (v37 < 0) {
    if (v38 == v39) {
    LABEL_71:
      v40 = 0;
      if (*(_BYTE*)GameRoutine_200 == 0) {
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    while (1) {
      v40 = *v38;
      if (*(_QWORD*)(*v38 + 96) == 0 && *(_QWORD*)(v40 + 552) == 0) {
        break;
      }
      if (++v38 == v39) {
        goto LABEL_71;
      }
    }
  }
  else if (v38 == v39) {
    v40 = 0;
  }
  else {
    while (1) {
      v41 = *v38++;
      v40 = v41;
      if (*(_DWORD*)(v41 + 84) == v37) {
        break;
      }
      if (v38 == v39) {
        goto LABEL_71;
      }
    }
  }
  if (*(_BYTE*)(v40 + 512) != 0) {
  LABEL_79:
    *(_BYTE*)(v40 + 512) = 0;
    if (GameData_21f1618 != 0) {
      GameRoutine_995200(v40 + 112);
    }
  }
LABEL_81:
  v42 = *(_QWORD*)(*v2 + 8);
  v57 = &v55;
  v55 = GameData_202cb08;
  GameRoutine_13460a0(&v55);
  if (v57 == &v55) {
    v43 = 4;
    goto LABEL_85;
  }
  if (v57 != nullptr) {
    v43 = 5;
  LABEL_85:
    (*v57)[v43]();
  }
  *(_BYTE*)(v42 + 60) = 0;
  v44 = GameRoutine_134c680();
  if (v44 != 0 && (GameRoutine_718130(v44, 0) & 1) != 0) {
    v45 = 5;
  }
  else if (*(_BYTE*)(v1 + 309) == 1) {
    v45 = 2;
  }
  else {
    v45 = 13;
  }
  *(_DWORD*)(v1 + 152) = v45;
  v46 = *v2;
  *(_DWORD*)(v1 + 292) = 0;
  v47 = *(_QWORD*)(v46 + 8);
  v48 = *(__int64**)(v47 + 8);
  v49 = *(__int64**)(v47 + 16);
  v50 = *(_DWORD*)(v47 + 56);
  if ((v50 & 0x80000000) == 0) {
    if (v48 == v49) {
      goto LABEL_103;
    }
    while (1) {
      v52 = *v48++;
      v51 = v52;
      if (*(_DWORD*)(v52 + 84) == v50) {
        goto LABEL_102;
      }
      if (v48 == v49) {
        goto LABEL_103;
      }
    }
  }
  if (v48 != v49) {
    while (1) {
      v51 = *v48;
      if (*(_QWORD*)(*v48 + 96) == 0 && *(_QWORD*)(v51 + 552) == 0) {
        break;
      }
      if (++v48 == v49) {
        goto LABEL_103;
      }
    }
  LABEL_102:
    GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v51 + 48);
    v47 = *(_QWORD*)(*v2 + 8);
  }
LABEL_103:
  result = GameRoutine_134d2e0(v47);
  v53 = GameData_212d728[0];
  v54 = *GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5837LL) = 1;
  *(_DWORD*)(*(_QWORD*)(v54 + 8) + 5856LL) |= 0x10u;
  if (GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 3) {
    result = GameRoutine_14a9f60(result);
  }
  if (*(_BYTE*)(v1 + 309) == 1) {
    *(_DWORD*)(*(_QWORD*)(*v2 + 8) + 56LL) = -1;
    *(_BYTE*)(*(_QWORD*)(*v53 + 8) + 5844LL) = 0;
    *(_BYTE*)(v1 + 309) = 0;
  }
  return result;
}

__int64 GameHr_90dac0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  _QWORD v15[2];

  if ((GameRoutine_90c9e0(a2) & 1) != 0) {
    v4 = *(_QWORD*)(a2 + 16);
    if (v4 != 0) {
      v5 = GameRoutine_9dbdc0(v4);
      if (GameData_21caab0 != 0) {
        v6 = 90;
        if (*(_BYTE*)(GameData_21caab0 + 13) == 0) {
          v6 = 88;
        }
        v7 = 92;
        if (*(_BYTE*)(GameData_21caab0 + 13) != 2) {
          v7 = v6;
        }
      }
      else {
        v7 = 88;
      }
      v13 = *(unsigned __int16*)(v4 + v7);
      if ((_BYTE)v5 != 0) {
        v13 = (unsigned int)GameRoutine_9db9e0(v5, v13);
      }
    }
    else {
      v13 = 0;
    }
    *(_DWORD*)(a1 + 108) += v13;
  }
  else {
    v8 = *(_DWORD*)(a1 + 104);
    v9 = *(_QWORD*)(a2 + 16);
    if (v9 != 0) {
      v10 = GameRoutine_9dbdc0(v9);
      if (GameData_21caab0 != 0) {
        v11 = 90;
        if (*(_BYTE*)(GameData_21caab0 + 13) == 0) {
          v11 = 88;
        }
        v12 = 92;
        if (*(_BYTE*)(GameData_21caab0 + 13) != 2) {
          v12 = v11;
        }
      }
      else {
        v12 = 88;
      }
      v13 = *(unsigned __int16*)(v9 + v12);
      if ((_BYTE)v10 != 0) {
        v13 = (unsigned int)GameRoutine_9db9e0(v10, v13);
      }
    }
    else {
      v13 = 0;
    }
    *(_DWORD*)(a1 + 104) = (v8 - v13) & ~((v8 - (int)v13) >> 31);
  }
  v15[1] = &GameData_1af8f9c;
  result = GameRoutine_7a86e0(&GameData_1af8f9c, v13);
  v15[0] = result;
  if (GameData_21caab0 != 0) {
    return GameRoutine_828dc0(*(_QWORD*)(GameData_21caab0 + 48), v15, 1);
  }
  return result;
}

__int64 GameHr_9146d0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  void* v6;

  v6 = &GameData_1ad36ea;
  result = GameRoutine_7a86e0(&GameData_1ad36ea, a2);
  v5 = result;
  if (GameData_21caab0 != 0) {
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v5);
    if (result != 0 && *(int*)(result + 32) >= 1) {
      v6 = &GameData_1ad36ea;
      v5 = GameRoutine_7a86e0(&GameData_1ad36ea, v3);
      result = GameRoutine_716d80(&v5, 0);
      v4 = *(_QWORD*)(GameData_21c9608 + 328);
      if ((v4 & 0x10) != 0) {
        *(_QWORD*)(GameData_21c9608 + 328) = v4 & 0xFFFFFFFFFFFFFFEFLL;
      }
    }
  }
  return result;
}

__int64 GameHr_914770()
{
  __int64 v0;
  __int64 result;

  if (*(_DWORD*)(GameData_21f3d10 + 136) == 1) {
    v0 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v0 & 8) == 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v0 | 8;
      return GameRoutine_120e900();
    }
  }
  return result;
}

__int64 GameHr_9149c0()
{
  __int64 v0;

  v0 = *(_QWORD*)(GameData_21f3c98 + 96);
  GameRoutine_d7ad40(v0);
  return *(unsigned __int8*)(v0 + 76);
}

__int64 GameHr_914cc0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;

  if (*(_QWORD*)(GameData_21c9608 + 240) !=
      *(_QWORD*)(GameData_21c9608 + 232)) {
    result = GameRoutine_913ca0(GameData_21f3cd0, GameData_21c9608 + 232);
    v1 = GameData_21c9608;
    v3 = *(_QWORD*)(GameData_21c9608 + 232);
    v2 = *(_QWORD*)(GameData_21c9608 + 240);
    if (v3 != v2) {
      v4 = *(_QWORD*)(GameData_21c9608 + 240);
      v5 = GameData_212bf68;
      do {
        v6 = *(_BYTE*)(v4 - 24);
        v4 -= 24;
        if ((v6 & 1) != 0) {
          v7 = *(_QWORD*)(v2 - 8);
          if (v7 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            result = GameRoutine_1a0a4e0(*(_QWORD*)v5 + v8, v7);
          }
        }
        v2 = v4;
      } while (v4 != v3);
    }
    *(_QWORD*)(v1 + 240) = v3;
  }
  return result;
}

__int64 GameHr_915ee0()
{
  __int64 v0;
  unsigned __int16* v1;
  int v2;
  __int64* v3;
  __int64 v4;
  __int64 result;

  v0 = *(_QWORD*)GameData_212c6a0[0];
  if (GameData_21ee260 != 0) {
    v1 = (unsigned __int16*)(GameData_21ee260 + 8);
  }
  else {
    v1 = (unsigned __int16*)GameData_212cf60;
  }
  v2 = ((__int16)v1[1] << 14) + (*v1 << 20) + ((__int16)v1[2] << 8);
  if (*(_DWORD*)(v0 + 320) != v2) {
    v3 = (__int64*)GameData_212dc30[0];
    *(_DWORD*)(v0 + 320) = v2;
    v4 = *v3;
    result = GameRoutine_d55030(*(_QWORD*)GameData_212dbb8[0]);
    ++*(_QWORD*)(v4 + 72);
  }
  return result;
}

__int64 GameHr_915f80()
{
  __int64 v0;
  __int16* v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64 result;

  v0 = *(_QWORD*)GameData_212c6a0[0];
  v1 = (__int16*)GameData_212cf60;
  if (GameData_21ee260 != 0) {
    v1 = (__int16*)(GameData_21ee260 + 8);
  }
  v2 = v1[1];
  v3 = *v1;
  v4 = v1[2];
  if (v2 * v3 * v4 != 0) {
    v5 = GameData_1b39518[v1[3] % 24];
  }
  else {
    v5 = -1;
  }
  v6 = (v2 << 14) + (v3 << 20) + (v4 << 8) + v5;
  if (*(_DWORD*)(v0 + 324) != v6) {
    v7 = (__int64*)GameData_212dc30[0];
    *(_DWORD*)(v0 + 324) = v6;
    v8 = *v7;
    result = GameRoutine_d551a0(*(_QWORD*)GameData_212dbb8[0]);
    ++*(_QWORD*)(v8 + 80);
  }
  return result;
}

__int64 GameHr_917cd0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float* v4;
  _BOOL4 v5;
  __int64 v6;

  v0 = GameData_21f3ca8;
  v1 = *(_QWORD*)(GameData_21f3ca8 + 16);
  v2 = *(_QWORD*)(v1 + 24);
  if (v2 != 0 && (v3 = GameRoutine_1a0a0c0(v2)) != 0) {
    v4 = *(float**)(v1 + 16);
    v5 = v4 != nullptr && ((*(_BYTE*)(*(_QWORD*)v4 + 12LL) & 1) != 0 ||
                           v4[8] < *(float*)(*(_QWORD*)v4 + 8LL));
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      GameRoutine_1a09c50(v6);
    }
  }
  else {
    v5 = false;
  }
  return *(float*)(v0 + 8) > 0.0 || v5;
}

__int64 GameHr_919100(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int16* v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_d54c90(*(_QWORD*)GameData_212dbb8[0]);
  v4 = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(v4 + 20) == 1) {
    result = GameData_21ee260;
    v5 = GameData_212cf60;
    v6 = (__int16*)(GameData_21ee260 + 8);
    if (GameData_21ee260 == 0) {
      v6 = (__int16*)GameData_212cf60;
    }
    if (v6[5] + ((__int64)v6[4] << 6) + ((__int64)v6[3] << 12) +
            ((__int64)v6[2] << 18) + ((__int64)v6[1] << 24) +
            ((__int64)*v6 << 32) <=
        (unsigned __int64)(((__int64)*(__int16*)(v4 + 10) << 24) +
                           ((__int64)*(__int16*)(v4 + 8) << 32) +
                           ((__int64)*(__int16*)(v4 + 12) << 18) +
                           ((__int64)*(__int16*)(v4 + 14) << 12) +
                           ((__int64)*(__int16*)(v4 + 16) << 6) +
                           *(__int16*)(v4 + 18))) {
      if (GameData_21ee260 == 0 ||
          (result = GameRoutine_869280(GameData_21ee260, v4 + 8),
           *(_BYTE*)((v4 = *(_QWORD*)(a1 + 16)) + 20) == 1)) {
        *(_BYTE*)(v4 + 20) = 0;
      }
      if (GameData_21caab0 != 0) {
        result = *(_QWORD*)(GameData_21caab0 + 24);
        if (result != 0) {
          result = GameRoutine_88d160();
          if ((result & 1) != 0) {
            if (GameData_21ee260 != 0) {
              v7 = GameData_21ee260 + 8;
            }
            else {
              v7 = v5;
            }
            return GameRoutine_17b95c0(v1, v7);
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_960d20(__int128* a1, _BYTE** a2, int a3, int a4, int a5, int a6)
{
  __int64 v9;
  float v10;
  __int64 v11;
  float v12;
  float v13;
  __int128 v14;
  __int128 v15;
  float v16;
  float v17;
  __int128 v18;
  __int128 v19;
  float v20;
  _BYTE* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  _QWORD* v28;
  int v29;
  __int64 result;
  float v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  float v36;
  int v37;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v32 = a4;
    v33 = a3;
    v37 = a6;
    v34 = GameRoutine_1a09fd0(&GameData_21a6130);
    a6 = v37;
    a3 = v33;
    a4 = v32;
    if (v34 != 0) {
      v35 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v35;
      GameRoutine_1a09fe0(&GameData_21a6130);
      a6 = v37;
      a3 = v33;
      a4 = v32;
    }
  }
  v9 = *((_QWORD*)&GameData_21a6120 + 1);
  *((_WORD*)a1 + 12) = 0;
  *((_QWORD*)a1 + 1) = v9;
  *((float*)a1 + 4) = (float)a5;
  *((float*)a1 + 5) = (float)a6;
  *(_QWORD*)a1 = GameData_21a6120;
  v10 = (float)((float)((float)(a3 + 256) * 5.0) + 2.5) + -1280.0;
  v11 = *GameData_212ce80[0];
  v12 = (float)((float)((float)(a4 + 256) * 5.0) + 2.5) + -1280.0;
  if (*GameData_212ce80[0] != 0) {
    v36 = (float)((float)((float)(a4 + 256) * 5.0) + 2.5) + -1280.0;
    v13 = GameRoutine_7c4d10(
        *(_QWORD*)(v11 + 61456),
        (float)((float)((float)(a3 + 256) * 5.0) + 2.5) + -1280.0, v12);
    v12 = v36;
  }
  else {
    v13 = 0.0;
  }
  *(float*)a1 = v10;
  *((float*)a1 + 1) = v13;
  v14 = *a1;
  *(_QWORD*)&v15 = *(_QWORD*)a1;
  *((_QWORD*)&v15 + 1) = LODWORD(v12);
  *a1 = v15;
  if (a5 >= 2) {
    v16 = (float)(unsigned int)(a5 - 1) * 2.5;
    v17 = v16 + v12;
    *(float*)a1 = v16 + *(float*)&v14;
    v18 = *a1;
    *(_QWORD*)&v19 = *(_QWORD*)a1;
    *((_QWORD*)&v19 + 1) = LODWORD(v17);
    *a1 = v19;
    if (v11 != 0) {
      v20 = GameRoutine_7c4d10(*(_QWORD*)(v11 + 61456), *(float*)&v18, v17);
    }
    else {
      v20 = 0.0;
    }
    *((float*)a1 + 1) = v20;
  }
  v21 = *a2;
  if (v21 != nullptr && (v22 = *(_QWORD*)(*GameData_212de58[0] + 112),
                         (v23 = *(_QWORD*)(v22 + 24)) != 0)) {
    v24 = 0;
    if (*v21 != 0) {
      v25 = *(_DWORD*)(v22 + 32);
      if (v25 != 0) {
        v26 = 0;
        while (1) {
          v27 = (v25 + v26) >> 1;
          v28 = (_QWORD*)(v23 + 336LL * v27);
          v29 = GameRoutine_1a09d30(*v28, v21);
          if (v29 == 0) {
            break;
          }
          if (v29 < 0) {
            v26 = v27 + 1;
          }
          else {
            v25 = (v25 + v26) >> 1;
          }
          if (v26 == v25) {
            goto LABEL_20;
          }
        }
        v24 = v28[14];
      }
    }
  }
  else {
  LABEL_20:
    v24 = 0;
  }
  result = GameRoutine_960f80(v24);
  if ((unsigned __int8)result == 2) {
    v31 = 2.5;
  }
  else {
    if ((unsigned __int8)result != 3) {
      return result;
    }
    v31 = 5.0;
  }
  *((float*)a1 + 1) = v31 + *((float*)a1 + 1);
  return result;
}

float GameHr_9a2630(float* a1, float* a2, char a3, char a4)
{
  float result;
  float v5;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;

  result = *a2;
  v5 = a2[1];
  if (*a2 == 1.0 && v5 == 1.0 && a2[2] == 1.0 && a2[3] == 1.0 && a2[4] == 1.0 &&
      a2[5] == 1.0 && a2[6] == 1.0 && a2[7] == 1.0 && a2[8] == 1.0) {
    return result;
  }
  if ((a3 & 1) == 0) {
    if (result < 1.0) {
      a1[3] = result * a1[3];
      goto LABEL_34;
    }
    v14 = result + -1.0;
  LABEL_33:
    a1[2] = v14 + a1[2];
    goto LABEL_34;
  }
  if (v5 >= 1.0) {
    v14 = v5 + -1.0;
    goto LABEL_33;
  }
  a1[3] = v5 * a1[3];
LABEL_34:
  v15 = a2[4];
  if (v15 >= 1.0) {
    a1[6] = (float)(v15 + -1.0) + a1[6];
  }
  else {
    a1[7] = v15 * a1[7];
  }
  v16 = a2[6];
  if (v16 >= 1.0) {
    a1[10] = (float)(v16 + -1.0) + a1[10];
  }
  else {
    a1[11] = v16 * a1[11];
  }
  v17 = a2[7];
  if (v17 >= 1.0) {
    a1[22] = (float)(v17 + -1.0) + a1[22];
  }
  else {
    a1[23] = v17 * a1[23];
  }
  v18 = a2[8];
  if (v18 >= 1.0) {
    a1[14] = (float)(v18 + -1.0) + a1[14];
  }
  else {
    a1[15] = v18 * a1[15];
  }
  v19 = a2[5];
  if (v19 >= 1.0) {
    a1[18] = (float)(v19 + -1.0) + a1[18];
    if ((a4 & 1) == 0) {
    LABEL_48:
      v20 = a2[2];
      if (v20 >= 1.0) {
        result = (float)(v20 + -1.0) + a1[26];
        a1[26] = result;
      }
      else {
        result = v20 * a1[27];
        a1[27] = result;
      }
      return result;
    }
  }
  else {
    a1[19] = v19 * a1[19];
    if ((a4 & 1) == 0) {
      goto LABEL_48;
    }
  }
  v21 = a2[3];
  if (v21 >= 1.0) {
    result = (float)(v21 + -1.0) + a1[30];
    a1[30] = result;
  }
  else {
    result = v21 * a1[31];
    a1[31] = result;
  }
  return result;
}

_QWORD* GameHr_9c0b20(__int64* a1)
{
  __int64 v1;
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  __int64 v13;

  v1 = *a1;
  a1[2] = a1[1];
  result = v11;
  v4 = *(_QWORD*)(v1 + 256);
  v3 = *(_QWORD*)(v1 + 264);
  v11[0] = GameData_1fb6260;
  v12 = v11;
  if (v3 == v4) {
    goto LABEL_12;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  do {
    v7 = *(_QWORD*)(v4 + 8 * v5);
    if (v7 != 0) {
      v8 = GameRoutine_1a0a6c0(v7, v6, &GameData_1fb5cb0, 0);
      if (v8 == 0) {
        goto LABEL_3;
      }
      v13 = v8;
      if (v12 == nullptr) {
        GameRoutine_60a310(0, v9);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v12 + 48LL))(v12, &v13) & 1) !=
          0) {
        break;
      }
      v4 = *(_QWORD*)(v1 + 256);
      v3 = *(_QWORD*)(v1 + 264);
    }
  LABEL_3:
    ++v5;
  } while (v5 < (v3 - v4) >> 3);
  result = v12;
  if (v12 != v11) {
    if (v12 != nullptr) {
      v10 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v10))(result);
    }
    return result;
  }
LABEL_12:
  v10 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v10))(result);
}

__int64 GameHr_9d47c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[4];
  _QWORD* v21;
  __int64 v22;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 336);
  if (v2 == 0) {
    return 2;
  }
  v3 = GameRoutine_1a0a6c0(v2, GameData_212e008[0], &GameData_1fb8da0, 0);
  if (v3 == 0) {
    return 2;
  }
  v4 = v3;
  if (GameData_21caab0 == 0) {
    goto LABEL_9;
  }
  v5 = *(_DWORD*)(GameData_21caab0 + 80);
  v6 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21f81b0);
  if (v6 != 0) {
    v7 = *(_DWORD*)(v6 + 32);
    v8 = GameData_21caab0;
    if (GameData_21caab0 != 0) {
    LABEL_6:
      v9 = (v5 - v7) & ~((v5 - v7) >> 31);
      if (v9 >= 99999) {
        v9 = 99999;
      }
      *(_DWORD*)(v8 + 80) = v9;
    }
  }
  else {
    v7 = 0;
    v8 = GameData_21caab0;
    if (GameData_21caab0 != 0) {
      goto LABEL_6;
    }
  }
LABEL_9:
  GameRoutine_6e2ce0(*(_QWORD*)(v4 + 88), *(_QWORD*)(v4 + 2320), 0);
  *(_BYTE*)(v4 + 82) = 0;
  v10 = v20;
  *(_DWORD*)(v1 + 1344) = 0;
  v12 = *(_QWORD*)(v1 + 232);
  v11 = *(_QWORD*)(v1 + 240);
  v20[0] = GameData_1fb8e38;
  v21 = v20;
  if (v11 == v12) {
    goto LABEL_20;
  }
  v13 = 0;
  v14 = GameData_212e008[0];
  do {
    v15 = *(_QWORD*)(v12 + 8 * v13);
    if (v15 != 0) {
      v16 = GameRoutine_1a0a6c0(v15, v14, &GameData_1fb8da0, 0);
      if (v16 == 0) {
        goto LABEL_11;
      }
      v22 = v16;
      if (v21 == nullptr) {
        GameRoutine_60a310(0, v17);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v21 + 48LL))(v21, &v22) & 1) !=
          0) {
        break;
      }
      v12 = *(_QWORD*)(v1 + 232);
      v11 = *(_QWORD*)(v1 + 240);
    }
  LABEL_11:
    ++v13;
  } while (v13 < (v11 - v12) >> 3);
  v10 = v21;
  if (v21 != v20) {
    if (v21 != nullptr) {
      v18 = 40;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
LABEL_20:
  v18 = 32;
LABEL_21:
  (*(void (**)(_QWORD*))(*v10 + v18))(v10);
LABEL_22:
  GameRoutine_9d3c00(v1);
  (*(void (**)(__int64))(*(_QWORD*)v1 + 704LL))(v1);
  GameRoutine_1384630(v1, v4 + 96, *(_QWORD*)(v4 + 88));
  return 2;
}

#pragma GCC visibility pop
